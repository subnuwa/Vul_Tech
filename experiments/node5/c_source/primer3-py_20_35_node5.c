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

void v_destroy_dpal_arg_holder( long parameter_1);
void v_destroy_dpal_thal_arg_holder();
void v_p3_destroy_global_settings( short parameter_1);
void v_destroy_thal_structures();
short v_p3_get_ol_problem_string( unsigned int parameter_1);
int v_p3_ol_has_any_problem( int parameter_1);
char v_p3_get_rv_intl( char parameter_1);
float v_p3_get_rv_rev( float parameter_1);
int v_p3_get_rv_fwd( long parameter_1);
unsigned int v_p3_oligo_explain_string( unsigned int parameter_1);
long v_p3_get_oligo_array_explain_string( double parameter_1);
long v_print_all_explain( short parameter_1,char parameter_2,short parameter_3,int parameter_4);
void v_print_boulder( int parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
void v_destroy_pr_append_str( int parameter_1);
long v_format_oligos( float parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5,float parameter_6,int parameter_7);
float v_p3_get_rv_best_pairs( int parameter_1);
char v_p3_pair_explain_string( double parameter_1);
void v_p3_get_pair_array_explain_string( short parameter_1);
long v_print_stat_line( double parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6);
unsigned int v_print_explain( char parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6);
void v_print_rest( char parameter_1,unsigned int parameter_2,short parameter_3,short parameter_4);
float v_print_seq_lines( char parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7);
void v_print_seq( char parameter_1,double parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5,short parameter_6,int parameter_7);
unsigned int v_print_2_pair_array( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,long parameter_6,char parameter_7);
float v_print_pair_array( unsigned int parameter_1,short parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,double parameter_6);
float v_print_pair_info( short parameter_1,long parameter_2,short parameter_3);
long v_print_oligo_262( unsigned int parameter_1,char parameter_2,long parameter_3,short parameter_4,int parameter_5,long parameter_6,unsigned int parameter_7,int parameter_8);
double v_print_oligo_header( float parameter_1,short parameter_2,double parameter_3,long parameter_4);
unsigned int v_print_summary( short parameter_1,double parameter_2,short parameter_3,char parameter_4,int parameter_5);
short v_seq_lib_warning_data();
long v_p3_get_rv_and_gs_warnings( double parameter_1,int parameter_2);
unsigned int v_lib_sim_specified( short parameter_1);
void v_format_pairs( int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,short parameter_6,short parameter_7,int parameter_8);
float v_create_pr_append_str();
void v_print_format_output( long parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5,long parameter_6,int parameter_7);
long v_pr_oligo_rev_c_sequence( double parameter_1,long parameter_2);
char v_pr_oligo_sequence( int parameter_1,unsigned int parameter_2);
unsigned int v_print_oligo( unsigned int parameter_1,long parameter_2,int parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7,int parameter_8);
int v_print_list_header( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_p3_print_one_oligo_list( short parameter_1,int parameter_2,int parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7,float parameter_8);
int v_p3_print_oligo_lists( double parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5);
void v_add_must_use_warnings( float parameter_1,char parameter_2,long parameter_3);
unsigned int v_left_oligo_in_pair_overlaps_used_oligo( char parameter_1,short parameter_2,int parameter_3);
void v_right_oligo_in_pair_overlaps_used_oligo( unsigned int parameter_1,long parameter_2,int parameter_3);
char v_add_pair( short parameter_1,double parameter_2);
short v_obj_fn( long parameter_1,long parameter_2);
long v_choose_internal_oligo( long parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,int parameter_6,float parameter_7,long parameter_8);
int v_pair_repeat_sim( double parameter_1,double parameter_2);
void v_pair_spans_target( float parameter_1,long parameter_2);
void v_characterize_pair( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,long parameter_8,int parameter_9,int parameter_10,int uni_para);
float v_compare_primer_pair( unsigned int parameter_1,double parameter_2);
void v_choose_pair_or_triple( short parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,short parameter_6,short parameter_7,int uni_para);
char v_primer_rec_comp( int parameter_1,char parameter_2);
float v_sort_primer_array( short parameter_1);
char v_make_internal_oligo_list( int parameter_1,short parameter_2,float parameter_3,char parameter_4,float parameter_5);
float v_add_one_primer_by_position( int parameter_1,int parameter_2,int parameter_3,float parameter_4,short parameter_5,char parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9);
void v_pick_primers_by_position( int parameter_1,int parameter_2,int parameter_3,short parameter_4,float parameter_5,int parameter_6,float parameter_7,double parameter_8,double parameter_9);
char v_make_detection_primer_lists( long parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,long parameter_5);
float v_add_one_primer( double parameter_1,int parameter_2,char parameter_3,float parameter_4,unsigned int parameter_5,short parameter_6,float parameter_7,short parameter_8);
char v_add_primers_to_check( long parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,long parameter_6);
unsigned int v_pick_only_best_primer( char parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5,char parameter_6,double parameter_7,int parameter_8);
char v_pick_sequencing_primer_list( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5);
float v_any_5_prime_ol_extension_has_problem( int parameter_1);
int v_free_primer_repeat_sim_score( float parameter_1);
short v_add_oligo_to_oligo_array( unsigned int parameter_1,float parameter_2);
void v_p_obj_fn( unsigned int parameter_1,long parameter_2,int parameter_3);
long v_op_set_completely_written();
long v_op_set_too_short( long parameter_1);
unsigned int v_op_set_too_long( int parameter_1);
double v_oligo_max_template_mispriming_thermod( int parameter_1);
int v_primer_mispriming_to_template_thermod( short parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10,int uni_para);
int v__pr_need_pair_template_mispriming_thermod( char parameter_1);
int v__pr_need_template_mispriming_thermod( long parameter_1);
long v_op_set_high_similarity_to_multiple_template_sites( short parameter_1);
double v_oligo_max_template_mispriming( char parameter_1);
char v_primer_mispriming_to_template( long parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,int parameter_6,int parameter_7,int parameter_8,long parameter_9,char parameter_10);
int v__pr_need_pair_template_mispriming();
int v__pr_need_template_mispriming( double parameter_1);
unsigned int v_oligo_template_mispriming( short parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,float parameter_5,double parameter_6,int parameter_7,int uni_para);
float v_op_set_high_similarity_to_non_template_seq( short parameter_1);
char v_oligo_compute_sequence_and_reverse( long parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5,char parameter_6,char parameter_7);
float v_oligo_repeat_library_mispriming( short parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,int parameter_5,short parameter_6);
int v_op_set_high_hairpin_th( int parameter_1);
long v_oligo_hairpin( int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,long parameter_5);
void v_calcDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,long parameter_8);
char v_strcatc( char parameter_1,char parameter_2);
unsigned int v_drawDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,short parameter_8);
long v_maxTM( int parameter_1,int parameter_2);
long v_fillMatrix( int parameter_1,double parameter_2);
int v_initMatrix();
float v_calcHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,int parameter_6);
long v_drawHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,int parameter_6);
unsigned int v_push( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5);
unsigned int v_tracebacku( int parameter_1,int parameter_2,unsigned int parameter_3);
int v_max5( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5);
long v_Ststack( int parameter_1,int parameter_2);
float v_Htstack( int parameter_1,int parameter_2);
void v_END5_4( int parameter_1,int parameter_2);
short v_Sd3( int parameter_1,int parameter_2);
long v_Hd3( int parameter_1,int parameter_2);
unsigned int v_END5_3( int parameter_1,int parameter_2);
float v_Sd5( int parameter_1,int parameter_2);
long v_Hd5( int parameter_1,int parameter_2);
unsigned int v_END5_2( int parameter_1,int parameter_2);
char v_END5_1( int parameter_1,int parameter_2);
void v_calc_terminal_bp( double parameter_1);
long v_comp4loop( char parameter_1,long parameter_2);
short v_comp3loop( unsigned int parameter_1,short parameter_2);
float v_calc_hairpin( int parameter_1,int parameter_2,double parameter_3,int parameter_4);
float v_RSH( int parameter_1,int parameter_2,double parameter_3,int uni_para);
char v_calc_bulge_internal( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para);
void v_equal( double parameter_1,double parameter_2);
short v_LSH( int parameter_1,int parameter_2,double parameter_3);
int v_traceback( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7,int uni_para);
long v_calc_bulge_internal2( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para);
short v_CBI( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para);
float v_Hs( int parameter_1,int parameter_2,int parameter_3);
void v_Ss( int parameter_1,int parameter_2,int parameter_3);
unsigned int v_maxTM2( int parameter_1,int parameter_2);
unsigned int v_fillMatrix2( int parameter_1,short parameter_2,int uni_para);
unsigned int v_initMatrix2();
double v_safe_recalloc( double parameter_1,int parameter_2,int parameter_3,long parameter_4);
unsigned int v_saltCorrectS( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_reverse( char parameter_1);
long v_symmetry_thermo( float parameter_1);
char v_length_unsig_char( long parameter_1);
void v_thal( short parameter_1,long parameter_2,short parameter_3,int uni_para);
int v_align_thermod( int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
long v_oligo_compl_thermod( double parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6);
int v_p3_ol_is_ok( char parameter_1);
int v_p3_ol_is_uninitialized();
float v_op_set_high_self_end( unsigned int parameter_1);
char v_op_set_high_self_any( short parameter_1);
float v__dpal_long_nopath_maxgap1_local_end( char parameter_1,double parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6);
long v__dpal_long_nopath_maxgap1_global_end( long parameter_1,float parameter_2,float parameter_3,char parameter_4,double parameter_5,char parameter_6);
unsigned int v__dpal_long_nopath_maxgap1_local( int parameter_1,long parameter_2,int parameter_3,float parameter_4,long parameter_5,unsigned int parameter_6);
double v__dpal_long_nopath_generic( double parameter_1,char parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,double parameter_6);
short v_fail_action( long parameter_1,long parameter_2);
void v_print_align( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6);
char v__dpal_generic( unsigned int parameter_1,char parameter_2,float parameter_3,char parameter_4,char parameter_5,short parameter_6);
int v_illegal_char( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
void v_dpal( long parameter_1,float parameter_2,float parameter_3);
float v_align( unsigned int parameter_1,int parameter_2,long parameter_3);
int v_oligo_compl( char parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5,float parameter_6);
int v_op_set_high_end_stability( unsigned int parameter_1);
short v_op_set_high_tm( short parameter_1);
int v_op_set_low_tm( int parameter_1);
long v_op_set_high_poly_x( int parameter_1);
int v_op_set_low_end_sequence_quality( unsigned int parameter_1);
double v_op_set_low_sequence_quality();
long v_sequence_quality_is_ok( float parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7,long parameter_8);
short v_op_set_too_many_gc_at_end( double parameter_1);
short v_op_set_no_gc_glamp( char parameter_1);
char v_op_set_high_gc_content( int parameter_1);
long v_op_set_low_gc_content( double parameter_1);
short v_op_set_not_in_any_ok_region( unsigned int parameter_1);
double v_op_set_overlaps_excluded_region( int parameter_1);
long v_bf_get_overlaps_excl_region( long parameter_1);
void v_op_set_overlaps_target( char parameter_1);
void v_bf_get_overlaps_target( long parameter_1);
void v_bf_set_overlaps_excl_region( short parameter_1,int parameter_2);
void v_bf_get_infinite_pos_penalty( int parameter_1);
void v_compute_position_penalty( long parameter_1,char parameter_2,double parameter_3,int parameter_4);
unsigned int v_bf_set_overlaps_target( long parameter_1,int parameter_2);
short v_bf_set_infinite_pos_penalty( long parameter_1,int parameter_2);
int v_oligo_overlaps_interval( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
char v_op_set_too_many_ns( double parameter_1);
double v_gc_and_n_content( int parameter_1,int parameter_2,short parameter_3,char parameter_4);
void v_op_set_must_match_err( unsigned int parameter_1);
int v_compare_nucleotides( long parameter_1,int parameter_2);
long v_primer_must_match( short parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,char parameter_6);
long v_op_set_overlaps_masked_sequence( float parameter_1);
float v_is_lowercase_masked( int parameter_1,double parameter_2,float parameter_3,double parameter_4);
char v_op_set_does_not_amplify_orf( int parameter_1);
double v_initialize_op();
int v_calc_and_check_oligo_features( unsigned int parameter_1,double parameter_2,float parameter_3,long parameter_4,char parameter_5,int parameter_6,int parameter_7,short parameter_8,short parameter_9);
long v_pick_primer_range( unsigned int parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,char parameter_6,long parameter_7,int parameter_8,long parameter_9);
float v_make_complete_primer_lists( long parameter_1,long parameter_2,char parameter_3,char parameter_4,float parameter_5,unsigned int parameter_6);
void v_destroy_thal_arg_holder( short parameter_1);
void v_set_thal_default_args( long parameter_1);
int v_create_thal_arg_holder( long parameter_1);
unsigned int v_xlate_ambiguity_code( char parameter_1);
int v_dpal_set_ambiguity_code_matrix();
void v_set_dpal_args( double parameter_1);
void v_create_dpal_arg_holder();
float v_find_stop_codon( short parameter_1,int parameter_2,int parameter_3);
int v_set_retval_both_stop_codons( unsigned int parameter_1,int parameter_2);
float v_test_must_match_parameters( char parameter_1);
int v_seq_lib_num_seq();
float v_strstr_nocase( char parameter_1,char parameter_2);
int v__pr_data_control( short parameter_1,char parameter_2,double parameter_3,int parameter_4,double parameter_5);
long v__optimize_ok_regions_list( float parameter_1,unsigned int parameter_2);
short v__check_and_adjust_overlap_pos( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,char parameter_7,short parameter_8);
void v_pr_append_95();
char v__check_and_adjust_1_interval( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,long parameter_6,char parameter_7,unsigned int parameter_8,int parameter_9);
long v__check_and_adjust_intervals( char parameter_1,int parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5);
unsigned int v_dna_to_upper( char parameter_1,int parameter_2);
void v__pr_substr( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
char v_fake_a_sequence( int parameter_1,double parameter_2);
void v__adjust_seq_args( int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4);
long v_khash_t();
short v_free_pair_memory( int parameter_1);
unsigned int v_pr_append_w_sep( long parameter_1,short parameter_2,float parameter_3);
float v_pr_append_new_chunk_85( int parameter_1,long parameter_2);
void v_p3_print_args( char parameter_1,double parameter_2);
long v_create_p3retval();
void v_choose_primers( double parameter_1,unsigned int parameter_2,int uni_para);
void v_p3_set_gs_primer_file_flag( short parameter_1,int parameter_2);
void v_print_boulder_warning( long parameter_1);
void v_format_warning( float parameter_1,double parameter_2,char parameter_3);
long v_free_repeat_sim_score( double parameter_1);
void v_destroy_p3retval( long parameter_1);
void v_pr_set_empty( short parameter_1);
void v_destroy_seq_args();
void v_print_boulder_error( char parameter_1);
void v_format_error( int parameter_1,short parameter_2,short parameter_3);
long v_tableStartATH( double parameter_1,double parameter_2);
void v_tableStartATS( double parameter_1,double parameter_2);
char v_getTetraloop( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4);
double v_safe_realloc(double parameter_2,char parameter_3);
float v_str2int( char parameter_1);
void v_readTLoop( double parameter_1,char parameter_2,double parameter_3,int parameter_4,long parameter_5);
char v_safe_calloc( short parameter_1,float parameter_2,char parameter_3);
long v_getTriloop( float parameter_1,short parameter_2,int parameter_3,long parameter_4);
short v_getTstack2( double parameter_1,double parameter_2,float parameter_3);
char v_getTstack( double parameter_1,double parameter_2,double parameter_3);
short v_readLoop( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5);
long v_getLoop( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,long parameter_7);
float v_getDangle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5);
char v_getStackint2( double parameter_1,double parameter_2,long parameter_3);
short v_readDouble( unsigned int parameter_1,short parameter_2);
unsigned int v_openParamFile( short parameter_1,unsigned int parameter_2);
char v_getStack( double parameter_1,double parameter_2,char parameter_3);
long v_safe_malloc( long parameter_1,float parameter_2);
int v_get_thermodynamic_values( float parameter_1,unsigned int parameter_2);
short v_read_thermodynamic_parameters();
void v_p3_reverse_complement( char parameter_1,char parameter_2);
void v_reverse_complement_seq_lib( unsigned int parameter_1);
char v_p3sl_append( float parameter_1,int parameter_2);
char v_upcase_and_check_char( char parameter_1);
double v_strtod();
double v_parse_seq_name( char parameter_1);
long v_p3sl_safe_realloc(char parameter_2);
int v_add_seq_to_seq_lib( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
unsigned int v_p3sl_append_new_chunk( long parameter_1,long parameter_2);
unsigned int v_p3sl_safe_malloc();
char v_create_empty_seq_lib();
long v_read_and_create_seq_lib( int parameter_1,float parameter_2);
void v_destroy_seq_lib( double parameter_1);
int v_strcmp_nocase( float parameter_1,char parameter_2);
double v__rb_safe_malloc();
void v_p3_set_gs_primer_internal_oligo_self_end( char parameter_1,double parameter_2);
void v_p3_set_gs_primer_self_end( long parameter_1,double parameter_2);
unsigned int v_parse_int( unsigned int parameter_1,double parameter_2,int parameter_3,long parameter_4);
unsigned int v_parse_product_size( float parameter_1,char parameter_2,short parameter_3,double parameter_4);
int v_tag_syntax_error( short parameter_1,long parameter_2,double parameter_3);
double v_parse_int_pair( long parameter_1,short parameter_2,char parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6);
double v_parse_intron_list( char parameter_1,int parameter_2,int parameter_3);
void v_p3_sa_add_to_quality_array( unsigned int parameter_1,int parameter_2);
void v_p3_set_sa_empty_quality( long parameter_1);
float v_parse_seq_quality( char parameter_1,float parameter_2);
double v__set_string( char parameter_1,double parameter_2);
int v_p3_set_sa_sequence( int parameter_1,double parameter_2);
int v_read_boulder_record( float parameter_1,int parameter_2,long parameter_3,int parameter_4,long parameter_5,unsigned int parameter_6,short parameter_7,int parameter_8,long parameter_9,double parameter_10);
double v_pr_safe_realloc(char parameter_2);
void v_pr_safe_malloc( short parameter_1);
void v_p3_read_line( short parameter_1);
double v_pr_append();
double v_out_of_memory_error();
int v_pr_append_w_sep_external( long parameter_1,char parameter_2,long parameter_3);
int v_pr_append_new_chunk_external( double parameter_1,char parameter_2);
long v_pr_append_new_chunk( long parameter_1,float parameter_2);
short v_pr_append2( char parameter_1,short parameter_2,short parameter_3);
int v_read_p3_file( char parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,short parameter_7,float parameter_8,short parameter_9,short parameter_10);
float v_create_seq_arg();
long v_p3_create_global_settings();
unsigned int v_pr_set_default_global_args_1( double parameter_1);
int v_p3_create_global_settings_default_version_1();
void v_destroy_pr_append_str_data( float parameter_1);
char v_pr_append_str_chars();
int v_pr_is_empty( short parameter_1);
int v_pr_append_external( float parameter_1,double parameter_2);
unsigned int v_primer3_copyright();
void v_print_usage();
short v_sig_handler( int parameter_1);
void v_p3_set_program_name( unsigned int parameter_1);
double v_libprimer3_release();
void v_init_pr_append_str( int parameter_1);
void v_destroy_dpal_arg_holder( long parameter_1)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		int_1 = int_1 + int_1;
		double_1 = double_1 + double_2;
		double_4 = double_1 * double_3;
		int_2 = int_1 * int_1;
		double_2 = double_5;
	}
}
void v_destroy_dpal_thal_arg_holder()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_destroy_thal_arg_holder(short_1);

		short_2 = short_1 + short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
		short_2 = short_2;
	}
	v_destroy_dpal_arg_holder(long_1);

}
void v_p3_destroy_global_settings( short parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		char_1 = char_2 * char_2;
		v_destroy_seq_lib(double_1);

		int_3 = int_1 + int_2;
		int_4 = int_1 + int_4;
		short_3 = short_1 * short_3;
	}
}
void v_destroy_thal_structures()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		long_3 = long_2 + long_2;
	}
}
short v_p3_get_ol_problem_string( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	long_1 = long_1;
	long_2 = long_2 * long_1;
	int_4 = int_1 * int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_4 = int_3;
		long_1 = long_3 + long_4;
	}
	return short_1;
}
int v_p3_ol_has_any_problem( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_p3_get_rv_intl( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
float v_p3_get_rv_rev( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int v_p3_get_rv_fwd( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_p3_oligo_explain_string( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_2;
	short_1 = short_1;
	float_2 = float_1 + float_1;
	return unsigned_int_1;
}
long v_p3_get_oligo_array_explain_string( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	return long_1;
	unsigned_int_1 = v_p3_oligo_explain_string(unsigned_int_2);

}
long v_print_all_explain( short parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_p3_get_pair_array_explain_string(short_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		long_1 = v_p3_get_oligo_array_explain_string(double_1);

		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		char_2 = v_p3_get_rv_intl(char_2);

		float_1 = v_p3_get_rv_best_pairs(int_1);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		short short_2 = 1;
		int_2 = v_p3_get_rv_fwd(long_4);

		short_2 = short_2;
	}
	return long_1;
	float_1 = v_p3_get_rv_rev(float_1);

}
void v_print_boulder( int parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	short short_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	short short_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_16 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_11 = 1;
	int int_19 = 1;
	short_1 = short_2;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	char_1 = char_1 + char_2;
	double_1 = double_1 * double_1;
	int_2 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_print_all_explain(short_3,char_2,short_3,int_1);

	float_1 = float_1;
	double_1 = v_oligo_max_template_mispriming_thermod(int_1);

	double_2 = double_1 * double_1;
	double_2 = double_1 + double_1;
	char_2 = char_2 * char_2;
	long_2 = long_1 * long_1;
	int_2 = int_4;
	char_1 = char_1 + char_2;
	short_1 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_4 + int_3;
	if(1)
	{
		v_print_boulder_error(char_1);

		double_5 = double_3 * double_4;
		double_6 = double_1;
	}
	float_1 = float_2;
	if(1)
	{
		char_3 = char_3;
	}
	if(1)
	{
		double_7 = double_2;
	}
	if(1)
	{
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		int_5 = v_pr_append_new_chunk_external(double_7,char_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	long_1 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	double_6 = double_5 + double_7;
	long_2 = long_3 * long_1;
	int_5 = int_6 * int_5;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		int_8 = int_7 * int_1;
	}
	if(1)
	{
		short_5 = short_3 * short_5;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		char_2 = char_1 + char_4;
		int_2 = int_7 + int_6;
		if(1)
		{
			double_2 = double_5;
		}
		if(1)
		{
			short_7 = short_3 * short_6;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_5;
		}
		double_7 = double_2 * double_1;
	}
	if(1)
	{
		int_1 = int_7 + int_3;
		char_4 = v_pr_oligo_sequence(int_4,unsigned_int_5);

		unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
		int_3 = int_2 * int_1;
		if(1)
		{
			v_destroy_pr_append_str(int_3);

			long_2 = long_1 * long_2;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_4;
		double_8 = double_1 * double_5;
		int_4 = int_9 * int_8;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		int int_11 = 1;
		short short_8 = 1;
		short short_9 = 1;
		float float_5 = 1;
		float float_6 = 1;
		int int_12 = 1;
		char char_5 = 1;
		float float_7 = 1;
		float float_8 = 1;
		short short_10 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_9 = 1;
		char char_6 = 1;
		float float_9 = 1;
		double double_10 = 1;
		int int_14 = 1;
		int int_15 = 1;
		short short_12 = 1;
		if(1)
		{
			double_6 = double_4;
			int_1 = int_4 * int_10;
			int_3 = int_1 * int_2;
			if(1)
			{
				float_2 = float_3 + float_1;
			}
			if(1)
			{
				float_4 = float_2 + float_4;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
			}
			if(1)
			{
				long_1 = v_pr_oligo_rev_c_sequence(double_5,long_3);

				char_3 = char_4;
			}
			if(1)
			{
				double_2 = double_8 * double_1;
			}
			if(1)
			{
				long_2 = long_1 * long_3;
			}
		}
		if(1)
		{
			int_3 = int_4 * int_2;
			short_3 = short_5 * short_2;
			int_4 = int_7 + int_10;
			int_6 = int_1;
			int_11 = int_11 + int_4;
			if(1)
			{
				short_8 = short_9;
			}
			if(1)
			{
				int_8 = int_9;
			}
		}
		int_6 = int_4 * int_5;
		if(1)
		{
			float_6 = float_5 + float_1;
		}
		if(1)
		{
			int_12 = int_6 * int_8;
		}
		if(1)
		{
			int_7 = int_11 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_8;
		}
		if(1)
		{
			if(1)
			{
				short_4 = short_1 * short_2;
			}
			if(1)
			{
				char_2 = v_pr_append_str_chars();

				char_5 = char_3 + char_5;
			}
			if(1)
			{
				int_1 = int_6 + int_6;
			}
		}
		if(1)
		{
			double_3 = double_7 * double_5;
		}
		if(1)
		{
			float_5 = float_4 * float_2;
		}
		if(1)
		{
			long_2 = long_2 + long_3;
		}
		if(1)
		{
			char_5 = char_1 + char_5;
		}
		if(1)
		{
			double_3 = double_4;
		}
		if(1)
		{
			int_5 = int_5;
		}
		if(1)
		{
			int_4 = int_8 * int_6;
		}
		if(1)
		{
			double_4 = double_1;
		}
		if(1)
		{
			char_2 = char_3;
		}
		if(1)
		{
			long_3 = v_p3_get_rv_and_gs_warnings(double_4,int_4);

			float_5 = float_1 + float_7;
		}
		if(1)
		{
			float_8 = float_1 * float_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_9 * unsigned_int_2;
		}
		if(1)
		{
			short_10 = short_5 * short_6;
		}
		if(1)
		{
			unsigned_int_9 = unsigned_int_10 + unsigned_int_4;
		}
		if(1)
		{
			float_1 = float_2 + float_5;
		}
		if(1)
		{
			int_5 = int_5 + int_2;
		}
		if(1)
		{
			double_9 = double_8 + double_5;
		}
		if(1)
		{
			int_2 = int_4 + int_7;
		}
		if(1)
		{
			char_3 = char_6 + char_6;
		}
		if(1)
		{
			float_3 = float_1 + float_9;
		}
		if(1)
		{
			char char_7 = 1;
			char_7 = char_4 * char_6;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3;
		}
		if(1)
		{
			int_7 = int_4 * int_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_10;
		}
		if(1)
		{
			short_5 = short_6 * short_6;
		}
		if(1)
		{
			float_2 = v_create_pr_append_str();

			short_8 = short_1 + short_4;
		}
		if(1)
		{
			double_10 = double_3 + double_6;
		}
		if(1)
		{
			int int_13 = 1;
			if(1)
			{
				int_14 = int_13 + int_12;
			}
			if(1)
			{
				float_5 = float_3 + float_8;
			}
			if(1)
			{
				int_13 = int_14 * int_13;
			}
		}
		if(1)
		{
			short short_11 = 1;
			short_11 = short_9 * short_11;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_10;
			}
			if(1)
			{
				int_11 = int_15 + int_12;
			}
			if(1)
			{
				float_8 = float_7;
			}
		}
		if(1)
		{
			int_5 = v_p3_ol_has_any_problem(int_16);

			double_1 = double_4 + double_3;
			char_2 = char_5 + char_1;
		}
		if(1)
		{
			short_10 = short_4 + short_4;
		}
		if(1)
		{
			float_9 = float_9 + float_1;
		}
		if(1)
		{
			float_3 = float_9 + float_6;
		}
		if(1)
		{
			long long_4 = 1;
			long_2 = long_2 + long_4;
		}
		if(1)
		{
			short_12 = short_7 + short_10;
		}
		if(1)
		{
			short_7 = v_p3_get_ol_problem_string(unsigned_int_11);

			short_6 = short_8 + short_12;
			if(1)
			{
				long_1 = long_3;
			}
			double_8 = v_oligo_max_template_mispriming(char_4);

			int_1 = int_3;
		}
		if(1)
		{
			if(1)
			{
				double_9 = double_8 + double_6;
			}
			if(1)
			{
				double_8 = double_10 * double_1;
			}
			if(1)
			{
				double_6 = double_7 * double_10;
			}
			if(1)
			{
				int int_17 = 1;
				int_12 = int_17 + int_11;
			}
			if(1)
			{
				float_2 = float_5 * float_2;
			}
			int_6 = int_15 + int_14;
			if(1)
			{
				int int_18 = 1;
				float_2 = float_9 * float_7;
				int_8 = int_18 + int_4;
				unsigned_int_9 = unsigned_int_10;
			}
			if(1)
			{
				int_12 = int_15 * int_15;
			}
			if(1)
			{
				short_8 = short_4 + short_7;
			}
		}
	}
	double_2 = double_11 * double_7;
	if(1)
	{
		unsigned_int_1 = unsigned_int_9 * unsigned_int_1;
		int_19 = v_pr_is_empty(short_6);

		short_6 = short_1;
	}
	int_10 = v_seq_lib_num_seq();

}
void v_destroy_pr_append_str( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	int_1 = int_2;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_2;
	v_destroy_pr_append_str_data(float_1);

}
long v_format_oligos( float parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5,float parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_7 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_7 = 1;
	long long_7 = 1;
	short short_5 = 1;
	double double_5 = 1;
	char char_8 = 1;
	double double_6 = 1;
	long long_8 = 1;
	short short_7 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	int_1 = int_2;
	double_3 = v_print_oligo_header(float_2,short_1,double_2,long_1);

	char_2 = char_1 + char_2;
	char_3 = char_3;
	float_1 = v_print_pair_array(unsigned_int_1,short_1,int_3,char_1,unsigned_int_2,double_3);

	int_4 = int_2 + int_1;
	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_1 + double_3;
	int_4 = int_2 * int_2;
	if(1)
	{
		int_5 = int_4 * int_2;
	}
	if(1)
	{
		int_6 = int_5 * int_2;
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_1 * double_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_2 * float_2;
		}
		if(1)
		{
			float_3 = float_4;
		}
	}
	double_4 = double_4 + double_4;
	if(1)
	{
		if(1)
		{
			char_4 = char_3 + char_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_3 * int_6;
		}
		if(1)
		{
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short_3 = short_1 + short_1;
		}
		if(1)
		{
			float_1 = float_4;
		}
	}
	if(1)
	{
		int_5 = int_3 * int_3;
		int_3 = int_6 + int_1;
	}
	if(1)
	{
		if(1)
		{
			int_7 = int_3;
		}
		if(1)
		{
			v_print_seq(char_5,double_2,short_3,long_2,unsigned_int_5,short_2,int_7);

			int_7 = int_7 * int_7;
			long_4 = long_3 + long_4;
			int_4 = int_2 * int_4;
		}
		if(1)
		{
			double_3 = double_1 + double_3;
			unsigned_int_6 = v_lib_sim_specified(short_2);

			long_2 = long_2;
			short_3 = short_2 * short_3;
		}
		if(1)
		{
			int int_9 = 1;
			int_8 = int_3 + int_3;
			short_4 = short_3 * short_2;
			int_8 = int_4 + int_9;
		}
	}
	if(1)
	{
		long long_5 = 1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		char_1 = char_5 + char_1;
		int_10 = int_8 + int_3;
		char_4 = char_5 * char_5;
		unsigned_int_9 = unsigned_int_8 + unsigned_int_8;
		long_5 = long_4 * long_4;
	}
	if(1)
	{
		if(1)
		{
			long_4 = long_6 * long_4;
		}
	}
	float_1 = float_3 + float_1;
	if(1)
	{
		int int_11 = 1;
		unsigned_int_10 = v_print_2_pair_array(char_6,int_4,int_10,unsigned_int_11,char_2,long_1,char_7);

		double_2 = double_1;
		unsigned_int_9 = unsigned_int_8;
		if(1)
		{
			double_4 = double_1 * double_3;
		}
		int_10 = int_6 * int_11;
		long_7 = long_4 * long_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int_7 = int_11 + int_3;
			}
			unsigned_int_3 = unsigned_int_11 * unsigned_int_7;
			float_1 = float_2 * float_4;
			float_2 = float_4 + float_4;
		}
		if(1)
		{
			char_7 = char_6;
		}
	}
	if(1)
	{
		char_6 = char_4 * char_1;
		v_format_error(int_2,short_5,short_2);

		long_1 = long_6 + long_3;
		if(1)
		{
			short_1 = short_2 * short_5;
		}
		char_1 = v_pr_append_str_chars();

		double_5 = double_4;
		double_5 = double_4 * double_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				short short_6 = 1;
				short_4 = short_6 * short_3;
			}
			char_3 = char_1 + char_8;
			double_5 = double_5 + double_5;
			double_6 = double_1 * double_5;
		}
		if(1)
		{
			float_3 = float_2 + float_1;
		}
	}
	if(1)
	{
		double_3 = double_2;
		long_8 = v_print_oligo_262(unsigned_int_11,char_4,long_3,short_7,int_8,long_2,unsigned_int_7,int_1);

		unsigned_int_7 = v_print_explain(char_3,short_2,short_7,unsigned_int_3,int_2,double_4);

		unsigned_int_2 = unsigned_int_7 * unsigned_int_1;
		if(1)
		{
			char char_9 = 1;
			long_1 = v_p3_get_rv_and_gs_warnings(double_5,int_7);

			char_4 = char_9 * char_8;
		}
		long_6 = long_4 * long_7;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				long long_9 = 1;
				long_9 = long_2 + long_9;
			}
			int_5 = v_pr_is_empty(short_1);

			float_4 = float_2 * float_1;
			char_1 = char_3 + char_1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		}
	}
	if(1)
	{
		double_5 = double_2 + double_4;
	}
	unsigned_int_8 = unsigned_int_11 + unsigned_int_4;
	if(1)
	{
		double_2 = double_4;
		double_3 = double_6 + double_5;
	}
	return long_4;
}
float v_p3_get_rv_best_pairs( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
char v_p3_pair_explain_string( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	short_2 = short_1 * short_1;
	double_3 = double_3 * double_4;
	double_5 = double_2 + double_1;
	return char_1;
}
void v_p3_get_pair_array_explain_string( short parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = v_p3_pair_explain_string(double_1);

}
long v_print_stat_line( double parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_1 + long_3;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	short_2 = short_2 * short_3;
	return long_2;
}
unsigned int v_print_explain( char parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		v_p3_get_pair_array_explain_string(short_1);

		int_1 = int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			short_1 = short_2 + short_2;
		}
		int_1 = int_1;
		if(1)
		{
			int int_3 = 1;
			int_4 = int_3 + int_1;
		}
		if(1)
		{
			short_1 = short_1 + short_2;
			char_1 = char_1 * char_3;
		}
		if(1)
		{
			short_3 = short_4 * short_1;
		}
		int_2 = int_5 * int_5;
		if(1)
		{
			double_1 = double_3 * double_3;
		}
		int_4 = int_1 * int_2;
		if(1)
		{
			char_2 = char_3 * char_1;
		}
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			double_3 = double_3 + double_3;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double_3 = double_1;
		}
		if(1)
		{
			long_3 = long_2 + long_3;
		}
		if(1)
		{
			short_3 = short_4;
		}
	}
	if(1)
	{
		long_1 = v_print_stat_line(double_3,long_4,double_1,int_1,int_5,int_2);

		float_1 = v_p3_get_rv_best_pairs(int_4);

		float_2 = float_2 + float_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_6 = long_5 * long_3;
	}
	if(1)
	{
		char_3 = char_3 * char_2;
	}
	double_2 = double_2 + double_1;
	return unsigned_int_3;
}
void v_print_rest( char parameter_1,unsigned int parameter_2,short parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	float_2 = float_1 + float_1;
	float_2 = v_print_pair_info(short_1,long_2,short_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = v_lib_sim_specified(short_2);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double_1 = v_print_oligo_header(float_2,short_1,double_1,long_2);

		int_1 = int_1 + int_2;
		double_2 = double_2 + double_2;
		long_2 = v_print_oligo_262(unsigned_int_3,char_1,long_1,short_2,int_2,long_3,unsigned_int_2,int_1);

		double_3 = double_2 * double_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			int_2 = int_1 + int_3;
			double_1 = double_2;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_4 = int_3;
			int_5 = int_3 * int_1;
		}
	}
}
float v_print_seq_lines( char parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_4 = 1;
				if(1)
				{
					long long_1 = 1;
					long long_3 = 1;
					long_3 = long_1 + long_2;
				}
				char_2 = char_1 * char_1;
				long_2 = long_4;
			}
		}
	}
	return float_2;
}
void v_print_seq( char parameter_1,double parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5,short parameter_6,int parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_5 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_4 = 1;
	float float_6 = 1;
	int int_6 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	int int_7 = 1;
	char char_5 = 1;
	float float_8 = 1;
	int int_8 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_9 = 1;
	double double_8 = 1;
	char char_6 = 1;
	double double_9 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	float_3 = float_4;
	int_2 = int_1 + int_2;
	int_2 = int_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	float_5 = float_5 + float_4;
	if(1)
	{
	}
	short_1 = short_2 + short_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
			}
			if(1)
			{
				int_2 = int_2 * int_2;
			}
			if(1)
			{
				int_3 = int_3 + int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_2 * double_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
			}
			if(1)
			{
				int_1 = int_1 + int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_2;
					}
					char_3 = char_3 + char_4;
					if(1)
					{
						short_4 = short_2 * short_4;
					}
				}
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						int_4 = int_2;
					}
					short_2 = short_2 * short_4;
					if(1)
					{
						int_2 = int_2 * int_2;
					}
				}
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_5 = 1;
			int_1 = int_1 + int_5;
			if(1)
			{
				float_6 = float_1 * float_2;
			}
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_2 = double_3 + double_2;
			if(1)
			{
				int_6 = int_6;
			}
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_4 = int_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			}
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		if(1)
		{
			float float_7 = 1;
			long_1 = long_2;
			float_1 = float_3 + float_7;
		}
		if(1)
		{
			float_5 = float_4;
		}
		if(1)
		{
			int_6 = int_4 + int_3;
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_4 * double_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			double_7 = double_6 + double_5;
		}
		if(1)
		{
			short_5 = short_4;
		}
		if(1)
		{
			int_7 = int_6 * int_4;
		}
		if(1)
		{
			char_4 = char_3 * char_4;
		}
		if(1)
		{
			double_1 = double_7 + double_5;
		}
		if(1)
		{
			char_3 = char_5;
		}
		if(1)
		{
			float_8 = v_print_seq_lines(char_2,short_5,int_7,int_2,int_8,int_7,short_6);

			int_2 = int_1 * int_8;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		char_3 = char_2 + char_5;
	}
	if(1)
	{
		double_2 = double_5 * double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		float_2 = float_4 * float_6;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
		if(1)
		{
			char_5 = char_3 * char_5;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int_1 = int_2 * int_4;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_6;
		float_6 = float_9 * float_9;
	}
	if(1)
	{
		double_8 = double_6 * double_1;
	}
	if(1)
	{
		float_2 = float_3 + float_9;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
	}
	if(1)
	{
		int int_9 = 1;
		int_3 = int_9 * int_7;
	}
	char_5 = char_6 + char_6;
	double_8 = double_7 * double_9;
}
unsigned int v_print_2_pair_array( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,long parameter_6,char parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_2 = float_1 + float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_1 * double_2;
			}
			if(1)
			{
				double double_3 = 1;
				double_4 = double_3 * double_4;
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_1 = int_2;
			}
			if(1)
			{
				double double_5 = 1;
				double double_6 = 1;
				double_6 = double_4 * double_5;
			}
		}
		char_3 = char_1 + char_2;
	}
	return unsigned_int_2;
}
float v_print_pair_array( unsigned int parameter_1,short parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_3 = long_1 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		short_3 = short_1 + short_2;
	}
	return float_2;
}
float v_print_pair_info( short parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_3 = short_1 * short_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_4 * short_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_2;
		char_2 = char_1 * char_1;
	}
	return float_1;
}
long v_print_oligo_262( unsigned int parameter_1,char parameter_2,long parameter_3,short parameter_4,int parameter_5,long parameter_6,unsigned int parameter_7,int parameter_8)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		char_1 = v_pr_oligo_sequence(int_1,unsigned_int_1);

		double_1 = double_1 + double_2;
		long_2 = v_pr_oligo_rev_c_sequence(double_3,long_3);

		double_1 = double_3 + double_2;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			char_2 = char_2 + char_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	float_3 = float_3;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return long_1;
}
double v_print_oligo_header( float parameter_1,short parameter_2,double parameter_3,long parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	return double_1;
}
unsigned int v_print_summary( short parameter_1,double parameter_2,short parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	long_1 = v_print_oligo_262(unsigned_int_2,char_1,long_1,short_1,int_1,long_1,unsigned_int_3,int_3);

	float_1 = v_print_pair_array(unsigned_int_1,short_2,int_2,char_1,unsigned_int_2,double_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	float_1 = v_print_pair_info(short_2,long_2,short_1);

	unsigned_int_1 = v_print_2_pair_array(char_1,int_1,int_2,unsigned_int_3,char_1,long_3,char_2);

	int_4 = int_2 * int_1;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		long_2 = long_1 + long_2;
		short_3 = short_3 * short_3;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "/") < 0)
		{
			double_2 = v_print_oligo_header(float_2,short_4,double_3,long_4);

			double_3 = double_3 * double_4;
		}
	}
	short_2 = short_5 * short_6;
	float_4 = float_2 * float_3;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_4 + double_5;
	}
	int_1 = int_1 + int_5;
	double_4 = double_1;
	long_6 = long_5 * long_1;
	unsigned_int_4 = unsigned_int_3;
	return unsigned_int_2;
	unsigned_int_3 = v_lib_sim_specified(short_2);

}
short v_seq_lib_warning_data()
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
long v_p3_get_rv_and_gs_warnings( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = v_pr_is_empty(short_1);

	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_init_pr_append_str(int_1);

		v_pr_append_95();

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		float_1 = v_pr_append_new_chunk_85(int_3,long_1);

		short_4 = short_2 * short_3;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	short_4 = v_seq_lib_warning_data();

	char_1 = char_2;
	return long_1;
}
unsigned int v_lib_sim_specified( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_format_pairs( int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,short parameter_6,short parameter_7,int parameter_8)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int int_7 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_2;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_1;
	long_1 = long_3 * long_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		int_2 = v_pr_is_empty(short_3);

		v_print_rest(char_1,unsigned_int_1,short_1,short_1);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = v_lib_sim_specified(short_3);

		double_4 = double_3 + double_2;
	}
	if(1)
	{
		v_format_error(int_2,short_4,short_4);

		double_3 = double_1 * double_5;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_1 + float_3;
		}
		if(1)
		{
			double_2 = double_5 * double_5;
		}
	}
	char_1 = char_2 * char_3;
	if(1)
	{
		unsigned_int_2 = v_print_summary(short_2,double_3,short_3,char_4,int_3);

		int_4 = int_3 + int_2;
	}
	if(1)
	{
		v_print_seq(char_3,double_4,short_2,long_2,unsigned_int_2,short_2,int_1);

		int_4 = int_1 * int_3;
		long_1 = v_p3_get_rv_and_gs_warnings(double_2,int_4);

		int_5 = int_2 * int_3;
	}
	int_1 = int_1 + int_5;
	char_3 = v_pr_append_str_chars();

	char_4 = char_1;
	if(1)
	{
		int_5 = int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		int int_6 = 1;
		int_3 = int_4 + int_6;
	}
	float_1 = float_4 * float_1;
	char controller_13[3];
	fgets(controller_13 ,3 ,stdin);
	if( strcmp( controller_13, "iR") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_2 = v_print_explain(char_4,short_4,short_2,unsigned_int_1,int_7,double_3);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
}
float v_create_pr_append_str()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	v_init_pr_append_str(int_1);

	double_1 = double_2;
	double_1 = double_2 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
void v_print_format_output( long parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5,long parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v_pr_append_new_chunk_external(double_1,char_1);

		double_3 = double_2 * double_2;
	}
	if(1)
	{
		v_format_pairs(int_1,double_4,unsigned_int_3,int_2,long_1,short_1,short_2,int_2);

		v_destroy_pr_append_str(int_1);

		long_1 = long_1 * long_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "}T") < 0)
	{
		long_1 = v_format_oligos(float_1,unsigned_int_3,double_5,long_2,unsigned_int_1,float_1,int_2);

		char_4 = char_1 + char_3;
	}
	if(1)
	{
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		char_3 = char_4;
	}
	char_2 = char_1 + char_2;
	float_2 = v_create_pr_append_str();

}
long v_pr_oligo_rev_c_sequence( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_3 = 1;
	v__pr_substr(double_1,int_1,int_2,char_1);

	char_1 = char_2;
	float_2 = float_1 + float_2;
	int_3 = int_2;
	double_2 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_3 + double_1;
	int_2 = int_3;
	double_4 = double_2 * double_1;
	double_2 = double_2 + double_4;
	double_5 = double_1 * double_2;
	return long_1;
	v_p3_reverse_complement(char_3,char_1);

}
char v_pr_oligo_sequence( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
	double_4 = double_2 + double_3;
	double_3 = double_5;
	double_5 = double_5 + double_5;
	v__pr_substr(double_2,int_2,int_2,char_1);

	long_2 = long_1 + long_1;
	short_3 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return char_2;
}
unsigned int v_print_oligo( unsigned int parameter_1,long parameter_2,int parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_2 = double_1 * double_1;
	char_1 = v_pr_oligo_sequence(int_1,unsigned_int_1);

	long_1 = v_pr_oligo_rev_c_sequence(double_1,long_1);

	float_1 = float_1 + float_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_1;
		if(1)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		char_3 = char_1 + char_2;
		int_2 = int_2 + int_2;
		if(1)
		{
		}
	}
	long_2 = long_4 * long_4;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_print_list_header( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
	}
	long_1 = long_3 + long_2;
	if(1)
	{
	}
	double_2 = double_3 + double_3;
	if(1)
	{
	}
	double_4 = double_1 + double_3;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_4 + double_2;
	}
	if(1)
	{
		long_3 = long_2;
	}
	if(1)
	{
	}
	if(1)
	{
		long_2 = long_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
	}
	return int_2;
}
int v_p3_print_one_oligo_list( short parameter_1,int parameter_2,int parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7,float parameter_8)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int_1 = v_print_list_header(float_1,int_2,int_2,int_1,int_2);

	unsigned_int_1 = v_print_oligo(unsigned_int_1,long_1,int_3,long_2,short_1,int_1,int_4,int_4);

	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_5;
}
int v_p3_print_oligo_lists( double parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2;
		float_1 = float_1 * float_1;
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
			int_1 = int_2 * int_1;
		}
		unsigned_int_1 = unsigned_int_2;
		int_4 = int_3 * int_2;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			char_5 = char_1 + char_4;
			int_5 = int_4 * int_2;
			float_4 = v_pr_append_new_chunk_85(int_2,long_1);

			v_pr_append_95();

			short_1 = short_1 + short_1;
			int_3 = int_1 * int_5;
		}
		int_3 = v_pr_append_new_chunk_external(double_2,char_1);

		long_1 = long_2 + long_3;
		double_1 = double_2;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_8 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_3 = v_p3_print_one_oligo_list(short_2,int_6,int_7,long_1,short_3,int_7,int_7,float_4);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		int_8 = int_1;
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
			int_8 = int_1 * int_3;
		}
		int_8 = int_3;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
		if(1)
		{
		}
	}
	short_1 = short_4 + short_1;
	return int_7;
	int_4 = v_pr_append_external(float_3,double_3);

}
void v_add_must_use_warnings( float parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_6 = 1;
	char char_1 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		v_pr_append_95();

		double_1 = double_4 + double_1;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		float_1 = v_pr_append_new_chunk_85(int_2,long_1);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		int_4 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_2 = v_pr_append_w_sep(long_1,short_4,float_1);

		int_6 = int_5 * int_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_1 = short_5 + short_6;
	}
	if(1)
	{
		int_2 = int_5 + int_6;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		int int_7 = 1;
		int_3 = int_7 + int_3;
	}
	if(1)
	{
		int int_9 = 1;
		int_9 = int_3 + int_8;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		short short_7 = 1;
		short_2 = short_6 + short_7;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_1;
	}
	if(1)
	{
		int_4 = int_4 + int_8;
	}
	if(1)
	{
		int int_10 = 1;
		int_8 = int_10 * int_3;
	}
	if(1)
	{
		double double_5 = 1;
		double_1 = double_5 * double_4;
		short_6 = short_6 * short_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		double_4 = double_4 + double_4;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
}
unsigned int v_left_oligo_in_pair_overlaps_used_oligo( char parameter_1,short parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_right_oligo_in_pair_overlaps_used_oligo( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "`0") < 0)
	{
	}
	if(1)
	{
	}
}
char v_add_pair( short parameter_1,double parameter_2)
{
	char char_3 = 1;
	double double_1 = 1;
	double double_4 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double_3 = double_1 * double_2;
			double_4 = v_pr_safe_realloc(char_4);

			int_3 = int_1 * int_2;
		}
	}
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_2;
	return char_3;
	v_pr_safe_malloc(short_1);

}
short v_obj_fn( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			short_3 = short_3 * short_1;
		}
	}
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, ",") > 0)
	{
		if(1)
		{
			double_4 = double_4 + double_2;
		}
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_2 * float_1;
		}
		if(1)
		{
			short_1 = short_2 * short_3;
		}
	}
	if(1)
	{
		double_2 = double_4 + double_2;
	}
	if(1)
	{
		double_5 = double_2 + double_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_3 + long_4;
	}
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_1 + char_1;
		short_2 = short_3 + short_3;
		char_3 = char_2 + char_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_5 = double_3 + double_4;
		double_6 = double_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 * int_4;
		}
	}
	short_1 = short_4 + short_1;
	return short_5;
}
long v_choose_internal_oligo( long parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,int parameter_6,float parameter_7,long parameter_8)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	char char_4 = 1;
	double double_7 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	double_3 = double_1;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_1;
	long_1 = v_oligo_hairpin(int_1,unsigned_int_1,short_1,double_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_3 = double_4 * double_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				double double_6 = 1;
				long_2 = v_oligo_compl_thermod(double_1,double_5,double_2,int_2,int_3,long_3);

				double_3 = double_1 + double_6;
				int_2 = v_oligo_compl(char_1,int_3,char_2,unsigned_int_3,char_3,float_1);

				unsigned_int_4 = unsigned_int_1;
				long_3 = long_3;
				if(1)
				{
					char_3 = char_3 + char_2;
				}
			}
			if(1)
			{
				float float_3 = 1;
				v_p3_reverse_complement(char_2,char_2);

				int_2 = int_1 * int_1;
				float_3 = float_2 * float_1;
				char_2 = char_3 + char_2;
				if(1)
				{
					float float_4 = 1;
					float_2 = float_2 + float_4;
				}
			}
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float_2 = v_oligo_repeat_library_mispriming(short_1,unsigned_int_5,short_1,int_2,int_2,short_1);

				long_2 = long_1 + long_3;
				short_4 = short_2 * short_3;
				if(1)
				{
					float float_5 = 1;
					float_5 = float_5 * float_2;
				}
			}
			if(1)
			{
				v__pr_substr(double_5,int_4,int_2,char_4);

				int_2 = int_4 * int_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
				}
			}
			unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
			double_2 = double_5;
		}
	}
	double_1 = double_2 + double_7;
	if(1)
	{
	}
	return long_2;
}
int v_pair_repeat_sim( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_1 = v_seq_lib_num_seq();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_2;
	double_1 = double_1 + double_2;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
			long_1 = long_1;
		}
	}
	return int_2;
}
void v_pair_spans_target( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	short_3 = short_1 * short_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1;
		double_1 = double_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "/") < 0)
		{
		}
	}
}
void v_characterize_pair( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,long parameter_8,int parameter_9,int parameter_10,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	double double_8 = 1;
	long long_8 = 1;
	float float_4 = 1;
	int int_8 = 1;
	double double_9 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_2;
	char_1 = char_3 + char_2;
	double_3 = double_1 + double_2;
	double_2 = double_4 * double_3;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_5 = double_4 + double_5;
	long_3 = long_1 + long_2;
	long_1 = long_4 * long_3;
	int_3 = int_3 * int_1;
	int_3 = int_4 * int_4;
	double_5 = double_6 + double_3;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_1 + float_2;
		}
		int_3 = int_1;
	}
	short_3 = short_2 + short_3;
	if(1)
	{
		if(1)
		{
			short_2 = short_3 * short_3;
		}
		if(1)
		{
			int_2 = int_5 * int_5;
			if(1)
			{
				int_5 = int_1 + int_2;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		double_4 = double_3 * double_2;
		int_4 = int_5;
		unsigned_int_4 = unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					double_1 = double_6 + double_5;
					short_3 = short_1 + short_1;
				}
			}
			if(1)
			{
				if(1)
				{
					long_2 = long_2 * long_2;
					char_4 = char_1 * char_3;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
					short_2 = short_2;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int_3 = int_3;
	}
	double_7 = double_5 + double_4;
	float_1 = float_2;
	int_2 = int_3 * int_1;
	long_4 = long_2 + long_3;
	long_2 = long_2 + long_3;
	if(1)
	{
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 + float_3;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_7 + unsigned_int_5;
		}
		if(1)
		{
		}
	}
	short_4 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
			char_4 = char_4;
		}
		if(1)
		{
		}
	}
	long_4 = long_2 + long_5;
	long_6 = long_3;
	int_1 = int_1 + int_2;
	int_6 = int_7;
	if(1)
	{
		short_5 = short_3 * short_3;
		if(1)
		{
			double_1 = double_4;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int_7 = int_1 * int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		double_8 = double_3 * double_1;
		if(1)
		{
			char_2 = char_4 + char_1;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		long long_7 = 1;
		long_5 = long_7 * long_7;
		if(1)
		{
			int_5 = int_7 * int_7;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		long_8 = long_1;
		if(1)
		{
			double_8 = double_4;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		long long_9 = 1;
		long_2 = long_9 * long_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int_3 = int_5 + int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
		}
		if(1)
		{
			double_4 = double_5 * double_6;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
		if(1)
		{
			float float_5 = 1;
			float_1 = float_4 + float_5;
		}
		if(1)
		{
			double_4 = double_8 + double_8;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
		if(1)
		{
			if(1)
			{
				int_5 = int_1 + int_8;
			}
			if(1)
			{
			}
		}
		double_3 = double_9 * double_6;
		if(1)
		{
			if(1)
			{
				double_1 = double_3 + double_3;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int int_9 = 1;
		int int_10 = 1;
		char_1 = char_2 + char_2;
		if(1)
		{
			if(1)
			{
				float_6 = float_6 + float_2;
			}
			if(1)
			{
			}
		}
		int_6 = int_4 + int_9;
		int_1 = int_10 + int_1;
		if(1)
		{
			char_4 = char_1 + char_3;
		}
		if(1)
		{
			if(1)
			{
				double_8 = double_6 * double_1;
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
				unsigned_int_1 = unsigned_int_3 + unsigned_int_8;
			}
			if(1)
			{
			}
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		if(1)
		{
			double_7 = double_9 * double_1;
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
				unsigned_int_1 = unsigned_int_3;
			}
			if(1)
			{
			}
		}
		long_4 = long_4 + long_5;
	}
	char controller4vul_1252[2];
	fgets(controller4vul_1252 ,2 ,stdin);
	if( strcmp( controller4vul_1252, "h") < 0)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_5;
		}
		char controller4vul_1253[2];
		fgets(controller4vul_1253 ,2 ,stdin);
		if( strcmp( controller4vul_1253, "T") > 0)
		{
			char char_5 = 1;
			int_1 = int_8 + int_2;
			char_5 = char_2 * char_5;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_8;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
			double_6 = double_9 * double_1;
			if(1)
			{
				long long_10 = 1;
				long_8 = long_5 * long_10;
			}
			char controller4vul_1254[3];
			fgets(controller4vul_1254 ,3 ,stdin);
			if( strcmp( controller4vul_1254, "qT") < 0)
			{
				char controller4vul_1255[3];
				fgets(controller4vul_1255 ,3 ,stdin);
				if( strcmp( controller4vul_1255, "]?") > 0)
				{
					unsigned_int_6 = v_oligo_template_mispriming(short_5,long_4,short_6,unsigned_int_1,float_6,double_2,int_4,uni_para);

					float_4 = float_2 * float_1;
				}
				if(1)
				{
				}
			}
		}
	}
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Jg") < 0)
		{
			int_2 = int_7 + int_1;
		}
		if(1)
		{
			char char_6 = 1;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
			double_1 = double_2;
			char_1 = char_6 * char_4;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_2;
			double_2 = double_1 * double_2;
			if(1)
			{
				float float_7 = 1;
				float_2 = float_7 * float_4;
			}
			if(1)
			{
				if(1)
				{
					double_2 = double_3 + double_6;
				}
				if(1)
				{
				}
			}
		}
	}
}
float v_compare_primer_pair( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_2 + int_4;
	float_1 = float_1 + float_2;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_2;
	int_2 = int_4 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	double_4 = double_1 * double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_3 = int_4 + int_5;
	char_3 = char_3 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
void v_choose_pair_or_triple( short parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,short parameter_6,short parameter_7,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_2;
	double_2 = double_1 + double_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		char controller4vul_1251[2];
		fgets(controller4vul_1251 ,2 ,stdin);
		if( strcmp( controller4vul_1251, "]") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			v_characterize_pair(int_1,int_1,int_1,int_1,int_1,int_2,double_3,long_1,int_3,int_1,uni_para);

			char_2 = char_1 * char_1;
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = double_3 * double_4;
		}
		int_3 = int_4 * int_3;
	}
	double_6 = double_5 + double_6;
	long_2 = long_1 * long_1;
}
char v_primer_rec_comp( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
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
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
float v_sort_primer_array( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_1;
	return float_1;
	char_1 = v_primer_rec_comp(int_1,char_2);

}
char v_make_internal_oligo_list( int parameter_1,short parameter_2,float parameter_3,char parameter_4,float parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float_1 = v_add_one_primer(double_1,int_1,char_1,float_1,unsigned_int_1,short_1,float_1,short_1);

	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 + int_1;
	}
	if(1)
	{
		float float_2 = 1;
		char char_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		float_3 = float_2 + float_1;
		char_2 = char_2 * char_1;
		float_2 = float_1 + float_2;
	}
	return char_3;
	long_1 = v_pick_primer_range(unsigned_int_3,float_3,int_1,unsigned_int_4,long_2,char_1,long_2,int_3,long_3);

}
float v_add_one_primer_by_position( int parameter_1,int parameter_2,int parameter_3,float parameter_4,short parameter_5,char parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_2;
	int_1 = v_free_primer_repeat_sim_score(float_1);

	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	int_1 = int_1 + int_2;
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
	int_3 = int_1 + int_3;
	int_3 = int_2 + int_1;
	if(1)
	{
		short_2 = short_3 + short_3;
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		int int_4 = 1;
		v_p_obj_fn(unsigned_int_1,long_1,int_2);

		int_3 = int_1 + int_1;
		int_3 = int_1 + int_4;
		double_2 = double_2 * double_3;
	}
	int_2 = int_3 * int_1;
	long_1 = long_1 * long_2;
	int_2 = v_calc_and_check_oligo_features(unsigned_int_2,double_3,float_1,long_1,char_2,int_5,int_6,short_2,short_4);

	unsigned_int_3 = unsigned_int_4;
	short_2 = short_2;
	if(1)
	{
		int_3 = int_1 * int_2;
		short_3 = v_add_oligo_to_oligo_array(unsigned_int_2,float_2);

		unsigned_int_3 = unsigned_int_3;
		v__pr_substr(double_3,int_5,int_7,char_1);

		float_1 = float_3 * float_1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_3;
		}
		if(1)
		{
			int_7 = int_3 * int_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1 + double_2;
	}
	int_3 = int_6 * int_3;
	return float_2;
}
void v_pick_primers_by_position( int parameter_1,int parameter_2,int parameter_3,short parameter_4,float parameter_5,int parameter_6,float parameter_7,double parameter_8,double parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	char_1 = char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "r(") == 0)
	{
		double double_2 = 1;
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
			if(1)
			{
				float_1 = v_add_one_primer_by_position(int_1,int_1,int_1,float_2,short_4,char_1,unsigned_int_2,double_4,char_3);

				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		double_3 = double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_1 = int_1 * int_1;
			}
			if(1)
			{
				double double_5 = 1;
				double_5 = double_5 + double_3;
			}
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				long_2 = long_2 + long_1;
			}
		}
	}
	if(1)
	{
		char_1 = char_1;
	}
	float_3 = v_pr_append_new_chunk_85(int_2,long_1);

}
char v_make_detection_primer_lists( long parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_8 = 1;
	double double_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	char_1 = char_2 + char_1;
	float_2 = float_1 + float_2;
	float_3 = float_4;
	float_1 = float_4 * float_5;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_1 + double_1;
	char_1 = char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_2 = 1;
			v_pick_primers_by_position(int_3,int_2,int_1,short_1,float_3,int_4,float_1,double_1,double_1);

			short_2 = short_2 * short_3;
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_3 + int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		int_4 = int_5 + int_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_5 + int_1;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
		double_4 = double_3 * double_3;
		char_2 = char_2 + char_2;
		if(1)
		{
			int int_7 = 1;
			int_3 = int_7 + int_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
		}
		if(1)
		{
			int_2 = int_4;
		}
	}
	if(1)
	{
		int_3 = int_8 * int_8;
	}
	if(1)
	{
		int_4 = int_4;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_4 = long_4 + long_5;
	}
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		float_5 = v_add_one_primer(double_5,int_5,char_2,float_2,unsigned_int_4,short_3,float_6,short_3);

		long_2 = v_pick_primer_range(unsigned_int_6,float_7,int_3,unsigned_int_6,long_1,char_1,long_6,int_8,long_1);

		double_2 = double_6 * double_1;
		double_6 = double_5 * double_7;
		if(1)
		{
			float float_8 = 1;
			float_4 = float_8 + float_8;
		}
		if(1)
		{
			int_1 = int_2 * int_5;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_2 + unsigned_int_7;
		}
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_7 = unsigned_int_8 + unsigned_int_5;
		double_1 = double_4;
	}
	if(1)
	{
	}
	return char_1;
}
float v_add_one_primer( double parameter_1,int parameter_2,char parameter_3,float parameter_4,unsigned int parameter_5,short parameter_6,float parameter_7,short parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_1;
	float_1 = v_pr_append_new_chunk_85(int_3,long_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long_1 = long_3;
	}
	float_3 = float_3;
	int_4 = int_4 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long_4 = long_5;
		char_2 = char_2;
		if(1)
		{
			if(1)
			{
				short_2 = short_1 + short_2;
			}
			char_2 = char_2 * char_1;
			char_2 = char_1 * char_2;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_5 + int_5;
			}
			int_2 = v_strcmp_nocase(float_1,char_1);

			double_2 = double_1 + double_2;
			long_1 = long_5 + long_1;
		}
		if(1)
		{
			long long_6 = 1;
			int_6 = v_calc_and_check_oligo_features(unsigned_int_3,double_2,float_1,long_4,char_2,int_6,int_6,short_2,short_1);

			int_4 = v_free_primer_repeat_sim_score(float_2);

			long_6 = long_1 + long_5;
		}
		double_4 = double_3 + double_3;
		long_2 = long_4 * long_3;
		short_1 = short_2 * short_1;
		v_pr_append_95();

		double_6 = double_5 * double_4;
		if(1)
		{
			int int_7 = 1;
			double double_7 = 1;
			int_6 = int_7 + int_2;
			v__pr_substr(double_1,int_3,int_3,char_1);

			double_7 = double_7 * double_1;
			if(1)
			{
				v_p_obj_fn(unsigned_int_2,long_4,int_5);

				short_1 = short_1 + short_1;
			}
			if(1)
			{
				int_2 = int_2 * int_6;
			}
		}
		if(1)
		{
			v_p3_reverse_complement(char_2,char_3);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			int int_8 = 1;
			short_3 = v_add_oligo_to_oligo_array(unsigned_int_4,float_2);

			char_4 = char_3 + char_3;
			int_8 = int_1 + int_2;
		}
	}
	return float_4;
}
char v_add_primers_to_check( long parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,long parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double_1 = double_1;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	return char_1;
	float_1 = v_add_one_primer(double_3,int_1,char_2,float_1,unsigned_int_1,short_1,float_1,short_1);

}
unsigned int v_pick_only_best_primer( char parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5,char parameter_6,double parameter_7,int parameter_8)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_6 = 1;
	int int_5 = 1;
	short short_6 = 1;
	short_1 = v_add_oligo_to_oligo_array(unsigned_int_1,float_1);

	v_pr_append_95();

	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	int_2 = int_1 + int_2;
	short_3 = short_2 * short_1;
	v_p_obj_fn(unsigned_int_1,long_1,int_3);

	long_1 = long_1 * long_1;
	char_3 = char_1 * char_2;
	long_3 = long_2 * long_2;
	short_2 = short_3 + short_1;
	unsigned_int_4 = unsigned_int_4;
	char_2 = char_2 * char_2;
	double_1 = double_2;
	short_2 = short_4 * short_2;
	if(1)
	{
		char_1 = char_2;
		char_4 = char_4;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_4 * long_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_2 + float_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_5 = 1;
			long long_6 = 1;
			double_4 = double_1 + double_3;
			v__pr_substr(double_2,int_3,int_4,char_3);

			float_2 = v_pr_append_new_chunk_85(int_1,long_4);

			double_3 = double_2 * double_2;
			if(1)
			{
				if(1)
				{
					char_2 = char_4 * char_4;
				}
				unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
				int_3 = v_free_primer_repeat_sim_score(float_3);

				double_3 = double_1;
			}
			if(1)
			{
				if(1)
				{
					long_3 = long_1 * long_1;
				}
				double_3 = double_2;
				long_3 = long_2 + long_1;
			}
			unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
			int_4 = int_3 * int_1;
			short_4 = short_5 * short_2;
			int_3 = int_4 + int_2;
			if(1)
			{
				float float_5 = 1;
				float_5 = float_4 + float_5;
				if(1)
				{
					long_3 = long_6 + long_1;
					int_3 = int_1 * int_4;
					double_7 = double_5 + double_6;
				}
				if(1)
				{
					double_6 = double_4 * double_7;
				}
			}
			if(1)
			{
				long_2 = long_6 * long_1;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_6;
				}
			}
		}
	}
	if(1)
	{
		double_7 = double_7 * double_8;
		unsigned_int_5 = unsigned_int_3;
	}
	if(1)
	{
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			int_2 = int_3 + int_1;
		}
		if(1)
		{
			int int_6 = 1;
			int_2 = v_calc_and_check_oligo_features(unsigned_int_5,double_8,float_6,long_2,char_3,int_5,int_4,short_6,short_1);

			int_6 = int_4 + int_6;
		}
		float_4 = v_any_5_prime_ol_extension_has_problem(int_2);

		int_1 = int_3 * int_5;
		double_6 = double_5;
		char_5 = char_4 + char_2;
		int_1 = int_1 + int_2;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_2;
		long_4 = long_3 + long_3;
		double_6 = double_4 * double_3;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
char v_pick_sequencing_primer_list( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float_1 = v_pr_append_new_chunk_85(int_1,long_1);

	double_2 = double_1 + double_2;
	return char_1;
	unsigned_int_1 = v_pick_only_best_primer(char_1,short_1,double_2,short_2,long_1,char_1,double_1,int_2);

}
float v_any_5_prime_ol_extension_has_problem( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int v_free_primer_repeat_sim_score( float parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_1 * int_2;
		double_3 = double_1 * double_2;
	}
	return int_2;
}
short v_add_oligo_to_oligo_array( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
		float_1 = float_1 + float_1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_3 * int_4;
		int_3 = int_3 * int_4;
	}
	float_1 = float_1;
	v_pr_safe_malloc(short_1);

	int_1 = int_2 + int_3;
	return short_1;
	double_1 = v_pr_safe_realloc(char_1);

}
void v_p_obj_fn( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1 + long_2;
	double_1 = v_oligo_max_template_mispriming_thermod(int_1);

	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_4;
	v_bf_get_overlaps_target(long_1);

	v_bf_get_infinite_pos_penalty(int_2);

	float_2 = float_3 * float_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_2 * int_1;
	double_2 = double_1 * double_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	float_2 = float_4;
	float_2 = float_5 * float_4;
	int_4 = int_1 * int_3;
	double_5 = double_3 + double_4;
	double_4 = double_4 + double_6;
	double_7 = v_oligo_max_template_mispriming(char_1);

	long_3 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
}
long v_op_set_completely_written()
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 * long_1;
	return long_2;
}
long v_op_set_too_short( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	float_2 = float_1 + float_1;
	return long_1;
}
unsigned int v_op_set_too_long( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
double v_oligo_max_template_mispriming_thermod( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_primer_mispriming_to_template_thermod( short parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short short_1 = 1;
	long long_5 = 1;
	int int_7 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	float_2 = float_1 * float_2;
	float_2 = float_2;
	float_2 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	int_1 = int_1 * int_2;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		if(1)
		{
			double_3 = double_1 * double_1;
		}
		float_1 = float_1;
		float_3 = float_3 + float_4;
		unsigned_int_5 = unsigned_int_2;
		int_4 = int_3 * int_2;
		double_3 = double_3 + double_3;
		long_2 = long_2 * long_1;
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1;
	double_4 = double_1 + double_3;
	if(1)
	{
		long long_4 = 1;
		if(1)
		{
			int int_5 = 1;
			int_6 = int_5 + int_5;
		}
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		int_6 = int_1;
		long_2 = long_4 * long_2;
	}
	long_1 = long_3 * long_1;
	long_5 = long_2 + long_2;
	if(1)
	{
		long_5 = long_2;
	}
	if(1)
	{
		int_7 = int_3 + int_6;
	}
	int_7 = int_1 + int_3;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_2;
	}
	char controller4vul_1258[3];
	fgets(controller4vul_1258 ,3 ,stdin);
	if( strcmp( controller4vul_1258, "g(") < 0)
	{
		char controller4vul_1259[2];
		fgets(controller4vul_1259 ,2 ,stdin);
		if( strcmp( controller4vul_1259, "S") > 0)
		{
			double double_5 = 1;
			double_5 = double_5 * double_4;
			char controller4vul_1260[3];
			fgets(controller4vul_1260 ,3 ,stdin);
			if( strcmp( controller4vul_1260, "nG") < 0)
			{
				int_7 = v_align_thermod(int_1,short_2,unsigned_int_6,uni_para);

				int_2 = int_4;
				long_1 = long_2 + long_1;
			}
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, " 5") > 0)
			{
				short short_3 = 1;
				short_2 = short_1 + short_3;
			}
		}
		if(1)
		{
			double_2 = double_1 * double_1;
		}
	}
	return int_8;
}
int v__pr_need_pair_template_mispriming_thermod( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v__pr_need_template_mispriming_thermod( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	return int_1;
	int_2 = v__pr_need_pair_template_mispriming_thermod(char_1);

}
long v_op_set_high_similarity_to_multiple_template_sites( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	short_2 = short_1 * short_1;
	return long_1;
}
double v_oligo_max_template_mispriming( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
char v_primer_mispriming_to_template( long parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,int parameter_6,int parameter_7,int parameter_8,long parameter_9,char parameter_10)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	char char_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	long_1 = v_op_set_high_similarity_to_multiple_template_sites(short_1);

	short_3 = short_2 * short_2;
	short_4 = short_2 * short_3;
	char_1 = char_3 + char_4;
	double_1 = double_2 + double_2;
	int_4 = int_2 * int_3;
	if(1)
	{
		char char_5 = 1;
		char_5 = char_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double double_4 = 1;
		if(1)
		{
			float_1 = float_2;
		}
		double_5 = double_4 * double_1;
		short_1 = short_2 + short_1;
		double_6 = double_5 + double_1;
		double_1 = double_4 + double_4;
		float_2 = v_align(unsigned_int_6,int_1,long_2);

		double_3 = v_oligo_max_template_mispriming(char_6);

		unsigned_int_6 = unsigned_int_3;
		float_1 = float_2;
	}
	short_5 = short_6;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
	float_1 = float_3;
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			short_4 = short_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		}
		long_3 = long_3 + long_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	long_4 = long_2 + long_4;
	float_2 = float_2 + float_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	}
	if(1)
	{
		long_4 = long_4 * long_2;
	}
	char_6 = char_1;
	if(1)
	{
		float_4 = float_1 + float_2;
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			int_5 = int_4 * int_5;
			if(1)
			{
				long long_5 = 1;
				double_3 = double_5 * double_6;
				long_5 = long_1 + long_5;
			}
			if(1)
			{
				int_3 = int_2 + int_4;
			}
		}
		if(1)
		{
			float float_5 = 1;
			float_5 = float_4 + float_1;
		}
	}
	return char_3;
}
int v__pr_need_pair_template_mispriming()
{
	int int_1 = 1;
	return int_1;
}
int v__pr_need_template_mispriming( double parameter_1)
{
	int int_1 = 1;
	return int_1;
	int_1 = v__pr_need_pair_template_mispriming();

}
unsigned int v_oligo_template_mispriming( short parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,float parameter_5,double parameter_6,int parameter_7,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	char controller4vul_1256[2];
	fgets(controller4vul_1256 ,2 ,stdin);
	if( strcmp( controller4vul_1256, "U") > 0)
	{
		char controller4vul_1257[3];
		fgets(controller4vul_1257 ,3 ,stdin);
		if( strcmp( controller4vul_1257, "yW") > 0)
		{
			int_2 = v_primer_mispriming_to_template_thermod(short_1,unsigned_int_2,char_1,unsigned_int_4,int_1,int_3,int_3,int_4,int_4,char_1,uni_para);

			int_4 = int_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
	}
	return unsigned_int_3;
}
float v_op_set_high_similarity_to_non_template_seq( short parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_1;
	float_1 = float_1;
	return float_1;
}
char v_oligo_compute_sequence_and_reverse( long parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5,char parameter_6,char parameter_7)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_2;
	v_p3_reverse_complement(char_1,char_2);

	float_1 = float_1;
	short_2 = short_1 * short_1;
	return char_3;
	v__pr_substr(double_1,int_1,int_1,char_2);

}
float v_oligo_repeat_library_mispriming( short parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,int parameter_5,short parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_7 = 1;
	char char_5 = 1;
	float float_7 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_2;
	int_2 = v_seq_lib_num_seq();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
		v_pr_safe_malloc(short_1);

		float_1 = float_1 * float_2;
	}
	int_2 = int_2 * int_1;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 * float_1;
		float_2 = v_op_set_high_similarity_to_non_template_seq(short_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		int_1 = int_2 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_4 = 1;
			int int_4 = 1;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_3 * short_4;
			}
			if(1)
			{
				int_4 = int_1 * int_3;
			}
			if(1)
			{
				float_3 = float_3 + float_2;
			}
			if(1)
			{
				short_4 = short_4;
			}
			char_3 = char_1 + char_2;
			if(1)
			{
				int int_5 = 1;
				int int_6 = 1;
				int_3 = int_5 * int_6;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
				int_2 = int_1 + int_4;
			}
			if(1)
			{
				long long_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long_3 = long_2 * long_1;
				float_5 = v_align(unsigned_int_6,int_2,long_3);

				double_5 = double_3 * double_4;
			}
			if(1)
			{
				double double_6 = 1;
				float float_6 = 1;
				double_5 = double_6;
				double_6 = double_5 * double_5;
				char_4 = v_oligo_compute_sequence_and_reverse(long_1,char_3,double_5,int_7,int_3,char_4,char_5);

				float_3 = float_6;
				if(1)
				{
				}
			}
		}
	}
	return float_7;
}
int v_op_set_high_hairpin_th( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
long v_oligo_hairpin( int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,long parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float_3 = float_1 + float_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
		double_2 = double_2 + double_1;
		int_1 = v_align_thermod(int_2,short_1,unsigned_int_1,-1 );

		int_1 = v_op_set_high_hairpin_th(int_1);

		double_1 = double_1 * double_2;
	}
	return long_1;
}
void v_calcDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,long parameter_8)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_1;
	long_4 = long_3 * long_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "W>") < 0)
		{
		}
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_2;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
		}
		int_1 = int_1 + int_1;
		int_1 = int_1 + int_1;
		if(1)
		{
			double double_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double_3 = double_4 + double_1;
			char_1 = char_1 * char_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_1 = double_4;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			double_1 = double_1 * double_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
}
char v_strcatc( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return char_1;
}
unsigned int v_drawDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,short parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	long_1 = v_safe_malloc(long_1,float_1);

	char_1 = v_strcatc(char_1,char_2);

}
long v_maxTM( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long_1 = v_safe_malloc(long_2,float_1);

	int_1 = int_1 * int_2;
	double_2 = double_1 + double_1;
	int_2 = int_3 * int_4;
	char_3 = char_1 + char_2;
	char_3 = char_4 * char_2;
	int_6 = int_5 + int_3;
	float_1 = v_Hs(int_6,int_1,int_2);

	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_6 * int_6;
	short_1 = short_1;
	if(1)
	{
		double_4 = double_3 + double_2;
		long_1 = long_1 * long_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		v_Ss(int_1,int_3,int_1);

		double_3 = double_4 + double_3;
		float_1 = float_1 + float_2;
		short_2 = short_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1;
		int_4 = int_7 + int_6;
	}
	if(1)
	{
		double double_5 = 1;
		double_3 = double_1 * double_5;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		float float_3 = 1;
		int_5 = int_3 * int_3;
		float_1 = v_RSH(int_7,int_8,double_1,-1 );

		float_3 = float_2 * float_2;
	}
	if(1)
	{
		int int_9 = 1;
		int_9 = int_4;
		unsigned_int_2 = unsigned_int_3;
	}
	float_5 = float_1 * float_4;
	return long_2;
}
long v_fillMatrix( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	char_1 = v_calc_bulge_internal(int_1,int_2,int_2,int_2,double_1,int_1,int_3,-1 );

	long_3 = long_1 + long_2;
	short_1 = short_1 * short_2;
	int_3 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long_4 = v_safe_malloc(long_4,float_1);

				int_2 = int_1 + int_3;
				double_2 = double_1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					char char_2 = 1;
					long_2 = v_maxTM(int_1,int_1);

					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
					char_2 = char_1 + char_1;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
					for(int looper_3=0; looper_3<1;looper_3++)
					{
						double double_3 = 1;
						double double_4 = 1;
						double_4 = double_3 + double_1;
						int_3 = int_4 * int_3;
						if(1)
						{
							float float_2 = 1;
							double_3 = double_3;
							float_1 = float_2 * float_1;
						}
						for(int looper_4=0; looper_4<1;looper_4++)
						{
							if(1)
							{
								char char_3 = 1;
								char_3 = char_1 + char_3;
								double_5 = double_1 + double_2;
								short_1 = v_LSH(int_4,int_1,double_5);

								short_2 = short_2 + short_2;
								if(1)
								{
									int_2 = int_1 * int_2;
									char_3 = char_1 * char_3;
								}
								if(1)
								{
									unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
									int_2 = int_2 * int_4;
								}
							}
						}
					}
				}
			}
		}
	}
	long_5 = long_4 * long_5;
	return long_5;
}
int v_initMatrix()
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned_int_1 = unsigned_int_1;
				long_1 = long_1;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				long long_2 = 1;
				short_2 = short_1 + short_1;
				long_2 = long_1;
			}
		}
	}
	return int_1;
}
float v_calcHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			short_2 = short_2 * short_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		short short_3 = 1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					int_1 = int_1;
				}
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
				}
			}
		}
		short_2 = short_3;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			long long_1 = 1;
			int int_6 = 1;
			int_3 = int_2 * int_1;
			int_5 = int_4 * int_1;
			short_4 = short_3 + short_3;
			short_1 = short_2 + short_1;
			long_1 = long_1 + long_1;
			int_5 = int_6;
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = double_4 * double_3;
		}
	}
	return float_1;
}
long v_drawHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,int parameter_6)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int_1 = int_1;
	long_1 = long_1 * long_2;
	double_1 = double_2;
	if(1)
	{
		if(1)
		{
			long_3 = v_safe_malloc(long_4,float_1);

			double_2 = double_1 + double_2;
			double_3 = double_1 + double_3;
		}
		if(1)
		{
			double_3 = double_3 * double_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					float float_2 = 1;
					float_2 = float_2 * float_2;
				}
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					long_5 = long_1 + long_3;
				}
			}
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_6 = 1;
			int_2 = int_3;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
			long_3 = long_6;
			float_1 = float_3 * float_3;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1;
		}
	}
	float_3 = float_4 * float_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_4 = 1;
		double_4 = double_2 + double_1;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			long long_7 = 1;
			long long_8 = 1;
			long_8 = long_1 * long_7;
		}
		if(1)
		{
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 + short_1;
			}
			if(1)
			{
				double double_5 = 1;
				double_3 = double_5 * double_2;
			}
		}
	}
	long_5 = long_9 * long_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		long_2 = long_3 * long_4;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
	int_4 = int_3 * int_3;
	return long_5;
}
unsigned int v_push( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	char_1 = char_1 * char_1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_1 = v_safe_malloc(long_2,float_1);

	float_5 = float_4 + float_2;
	return unsigned_int_1;
}
unsigned int v_tracebacku( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_7 = 1;
	int int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	int int_7 = 1;
	short_1 = v_CBI(int_1,int_1,double_1,int_1,int_1,-1 );

	double_1 = double_2 * double_3;
	v_equal(double_4,double_2);

	long_1 = v_Hd5(int_2,int_2);

	float_1 = v_Htstack(int_2,int_3);

	char_3 = char_1 * char_2;
	long_2 = long_2;
	float_1 = v_Hs(int_1,int_1,int_4);

	unsigned_int_1 = unsigned_int_2;
	char_2 = v_END5_1(int_2,int_1);

	short_2 = v_Sd3(int_3,int_3);

	v_END5_4(int_2,int_1);

	long_2 = v_Ststack(int_5,int_3);

	double_6 = double_4 * double_5;
	unsigned_int_3 = v_push(unsigned_int_3,int_3,int_3,int_3,float_2);

	unsigned_int_1 = v_END5_3(int_3,int_2);

	v_Ss(int_3,int_4,int_1);

	long_2 = v_calc_bulge_internal2(int_4,int_2,int_2,int_2,double_7,int_6,int_2,-1 );

	int_3 = int_3 + int_5;
	char_2 = char_1 * char_4;
	if(1)
	{
		long_2 = v_safe_malloc(long_2,float_1);

		unsigned_int_1 = v_END5_2(int_5,int_2);

		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		long_2 = v_Hd3(int_1,int_4);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_1 = v_Sd5(int_2,int_5);

			float_2 = v_calc_hairpin(int_4,int_4,double_8,int_7);

			int_3 = int_7 * int_5;
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
	return unsigned_int_4;
}
int v_max5( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5)
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2@") < 0)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "jH") > 0)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "/") < 0)
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
long v_Ststack( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
float v_Htstack( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
void v_END5_4( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	long_1 = long_2;
	int_1 = int_2 + int_2;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = v_Htstack(int_1,int_3);

	short_3 = short_2 * short_1;
	int_2 = int_4 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_1 * double_2;
		int_4 = int_4 + int_4;
		if(1)
		{
			int int_5 = 1;
			long_2 = v_Ststack(int_3,int_4);

			long_1 = long_2 + long_2;
			int_5 = int_2 + int_3;
			if(1)
			{
				int_1 = int_2 + int_5;
				int_1 = int_2;
			}
			float_3 = float_2 + float_2;
		}
		if(1)
		{
			short_3 = short_3 * short_3;
			int_2 = int_4 * int_4;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long_2 = long_1 + long_1;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			}
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			if(1)
			{
				float float_4 = 1;
				int int_6 = 1;
				double double_3 = 1;
				double double_4 = 1;
				float_2 = float_4 * float_3;
				int_4 = int_6 + int_6;
				double_4 = double_3 + double_4;
			}
		}
	}
	if(1)
	{
	}
}
short v_Sd3( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
long v_Hd3( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_END5_3( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 + char_1;
	short_3 = short_1 + short_2;
	long_1 = v_Hd3(int_1,int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	short_2 = short_3 * short_2;
	double_3 = double_2 * double_1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		double_1 = double_3 + double_2;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
			int_2 = int_1;
			if(1)
			{
				float_3 = float_2 + float_1;
				double_2 = double_3 * double_1;
			}
			unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			char char_2 = 1;
			long_3 = long_2 + long_2;
			char_2 = char_1 + char_1;
			if(1)
			{
				double double_4 = 1;
				short_3 = v_Sd3(int_2,int_2);

				double_1 = double_4 + double_2;
				long_3 = long_2;
			}
			float_2 = float_3;
		}
		if(1)
		{
			if(1)
			{
				int int_3 = 1;
				char_1 = char_1 + char_1;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
				int_2 = int_3 * int_2;
			}
		}
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
float v_Sd5( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
long v_Hd5( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_END5_2( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_2 * double_3;
	short_1 = short_2;
	short_1 = short_2 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		int int_3 = 1;
		double_5 = double_2 * double_3;
		double_3 = double_3 * double_4;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
			double_4 = double_3;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				char_2 = char_1 * char_1;
				char_4 = char_1 * char_3;
			}
			int_3 = int_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "gW") < 0)
		{
			double double_6 = 1;
			int int_4 = 1;
			int int_6 = 1;
			double_4 = double_6 * double_2;
			int_4 = int_4;
			if(1)
			{
				float float_1 = 1;
				double_4 = double_2 * double_4;
				long_1 = v_Hd5(int_1,int_5);

				float_1 = float_2;
			}
			int_3 = int_4 + int_6;
		}
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				short_1 = short_3 + short_3;
				short_2 = short_3 + short_3;
				long_1 = long_1 + long_1;
			}
		}
	}
	if(1)
	{
	}
	return unsigned_int_4;
	float_2 = v_Sd5(int_7,int_2);

}
char v_END5_1( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_2;
	float_2 = float_1 * float_2;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		long long_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_4 = int_4;
		long_1 = long_1;
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 + short_1;
			int_2 = int_3 * int_3;
			if(1)
			{
				int int_5 = 1;
				char_3 = char_1 + char_2;
				int_3 = int_2 + int_5;
			}
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			char_3 = char_1 * char_2;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				long long_2 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				long_2 = long_1 * long_2;
			}
			short_2 = short_2 * short_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
				double_1 = double_2 + double_3;
				int_2 = int_1 * int_2;
			}
		}
	}
	if(1)
	{
	}
	return char_3;
}
void v_calc_terminal_bp( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	char char_8 = 1;
	int_1 = v_max5(double_1,double_1,double_2,double_1,double_2);

	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	char_3 = char_1 + char_2;
	double_1 = double_2 + double_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_5 = int_1 + int_4;
		char_2 = char_4 * char_5;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_10 = 1;
		float float_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_9 = 1;
		char char_10 = 1;
		unsigned_int_4 = v_END5_2(int_1,int_3);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		long_3 = long_1 + long_2;
		char_2 = char_1 * char_2;
		double_2 = double_2 * double_3;
		float_1 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
		char_5 = char_4 + char_6;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
		short_2 = short_3;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
		short_3 = short_2;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
		if(1)
		{
			short_1 = short_1;
			int_1 = int_3 + int_5;
		}
		if(1)
		{
			double_2 = double_4;
			unsigned_int_7 = v_END5_3(int_3,int_6);

			double_4 = double_1 * double_2;
		}
		double_5 = double_1 * double_4;
		double_1 = double_1 + double_5;
		if(1)
		{
			long_1 = long_4 + long_1;
			float_3 = float_1 * float_3;
		}
		if(1)
		{
			long long_5 = 1;
			v_END5_4(int_6,int_5);

			double_1 = double_1;
			long_1 = long_3 * long_5;
		}
		unsigned_int_9 = unsigned_int_2 * unsigned_int_8;
		char_4 = char_5 + char_7;
		if(1)
		{
			unsigned_int_4 = unsigned_int_10 + unsigned_int_8;
			float_4 = float_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_7 * unsigned_int_10;
			char_6 = char_5;
		}
		float_3 = float_3 * float_4;
		unsigned_int_8 = unsigned_int_10 + unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_11 = 1;
			unsigned_int_11 = unsigned_int_11 + unsigned_int_5;
			double_6 = double_3 + double_1;
		}
		if(1)
		{
			short short_4 = 1;
			double_6 = double_4;
			short_3 = short_4 + short_2;
		}
		char_8 = v_END5_1(int_1,int_1);

		long_1 = long_4;
		double_7 = double_4 + double_4;
		char_9 = char_10;
	}
}
long v_comp4loop( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "p") < 0)
		{
		}
		if(1)
		{
		}
	}
	return long_1;
}
short v_comp3loop( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return short_1;
}
float v_calc_hairpin( int parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_RSH(int_3,int_4,double_1,-1 );

	int_1 = int_4 + int_3;
	int_2 = int_1 * int_3;
	int_3 = int_1 + int_3;
	int_1 = int_5 * int_6;
	if(1)
	{
		long_1 = v_safe_malloc(long_2,float_3);

		int_3 = int_3 * int_3;
		int_5 = int_1 + int_2;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 + float_1;
		long_4 = long_2 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		float_3 = float_1 + float_5;
	}
	if(1)
	{
		char char_3 = 1;
		short_1 = v_comp3loop(unsigned_int_5,short_2);

		short_1 = short_1 * short_3;
		long_1 = v_comp4loop(char_1,long_2);

		char_1 = char_2 + char_3;
	}
	if(1)
	{
		float float_6 = 1;
		long_4 = long_1;
		float_1 = float_6 * float_6;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_2 + char_1;
		if(1)
		{
			if(1)
			{
				char char_5 = 1;
				char_2 = char_5 + char_1;
			}
			if(1)
			{
				int_7 = int_4;
			}
		}
	}
	if(1)
	{
		long_4 = long_3 * long_3;
		if(1)
		{
			if(1)
			{
				double_1 = double_1 + double_3;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
			}
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_5 = int_8 + int_3;
		int_8 = int_6 + int_3;
	}
	if(1)
	{
		double double_4 = 1;
		short_4 = short_4 * short_1;
		double_2 = double_4 * double_3;
	}
	unsigned_int_2 = unsigned_int_7;
	short_3 = short_5;
	int_4 = int_2 * int_7;
	if(1)
	{
		unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	}
	short_6 = short_4;
	return float_1;
}
float v_RSH( int parameter_1,int parameter_2,double parameter_3,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_11 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_1;
	long_3 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_2 * char_3;
	int_2 = int_1 * int_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		int_1 = int_2 + int_3;
		double_3 = double_1 + double_4;
	}
	double_2 = double_5 + double_2;
	long_1 = long_3;
	double_4 = double_5 + double_4;
	if(1)
	{
		double_2 = double_2;
		int_1 = int_3 + int_3;
		short_3 = short_1 + short_2;
	}
	char controller4vul_1279[3];
	fgets(controller4vul_1279 ,3 ,stdin);
	if( strcmp( controller4vul_1279, "tA") > 0)
	{
		long long_4 = 1;
		float_2 = float_1 + float_1;
		long_4 = long_2 * long_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			float_2 = float_1 + float_3;
			char_1 = char_1 + char_4;
			int_2 = int_1 + int_2;
		}
		double_1 = double_4 * double_4;
		char controller4vul_1280[2];
		fgets(controller4vul_1280 ,2 ,stdin);
		if( strcmp( controller4vul_1280, "1") > 0)
		{
			long long_5 = 1;
			long_5 = long_1 * long_4;
			char controller4vul_1281[3];
			fgets(controller4vul_1281 ,3 ,stdin);
			if( strcmp( controller4vul_1281, "0^") < 0)
			{
				if(uni_para == 893)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				char_4 = char_4 * char_1;
				double_3 = double_4;
				int_5 = int_4 * int_3;
			}
		}
		if(1)
		{
			double_6 = double_7;
			short_1 = short_3 + short_1;
			int_1 = int_4;
		}
	}
	if(1)
	{
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4;
		float_2 = float_4;
		double_7 = double_7 + double_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			int_1 = int_5 + int_4;
			char_4 = char_3 * char_4;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
		if(1)
		{
			double_8 = double_5 * double_6;
			if(1)
			{
				double_5 = double_9 * double_10;
				float_2 = float_3 * float_1;
				short_2 = short_3 + short_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			float_3 = float_1;
			char_1 = char_1 * char_1;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char char_5 = 1;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_7;
		short_3 = short_2 * short_1;
		char_5 = char_1 + char_1;
		if(1)
		{
			float float_5 = 1;
			char char_6 = 1;
			float_3 = float_2 * float_5;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_7;
			char_6 = char_6 + char_4;
		}
		short_1 = short_2;
		if(1)
		{
			char_2 = char_5 * char_1;
			if(1)
			{
				short_1 = short_3 + short_3;
				int_4 = int_2 + int_3;
				double_1 = double_7 * double_9;
			}
		}
		if(1)
		{
			float_3 = float_2 + float_1;
			double_1 = double_4 * double_5;
			int_6 = int_4 * int_3;
		}
	}
	double_10 = double_8 * double_5;
	char_8 = char_1 + char_7;
	double_10 = double_3 + double_5;
	unsigned_int_8 = unsigned_int_3 * unsigned_int_8;
	double_5 = double_11 * double_9;
	if(1)
	{
		if(1)
		{
			int_3 = int_2 * int_6;
			int_4 = int_2 + int_4;
		}
		if(1)
		{
			int int_7 = 1;
			float float_6 = 1;
			int_6 = int_7 * int_4;
			float_2 = float_2 + float_6;
		}
	}
	if(1)
	{
		double_11 = double_11 * double_4;
		double_4 = double_2 * double_7;
	}
	int_3 = int_3 + int_4;
}
char v_calc_bulge_internal( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	long long_6 = 1;
	int int_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	float_1 = float_2;
	short_2 = short_1 * short_1;
	double_2 = double_2;
	double_2 = double_1 + double_3;
	int_3 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long_1 = long_1 + long_1;
		float_2 = float_3;
		if(1)
		{
			short_3 = short_1 + short_3;
		}
		if(1)
		{
			double_2 = double_4;
		}
	}
	if(1)
	{
		short_4 = short_2 + short_1;
		double_1 = double_5;
		if(1)
		{
			short_2 = short_1 + short_5;
		}
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		double_1 = double_1 + double_3;
	}
	if(1)
	{
		double_6 = double_7;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		long_3 = long_3 + long_4;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	char controller4vul_1276[3];
	fgets(controller4vul_1276 ,3 ,stdin);
	if( strcmp( controller4vul_1276, "J9") > 0)
	{
		char char_3 = 1;
		char controller4vul_1277[3];
		fgets(controller4vul_1277 ,3 ,stdin);
		if( strcmp( controller4vul_1277, "bN") > 0)
		{
			char char_4 = 1;
			char controller4vul_1278[3];
			fgets(controller4vul_1278 ,3 ,stdin);
			if( strcmp( controller4vul_1278, " j") > 0)
			{
				long long_5 = 1;
				float_4 = v_RSH(int_2,int_3,double_4,uni_para);

				long_6 = long_5 * long_5;
				char_3 = char_1 + char_3;
			}
			if(1)
			{
				int_1 = int_1 * int_1;
				char_4 = char_1 * char_4;
			}
			double_5 = double_3 + double_3;
			long_4 = long_1 * long_4;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_4 * int_1;
				float_2 = float_5 + float_3;
			}
			char_3 = char_4 + char_2;
			int_6 = int_1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
			if(1)
			{
				int int_7 = 1;
				int_8 = int_7 * int_3;
				double_4 = double_4 * double_6;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			long long_8 = 1;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
			double_4 = double_2 * double_2;
			int_1 = int_1;
			double_6 = double_7;
			if(1)
			{
				long long_7 = 1;
				float_5 = float_2;
				long_7 = long_2;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_8;
			}
			long_2 = long_8 + long_2;
			unsigned_int_8 = unsigned_int_3 + unsigned_int_5;
			short_3 = short_5;
			if(1)
			{
				char char_6 = 1;
				char_5 = char_5 * char_2;
				char_6 = char_6 * char_3;
			}
		}
	}
	if(1)
	{
		short short_6 = 1;
		double double_8 = 1;
		int int_9 = 1;
		short_2 = short_2 + short_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
		short_6 = short_4;
		double_8 = double_2 * double_6;
		if(1)
		{
			int_4 = int_6 + int_3;
			short_2 = short_6;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_9 + unsigned_int_1;
			int_9 = int_6 * int_8;
		}
		long_4 = long_3 + long_2;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
		unsigned_int_5 = unsigned_int_5;
		if(1)
		{
			int int_10 = 1;
			int int_11 = 1;
			double_8 = double_6;
			int_11 = int_10 * int_9;
		}
		double_9 = double_3 * double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		int int_12 = 1;
		float float_6 = 1;
		unsigned_int_10 = unsigned_int_6;
		int_12 = int_12 * int_4;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
		double_7 = double_9 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_9 * unsigned_int_4;
			float_6 = float_5 * float_3;
		}
		if(1)
		{
			unsigned_int_10 = unsigned_int_6;
			double_5 = double_1 + double_4;
		}
		float_6 = float_3;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_10 = unsigned_int_2 + unsigned_int_6;
		if(1)
		{
			long_6 = long_4 + long_1;
			char_5 = char_5;
		}
	}
	double_2 = double_10 + double_11;
	return char_5;
}
void v_equal( double parameter_1,double parameter_2)
{
	if(1)
	{
	}
}
short v_LSH( int parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	double double_6 = 1;
	char_3 = char_1 + char_2;
	float_1 = float_1 * float_1;
	char_3 = char_3 * char_4;
	short_2 = short_1 + short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		char_5 = char_2 + char_1;
		char_5 = char_3 + char_1;
	}
	double_3 = double_1 * double_2;
	long_2 = long_1 * long_2;
	long_1 = long_1 * long_3;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 + long_4;
		int_2 = int_1 * int_1;
		float_1 = float_2 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_2 + short_2;
		if(1)
		{
			int_2 = int_2 + int_1;
			int_3 = int_3 * int_2;
			int_5 = int_4 + int_1;
		}
		int_6 = int_4;
		if(1)
		{
			float_1 = float_3;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
				unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
			int_2 = int_4;
			long_2 = long_2 + long_3;
		}
	}
	if(1)
	{
		int_3 = int_1 * int_1;
		double_3 = double_3 + double_2;
		long_5 = long_5 + long_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
			int_5 = int_1 * int_3;
			long_2 = long_3;
		}
		long_3 = long_3;
		if(1)
		{
			char_3 = char_2 * char_5;
			if(1)
			{
				long long_6 = 1;
				double double_4 = 1;
				long_1 = long_6 * long_3;
				double_5 = double_1 + double_4;
				short_4 = short_3 + short_3;
			}
		}
		if(1)
		{
			short_1 = short_4 + short_1;
			char_6 = char_1 + char_5;
			int_6 = int_5 * int_1;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_5 = unsigned_int_6;
		float_1 = float_4 * float_5;
		float_2 = float_3 + float_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
			short_3 = short_4;
			char_1 = char_3 + char_4;
		}
		unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
		if(1)
		{
			float_3 = float_4;
			if(1)
			{
				float float_6 = 1;
				float float_7 = 1;
				int_7 = int_6 + int_6;
				float_7 = float_6 * float_3;
				short_4 = short_3;
			}
		}
		if(1)
		{
			long_2 = long_5 + long_5;
			int_6 = int_4 + int_7;
			int_3 = int_7;
		}
	}
	double_3 = double_5;
	char_4 = char_6;
	char_2 = char_5;
	int_7 = int_4 * int_3;
	double_5 = double_6 * double_6;
	if(1)
	{
		if(1)
		{
			char char_7 = 1;
			char_7 = char_4 + char_2;
			int_3 = int_2 + int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_5 = unsigned_int_8 * unsigned_int_5;
			unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
		}
	}
	if(1)
	{
		int int_8 = 1;
		float float_8 = 1;
		int_1 = int_8;
		float_8 = float_2;
	}
	return short_3;
}
int v_traceback( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char_1 = v_calc_bulge_internal(int_1,int_1,int_1,int_2,double_1,int_1,int_2,uni_para);

	double_3 = double_1 * double_2;
	short_2 = short_1 + short_1;
	return int_3;
}
long v_calc_bulge_internal2( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int int_7 = 1;
	float float_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	long long_5 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	float_2 = float_1 * float_1;
	int_1 = int_2 * int_3;
	short_2 = short_1 * short_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		char_4 = char_3 * char_3;
	}
	if(1)
	{
		char_3 = char_4 + char_5;
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		double_1 = double_2 * double_4;
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	double_5 = double_3;
	char controller4vul_1273[3];
	fgets(controller4vul_1273 ,3 ,stdin);
	if( strcmp( controller4vul_1273, "T6") < 0)
	{
		int int_6 = 1;
		char controller4vul_1274[2];
		fgets(controller4vul_1274 ,2 ,stdin);
		if( strcmp( controller4vul_1274, ")") > 0)
		{
			char controller4vul_1275[3];
			fgets(controller4vul_1275 ,3 ,stdin);
			if( strcmp( controller4vul_1275, "6g") > 0)
			{
				int_3 = v_traceback(int_2,int_4,double_1,int_3,int_3,int_5,long_3,uni_para);

				float_2 = float_4;
				int_4 = int_5 + int_5;
			}
			if(1)
			{
				int_6 = int_5 + int_2;
				short_2 = short_4 + short_1;
			}
			if(1)
			{
				int_6 = int_3 + int_5;
				int_6 = int_6 + int_5;
			}
			int_4 = int_5 * int_7;
			short_1 = short_1 + short_1;
			if(1)
			{
				float_1 = float_5 * float_2;
				unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			}
		}
		if(1)
		{
			char char_7 = 1;
			long_4 = long_3 * long_3;
			if(1)
			{
				char char_6 = 1;
				char_6 = char_5;
			}
			float_5 = float_5 + float_3;
			if(1)
			{
				int_5 = int_4 * int_7;
			}
			if(1)
			{
				int_1 = int_3 + int_6;
				int_7 = int_3 + int_6;
			}
			short_1 = short_4 + short_3;
			char_7 = char_3;
			if(1)
			{
				double double_6 = 1;
				unsigned_int_4 = unsigned_int_1;
				double_1 = double_4 * double_6;
			}
		}
	}
	if(1)
	{
		float_5 = float_3 * float_1;
		if(1)
		{
			float_1 = float_4;
		}
		char_3 = char_3;
		if(1)
		{
			int_1 = int_3 + int_7;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
			double_7 = double_4 + double_2;
		}
		long_2 = long_4 * long_2;
		long_5 = long_4 * long_3;
		if(1)
		{
			if(1)
			{
				short_3 = short_3 + short_1;
				unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
			}
		}
	}
	if(1)
	{
		double double_8 = 1;
		short short_5 = 1;
		short short_6 = 1;
		short short_7 = 1;
		long_5 = long_4 * long_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
		double_8 = double_5 * double_7;
		if(1)
		{
			short_4 = short_4 * short_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			int_3 = int_5;
		}
		int_2 = int_1 + int_1;
		short_7 = short_5 + short_6;
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	return long_5;
}
short v_CBI( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				short short_1 = 1;
				double_3 = double_2 * double_2;
				short_1 = short_2;
			}
			char controller4vul_1270[2];
			fgets(controller4vul_1270 ,2 ,stdin);
			if( strcmp( controller4vul_1270, "*") < 0)
			{
				double_1 = double_1;
				char controller4vul_1271[2];
				fgets(controller4vul_1271 ,2 ,stdin);
				if( strcmp( controller4vul_1271, "0") < 0)
				{
					char controller4vul_1272[3];
					fgets(controller4vul_1272 ,3 ,stdin);
					if( strcmp( controller4vul_1272, "`w") < 0)
					{
						float float_1 = 1;
						char char_1 = 1;
						long_1 = v_calc_bulge_internal2(int_1,int_2,int_1,int_3,double_2,int_2,int_1,uni_para);

						float_1 = float_1;
						char_1 = char_1 * char_1;
					}
					if(1)
					{
						char char_2 = 1;
						double_3 = double_1 + double_2;
						char_2 = char_2 + char_2;
					}
				}
			}
		}
	}
	return short_2;
}
float v_Hs( int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
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
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1;
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
void v_Ss( int parameter_1,int parameter_2,int parameter_3)
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
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
	}
	if(1)
	{
	}
}
unsigned int v_maxTM2( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	double_4 = double_3 * double_3;
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_2;
	long_1 = long_1 * long_2;
	v_Ss(int_1,int_1,int_2);

	float_2 = float_1 * float_1;
	int_2 = int_3 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_3 = double_3 + double_2;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		short_1 = short_1;
		float_1 = float_3 * float_4;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_3 * int_1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		short short_2 = 1;
		int_3 = int_3 + int_2;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		float_1 = v_Hs(int_3,int_1,int_2);

		int_5 = int_4 * int_2;
		int_3 = int_5 + int_5;
	}
	return unsigned_int_1;
}
unsigned int v_fillMatrix2( int parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_1267[2];
			fgets(controller4vul_1267 ,2 ,stdin);
			if( strcmp( controller4vul_1267, "_") > 0)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				short short_3 = 1;
				float float_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				short_2 = short_2 + short_2;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				float_2 = float_1 * float_1;
				short_2 = short_1 * short_3;
				float_5 = float_3 + float_4;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
				unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
				char controller4vul_1268[2];
				fgets(controller4vul_1268 ,2 ,stdin);
				if( strcmp( controller4vul_1268, " ") < 0)
				{
					short short_5 = 1;
					short short_6 = 1;
					char controller4vul_1269[2];
					fgets(controller4vul_1269 ,2 ,stdin);
					if( strcmp( controller4vul_1269, "H") < 0)
					{
						double double_4 = 1;
						short_4 = v_CBI(int_2,int_1,double_3,int_1,int_1,uni_para);

						double_4 = double_4 * double_4;
						int_1 = int_2;
					}
					double_3 = double_3;
					short_5 = short_5 * short_6;
				}
			}
		}
	}
	long_2 = long_1 * long_1;
	return unsigned_int_6;
}
unsigned int v_initMatrix2()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_4 = 1;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				long_4 = long_3 + long_3;
				char_2 = char_1 * char_1;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				long_4 = long_3 + long_4;
				short_1 = short_2;
			}
		}
	}
	return unsigned_int_1;
}
double v_safe_recalloc( double parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	return double_1;
	double_2 = v_safe_realloc(double_2,char_1);

}
unsigned int v_saltCorrectS( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return unsigned_int_2;
}
unsigned int v_reverse( char parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v_length_unsig_char(long_1);

	double_1 = double_1 + double_2;
	double_2 = double_1 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_3 = long_2 + long_2;
		double_2 = double_4 * double_1;
		short_2 = short_1 + short_1;
	}
	return unsigned_int_1;
}
long v_symmetry_thermo( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	return long_1;
	char_1 = v_length_unsig_char(long_1);

}
char v_length_unsig_char( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_2;
	int_3 = int_2;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	return char_2;
}
void v_thal( short parameter_1,long parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	short short_4 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	long long_7 = 1;
	short short_5 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	long long_8 = 1;
	long long_9 = 1;
	char char_5 = 1;
	int int_11 = 1;
	short short_8 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	double_3 = double_3 * double_3;
	int_2 = int_3;
	short_1 = short_1 + short_1;
	int_3 = int_2 * int_4;
	int_6 = int_5 + int_5;
	int_1 = int_4 * int_2;
	double_1 = double_1 + double_3;
	long_2 = long_1 + long_2;
	float_1 = float_1 + float_1;
	long_3 = long_3 * long_2;
	unsigned_int_2 = unsigned_int_1;
	int_6 = int_7 + int_6;
	if(1)
	{
		double_3 = double_3;
	}
	unsigned_int_3 = unsigned_int_1;
	int_3 = int_7;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	int_9 = int_8 + int_5;
	short_3 = short_2 * short_1;
	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_4;
	if(1)
	{
	}
	double_4 = double_5;
	int_5 = int_2 * int_2;
	double_5 = double_5 + double_5;
	if(1)
	{
		char_2 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		double_4 = double_6;
	}
	if(1)
	{
		float_5 = float_3 + float_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		int_9 = int_8 * int_1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
		long_3 = long_5 + long_5;
		int_2 = int_6 * int_7;
	}
	if(1)
	{
		short_2 = short_3 + short_1;
		int_6 = int_8;
		long_2 = long_2;
		double_8 = double_7 * double_5;
	}
	if(1)
	{
		char_2 = char_1;
		double_9 = double_7 + double_4;
		double_3 = double_2;
		float_1 = float_5 + float_1;
		int_9 = int_7 + int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_7;
		long_5 = long_5 + long_4;
		if(1)
		{
			int_2 = int_6 * int_5;
		}
		if(1)
		{
			double_7 = double_6;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			long_6 = long_2;
			float_5 = float_1 * float_4;
		}
		unsigned_int_4 = unsigned_int_4;
		short_1 = short_4 + short_1;
		int_6 = int_5;
		int_9 = int_9 * int_6;
	}
	if(1)
	{
		double_10 = double_6 * double_9;
		short_3 = short_2 + short_4;
		unsigned_int_4 = unsigned_int_8;
		unsigned_int_1 = unsigned_int_7;
	}
	double_7 = double_4 * double_9;
	double_1 = double_1;
	int_2 = int_7 * int_6;
	short_4 = short_4 * short_3;
	long_6 = long_5 + long_2;
	if(1)
	{
		long_3 = long_2 + long_5;
		double_2 = double_2 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_3 + long_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = int_9 * int_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_9 = int_1 + int_6;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_4 = int_9 + int_1;
	}
	float_4 = float_4 + float_3;
	if(1)
	{
		double double_11 = 1;
		double double_12 = 1;
		double_5 = double_4 * double_7;
		long_6 = long_5;
		char_1 = char_2 * char_3;
		long_7 = long_1 + long_4;
		double_5 = double_2;
		int_2 = int_6;
		int_2 = int_5;
		double_6 = double_1 * double_7;
		short_5 = short_5;
		char_3 = char_3 + char_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_1 = int_10 + int_7;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_9;
			if(1)
			{
				float_4 = float_4 * float_2;
			}
			if(1)
			{
				short short_6 = 1;
				short_4 = short_5 + short_6;
			}
		}
		if(1)
		{
			char_4 = char_2 * char_4;
		}
		if(1)
		{
			long_9 = long_2 * long_8;
		}
		int_5 = int_10 * int_1;
		float_3 = float_1 + float_3;
		char_4 = char_5 + char_3;
		float_1 = float_5;
		short_3 = short_2;
		short_2 = short_2 + short_2;
		float_3 = float_1 * float_2;
		double_11 = double_12;
		int_4 = int_11 + int_10;
	}
	char controller4vul_1264[3];
	fgets(controller4vul_1264 ,3 ,stdin);
	if( strcmp( controller4vul_1264, "7G") > 0)
	{
		char char_6 = 1;
		short short_7 = 1;
		char char_7 = 1;
		char char_8 = 1;
		short short_9 = 1;
		int int_12 = 1;
		int int_13 = 1;
		int int_14 = 1;
		short short_10 = 1;
		char char_9 = 1;
		short short_11 = 1;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_9;
		float_5 = float_2 * float_5;
		char_2 = char_6 + char_4;
		double_3 = double_4 + double_6;
		long_2 = long_8 * long_7;
		int_5 = int_7 + int_2;
		int_4 = int_5;
		float_5 = float_5 * float_2;
		unsigned_int_9 = unsigned_int_8;
		char controller4vul_1265[2];
		fgets(controller4vul_1265 ,2 ,stdin);
		if( strcmp( controller4vul_1265, "J") < 0)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					unsigned_int_3 = unsigned_int_9 * unsigned_int_2;
					short_2 = short_7 * short_3;
					char_7 = char_7 + char_1;
					char_1 = char_6 + char_5;
					char controller4vul_1266[2];
					fgets(controller4vul_1266 ,2 ,stdin);
					if( strcmp( controller4vul_1266, "u") < 0)
					{
						unsigned_int_2 = v_fillMatrix2(int_4,short_8,uni_para);

						char_2 = char_1 * char_8;
						unsigned_int_7 = unsigned_int_1 * unsigned_int_8;
						unsigned_int_7 = unsigned_int_4;
					}
				}
			}
		}
		int_6 = int_6 + int_2;
		double_10 = double_1 + double_8;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			double_8 = double_2 * double_10;
		}
		if(1)
		{
			float float_6 = 1;
			float_4 = float_6 * float_5;
			char_8 = char_6 + char_2;
			unsigned_int_4 = unsigned_int_5;
			short_5 = short_5 + short_9;
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				double double_13 = 1;
				double_13 = double_9 * double_3;
				double_3 = double_10 * double_7;
				char_1 = char_1;
				int_4 = int_8 + int_11;
				if(1)
				{
					int_6 = int_6;
					short_9 = short_7;
				}
			}
		}
		if(1)
		{
			int_12 = int_9 * int_8;
		}
		int_10 = int_13 * int_14;
		int_13 = int_2 + int_8;
		short_9 = short_3 + short_10;
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			int_8 = int_12 * int_4;
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			long_9 = long_7 + long_9;
		}
		if(1)
		{
			double double_14 = 1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
			if(1)
			{
				unsigned_int_6 = unsigned_int_6 + unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			}
			double_5 = double_14 + double_2;
			char_3 = char_3 * char_6;
		}
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			unsigned_int_6 = unsigned_int_6 + unsigned_int_10;
			int_3 = int_10 * int_7;
		}
		int_11 = int_2 * int_13;
		short_1 = short_9 * short_2;
		double_1 = double_1;
		char_2 = char_5 + char_9;
		float_1 = float_4;
		unsigned_int_6 = unsigned_int_2;
		int_7 = int_11 * int_9;
		char_3 = char_7;
		short_11 = short_11;
	}
}
int v_align_thermod( int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_3;
	if(1)
	{
		short short_2 = 1;
		short_3 = short_1 + short_2;
		float_2 = float_1 + float_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_1261[2];
	fgets(controller4vul_1261 ,2 ,stdin);
	if( strcmp( controller4vul_1261, "H") < 0)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		char controller4vul_1262[2];
		fgets(controller4vul_1262 ,2 ,stdin);
		if( strcmp( controller4vul_1262, "8") < 0)
		{
			float float_3 = 1;
			char controller4vul_1263[2];
			fgets(controller4vul_1263 ,2 ,stdin);
			if( strcmp( controller4vul_1263, "?") > 0)
			{
				double double_1 = 1;
				v_thal(short_3,long_1,short_1,uni_para);

				double_1 = double_1;
			}
			float_2 = float_1 + float_3;
		}
	}
	int_3 = int_3 + int_3;
	return int_1;
}
long v_oligo_compl_thermod( double parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	double double_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_1 = 1;
	float_1 = v_op_set_high_self_end(unsigned_int_1);

	int_1 = int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		int_3 = int_2 + int_2;
		char_1 = v_op_set_high_self_any(short_4);

		int_2 = int_1 + int_2;
		double_2 = double_1 + double_1;
		if(1)
		{
		}
	}
	short_6 = short_5 * short_5;
	if(1)
	{
		float float_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		int_3 = v_align_thermod(int_1,short_5,unsigned_int_1,-1 );

		float_2 = float_1 + float_2;
		double_3 = double_2 + double_2;
		char_1 = char_1 * char_2;
		if(1)
		{
		}
	}
	return long_1;
}
int v_p3_ol_is_ok( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_p3_ol_is_uninitialized()
{
	int int_1 = 1;
	return int_1;
}
float v_op_set_high_self_end( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
char v_op_set_high_self_any( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_3 + int_1;
	return char_1;
}
float v__dpal_long_nopath_maxgap1_local_end( char parameter_1,double parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	float float_3 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	long long_5 = 1;
	float float_4 = 1;
	short short_2 = 1;
	int int_8 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_11 = 1;
	int int_12 = 1;
	unsigned int unsigned_int_10 = 1;
	short_1 = short_1;
	double_1 = double_2;
	double_4 = double_2 + double_3;
	char_2 = char_1 + char_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_4;
	if(1)
	{
		long_1 = long_1;
	}
	float_1 = float_2;
	if(1)
	{
		int_3 = int_4 * int_3;
	}
	short_1 = short_1;
	if(1)
	{
		char_4 = char_3 + char_4;
	}
	short_1 = short_1 + short_1;
	long_2 = long_2;
	double_3 = double_4 + double_1;
	char_2 = char_1 + char_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 + int_4;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		float_1 = float_1 + float_3;
	}
	char_6 = char_4;
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	long_1 = long_1 * long_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_2 * double_3;
		if(1)
		{
			long_2 = long_2 + long_2;
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		int_1 = int_4 + int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			int_6 = int_4 * int_5;
		}
		int_5 = int_7 * int_5;
		long_4 = long_3 + long_3;
		if(1)
		{
			long_1 = long_5 * long_4;
		}
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			float_4 = float_4 + float_3;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
			if(1)
			{
				unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
			}
			char_5 = char_3 + char_3;
			if(1)
			{
				short_2 = short_1 + short_1;
			}
			int_8 = int_4 + int_7;
			if(1)
			{
				double_5 = double_1 + double_2;
			}
			int_5 = int_8 * int_2;
		}
		float_1 = float_1 * float_3;
		double_1 = double_6 + double_7;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
	}
	short_2 = v_fail_action(long_5,long_2);

	double_6 = double_4;
	int_6 = int_9 * int_10;
	if(1)
	{
		long_3 = long_5 * long_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
	}
	double_5 = double_6 * double_3;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
	if(1)
	{
		double_5 = double_7 + double_6;
	}
	short_4 = short_3 * short_1;
	if(1)
	{
		unsigned_int_8 = unsigned_int_3;
	}
	if(1)
	{
		int_4 = int_11 * int_1;
	}
	unsigned_int_7 = unsigned_int_8;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned int unsigned_int_9 = 1;
		double double_9 = 1;
		int_7 = int_12 * int_5;
		if(1)
		{
			double double_8 = 1;
			double_1 = double_2 + double_8;
		}
		int_10 = int_7;
		if(1)
		{
			int_8 = int_2 * int_11;
		}
		unsigned_int_3 = unsigned_int_9 * unsigned_int_9;
		if(1)
		{
			double_5 = double_6 * double_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_10 * unsigned_int_1;
		}
		double_3 = double_9 * double_3;
	}
	int_8 = int_7 * int_12;
	char_4 = char_2 + char_6;
	float_4 = float_3;
	unsigned_int_3 = unsigned_int_10 * unsigned_int_10;
	short_1 = short_4 + short_1;
	int_5 = int_11;
	return float_4;
}
long v__dpal_long_nopath_maxgap1_global_end( long parameter_1,float parameter_2,float parameter_3,char parameter_4,double parameter_5,char parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_7 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	long long_6 = 1;
	float_2 = float_1 + float_1;
	int_3 = int_1 + int_2;
	long_3 = long_1 + long_2;
	int_1 = int_3 * int_2;
	int_5 = int_2 * int_4;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_2;
	float_4 = float_3 * float_3;
	if(1)
	{
		int_1 = int_3 * int_6;
	}
	float_4 = float_4 * float_3;
	if(1)
	{
		long_3 = long_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_7 = int_6 + int_7;
	}
	double_2 = double_3;
	float_3 = float_1 * float_5;
	double_3 = double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_4 = float_6 + float_6;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_6;
		if(1)
		{
			int_1 = int_5 * int_5;
		}
		float_8 = float_7 + float_4;
		if(1)
		{
			short_1 = v_fail_action(long_2,long_1);

			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
		float_4 = float_4 + float_1;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		float_5 = float_8 + float_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_2 = 1;
		float float_9 = 1;
		double_5 = double_1 * double_4;
		char_2 = char_1 + char_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		}
		double_1 = double_5;
		long_3 = long_2 * long_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short_4 = short_2 + short_3;
			if(1)
			{
				long long_4 = 1;
				long_2 = long_4 + long_1;
			}
			int_7 = int_5;
			if(1)
			{
				unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
			}
			unsigned_int_1 = unsigned_int_4;
			unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
		}
		unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			char_3 = char_1 * char_2;
		}
		float_6 = float_8 * float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		double_2 = double_1;
		long_2 = long_5 + long_3;
		if(1)
		{
			double_5 = double_5 + double_2;
		}
		unsigned_int_7 = unsigned_int_8 + unsigned_int_4;
		float_9 = float_8 * float_7;
		double_1 = double_4 * double_5;
		long_2 = long_5;
	}
	unsigned_int_6 = unsigned_int_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_5 = 1;
		short short_6 = 1;
		int int_8 = 1;
		float float_10 = 1;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			double_5 = double_2 + double_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_6 + unsigned_int_8;
			}
			unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
			if(1)
			{
				unsigned_int_6 = unsigned_int_8 * unsigned_int_7;
			}
			int_2 = int_4 * int_4;
			short_3 = short_5 + short_3;
		}
		short_2 = short_6 + short_2;
		double_1 = double_5 * double_5;
		if(1)
		{
			double_5 = double_5 + double_3;
		}
		int_1 = int_2 + int_3;
		if(1)
		{
			char_3 = char_1 * char_1;
		}
		int_6 = int_7 * int_1;
		long_2 = long_5 * long_5;
		if(1)
		{
			short_4 = short_5 * short_4;
		}
		int_7 = int_4 * int_8;
		int_7 = int_7 * int_4;
		int_4 = int_3 * int_6;
		float_3 = float_10 * float_1;
	}
	double_5 = double_6 * double_5;
	long_2 = long_1 * long_2;
	int_3 = int_7;
	long_6 = long_2;
	int_6 = int_3 * int_1;
	int_1 = int_7 * int_7;
	return long_3;
}
unsigned int v__dpal_long_nopath_maxgap1_local( int parameter_1,long parameter_2,int parameter_3,float parameter_4,long parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	double double_9 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	long_1 = long_1 + long_2;
	char_1 = char_2;
	float_1 = float_1 + float_1;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_1 + char_2;
	double_2 = double_3 * double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		long_3 = long_2;
	}
	int_3 = int_2 + int_3;
	if(1)
	{
		short_2 = short_3;
	}
	char_4 = char_1 * char_3;
	if(1)
	{
		int_3 = int_4;
	}
	double_4 = double_2 * double_2;
	double_5 = double_3 * double_2;
	float_2 = float_2 + float_3;
	double_3 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_4 * float_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_6;
		}
		if(1)
		{
			float_1 = float_5 * float_3;
		}
		short_2 = v_fail_action(long_3,long_3);

		int_1 = int_1 + int_1;
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		int_5 = int_1 * int_2;
	}
	int_2 = int_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_3 * long_2;
		if(1)
		{
			double_5 = double_5 + double_6;
		}
		short_3 = short_2 + short_3;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			long_2 = long_3 + long_1;
		}
		int_3 = int_3 + int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_6 = 1;
		float_5 = float_4 + float_6;
		if(1)
		{
			int_2 = int_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		}
		int_5 = int_2 + int_2;
		char_2 = char_4;
		if(1)
		{
			short_3 = short_1 * short_1;
		}
		short_2 = short_4 * short_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 * unsigned_int_6;
		}
		if(1)
		{
			int_3 = int_6 * int_2;
		}
		char_1 = char_3 * char_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_7 = 1;
			char char_5 = 1;
			float float_7 = 1;
			double double_8 = 1;
			unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
			if(1)
			{
				long_1 = long_1 * long_2;
			}
			char_1 = char_4 * char_5;
			char controller_17[3];
			fgets(controller_17 ,3 ,stdin);
			if( strcmp( controller_17, "wA") > 0)
			{
				double double_7 = 1;
				double_6 = double_4 * double_7;
			}
			float_7 = float_7 + float_1;
			if(1)
			{
				int_1 = int_2 + int_6;
			}
			if(1)
			{
				float_1 = float_6;
			}
			double_6 = double_1 + double_8;
		}
		unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
		int_5 = int_2 + int_5;
		int_1 = int_2 * int_3;
		short_5 = short_3 + short_3;
	}
	int_4 = int_7;
	unsigned_int_9 = unsigned_int_6 * unsigned_int_8;
	short_1 = short_5;
	short_4 = short_1 + short_2;
	short_6 = short_6 * short_4;
	double_4 = double_9;
	return unsigned_int_5;
}
double v__dpal_long_nopath_generic( double parameter_1,char parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,double parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_7 = 1;
	short_2 = short_1 + short_2;
	short_1 = short_3 + short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_1 + short_3;
	char_2 = char_1 + char_1;
	int_1 = int_2;
	short_3 = short_4 + short_2;
	short_5 = short_5 * short_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2 + short_3;
	int_1 = int_1 * int_3;
	if(1)
	{
		int_2 = int_3 * int_2;
	}
	int_1 = int_2 + int_2;
	if(1)
	{
		int_4 = int_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_1;
		if(1)
		{
			int_4 = int_3 * int_1;
		}
		short_6 = short_5;
	}
	double_1 = double_1 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_4 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
			if(1)
			{
				float float_2 = 1;
				double_1 = double_1 + double_1;
				float_2 = float_1 * float_1;
				long_2 = long_1 + long_2;
			}
		}
		if(1)
		{
			if(1)
			{
				float_4 = float_3 + float_3;
			}
		}
		long_4 = long_2 * long_3;
	}
	if(1)
	{
		long_5 = long_5 * long_3;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		float_4 = float_4 + float_1;
		int_6 = int_4 + int_5;
		if(1)
		{
			if(1)
			{
				double_1 = double_2 + double_1;
			}
			if(1)
			{
				short_4 = short_6 * short_3;
			}
		}
		if(1)
		{
			if(1)
			{
				char_1 = char_2 + char_2;
			}
		}
		if(1)
		{
			long long_6 = 1;
			long_6 = long_5 * long_1;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_2 = double_1;
			double_1 = double_1;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				if(1)
				{
					double_2 = double_2 * double_3;
				}
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
				}
			}
			short_1 = short_3 * short_6;
			if(1)
			{
				if(1)
				{
					float float_5 = 1;
					float_5 = float_3 + float_3;
					double_1 = double_2 * double_3;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
				}
			}
			unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				int_2 = int_2 * int_6;
			}
			double_5 = double_4 * double_3;
		}
	}
	if(1)
	{
		double_3 = double_1 * double_4;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		int_2 = int_3 + int_3;
		double_1 = double_2 * double_3;
		char_2 = char_1 * char_2;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		double double_6 = 1;
		short_5 = v_fail_action(long_2,long_2);

		double_3 = double_2 * double_6;
	}
	short_1 = short_7 * short_3;
	long_1 = long_5 + long_1;
	int_3 = int_4 * int_5;
	return double_5;
}
short v_fail_action( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_3 = float_1 * float_2;
		char_3 = char_1 + char_2;
	}
	double_1 = double_2;
	return short_1;
}
void v_print_align( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double_1 = double_1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_1;
	int_2 = int_3 + int_3;
	int_1 = int_2 * int_4;
}
char v__dpal_generic( unsigned int parameter_1,char parameter_2,float parameter_3,char parameter_4,char parameter_5,short parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_5 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short_1 = v_fail_action(long_1,long_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_4 = long_3 + long_2;
	}
	long_2 = long_1 * long_1;
	int_3 = int_1 * int_2;
	return char_1;
	v_print_align(char_2,long_5,long_4,int_1,int_3,int_3);

}
int v_illegal_char( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2;
	}
	return int_3;
}
void v_dpal( long parameter_1,float parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	float float_3 = 1;
	char char_8 = 1;
	int int_7 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_fail_action(long_1,long_1);

	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	float_1 = v__dpal_long_nopath_maxgap1_local_end(char_1,double_1,char_2,long_1,double_2,double_1);

	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_2 = v__dpal_long_nopath_generic(double_3,char_3,short_2,double_3,unsigned_int_2,double_1);

	unsigned_int_1 = unsigned_int_4;
	int_1 = int_1;
	int_2 = v_illegal_char(unsigned_int_2,unsigned_int_2,char_4);

	double_3 = double_1 + double_4;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_4 = long_1 + long_1;
		int_2 = int_3;
	}
	long_2 = long_1 * long_4;
	char_5 = char_4 + char_1;
	int_1 = int_4 * int_2;
	float_2 = float_1 + float_2;
	if(1)
	{
		double_3 = double_3 + double_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		double_4 = double_5;
		unsigned_int_4 = unsigned_int_3;
	}
	double_4 = double_3 + double_4;
	if(1)
	{
		int int_5 = 1;
		unsigned_int_4 = v__dpal_long_nopath_maxgap1_local(int_3,long_5,int_4,float_2,long_4,unsigned_int_5);

		int_1 = int_4 * int_5;
		char_3 = v__dpal_generic(unsigned_int_2,char_6,float_1,char_2,char_7,short_2);

		unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
		int_5 = int_1 + int_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_4;
		}
		if(1)
		{
			double_4 = double_2;
		}
		if(1)
		{
			int_6 = int_2 + int_4;
		}
		if(1)
		{
			long_2 = v__dpal_long_nopath_maxgap1_global_end(long_1,float_1,float_3,char_8,double_5,char_4);

			unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		}
	}
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	int_7 = int_6 * int_4;
}
float v_align( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = int_3;
	int_3 = int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
			unsigned_int_2 = unsigned_int_2;
		}
	}
	int_1 = int_2 * int_2;
	return float_1;
	v_dpal(long_1,float_2,float_2);

}
int v_oligo_compl( char parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5,float parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E5") == 0)
	{
		float float_3 = 1;
		float_2 = float_1 + float_2;
		int_1 = int_1 * int_2;
		float_1 = float_1 + float_3;
		if(1)
		{
		}
	}
	float_4 = v_align(unsigned_int_2,int_3,long_1);

	double_1 = double_2;
	if(1)
	{
		int int_4 = 1;
		float_1 = float_2 + float_2;
		int_2 = int_3 + int_1;
		char_1 = v_op_set_high_self_any(short_1);

		float_2 = v_op_set_high_self_end(unsigned_int_2);

		int_4 = int_4 + int_4;
		if(1)
		{
		}
	}
	return int_5;
}
int v_op_set_high_end_stability( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_2;
	int_3 = int_1 * int_2;
	return int_4;
}
short v_op_set_high_tm( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	return short_1;
}
int v_op_set_low_tm( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_2;
	return int_4;
}
long v_op_set_high_poly_x( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_2;
	return long_1;
}
int v_op_set_low_end_sequence_quality( unsigned int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
double v_op_set_low_sequence_quality()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	return double_3;
}
long v_sequence_quality_is_ok( float parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7,long parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	int_1 = int_1 * int_1;
	float_3 = float_3 * float_3;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				char char_4 = 1;
				char_1 = char_2 * char_4;
			}
			double_1 = double_1 + double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
			}
		}
		short_1 = short_3 * short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_2 + int_1;
			if(1)
			{
				int_1 = int_1 + int_1;
			}
		}
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int_2 = v_op_set_low_end_sequence_quality(unsigned_int_1);

				unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			}
			int_2 = int_1 * int_1;
			if(1)
			{
				float_3 = float_3;
			}
		}
		unsigned_int_6 = unsigned_int_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_3 + int_2;
			if(1)
			{
				int_3 = int_4 * int_1;
			}
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 + float_1;
	}
	unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_7;
	if(1)
	{
		double_1 = double_2 + double_1;
		int_4 = int_3 + int_4;
		double_2 = v_op_set_low_sequence_quality();

		unsigned_int_3 = unsigned_int_6;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 + long_1;
			int_3 = int_4 + int_2;
			short_3 = short_1 * short_2;
		}
	}
	return long_2;
}
short v_op_set_too_many_gc_at_end( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char_1 = char_2;
	long_1 = long_1 * long_2;
	return short_1;
}
short v_op_set_no_gc_glamp( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return short_1;
}
char v_op_set_high_gc_content( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_2 * int_2;
	return char_1;
}
long v_op_set_low_gc_content( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float_1 = float_2;
	double_1 = double_1 * double_1;
	return long_1;
}
short v_op_set_not_in_any_ok_region( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_1;
}
double v_op_set_overlaps_excluded_region( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_2;
	return double_3;
}
long v_bf_get_overlaps_excl_region( long parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_op_set_overlaps_target( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
}
void v_bf_get_overlaps_target( long parameter_1)
{
}
void v_bf_set_overlaps_excl_region( short parameter_1,int parameter_2)
{
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_1 = char_1 + char_1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
}
void v_bf_get_infinite_pos_penalty( int parameter_1)
{
}
void v_compute_position_penalty( long parameter_1,char parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_2;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			double_2 = double_2 * double_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_1 = v_bf_set_infinite_pos_penalty(long_1,int_1);

			short_2 = short_3;
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1;
			}
			if(1)
			{
				long long_2 = 1;
				char char_2 = 1;
				char char_3 = 1;
				long_2 = long_1 * long_1;
				char_3 = char_2 + char_2;
			}
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3 * int_4;
	}
}
unsigned int v_bf_set_overlaps_target( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1 + int_1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	return unsigned_int_1;
}
short v_bf_set_infinite_pos_penalty( long parameter_1,int parameter_2)
{
	short short_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	return short_2;
}
int v_oligo_overlaps_interval( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
}
char v_op_set_too_many_ns( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_1;
	return char_1;
}
double v_gc_and_n_content( int parameter_1,int parameter_2,short parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		int_1 = int_1 + int_1;
		float_3 = float_1 * float_2;
		int_3 = int_2 * int_2;
		int_5 = int_1 + int_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_2 = double_1 * double_2;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			short short_2 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			int_5 = int_4 + int_2;
			short_3 = short_1 * short_2;
			int_2 = int_5 + int_4;
		}
		if(1)
		{
			float float_4 = 1;
			short short_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float_4 = float_2 * float_2;
			short_1 = short_3 * short_4;
			char_3 = char_1 * char_2;
			unsigned_int_4 = unsigned_int_3;
			float_1 = float_4 * float_1;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_1 = double_3;
			double_2 = double_4 + double_3;
		}
	}
	if(1)
	{
		int int_6 = 1;
		if(1)
		{
			int_6 = int_1 + int_2;
		}
		int_1 = int_6;
	}
	return double_5;
}
void v_op_set_must_match_err( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
}
int v_compare_nucleotides( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_1;
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
	return int_1;
}
long v_primer_must_match( short parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,char parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	int int_7 = 1;
	long_1 = long_1 * long_2;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_1 * int_2;
		int_2 = int_3 + int_1;
		short_2 = short_1 + short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
			int_5 = int_1 * int_4;
			int_6 = v_compare_nucleotides(long_3,int_7);

			double_1 = double_2;
		}
	}
	if(1)
	{
		char char_1 = 1;
		int_5 = int_2 + int_4;
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_1 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			char char_3 = 1;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1 * double_2;
			}
			char_2 = char_2 * char_2;
			char_3 = char_3 + char_2;
		}
	}
	return long_3;
}
long v_op_set_overlaps_masked_sequence( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	return long_1;
}
float v_is_lowercase_masked( int parameter_1,double parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "#4") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		long_1 = v_op_set_overlaps_masked_sequence(float_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_1 * int_1;
	}
	return float_2;
}
char v_op_set_does_not_amplify_orf( int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
double v_initialize_op()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_2;
	return double_1;
}
int v_calc_and_check_oligo_features( unsigned int parameter_1,double parameter_2,float parameter_3,long parameter_4,char parameter_5,int parameter_6,int parameter_7,short parameter_8,short parameter_9)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_8 = 1;
	short short_5 = 1;
	int int_9 = 1;
	v_p3_reverse_complement(char_1,char_2);

	v_op_set_must_match_err(unsigned_int_1);

	double_1 = v_gc_and_n_content(int_1,int_1,short_1,char_1);

	int_2 = v_oligo_overlaps_interval(int_2,int_2,unsigned_int_2,int_1);

	short_2 = v_bf_set_infinite_pos_penalty(long_1,int_3);

	v_compute_position_penalty(long_2,char_2,double_2,int_3);

	v_bf_get_infinite_pos_penalty(int_3);

	long_2 = v_bf_get_overlaps_excl_region(long_2);

	long_2 = v_op_set_low_gc_content(double_2);

	char_2 = v_op_set_high_gc_content(int_2);

	long_2 = v_sequence_quality_is_ok(float_1,char_3,int_1,int_3,int_1,int_3,short_2,long_2);

	int_3 = v_op_set_high_end_stability(unsigned_int_1);

	long_1 = v_oligo_compl_thermod(double_2,double_3,double_2,int_1,int_4,long_3);

	int_3 = int_5 * int_1;
	double_4 = v_initialize_op();

	char_3 = v_op_set_does_not_amplify_orf(int_1);

	long_1 = v_primer_must_match(short_1,float_1,int_1,unsigned_int_2,char_4,char_5);

	v_bf_set_overlaps_excl_region(short_3,int_1);

	v_bf_get_overlaps_target(long_3);

	long_3 = v_op_set_high_poly_x(int_4);

	int_5 = v_op_set_low_tm(int_1);

	long_2 = v_oligo_hairpin(int_4,unsigned_int_1,short_3,double_4,long_3);

	long_1 = v_op_set_completely_written();

	float_3 = float_2 + float_1;
	v_op_set_overlaps_target(char_1);

	short_3 = v_op_set_too_many_gc_at_end(double_2);

	short_2 = v_op_set_high_tm(short_4);

	int_5 = v_p3_ol_is_ok(char_3);

	int_1 = int_1 + int_6;
	unsigned_int_2 = v_bf_set_overlaps_target(long_3,int_3);

	int_7 = v_oligo_compl(char_5,int_1,char_2,unsigned_int_1,char_6,float_3);

	int_6 = v_p3_ol_is_uninitialized();

	unsigned_int_2 = v_op_set_too_long(int_2);

	long_4 = v_op_set_too_short(long_5);

	double_6 = double_5 * double_6;
	return int_8;
	float_1 = v_is_lowercase_masked(int_1,double_3,float_1,double_4);

	char_2 = v_op_set_too_many_ns(double_6);

	double_4 = v_op_set_overlaps_excluded_region(int_2);

	short_3 = v_op_set_not_in_any_ok_region(unsigned_int_1);

	short_1 = v_op_set_no_gc_glamp(char_6);

	float_1 = v_oligo_repeat_library_mispriming(short_4,unsigned_int_1,short_2,int_7,int_8,short_2);

	unsigned_int_1 = v_oligo_template_mispriming(short_2,long_5,short_5,unsigned_int_1,float_3,double_3,int_9,-1 );

}
long v_pick_primer_range( unsigned int parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,char parameter_6,long parameter_7,int parameter_8,long parameter_9)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int int_6 = 1;
	float float_3 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short_1 = short_1 * short_2;
	float_1 = v_any_5_prime_ol_extension_has_problem(int_1);

	double_1 = double_1;
	char_1 = char_1;
	int_3 = int_2 * int_3;
	char_4 = char_2 + char_3;
	long_2 = long_1 * long_1;
	long_4 = long_3 * long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	int_3 = int_4 + int_3;
	if(1)
	{
		float_2 = float_2;
		int_1 = v_calc_and_check_oligo_features(unsigned_int_3,double_1,float_1,long_1,char_4,int_3,int_5,short_2,short_3);

		char_2 = char_3 * char_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		short_4 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		v__pr_substr(double_2,int_6,int_1,char_4);

		float_2 = float_2 + float_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_7 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_7 = 1;
			long long_5 = 1;
			int_7 = int_7 + int_5;
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_3;
				}
				if(1)
				{
					char char_6 = 1;
					int_4 = v_free_primer_repeat_sim_score(float_3);

					char_6 = char_5 * char_6;
				}
				long_1 = long_1 * long_4;
				v_p_obj_fn(unsigned_int_4,long_4,int_2);

				short_5 = short_1;
			}
			if(1)
			{
				int int_8 = 1;
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
				}
				if(1)
				{
					double_3 = double_1;
				}
				int_7 = int_1 + int_8;
				short_3 = v_add_oligo_to_oligo_array(unsigned_int_1,float_3);

				short_5 = short_5 + short_5;
			}
			unsigned_int_7 = unsigned_int_6;
			long_1 = long_5 + long_4;
			short_5 = short_4;
			short_4 = short_4 * short_2;
			if(1)
			{
				float float_4 = 1;
				float_2 = float_4 + float_1;
				double_3 = double_1;
				if(1)
				{
					float float_5 = 1;
					float_3 = float_5 * float_3;
				}
				if(1)
				{
					int_4 = int_4 + int_5;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_6;
				if(1)
				{
					int_4 = int_4;
				}
			}
		}
	}
	int_4 = int_9 * int_10;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_3;
}
float v_make_complete_primer_lists( long parameter_1,long parameter_2,char parameter_3,char parameter_4,float parameter_5,unsigned int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_1;
	double_2 = double_2 + double_1;
	int_1 = int_1;
	long_1 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "hY") > 0)
	{
		long_1 = v_pick_primer_range(unsigned_int_1,float_1,int_1,unsigned_int_1,long_3,char_1,long_1,int_2,long_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_1 + double_3;
		long_2 = long_4 + long_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int int_3 = 1;
		long long_5 = 1;
		int_3 = int_1 * int_2;
		long_3 = long_3;
		long_2 = long_4 * long_5;
		int_3 = int_3;
	}
	if(1)
	{
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_4 = int_1 * int_4;
		double_3 = double_1 * double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		short_1 = short_1 * short_2;
	}
	return float_1;
}
void v_destroy_thal_arg_holder( short parameter_1)
{
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char_3 = char_1 + char_2;
		short_1 = short_1 + short_1;
		short_1 = short_1 + short_1;
		int_2 = int_1 + int_1;
		double_1 = double_2;
		short_4 = short_2 * short_3;
	}
}
void v_set_thal_default_args( long parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	short_1 = short_1 + short_3;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	int_2 = int_2;
	short_2 = short_3 * short_1;
	char_2 = char_1 * char_1;
}
int v_create_thal_arg_holder( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_1;
	char_4 = char_1 + char_3;
	v_pr_safe_malloc(short_1);

	long_2 = long_1 * long_2;
	int_1 = int_3 * int_1;
	float_2 = float_1 + float_2;
	float_3 = float_1 + float_2;
	short_4 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	v_set_thal_default_args(long_2);

	float_1 = float_3 + float_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_2 * double_3;
	char_5 = char_2 * char_2;
	float_1 = float_3 + float_3;
	char_5 = char_3 + char_4;
	float_4 = float_4;
	int_4 = int_2;
	float_3 = float_1 * float_4;
	unsigned_int_4 = unsigned_int_5;
	short_4 = short_3;
	long_1 = long_1;
	return int_3;
}
unsigned int v_xlate_ambiguity_code( char parameter_1)
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
	return unsigned_int_1;
}
int v_dpal_set_ambiguity_code_matrix()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = v_xlate_ambiguity_code(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_2 = int_1 * int_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "@") > 0)
		{
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			float float_1 = 1;
			long_3 = long_1 * long_3;
			if(1)
			{
			}
			int_4 = int_3 * int_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					if(1)
					{
						short short_1 = 1;
						short short_2 = 1;
						short short_3 = 1;
						short_3 = short_1 + short_2;
					}
				}
			}
			float_1 = float_1 + float_1;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned_int_2 = unsigned_int_3;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					int_1 = int_2 * int_2;
				}
			}
			int_1 = int_3 * int_4;
			char_3 = char_1 + char_2;
		}
	}
	return int_3;
}
void v_set_dpal_args( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float_2 = float_1 + float_2;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					int_2 = int_1 + int_2;
				}
				if(1)
				{
					long_1 = long_2 * long_1;
				}
				if(1)
				{
					int_2 = int_2 + int_1;
				}
			}
			if(1)
			{
				char_1 = char_2;
			}
		}
	}
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_2 * char_1;
	char_1 = char_3 + char_2;
	long_1 = long_1;
	int_2 = int_1;
	short_1 = short_1 * short_1;
	int_3 = int_2 * int_1;
	float_4 = float_1 * float_3;
	double_1 = double_1;
	long_3 = long_3 * long_1;
}
void v_create_dpal_arg_holder()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_1 * int_1;
	short_1 = short_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_3 + double_2;
	double_6 = double_5 + double_4;
	v_set_dpal_args(double_5);

	int_2 = int_2 + int_3;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_2 = long_2 + long_1;
	v_pr_safe_malloc(short_2);

	int_4 = v_dpal_set_ambiguity_code_matrix();

	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	long_2 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	int_5 = int_1;
}
float v_find_stop_codon( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	return float_1;
}
int v_set_retval_both_stop_codons( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float_1 = v_find_stop_codon(short_1,int_1,int_2);

	float_3 = float_2 + float_3;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	return int_1;
}
float v_test_must_match_parameters( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	return float_1;
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
float v_strstr_nocase( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_1 = v_strcmp_nocase(float_1,char_1);

	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		v_pr_safe_malloc(short_1);

		double_1 = double_1 * double_2;
		double_4 = double_1 * double_3;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int int_2 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			int_2 = int_1 * int_2;
		}
	}
	return float_1;
}
int v__pr_data_control( short parameter_1,char parameter_2,double parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	short short_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_7 = 1;
	char char_8 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	double double_9 = 1;
	float float_7 = 1;
	int int_9 = 1;
	double double_10 = 1;
	short short_5 = 1;
	char char_10 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_10 = 1;
	int int_12 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_1;
	double_1 = double_3 + double_3;
	if(1)
	{
		int_2 = int_3 * int_2;
	}
	if(1)
	{
		double_2 = double_1 + double_4;
	}
	if(1)
	{
		double_3 = double_1;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_1 = double_5;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		double_3 = double_4 * double_4;
	}
	if(1)
	{
		int_2 = int_3 * int_2;
		int_4 = int_1 * int_3;
	}
	if(1)
	{
		long_1 = long_3;
	}
	if(1)
	{
		double_1 = double_1 + double_3;
	}
	if(1)
	{
		float_4 = float_1 * float_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_2 = double_4 + double_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_4 = int_3 + int_5;
	}
	if(1)
	{
		short_3 = short_3 + short_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_5 = double_6 + double_6;
		}
	}
	double_5 = double_5 + double_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_1 = short_1 + short_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = v_dna_to_upper(char_1,int_1);

		int_5 = int_3 + int_5;
	}
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		double_6 = double_5 * double_7;
	}
	if(1)
	{
		short_3 = short_3 * short_4;
	}
	if(1)
	{
		float_5 = v_test_must_match_parameters(char_2);

		int_5 = int_5 * int_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		int_2 = int_5;
	}
	if(1)
	{
		v_p3_reverse_complement(char_2,char_4);

		int_5 = int_5 * int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			long_3 = long_1 * long_2;
		}
		if(1)
		{
			v_pr_append_95();

			char_3 = char_2 + char_3;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
			char_6 = char_4 + char_5;
		}
		if(1)
		{
			double_3 = double_6 + double_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_2 + int_2;
		}
		if(1)
		{
			double_4 = double_8;
		}
		if(1)
		{
			float_4 = float_4 * float_1;
		}
		char controller_47[3];
		fgets(controller_47 ,3 ,stdin);
		if( strcmp( controller_47, "2Z") < 0)
		{
			int_3 = int_6 * int_7;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				char_4 = char_4;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long_1 = long_1;
		}
		if(1)
		{
			int_5 = int_4 * int_5;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		char_7 = char_6 * char_5;
	}
	if(1)
	{
		short_4 = short_1 + short_3;
	}
	if(1)
	{
		float_4 = float_4 * float_1;
	}
	if(1)
	{
		char_6 = char_4 + char_7;
	}
	if(1)
	{
		int_5 = int_7;
	}
	if(1)
	{
		char_1 = char_8 * char_8;
	}
	if(1)
	{
		char_1 = char_8 + char_2;
	}
	if(1)
	{
		short_2 = short_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_5 = long_3 * long_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		float float_6 = 1;
		float_5 = float_6 * float_2;
	}
	if(1)
	{
		float_3 = float_1 * float_1;
	}
	if(1)
	{
		long_1 = long_1 * long_3;
		short_2 = short_2 * short_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		char_7 = char_6 * char_5;
	}
	if(1)
	{
		double_2 = double_7;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			int_7 = int_4 + int_8;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_9 + double_4;
		}
		if(1)
		{
			double_3 = double_5 + double_4;
		}
		if(1)
		{
			int_6 = int_2 + int_8;
		}
		if(1)
		{
			float_4 = v_strstr_nocase(char_3,char_7);

			double_6 = double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			float_7 = v_pr_append_new_chunk_85(int_3,long_3);

			int_5 = int_2;
			long_1 = long_1 + long_5;
		}
		if(1)
		{
			int_4 = int_2 * int_9;
		}
		if(1)
		{
			int_1 = int_3;
		}
		if(1)
		{
			char char_9 = 1;
			char_4 = char_1 + char_9;
		}
		if(1)
		{
			double_6 = double_8;
		}
	}
	if(1)
	{
		if(1)
		{
			double_10 = double_7 * double_10;
			double_2 = double_5 * double_7;
		}
		if(1)
		{
			char_7 = char_4 + char_2;
		}
		if(1)
		{
			float float_8 = 1;
			float_4 = float_5 + float_8;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				short_2 = short_4 + short_5;
			}
			if(1)
			{
				long_5 = long_1 * long_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		short_4 = short_3 + short_3;
	}
	if(1)
	{
		double_6 = double_9 * double_1;
	}
	if(1)
	{
		double double_11 = 1;
		double_3 = double_11 + double_10;
	}
	if(1)
	{
		char_2 = char_10 + char_8;
	}
	if(1)
	{
		int_9 = int_6;
	}
	if(1)
	{
		char_8 = char_10;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		short_5 = short_3;
	}
	if(1)
	{
		double_1 = double_9 * double_7;
	}
	if(1)
	{
		short_4 = short_1 * short_2;
	}
	if(1)
	{
		double_10 = double_8 * double_10;
	}
	if(1)
	{
		int_3 = int_9 + int_9;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
	}
	if(1)
	{
		int int_11 = 1;
		int_11 = int_10 * int_4;
	}
	if(1)
	{
		int_7 = int_6 + int_10;
	}
	if(1)
	{
		int_6 = int_2 + int_10;
	}
	if(1)
	{
		short_4 = short_4;
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		int_12 = int_8 + int_4;
	}
	if(1)
	{
		double_5 = double_10;
	}
	if(1)
	{
		int_7 = int_2;
	}
	if(1)
	{
		int_12 = v_seq_lib_num_seq();

		int_2 = int_10;
	}
	if(1)
	{
		double double_12 = 1;
		double_5 = double_9 * double_12;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
	}
	int_7 = int_3 + int_9;
	return int_12;
}
long v__optimize_ok_regions_list( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 + char_2;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_2;
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
			int_3 = int_2 + int_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		char_3 = char_3 * char_4;
		double_1 = double_3 + double_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5;
			double_1 = double_2;
		}
		if(1)
		{
			char_3 = char_3 * char_4;
			int_3 = int_2 + int_3;
		}
		if(1)
		{
			double double_5 = 1;
			int int_4 = 1;
			double_5 = double_1 + double_2;
			int_1 = int_1 * int_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_6;
			}
			if(1)
			{
				float float_2 = 1;
				float_2 = float_1 + float_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_4;
			}
			if(1)
			{
				double double_6 = 1;
				double_4 = double_6;
			}
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			float float_3 = 1;
			long_1 = long_1 * long_2;
			float_1 = float_3 + float_3;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 * short_2;
			}
			if(1)
			{
				float float_4 = 1;
				float_3 = float_4 * float_4;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
			}
			char controller_16[2];
			fgets(controller_16 ,2 ,stdin);
			if( strcmp( controller_16, "h") > 0)
			{
				unsigned_int_7 = unsigned_int_2 * unsigned_int_3;
			}
		}
		char_3 = char_3 * char_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
		double_2 = double_1 * double_1;
		unsigned_int_8 = unsigned_int_3 + unsigned_int_3;
	}
	double_2 = double_4 * double_4;
	short_2 = short_1 + short_1;
	return long_3;
}
short v__check_and_adjust_overlap_pos( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,char parameter_7,short parameter_8)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	short_3 = short_1 + short_2;
	char_1 = char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_3 + short_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
			double_3 = double_1;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2;
			short_1 = short_4;
		}
		int_1 = int_1 + int_1;
		if(1)
		{
			if(1)
			{
				short_1 = short_3 + short_4;
				short_4 = short_1;
				int_1 = int_1 + int_1;
			}
		}
	}
	return short_4;
	float_1 = v_pr_append_new_chunk_85(int_1,long_1);

}
void v_pr_append_95()
{
	int int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	int_1 = v_pr_append_external(float_1,double_4);

}
char v__check_and_adjust_1_interval( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,long parameter_6,char parameter_7,unsigned int parameter_8,int parameter_9)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			long long_1 = 1;
			int_2 = int_1 + int_2;
			long_1 = long_2;
		}
		short_1 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2;
			double_4 = double_1 * double_3;
		}
		int_1 = int_1;
		if(1)
		{
			if(1)
			{
				float float_4 = 1;
				float_3 = v_pr_append_new_chunk_85(int_2,long_2);

				float_4 = float_1 * float_1;
				int_2 = int_2;
				unsigned_int_3 = unsigned_int_2;
			}
		}
		if(1)
		{
			float float_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			float_5 = float_5 * float_6;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
			v_pr_append_95();

			double_4 = double_5;
		}
	}
	return char_1;
}
long v__check_and_adjust_intervals( char parameter_1,int parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
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
	char_1 = v__check_and_adjust_1_interval(int_1,int_1,float_1,int_1,int_1,long_2,char_2,unsigned_int_1,int_2);

}
unsigned int v_dna_to_upper( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_2 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	long_2 = long_1 * long_2;
	long_3 = long_1 * long_1;
	return unsigned_int_2;
}
void v__pr_substr( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	int_1 = int_2 * int_2;
}
char v_fake_a_sequence( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	v_p3_reverse_complement(char_1,char_2);

	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char_2 = char_2;
	}
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_3 * double_1;
		int_2 = int_1 + int_1;
		double_5 = double_3 + double_4;
	}
	if(1)
	{
		double_3 = double_1;
	}
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1;
	int_3 = int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_pr_safe_malloc(short_1);

		float_2 = float_1 * float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = char_2;
	}
	if(1)
	{
		int_3 = int_1 + int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_3 = char_3 + char_2;
	}
	if(1)
	{
		double_1 = double_5 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		unsigned_int_4 = unsigned_int_5;
		double_2 = double_6 * double_2;
	}
	return char_3;
}
void v__adjust_seq_args( int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	double double_7 = 1;
	char char_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	short short_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_6 = 1;
	short short_6 = 1;
	long long_5 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	int int_7 = 1;
	double double_10 = 1;
	long long_6 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			short_1 = v__check_and_adjust_overlap_pos(int_1,int_2,int_3,char_1,int_3,int_4,char_1,short_2);

			short_2 = short_3 * short_3;
		}
		if(1)
		{
			v_p3_reverse_complement(char_1,char_1);

			int_1 = int_3;
		}
	}
	double_4 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			long_3 = long_1 * long_2;
		}
		if(1)
		{
			double_1 = double_4 * double_5;
			float_4 = float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		}
		short_2 = short_1 + short_3;
		int_4 = int_4 + int_4;
	}
	if(1)
	{
		float_1 = float_1;
		double_6 = double_3 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
		int_3 = int_2 * int_5;
		long_4 = long_1 + long_3;
	}
	char_1 = v_fake_a_sequence(int_5,double_7);

	short_2 = short_3 + short_2;
	char_2 = char_1 + char_1;
	long_1 = long_3 + long_3;
	float_2 = float_3 + float_3;
	short_3 = short_3 * short_4;
	unsigned_int_4 = unsigned_int_7;
	double_8 = double_5 * double_3;
	v_pr_safe_malloc(short_5);

	long_3 = v__check_and_adjust_intervals(char_2,int_5,int_1,float_5,unsigned_int_4);

	double_7 = double_6;
	float_4 = float_1 * float_6;
	int_6 = int_2;
	short_4 = short_6;
	if(1)
	{
		double double_9 = 1;
		int int_8 = 1;
		float float_8 = 1;
		long_5 = v__optimize_ok_regions_list(float_7,unsigned_int_4);

		char_1 = char_1 + char_2;
		unsigned_int_8 = v_dna_to_upper(char_3,int_7);

		double_5 = double_9 * double_3;
		int_1 = int_2 + int_8;
		v__pr_substr(double_10,int_1,int_4,char_3);

		double_10 = double_2 + double_4;
		float_4 = float_6;
		int_2 = int_2 + int_7;
		float_1 = v_pr_append_new_chunk_85(int_6,long_6);

		float_3 = float_1 * float_8;
		short_2 = short_2 * short_1;
		unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_9 = unsigned_int_5 + unsigned_int_8;
	}
}
long v_khash_t()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	float_2 = float_1 * float_1;
	int_1 = int_2;
	return long_1;
}
short v_free_pair_memory( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_1;
	short_3 = short_1 * short_2;
	long_1 = v_khash_t();

	short_5 = short_4 * short_4;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_2 = 1;
		short_4 = short_1 * short_5;
		double_1 = double_1 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_1;
		if(1)
		{
			char char_4 = 1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					long long_2 = 1;
					long long_3 = 1;
					long_3 = long_2 + long_3;
					if(1)
					{
						double double_5 = 1;
						char char_3 = 1;
						double_5 = double_3 * double_5;
						char_1 = char_3;
					}
				}
			}
			char_2 = char_2 + char_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return short_4;
}
unsigned int v_pr_append_w_sep( long parameter_1,short parameter_2,float parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_pr_append_w_sep_external(long_1,char_1,long_2);

		double_1 = double_2;
	}
	return unsigned_int_1;
}
float v_pr_append_new_chunk_85( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = v_pr_append_w_sep(long_1,short_1,float_1);

	double_1 = double_1 * double_2;
	return float_2;
}
void v_p3_print_args( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	int int_9 = 1;
	float float_5 = 1;
	double double_7 = 1;
	int int_10 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_8 = 1;
	int int_11 = 1;
	double double_8 = 1;
	int int_12 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_13 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_12 = 1;
	long long_6 = 1;
	int int_14 = 1;
	int int_15 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_7 = 1;
	double double_13 = 1;
	int int_17 = 1;
	unsigned int unsigned_int_12 = 1;
	short short_8 = 1;
	double double_14 = 1;
	long long_7 = 1;
	char char_10 = 1;
	int int_18 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_6 = 1;
		long long_5 = 1;
		char char_7 = 1;
		char char_9 = 1;
		float float_6 = 1;
		double double_9 = 1;
		short short_7 = 1;
		unsigned int unsigned_int_11 = 1;
		int int_16 = 1;
		float float_8 = 1;
		unsigned int unsigned_int_13 = 1;
		short_1 = short_1 * short_1;
		float_1 = float_1 * float_2;
		int_2 = int_2 * int_3;
		int_5 = int_4 * int_3;
		short_1 = short_2 + short_3;
		unsigned_int_1 = unsigned_int_1;
		int_5 = int_6 * int_6;
		float_1 = float_2 * float_3;
		float_4 = float_1;
		int_7 = int_1 * int_4;
		unsigned_int_1 = unsigned_int_2;
		float_2 = float_2;
		int_2 = int_5 + int_1;
		long_1 = long_2;
		int_4 = int_7 + int_6;
		char_2 = char_1 + char_1;
		int_6 = int_6 * int_4;
		double_3 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_3;
		char_3 = char_2 * char_1;
		long_3 = long_1 + long_2;
		double_3 = double_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		int_7 = int_7;
		long_2 = long_1 + long_4;
		double_4 = double_2 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_5 = double_2;
		}
		int_7 = int_8 * int_7;
		float_4 = float_2 * float_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		char_3 = char_3 + char_4;
		short_5 = short_4 + short_2;
		double_6 = double_5 + double_2;
		double_6 = double_6;
		int_9 = int_5 * int_6;
		unsigned_int_1 = unsigned_int_4;
		float_2 = float_1 + float_1;
		char_5 = char_1 + char_5;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
		float_2 = float_5;
		double_2 = double_7 + double_4;
		int_10 = int_2 + int_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		short_3 = short_6 * short_3;
		char_2 = char_6;
		char_4 = char_5 * char_5;
		int_10 = int_9 + int_10;
		long_4 = long_5 * long_5;
		double_3 = double_5 * double_5;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
		char_1 = char_7 * char_2;
		int_9 = int_9 * int_9;
		char_6 = char_4 * char_8;
		int_11 = int_3 * int_6;
		double_5 = double_2 * double_8;
		short_2 = short_3 * short_4;
		char_9 = char_7 + char_7;
		float_6 = float_5 * float_4;
		double_7 = double_9 + double_2;
		int_8 = int_3 + int_4;
		int_11 = int_2 + int_7;
		float_2 = float_5 * float_3;
		double_2 = double_3 + double_5;
		int_11 = int_3 + int_12;
		char_8 = char_5 * char_4;
		double_10 = double_10 + double_2;
		short_3 = short_6 * short_2;
		int_11 = int_4 * int_5;
		char_5 = char_1 * char_5;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_7;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_8;
		short_1 = short_3 + short_6;
		unsigned_int_7 = unsigned_int_8 + unsigned_int_2;
		char_5 = char_3;
		int_8 = int_5 * int_1;
		int_12 = int_13 * int_8;
		double_11 = double_6 + double_2;
		short_5 = short_3 + short_2;
		int_12 = int_1 * int_9;
		unsigned_int_9 = unsigned_int_6 + unsigned_int_2;
		int_5 = int_10 * int_1;
		int_12 = int_10;
		short_4 = short_7;
		float_1 = float_1 + float_4;
		double_1 = double_7 + double_2;
		char_2 = char_1;
		double_8 = double_12 + double_12;
		long_6 = long_1 * long_3;
		short_7 = short_2 * short_4;
		int_7 = int_11 + int_14;
		float_6 = float_4;
		int_15 = int_6 * int_10;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		double_9 = double_3 + double_10;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_10;
		unsigned_int_3 = unsigned_int_3;
		double_2 = double_8;
		float_5 = float_7 * float_4;
		unsigned_int_8 = unsigned_int_3 * unsigned_int_11;
		float_6 = float_3;
		long_3 = long_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		double_7 = double_13 * double_1;
		unsigned_int_7 = unsigned_int_2;
		int_16 = int_1 * int_4;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_8;
		long_4 = long_1 + long_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_7;
		double_1 = double_12 + double_10;
		int_17 = int_16;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_12;
		int_6 = int_6 * int_14;
		char_4 = char_3 + char_6;
		char_6 = char_8 + char_6;
		char_3 = char_5 * char_4;
		short_2 = short_3 * short_7;
		int_6 = int_4 + int_9;
		short_2 = short_1 * short_8;
		double_8 = double_14 + double_2;
		float_8 = float_8;
		double_7 = double_13 + double_1;
		float_6 = float_2 + float_6;
		int_5 = int_7 + int_13;
		char_1 = char_2 + char_2;
		long_6 = long_5 * long_5;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_10;
		double_14 = double_13 * double_14;
		char_5 = char_7 + char_1;
		long_1 = long_1 * long_7;
		unsigned_int_8 = unsigned_int_12 + unsigned_int_1;
		char_1 = char_2 * char_1;
		short_5 = short_3 * short_6;
		double_10 = double_11 + double_11;
		char_1 = char_7;
		int_1 = int_17 * int_2;
		short_5 = short_8 * short_8;
		unsigned_int_10 = unsigned_int_10;
		int_17 = int_16 + int_17;
		long_1 = long_5;
		int_11 = int_15 * int_8;
		double_11 = double_7 + double_12;
		double_11 = double_1 * double_4;
		float_7 = float_1 * float_8;
		unsigned_int_10 = unsigned_int_13;
		unsigned_int_12 = unsigned_int_10 + unsigned_int_5;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_8;
		char_10 = char_5;
		int_11 = int_14 * int_16;
		int_13 = int_10;
		int_14 = int_18 + int_12;
		unsigned_int_7 = unsigned_int_9 + unsigned_int_5;
	}
	if(1)
	{
		int int_19 = 1;
		float float_9 = 1;
		long long_8 = 1;
		float float_10 = 1;
		double double_15 = 1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_4;
		int_8 = int_18 * int_5;
		unsigned_int_8 = unsigned_int_7 + unsigned_int_12;
		if(1)
		{
			double_5 = double_2 * double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_2 = int_9 * int_4;
				long_2 = long_1 * long_6;
				unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
				unsigned_int_10 = unsigned_int_9 + unsigned_int_4;
			}
			int_11 = int_2 * int_12;
		}
		if(1)
		{
			int_18 = int_19 + int_18;
			float_4 = float_5 + float_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_11 = int_10 + int_2;
			}
			long_6 = long_4 + long_1;
		}
		int_19 = int_1 + int_7;
		long_7 = long_2;
		int_17 = int_14 * int_9;
		double_1 = double_6 * double_12;
		double_11 = double_14 + double_13;
		float_9 = float_4 * float_3;
		long_2 = long_8 + long_4;
		int_9 = int_15 * int_14;
		short_3 = short_2 + short_5;
		double_11 = double_6 * double_10;
		double_7 = double_14;
		double_12 = double_8 * double_8;
		int_1 = int_11 + int_13;
		char_1 = char_4;
		double_6 = double_11 * double_8;
		short_3 = short_6 * short_8;
		float_7 = float_5;
		float_9 = float_10;
		int_6 = int_13 + int_12;
		int_12 = int_11;
		char_2 = char_8 * char_10;
		double_15 = double_14 * double_1;
	}
}
long v_create_p3retval()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	double_1 = double_2 + double_1;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		v_init_pr_append_str(int_2);

		double_1 = double_2 * double_2;
		double_1 = double_2;
	}
	float_1 = float_1 * float_1;
	char_2 = char_1 * char_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_2 * double_3;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1;
	char_4 = char_2;
	float_1 = float_1 + float_1;
	int_4 = int_3 + int_3;
	long_3 = long_2 + long_2;
	double_1 = double_4 + double_1;
	double_2 = double_4 * double_5;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return long_2;
}
void v_choose_primers( double parameter_1,unsigned int parameter_2,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_5 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		long_3 = long_3 * long_4;
	}
	if(1)
	{
		float_1 = float_1;
	}
	char controller4vul_1248[3];
	fgets(controller4vul_1248 ,3 ,stdin);
	if( strcmp( controller4vul_1248, "tG") > 0)
	{
		char controller4vul_1249[2];
		fgets(controller4vul_1249 ,2 ,stdin);
		if( strcmp( controller4vul_1249, "o") < 0)
		{
			double double_4 = 1;
			double_3 = double_2 + double_1;
			double_4 = double_2 + double_2;
			char controller4vul_1250[2];
			fgets(controller4vul_1250 ,2 ,stdin);
			if( strcmp( controller4vul_1250, "O") > 0)
			{
				v_choose_pair_or_triple(short_1,float_2,long_1,unsigned_int_1,float_3,short_2,short_2,uni_para);

				double_4 = double_5 + double_6;
				short_2 = short_2 + short_3;
			}
			int_1 = int_1 + int_1;
		}
		double_3 = double_3 + double_6;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		double_6 = double_3 * double_5;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_5 = long_4 + long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		float_4 = float_4 + float_2;
	}
	if(1)
	{
		char char_2 = 1;
		char char_4 = 1;
		double double_7 = 1;
		char_4 = char_2 * char_3;
		double_2 = double_1 * double_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		char char_5 = 1;
		char_3 = char_3 + char_5;
		int_2 = int_3 + int_4;
	}
	if(1)
	{
		int_5 = int_1 * int_2;
	}
	if(1)
	{
		int_4 = int_3 * int_1;
	}
	if(1)
	{
		int_6 = int_5 * int_2;
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
		short_1 = short_3 + short_3;
	}
	if(1)
	{
		float_5 = float_1 + float_5;
	}
	if(1)
	{
		int_3 = int_6;
	}
	if(1)
	{
		int_6 = int_1;
	}
	if(1)
	{
		float_5 = float_4 + float_2;
		int_1 = int_4 * int_2;
	}
}
void v_p3_set_gs_primer_file_flag( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double_1 = double_1;
}
void v_print_boulder_warning( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_3 = double_2 * double_1;
	}
}
void v_format_warning( float parameter_1,double parameter_2,char parameter_3)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
}
long v_free_repeat_sim_score( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			float float_1 = 1;
			long_1 = long_1 + long_2;
			float_1 = float_1 + float_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_1 = 1;
			long_3 = long_3 * long_1;
			short_1 = short_1 + short_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_4 = 1;
			double_1 = double_1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
	}
	return long_3;
}
void v_destroy_p3retval( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	long_1 = v_free_repeat_sim_score(double_1);

	double_2 = double_2 * double_3;
	double_2 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	long_2 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_4 = double_2 + double_1;
	v_destroy_pr_append_str_data(float_1);

	int_3 = int_1 * int_2;
	float_2 = float_3;
}
void v_pr_set_empty( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_destroy_seq_args()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, " ]") < 0)
	{
	}
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_1;
	int_1 = int_1;
	float_3 = float_1 * float_2;
	float_1 = float_3 + float_1;
	double_3 = double_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_3 + short_4;
	int_2 = int_2 + int_3;
	short_5 = short_5 + short_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_print_boulder_error( char parameter_1)
{
	long long_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_1;
	}
}
void v_format_error( int parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
}
long v_tableStartATH( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_3 = 1;
			double_3 = double_2 + double_1;
		}
	}
	int_2 = int_1 * int_1;
	return long_1;
}
void v_tableStartATS( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
	}
	double_1 = double_2;
}
char v_getTetraloop( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float_1 = v_str2int(char_1);

	short_2 = short_1 + short_1;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = v_openParamFile(short_2,unsigned_int_2);

		short_3 = short_1 * short_2;
	}
	return char_1;
	char_2 = v_safe_calloc(short_4,float_2,char_1);

	v_readTLoop(double_1,char_1,double_2,int_1,long_1);

	double_3 = v_safe_realloc(double_3,char_1);

}
double v_safe_realloc(double parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char_1 = char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_1 + float_1;
	}
	return double_3;
}
float v_str2int( char parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_readTLoop( double parameter_1,char parameter_2,double parameter_3,int parameter_4,long parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_p3_read_line(short_1);

}
char v_safe_calloc( short parameter_1,float parameter_2,char parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		float_1 = float_1 + float_1;
		int_1 = int_1 + int_1;
	}
	return char_1;
}
long v_getTriloop( float parameter_1,short parameter_2,int parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned_int_1 = v_openParamFile(short_1,unsigned_int_2);

	double_1 = v_safe_realloc(double_1,char_1);

	char_1 = char_1 + char_2;
	v_readTLoop(double_1,char_2,double_2,int_1,long_1);

	int_3 = int_2 * int_2;
	float_1 = v_str2int(char_1);

	double_3 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_1 + double_4;
	return long_1;
	char_1 = v_safe_calloc(short_1,float_1,char_2);

}
short v_getTstack2( double parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
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
						unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
						unsigned_int_2 = unsigned_int_2;
					}
					if(1)
					{
						double double_3 = 1;
						short_1 = v_readDouble(unsigned_int_2,short_1);

						double_1 = double_3 + double_3;
						short_1 = short_1 + short_1;
					}
					if(1)
					{
						char char_1 = 1;
						char char_2 = 1;
						unsigned_int_3 = v_openParamFile(short_2,unsigned_int_1);

						char_1 = char_1 + char_1;
						char_2 = char_1 + char_2;
						if(1)
						{
							long long_1 = 1;
							long_1 = long_1;
							unsigned_int_1 = unsigned_int_2;
						}
					}
				}
			}
		}
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	float_1 = float_2;
	return short_1;
}
char v_getTstack( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					long long_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					if(1)
					{
						long long_2 = 1;
						long_1 = long_2;
						int_2 = int_1 + int_2;
					}
					if(1)
					{
						int int_3 = 1;
						double double_1 = 1;
						int_3 = int_2 + int_1;
						double_1 = double_1 * double_1;
					}
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						unsigned_int_3 = v_openParamFile(short_1,unsigned_int_4);

						unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
						float_1 = float_1 + float_1;
						if(1)
						{
							long long_3 = 1;
							short_1 = v_readDouble(unsigned_int_3,short_2);

							short_2 = short_2 * short_1;
							long_3 = long_3 * long_1;
						}
					}
				}
			}
		}
	}
	float_2 = float_1 + float_2;
	float_2 = float_2 + float_1;
	return char_2;
}
short v_readLoop( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_1;
	int_1 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			if(1)
			{
				int int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
				int_2 = int_2 * int_3;
				if(1)
				{
					long_1 = long_1 + long_1;
					char_1 = char_2 + char_1;
				}
				if(1)
				{
					short short_1 = 1;
					short_2 = short_1 * short_1;
					int_2 = int_3 * int_2;
				}
				char_3 = char_1 + char_2;
			}
		}
		if(1)
		{
			if(1)
			{
				float float_3 = 1;
				float float_4 = 1;
				short_3 = short_2 * short_3;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				float_4 = float_1 * float_3;
			}
		}
		if(1)
		{
			float float_5 = 1;
			unsigned int unsigned_int_5 = 1;
			float_2 = float_5;
			v_p3_read_line(short_2);

			unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
			short_2 = short_3 * short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				long long_2 = 1;
				double_3 = double_2 * double_2;
				long_1 = long_1 * long_2;
				long_2 = long_2 + long_1;
			}
		}
	}
	return short_3;
}
long v_getLoop( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,long parameter_7)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short_1 = v_readLoop(unsigned_int_1,double_1,double_1,double_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_2;
	unsigned_int_1 = v_openParamFile(short_1,unsigned_int_3);

	char_1 = char_1 * char_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		short short_2 = 1;
		char_2 = char_1 + char_1;
		short_1 = short_2 * short_1;
	}
	int_2 = int_2;
	double_2 = double_1 + double_1;
	return long_1;
}
float v_getDangle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1 * long_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_2 = 1;
				if(1)
				{
					char_1 = char_1 * char_1;
					unsigned_int_1 = unsigned_int_2;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					short_2 = short_1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
				}
				if(1)
				{
					double_1 = double_1 * double_1;
					unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
					if(1)
					{
						short short_3 = 1;
						double double_2 = 1;
						double double_4 = 1;
						unsigned_int_1 = v_openParamFile(short_2,unsigned_int_5);

						short_1 = short_3;
						double_4 = double_2 * double_3;
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
				double double_5 = 1;
				if(1)
				{
					int int_4 = 1;
					int_2 = int_1 * int_2;
					int_4 = int_3 + int_1;
				}
				if(1)
				{
					float float_3 = 1;
					float_3 = float_2 + float_2;
					double_3 = double_1 * double_5;
				}
				if(1)
				{
					char_1 = char_1;
					double_1 = double_3 + double_5;
					if(1)
					{
						char char_2 = 1;
						char char_3 = 1;
						float float_4 = 1;
						char_3 = char_1 * char_2;
						float_4 = float_1 + float_1;
					}
				}
			}
		}
	}
	int_2 = int_2 + int_1;
	unsigned_int_4 = unsigned_int_6;
	return float_2;
	short_2 = v_readDouble(unsigned_int_5,short_2);

}
char v_getStackint2( double parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = v_openParamFile(short_1,unsigned_int_2);

	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					int int_3 = 1;
					if(1)
					{
						long long_2 = 1;
						long_1 = long_1 + long_2;
						int_3 = int_3 * int_2;
					}
					if(1)
					{
						int int_4 = 1;
						int_5 = int_4 + int_3;
						short_1 = v_readDouble(unsigned_int_1,short_2);

						double_1 = double_1 + double_2;
						if(1)
						{
							short short_3 = 1;
							unsigned int unsigned_int_3 = 1;
							short_3 = short_1 + short_3;
							unsigned_int_3 = unsigned_int_3;
						}
					}
				}
			}
		}
	}
	int_1 = int_5;
	double_2 = double_1 * double_2;
	return char_1;
}
short v_readDouble( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_p3_read_line(short_1);

	int_3 = int_1 * int_2;
	return short_1;
}
unsigned int v_openParamFile( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_2 = int_1 * int_1;
		int_1 = int_3 * int_3;
		long_1 = v_safe_malloc(long_2,float_1);

		unsigned_int_1 = unsigned_int_4;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "f") < 0)
		{
			int int_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int_4 = int_4 + int_4;
			char_2 = char_3;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "a") > 0)
		{
			double double_3 = 1;
			float float_2 = 1;
			double_1 = double_2 * double_3;
			float_1 = float_1 + float_2;
		}
	}
	return unsigned_int_3;
}
char v_getStack( double parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_openParamFile(short_1,unsigned_int_2);

	float_2 = float_1 * float_2;
	short_2 = short_1 + short_2;
	char_1 = char_1 + char_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					char controller_1[2];
					fgets(controller_1 ,2 ,stdin);
					if(remainder_check(controller_1,100,1))
					{
						long long_1 = 1;
						long_1 = long_1 + long_1;
						float_1 = float_1 + float_3;
					}
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						int int_3 = 1;
						float_3 = float_2 * float_1;
						int_3 = int_1 + int_2;
						if(1)
						{
							unsigned int unsigned_int_4 = 1;
							unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
							short_2 = short_2 * short_2;
						}
					}
				}
			}
		}
	}
	short_2 = short_3 * short_1;
	float_2 = float_3 + float_2;
	return char_2;
	short_2 = v_readDouble(unsigned_int_3,short_3);

}
long v_safe_malloc( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return long_1;
}
int v_get_thermodynamic_values( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_getStackint2(double_1,double_1,long_1);

	int_2 = int_1;
	long_2 = v_getTriloop(float_1,short_1,int_3,long_1);

	int_2 = int_2 * int_2;
	short_1 = v_getTstack2(double_2,double_2,float_2);

	v_tableStartATS(double_1,double_3);

	int_6 = int_4 + int_5;
	float_3 = v_getDangle(double_3,double_2,double_1,double_1,char_2);

	long_1 = v_getLoop(double_1,double_1,double_3,double_4,double_4,double_5,long_2);

	v_p3_read_line(short_1);

	char_5 = char_3 + char_4;
	char_2 = v_getStack(double_2,double_6,char_2);

	int_5 = int_3 + int_1;
	long_2 = v_safe_malloc(long_1,float_2);

	char_5 = v_getTstack(double_2,double_5,double_2);

	int_5 = int_5 * int_2;
	long_2 = v_tableStartATH(double_2,double_2);

	double_6 = double_6 * double_4;
	int_4 = int_5;
	float_4 = float_2 * float_2;
	int_6 = int_7 * int_3;
	char_4 = v_getTetraloop(unsigned_int_1,unsigned_int_2,int_7,char_6);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	return int_5;
}
short v_read_thermodynamic_parameters()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_1 = v_get_thermodynamic_values(float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v_p3_reverse_complement( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_4;
	int_2 = int_1 + int_2;
}
void v_reverse_complement_seq_lib( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_1;
		int_3 = int_1 + int_2;
		unsigned_int_1 = v_p3sl_safe_malloc();

		short_1 = short_1 + short_1;
		v_p3_reverse_complement(char_1,char_1);

		char_1 = char_1 * char_1;
		double_1 = double_1 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			int int_4 = 1;
			short short_2 = 1;
			int int_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float_2 = float_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_1;
			int_1 = int_2 + int_4;
			short_2 = short_2 * short_1;
			int_4 = int_5 * int_4;
			long_3 = long_1 * long_2;
			long_3 = v_p3sl_safe_realloc(char_1);

			short_3 = short_1 + short_3;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
}
char v_p3sl_append( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	return char_1;
	int_1 = v_pr_append_external(float_1,double_1);

}
char v_upcase_and_check_char( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char_2 = char_1 * char_1;
		char_2 = char_3;
		long_2 = long_1 * long_1;
		float_3 = float_2 + float_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		double_2 = double_2 + double_3;
		char_3 = char_2 + char_4;
		unsigned_int_4 = unsigned_int_5;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		char_2 = char_2 * char_1;
		float_1 = float_1 + float_1;
		long_3 = long_2;
		double_4 = double_2;
		long_4 = long_4 * long_4;
		char_5 = char_5 * char_6;
		char_6 = char_5 + char_5;
		long_2 = long_2 + long_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		float_3 = float_1 * float_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		short_2 = short_3;
		int_2 = int_1 + int_2;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_2;
		double_4 = double_5 * double_4;
		unsigned_int_5 = unsigned_int_6;
		double_7 = double_6 + double_2;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "b") > 0)
		{
			int_1 = int_2 + int_2;
		}
		long_1 = long_2 + long_4;
	}
	double_1 = double_4 * double_3;
	return char_1;
}
double v_strtod()
{
	double double_1 = 1;
	return double_1;
}
double v_parse_seq_name( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	float_1 = float_1 + float_2;
	float_4 = float_2 + float_3;
	double_1 = v_strtod();

	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1 * float_4;
	}
	return double_2;
}
long v_p3sl_safe_realloc(char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	return long_4;
}
int v_add_seq_to_seq_lib( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_2;
	double_1 = double_2;
	if(1)
	{
		double double_3 = 1;
		char char_4 = 1;
		double_3 = double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 + long_2;
		char_1 = char_1 * char_1;
		double_1 = double_2 * double_2;
		long_2 = v_p3sl_safe_realloc(char_3);

		double_5 = v_parse_seq_name(char_2);

		char_3 = char_3 * char_4;
	}
	int_3 = int_2 * int_3;
	int_1 = int_4;
	long_1 = long_3 + long_2;
	long_4 = long_2 + long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_1 = v_upcase_and_check_char(char_5);

	char_3 = v_p3sl_append(float_3,int_5);

	char_2 = char_1 * char_6;
	if(1)
	{
		long_1 = long_2 * long_3;
	}
	unsigned_int_1 = v_p3sl_append_new_chunk(long_5,long_3);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_6 = 1;
		long long_6 = 1;
		double double_7 = 1;
		short_2 = short_1 + short_1;
		double_6 = double_6 + double_6;
		short_2 = short_2 * short_1;
		long_2 = long_1 * long_4;
		long_4 = long_6 + long_6;
		double_7 = double_4;
		long_3 = long_3 * long_6;
		char_3 = char_3 + char_1;
	}
	return int_6;
	unsigned_int_3 = v_p3sl_safe_malloc();

}
unsigned int v_p3sl_append_new_chunk( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_3;
	}
	return unsigned_int_1;
	int_5 = v_pr_append_new_chunk_external(double_1,char_1);

}
unsigned int v_p3sl_safe_malloc()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
	return unsigned_int_1;
}
char v_create_empty_seq_lib()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	double_2 = double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = v_p3sl_safe_malloc();

	int_2 = int_3 * int_1;
	long_1 = long_1 * long_1;
	double_3 = double_2 * double_3;
	unsigned_int_5 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
	return char_1;
}
long v_read_and_create_seq_lib( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	return long_1;
	char_1 = v_create_empty_seq_lib();

	unsigned_int_1 = v_p3sl_safe_malloc();

	unsigned_int_2 = v_p3sl_append_new_chunk(long_1,long_1);

	v_p3_read_line(short_1);

	int_1 = v_add_seq_to_seq_lib(double_1,char_2,char_3,char_4);

	char_1 = v_p3sl_append(float_1,int_2);

	long_2 = v_p3sl_safe_realloc(char_5);

	v_reverse_complement_seq_lib(unsigned_int_3);

}
void v_destroy_seq_lib( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_2 + long_1;
			}
		}
		short_1 = short_2;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_2 = int_1 + int_1;
			}
		}
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_3 * short_1;
	double_2 = double_1 * double_2;
	short_3 = short_4 + short_3;
}
int v_strcmp_nocase( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "XJ") < 0)
	{
	}
	return int_1;
}
double v__rb_safe_malloc()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		double_1 = v_out_of_memory_error();

		int_1 = int_1 + int_1;
	}
	return double_1;
}
void v_p3_set_gs_primer_internal_oligo_self_end( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 * short_2;
}
void v_p3_set_gs_primer_self_end( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
}
unsigned int v_parse_int( unsigned int parameter_1,double parameter_2,int parameter_3,long parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
	}
	int_1 = v_tag_syntax_error(short_1,long_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
	}
	short_2 = short_2 * short_2;
	if(1)
	{
	}
	double_1 = v_pr_append();

	double_1 = double_1 * double_1;
	char_2 = char_3;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_2 = long_1 + long_2;
	int_1 = int_2 * int_1;
	double_2 = double_2 * double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return unsigned_int_3;
}
unsigned int v_parse_product_size( float parameter_1,char parameter_2,short parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	long_1 = v_pr_append_new_chunk(long_2,float_1);

	double_1 = v_pr_append();

	double_2 = v_parse_int_pair(long_2,short_1,char_1,int_1,int_1,unsigned_int_1);

}
int v_tag_syntax_error( short parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char_3 = char_1 * char_2;
	char_1 = char_4 * char_4;
	long_1 = v_pr_append_new_chunk(long_2,float_1);

	float_2 = float_2 * float_1;
	double_1 = v_pr_append();

	double_3 = double_1 + double_2;
	return int_1;
}
double v_parse_int_pair( long parameter_1,short parameter_2,char parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return double_1;
	int_1 = v_tag_syntax_error(short_1,long_1,double_1);

	double_1 = v_pr_append();

}
double v_parse_intron_list( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_2;
		double_3 = double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double_3 = double_2;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		double_2 = double_1 * double_2;
		int_3 = int_4;
	}
	return double_3;
}
void v_p3_sa_add_to_quality_array( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		v_pr_safe_malloc(short_1);

		short_2 = short_2 + short_2;
	}
	double_1 = v_pr_safe_realloc(char_1);

	int_3 = int_1 * int_2;
	double_2 = double_2 + double_2;
}
void v_p3_set_sa_empty_quality( long parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
}
float v_parse_seq_quality( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	short_2 = short_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	short_1 = short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	}
	short_5 = short_4 + short_5;
	char_2 = char_1 * char_1;
	float_2 = float_1 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_3 = 1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_1 = 1;
			int_1 = int_1;
		}
		v_p3_sa_add_to_quality_array(unsigned_int_5,int_2);

		float_3 = float_1 * float_2;
	}
	v_p3_set_sa_empty_quality(long_1);

	float_2 = float_1 + float_2;
	double_1 = double_3 + double_1;
	return float_2;
}
double v__set_string( char parameter_1,double parameter_2)
{
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
	}
	double_2 = double_2 * double_3;
	return double_4;
}
int v_p3_set_sa_sequence( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	return int_1;
	double_1 = v__set_string(char_1,double_1);

}
int v_read_boulder_record( float parameter_1,int parameter_2,long parameter_3,int parameter_4,long parameter_5,unsigned int parameter_6,short parameter_7,int parameter_8,long parameter_9,double parameter_10)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	return int_1;
	v_p3_read_line(short_1);

	long_1 = v_pr_append_new_chunk(long_2,float_1);

	double_1 = v_pr_append();

	int_2 = v_p3_set_sa_sequence(int_2,double_2);

	float_2 = v_parse_seq_quality(char_1,float_2);

	double_1 = v_parse_intron_list(char_2,int_1,int_2);

	double_3 = v_parse_int_pair(long_3,short_1,char_1,int_3,int_3,unsigned_int_1);

	int_1 = v_tag_syntax_error(short_2,long_1,double_3);

	unsigned_int_1 = v_parse_product_size(float_1,char_3,short_1,double_4);

	unsigned_int_1 = v_parse_int(unsigned_int_2,double_4,int_3,long_3);

	v_p3_set_gs_primer_self_end(long_3,double_3);

	v_p3_set_gs_primer_internal_oligo_self_end(char_4,double_3);

	double_1 = v__rb_safe_malloc();

	int_2 = v_strcmp_nocase(float_2,char_3);

	v_destroy_seq_lib(double_1);

	long_3 = v_read_and_create_seq_lib(int_1,float_1);

}
double v_pr_safe_realloc(char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	return double_1;
}
void v_pr_safe_malloc( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
}
void v_p3_read_line( short parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_pr_safe_malloc(short_1);

	char_1 = char_1 + char_1;
	double_1 = v_pr_safe_realloc(char_1);

	float_1 = float_1 * float_1;
	short_4 = short_2 * short_3;
	double_3 = double_1 + double_2;
	double_3 = double_3 * double_2;
}
double v_pr_append()
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v_pr_append_external(float_1,double_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return double_2;
	double_1 = v_out_of_memory_error();

}
double v_out_of_memory_error()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	return double_2;
}
int v_pr_append_w_sep_external( long parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_pr_is_empty(short_1);

	int_2 = v_pr_append_external(float_1,double_1);

}
int v_pr_append_new_chunk_external( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	return int_1;
	int_2 = v_pr_append_w_sep_external(long_1,char_1,long_2);

}
long v_pr_append_new_chunk( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_2 = 1;
		int_1 = v_pr_append_new_chunk_external(double_1,char_1);

		double_2 = double_2;
	}
	return long_1;
	double_1 = v_out_of_memory_error();

}
short v_pr_append2( char parameter_1,short parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long_1 = v_pr_append_new_chunk(long_2,float_1);

	double_1 = v_pr_append();

	double_1 = double_2;
	double_3 = double_3 * double_1;
	return short_1;
}
int v_read_p3_file( char parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,short parameter_7,float parameter_8,short parameter_9,short parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_4 = 1;
	short short_5 = 1;
	double double_5 = 1;
	double_1 = double_2;
	double_1 = double_2 * double_2;
	double_1 = v_pr_append();

	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	int_3 = v_read_boulder_record(float_1,int_4,long_1,int_2,long_1,unsigned_int_1,short_3,int_4,long_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_3;
	short_4 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	long_3 = long_2 + long_1;
	if(1)
	{
		int_1 = int_5;
	}
	if(1)
	{
		long_1 = v_pr_append_new_chunk(long_4,float_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	int_2 = int_1;
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	if(1)
	{
		short_1 = short_4 + short_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		char_3 = char_1 + char_2;
		unsigned_int_3 = unsigned_int_4;
		int_3 = int_6 + int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		double_4 = double_3 + double_4;
	}
	short_1 = v_pr_append2(char_1,short_5,short_4);

	v_p3_read_line(short_2);

	char_3 = char_3 + char_2;
	if(1)
	{
		double_3 = double_5 + double_4;
	}
	if(1)
	{
		int_2 = int_5 + int_1;
	}
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	long_1 = long_2 * long_2;
	if(1)
	{
		int_6 = int_7;
	}
	if(1)
	{
		double_2 = double_3 + double_5;
	}
	return int_2;
}
float v_create_seq_arg()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	double_1 = double_1;
	int_1 = int_1 + int_2;
	double_1 = double_2 + double_3;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	char_2 = char_3;
	int_2 = int_1 + int_1;
	return float_4;
}
long v_p3_create_global_settings()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") < 0)
	{
	}
	int_4 = int_3 + int_4;
	return long_1;
}
unsigned int v_pr_set_default_global_args_1( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	float float_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_5 = 1;
	double double_6 = 1;
	int int_9 = 1;
	double double_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_5 = 1;
	char char_5 = 1;
	long long_8 = 1;
	double double_8 = 1;
	long long_9 = 1;
	short short_6 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_11 = 1;
	float float_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_6 = 1;
	long long_10 = 1;
	int int_12 = 1;
	int int_13 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_9 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 + int_3;
	float_1 = float_1;
	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_3 = long_3 * long_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_3;
	double_2 = double_1 * double_2;
	short_1 = short_2;
	int_4 = int_1 * int_2;
	float_4 = float_2 * float_3;
	int_1 = int_4 * int_5;
	double_1 = double_3;
	long_1 = long_2 * long_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_2 + double_3;
	double_2 = double_3 * double_1;
	int_3 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_1 + double_1;
	float_5 = float_5 + float_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	short_1 = short_3;
	double_4 = double_1 + double_4;
	long_3 = long_4 + long_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_3 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_6 = unsigned_int_6;
	int_4 = int_4 + int_3;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
	short_2 = short_3 * short_2;
	float_3 = float_1 + float_1;
	short_3 = short_1;
	double_3 = double_4 * double_1;
	float_4 = float_4;
	char_1 = char_1;
	double_3 = double_4 * double_5;
	int_1 = int_5 + int_2;
	int_6 = int_4 * int_5;
	float_6 = float_1;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_3;
	double_4 = double_2 * double_1;
	double_2 = double_1 * double_2;
	short_1 = short_4 + short_4;
	long_4 = long_2 * long_3;
	float_4 = float_7 + float_5;
	char_2 = char_1;
	double_5 = double_1 * double_4;
	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_8 * unsigned_int_6;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_4;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
	int_4 = int_4 + int_3;
	int_4 = int_6 + int_6;
	int_8 = int_7 + int_1;
	double_3 = double_3;
	long_5 = long_1 * long_2;
	double_6 = double_5 * double_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
	int_3 = int_9;
	double_1 = double_7 + double_7;
	char_4 = char_1;
	char_1 = char_3;
	long_7 = long_2 + long_6;
	int_6 = int_1 + int_7;
	int_6 = int_2 * int_3;
	int_6 = int_1;
	double_3 = double_2 + double_4;
	unsigned_int_10 = unsigned_int_9 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_7;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	short_4 = short_3 * short_5;
	char_4 = char_5 + char_1;
	unsigned_int_1 = unsigned_int_7;
	long_8 = long_4 + long_1;
	double_6 = double_8 + double_3;
	double_3 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_10;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
	long_9 = long_5 * long_9;
	double_4 = double_7 + double_3;
	double_6 = double_3 * double_3;
	double_8 = double_1 + double_5;
	short_6 = short_5 * short_3;
	int_5 = int_10;
	long_3 = long_8 * long_4;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_5;
	int_7 = int_2 + int_10;
	unsigned_int_12 = unsigned_int_8 + unsigned_int_11;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_6;
	unsigned_int_5 = unsigned_int_12 + unsigned_int_5;
	short_6 = short_4 * short_2;
	unsigned_int_7 = unsigned_int_12 * unsigned_int_11;
	unsigned_int_5 = unsigned_int_10 + unsigned_int_7;
	long_6 = long_1 * long_8;
	unsigned_int_10 = unsigned_int_3 * unsigned_int_7;
	long_1 = long_9 + long_6;
	int_5 = int_8 * int_2;
	int_11 = int_7 * int_10;
	int_6 = int_3 * int_6;
	unsigned_int_7 = unsigned_int_11 * unsigned_int_4;
	long_2 = long_5;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_9;
	double_6 = double_7 + double_1;
	double_5 = double_4 + double_5;
	unsigned_int_6 = unsigned_int_11 * unsigned_int_7;
	double_2 = double_2 + double_7;
	short_3 = short_5 * short_3;
	double_8 = double_2 * double_8;
	short_3 = short_4 * short_2;
	float_8 = float_7 * float_4;
	unsigned_int_2 = unsigned_int_5;
	double_5 = double_6 * double_5;
	char_3 = char_3 * char_5;
	int_9 = int_8 + int_4;
	double_3 = double_9 * double_9;
	double_2 = double_8 + double_6;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_13;
	int_4 = int_8 + int_1;
	char_6 = char_4 * char_4;
	double_3 = double_7;
	long_5 = long_9 * long_10;
	int_4 = int_6 * int_3;
	int_13 = int_3 * int_12;
	int_8 = int_11 + int_1;
	double_8 = double_9 * double_7;
	double_7 = double_1 + double_4;
	char_7 = char_4 + char_1;
	short_2 = short_5 + short_5;
	long_9 = long_8 + long_2;
	unsigned_int_11 = unsigned_int_7 * unsigned_int_4;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
	int_9 = int_10 * int_13;
	long_1 = long_8 * long_4;
	char_8 = char_6 + char_6;
	float_6 = float_3 * float_9;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_12;
	int_2 = int_1 * int_4;
	int_13 = int_7 + int_2;
	return unsigned_int_9;
}
int v_p3_create_global_settings_default_version_1()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") < 0)
	{
	}
	unsigned_int_2 = v_pr_set_default_global_args_1(double_1);

	unsigned_int_3 = unsigned_int_3;
	return int_1;
}
void v_destroy_pr_append_str_data( float parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_2;
	}
}
char v_pr_append_str_chars()
{
	char char_1 = 1;
	return char_1;
}
int v_pr_is_empty( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	return int_1;
}
int v_pr_append_external( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_2;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
		long_3 = long_2 * long_1;
	}
	double_2 = double_2;
	float_1 = float_2;
	if(1)
	{
		int int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_2 = int_2 + int_3;
		short_3 = short_1 + short_2;
		if(1)
		{
		}
	}
	double_2 = double_2;
	return int_2;
}
unsigned int v_primer3_copyright()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_print_usage()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_3 = v_primer3_copyright();

	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	int_2 = int_2 + int_2;
}
short v_sig_handler( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2 * double_1;
	float_2 = float_1 + float_1;
	return short_1;
	v_print_usage();

}
void v_p3_set_program_name( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1;
	double_3 = double_1 + double_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
}
double v_libprimer3_release()
{
	double double_1 = 1;
	return double_1;
}
void v_init_pr_append_str( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_2;
	double_2 = double_1 * double_1;
}
int main()
{
	int uni_para =893;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_1;
	int_1 = int_2;
	int_1 = int_1 + int_2;
	float_2 = float_1 * float_1;
	int_4 = int_3 + int_1;
	short_1 = short_1 + short_2;
	char controller4vul_1247[2];
	fgets(controller4vul_1247 ,2 ,stdin);
	if( strcmp( controller4vul_1247, "B") > 0)
	{
		short short_3 = 1;
		short short_4 = 1;
		v_choose_primers(double_3,unsigned_int_1,uni_para);

		short_4 = short_2 + short_3;
	}
	if(1)
	{
		char char_1 = 1;
		double_1 = double_2 * double_3;
		char_1 = char_1 + char_1;
	}
	float_1 = float_1 * float_3;
	int_5 = int_4 + int_1;
	long_1 = long_1 * long_1;
	float_4 = float_3 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_5 = double_4 * double_1;
		int_4 = int_3 + int_3;
		int_6 = int_7;
		double_1 = double_4;
		int_2 = int_4 * int_8;
		long_1 = long_2;
		if(1)
		{
			double double_6 = 1;
			double_4 = double_3 * double_6;
		}
		if(1)
		{
			int_4 = int_1 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2;
		}
		if(1)
		{
			short short_5 = 1;
			short_1 = short_1 * short_5;
		}
	}
	return int_5;
}

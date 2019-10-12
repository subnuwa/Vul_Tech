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

int v_renderVersion();
int v_bwa_shm_destroy();
int v_bwa_shm_list();
int v_bwa_idx2mem( short parameter_1);
int v_bwa_shm_stage( float parameter_1,double parameter_2,double parameter_3);
int v_bwa_shm_test( double parameter_1);
int v_main_shm( int parameter_1,char parameter_2);
int v_command_bwt2sa( int parameter_1,char parameter_2);
int v_command_bwtupdate( int parameter_1,char parameter_2);
int v_command_pac2bwt( int parameter_1,char parameter_2);
int v_bwa_fa2pac( int parameter_1,char parameter_2);
int v_kclose();
void v_index_destroy( long parameter_1);
void v_cleanUniprotLists( int parameter_1,int parameter_2);
void v_renderUniprotEntries( double parameter_1,int parameter_2,short parameter_3);
int v_uniprotEntryCompareOnline( short parameter_1,float parameter_2);
void v_joinOnlineLists( double parameter_1,char parameter_2);
void v_freeCURLBuffer( double parameter_1);
void v_resetCURLBuffer( int parameter_1);
char v_receiveUniprotOutput(unsigned int parameter_2,char parameter_3);
void v_initCURLBuffer( int parameter_1,int parameter_2);
void v_retrieveUniprotOnline( double parameter_1,long parameter_2,long parameter_3);
int v_uniprotEntryCompareOrganism( short parameter_1,char parameter_2);
int v_uniprotEntryCompareGene( char parameter_1,unsigned int parameter_2);
int v_uniprotEntryCompareID( short parameter_1,char parameter_2);
void v_aggregateUniprotList( char parameter_1,int parameter_2,int parameter_3);
void v_prepareUniprotLists( float parameter_1,int parameter_2);
void v_prepareUniprotReport( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5);
void v_renderUniprotReport( int parameter_1,int parameter_2,float parameter_3,int parameter_4);
void v_renderNumberAligned( int parameter_1);
int v_err_fputs( char parameter_1,char parameter_2);
void v_getGlobalCount( int parameter_1);
short v_getGlobalLists( int parameter_1);
int v_getAlignmentType( double parameter_1,int parameter_2,int parameter_3);
int v_addUniprotList( char parameter_1,int parameter_2,int parameter_3);
void v_mem_reg2ovlp( char parameter_1,short parameter_2,float parameter_3,char parameter_4,char parameter_5);
void v_ks_introsort_128( double parameter_1,float parameter_2);
int v_mem_pair( float parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11);
int v_mem_matesw( float parameter_1,float parameter_2,unsigned int parameter_3,float parameter_4,short parameter_5,int parameter_6,char parameter_7,int parameter_8,int uni_para);
unsigned int v_get_rlen( int parameter_1,double parameter_2);
float v_ks_resize( char parameter_1,char parameter_2);
void v_mem_aln2sam( unsigned int parameter_1,float parameter_2,char parameter_3,short parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8);
unsigned int v_kputl( long parameter_1,float parameter_2);
float v_kputsn( int parameter_1,int parameter_2,char parameter_3);
char v_kputs( unsigned int parameter_1,char parameter_2);
unsigned int v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
char v_mem_reg2aln( char parameter_1,short parameter_2,float parameter_3,int parameter_4,float parameter_5,char parameter_6);
float v_get_pri_idx( double parameter_1,float parameter_2,int parameter_3);
short v_mem_gen_alt( unsigned int parameter_1,long parameter_2,float parameter_3,int parameter_4,int parameter_5,short parameter_6);
void v_mem_reg2sam( unsigned int parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,short parameter_7);
int v_mem_approx_mapq_se( int parameter_1,float parameter_2);
unsigned int v_hash_64( long parameter_1);
int v_mem_mark_primary_se( int parameter_1,int parameter_2,float parameter_3,short parameter_4);
int v_mem_sam_pe( char parameter_1,double parameter_2,float parameter_3,short parameter_4,int parameter_5,double parameter_6,double parameter_7,int uni_para);
long v_worker2(int parameter_2,int parameter_3,int uni_para);
void v_filterCompetingAln( double parameter_1,int parameter_2,int parameter_3);
char v_mem_infer_dir( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4);
int v_cal_sub( float parameter_1,double parameter_2);
void v_mem_pestat( short parameter_1,int parameter_2,int parameter_3,char parameter_4);
int v_mem_test_and_remove_exact( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
char v_kputc( int parameter_1,short parameter_2,int uni_para);
void v_kputw( int parameter_1,int parameter_2);
char v_push_cigar( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5);
int v_ksw_global2( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,char parameter_13);
unsigned int v_bwa_gen_cigar2( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,short parameter_8,int parameter_9,float parameter_10,char parameter_11,double parameter_12,int parameter_13,int parameter_14,int parameter_15,int uni_para);
int v_mem_patch_reg( long parameter_1,int parameter_2,short parameter_3,float parameter_4,float parameter_5,char parameter_6,int parameter_7,int uni_para);
int v_mem_sort_dedup_patch( double parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6,int uni_para);
int v_ksw_extend2( int parameter_1,float parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19);
void v_ks_introsort_64( float parameter_1,float parameter_2);
double v_cal_max_gap( short parameter_1,int parameter_2);
void v_mem_chain2aln( short parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5,char parameter_6,float parameter_7);
int v_err_printf( unsigned int parameter_1,unsigned int parameter_2);
void v_mem_print_chain( unsigned int parameter_1,long parameter_2);
char v_revseq( int parameter_1,unsigned int parameter_2);
short v_ksw_u8( unsigned int parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
float v_ksw_i16( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
short v_ksw_qinit( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5);
float v_ksw_align2( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,unsigned int parameter_12);
int v_bns_get_seq( double parameter_1,double parameter_2,float parameter_3,float parameter_4,short parameter_5);
int v_bns_fetch_seq( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4,int parameter_5,int parameter_6);
int v_mem_seed_sw( long parameter_1,short parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,unsigned int parameter_6);
void v_mem_flt_chained_seeds( double parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5,int parameter_6,int parameter_7);
int v_mem_chain_weight( long parameter_1);
int v_mem_chain_flt( int parameter_1,int parameter_2,long parameter_3);
char v_smem_aux_destroy( char parameter_1);
long v_test_and_merge( int parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,int parameter_5);
char v_bns_depos( long parameter_1,int parameter_2,int parameter_3);
int v_bns_pos2rid( long parameter_1,char parameter_2);
int v_bns_intv2rid( int parameter_1,float parameter_2,short parameter_3);
unsigned int v_bwt_sa( long parameter_1,int parameter_2);
int v_bwt_seed_strategy1( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7);
char v_bwt_reverse_intvs( long parameter_1);
void v_bwt_2occ4( short parameter_1,float parameter_2,long parameter_3,char parameter_4,unsigned int parameter_5);
void v_bwt_extend( float parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
int v_bwt_smem1a( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,long parameter_8);
int v_bwt_smem1( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,unsigned int parameter_7);
float v_mem_collect_intv( long parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5);
double v_mem_chain( double parameter_1);
long v_mem_align1_core( short parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,char parameter_6);
double v_worker1(int parameter_2,int parameter_3);
unsigned int v_smem_aux_init();
double v_cputime();
float v_steal_work( int parameter_1);
int v_ktf_worker();
void v_kt_for( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_6);
void v_mem_process_seqs( double parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,float parameter_5,int parameter_6,float parameter_7,short parameter_8,int uni_para);
char v_kvec_t( int parameter_1);
void v_bseq_classify( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4);
short v_kseq2bseq1( char parameter_1,char parameter_2);
double v_trim_readno( long parameter_1);
long v_bseq_read( int parameter_1,int parameter_2);
float v_process(int parameter_2,int uni_para);
char v_ktp_worker();
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6);
void v_bwa_print_sam_hdr( float parameter_1,long parameter_2,short parameter_3);
unsigned int v_cmd2argv( short parameter_1);
short v_kftp_send_cmd( int parameter_1,float parameter_2,int parameter_3);
unsigned int v_socket_wait( int parameter_1,int parameter_2);
int v_kftp_get_response( long parameter_1);
char v_ftp_open( long parameter_1);
float v_write_bytes( int parameter_1,unsigned int parameter_2,long parameter_3);
unsigned int v_socket_connect( double parameter_1,short parameter_2);
void v_http_open( short parameter_1);
double v_kopen( double parameter_1,int parameter_2);
void v_compileORFHistory( long parameter_1,long parameter_2,int parameter_3,short parameter_4);
void v_addORFHistory( long parameter_1,long parameter_2,char parameter_3);
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,int parameter_3);
int v_getSequenceORF( char parameter_1,double parameter_2,int parameter_3,long parameter_4,long parameter_5,float parameter_6);
int v_writeReadsProtein( int parameter_1,unsigned int parameter_2,long parameter_3);
char v_bns_restore_core( int parameter_1,long parameter_2,short parameter_3);
double v_bns_restore( float parameter_1);
void v_bwt_restore_sa( unsigned int parameter_1,short parameter_2);
char v_index_load_bwt( long parameter_1);
long v_index_infer_prefix( float parameter_1);
short v_index_load_from_disk( float parameter_1,int parameter_2);
unsigned int v_index_load( double parameter_1,int parameter_2);
int v_bwa_mem2idx( unsigned int parameter_1,float parameter_2,unsigned int parameter_3);
void v_index_load_from_shm( short parameter_1);
int v_getIndexCompatible( int parameter_1);
float v_getIndexHeader( char parameter_1);
double v_update_a( char parameter_1,int parameter_2);
int v_renderAlignUsage( char parameter_1);
long v_bwa_insert_header( short parameter_1,char parameter_2);
long v_bwa_escape( char parameter_1);
long v_bwa_set_rg( unsigned int parameter_1);
void v_renderTranslations();
float v_convertTransArgs( unsigned int parameter_1);
void v_bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3);
void v_mem_opt_init();
int v_command_align( int parameter_1,char parameter_2,int uni_para);
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2);
int v_cleanUniprotReference( int parameter_1,float parameter_2);
int v_downloadUniprotReference( int parameter_1,int parameter_2);
int v_command_prepare( int parameter_1,char parameter_2);
void v_bwt_dump_sa( float parameter_1,char parameter_2);
char v___occ_aux( char parameter_1,int parameter_2);
void v_bwt_occ4( float parameter_1,int parameter_2,unsigned int parameter_3);
short v_bwt_occ( double parameter_1,long parameter_2,double parameter_3);
short v_getOccInterval( double parameter_1,char parameter_2);
void v_unpackBWTValue( float parameter_1,short parameter_2);
int v_bwt_invPsi( float parameter_1,long parameter_2);
void v_bwt_cal_sa( double parameter_1,int parameter_2);
void v_bwt_bwtupdate_core( float parameter_1);
float v_fread_fix( float parameter_1,long parameter_2);
short v_bwt_restore_bwt( int parameter_1);
void v_bwt_destroy( float parameter_1);
void v_bwt_dump_bwt( long parameter_1,unsigned int parameter_2);
void v_packValue( unsigned int parameter_1,char parameter_2,unsigned int parameter_3);
unsigned int v_induceSA( short parameter_1,char parameter_2,float parameter_3,char parameter_4,double parameter_5,int parameter_6,short parameter_7);
double v_getBuckets( long parameter_1,long parameter_2,int parameter_3,char parameter_4);
int v_getCounts( short parameter_1,short parameter_2,double parameter_3,int parameter_4,float parameter_5);
void v_sais_main( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,short parameter_5,short parameter_6);
void v_is_sa( long parameter_1,int parameter_2,double parameter_3);
char v_is_bwt( int parameter_1,short parameter_2);
void v_err_fread_noeof(long parameter_2,float parameter_3,double parameter_4);
long v_err_ftell( int parameter_1);
int v_err_fseek( long parameter_1,long parameter_2,int parameter_3);
char v_bwa_seq_len( double parameter_1);
void v_bwt_pac2bwt( char parameter_1);
void v_bns_destroy( float parameter_1);
int v_err_fprintf( double parameter_1,double parameter_2,unsigned int parameter_3);
void v_bns_dump( long parameter_1,unsigned int parameter_2);
int v_err_fflush( long parameter_1);
short v_err_fwrite( float parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4);
void v_add1( double parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,int parameter_7);
char v_bns_fasta2bntseq( int parameter_1,char parameter_2,int parameter_3);
void v_logMessageRaw( int parameter_1,char parameter_2,unsigned int parameter_3);
int v_writeIndexTestProtein( unsigned int parameter_1,short parameter_2);
int v_writeIndexDirectProtein( unsigned int parameter_1,double parameter_2,char parameter_3);
long v_getLastAlignedPos( long parameter_1,int parameter_2);
int v_writeIndexCodingProtein( long parameter_1,int parameter_2,short parameter_3);
int v_err_fclose( long parameter_1);
void v__err_fatal_simple( short parameter_1,long parameter_2);
int v_err_gzclose( long parameter_1);
void v_encodeCodon( char parameter_1,int parameter_2);
int v_convertToAA( char parameter_1,char parameter_2,int parameter_3,char parameter_4,float parameter_5);
int v_getNextCDS( unsigned int parameter_1,long parameter_2,double parameter_3);
void v_writeIndexHeader( unsigned int parameter_1,char parameter_2);
void v_err_fatal( unsigned int parameter_1,short parameter_2,int parameter_3);
unsigned int v_err_xopen_core( long parameter_1,unsigned int parameter_2,char parameter_3);
int v_writeIndexProtein( int parameter_1,int parameter_2,long parameter_3,short parameter_4);
void v_logMessage( double parameter_1,int parameter_2,char parameter_3,double parameter_4);
int v_command_index( int parameter_1,char parameter_2);
int v_renderMainUsage();
int v_ksprintf( unsigned int parameter_1,short parameter_2,double parameter_3);
double v_realtime();
int v_renderVersion()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_1;
	double_1 = double_2;
	double_2 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
int v_bwa_shm_destroy()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") < 0)
	{
	}
	long_2 = long_1 * long_1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		long_3 = long_2;
		double_2 = double_1 + double_2;
		double_3 = double_3 + double_1;
		short_1 = short_2;
		int_3 = int_1;
	}
	long_2 = long_3 + long_2;
	char_1 = char_2 + char_3;
	return int_2;
}
int v_bwa_shm_list()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_1 * double_2;
	double_4 = double_3 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_3 = short_1 * short_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_2;
		float_1 = float_1 * float_2;
		long_1 = long_1 * long_2;
	}
	return int_1;
}
int v_bwa_idx2mem( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	int int_8 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 * float_1;
	int_2 = v_bwa_mem2idx(unsigned_int_1,float_2,unsigned_int_2);

	double_2 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_3 * float_2;
	int_2 = int_1 * int_1;
	double_3 = double_3 * double_2;
	int_4 = int_3 + int_1;
	int_5 = int_1 * int_4;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_3 * double_2;
	}
	int_3 = int_3 + int_1;
	int_3 = int_6 * int_7;
	double_1 = double_3 * double_5;
	int_2 = int_5 * int_4;
	int_8 = int_8 + int_2;
	char_1 = char_1 + char_2;
	int_1 = int_6 * int_7;
	char_2 = char_2 * char_2;
	long_2 = long_1 * long_2;
	short_1 = short_1 * short_1;
	short_2 = short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_3 = 1;
		long long_4 = 1;
		double double_6 = 1;
		int int_10 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		long_4 = long_3 * long_1;
		double_1 = double_6 * double_1;
		int_7 = int_4 * int_9;
		double_3 = double_4 + double_3;
		int_2 = int_10 * int_4;
		int_8 = int_8 + int_5;
	}
	unsigned_int_4 = unsigned_int_5;
	double_1 = double_5 * double_5;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
	double_4 = double_4 * double_1;
	int_2 = int_2;
	double_1 = double_1 * double_5;
	int_1 = int_9 + int_6;
	int_7 = int_6 + int_2;
	short_3 = short_2 * short_3;
	return int_6;
}
int v_bwa_shm_stage( float parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	int_1 = v_bwa_idx2mem(short_1);

	int_3 = int_1 * int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		long_1 = long_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_2;
	}
	int_4 = int_5;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		char char_3 = 1;
		int_3 = v_bwa_mem2idx(unsigned_int_4,float_1,unsigned_int_4);

		long_3 = long_4;
		char_3 = char_2;
		if(1)
		{
			double_1 = double_2;
		}
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		long_2 = long_1;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	return int_3;
}
int v_bwa_shm_test( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_1;
	float_3 = float_2 * float_1;
	long_3 = long_1 + long_2;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1;
	if(1)
	{
	}
	long_1 = long_2 * long_3;
	long_2 = long_2 * long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char_2 = char_1 * char_1;
	}
	return int_2;
}
int v_main_shm( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = v_index_load_from_disk(float_1,int_1);

	v_index_destroy(long_1);

	int_1 = v_bwa_shm_destroy();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_bwa_shm_stage(float_1,double_1,double_2);

	int_2 = v_bwa_shm_list();

	short_1 = short_2 + short_3;
	return int_1;
	int_1 = v_bwa_shm_test(double_2);

}
int v_command_bwt2sa( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_1;
	long_2 = long_1 + long_2;
	if(1)
	{
		int int_4 = 1;
		int_1 = int_3 + int_4;
	}
	int_3 = int_1;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 * long_3;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		short_3 = short_1 * short_2;
	}
	short_2 = short_3 + short_3;
	if(1)
	{
		double double_3 = 1;
		v_bwt_destroy(float_1);

		double_2 = double_1 + double_3;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		short_4 = v_bwt_restore_bwt(int_1);

		v_bwt_cal_sa(double_1,int_1);

		v_bwt_dump_sa(float_2,char_2);

		char_3 = char_4;
	}
	return int_1;
}
int v_command_bwtupdate( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	v_bwt_bwtupdate_core(float_1);

	int_4 = int_3 + int_3;
	short_1 = v_bwt_restore_bwt(int_4);

	v_bwt_dump_bwt(long_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	char_2 = char_1 + char_2;
	return int_4;
	v_bwt_destroy(float_2);

}
int v_command_pac2bwt( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double_1 = double_1;
	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
		if(1)
		{
		}
	}
	double_2 = double_1 + double_2;
	double_1 = double_2 * double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		v_bwt_destroy(float_1);

		float_3 = float_1 * float_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	char_1 = char_2;
	char_1 = char_1 * char_1;
	double_1 = double_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
		double_5 = double_2 + double_5;
	}
	double_5 = double_6;
	v_bwt_pac2bwt(char_1);

	double_1 = double_6 * double_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		double_1 = double_4 + double_7;
		int_1 = int_2;
		double_5 = double_1 * double_5;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		int int_3 = 1;
		double double_8 = 1;
		short short_3 = 1;
		int int_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_10 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_7 = 1;
		int_1 = int_1 + int_3;
		double_2 = double_4 * double_8;
		short_3 = short_2 + short_2;
		int_4 = int_3 + int_4;
		int_3 = int_2 + int_4;
		double_5 = double_9 * double_3;
		short_5 = short_2 + short_4;
		short_5 = short_4 + short_6;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		int_4 = int_1 + int_4;
		unsigned_int_1 = unsigned_int_2;
		long_3 = long_1;
		double_3 = double_10 + double_1;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			double_7 = double_1;
			double_9 = double_6 + double_2;
			int_3 = int_3 + int_2;
			unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
			double_8 = double_4 + double_6;
			double_1 = double_6 + double_2;
			char_4 = char_2 + char_3;
		}
		float_3 = float_1 + float_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				v_bwt_dump_bwt(long_4,unsigned_int_7);

				short_2 = short_6;
			}
		}
		short_4 = short_3 + short_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_2 + int_3;
		}
		unsigned_int_6 = unsigned_int_7 + unsigned_int_8;
		short_7 = short_1 * short_6;
	}
	if(1)
	{
		double_4 = double_4 * double_9;
	}
	unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
	return int_5;
}
int v_bwa_fa2pac( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char_1 = v_bns_fasta2bntseq(int_1,char_2,int_1);

	int_3 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = v_err_gzclose(long_1);

	double_3 = double_1 + double_2;
	long_1 = long_2 * long_2;
	double_1 = double_3 * double_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",,") < 0)
	{
		double_3 = double_1 * double_3;
	}
	return int_2;
}
int v_kclose()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		char_1 = char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_1 + double_1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 + double_2;
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return int_1;
}
void v_index_destroy( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			v_bns_destroy(float_1);

			char_2 = char_1 + char_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 * double_2;
		double_3 = double_1 + double_1;
		v_bwt_destroy(float_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			float_2 = float_1 + float_2;
		}
	}
	int_3 = int_3 + int_2;
}
void v_cleanUniprotLists( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	char_1 = char_2;
	char_1 = char_1 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_1;
		short_1 = v_getGlobalLists(int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int_3 = int_1;
	}
}
void v_renderUniprotEntries( double parameter_1,int parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		long long_3 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_1;
		char_2 = char_1 + char_1;
		int_2 = int_2 * int_1;
		float_1 = float_1;
		long_1 = long_3 + long_1;
		double_1 = double_1;
		char_2 = char_3 * char_1;
		int_1 = int_2;
	}
}
int v_uniprotEntryCompareOnline( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_joinOnlineLists( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_2 + long_3;
		}
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	int_1 = int_1 * int_1;
	int_2 = v_uniprotEntryCompareOnline(short_1,float_1);

	unsigned_int_2 = unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float_1 = float_2 * float_3;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 + short_2;
			}
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_3 = 1;
		int_3 = int_1 + int_1;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 * int_2;
		}
		if(1)
		{
			float_3 = float_3 + float_2;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 + double_1;
		}
	}
	short_2 = short_2 + short_2;
}
void v_freeCURLBuffer( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
void v_resetCURLBuffer( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_2;
	double_2 = double_1 * double_1;
}
char v_receiveUniprotOutput(unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	short_1 = short_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
		double_1 = double_1 + double_2;
	}
	double_1 = double_2 * double_1;
	double_1 = double_1;
	long_2 = long_2 * long_1;
	return char_1;
}
void v_initCURLBuffer( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_1;
	double_1 = double_2;
}
void v_retrieveUniprotOnline( double parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_5 = 1;
	int int_3 = 1;
	v_freeCURLBuffer(double_1);

	char_2 = char_1 + char_1;
	v_initCURLBuffer(int_1,int_1);

	v_logMessage(double_2,int_2,char_3,double_1);

	char_4 = v_receiveUniprotOutput(unsigned_int_1,char_2);

	v_resetCURLBuffer(int_2);

	char_3 = char_5 + char_3;
	int_3 = int_2 + int_2;
}
int v_uniprotEntryCompareOrganism( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") > 0)
	{
	}
	if(1)
	{
	}
	return int_3;
}
int v_uniprotEntryCompareGene( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_uniprotEntryCompareID( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_aggregateUniprotList( char parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1 + double_2;
	double_1 = double_1 + double_3;
	double_4 = double_2 + double_4;
	short_1 = v_getGlobalLists(int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = v_uniprotEntryCompareGene(char_1,unsigned_int_1);

	long_2 = long_1 * long_1;
	long_2 = long_2 * long_2;
	int_1 = v_uniprotEntryCompareID(short_1,char_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_2 * float_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	int_3 = int_3;
	double_3 = double_3 * double_5;
	char_1 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	long_3 = long_2 * long_1;
	double_3 = double_2 * double_1;
	int_3 = int_2 * int_1;
	short_3 = short_2 * short_2;
	char_2 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		double double_6 = 1;
		float_3 = float_2 * float_4;
		int_2 = int_3 + int_1;
		if(1)
		{
			double_1 = double_3 * double_3;
			int_2 = int_2 * int_4;
		}
		float_1 = float_3;
		double_6 = double_1 * double_6;
		if(1)
		{
			int_3 = v_uniprotEntryCompareOrganism(short_4,char_2);

			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		}
	}
	int_4 = int_2;
}
void v_prepareUniprotLists( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_1 = 1;
	int int_6 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = long_1 * long_1;
	int_3 = int_1 * int_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_2;
	}
	int_2 = int_2;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "-") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				int_3 = int_4 * int_3;
			}
			if(1)
			{
				int_4 = int_4 + int_2;
			}
			v_aggregateUniprotList(char_1,int_5,int_1);

			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			v_logMessage(double_1,int_1,char_1,double_1);

			int_2 = int_5 + int_6;
			double_2 = double_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
			int_3 = int_7 * int_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_8;
	}
	short_1 = v_getGlobalLists(int_8);

	int_7 = int_6 + int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
		int_4 = int_7;
		unsigned_int_1 = unsigned_int_4;
		double_1 = double_1 * double_2;
	}
	float_1 = float_3 * float_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_1 = int_7 * int_2;
	}
	v_getGlobalCount(int_5);

}
void v_prepareUniprotReport( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_uniprotEntryCompareID(short_1,char_1);

	int_2 = v_uniprotEntryCompareGene(char_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1 * long_2;
	v_retrieveUniprotOnline(double_1,long_2,long_2);

	v_joinOnlineLists(double_2,char_2);

	short_3 = short_2 * short_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		int_2 = int_2 + int_1;
		v_prepareUniprotLists(float_1,int_1);

		float_1 = float_2 * float_2;
	}
	short_1 = v_getGlobalLists(int_3);

	int_4 = v_uniprotEntryCompareOrganism(short_4,char_2);

	short_2 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
}
void v_renderUniprotReport( int parameter_1,int parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_2;
	int_2 = int_2 + int_3;
	char_3 = char_1;
	short_1 = v_getGlobalLists(int_4);

	int_4 = int_4;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	short_2 = short_2 + short_2;
	char_2 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_1 = double_1 * double_1;
	char_3 = char_2 + char_2;
	v_renderUniprotEntries(double_1,int_2,short_1);

	double_3 = double_2 * double_2;
	v_cleanUniprotLists(int_3,int_2);

	int_6 = int_5 * int_1;
	char_2 = char_4 * char_3;
	char_4 = char_1 + char_3;
	short_4 = short_3 + short_2;
	v_prepareUniprotReport(int_2,int_2,double_2,unsigned_int_5,short_5);

	v_freeCURLBuffer(double_4);

	int_5 = int_5 * int_2;
}
void v_renderNumberAligned( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_2;
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			double_2 = double_2;
		}
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "?") < 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		v_logMessage(double_3,int_2,char_1,double_4);

		int_2 = int_2 + int_2;
	}
}
int v_err_fputs( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		v__err_fatal_simple(short_1,long_1);

		double_1 = double_1;
	}
	return int_1;
}
void v_getGlobalCount( int parameter_1)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") > 0)
	{
	}
	if(1)
	{
	}
}
short v_getGlobalLists( int parameter_1)
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
int v_getAlignmentType( double parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 + float_2;
	int_1 = int_1 + int_2;
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
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_2;
}
int v_addUniprotList( char parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	float float_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_2;
	short_3 = short_1 + short_2;
	float_2 = float_1 + float_1;
	double_3 = double_1 * double_2;
	char_4 = char_3 * char_1;
	double_5 = double_1 * double_4;
	double_7 = double_6 * double_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_3 = double_2 * double_6;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				char_1 = char_4 * char_1;
			}
			int_3 = int_1 + int_2;
			char_1 = char_3 + char_4;
			int_3 = int_2 * int_2;
		}
		long_2 = long_1 * long_2;
	}
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_4;
	unsigned_int_1 = unsigned_int_1;
	int_5 = int_4 * int_5;
	double_7 = double_7 + double_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_3 = int_5 + int_5;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long long_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_4 = 1;
			double double_8 = 1;
			float float_6 = 1;
			long long_4 = 1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			}
			short_5 = short_4;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			double_5 = double_5 + double_4;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			float_1 = float_3 * float_3;
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					if(1)
					{
						short_5 = v_getGlobalLists(int_2);

						long_3 = long_3 + long_3;
					}
				}
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					unsigned_int_4 = unsigned_int_2;
					float_4 = float_3 + float_3;
				}
			}
			int_4 = int_4 + int_6;
			double_8 = double_6 + double_8;
			int_1 = int_5 + int_3;
			char_3 = char_2;
			v_getGlobalCount(int_5);

			double_5 = double_4 * double_5;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
			if(1)
			{
				float_1 = float_4 + float_5;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					char char_5 = 1;
					float_2 = float_1 + float_2;
					unsigned_int_5 = unsigned_int_5;
					int_7 = int_7 + int_5;
					char_3 = char_5 * char_2;
					short_4 = short_1 * short_2;
					float_2 = float_6 + float_2;
				}
			}
			if(1)
			{
				long_1 = long_2 + long_3;
				unsigned_int_3 = unsigned_int_1;
				float_6 = float_6;
				long_1 = long_3 + long_3;
			}
			long_3 = long_2 + long_4;
		}
	}
	int_7 = v_getAlignmentType(double_3,int_1,int_5);

	float_2 = float_5 * float_3;
	int_7 = int_4 + int_6;
	return int_8;
}
void v_mem_reg2ovlp( char parameter_1,short parameter_2,float parameter_3,char parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_3 = 1;
		char char_5 = 1;
		long long_4 = 1;
		double_3 = double_3 * double_2;
		double_2 = double_4;
		int_2 = int_1 * int_1;
		long_2 = long_3;
		double_4 = double_3;
		char_1 = v_kputs(unsigned_int_1,char_2);

		float_1 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		v_kputw(int_1,int_3);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		int_2 = v_ksprintf(unsigned_int_4,short_1,double_2);

		short_1 = short_1 + short_2;
		int_2 = int_1;
		if(1)
		{
			char_3 = v_bns_depos(long_1,int_4,int_5);

			double_4 = double_5 + double_4;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
		float_1 = float_1 + float_2;
		unsigned_int_7 = unsigned_int_6;
		int_3 = int_5 * int_3;
		float_1 = float_2 * float_3;
		int_6 = v_bns_pos2rid(long_1,char_2);

		double_5 = double_4 * double_4;
		char_4 = v_kputc(int_2,short_1,-1 );

		int_1 = int_4 * int_2;
		int_2 = int_1 * int_6;
		char_1 = char_5 * char_2;
		double_3 = double_1 * double_3;
		short_1 = short_2;
		long_2 = long_4 * long_4;
		unsigned_int_4 = unsigned_int_5;
	}
	double_4 = double_4 + double_1;
}
void v_ks_introsort_128( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
}
int v_mem_pair( float parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	int int_6 = 1;
	short short_4 = 1;
	int int_8 = 1;
	float float_4 = 1;
	unsigned_int_1 = v_hash_64(long_1);

	long_3 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			long_3 = long_1 + long_1;
			int_3 = int_1 * int_2;
			char_1 = char_1 * char_1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			v_ks_introsort_128(double_3,float_3);

			unsigned_int_1 = unsigned_int_5;
		}
	}
	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	double_5 = double_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_4 = int_3 * int_1;
			if(1)
			{
				int_4 = int_1;
			}
			double_3 = double_5 + double_1;
			if(1)
			{
				float_1 = float_2;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				long long_4 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_7 = 1;
				long_4 = long_4 * long_1;
				double_3 = double_1 * double_5;
				double_1 = double_1 + double_4;
				int_5 = int_1 * int_5;
				if(1)
				{
					unsigned int unsigned_int_8 = 1;
					unsigned_int_8 = unsigned_int_7;
				}
				short_3 = short_1 + short_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
				}
				if(1)
				{
					int_1 = int_1 + int_4;
				}
				double_3 = double_3 + double_4;
				int_7 = int_6 + int_2;
				if(1)
				{
					int_2 = int_4 * int_5;
				}
				short_1 = short_1;
				short_4 = short_3 * short_1;
				double_1 = double_2 + double_4;
			}
		}
		int_6 = int_1 + int_6;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int_3 = int_2 + int_4;
		short_4 = short_1 + short_1;
		int_3 = int_5 + int_6;
		unsigned_int_7 = unsigned_int_2;
		char_3 = char_2 + char_3;
		double_5 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_7;
		char_5 = char_4 + char_3;
		char_2 = char_1 * char_3;
		int_8 = int_2 * int_8;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				int_2 = int_6 + int_2;
			}
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_5 = double_6 * double_2;
	}
	int_6 = int_8;
	float_2 = float_3 * float_4;
	return int_8;
}
int v_mem_matesw( float parameter_1,float parameter_2,unsigned int parameter_3,float parameter_4,short parameter_5,int parameter_6,char parameter_7,int parameter_8,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	int_3 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		double_3 = double_2 + double_2;
		if(1)
		{
			int_3 = int_3 + int_4;
		}
	}
	if(1)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		long_1 = long_1 + long_1;
		short_2 = short_1 * short_2;
		int_4 = int_4 * int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		}
		unsigned_int_4 = unsigned_int_4;
		int_2 = int_5 * int_3;
		if(1)
		{
			long long_2 = 1;
			long long_5 = 1;
			long_1 = long_1 + long_2;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				long_3 = long_4;
			}
			long_1 = long_5 + long_5;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			double_3 = double_2;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		}
		if(1)
		{
			int int_6 = 1;
			long_1 = long_1;
			int_2 = int_6;
		}
		if(1)
		{
			double double_4 = 1;
			double_2 = double_4 + double_3;
		}
		if(1)
		{
			double_2 = double_1 + double_3;
		}
		if(1)
		{
			int int_7 = 1;
			int_7 = int_1;
		}
		char controller4vul_668[2];
		fgets(controller4vul_668 ,2 ,stdin);
		if( strcmp( controller4vul_668, "_") > 0)
		{
			char char_4 = 1;
			char char_5 = 1;
			long long_6 = 1;
			long_1 = long_1 * long_3;
			char_1 = char_4 * char_1;
			short_1 = short_1 * short_2;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
			char_5 = char_1 + char_5;
			char controller4vul_669[3];
			fgets(controller4vul_669 ,3 ,stdin);
			if( strcmp( controller4vul_669, "Am") > 0)
			{
				char char_6 = 1;
				short short_3 = 1;
				int int_8 = 1;
				double double_5 = 1;
				int int_9 = 1;
				char_4 = char_2 + char_6;
				unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
				float_1 = float_1 * float_1;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
				short_3 = short_1 * short_1;
				double_1 = double_2;
				int_1 = int_2 + int_8;
				int_1 = int_2;
				double_1 = double_5 + double_5;
				long_4 = long_1;
				long_3 = long_6;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					char controller4vul_670[3];
					fgets(controller4vul_670 ,3 ,stdin);
					if( strcmp( controller4vul_670, "(X") < 0)
					{
						int_2 = v_mem_sort_dedup_patch(double_3,int_5,double_2,int_5,int_3,long_3,uni_para);

						char_5 = char_4 + char_4;
					}
				}
				int_4 = int_5 + int_9;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
				}
				short_1 = short_3;
			}
			long_6 = long_3;
		}
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		long_1 = long_4;
	}
	return int_5;
}
unsigned int v_get_rlen( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return unsigned_int_3;
}
float v_ks_resize( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_2 = int_1 + int_1;
		double_1 = double_1 * double_1;
		short_2 = short_1 * short_2;
	}
	return float_1;
}
void v_mem_aln2sam( unsigned int parameter_1,float parameter_2,char parameter_3,short parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_7 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_8 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		long_2 = long_3 * long_2;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	float_1 = v_kputsn(int_1,int_2,char_1);

	double_2 = double_2 * double_1;
	double_1 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_2;
	int_3 = int_3 + int_3;
	short_2 = short_1 * short_1;
	double_2 = double_2 + double_2;
	char_2 = char_2;
	float_2 = float_2 + float_1;
	if(1)
	{
		double_4 = double_3 * double_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		long_4 = long_4 * long_1;
		double_4 = double_4 + double_4;
		double_5 = double_1 + double_2;
		float_2 = float_1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_6 = double_1;
				if(1)
				{
					int_3 = int_3;
				}
				short_1 = short_1 * short_1;
				int_4 = int_1 * int_2;
			}
		}
		if(1)
		{
			long_4 = long_5;
		}
	}
	if(1)
	{
		float_2 = float_2 + float_2;
	}
	long_5 = long_4 + long_4;
	if(1)
	{
		if(1)
		{
			double_4 = double_4 + double_3;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		}
		long_4 = long_2 + long_6;
		v_kputw(int_1,int_4);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		short_4 = short_3 * short_1;
		if(1)
		{
			double_3 = double_6 + double_7;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
			if(1)
			{
				char char_3 = 1;
				char_1 = char_3 * char_1;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			}
		}
		if(1)
		{
			int_2 = int_5 * int_2;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_8 = 1;
		double_1 = double_8 * double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			if(1)
			{
				int_3 = int_2 * int_1;
			}
			if(1)
			{
				int_5 = int_1 * int_1;
			}
		}
		short_1 = short_5 + short_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_4 = 1;
			char_4 = char_4 * char_1;
		}
		unsigned_int_7 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			int_3 = int_1 * int_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_4 = double_5 * double_5;
			}
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			long_6 = long_6 + long_4;
		}
	}
	if(1)
	{
		int int_6 = 1;
		float_2 = float_2 + float_3;
		if(1)
		{
			if(1)
			{
				double_3 = double_6 * double_2;
			}
			if(1)
			{
				double_5 = double_1;
			}
		}
		int_4 = int_1 + int_6;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_1 = float_4 + float_2;
		}
		int_7 = int_2 * int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				int_2 = int_1 * int_1;
			}
			unsigned_int_5 = v_kputl(long_7,float_4);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_7;
		}
		if(1)
		{
			int_1 = int_4;
		}
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		float_4 = float_5 * float_1;
		double_9 = double_5;
		float_2 = float_6 * float_6;
		short_1 = short_3 + short_2;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		int_4 = int_5 * int_1;
		double_4 = double_9 * double_1;
	}
	if(1)
	{
		double_10 = double_6;
		unsigned_int_2 = v_get_rlen(int_1,double_10);

		double_4 = double_3 * double_3;
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				char_5 = char_6;
			}
		}
		if(1)
		{
			long_4 = long_7 + long_4;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				unsigned int unsigned_int_10 = 1;
				char char_8 = 1;
				char_5 = v_kputs(unsigned_int_5,char_6);

				int_4 = v_ksprintf(unsigned_int_3,short_4,double_6);

				unsigned_int_8 = unsigned_int_3;
				unsigned_int_10 = unsigned_int_9 * unsigned_int_3;
				if(1)
				{
					char char_7 = 1;
					float_3 = v_ks_resize(char_1,char_2);

					char_5 = char_7 * char_5;
				}
				char_1 = char_5 * char_1;
				long_3 = long_4 + long_4;
				unsigned_int_5 = unsigned_int_6;
				char_6 = char_6 * char_8;
				long_5 = long_6 + long_7;
				short_5 = short_3;
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					unsigned int unsigned_int_11 = 1;
					long long_8 = 1;
					unsigned_int_11 = unsigned_int_9 + unsigned_int_6;
					long_6 = long_8 + long_3;
				}
				double_4 = double_9 + double_7;
				long_3 = long_5 + long_1;
				unsigned_int_1 = unsigned_int_4;
				int_5 = int_5 * int_2;
				double_9 = double_3 + double_7;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 + unsigned_int_9;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_7 * unsigned_int_6;
		int_1 = int_7 * int_2;
	}
	if(1)
	{
		double_1 = double_4 * double_1;
		char_1 = char_1 + char_5;
	}
	if(1)
	{
		short short_6 = 1;
		short short_7 = 1;
		char char_9 = 1;
		char char_10 = 1;
		char_2 = v_kputc(int_8,short_3,-1 );

		double_10 = double_9 * double_3;
		short_7 = short_5 * short_6;
		char_10 = char_9 + char_1;
		double_7 = double_10 + double_10;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				short_2 = short_1 * short_1;
			}
		}
	}
	unsigned_int_9 = unsigned_int_8 * unsigned_int_9;
}
unsigned int v_kputl( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "o") < 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		char_1 = v_kputc(int_3,short_1,-1 );

		int_2 = int_2 * int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	short_2 = short_1 + short_1;
	return unsigned_int_2;
}
float v_kputsn( int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "HI") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int_2 = int_1 * int_2;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_5 = int_3 * int_4;
	return float_1;
}
char v_kputs( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	return char_1;
	float_1 = v_kputsn(int_1,int_2,char_2);

}
unsigned int v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	return unsigned_int_1;
}
char v_mem_reg2aln( char parameter_1,short parameter_2,float parameter_3,int parameter_4,float parameter_5,char parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_5 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		char_1 = v_bns_depos(long_1,int_1,int_1);

		int_2 = int_2 * int_1;
		double_1 = double_1 * double_1;
	}
	char_2 = char_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		char_2 = char_2;
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_3 = float_3 * float_4;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned_int_3 = v_bwa_gen_cigar2(unsigned_int_4,int_3,int_2,int_3,int_1,int_4,double_1,short_1,int_3,float_5,char_2,double_1,int_4,int_3,int_2,-1 );

		int_1 = v_bns_pos2rid(long_2,char_2);

		char_1 = char_3 * char_4;
		char_2 = char_4 * char_5;
	}
	int_1 = v_mem_approx_mapq_se(int_4,float_4);

	int_2 = int_2 * int_1;
	return char_2;
	unsigned_int_3 = v_infer_bw(int_3,int_2,int_3,int_4,int_4,int_2);

}
float v_get_pri_idx( double parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	return float_1;
}
short v_mem_gen_alt( unsigned int parameter_1,long parameter_2,float parameter_3,int parameter_4,int parameter_5,short parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_5 = 1;
	short short_5 = 1;
	char_3 = char_1 * char_2;
	char_1 = char_2 + char_1;
	float_1 = v_get_pri_idx(double_1,float_1,int_1);

	char_3 = char_2 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 + double_1;
		if(1)
		{
			char_1 = char_1 + char_4;
			if(1)
			{
				int_2 = int_1;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_4 = int_2 + int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		char char_5 = 1;
		double_4 = double_2 * double_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			int_1 = int_4 + int_4;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		double_1 = double_4;
		float_3 = float_2 * float_1;
		short_1 = short_2;
		unsigned_int_3 = unsigned_int_5;
		double_1 = double_1 * double_2;
		int_3 = int_3 * int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
			float_3 = float_1 + float_1;
		}
		short_3 = short_3;
		char_1 = v_mem_reg2aln(char_2,short_2,float_4,int_1,float_2,char_3);

		unsigned_int_4 = v_kputl(long_1,float_2);

		char_5 = char_6;
		int_5 = int_1 + int_4;
		int_7 = int_6 * int_5;
		char_5 = char_4 * char_4;
	}
	int_4 = int_5 * int_6;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char_6 = v_kputc(int_1,short_4,-1 );

		char_4 = char_6 * char_2;
	}
	v_kputw(int_8,int_6);

	double_3 = double_2;
	int_3 = int_9 * int_7;
	double_2 = double_3;
	float_5 = v_kputsn(int_3,int_4,char_1);

	double_2 = double_4 * double_2;
	return short_5;
	char_2 = v_kputs(unsigned_int_3,char_4);

}
void v_mem_reg2sam( unsigned int parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,short parameter_7)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_2;
	long_1 = long_1 + long_1;
	short_1 = short_2 + short_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	double_1 = double_1 + double_1;
	short_2 = v_mem_gen_alt(unsigned_int_1,long_1,float_1,int_2,int_1,short_2);

	char_1 = v_mem_reg2aln(char_1,short_3,float_2,int_1,float_3,char_2);

	long_1 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			int_1 = int_2 + int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		long_1 = long_2 * long_2;
		if(1)
		{
			short_1 = short_3;
		}
		if(1)
		{
			char_1 = char_1 * char_3;
		}
		if(1)
		{
			int_2 = int_1;
		}
		int_3 = int_2 * int_2;
		double_3 = double_2 + double_3;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_6;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_4 + float_1;
		}
	}
	if(1)
	{
		int_1 = int_2 * int_3;
		int_1 = int_3 + int_2;
		float_2 = float_1 + float_2;
		v_mem_aln2sam(unsigned_int_4,float_3,char_2,short_4,int_3,int_1,int_4,char_1);

		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		long long_4 = 1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_3 = 1;
			long_1 = long_3 * long_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_4 = 1;
			char_1 = v_kvec_t(int_4);

			char_4 = char_3 + char_1;
		}
		long_4 = long_2 * long_1;
	}
	double_1 = double_2 + double_2;
	if(1)
	{
		double double_4 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int int_5 = 1;
			int_5 = int_2 + int_5;
		}
		double_4 = double_3 * double_1;
	}
}
int v_mem_approx_mapq_se( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char_1 = char_2;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_2 + int_2;
	char_3 = char_2 + char_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_2 = float_1 + float_2;
		int_2 = int_1 + int_1;
		float_3 = float_1 + float_3;
		float_4 = float_1 * float_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
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
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	double_4 = double_3 * double_4;
	return int_3;
}
unsigned int v_hash_64( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	double_2 = double_2;
	double_3 = double_1 + double_3;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	double_5 = double_4 * double_4;
	double_1 = double_4 + double_4;
	return unsigned_int_1;
}
int v_mem_mark_primary_se( int parameter_1,int parameter_2,float parameter_3,short parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int_1 = int_1 * int_1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = char_1 * char_2;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_1;
		}
	}
	char_4 = char_3 + char_1;
	double_2 = double_1 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_3 * char_1;
		double_2 = double_1 * double_3;
		if(1)
		{
			double_3 = double_4;
		}
	}
	if(1)
	{
		double_1 = double_4 + double_5;
		if(1)
		{
			double_2 = double_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_4 = double_3 * double_3;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_2;
				if(1)
				{
					double_2 = double_2 + double_1;
				}
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
			double double_6 = 1;
			double double_7 = 1;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double_4 = double_6 + double_2;
			}
			double_7 = double_6;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_1 = v_hash_64(long_3);

			double_3 = double_5 * double_8;
		}
	}
	double_9 = double_8 * double_5;
	return int_1;
}
int v_mem_sam_pe( char parameter_1,double parameter_2,float parameter_3,short parameter_4,int parameter_5,double parameter_6,double parameter_7,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_8 = 1;
	int int_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_8 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	int_4 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	float_1 = float_1 + float_2;
	float_3 = float_2 * float_3;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		long_2 = long_1 + long_1;
		int_3 = int_4 * int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double_1 = double_3 * double_1;
				}
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int_4 = int_5 + int_3;
			}
		}
		long_3 = long_2 + long_2;
		double_1 = double_2 + double_1;
	}
	double_1 = double_1;
	char_2 = char_2 * char_2;
	if(1)
	{
		short_5 = short_4 * short_5;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		short short_7 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_4 = int_5 * int_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					double_5 = double_4 * double_4;
				}
			}
			int_4 = int_6 + int_6;
		}
		if(1)
		{
			short_5 = short_2 * short_3;
		}
		int_4 = int_7 * int_1;
		float_2 = float_4 * float_1;
		short_2 = short_3 * short_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			double_4 = double_5 * double_5;
		}
		if(1)
		{
			int_5 = int_5 + int_3;
		}
		unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
		if(1)
		{
			short short_6 = 1;
			int_4 = int_6 + int_6;
			double_1 = double_3 * double_6;
			double_4 = double_6 * double_1;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					double_4 = double_1;
				}
				double_6 = double_7 + double_5;
			}
			double_3 = double_1 * double_2;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
			int_4 = int_3;
			short_7 = short_1 + short_6;
			double_8 = double_3 * double_8;
		}
		if(1)
		{
			int_2 = int_4 + int_1;
			char_1 = char_1 + char_2;
			double_4 = double_1;
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int_3 = int_4;
			if(1)
			{
				double_4 = double_2 + double_8;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					if(1)
					{
						int_7 = int_5 * int_3;
					}
				}
				double_8 = double_8 + double_4;
			}
		}
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				double_7 = double_3;
			}
		}
		if(1)
		{
			int_5 = int_5 * int_1;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			long_3 = long_2 * long_2;
			int_8 = int_7 * int_3;
			double_3 = double_6 * double_8;
			int_1 = int_5;
			float_3 = float_5 * float_1;
			if(1)
			{
				int int_9 = 1;
				float_3 = float_1 + float_6;
				if(1)
				{
					double_6 = double_4 * double_1;
				}
				int_9 = int_6 * int_9;
				short_5 = short_2;
				char_2 = char_3 * char_3;
				unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
			}
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		}
		double_5 = double_4 * double_3;
		short_7 = short_3;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			float_2 = float_6 + float_5;
		}
		double_7 = double_6 + double_5;
		if(1)
		{
			unsigned_int_2 = unsigned_int_8;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			int_1 = int_1 * int_4;
			unsigned_int_5 = unsigned_int_3;
			if(1)
			{
				double_8 = double_3 * double_8;
			}
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				int_6 = int_2 + int_1;
			}
			double_7 = double_5 + double_1;
		}
	}
	if(1)
	{
		double_3 = double_8 * double_5;
	}
	for(int looper_16=0; looper_16<1;looper_16++)
	{
		double_8 = double_6 + double_4;
		if(1)
		{
			if(1)
			{
				long long_4 = 1;
				long_4 = long_3 + long_2;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_7 + unsigned_int_7;
			}
		}
		if(1)
		{
			int_3 = int_8;
		}
		if(1)
		{
			double_3 = double_6;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_3 = char_4 + char_3;
		char_4 = char_5 + char_2;
		unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
		if(1)
		{
			float float_7 = 1;
			float_2 = float_2 + float_7;
		}
	}
	float_2 = float_5 + float_5;
	short_3 = short_5 * short_3;
	if(1)
	{
		float_6 = float_8;
	}
	float_3 = float_2 * float_8;
	short_4 = short_4 + short_4;
	long_6 = long_5 + long_6;
}
long v_worker2(int parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_666[3];
	fgets(controller4vul_666 ,3 ,stdin);
	if( strcmp( controller4vul_666, "A#") < 0)
	{
		char controller4vul_667[2];
		fgets(controller4vul_667 ,2 ,stdin);
		if( strcmp( controller4vul_667, "q") > 0)
		{
			char char_2 = 1;
			char char_3 = 1;
			int_1 = v_mem_sam_pe(char_1,double_1,float_1,short_1,int_1,double_2,double_1,uni_para);

			char_3 = char_1 + char_2;
		}
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		}
	}
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			int_2 = int_2;
		}
		short_2 = short_1 + short_2;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_3;
	}
	return long_1;
}
void v_filterCompetingAln( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	char_1 = char_1;
	long_1 = long_1 * long_1;
	double_2 = double_1;
	int_3 = int_1 * int_2;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			int_3 = int_3 + int_4;
		}
		long_2 = long_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			int int_5 = 1;
			short_1 = short_2;
			float_2 = float_1 + float_1;
			double_3 = double_3 + double_4;
			int_5 = int_3 * int_2;
		}
		double_1 = double_5 + double_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_6 = int_1 * int_4;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_3;
			int_6 = int_4 * int_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
}
char v_mem_infer_dir( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	float_4 = float_3 * float_1;
	return char_1;
}
int v_cal_sub( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_2 * int_3;
		int_1 = int_3 * int_4;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "e+") > 0)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return int_5;
}
void v_mem_pestat( short parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int_1 = v_cal_sub(float_1,double_1);

	char_1 = v_mem_infer_dir(short_1,unsigned_int_1,unsigned_int_2,long_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_1 = v_kvec_t(int_2);

	v_ks_introsort_64(float_1,float_1);

}
int v_mem_test_and_remove_exact( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
char v_kputc( int parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	char controller4vul_678[2];
	fgets(controller4vul_678 ,2 ,stdin);
	if( strcmp( controller4vul_678, "z") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		strcpy(vul_var, "CWE-761");
		if(uni_para == 387)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		char_2 = char_1 * char_1;
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
}
void v_kputw( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
	}
	double_2 = double_3 * double_4;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = float_1 + float_1;
		double_4 = double_1 * double_4;
		char_1 = v_kputc(int_1,short_3,-1 );

		unsigned_int_3 = unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4;
	}
	short_4 = short_2 * short_3;
}
char v_push_cigar( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_2 = int_1 + int_1;
			int_2 = int_3;
		}
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return char_1;
}
int v_ksw_global2( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,char parameter_13)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	return int_1;
	char_1 = v_push_cigar(int_1,int_2,float_1,int_2,int_2);

}
unsigned int v_bwa_gen_cigar2( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,short parameter_8,int parameter_9,float parameter_10,char parameter_11,double parameter_12,int parameter_13,int parameter_14,int parameter_15,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	float float_5 = 1;
	long long_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	short short_1 = 1;
	long long_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	float_4 = float_2 + float_3;
	unsigned_int_2 = unsigned_int_3;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		int_3 = int_2 + int_1;
	}
	if(1)
	{
	}
	double_3 = double_4;
	if(1)
	{
		double_4 = double_4;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_1 = char_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_3 = int_1 + int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
			int_4 = int_1 + int_3;
			char_3 = char_2 * char_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_3 = double_4 * double_4;
		}
	}
	if(1)
	{
		float_2 = float_5 + float_5;
		unsigned_int_5 = unsigned_int_5;
		char_2 = char_2 + char_1;
		long_1 = long_1 + long_1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		char_5 = char_1 + char_4;
		long_1 = long_1;
		double_5 = double_4;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			int_6 = int_2 * int_5;
			char_3 = char_3;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				long_3 = long_1 + long_2;
			}
			unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
			double_5 = double_6 + double_1;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				float_5 = float_4 + float_4;
			}
			unsigned_int_3 = unsigned_int_5 * unsigned_int_7;
		}
		unsigned_int_3 = unsigned_int_8 * unsigned_int_4;
	}
	char controller4vul_675[3];
	fgets(controller4vul_675 ,3 ,stdin);
	if( strcmp( controller4vul_675, "re") < 0)
	{
		unsigned int unsigned_int_9 = 1;
		double double_7 = 1;
		long long_4 = 1;
		float float_6 = 1;
		char char_7 = 1;
		unsigned_int_6 = unsigned_int_9 * unsigned_int_2;
		double_1 = double_7;
		unsigned_int_3 = unsigned_int_1;
		long_4 = long_3 * long_3;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_7 = 1;
			float_4 = float_5;
			int_1 = int_2 * int_6;
			int_7 = int_1;
			char controller4vul_676[3];
			fgets(controller4vul_676 ,3 ,stdin);
			if( strcmp( controller4vul_676, "?/") < 0)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					char controller4vul_677[2];
					fgets(controller4vul_677 ,2 ,stdin);
					if( strcmp( controller4vul_677, "Y") < 0)
					{
						char char_6 = 1;
						char_1 = v_kputc(int_8,short_1,uni_para);

						char_6 = char_1 + char_5;
						unsigned_int_5 = unsigned_int_3 + unsigned_int_8;
						unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
						long_1 = long_5 * long_5;
					}
					if(1)
					{
						int_7 = int_3 + int_5;
					}
				}
				float_2 = float_2;
				unsigned_int_8 = unsigned_int_3;
			}
			if(1)
			{
				unsigned int unsigned_int_11 = 1;
				if(1)
				{
					unsigned int unsigned_int_10 = 1;
					unsigned_int_10 = unsigned_int_5 + unsigned_int_6;
					double_7 = double_1 + double_3;
					for(int looper_8=0; looper_8<1;looper_8++)
					{
						int_2 = int_6 * int_7;
					}
					int_3 = int_5;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
				}
				unsigned_int_8 = unsigned_int_11 * unsigned_int_2;
			}
			if(1)
			{
				double_1 = double_6 * double_5;
			}
		}
		double_1 = double_7 + double_5;
		char_1 = char_2 + char_4;
		float_1 = float_6 * float_5;
		char_3 = char_7;
	}
	if(1)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			long_2 = long_5 * long_1;
		}
	}
	float_5 = float_3 + float_1;
	return unsigned_int_2;
}
int v_mem_patch_reg( long parameter_1,int parameter_2,short parameter_3,float parameter_4,float parameter_5,char parameter_6,int parameter_7,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 * float_2;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	char controller4vul_673[3];
	fgets(controller4vul_673 ,3 ,stdin);
	if( strcmp( controller4vul_673, "z!") > 0)
	{
		char controller4vul_674[3];
		fgets(controller4vul_674 ,3 ,stdin);
		if( strcmp( controller4vul_674, "{W") < 0)
		{
			unsigned_int_3 = v_bwa_gen_cigar2(unsigned_int_1,int_1,int_2,int_3,int_3,int_3,double_2,short_1,int_3,float_3,char_2,double_3,int_2,int_1,int_4,uni_para);

		}
	}
	if(1)
	{
	}
	double_3 = double_1 * double_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		double_2 = double_4;
	}
	double_1 = double_4 + double_1;
	short_1 = short_1 + short_3;
	int_5 = int_4 * int_3;
	if(1)
	{
		int_1 = int_3 * int_5;
	}
	if(1)
	{
	}
	double_6 = double_4 + double_5;
	return int_1;
}
int v_mem_sort_dedup_patch( double parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_2 + double_1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_1 = 1;
			long long_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_2 = 1;
			char_1 = char_1 + char_1;
			long_2 = long_1 + long_1;
			int_2 = int_1 + int_1;
			if(1)
			{
				char_2 = char_1 * char_1;
			}
			char_2 = char_1 * char_3;
			short_1 = short_2 * short_1;
			char_1 = char_1 * char_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			char controller4vul_671[2];
			fgets(controller4vul_671 ,2 ,stdin);
			if( strcmp( controller4vul_671, "t") < 0)
			{
				char controller4vul_672[2];
				fgets(controller4vul_672 ,2 ,stdin);
				if( strcmp( controller4vul_672, "c") < 0)
				{
					float float_2 = 1;
					long long_4 = 1;
					int_2 = v_mem_patch_reg(long_3,int_1,short_3,float_1,float_1,char_1,int_3,uni_para);

					float_2 = float_1 + float_1;
					long_4 = long_1 + long_3;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
			}
			if(1)
			{
				float float_3 = 1;
				float float_4 = 1;
				double double_3 = 1;
				float_1 = float_1;
				char_2 = char_3 + char_4;
				float_3 = float_3 * float_4;
				double_3 = double_2 * double_3;
				short_3 = short_2 + short_2;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				double_4 = double_3 + double_3;
				int_1 = int_1 + int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_5 = 1;
		if(1)
		{
			if(1)
			{
				int_2 = int_2 * int_1;
			}
			if(1)
			{
				int int_4 = 1;
				int_2 = int_2 * int_4;
			}
		}
		char_5 = char_4 * char_5;
	}
	double_5 = double_2 * double_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "lp") == 0)
		{
			double_1 = double_2 + double_1;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	return int_5;
}
int v_ksw_extend2( int parameter_1,float parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	int int_5 = 1;
	short short_8 = 1;
	long long_4 = 1;
	float float_5 = 1;
	int int_7 = 1;
	double double_7 = 1;
	long long_5 = 1;
	short short_10 = 1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 * double_2;
	double_1 = double_4 * double_3;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_2 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_4 + double_3;
		}
	}
	float_1 = float_2;
	double_2 = double_1 * double_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_3 = int_2;
	}
	short_2 = short_1 + short_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
	}
	double_3 = double_3 * double_3;
	int_2 = int_1 + int_3;
	float_1 = float_3;
	double_4 = double_4 * double_4;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_1;
	char_3 = char_2 + char_1;
	short_2 = short_3 + short_4;
	long_2 = long_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		short short_6 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_6 = 1;
		unsigned_int_3 = unsigned_int_2;
		double_2 = double_5;
		if(1)
		{
			double_5 = double_3 * double_2;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
		if(1)
		{
			char_2 = char_2 + char_3;
		}
		if(1)
		{
			int_2 = int_4;
			if(1)
			{
				double_3 = double_4 + double_3;
			}
		}
		if(1)
		{
			short_3 = short_1 * short_5;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			short short_7 = 1;
			float float_4 = 1;
			short short_9 = 1;
			double double_6 = 1;
			short_3 = short_6 * short_3;
			char_3 = char_4 + char_3;
			unsigned_int_1 = unsigned_int_4;
			int_4 = int_5;
			char_2 = char_1 + char_5;
			short_7 = short_7;
			short_8 = short_7;
			long_4 = long_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			float_3 = float_4 * float_5;
			int_6 = int_5 + int_5;
			int_2 = int_1 + int_5;
			short_9 = short_8 + short_8;
			double_6 = double_4 + double_6;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_7;
			int_7 = int_5 + int_7;
			unsigned_int_3 = unsigned_int_8;
		}
		short_6 = short_5 + short_3;
		double_7 = double_4 + double_5;
		if(1)
		{
			double_2 = double_1 + double_4;
			int_5 = int_2 * int_3;
		}
		if(1)
		{
			double_2 = double_4 + double_4;
		}
		if(1)
		{
			int_5 = int_6 * int_2;
			long_2 = long_2 * long_4;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned_int_8 = unsigned_int_5 + unsigned_int_4;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_7 = unsigned_int_5 + unsigned_int_8;
				}
			}
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_3 = double_1 * double_4;
		}
		long_5 = long_4 * long_5;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			char_1 = char_5 + char_4;
		}
		long_5 = long_6;
	}
	short_8 = short_10 + short_5;
	double_1 = double_7;
	if(1)
	{
		float_1 = float_3 * float_1;
	}
	if(1)
	{
		int int_8 = 1;
		int_3 = int_8;
	}
	if(1)
	{
		int_5 = int_7;
	}
	if(1)
	{
		float float_6 = 1;
		float_3 = float_6 * float_5;
	}
	if(1)
	{
		long_4 = long_5 * long_3;
	}
	return int_1;
}
void v_ks_introsort_64( float parameter_1,float parameter_2)
{
}
double v_cal_max_gap( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	double_3 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_3;
	return double_1;
}
void v_mem_chain2aln( short parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5,char parameter_6,float parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_8 = 1;
	float float_4 = 1;
	int int_11 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_2;
		double_3 = double_1 * double_2;
		double_2 = v_cal_max_gap(short_1,int_1);

		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		long_3 = long_1 + long_2;
		long_1 = long_4 * long_3;
		double_3 = double_2 + double_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		}
	}
	char_1 = char_1;
	int_4 = int_3;
	long_3 = long_3 + long_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_7 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_8 = 1;
		char char_5 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_7 = 1;
		long_5 = long_3 * long_6;
		unsigned_int_2 = unsigned_int_6;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_4 + int_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
			int_3 = int_4 * int_1;
			if(1)
			{
				double_2 = double_2;
			}
			if(1)
			{
				double_1 = double_4 * double_4;
			}
			char_3 = char_1 * char_2;
			long_6 = long_4;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
			int_4 = int_3;
			if(1)
			{
				int_3 = int_2 * int_5;
			}
			unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
			double_2 = double_1 + double_3;
			double_1 = double_3 * double_4;
			int_3 = int_2 + int_1;
			if(1)
			{
				double_5 = double_2 * double_4;
			}
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_4 * int_1;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				short_2 = short_1 * short_1;
				if(1)
				{
					double_5 = double_6;
				}
				float_2 = float_2 * float_1;
				if(1)
				{
					short_1 = short_1 + short_1;
				}
				if(1)
				{
					short_4 = short_3 + short_4;
				}
				if(1)
				{
					long_6 = long_6 * long_1;
				}
			}
			if(1)
			{
				int_1 = int_3;
				int_3 = int_2 + int_2;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_7 * unsigned_int_3;
			}
		}
		double_2 = double_7 + double_4;
		int_2 = int_1 + int_6;
		short_1 = short_5 + short_2;
		double_2 = double_2;
		char_3 = char_2 + char_2;
		if(1)
		{
			int_5 = int_2 * int_3;
		}
		if(1)
		{
			int_6 = int_1;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
			int_5 = v_err_printf(unsigned_int_5,unsigned_int_4);

			double_2 = double_3;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				double_3 = double_1 * double_6;
			}
			unsigned_int_6 = unsigned_int_4;
			short_3 = short_3 * short_3;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double_2 = double_5 * double_3;
			}
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				long_6 = long_1 * long_4;
				unsigned_int_5 = unsigned_int_8 + unsigned_int_5;
				if(1)
				{
					long long_7 = 1;
					float_2 = float_1 * float_3;
					unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
					for(int looper_9=0; looper_9<1;looper_9++)
					{
						unsigned_int_8 = unsigned_int_6 + unsigned_int_6;
					}
					char_2 = char_3 + char_3;
					float_3 = float_1 + float_3;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						char_5 = char_3 * char_4;
					}
					long_1 = long_7;
				}
				double_6 = double_4 * double_1;
				if(1)
				{
					double_6 = double_4 * double_8;
					double_8 = double_9 + double_7;
				}
				if(1)
				{
					int_3 = int_1 * int_7;
				}
			}
			if(1)
			{
				int_1 = int_8 * int_5;
				int_4 = int_7 * int_9;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_9 + unsigned_int_7;
				char_5 = char_5 + char_1;
			}
			unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
			unsigned_int_5 = unsigned_int_9;
		}
		if(1)
		{
			int_4 = int_6 + int_9;
		}
		if(1)
		{
			short short_6 = 1;
			long_3 = long_1;
			double_3 = double_5 + double_6;
			unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
			short_6 = short_6 + short_7;
			for(int looper_11=0; looper_11<1;looper_11++)
			{
				unsigned_int_4 = unsigned_int_9 * unsigned_int_3;
				short_6 = short_4 + short_1;
				if(1)
				{
					int_2 = int_9 * int_4;
					unsigned_int_1 = unsigned_int_1;
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						int_10 = int_5;
					}
					double_5 = double_2 * double_1;
					int_5 = int_8 + int_7;
					for(int looper_13=0; looper_13<1;looper_13++)
					{
						double_6 = double_9 * double_1;
					}
					unsigned_int_8 = unsigned_int_2;
				}
				unsigned_int_9 = unsigned_int_6 + unsigned_int_5;
				if(1)
				{
					double_2 = double_6 * double_1;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				}
				if(1)
				{
					short_1 = short_6 + short_3;
				}
			}
			if(1)
			{
				int_4 = int_6 + int_10;
				char_3 = char_5 * char_3;
			}
			if(1)
			{
				double_1 = double_5 * double_4;
				double_3 = double_6;
			}
		}
		if(1)
		{
			int_10 = v_bns_fetch_seq(unsigned_int_3,char_1,long_8,float_2,int_2,int_4);

			float_4 = float_4 + float_3;
		}
		if(1)
		{
			long long_9 = 1;
			long_2 = long_9 * long_3;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			unsigned_int_8 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				int_2 = int_1 + int_3;
			}
		}
		v_ks_introsort_64(float_4,float_1);

		short_7 = short_5 + short_3;
		int_11 = v_ksw_extend2(int_2,float_1,int_11,char_4,int_11,float_3,int_5,int_6,int_7,int_11,int_2,int_9,int_4,int_1,int_5,int_10,int_8,int_10,int_1);

		int_3 = int_4 + int_3;
		double_4 = double_10 + double_4;
	}
	double_10 = double_8 + double_11;
	char_4 = char_3;
}
int v_err_printf( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_2;
	char_1 = char_1 * char_2;
	int_1 = int_1 + int_2;
	int_4 = int_1 * int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		v__err_fatal_simple(short_2,long_1);

		unsigned_int_3 = unsigned_int_4;
	}
	return int_3;
}
void v_mem_print_chain( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_2 = short_1 + short_1;
		double_2 = double_1 + double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			int int_5 = 1;
			unsigned_int_1 = unsigned_int_3;
			int_1 = v_err_printf(unsigned_int_3,unsigned_int_2);

			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			int_1 = int_2;
			if(1)
			{
				char char_2 = 1;
				int_3 = v_mem_chain_weight(long_1);

				char_1 = v_bns_depos(long_1,int_4,int_4);

				char_1 = char_2 + char_2;
			}
			int_5 = int_2;
		}
		double_1 = double_1 + double_1;
	}
}
char v_revseq( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return char_1;
}
short v_ksw_u8( unsigned int parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	short short_1 = 1;
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
	return short_1;
}
float v_ksw_i16( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_2 = short_2;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			int int_2 = 1;
			float float_1 = 1;
			int_1 = int_1 + int_1;
			int_3 = int_1 * int_2;
			float_2 = float_1 + float_1;
		}
	}
	short_3 = short_2 * short_1;
	if(1)
	{
		char_1 = char_1 * char_1;
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
	double_1 = double_2;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_2 * char_3;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	char_2 = char_4 * char_1;
	int_4 = int_1 + int_3;
	return float_2;
}
short v_ksw_qinit( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	short_3 = short_1 * short_2;
	double_5 = double_3 * double_4;
	double_4 = double_3 * double_1;
	short_4 = short_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_4 = short_2 + short_5;
	float_2 = float_1 + float_1;
	double_5 = double_1;
	double_4 = double_6;
	float_1 = float_3 * float_3;
	int_2 = int_1 * int_1;
	int_2 = int_1 + int_3;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			short short_6 = 1;
			short_6 = short_1 + short_6;
		}
	}
	double_2 = double_4;
	float_1 = float_1 + float_2;
	int_4 = int_3 + int_3;
	if(1)
	{
		float_3 = float_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_7 = double_3 * double_6;
			int_1 = int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					float_1 = float_2 + float_3;
				}
			}
		}
	}
	if(1)
	{
		double_4 = double_7 * double_6;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			float_1 = float_3 + float_3;
			double_6 = double_6 + double_4;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					double double_8 = 1;
					double double_9 = 1;
					double_9 = double_8 * double_2;
				}
			}
		}
	}
	return short_4;
}
float v_ksw_align2( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,unsigned int parameter_12)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = v_ksw_qinit(int_1,int_1,unsigned_int_1,int_2,float_1);

	long_1 = long_2;
	char_1 = v_revseq(int_1,unsigned_int_1);

	int_1 = int_1;
	float_2 = float_1 * float_1;
	short_2 = v_ksw_u8(unsigned_int_2,int_1,short_1,int_3,int_3,int_1,int_3,int_2);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		double_1 = double_1;
	}
	long_1 = long_1 * long_2;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	long_3 = long_2 * long_2;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
	}
	double_2 = double_2 * double_3;
	double_2 = double_1 * double_2;
	short_4 = short_1 + short_3;
	double_3 = double_3 * double_3;
	double_4 = double_4 * double_5;
	float_3 = v_ksw_i16(unsigned_int_3,int_4,char_1,int_5,int_6,int_2,int_3,int_5);

	int_2 = int_3;
	int_5 = int_1 + int_6;
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 + unsigned_int_4;
	}
	return float_3;
}
int v_bns_get_seq( double parameter_1,double parameter_2,float parameter_3,float parameter_4,short parameter_5)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "=") > 0)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_2;
		short_1 = short_1 + short_1;
		char_2 = char_1 + char_1;
		if(1)
		{
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short_2 = short_1 * short_1;
			unsigned_int_1 = unsigned_int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_4 = double_3 + double_1;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_3 = 1;
				char_2 = char_3;
			}
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return int_2;
}
int v_bns_fetch_seq( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4,int parameter_5,int parameter_6)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char_1 = v_bns_depos(long_1,int_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	int_1 = int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_2 = v_bns_pos2rid(long_1,char_1);

		short_3 = short_1 * short_2;
	}
	int_2 = int_1 + int_1;
	int_2 = int_1;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_1 + float_1;
		long_1 = long_2 + long_2;
	}
	float_4 = float_3 * float_3;
	int_3 = int_1 + int_2;
	int_4 = v_bns_get_seq(double_1,double_4,float_1,float_2,short_3);

	int_3 = int_2 + int_5;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_4 = short_4 * short_5;
	}
	int_4 = int_6;
	return int_2;
}
int v_mem_seed_sw( long parameter_1,short parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,unsigned int parameter_6)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_bns_fetch_seq(unsigned_int_1,char_1,long_1,float_1,int_1,int_2);

	int_3 = int_1 * int_3;
	double_2 = double_1 * double_1;
	int_3 = int_2 + int_4;
	double_1 = double_3 + double_3;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	float_4 = float_2 + float_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_2 * short_3;
	int_1 = int_4 + int_3;
	float_5 = v_ksw_align2(int_5,long_2,int_4,unsigned_int_3,int_5,float_1,int_1,int_5,int_4,int_3,int_6,unsigned_int_2);

	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_4 * short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	short_2 = short_2 + short_3;
	short_3 = short_5 * short_6;
	if(1)
	{
		if(1)
		{
			int_5 = int_1 + int_5;
		}
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_5 = double_4 + double_4;
		}
	}
	if(1)
	{
	}
	double_3 = double_3 + double_6;
	int_2 = int_6 + int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	return int_1;
}
void v_mem_flt_chained_seeds( double parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5,int parameter_6,int parameter_7)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			char_1 = char_1 + char_2;
			double_2 = double_1 + double_1;
			if(1)
			{
				char char_3 = 1;
				char_1 = char_2 + char_3;
				int_1 = int_1 + int_1;
			}
		}
		int_3 = v_mem_seed_sw(long_2,short_2,double_2,int_3,unsigned_int_1,unsigned_int_2);

		short_1 = short_1 + short_1;
	}
}
int v_mem_chain_weight( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_2;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 + float_3;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		char_2 = char_1 + char_2;
	}
	unsigned_int_3 = unsigned_int_1;
	long_1 = long_2 * long_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_2;
		if(1)
		{
			int_2 = int_3 + int_2;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 + float_1;
		}
		short_1 = short_1 + short_2;
	}
	double_3 = double_3 * double_4;
	int_3 = int_3;
	return int_3;
}
int v_mem_chain_flt( int parameter_1,int parameter_2,long parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_10 = 1;
	float float_5 = 1;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_1;
		short_1 = short_2 * short_2;
		int_3 = v_mem_chain_weight(long_2);

		int_1 = int_1;
		long_3 = long_2 + long_2;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			int_1 = int_4 + int_5;
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_1;
	double_2 = double_2 + double_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_4 = 1;
		long_3 = long_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short_3 = short_2 + short_2;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			int_2 = int_3;
			if(1)
			{
				float float_3 = 1;
				double_1 = double_1;
				long_4 = long_2 * long_3;
				float_4 = float_3 * float_4;
				if(1)
				{
					int_5 = int_4 + int_5;
					if(1)
					{
						int_6 = int_5 + int_5;
					}
					if(1)
					{
						float_1 = float_3 + float_3;
					}
				}
			}
		}
		if(1)
		{
			int int_7 = 1;
			int_3 = int_5 * int_7;
			char_1 = v_kvec_t(int_8);

			int_1 = int_7 * int_5;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			int int_9 = 1;
			int_9 = int_3 + int_6;
		}
	}
	int_6 = int_5 * int_6;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			int int_11 = 1;
			int_11 = int_10 + int_3;
		}
		if(1)
		{
			float_5 = float_4 * float_4;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			double double_4 = 1;
			double_1 = double_4 * double_4;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			float_2 = float_5 * float_1;
		}
	}
	return int_10;
}
char v_smem_aux_destroy( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return char_4;
}
long v_test_and_merge( int parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	float_2 = float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1 + char_3;
	char_2 = char_4 * char_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "k") > 0)
		{
			unsigned_int_2 = unsigned_int_2;
			char_1 = char_2 * char_1;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	return long_1;
}
char v_bns_depos( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_2;
	return char_1;
}
int v_bns_pos2rid( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 + short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_3 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_4;
}
int v_bns_intv2rid( int parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char_1 = v_bns_depos(long_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_1 + int_1;
	int_1 = int_3;
	return int_4;
	int_5 = v_bns_pos2rid(long_2,char_1);

}
unsigned int v_bwt_sa( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_2;
	int_1 = v_bwt_invPsi(float_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
int v_bwt_seed_strategy1( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_2 = 1;
			v_bwt_extend(float_1,unsigned_int_2,float_2,int_1);

			long_1 = long_1 * long_1;
			long_1 = long_2;
			if(1)
			{
				long long_3 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				long_2 = long_3 * long_2;
			}
			int_3 = int_2 + int_1;
		}
		if(1)
		{
		}
	}
	return int_3;
}
char v_bwt_reverse_intvs( long parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			int int_3 = 1;
			double_1 = double_1;
			int_3 = int_3;
			double_1 = double_1 * double_1;
		}
	}
	return char_1;
}
void v_bwt_2occ4( short parameter_1,float parameter_2,long parameter_3,char parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	v_bwt_occ4(float_1,int_1,unsigned_int_1);

	double_2 = double_2 * double_1;
}
void v_bwt_extend( float parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	int_1 = int_2 + int_4;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_3 = long_1 * long_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double_2 = double_2;
	}
	v_bwt_2occ4(short_1,float_1,long_3,char_1,unsigned_int_2);

}
int v_bwt_smem1a( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,long parameter_8)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_9 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1 * float_2;
	char_1 = char_1 + char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_2 + float_1;
	}
	float_3 = float_1 + float_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_3 * short_2;
	short_5 = short_3 * short_4;
	double_2 = double_2 * double_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_6 = 1;
			short_1 = short_5 + short_6;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			short short_7 = 1;
			short short_8 = 1;
			int_2 = int_1 * int_1;
			short_4 = short_7 * short_8;
			if(1)
			{
				char_1 = v_bwt_reverse_intvs(long_1);

				int_1 = int_1;
				if(1)
				{
					double_4 = double_3 * double_3;
				}
			}
			double_4 = double_5 + double_3;
			float_3 = float_1 * float_5;
		}
		if(1)
		{
			double_3 = double_1 * double_5;
			v_bwt_extend(float_1,unsigned_int_1,float_4,int_3);

			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		float_5 = float_3;
	}
	char_3 = char_3;
	long_2 = long_1 * long_1;
	double_4 = double_1 + double_4;
	long_3 = long_3 + long_3;
	short_3 = short_3 * short_9;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double_5 = double_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_6 = 1;
			double_5 = double_4 + double_6;
			if(1)
			{
				double_3 = double_4;
			}
			char controller_10[2];
			fgets(controller_10 ,2 ,stdin);
			if( strcmp( controller_10, "s") < 0)
			{
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
						unsigned_int_5 = unsigned_int_3;
						double_3 = double_5;
					}
				}
			}
			char controller_13[3];
			fgets(controller_13 ,3 ,stdin);
			if( strcmp( controller_13, "}p") < 0)
			{
				int_5 = int_4 + int_1;
				long_3 = long_3 + long_2;
			}
		}
		if(1)
		{
			int_2 = int_3 * int_5;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		int_2 = int_6;
		unsigned_int_3 = unsigned_int_4;
	}
	char_4 = char_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
	}
	if(1)
	{
		short_4 = short_2 + short_4;
	}
	return int_4;
}
int v_bwt_smem1( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,unsigned int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	return int_1;
	int_2 = v_bwt_smem1a(char_1,int_2,double_1,int_1,int_3,int_1,float_1,long_1);

}
float v_mem_collect_intv( long parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_bwt_smem1(int_1,int_1,unsigned_int_1,int_1,int_2,unsigned_int_2,unsigned_int_2);

	int_3 = v_bwt_seed_strategy1(char_1,int_4,double_1,int_3,int_3,int_2,int_1);

	int_5 = v_bwt_smem1a(char_1,int_6,double_1,int_7,int_2,int_3,float_1,long_1);

	char_3 = char_2 + char_2;
	int_6 = int_3 + int_6;
	unsigned_int_2 = unsigned_int_3;
	return float_1;
}
double v_mem_chain( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	int int_7 = 1;
	double double_8 = 1;
	char char_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	short_1 = short_1 + short_1;
	double_2 = double_1 + double_2;
	double_3 = double_1 + double_2;
	short_2 = short_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 * double_1;
		float_2 = float_1;
		if(1)
		{
			short_1 = short_1;
		}
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			int_2 = v_bns_intv2rid(int_3,float_3,short_1);

			double_3 = double_3 + double_4;
		}
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		double_3 = double_2 + double_5;
		unsigned_int_1 = v_smem_aux_init();

		char_1 = char_2 + char_1;
		int_4 = int_4 + int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			long_1 = v_test_and_merge(int_2,unsigned_int_4,short_3,float_1,int_1);

			int_5 = int_5 * int_6;
			char_3 = char_1 + char_2;
			int_4 = int_6 * int_2;
			long_2 = long_2 + long_2;
			double_5 = double_6;
			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				int_7 = int_1 * int_2;
			}
			if(1)
			{
				double_7 = double_5;
				if(1)
				{
					int_2 = int_3 + int_1;
				}
			}
			if(1)
			{
				short short_4 = 1;
				short_4 = short_1;
			}
			if(1)
			{
				char char_5 = 1;
				float float_4 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double_8 = double_7 + double_8;
				char_6 = char_4 + char_5;
				float_2 = float_1 * float_1;
				double_1 = double_5 + double_7;
				char_2 = char_2 * char_1;
				float_1 = v_mem_collect_intv(long_2,unsigned_int_4,int_3,double_8,unsigned_int_3);

				char_6 = v_smem_aux_destroy(char_2);

				float_3 = float_1 + float_4;
				short_6 = short_5 + short_3;
			}
		}
	}
	char controller_10[3];
	fgets(controller_10 ,3 ,stdin);
	if( strcmp( controller_10, "/u") > 0)
	{
		unsigned_int_1 = v_bwt_sa(long_2,int_5);

		int_2 = int_7 * int_4;
	}
	v_logMessage(double_8,int_3,char_4,double_4);

	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_6 + int_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_1 = int_7 * int_1;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	double_2 = double_3 * double_9;
	return double_4;
}
long v_mem_align1_core( short parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,char parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	int_1 = int_2;
	int_2 = v_mem_test_and_remove_exact(unsigned_int_1,int_3,unsigned_int_1,int_1);

	double_1 = double_1 * double_2;
	int_3 = v_mem_sort_dedup_patch(double_2,int_2,double_2,int_4,int_1,long_1,-1 );

	int_5 = int_5 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	double_4 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	int_4 = int_3 + int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		v_mem_print_chain(unsigned_int_4,long_1);

		float_1 = float_2;
		if(1)
		{
			v_mem_chain2aln(short_1,char_1,short_1,int_1,long_1,char_1,float_1);

			double_1 = double_2;
		}
		long_2 = long_2 + long_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	char_1 = char_2 * char_1;
	int_4 = int_5;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 * short_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int_5 = v_mem_chain_flt(int_4,int_6,long_2);

		long_4 = long_3 * long_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_3 = 1;
			char char_4 = 1;
			double_2 = v_mem_chain(double_4);

			int_1 = v_err_printf(unsigned_int_4,unsigned_int_3);

			int_4 = int_5 * int_2;
			char_4 = char_3 + char_3;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_6 = 1;
		v_mem_flt_chained_seeds(double_1,float_1,unsigned_int_5,int_6,float_3,int_4,int_2);

		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			float float_4 = 1;
			float_1 = float_4 + float_2;
		}
	}
	unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
	return long_5;
}
double v_worker1(int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		long_1 = v_mem_align1_core(short_1,char_1,char_1,short_2,int_3,char_2);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
		short_3 = short_1 + short_2;
		if(1)
		{
			int int_4 = 1;
			int_1 = int_3 * int_4;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
}
unsigned int v_smem_aux_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_2;
	return unsigned_int_2;
}
double v_cputime()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	return double_1;
}
float v_steal_work( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "6{") > 0)
		{
			double_2 = double_1 + double_1;
		}
	}
	double_1 = double_2 * double_3;
	int_1 = int_1 * int_2;
	return float_1;
}
int v_ktf_worker()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v_steal_work(int_1);

	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2;
	return int_1;
}
void v_kt_for( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	int_1 = int_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 * double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_2 = v_ktf_worker();

		char_1 = char_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
	}
}
void v_mem_process_seqs( double parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,float parameter_5,int parameter_6,float parameter_7,short parameter_8,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	char char_5 = 1;
	int int_3 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	int_2 = int_1 * int_2;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	int_1 = int_2;
	double_4 = double_3 + double_4;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_5 + double_5;
	char_2 = char_3 * char_1;
	int_2 = int_2;
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 * char_4;
	}
	float_2 = float_3 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_4 = long_2 * long_3;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_664[2];
	fgets(controller4vul_664 ,2 ,stdin);
	if( strcmp( controller4vul_664, "9") < 0)
	{
		char controller4vul_665[2];
		fgets(controller4vul_665 ,2 ,stdin);
		if( strcmp( controller4vul_665, "g") < 0)
		{
			long long_6 = 1;
			long_5 = v_worker2(int_1,int_2,uni_para);

			long_4 = long_6 + long_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
	}
	char_5 = char_2 * char_4;
	int_3 = int_1 + int_1;
	char_6 = char_6;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
	}
	short_1 = short_1 + short_1;
}
char v_kvec_t( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double_1 = double_1 + double_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2 * char_2;
	float_3 = float_1 * float_2;
	short_2 = short_1 * short_1;
	long_1 = long_2;
	int_1 = int_1 + int_1;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_3 * double_1;
	double_1 = double_2 + double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_1;
	float_5 = float_4 * float_1;
	short_3 = short_2;
	char_1 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_6 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	char_1 = char_1 * char_2;
	float_4 = float_5 * float_4;
	float_6 = float_4 * float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	int_1 = int_2;
	double_4 = double_2 * double_2;
	double_3 = double_1 + double_1;
	char_4 = char_2 + char_3;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_7;
	int_1 = int_1 + int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_5;
	int_4 = int_4 * int_4;
	double_2 = double_5;
	int_6 = int_5 + int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	char_4 = char_5 * char_5;
	double_6 = double_3 + double_5;
	int_2 = int_2;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
	double_2 = double_1 + double_1;
	short_4 = short_4 + short_5;
	unsigned_int_8 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2 * float_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_9;
	int_3 = int_6 + int_7;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_9;
	double_3 = double_2 * double_4;
	char_4 = char_5 + char_3;
	int_7 = int_6 * int_3;
	int_8 = int_5 * int_3;
	unsigned_int_9 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_6 = 1;
		int_8 = int_7;
		short_5 = short_1 * short_4;
		short_1 = short_6;
		long_2 = long_3 * long_2;
		if(1)
		{
			short_1 = short_3 * short_1;
		}
	}
	return char_5;
}
void v_bseq_classify( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_2 = 1;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				int int_1 = 1;
				int int_4 = 1;
				short_1 = short_1 + short_2;
				int_1 = int_1 * int_2;
				int_4 = int_1 + int_3;
			}
			if(1)
			{
				int int_5 = 1;
				int_5 = int_5 * int_2;
			}
		}
		if(1)
		{
			float_1 = float_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		char_3 = v_kvec_t(int_3);

		float_1 = float_2 + float_3;
	}
	double_2 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
short v_kseq2bseq1( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_1 * char_2;
	return short_1;
}
double v_trim_readno( long parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return double_1;
}
long v_bseq_read( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	double_1 = v_trim_readno(long_1);

	short_1 = v_kseq2bseq1(char_1,char_2);

	int_4 = int_3 + int_4;
	int_3 = int_1 * int_2;
	return long_1;
}
float v_process(int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	int int_6 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		int_1 = int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		int_1 = int_1 + int_1;
		double_1 = double_1 * double_1;
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				long_2 = long_2 + long_1;
				int_2 = int_3;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_4 = int_2;
			}
		}
		int_5 = int_1;
	}
	char controller4vul_661[2];
	fgets(controller4vul_661 ,2 ,stdin);
	if( strcmp( controller4vul_661, "N") < 0)
	{
		short_2 = short_3 + short_1;
		char controller4vul_662[3];
		fgets(controller4vul_662 ,3 ,stdin);
		if( strcmp( controller4vul_662, "zi") > 0)
		{
			int int_7 = 1;
			double_2 = double_2 * double_3;
			int_5 = int_3 * int_2;
			long_1 = long_1;
			long_1 = long_2 + long_2;
			short_1 = short_2 + short_2;
			char controller4vul_663[2];
			fgets(controller4vul_663 ,2 ,stdin);
			if( strcmp( controller4vul_663, "?") < 0)
			{
				v_mem_process_seqs(double_2,unsigned_int_4,double_2,short_4,float_1,int_6,float_2,short_5,uni_para);

				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				long_2 = long_2 * long_1;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					short_3 = short_4 * short_1;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
				int_6 = int_7 * int_2;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					short_1 = short_4 + short_5;
				}
			}
			short_2 = short_1;
			int_6 = int_2 + int_7;
		}
		if(1)
		{
			double double_5 = 1;
			double_5 = double_3 + double_4;
		}
		int_2 = int_2;
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int int_8 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			short short_6 = 1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
			}
			int_1 = int_8 + int_4;
			unsigned_int_7 = unsigned_int_5;
			unsigned_int_7 = unsigned_int_4 * unsigned_int_8;
			short_3 = short_2 * short_6;
			double_3 = double_2;
		}
		int_2 = int_2;
		double_2 = double_4 + double_2;
	}
	return float_1;
}
char v_ktp_worker()
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = short_1 + short_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "*") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	long_3 = long_2;
	int_1 = int_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_3 + int_3;
	long_4 = long_2 + long_4;
	double_2 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_4;
		unsigned_int_4 = unsigned_int_4;
		float_1 = float_1 + float_1;
		double_2 = double_2 + double_1;
	}
	int_4 = int_3 * int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_1 = float_1 * float_1;
	}
	char_1 = v_ktp_worker();

	char_1 = char_1 + char_2;
	int_5 = int_6;
}
void v_bwa_print_sam_hdr( float parameter_1,long parameter_2,short parameter_3)
{
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_1 + double_2;
		int_3 = int_1 + int_2;
		double_3 = double_1 * double_3;
		char_2 = char_1 + char_2;
	}
	int_3 = v_err_fprintf(double_4,double_3,unsigned_int_1);

}
unsigned int v_cmd2argv( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		float_1 = float_3 * float_1;
	}
	return unsigned_int_3;
}
short v_kftp_send_cmd( int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_kftp_get_response(long_1);

	double_3 = double_1 * double_2;
	return short_1;
	unsigned_int_1 = v_socket_wait(int_1,int_2);

	float_1 = v_write_bytes(int_2,unsigned_int_2,long_1);

}
unsigned int v_socket_wait( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_2;
	double_1 = double_3 * double_4;
	int_1 = int_2;
	double_4 = double_3 + double_2;
	int_3 = int_4;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_1 = double_3 + double_2;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	short_1 = short_2 + short_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
	}
	return unsigned_int_2;
}
int v_kftp_get_response( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double_1 = double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		int int_3 = 1;
		long_3 = long_1 * long_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		unsigned_int_4 = v_socket_wait(int_1,int_2);

		float_1 = float_1;
		int_4 = int_3 * int_2;
	}
	return int_4;
}
char v_ftp_open( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	short short_5 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1 + int_1;
	double_5 = double_4 + double_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_3 = double_6 + double_1;
	long_2 = long_1 + long_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		double_3 = double_7 * double_2;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 + double_8;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	int_3 = int_2 + int_3;
	double_6 = double_2 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double_1 = double_8;
	}
	double_7 = double_5 + double_8;
	unsigned_int_5 = v_socket_connect(double_1,short_2);

	double_5 = double_7 + double_8;
	float_2 = float_2 * float_3;
	float_3 = float_1 + float_3;
	short_1 = v_kftp_send_cmd(int_3,float_3,int_1);

	double_9 = double_4 + double_4;
	int_3 = int_2 * int_3;
	double_8 = double_8 * double_5;
	short_4 = short_1 * short_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		int_4 = v_kftp_get_response(long_2);

		double_7 = double_1 + double_4;
		long_1 = long_1 + long_1;
	}
	long_1 = long_1 * long_2;
	float_2 = float_3 + float_3;
	short_3 = short_5;
	double_9 = double_1 * double_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	return char_1;
}
float v_write_bytes( int parameter_1,unsigned int parameter_2,long parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_4;
	long_1 = long_1;
	float_2 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	char_4 = char_2 * char_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2;
	int_1 = int_1;
	int_3 = int_1 * int_4;
	float_1 = float_1;
	char_5 = char_1 * char_1;
	int_2 = int_3 + int_1;
	long_3 = long_1 * long_2;
	float_2 = float_3;
	long_5 = long_3 * long_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "3q") < 0)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		short_1 = short_2;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		float_3 = float_3 + float_3;
		int_6 = int_2 * int_5;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "B,") > 0)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_5 = unsigned_int_2;
		short_4 = short_3 + short_2;
	}
	unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_7;
	return float_2;
}
unsigned int v_socket_connect( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	return unsigned_int_1;
}
void v_http_open( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	unsigned_int_1 = v_socket_connect(double_1,short_1);

	float_1 = v_write_bytes(int_1,unsigned_int_1,long_1);

}
double v_kopen( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	v_http_open(short_1);

	unsigned_int_1 = v_cmd2argv(short_1);

	int_1 = int_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	char_1 = v_ftp_open(long_1);

	long_1 = long_1 + long_1;
	return double_1;
}
void v_compileORFHistory( long parameter_1,long parameter_2,int parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	short_3 = short_1 + short_2;
	float_1 = float_1;
	char_1 = char_1 * char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_1 * double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
			}
			if(1)
			{
				double double_3 = 1;
				double_1 = double_2 + double_3;
				int_3 = int_1 * int_2;
			}
			int_1 = int_2 * int_1;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				float float_2 = 1;
				if(1)
				{
					double double_4 = 1;
					double_2 = double_4;
				}
				long_2 = long_2 + long_1;
				long_3 = long_3;
				double_1 = double_2 * double_1;
				float_2 = float_2 + float_1;
				int_2 = int_3 * int_3;
			}
		}
	}
}
void v_addORFHistory( long parameter_1,long parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1;
	short_3 = short_2 * short_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_1 + int_2;
			int_3 = int_2 * int_3;
			double_2 = double_2 * double_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
}
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		double double_2 = 1;
		long_1 = v_getLastAlignedPos(long_1,int_1);

		double_1 = double_2;
	}
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_1 = double_3 * double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	return long_1;
}
int v_getSequenceORF( char parameter_1,double parameter_2,int parameter_3,long parameter_4,long parameter_5,float parameter_6)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_6 = 1;
	int int_6 = 1;
	long_1 = long_1;
	double_1 = double_2;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_2;
	int_2 = int_3 + int_3;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long_3 = long_1 + long_2;
		int_4 = int_1 * int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_4 = double_3 * double_1;
		long_3 = v_getLastAlignedPos(long_2,int_5);

		double_1 = double_3 * double_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_2 = double_4 * double_2;
			if(1)
			{
				int_4 = int_1;
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					for(int looper_4=0; looper_4<1;looper_4++)
					{
						if(1)
						{
							unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
							unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
							long_4 = long_2 * long_4;
							long_2 = long_2 * long_2;
							float_1 = float_1 + float_2;
						}
					}
					unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
				}
				unsigned_int_2 = unsigned_int_5;
			}
		}
		if(1)
		{
			if(1)
			{
				v_compileORFHistory(long_2,long_5,int_3,short_1);

				char_2 = char_1 * char_1;
			}
		}
	}
	long_3 = v_getLastAlignedOrfPos(long_1,int_3,int_3);

	v_addORFHistory(long_4,long_6,char_2);

	double_2 = double_1 + double_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_3 = 1;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
		char_3 = char_2 * char_1;
	}
	return int_1;
	v_encodeCodon(char_2,int_6);

}
int v_writeReadsProtein( int parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = v_err_xopen_core(long_1,unsigned_int_2,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_4 = double_3 * double_4;
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_getSequenceORF(char_2,double_5,int_2,long_2,long_1,float_1);

	int_3 = v_convertToAA(char_3,char_3,int_3,char_1,float_1);

	int_2 = v_err_gzclose(long_2);

	int_3 = v_err_fclose(long_2);

	int_1 = int_4 + int_3;
	return int_5;
	v_logMessage(double_5,int_5,char_1,double_4);

}
char v_bns_restore_core( int parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	v_err_fatal(unsigned_int_1,short_1,int_1);

	int_2 = int_1;
	int_1 = v_err_fclose(long_1);

	float_1 = float_1 + float_2;
	short_4 = short_2 * short_3;
	int_3 = int_3;
	short_3 = short_2 * short_3;
	return char_1;
}
double v_bns_restore( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	double_2 = double_2 * double_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_1 = double_2;
		long_2 = long_1 * long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			int_1 = int_1 + int_1;
			char_1 = v_bns_restore_core(int_2,long_2,short_1);

			double_3 = double_1 * double_2;
			if(1)
			{
				int_3 = int_1 + int_1;
			}
			char controller_2[3];
			fgets(controller_2 ,3 ,stdin);
			if( strcmp( controller_2, "a|") > 0)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				int_4 = int_3;
			}
		}
		double_1 = double_3 + double_1;
		float_5 = float_4 + float_3;
		double_1 = double_1 * double_4;
		int_1 = int_2;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
		int_6 = int_1 + int_5;
		int_4 = int_2 + int_2;
		long_2 = long_1;
		unsigned_int_6 = unsigned_int_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		double_3 = double_3 * double_1;
		double_6 = double_4 + double_5;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return double_3;
}
void v_bwt_restore_sa( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	float_1 = v_fread_fix(float_2,long_1);

	int_1 = v_err_fclose(long_2);

	double_1 = double_2;
	long_2 = long_1;
	double_3 = double_1 * double_3;
	float_2 = float_3;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2 + float_4;
	char_1 = char_1 + char_2;
	long_2 = long_2 * long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_1;
	double_4 = double_1 + double_1;
	double_2 = double_5 + double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_4 + double_3;
	v_err_fread_noeof(long_3,float_1,double_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
char v_index_load_bwt( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	v_logMessage(double_1,int_1,char_1,double_2);

	double_3 = double_3 + double_1;
	long_1 = v_index_infer_prefix(float_1);

	long_3 = long_2 + long_1;
	short_1 = v_bwt_restore_bwt(int_1);

	double_4 = double_4 * double_1;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	short_3 = short_1 + short_2;
	double_2 = double_4 + double_2;
	char_2 = char_3 * char_3;
	double_1 = double_3 + double_5;
	short_1 = short_4 + short_3;
	v_bwt_restore_sa(unsigned_int_1,short_3);

	int_1 = int_1 + int_2;
	double_2 = double_6 * double_2;
	return char_3;
}
long v_index_infer_prefix( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_1;
	long_2 = long_1 * long_1;
	long_2 = long_3;
	int_2 = int_2 * int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_3 = 1;
		long_3 = long_1 + long_2;
		int_3 = int_1;
	}
	return long_1;
}
short v_index_load_from_disk( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char_1 = v_index_load_bwt(long_1);

	char_1 = char_1;
	long_1 = long_2 * long_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		long_2 = v_index_infer_prefix(float_2);

		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		v_logMessage(double_2,int_1,char_1,double_3);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				short short_1 = 1;
				double_2 = v_bns_restore(float_2);

				short_1 = short_1 + short_1;
			}
		}
		v_err_fread_noeof(long_2,float_1,double_3);

		short_3 = short_2 * short_2;
		if(1)
		{
			char char_2 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			char_2 = char_2 + char_1;
			long_2 = long_3 * long_3;
			float_1 = float_2 * float_2;
		}
	}
	int_1 = v_err_fclose(long_3);

	int_3 = int_2 * int_3;
	double_1 = double_4 * double_2;
	return short_2;
}
unsigned int v_index_load( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	short_1 = v_index_load_from_disk(float_1,int_1);

}
int v_bwa_mem2idx( unsigned int parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	double double_8 = 1;
	short short_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	int_1 = int_2;
	double_3 = double_1 * double_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2 + float_3;
	int_3 = int_3 + int_1;
	short_1 = short_2;
	int_1 = int_3 + int_4;
	char_1 = char_1 * char_1;
	long_1 = long_1 * long_1;
	char_1 = char_1 * char_1;
	int_4 = int_3 * int_3;
	long_3 = long_1 + long_2;
	int_2 = int_3 + int_2;
	long_1 = long_1 + long_3;
	char_1 = char_2 + char_2;
	char_1 = char_2 + char_1;
	double_1 = double_4 + double_2;
	double_3 = double_5;
	short_3 = short_2 * short_3;
	long_1 = long_2;
	short_3 = short_4 * short_3;
	short_4 = short_4 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		double double_7 = 1;
		int_2 = int_3 * int_2;
		short_2 = short_4 * short_5;
		double_8 = double_6 + double_7;
		char_1 = char_1 * char_2;
	}
	double_8 = double_1;
	short_6 = short_1 * short_4;
	int_2 = int_3 * int_1;
	short_2 = short_7 + short_8;
	double_1 = double_6 * double_8;
	return int_4;
}
void v_index_load_from_shm( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_2;
	short_2 = short_1 * short_2;
	double_2 = double_1;
	double_3 = double_3;
	double_2 = double_3;
	double_2 = double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_1;
	}
	int_2 = int_1 * int_3;
	if(1)
	{
	}
	int_1 = int_3;
	int_2 = int_4 * int_4;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		float float_1 = 1;
		double_3 = double_2 * double_2;
		double_5 = double_2 + double_4;
		if(1)
		{
			int int_5 = 1;
			int_2 = int_5;
		}
		float_2 = float_1 + float_1;
	}
	if(1)
	{
	}
	int_4 = v_bwa_mem2idx(unsigned_int_1,float_2,unsigned_int_1);

	char_3 = char_2 + char_1;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "13") == 0)
	{
	}
	int_4 = int_4 + int_4;
	short_3 = short_3 + short_3;
	double_1 = double_5 + double_6;
	long_1 = long_1 + long_1;
}
int v_getIndexCompatible( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	long_1 = long_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1;
	}
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	short_1 = short_1 + short_1;
	double_2 = double_1 * double_1;
	return int_2;
}
float v_getIndexHeader( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_logMessage(double_1,int_1,char_1,double_2);

	double_1 = double_1 * double_3;
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		double_1 = double_3 + double_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	char_2 = char_1 + char_1;
	return float_1;
}
double v_update_a( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			long_2 = long_1 + long_2;
		}
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			int_1 = int_2 * int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			long_2 = long_2 * long_2;
		}
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			long_2 = long_1;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_3 * int_4;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1;
		}
	}
	return double_1;
}
int v_renderAlignUsage( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	int int_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	long long_5 = 1;
	double double_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_9 = 1;
	float float_5 = 1;
	int int_10 = 1;
	long long_7 = 1;
	long long_8 = 1;
	int int_11 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1;
	double_1 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	long_2 = long_1 + long_1;
	char_1 = char_1 * char_1;
	int_5 = int_3 * int_4;
	long_4 = long_2 * long_3;
	int_1 = int_3 * int_4;
	int_5 = int_1;
	unsigned_int_1 = unsigned_int_4;
	short_3 = short_1 + short_2;
	int_3 = int_1 + int_2;
	char_1 = char_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	double_2 = double_3;
	double_2 = double_2;
	int_2 = int_1 * int_6;
	double_1 = double_4 + double_3;
	int_4 = int_6 * int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_7;
	float_2 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_2;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
	int_4 = int_1 + int_1;
	char_4 = char_2 * char_3;
	float_3 = float_3 + float_3;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_2;
	long_2 = long_3 + long_1;
	float_4 = float_2 * float_3;
	int_4 = int_8;
	double_3 = double_1 + double_3;
	int_3 = int_3 * int_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_8;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_7;
	int_1 = int_9;
	long_5 = long_3 + long_1;
	double_3 = double_3 + double_5;
	long_4 = long_3 * long_6;
	double_7 = double_4 + double_6;
	char_1 = char_1;
	double_3 = double_8 + double_2;
	char_4 = char_2;
	short_2 = short_4 * short_2;
	char_6 = char_3 + char_5;
	double_2 = double_9 * double_6;
	float_4 = float_2 + float_5;
	float_5 = float_4;
	double_9 = double_7 + double_5;
	int_10 = int_2 * int_8;
	double_8 = double_6;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_7;
	long_7 = long_3 * long_1;
	long_1 = long_8 + long_2;
	int_3 = int_1 + int_10;
	return int_11;
}
long v_bwa_insert_header( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_1 + int_2;
		short_2 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		char char_2 = 1;
		long_1 = v_bwa_escape(char_1);

		char_1 = char_2;
	}
	float_2 = float_1 + float_1;
	return long_2;
}
long v_bwa_escape( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				long long_2 = 1;
				long_2 = long_1 + long_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
			}
			if(1)
			{
				int_1 = int_1 * int_2;
			}
			if(1)
			{
				int_1 = int_1 + int_1;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 + long_1;
		}
	}
	int_1 = int_3 * int_2;
	return long_1;
}
long v_bwa_set_rg( unsigned int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") < 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	v_logMessage(double_2,int_2,char_1,double_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		double_3 = double_1 + double_1;
		int_1 = int_1 * int_2;
	}
	double_2 = double_4 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long_4 = long_3 * long_4;
	}
	if(1)
	{
		char char_2 = 1;
		short short_1 = 1;
		char_2 = char_1;
		short_1 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_3 + char_4;
	}
	int_5 = int_3 + int_4;
	return long_3;
	long_1 = v_bwa_escape(char_5);

}
void v_renderTranslations()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 * int_2;
	int_2 = int_2 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
	}
}
float v_convertTransArgs( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_2;
	double_5 = double_3 * double_4;
	int_2 = int_3 * int_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long_1 = long_2;
		short_1 = short_1 * short_2;
	}
	long_5 = long_3 * long_4;
	long_1 = long_1 * long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 + double_5;
			long_4 = long_1 * long_2;
		}
	}
	double_5 = double_5;
	float_1 = float_2;
	int_4 = int_1 * int_2;
	float_1 = float_2 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_renderTranslations();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			float float_3 = 1;
			float_1 = float_1;
			float_3 = float_2 + float_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
		int_1 = int_5 * int_3;
	}
	return float_1;
}
void v_bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
		int_2 = int_1 * int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
}
void v_mem_opt_init()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short_2 = short_1 * short_1;
	long_2 = long_1 * long_1;
	char_3 = char_1 + char_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_3 * long_1;
	long_3 = long_3 + long_1;
	int_1 = int_1;
	int_2 = int_2 * int_3;
	char_2 = char_2 + char_2;
	v_bwa_fill_scmat(int_2,int_1,double_3);

	unsigned_int_1 = unsigned_int_1;
	double_2 = double_4 + double_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_4 = short_3 * short_2;
	int_2 = int_3 + int_1;
	unsigned_int_4 = unsigned_int_2;
	int_5 = int_4 + int_2;
	short_1 = short_5 + short_1;
	int_5 = int_4 + int_1;
	int_4 = int_1 + int_2;
	int_1 = int_3 + int_6;
	char_2 = char_1;
	float_1 = float_2;
	long_4 = long_3 * long_1;
	int_6 = int_4 + int_5;
	float_2 = float_3 + float_4;
	int_6 = int_2 + int_2;
	int_6 = int_5;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	long_5 = long_1 * long_4;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
	short_5 = short_1 * short_1;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_8;
	float_2 = float_5 * float_6;
	double_6 = double_3;
	int_3 = int_5 + int_2;
	int_8 = int_7 + int_2;
	int_9 = int_6 * int_4;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_3;
	int_7 = int_1 + int_9;
}
int v_command_align( int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_3 = char_1 + char_2;
	char_2 = char_1 + char_3;
	double_2 = double_1 + double_1;
	char controller4vul_658[2];
	fgets(controller4vul_658 ,2 ,stdin);
	if( strcmp( controller4vul_658, ")") < 0)
	{
		unsigned_int_1 = unsigned_int_2;
		double_1 = double_3 * double_2;
		char controller4vul_659[3];
		fgets(controller4vul_659 ,3 ,stdin);
		if( strcmp( controller4vul_659, "Y$") > 0)
		{
			char controller4vul_660[2];
			fgets(controller4vul_660 ,2 ,stdin);
			if( strcmp( controller4vul_660, "u") > 0)
			{
				float_1 = v_process(int_1,uni_para);

			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				char_4 = char_4 + char_4;
			}
			double_4 = double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float_3 = float_2 * float_2;
			if(1)
			{
				double_1 = double_1 * double_3;
			}
			if(1)
			{
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					int_2 = int_3;
					double_1 = double_1 * double_1;
				}
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_1 = unsigned_int_1;
				unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1;
			}
		}
	}
	if(1)
	{
		short short_1 = 1;
		char_4 = char_2 + char_4;
		int_3 = int_3 + int_2;
		if(1)
		{
			char char_5 = 1;
			int int_4 = 1;
			double_3 = double_2;
			char_5 = char_2 * char_5;
			char_3 = char_4 + char_1;
			char_1 = char_1 * char_1;
			if(1)
			{
				short_1 = short_1 * short_1;
				double_1 = double_1 + double_4;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
			}
			char controller_9[3];
			fgets(controller_9 ,3 ,stdin);
			if( strcmp( controller_9, "Zu") > 0)
			{
				unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
				char_1 = char_2;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					char_4 = char_5 + char_4;
				}
			}
			int_2 = int_2 + int_4;
			char_5 = char_5 + char_1;
		}
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		double double_5 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char char_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				unsigned_int_6 = unsigned_int_7;
			}
			float_5 = float_2 * float_4;
			char_6 = char_3 * char_6;
			float_3 = float_2 + float_2;
			long_1 = long_2;
			char_1 = char_4;
			unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
			unsigned_int_5 = unsigned_int_5;
		}
		int_3 = int_3 * int_2;
		double_1 = double_1 * double_5;
	}
	return int_2;
}
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short_3 = short_1 * short_2;
	short_2 = short_3 + short_3;
	float_1 = float_1;
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	short_4 = short_3 + short_2;
	unsigned_int_1 = v_err_xopen_core(long_3,unsigned_int_2,char_1);

	int_1 = int_2 + int_4;
	int_3 = v_err_gzclose(long_4);

}
int v_cleanUniprotReference( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	v_logMessage(double_1,int_1,char_1,double_1);

	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = v_err_xopen_core(long_1,unsigned_int_4,char_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_2;
	v_writeIndexHeader(unsigned_int_4,char_1);

	double_2 = double_2 * double_2;
	char_2 = char_3 * char_2;
	long_2 = long_1 + long_1;
	double_4 = double_3 * double_4;
	long_1 = long_3 * long_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		long long_4 = 1;
		double double_5 = 1;
		float_1 = float_1 * float_1;
		v_cleanUniprotReferenceUniref(unsigned_int_4,int_2);

		double_2 = double_4 * double_4;
		short_1 = short_1 * short_1;
		long_4 = long_2 * long_3;
		double_4 = double_3 + double_2;
		double_5 = double_3 * double_4;
		unsigned_int_3 = unsigned_int_2;
	}
	short_2 = short_2;
	return int_1;
}
int v_downloadUniprotReference( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_2 = double_2 * double_3;
	double_2 = double_2 * double_4;
	double_2 = double_1;
	float_1 = float_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	v_logMessage(double_3,int_1,char_1,double_1);

	int_2 = int_2 * int_2;
	short_1 = short_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "q") > 0)
	{
		double double_5 = 1;
		unsigned_int_1 = v_err_xopen_core(long_1,unsigned_int_4,char_1);

		double_3 = double_3 * double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		double_5 = double_4 * double_1;
	}
	int_1 = int_3 * int_1;
	int_2 = int_3;
	return int_1;
}
int v_command_prepare( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_1 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		int_1 = int_1 + int_1;
		if(1)
		{
			int_2 = int_3;
		}
		if(1)
		{
			int_4 = v_command_index(int_1,char_1);

			unsigned_int_2 = unsigned_int_3;
			if(1)
			{
				int_3 = int_5;
			}
		}
		long_1 = long_1 + long_1;
		int_3 = int_1 * int_1;
		int_1 = v_cleanUniprotReference(int_2,float_1);

		float_2 = float_1 + float_1;
		double_1 = double_1 + double_1;
		long_1 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		long_3 = long_1 * long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_7 = 1;
			char char_2 = 1;
			int_7 = int_6 * int_6;
			char_2 = char_2 + char_1;
		}
		double_2 = double_2 + double_2;
		double_2 = double_2;
		float_1 = float_2 * float_3;
		int_4 = v_downloadUniprotReference(int_6,int_2);

		double_4 = double_3 * double_1;
		long_1 = long_4;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1;
		short_1 = short_3;
	}
	char_1 = char_3 * char_4;
	return int_5;
}
void v_bwt_dump_sa( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_2;
	int_2 = v_err_fclose(long_1);

	short_1 = short_1 * short_1;
	long_2 = long_1 * long_2;
	short_1 = v_err_fwrite(float_1,unsigned_int_3,float_2,float_1);

	int_2 = v_err_fflush(long_1);

	float_1 = float_2;
	int_4 = int_2 * int_3;
	int_3 = int_2 * int_1;
	float_3 = float_3 + float_1;
}
char v___occ_aux( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2 + int_1;
	float_3 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_4 = 1;
			float_4 = float_4 + float_2;
		}
	}
	return char_1;
}
void v_bwt_occ4( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	short_1 = short_1 + short_2;
	short_3 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_2;
	int_1 = int_1 * int_1;
	int_4 = int_2 * int_3;
	int_5 = int_4 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		float float_1 = 1;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_2 = v_getOccInterval(double_3,char_1);

		float_1 = float_2;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_1 + int_3;
	}
	v_unpackBWTValue(float_2,short_1);

	short_2 = short_1 * short_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		double_2 = double_3 + double_4;
	}
}
short v_bwt_occ( double parameter_1,long parameter_2,double parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	v_bwt_occ4(float_1,int_1,unsigned_int_1);

	char_1 = v___occ_aux(char_1,int_2);

	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_5;
	long_2 = long_1 * long_1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_getOccInterval(double_1,char_2);

	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_2 = int_3 * int_1;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_3;
	}
	return short_2;
}
short v_getOccInterval( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_1;
	return short_1;
}
void v_unpackBWTValue( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	short_1 = v_getOccInterval(double_1,char_1);

	long_1 = long_2;
}
int v_bwt_invPsi( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_1 = v_bwt_occ(double_1,long_1,double_1);

	char_1 = char_1 + char_2;
	double_2 = double_3;
	v_unpackBWTValue(float_1,short_1);

	short_3 = short_1 + short_2;
	long_1 = long_1 * long_2;
	return int_1;
}
void v_bwt_cal_sa( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		int_1 = int_2;
	}
	short_2 = short_1 * short_2;
	int_1 = v_bwt_invPsi(float_1,long_1);

	double_1 = double_3;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_4 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_1 + float_3;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	int_5 = int_4 + int_4;
}
void v_bwt_bwtupdate_core( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_2;
	long_1 = long_1 * long_1;
	long_1 = long_1 * long_1;
	double_2 = double_1 * double_3;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		float float_1 = 1;
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 + char_1;
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		float_1 = float_1 * float_1;
	}
	double_1 = double_2 + double_3;
	char_2 = char_3 + char_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_5 = char_6;
}
float v_fread_fix( float parameter_1,long parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	v_err_fread_noeof(long_1,float_1,double_1);

	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4;
	}
	float_3 = float_1 + float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1;
		int_1 = int_1 + int_1;
	}
	return float_4;
}
short v_bwt_restore_bwt( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_2;
	float_2 = float_2 * float_3;
	v_err_fread_noeof(long_1,float_3,double_1);

	char_2 = char_1 + char_2;
	int_1 = v_err_fseek(long_1,long_1,int_2);

	float_4 = float_4 + float_1;
	double_2 = double_1 * double_1;
	float_1 = v_fread_fix(float_3,long_1);

	char_1 = char_3 + char_2;
	double_1 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	long_1 = v_err_ftell(int_3);

	char_2 = char_1;
	int_2 = v_err_fclose(long_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2 * int_1;
	return short_1;
}
void v_bwt_destroy( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
}
void v_bwt_dump_bwt( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	short_2 = v_err_fwrite(float_1,unsigned_int_3,float_2,float_1);

	double_2 = double_1 + double_2;
	int_2 = int_1 + int_2;
	int_2 = v_err_fflush(long_1);

	long_1 = long_1 + long_2;
	int_1 = v_err_fclose(long_1);

	double_1 = double_1;
}
void v_packValue( unsigned int parameter_1,char parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_1 * int_2;
	char_1 = char_3 * char_3;
}
unsigned int v_induceSA( short parameter_1,char parameter_2,float parameter_3,char parameter_4,double parameter_5,int parameter_6,short parameter_7)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	int int_6 = 1;
	double_1 = v_getBuckets(long_1,long_1,int_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	char_1 = char_1;
	double_3 = double_2 * double_1;
	double_3 = double_4 + double_1;
	int_4 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_2;
		if(1)
		{
			short_2 = short_1 * short_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				int_2 = int_5 * int_2;
			}
			double_2 = double_4;
		}
	}
	if(1)
	{
		float_1 = float_1;
	}
	double_4 = double_5 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 * double_1;
			if(1)
			{
				double_2 = double_4 * double_5;
				int_1 = int_1 + int_5;
			}
			double_7 = double_5;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_6 = v_getCounts(short_1,short_2,double_7,int_4,float_1);

			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
	}
	return unsigned_int_1;
}
double v_getBuckets( long parameter_1,long parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			short_1 = short_1 * short_1;
			double_1 = double_1 + double_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_3 = double_3 + double_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return double_3;
}
int v_getCounts( short parameter_1,short parameter_2,double parameter_3,int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 * float_4;
	}
	return int_1;
}
void v_sais_main( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,short parameter_5,short parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_5 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	unsigned_int_1 = v_induceSA(short_1,char_1,float_1,char_1,double_1,int_1,short_1);

	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char_1 = char_1 + char_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	float_2 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_3 + int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_5 = int_2;
		}
		if(1)
		{
			float float_3 = 1;
			float_4 = float_1 + float_3;
		}
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_1 = v_getCounts(short_2,short_1,double_1,int_2,float_4);

		long_1 = long_1 * long_1;
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_1 = double_1 + double_2;
			}
			if(1)
			{
				float_5 = float_2;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_1 = v_getBuckets(long_2,long_1,int_5,char_2);

		long_2 = long_1;
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		long long_3 = 1;
		if(1)
		{
			long_3 = long_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
			int_4 = int_5;
			long_3 = long_1 + long_3;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		char_3 = char_2 * char_3;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				unsigned_int_5 = unsigned_int_6 * unsigned_int_4;
			}
			if(1)
			{
				float float_6 = 1;
				float_6 = float_1 * float_4;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_3 = unsigned_int_7 + unsigned_int_3;
		}
		double_1 = double_1;
	}
	if(1)
	{
		int_4 = int_5;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_5 = unsigned_int_8;
			}
		}
		if(1)
		{
		}
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			if(1)
			{
				char_4 = char_3;
			}
			if(1)
			{
				int_3 = int_5 * int_1;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			int int_6 = 1;
			int_6 = int_2 * int_2;
		}
	}
	if(1)
	{
		int_5 = int_5 * int_4;
		float_5 = float_4 * float_2;
	}
	if(1)
	{
	}
	char_3 = char_5 + char_3;
	double_1 = double_1 + double_3;
	for(int looper_12=0; looper_12<1;looper_12++)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_9;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		char char_6 = 1;
		char_4 = char_4 + char_6;
		char_2 = char_1 * char_4;
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		double_2 = double_3 + double_2;
	}
}
void v_is_sa( long parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			v_sais_main(unsigned_int_1,unsigned_int_2,int_1,double_1,short_1,short_2);

			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
	}
}
char v_is_bwt( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float_3 = float_1 + float_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		v_is_sa(long_1,int_2,double_2);

		long_4 = long_2 * long_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_3 + double_4;
	return char_2;
}
void v_err_fread_noeof(long parameter_2,float parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	v__err_fatal_simple(short_1,long_1);

}
long v_err_ftell( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return long_1;
	v__err_fatal_simple(short_1,long_1);

}
int v_err_fseek( long parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	v__err_fatal_simple(short_1,long_1);

	float_1 = float_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return int_1;
}
char v_bwa_seq_len( double parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	long long_4 = 1;
	v_err_fread_noeof(long_1,float_1,double_1);

	int_1 = int_2;
	int_3 = v_err_fclose(long_1);

	int_4 = int_1 * int_4;
	long_1 = v_err_ftell(int_4);

	short_2 = short_1 + short_2;
	double_2 = double_2 * double_3;
	long_2 = long_1 + long_2;
	float_1 = float_2 * float_2;
	float_2 = float_3 + float_3;
	long_3 = long_3 * long_2;
	return char_1;
	int_5 = v_err_fseek(long_2,long_4,int_2);

}
void v_bwt_pac2bwt( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_packValue(unsigned_int_1,char_1,unsigned_int_2);

	int_3 = int_1 + int_2;
	int_4 = int_4 + int_2;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	int_3 = int_1 + int_3;
	int_2 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	double_2 = double_1 * double_2;
	short_1 = short_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	double_4 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int_6 = int_3 * int_5;
		char_2 = char_3 + char_3;
	}
	char_2 = v_is_bwt(int_2,short_1);

	short_2 = short_1 * short_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_6;
	}
	v_err_fread_noeof(long_1,float_1,double_5);

	char_4 = char_3 * char_3;
	char_4 = v_bwa_seq_len(double_3);

	int_3 = v_err_fclose(long_1);

	float_4 = float_2 + float_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	}
	int_4 = int_2 + int_1;
}
void v_bns_destroy( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = float_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int_1 = v_err_fclose(long_1);

			char_3 = char_1 * char_2;
		}
		float_1 = float_2 + float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			int_2 = int_1 + int_1;
		}
		int_3 = int_1 * int_1;
		double_3 = double_1 * double_2;
	}
}
int v_err_fprintf( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	v__err_fatal_simple(short_1,long_1);

	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_2;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	return int_1;
}
void v_bns_dump( long parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_err_fprintf(double_1,double_2,unsigned_int_1);

	int_2 = v_err_fflush(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3;
	double_1 = double_4;
	int_1 = v_err_fclose(long_1);

	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		long long_2 = 1;
		char_1 = char_1 * char_1;
		char_2 = char_1 + char_1;
		if(1)
		{
			double_1 = double_1 + double_5;
		}
		if(1)
		{
			double_3 = double_6 + double_6;
		}
		long_1 = long_1 + long_2;
	}
	double_5 = double_5;
	short_5 = short_3 * short_4;
	short_6 = short_4 + short_6;
	int_2 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_6 = short_2 * short_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_6 + double_5;
		int_2 = int_1 * int_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_5 + double_4;
}
int v_err_fflush( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	v__err_fatal_simple(short_1,long_1);

	int_2 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_1;
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
	}
	return int_1;
}
short v_err_fwrite( float parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	v__err_fatal_simple(short_1,long_1);

	double_1 = double_1 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return short_2;
}
void v_add1( double parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_1;
	}
	char_3 = char_1 * char_2;
	double_1 = double_1 + double_2;
	short_3 = short_1 * short_2;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	long_2 = long_1 * long_2;
	int_3 = int_1 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		long long_3 = 1;
		int int_6 = 1;
		double_2 = double_3;
		if(1)
		{
			if(1)
			{
				double_5 = double_4 + double_4;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
					unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
				}
				int_3 = int_4;
				double_4 = double_2 + double_4;
				short_2 = short_2 + short_2;
				int_2 = int_5 + int_1;
				unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
		}
		long_3 = long_1;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			double_5 = double_4 + double_1;
			int_6 = int_4 + int_2;
			unsigned_int_7 = unsigned_int_2 * unsigned_int_1;
		}
		char controller_7[2];
		fgets(controller_7 ,2 ,stdin);
		if( strcmp( controller_7, "x") < 0)
		{
			int_2 = int_6;
		}
		double_5 = double_4 + double_1;
		long_2 = long_1 * long_1;
	}
	float_1 = float_2 + float_2;
}
char v_bns_fasta2bntseq( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	v_add1(double_1,float_1,unsigned_int_1,unsigned_int_1,int_1,int_2,int_2);

	short_1 = v_err_fwrite(float_1,unsigned_int_1,float_1,float_2);

	int_3 = int_3 + int_2;
	return char_1;
	int_3 = v_err_fflush(long_1);

	int_4 = v_err_fclose(long_2);

	v_bns_dump(long_1,unsigned_int_1);

	v_bns_destroy(float_1);

}
void v_logMessageRaw( int parameter_1,char parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_2;
	float_1 = float_1;
	short_1 = short_2 * short_1;
}
int v_writeIndexTestProtein( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_2;
	short_2 = short_1 + short_1;
	short_3 = short_1 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = v_convertToAA(char_1,char_2,int_1,char_1,float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_4 = v_err_gzclose(long_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = v_err_xopen_core(long_1,unsigned_int_2,char_2);

		int_1 = v_err_fclose(long_2);

		unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	}
	float_2 = float_3;
	return int_3;
}
int v_writeIndexDirectProtein( unsigned int parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_err_fclose(long_1);

	long_2 = long_1 + long_1;
	v_writeIndexHeader(unsigned_int_1,char_1);

	float_2 = float_1 + float_1;
	unsigned_int_2 = v_err_xopen_core(long_1,unsigned_int_1,char_1);

	int_3 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2;
	return int_3;
}
long v_getLastAlignedPos( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
	}
	return long_1;
}
int v_writeIndexCodingProtein( long parameter_1,int parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	unsigned_int_2 = v_err_xopen_core(long_1,unsigned_int_3,char_3);

	int_3 = v_convertToAA(char_4,char_5,int_4,char_4,float_1);

	short_2 = short_1 * short_1;
	if(1)
	{
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = v_err_gzclose(long_1);

		int_4 = int_5 * int_3;
		long_1 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		int_6 = v_err_fclose(long_2);

		char_2 = char_6 + char_2;
	}
	if(1)
	{
		char_5 = char_6;
		v_writeIndexHeader(unsigned_int_5,char_2);

		int_6 = int_5 * int_6;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = v_getLastAlignedPos(long_2,int_3);

		long_2 = long_2 * long_3;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	double_1 = double_3 + double_3;
	return int_4;
}
int v_err_fclose( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		v__err_fatal_simple(short_1,long_1);

		char_1 = char_1 + char_1;
	}
	return int_1;
}
void v__err_fatal_simple( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_2;
}
int v_err_gzclose( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
	v__err_fatal_simple(short_1,long_1);

}
void v_encodeCodon( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
		}
		char_1 = char_1 + char_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "sz") < 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_1 = char_2 + char_3;
	}
}
int v_convertToAA( char parameter_1,char parameter_2,int parameter_3,char parameter_4,float parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_1 = long_1 * long_2;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_3;
	int_1 = int_1 * int_2;
	long_4 = long_3 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		int_1 = int_2 * int_1;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_4 * double_1;
		}
		if(1)
		{
			float float_1 = 1;
			v_encodeCodon(char_1,int_1);

			float_1 = float_1 * float_1;
		}
	}
	return int_2;
}
int v_getNextCDS( unsigned int parameter_1,long parameter_2,double parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	return int_1;
}
void v_writeIndexHeader( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
}
void v_err_fatal( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_2;
	float_1 = float_1 + float_2;
	int_2 = int_2 + int_3;
	char_2 = char_2;
	short_2 = short_1 + short_1;
}
unsigned int v_err_xopen_core( long parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_err_fatal(unsigned_int_2,short_1,int_1);

	char_2 = char_1 + char_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		double_2 = double_1;
	}
	return unsigned_int_3;
}
int v_writeIndexProtein( int parameter_1,int parameter_2,long parameter_3,short parameter_4)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	long long_3 = 1;
	short short_5 = 1;
	char char_5 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	float_2 = float_2 + float_1;
	int_1 = v_getNextCDS(unsigned_int_2,long_1,double_1);

	int_1 = v_convertToAA(char_1,char_2,int_1,char_3,float_3);

	short_4 = short_3 * short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	int_1 = v_err_gzclose(long_2);

	int_1 = int_1 * int_1;
	float_1 = float_2 * float_1;
	int_3 = int_1 * int_2;
	char_4 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_2 = double_1 * double_1;
	unsigned_int_4 = v_err_xopen_core(long_3,unsigned_int_3,char_3);

	short_2 = short_1 + short_5;
	int_3 = int_3 + int_3;
	v_writeIndexHeader(unsigned_int_2,char_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_5 = char_3 + char_4;
	int_1 = int_1 + int_3;
	int_1 = v_err_fclose(long_2);

	int_4 = int_2;
	float_5 = float_4 + float_4;
	double_1 = double_1;
	return int_5;
}
void v_logMessage( double parameter_1,int parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	int_3 = int_1 + int_2;
	int_4 = int_2 + int_3;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_3 * double_4;
	float_3 = float_1 + float_2;
	double_1 = double_3 * double_4;
	int_5 = int_2;
	long_2 = long_1 * long_2;
	double_2 = double_5 * double_4;
	short_1 = short_2;
	int_6 = int_5;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_4;
	int_5 = int_2;
	int_5 = int_1 * int_7;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
}
int v_command_index( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	short_1 = short_1 * short_1;
	int_1 = v_writeIndexProtein(int_2,int_3,long_1,short_2);

	int_2 = int_2;
	double_1 = double_1;
	int_3 = v_err_gzclose(long_2);

	v_bwt_pac2bwt(char_2);

	v_bwt_dump_bwt(long_2,unsigned_int_1);

	char_2 = char_3 + char_4;
	short_1 = v_bwt_restore_bwt(int_1);

	double_3 = double_2 * double_3;
	int_3 = v_writeIndexCodingProtein(long_2,int_3,short_3);

	double_2 = double_3 + double_1;
	if(1)
	{
		v_logMessage(double_1,int_2,char_3,double_1);

		int_1 = v_writeIndexTestProtein(unsigned_int_2,short_1);

		v_bwt_cal_sa(double_4,int_4);

		double_4 = double_3;
	}
	if(1)
	{
	}
	int_1 = v_writeIndexDirectProtein(unsigned_int_3,double_3,char_2);

	v_logMessageRaw(int_2,char_2,unsigned_int_3);

	long_4 = long_1 * long_3;
	if(1)
	{
	}
	char_5 = v_bns_fasta2bntseq(int_5,char_4,int_6);

	v_bwt_destroy(float_1);

	v_bwt_bwtupdate_core(float_2);

	double_4 = double_3 * double_1;
	return int_1;
	v_bwt_dump_sa(float_3,char_1);

}
int v_renderMainUsage()
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	float_1 = float_2;
	double_1 = double_2 + double_2;
	short_2 = short_3 * short_4;
	int_1 = int_1;
	float_2 = float_1 + float_3;
	double_2 = double_1;
	int_1 = int_2 + int_1;
	double_3 = double_4;
	double_4 = double_1 + double_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	short_5 = short_4 * short_4;
	return int_3;
}
int v_ksprintf( unsigned int parameter_1,short parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_3 = double_1 + double_2;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	long_2 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "XA") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_1 = 1;
		int int_3 = 1;
		short_1 = short_1 + short_2;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
		int_2 = int_1 * int_2;
		int_2 = int_3 + int_3;
		double_3 = double_2 + double_3;
	}
	long_3 = long_3 + long_1;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	return int_2;
}
double v_realtime()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_2;
	int_2 = int_2 + int_3;
	return double_1;
}
int main()
{
	int uni_para =387;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_3;
	}
	double_2 = double_3 * double_1;
	char controller4vul_657[3];
	fgets(controller4vul_657 ,3 ,stdin);
	if( strcmp( controller4vul_657, "e{") > 0)
	{
		int_1 = v_command_align(int_2,char_2,uni_para);

	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_3;
	}
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_3 = int_4 + int_5;
	}
	if(1)
	{
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	double_2 = double_2 * double_4;
	double_1 = double_1 * double_3;
	if(1)
	{
		short short_3 = 1;
		double_1 = double_1;
		double_3 = double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_4 * double_3;
		}
		short_1 = short_3 * short_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	return int_1;
}

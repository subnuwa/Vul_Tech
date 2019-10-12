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
int v_bwa_shm_stage( long parameter_1,char parameter_2,long parameter_3);
int v_bwa_shm_test( double parameter_1);
int v_main_shm( int parameter_1,char parameter_2);
int v_command_bwt2sa( int parameter_1,char parameter_2);
int v_command_bwtupdate( int parameter_1,char parameter_2);
int v_command_pac2bwt( int parameter_1,char parameter_2);
int v_bwa_fa2pac( int parameter_1,char parameter_2);
int v_kclose();
void v_index_destroy( long parameter_1);
void v_cleanUniprotLists( long parameter_1,int parameter_2);
void v_renderUniprotEntries( short parameter_1,int parameter_2,long parameter_3);
int v_uniprotEntryCompareOnline( long parameter_1,long parameter_2);
void v_joinOnlineLists( double parameter_1,char parameter_2);
void v_freeCURLBuffer( short parameter_1);
void v_resetCURLBuffer();
unsigned int v_receiveUniprotOutput(unsigned int parameter_2,char parameter_3);
void v_initCURLBuffer( float parameter_1,int parameter_2);
void v_retrieveUniprotOnline( long parameter_1,char parameter_2,float parameter_3);
int v_uniprotEntryCompareOrganism( int parameter_1,float parameter_2);
int v_uniprotEntryCompareGene( unsigned int parameter_1,unsigned int parameter_2);
int v_uniprotEntryCompareID( short parameter_1,int parameter_2);
void v_aggregateUniprotList( short parameter_1,int parameter_2,int parameter_3);
void v_prepareUniprotLists( char parameter_1,int parameter_2);
void v_prepareUniprotReport( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,unsigned int parameter_5);
void v_renderUniprotReport( int parameter_1,int parameter_2,double parameter_3,short parameter_4);
void v_renderNumberAligned( short parameter_1);
int v_err_fputs( double parameter_1,unsigned int parameter_2);
short v_getGlobalCount( int parameter_1);
void v_getGlobalLists( int parameter_1);
int v_getAlignmentType( float parameter_1,int parameter_2,int parameter_3);
int v_addUniprotList( long parameter_1,int parameter_2,int parameter_3);
void v_mem_reg2ovlp( unsigned int parameter_1,char parameter_2,short parameter_3,float parameter_4,unsigned int parameter_5);
void v_ks_introsort_128( long parameter_1,unsigned int parameter_2);
int v_mem_pair( char parameter_1,double parameter_2,char parameter_3,double parameter_4,short parameter_5,short parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11);
int v_mem_matesw( double parameter_1,float parameter_2,double parameter_3,float parameter_4,long parameter_5,int parameter_6,int parameter_7,float parameter_8,int uni_para);
char v_get_rlen( int parameter_1,unsigned int parameter_2);
void v_ks_resize( float parameter_1,float parameter_2);
void v_mem_aln2sam( double parameter_1,float parameter_2,long parameter_3,short parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7,char parameter_8);
unsigned int v_kputl( long parameter_1,int parameter_2);
unsigned int v_kputsn( float parameter_1,int parameter_2,double parameter_3);
int v_kputs( int parameter_1,double parameter_2);
short v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
char v_mem_reg2aln( long parameter_1,float parameter_2,short parameter_3,int parameter_4,double parameter_5,short parameter_6);
char v_get_pri_idx( double parameter_1,char parameter_2,int parameter_3);
void v_mem_gen_alt( float parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,int parameter_5,unsigned int parameter_6);
void v_mem_reg2sam( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5,int parameter_6,double parameter_7);
int v_mem_approx_mapq_se( float parameter_1,int parameter_2);
float v_hash_64( double parameter_1);
int v_mem_mark_primary_se( char parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_mem_sam_pe( unsigned int parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6,int parameter_7,int uni_para);
long v_worker2(int parameter_2,int parameter_3,int uni_para);
void v_filterCompetingAln( char parameter_1,int parameter_2,int parameter_3);
char v_mem_infer_dir( short parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4);
short v_cal_sub( double parameter_1,short parameter_2);
void v_mem_pestat( unsigned int parameter_1,float parameter_2,int parameter_3,long parameter_4);
int v_mem_test_and_remove_exact( float parameter_1,int parameter_2,short parameter_3,int parameter_4);
float v_kputc( int parameter_1,unsigned int parameter_2,int uni_para);
void v_kputw( int parameter_1,unsigned int parameter_2);
long v_push_cigar( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_ksw_global2( int parameter_1,long parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,char parameter_13);
long v_bwa_gen_cigar2( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,char parameter_8,int parameter_9,float parameter_10,char parameter_11,double parameter_12,int parameter_13,int parameter_14,int parameter_15,int uni_para);
int v_mem_patch_reg( unsigned int parameter_1,double parameter_2,char parameter_3,double parameter_4,int parameter_5,short parameter_6,int parameter_7,int uni_para);
int v_mem_sort_dedup_patch( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5,char parameter_6,int uni_para);
int v_ksw_extend2( int parameter_1,short parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19);
void v_ks_introsort_64( double parameter_1,float parameter_2);
double v_cal_max_gap( double parameter_1,int parameter_2);
void v_mem_chain2aln( char parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5,double parameter_6,double parameter_7);
int v_err_printf( short parameter_1,int parameter_2);
void v_mem_print_chain( float parameter_1,unsigned int parameter_2);
long v_revseq( int parameter_1,unsigned int parameter_2);
unsigned int v_ksw_u8( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
unsigned int v_ksw_i16( unsigned int parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
void v_ksw_qinit( int parameter_1,int parameter_2,float parameter_3,int parameter_4,float parameter_5);
double v_ksw_align2( int parameter_1,double parameter_2,int parameter_3,char parameter_4,int parameter_5,double parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,float parameter_12);
long v_bns_get_seq( float parameter_1,short parameter_2,int parameter_3,char parameter_4,double parameter_5);
int v_bns_fetch_seq( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5,int parameter_6);
int v_mem_seed_sw( float parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5,float parameter_6);
void v_mem_flt_chained_seeds( long parameter_1,short parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6,short parameter_7);
int v_mem_chain_weight( char parameter_1);
int v_mem_chain_flt( double parameter_1,int parameter_2,short parameter_3);
double v_smem_aux_destroy( int parameter_1);
long v_test_and_merge( double parameter_1,float parameter_2,int parameter_3,short parameter_4,int parameter_5);
char v_bns_depos( int parameter_1,unsigned int parameter_2,int parameter_3);
int v_bns_pos2rid( float parameter_1,char parameter_2);
int v_bns_intv2rid( double parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_bwt_sa( unsigned int parameter_1,long parameter_2);
int v_bwt_seed_strategy1( double parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7);
short v_bwt_reverse_intvs( char parameter_1);
void v_bwt_2occ4( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5);
void v_bwt_extend( double parameter_1,long parameter_2,char parameter_3,int parameter_4);
int v_bwt_smem1a( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,char parameter_7,int parameter_8);
int v_bwt_smem1( short parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7);
float v_mem_collect_intv( double parameter_1,char parameter_2,int parameter_3,float parameter_4,double parameter_5);
int v_mem_chain( long parameter_1);
long v_mem_align1_core( int parameter_1,float parameter_2,short parameter_3,long parameter_4,int parameter_5,char parameter_6);
long v_worker1(int parameter_2,int parameter_3);
short v_smem_aux_init();
double v_cputime();
long v_steal_work();
double v_ktf_worker();
void v_kt_for( int parameter_1,float parameter_2,long parameter_3,int parameter_4,long parameter_6);
void v_mem_process_seqs( float parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7,int parameter_8,int uni_para);
char v_kvec_t( int parameter_1);
void v_bseq_classify( int parameter_1,char parameter_2,int parameter_3,float parameter_4);
double v_kseq2bseq1( int parameter_1,double parameter_2);
unsigned int v_trim_readno();
char v_bseq_read( int parameter_1,int parameter_2);
unsigned int v_process(int parameter_2,int uni_para);
void v_ktp_worker();
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6);
void v_bwa_print_sam_hdr( float parameter_1,float parameter_2,int parameter_3);
double v_cmd2argv( double parameter_1);
long v_kftp_send_cmd( int parameter_1,double parameter_2,int parameter_3);
int v_socket_wait( int parameter_1,int parameter_2);
short v_kftp_get_response( int parameter_1);
void v_ftp_open( char parameter_1);
unsigned int v_write_bytes( int parameter_1,short parameter_2,int parameter_3);
long v_socket_connect( unsigned int parameter_1,float parameter_2);
char v_http_open( double parameter_1);
float v_kopen( char parameter_1,int parameter_2);
void v_compileORFHistory( long parameter_1,long parameter_2,long parameter_3,long parameter_4);
void v_addORFHistory( long parameter_1,long parameter_2,double parameter_3);
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,unsigned int parameter_3);
int v_getSequenceORF( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,float parameter_5,short parameter_6);
int v_writeReadsProtein( char parameter_1,char parameter_2,double parameter_3);
char v_bns_restore_core( long parameter_1,int parameter_2,char parameter_3);
float v_bns_restore();
void v_bwt_restore_sa( short parameter_1,double parameter_2);
void v_index_load_bwt( double parameter_1);
float v_index_infer_prefix();
float v_index_load_from_disk( unsigned int parameter_1,int parameter_2);
unsigned int v_index_load( double parameter_1,int parameter_2);
int v_bwa_mem2idx( long parameter_1,float parameter_2,double parameter_3);
float v_index_load_from_shm( long parameter_1);
int v_getIndexCompatible( unsigned int parameter_1);
long v_getIndexHeader( char parameter_1);
double v_update_a( char parameter_1,char parameter_2);
int v_renderAlignUsage( short parameter_1);
long v_bwa_insert_header( unsigned int parameter_1,char parameter_2);
void v_bwa_escape( char parameter_1);
void v_bwa_set_rg( short parameter_1);
void v_renderTranslations();
float v_convertTransArgs( long parameter_1);
void v_bwa_fill_scmat( int parameter_1,int parameter_2,unsigned int parameter_3);
unsigned int v_mem_opt_init();
int v_command_align( int parameter_1,char parameter_2,int uni_para);
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2);
int v_cleanUniprotReference( int parameter_1,double parameter_2);
void v_downloadUniprotReference( int parameter_1,double parameter_2);
int v_command_prepare( int parameter_1,char parameter_2);
void v_bwt_dump_sa( char parameter_1,int parameter_2);
void v___occ_aux( int parameter_1,int parameter_2);
void v_bwt_occ4( double parameter_1,int parameter_2,long parameter_3);
float v_bwt_occ( double parameter_1,short parameter_2,unsigned int parameter_3);
short v_getOccInterval( float parameter_1,double parameter_2);
float v_unpackBWTValue( short parameter_1,short parameter_2);
void v_bwt_invPsi( float parameter_1,unsigned int parameter_2);
void v_bwt_cal_sa( long parameter_1,int parameter_2);
void v_bwt_bwtupdate_core( char parameter_1);
float v_fread_fix( double parameter_1,int parameter_2);
float v_bwt_restore_bwt( double parameter_1);
void v_bwt_destroy( int parameter_1);
void v_bwt_dump_bwt( int parameter_1,int parameter_2);
void v_packValue( unsigned int parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_induceSA( char parameter_1,short parameter_2,char parameter_3,int parameter_4,double parameter_5,int parameter_6,unsigned int parameter_7);
int v_getBuckets( int parameter_1,short parameter_2,long parameter_3,long parameter_4);
char v_getCounts( long parameter_1,double parameter_2,float parameter_3,char parameter_4,float parameter_5);
long v_sais_main( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5,int parameter_6);
short v_is_sa( unsigned int parameter_1,short parameter_2,char parameter_3);
long v_is_bwt( float parameter_1,int parameter_2);
void v_err_fread_noeof(double parameter_2,int parameter_3,short parameter_4);
long v_err_ftell( long parameter_1);
int v_err_fseek( float parameter_1,long parameter_2,int parameter_3);
long v_bwa_seq_len( long parameter_1);
void v_bwt_pac2bwt( short parameter_1);
void v_bns_destroy();
int v_err_fprintf( float parameter_1,long parameter_2,unsigned int parameter_3);
void v_bns_dump( short parameter_1,double parameter_2);
int v_err_fflush( long parameter_1);
int v_err_fwrite( float parameter_1,float parameter_2,float parameter_3,int parameter_4);
int v_add1( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7);
double v_bns_fasta2bntseq( unsigned int parameter_1,float parameter_2,int parameter_3);
void v_logMessageRaw( int parameter_1,char parameter_2,int parameter_3);
int v_writeIndexTestProtein( int parameter_1,short parameter_2);
int v_writeIndexDirectProtein( short parameter_1,int parameter_2,float parameter_3);
long v_getLastAlignedPos( long parameter_1,int parameter_2);
int v_writeIndexCodingProtein( short parameter_1,int parameter_2,float parameter_3);
int v_err_fclose( double parameter_1);
void v__err_fatal_simple( unsigned int parameter_1,long parameter_2);
int v_err_gzclose( long parameter_1);
void v_encodeCodon( char parameter_1,int parameter_2);
int v_convertToAA( char parameter_1,long parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5);
int v_getNextCDS( char parameter_1,int parameter_2,float parameter_3);
void v_writeIndexHeader( double parameter_1,unsigned int parameter_2);
void v_err_fatal( long parameter_1,char parameter_2,char parameter_3);
void v_err_xopen_core( unsigned int parameter_1,char parameter_2,float parameter_3);
int v_writeIndexProtein( float parameter_1,float parameter_2,short parameter_3,long parameter_4);
void v_logMessage( char parameter_1,int parameter_2,char parameter_3,long parameter_4);
int v_command_index( int parameter_1,char parameter_2);
int v_renderMainUsage();
int v_ksprintf( long parameter_1,char parameter_2,int parameter_3);
double v_realtime();
int v_renderVersion()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	short_3 = short_1 * short_2;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return int_1;
}
int v_bwa_shm_destroy()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_3 + short_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	char_3 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		unsigned_int_6 = unsigned_int_3;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
	}
	int_1 = int_1 * int_1;
	short_4 = short_1;
	return int_3;
}
int v_bwa_shm_list()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1 + int_1;
		double_2 = double_1 + double_1;
		short_2 = short_1 * short_1;
		double_1 = double_2 * double_2;
	}
	return int_1;
}
int v_bwa_idx2mem( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	long long_7 = 1;
	long long_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_3 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long_3 = long_1 + long_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	char_1 = char_3 + char_3;
	char_6 = char_4 + char_5;
	int_2 = int_1 * int_1;
	int_1 = v_bwa_mem2idx(long_2,float_1,double_3);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 + int_2;
	long_5 = long_2 * long_4;
	long_6 = long_2 * long_6;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	int_4 = int_4 + int_2;
	double_1 = double_4 + double_4;
	char_6 = char_3 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_1 * int_4;
	}
	float_2 = float_1 * float_2;
	long_7 = long_1;
	int_1 = int_3 * int_3;
	long_2 = long_2 * long_5;
	double_2 = double_2 * double_4;
	long_6 = long_8 + long_7;
	short_2 = short_1 * short_1;
	long_4 = long_5;
	short_4 = short_3 * short_1;
	short_5 = short_2 * short_2;
	short_6 = short_3 * short_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		long_1 = long_4 + long_5;
		double_3 = double_5 + double_5;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		float_3 = float_2 + float_2;
		short_1 = short_4 * short_3;
		int_2 = int_4 + int_2;
		long_9 = long_1;
		long_8 = long_6 * long_6;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_3;
	int_1 = int_4 * int_2;
	double_2 = double_3 + double_2;
	long_2 = long_9;
	long_4 = long_9 + long_3;
	float_2 = float_1 * float_2;
	float_2 = float_3;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_5;
	return int_2;
}
int v_bwa_shm_stage( long parameter_1,char parameter_2,long parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	long_1 = long_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		int_1 = int_1;
		int_3 = v_bwa_idx2mem(short_1);

		long_2 = long_2 + long_1;
		if(1)
		{
			double double_4 = 1;
			double_1 = double_4 * double_3;
		}
		int_1 = int_4;
	}
	if(1)
	{
		double double_5 = 1;
		double_3 = double_5 + double_6;
	}
	int_2 = int_3 * int_1;
	return int_4;
	int_5 = v_bwa_mem2idx(long_2,float_2,double_6);

}
int v_bwa_shm_test( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_6 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_2;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	int_4 = int_1 * int_3;
	long_2 = long_1 * long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		if(1)
		{
		}
		int_2 = int_5 + int_2;
	}
	return int_6;
}
int v_main_shm( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = v_bwa_shm_test(double_1);

	int_2 = v_bwa_shm_stage(long_1,char_1,long_2);

	float_3 = float_1 + float_2;
	float_2 = v_index_load_from_disk(unsigned_int_1,int_2);

	v_index_destroy(long_1);

	int_3 = v_bwa_shm_list();

	int_4 = int_4 + int_3;
	return int_5;
	int_4 = v_bwa_shm_destroy();

}
int v_command_bwt2sa( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_1;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_1 * short_3;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		v_bwt_dump_sa(char_1,int_2);

		int_5 = int_3 * int_4;
	}
	v_bwt_cal_sa(long_1,int_1);

	char_1 = char_2 * char_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	float_1 = v_bwt_restore_bwt(double_3);

	v_bwt_destroy(int_3);

	double_2 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		short_2 = short_2 * short_2;
	}
	return int_2;
}
int v_command_bwtupdate( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_bwt_bwtupdate_core(char_1);

	long_3 = long_1 * long_2;
	if(1)
	{
		v_bwt_destroy(int_1);

		char_1 = char_1 * char_1;
	}
	float_1 = v_bwt_restore_bwt(double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	int_3 = int_3;
	double_1 = double_1 + double_1;
	return int_1;
	v_bwt_dump_bwt(int_1,int_2);

}
int v_command_pac2bwt( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	long long_7 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	char_1 = char_1 + char_1;
	short_3 = short_1 * short_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_1 = char_1 * char_1;
	}
	short_4 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	v_bwt_dump_bwt(int_2,int_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		int_2 = int_3 + int_4;
		char_5 = char_4 + char_5;
	}
	double_1 = double_1 * double_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	float_1 = float_1 * float_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "Cq") == 0)
	{
		char char_6 = 1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
		long_4 = long_2 * long_3;
		char_6 = char_1 * char_3;
		v_bwt_pac2bwt(short_1);

		short_4 = short_1 * short_3;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		int int_5 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_1 = double_1 + double_1;
		v_bwt_destroy(int_4);

		char_2 = char_4;
		double_2 = double_2;
		long_2 = long_4 + long_5;
		long_4 = long_6 + long_1;
		int_1 = int_1 * int_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		int_5 = int_3 * int_1;
		int_1 = int_4 * int_2;
		float_2 = float_2;
		float_2 = float_2 * float_2;
		int_6 = int_6 * int_4;
		long_7 = long_2 + long_1;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_5 * short_1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_6;
			short_2 = short_5 * short_4;
			char_3 = char_4 * char_5;
			int_2 = int_6 * int_2;
			short_2 = short_3 * short_5;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		long_7 = long_6 + long_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			}
		}
		unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		}
		unsigned_int_7 = unsigned_int_5 + unsigned_int_3;
		float_4 = float_2 + float_3;
	}
	if(1)
	{
		long long_8 = 1;
		long long_9 = 1;
		long_7 = long_8 * long_9;
	}
	unsigned_int_3 = unsigned_int_6;
	return int_6;
}
int v_bwa_fa2pac( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_bns_fasta2bntseq(unsigned_int_2,float_1,int_1);

	double_2 = double_1;
	double_2 = double_3 * double_1;
	int_3 = int_1 + int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return int_2;
	int_4 = v_err_gzclose(long_1);

}
int v_kclose()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_1 + double_2;
		float_3 = float_1 * float_2;
		int_1 = int_1 + int_1;
		if(1)
		{
			float_3 = float_3 + float_3;
		}
	}
	short_1 = short_1 * short_1;
	return int_2;
}
void v_index_destroy( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			v_bns_destroy();

			double_1 = double_1 * double_1;
		}
		if(1)
		{
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
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_3;
		short_1 = short_2;
		double_1 = double_1;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
	}
	v_bwt_destroy(int_4);

	char_1 = char_1 * char_1;
}
void v_cleanUniprotLists( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_getGlobalLists(int_1);

	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char_2 = char_1 * char_1;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	short_3 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
}
void v_renderUniprotEntries( short parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_2;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_3 = 1;
		char_1 = char_1;
		float_3 = float_3 + float_3;
		long_2 = long_1 * long_1;
		short_2 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_3 * long_4;
		int_2 = int_1 * int_2;
		short_2 = short_3;
	}
}
int v_uniprotEntryCompareOnline( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_joinOnlineLists( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short_1 = short_2;
	int_2 = int_1 + int_1;
	float_1 = float_1;
	int_2 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	double_3 = double_1 + double_2;
	int_1 = int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 + short_1;
			if(1)
			{
				int int_3 = 1;
				int_3 = int_3 + int_2;
			}
		}
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_2 = 1;
		int_2 = v_uniprotEntryCompareOnline(long_1,long_1);

		long_1 = long_1 * long_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			float_2 = float_1;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 * float_1;
		}
	}
	float_1 = float_2 + float_2;
}
void v_freeCURLBuffer( short parameter_1)
{
	float float_1 = 1;
	float_1 = float_1;
}
void v_resetCURLBuffer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
}
unsigned int v_receiveUniprotOutput(unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_1 + float_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_2;
	double_1 = double_2 + double_1;
	return unsigned_int_4;
}
void v_initCURLBuffer( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1;
	long_2 = long_2;
	long_2 = long_3 + long_1;
	double_2 = double_1 + double_2;
}
void v_retrieveUniprotOnline( long parameter_1,char parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_logMessage(char_1,int_1,char_2,long_1);

	v_resetCURLBuffer();

	long_2 = long_1;
	unsigned_int_1 = v_receiveUniprotOutput(unsigned_int_1,char_1);

	char_2 = char_3;
	v_initCURLBuffer(float_1,int_1);

	short_1 = short_1;
	v_freeCURLBuffer(short_2);

}
int v_uniprotEntryCompareOrganism( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_uniprotEntryCompareGene( unsigned int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_uniprotEntryCompareID( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_aggregateUniprotList( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	int_1 = v_uniprotEntryCompareGene(unsigned_int_2,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_1 = v_uniprotEntryCompareOrganism(int_1,float_4);

	int_1 = int_2 * int_3;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_4;
	int_4 = int_2 * int_5;
	long_3 = long_5 + long_2;
	short_1 = short_1 * short_2;
	float_2 = float_3;
	double_4 = double_4;
	char_2 = char_3;
	float_3 = float_3 + float_3;
	int_4 = int_3 * int_5;
	int_1 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		long_2 = long_3;
		if(1)
		{
			long long_6 = 1;
			int_3 = int_2 * int_4;
			v_getGlobalLists(int_2);

			long_2 = long_6;
		}
		double_4 = double_2 + double_3;
		double_3 = double_4 + double_5;
		if(1)
		{
			float float_5 = 1;
			float_4 = float_1 * float_5;
		}
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	int_4 = v_uniprotEntryCompareID(short_3,int_1);

}
void v_prepareUniprotLists( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	short_1 = v_getGlobalCount(int_1);

	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_2;
	}
	short_2 = short_2;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_4 = 1;
			if(1)
			{
				short_3 = short_1;
			}
			if(1)
			{
				short_3 = short_3 * short_2;
			}
			long_3 = long_1 * long_2;
			float_3 = float_1 + float_2;
			double_2 = double_1 + double_1;
			float_4 = float_3 + float_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_4 = 1;
		short_4 = short_3 * short_3;
	}
	float_5 = float_1 + float_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_3 = 1;
		long long_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_2 = int_3 * int_1;
		int_2 = int_1 * int_1;
		long_3 = long_4;
		v_logMessage(char_2,int_4,char_2,long_3);

		double_3 = double_4;
	}
	char_2 = char_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long_2 = long_2 + long_2;
	}
	v_getGlobalLists(int_4);

	v_aggregateUniprotList(short_3,int_2,int_2);

}
void v_prepareUniprotReport( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	v_prepareUniprotLists(char_1,int_1);

	v_retrieveUniprotOnline(long_1,char_1,float_1);

	int_1 = v_uniprotEntryCompareOrganism(int_2,float_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	int_1 = v_uniprotEntryCompareID(short_1,int_2);

	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		v_joinOnlineLists(double_1,char_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	v_getGlobalLists(int_1);

	int_5 = int_3 * int_4;
	double_3 = double_1 + double_2;
	double_2 = double_3 * double_2;
	int_6 = v_uniprotEntryCompareGene(unsigned_int_3,unsigned_int_2);

}
void v_renderUniprotReport( int parameter_1,int parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	int int_6 = 1;
	float float_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_3;
	float_1 = float_1 * float_1;
	v_getGlobalLists(int_3);

	int_4 = int_3 * int_1;
	long_3 = long_1 * long_2;
	v_prepareUniprotReport(int_5,int_3,double_1,unsigned_int_1,unsigned_int_2);

	double_1 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	v_freeCURLBuffer(short_1);

	int_4 = int_4;
	long_4 = long_1 + long_2;
	v_cleanUniprotLists(long_2,int_6);

	float_2 = float_1 + float_1;
	double_2 = double_1 * double_2;
	int_9 = int_7 + int_8;
	unsigned_int_2 = unsigned_int_3;
	v_renderUniprotEntries(short_1,int_10,long_2);

	int_1 = int_6 + int_9;
	float_2 = float_1 + float_2;
	int_9 = int_7 * int_9;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	char_1 = char_1 * char_2;
	float_3 = float_1 + float_1;
}
void v_renderNumberAligned( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		int_3 = int_4;
		v_logMessage(char_1,int_3,char_1,long_1);

		short_1 = short_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			int_4 = int_2;
			float_2 = float_1 * float_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
}
int v_err_fputs( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	v__err_fatal_simple(unsigned_int_1,long_1);

	char_1 = char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	return int_1;
}
short v_getGlobalCount( int parameter_1)
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
void v_getGlobalLists( int parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_getAlignmentType( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1;
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
	return int_1;
}
int v_addUniprotList( long parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_2;
	int_3 = int_1 * int_2;
	int_4 = int_3;
	double_1 = double_2;
	double_3 = double_1 + double_2;
	short_1 = v_getGlobalCount(int_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_getGlobalLists(int_1);

	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			}
			int_3 = int_5;
			long_3 = long_1 + long_1;
			int_4 = int_2 * int_5;
		}
		double_3 = double_4;
	}
	int_4 = int_1 + int_1;
	char_2 = char_3;
	int_2 = int_4;
	int_3 = v_getAlignmentType(float_2,int_5,int_5);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_2 = int_4 * int_3;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_2 = 1;
			short short_3 = 1;
			int int_7 = 1;
			int int_8 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_10 = 1;
			if(1)
			{
				short_3 = short_2 * short_3;
			}
			int_7 = int_5 * int_4;
			int_5 = int_5 + int_3;
			int_8 = int_2 + int_4;
			char_3 = char_4 * char_4;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					if(1)
					{
						double_3 = double_4 * double_2;
					}
				}
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					char char_5 = 1;
					int_8 = int_1 * int_6;
					char_5 = char_5 + char_5;
				}
			}
			unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
			unsigned_int_1 = unsigned_int_1;
			int_4 = int_9 + int_2;
			double_3 = double_1 + double_4;
			int_4 = int_4 * int_7;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
			if(1)
			{
				long_1 = long_3 * long_2;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					float float_3 = 1;
					float float_4 = 1;
					float float_5 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int_8 = int_3 + int_10;
					float_5 = float_3 + float_4;
					float_6 = float_1 * float_4;
					unsigned_int_6 = unsigned_int_1;
					double_6 = double_5 * double_6;
					unsigned_int_4 = unsigned_int_2;
				}
			}
			if(1)
			{
				char char_6 = 1;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
				int_10 = int_8 + int_1;
				short_2 = short_3;
				char_2 = char_6 + char_6;
			}
			int_3 = int_7 * int_5;
		}
	}
	float_6 = float_6 + float_7;
	float_2 = float_1 + float_1;
	return int_5;
}
void v_mem_reg2ovlp( unsigned int parameter_1,char parameter_2,short parameter_3,float parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_1 + short_1;
		short_2 = short_1 + short_1;
		int_1 = v_ksprintf(long_1,char_1,int_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		char_2 = v_bns_depos(int_2,unsigned_int_3,int_2);

		long_2 = long_1 * long_2;
		short_2 = short_2 * short_2;
		short_2 = short_2 + short_2;
		char_1 = char_2 + char_1;
		double_2 = double_2 * double_2;
		float_1 = v_kputc(int_1,unsigned_int_4,-1 );

		double_1 = double_2 * double_1;
		v_kputw(int_1,unsigned_int_4);

		double_1 = double_1 * double_2;
		if(1)
		{
			double_2 = double_2;
		}
		int_2 = v_kputs(int_1,double_3);

		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_3;
		float_2 = float_1 + float_3;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		int_1 = v_bns_pos2rid(float_4,char_3);

		int_1 = int_3;
		short_3 = short_2 * short_2;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		double_2 = double_4;
		int_4 = int_4 * int_4;
		double_4 = double_2 * double_1;
		int_4 = int_5 + int_6;
		char_3 = char_2 * char_3;
		int_4 = int_5 + int_4;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	}
	unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
}
void v_ks_introsort_128( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1;
}
int v_mem_pair( char parameter_1,double parameter_2,char parameter_3,double parameter_4,short parameter_5,short parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short_3 = short_1 + short_2;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	double_3 = double_2 + double_3;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_1 = char_2 * char_3;
			int_2 = int_2 + int_1;
			long_1 = long_1 + long_1;
			long_2 = long_1 * long_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
	}
	float_1 = float_1;
	int_1 = int_1 * int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_6 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long_2 = long_2;
			if(1)
			{
				int_1 = int_3 + int_2;
			}
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			if(1)
			{
				long_2 = long_2;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double double_4 = 1;
				char char_4 = 1;
				int int_4 = 1;
				short short_5 = 1;
				char char_6 = 1;
				double double_5 = 1;
				double_4 = double_2 * double_1;
				v_ks_introsort_128(long_2,unsigned_int_3);

				int_3 = int_1 * int_3;
				char_3 = char_4 * char_1;
				int_4 = int_4 + int_2;
				char controller_3[3];
				fgets(controller_3 ,3 ,stdin);
				if( strcmp( controller_3, "2=") < 0)
				{
					unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
				}
				short_5 = short_3 + short_4;
				if(1)
				{
					long_1 = long_3 + long_4;
				}
				if(1)
				{
					long_4 = long_4 + long_4;
				}
				int_4 = int_2 * int_5;
				char_6 = char_5 + char_1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_4;
				}
				float_2 = v_hash_64(double_1);

				double_1 = double_3;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
				double_4 = double_5 + double_5;
			}
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		long long_5 = 1;
		char char_7 = 1;
		short_2 = short_4 * short_4;
		long_4 = long_2 * long_5;
		long_4 = long_4 + long_5;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
		float_3 = float_2 + float_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_7;
		char_7 = char_3 + char_5;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		int_1 = int_5 + int_2;
		long_3 = long_5;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				int int_6 = 1;
				int_7 = int_6 * int_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
	}
	int_8 = int_5 * int_7;
	float_1 = float_2 * float_3;
	return int_5;
}
int v_mem_matesw( double parameter_1,float parameter_2,double parameter_3,float parameter_4,long parameter_5,int parameter_6,int parameter_7,float parameter_8,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int_3 = int_1 * int_2;
	float_1 = float_2;
	float_4 = float_2 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_5 = float_1 + float_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = int_2 * int_4;
		int_5 = int_6 * int_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_3 = 1;
		short short_3 = 1;
		float float_6 = 1;
		char char_4 = 1;
		long long_2 = 1;
		short short_5 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 * double_1;
		long_1 = long_1 + long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		short_1 = short_1 * short_2;
		int_4 = int_5 + int_4;
		if(1)
		{
			char_3 = char_1 * char_2;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short short_4 = 1;
				short_4 = short_3 * short_3;
			}
			int_5 = int_5;
		}
		if(1)
		{
			float_6 = float_2 + float_5;
		}
		if(1)
		{
			char_2 = char_4 + char_1;
			int_3 = int_5 + int_4;
		}
		if(1)
		{
			int_6 = int_4 * int_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			int_7 = int_6 + int_3;
		}
		if(1)
		{
			char_1 = char_3 * char_1;
		}
		if(1)
		{
			long_2 = long_1 * long_2;
		}
		char controller4vul_1735[3];
		fgets(controller4vul_1735 ,3 ,stdin);
		if( strcmp( controller4vul_1735, "lM") > 0)
		{
			int int_8 = 1;
			double double_5 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			int_8 = int_7 + int_4;
			char_1 = char_1 + char_1;
			double_2 = double_2;
			double_1 = double_2 + double_1;
			char controller4vul_1736[2];
			fgets(controller4vul_1736 ,2 ,stdin);
			if( strcmp( controller4vul_1736, "T") < 0)
			{
				float float_7 = 1;
				long long_3 = 1;
				char char_5 = 1;
				float float_8 = 1;
				char char_6 = 1;
				float_3 = float_5 * float_7;
				long_3 = long_1;
				long_3 = long_3 * long_1;
				long_1 = long_1 + long_2;
				char_2 = char_5;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				unsigned_int_3 = unsigned_int_1;
				float_8 = float_2 + float_6;
				char_6 = char_4 * char_3;
				short_5 = short_1 + short_1;
				double_3 = double_2 + double_1;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					char controller4vul_1737[3];
					fgets(controller4vul_1737 ,3 ,stdin);
					if( strcmp( controller4vul_1737, "z$") < 0)
					{
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_5 = 1;
						int_7 = v_mem_sort_dedup_patch(long_1,unsigned_int_3,unsigned_int_2,double_4,int_5,char_2,uni_para);

						unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
					}
				}
				int_8 = int_2 + int_5;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					short short_6 = 1;
					short_5 = short_6 + short_1;
				}
				long_2 = long_3 + long_1;
			}
			double_3 = double_5 + double_2;
		}
		if(1)
		{
			float float_9 = 1;
			float_6 = float_9;
		}
		if(1)
		{
			double_2 = double_2 + double_3;
		}
		short_5 = short_3 * short_5;
	}
	return int_5;
}
char v_get_rlen( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_2 + double_3;
		}
	}
	return char_1;
}
void v_ks_resize( float parameter_1,float parameter_2)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "&") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_2;
		double_3 = double_2 + double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
void v_mem_aln2sam( double parameter_1,float parameter_2,long parameter_3,short parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7,char parameter_8)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	float float_7 = 1;
	long long_2 = 1;
	short short_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_9 = 1;
	char char_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_6 = 1;
	char char_5 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_10 = 1;
	int int_11 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	short_1 = short_2;
	double_3 = double_1 + double_2;
	double_4 = double_3 * double_1;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	float_3 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_3;
	short_3 = short_4;
	double_2 = double_2 + double_1;
	float_1 = float_4;
	double_3 = double_3 * double_1;
	if(1)
	{
		int_1 = int_3 + int_3;
		short_4 = short_4 + short_2;
		unsigned_int_4 = unsigned_int_1;
		short_4 = short_1 + short_4;
		double_2 = double_5;
		int_1 = int_1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_6 = double_3 * double_4;
				if(1)
				{
					int_1 = int_1 + int_2;
				}
				int_3 = int_1 * int_1;
				int_2 = int_3;
			}
		}
		if(1)
		{
			int_3 = v_ksprintf(long_1,char_2,int_1);

			short_4 = short_3 * short_4;
		}
	}
	if(1)
	{
		float_1 = v_kputc(int_4,unsigned_int_3,-1 );

		char_1 = char_3;
	}
	int_4 = int_3 + int_3;
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		}
		if(1)
		{
			double_6 = double_7 + double_7;
		}
		unsigned_int_6 = unsigned_int_6;
		double_5 = double_2 + double_8;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_7 = unsigned_int_4 + unsigned_int_4;
			float_5 = float_6;
			if(1)
			{
				int_5 = int_2 + int_1;
			}
			if(1)
			{
				long_1 = long_1 * long_1;
			}
		}
		if(1)
		{
			float_3 = float_7;
		}
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	short_5 = short_2 * short_5;
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		int_2 = int_4 * int_6;
		if(1)
		{
			if(1)
			{
				v_kputw(int_7,unsigned_int_5);

				unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
			}
			if(1)
			{
				int_8 = int_1 + int_8;
			}
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_6 = float_2 + float_5;
		}
		unsigned_int_1 = v_kputsn(float_4,int_7,double_8);

		int_8 = int_1 * int_2;
		if(1)
		{
			long_1 = long_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_1 = char_2 + char_3;
			}
			double_4 = double_2 + double_3;
		}
		if(1)
		{
			int_5 = int_3 * int_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		double_4 = double_9 + double_2;
		if(1)
		{
			if(1)
			{
				short_3 = short_4 + short_5;
			}
			if(1)
			{
				char_1 = char_2 * char_2;
			}
		}
		long_3 = long_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_4 = char_1 * char_1;
		}
		double_10 = double_9 + double_2;
		if(1)
		{
			double_8 = double_3 * double_6;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double_2 = double_1 * double_1;
			}
			unsigned_int_4 = unsigned_int_4;
		}
		if(1)
		{
			long_3 = long_3;
		}
	}
	if(1)
	{
		int_3 = int_7 * int_3;
		char_4 = char_1 * char_2;
		double_11 = double_11 * double_6;
		float_2 = float_6;
	}
	if(1)
	{
		int_7 = int_5 + int_4;
		short_6 = short_6 * short_6;
	}
	if(1)
	{
		char_5 = char_4 * char_3;
		double_8 = double_7;
	}
	if(1)
	{
		int_1 = int_3 + int_3;
		short_4 = short_4;
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				double_12 = double_8 * double_3;
			}
		}
		if(1)
		{
			short_5 = short_2;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				int int_9 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double_10 = double_3 * double_6;
				int_9 = int_9;
				if(1)
				{
					v_ks_resize(float_7,float_7);

					unsigned_int_6 = unsigned_int_2 + unsigned_int_6;
				}
				double_2 = double_10 + double_8;
				unsigned_int_1 = unsigned_int_7 * unsigned_int_6;
				double_9 = double_8 + double_12;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_7;
				unsigned_int_8 = unsigned_int_1 + unsigned_int_6;
				short_6 = short_2 * short_3;
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					long long_4 = 1;
					long_5 = long_4 * long_2;
					float_7 = float_3 + float_5;
				}
				unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
				int_4 = int_7;
				long_6 = long_5 + long_6;
				int_6 = int_1 + int_3;
				char_4 = char_5 * char_3;
			}
		}
		if(1)
		{
			double double_13 = 1;
			double double_14 = 1;
			double_8 = double_13 * double_14;
		}
	}
	if(1)
	{
		unsigned_int_5 = v_kputl(long_1,int_8);

		double_4 = double_3 + double_12;
		int_8 = int_6 * int_6;
	}
	if(1)
	{
		int_3 = int_3 + int_10;
		double_3 = double_11 + double_10;
	}
	if(1)
	{
		short short_7 = 1;
		unsigned int unsigned_int_9 = 1;
		int_1 = v_kputs(int_10,double_7);

		unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
		short_2 = short_7;
		short_1 = short_4;
		char_1 = v_get_rlen(int_11,unsigned_int_8);

		unsigned_int_8 = unsigned_int_9 * unsigned_int_2;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				float float_8 = 1;
				float_5 = float_6 * float_8;
			}
		}
	}
	int_4 = int_1;
}
unsigned int v_kputl( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
		int_2 = int_1;
		float_1 = v_kputc(int_1,unsigned_int_2,-1 );

		int_2 = int_1 * int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_1 * double_2;
	}
	long_1 = long_1 * long_1;
	return unsigned_int_3;
}
unsigned int v_kputsn( float parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ":(") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_1 = double_1 + double_2;
	}
	double_1 = double_1;
	char_1 = char_1 * char_1;
	short_2 = short_1 * short_1;
	return unsigned_int_3;
}
int v_kputs( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	return int_1;
	unsigned_int_1 = v_kputsn(float_1,int_2,double_1);

}
short v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return short_1;
}
char v_mem_reg2aln( long parameter_1,float parameter_2,short parameter_3,int parameter_4,double parameter_5,short parameter_6)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_1;
	if(1)
	{
		int_1 = v_mem_approx_mapq_se(float_1,int_1);

		char_1 = v_bns_depos(int_1,unsigned_int_1,int_2);

		short_2 = short_1 * short_1;
		char_2 = char_2 * char_2;
	}
	char_1 = char_1 * char_3;
	int_2 = int_1 + int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "y?") < 0)
	{
		char_3 = char_1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short_2 = v_infer_bw(int_3,int_1,int_2,int_3,int_1,int_2);

		long_1 = v_bwa_gen_cigar2(float_1,int_3,int_1,int_2,int_2,int_3,float_1,char_1,int_1,float_1,char_2,double_1,int_3,int_2,int_2,-1 );

		float_2 = float_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = float_3;
		unsigned_int_3 = unsigned_int_4;
	}
	int_3 = v_bns_pos2rid(float_3,char_2);

	short_1 = short_2;
	return char_1;
}
char v_get_pri_idx( double parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char_1 = char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NU") > 0)
	{
	}
	return char_1;
}
void v_mem_gen_alt( float parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,int parameter_5,unsigned int parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_3 = 1;
	short short_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = v_get_pri_idx(double_1,char_4,int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_1 = v_kputl(long_1,int_1);

	char_1 = char_2 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 + short_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
			if(1)
			{
				double_2 = double_3;
			}
		}
	}
	if(1)
	{
		double_1 = double_3 * double_4;
	}
	double_3 = double_2 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_5 = 1;
		char char_6 = 1;
		int int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_4 = 1;
		short short_6 = 1;
		short short_7 = 1;
		short short_8 = 1;
		short short_9 = 1;
		float float_5 = 1;
		long long_3 = 1;
		float_1 = v_kputc(int_1,unsigned_int_5,-1 );

		char_6 = char_5 + char_4;
		if(1)
		{
			double double_5 = 1;
			double_2 = double_2 + double_5;
		}
		if(1)
		{
			int_2 = int_2 * int_2;
		}
		unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_5;
		short_4 = short_2 * short_3;
		unsigned_int_7 = v_kputsn(float_2,int_1,double_3);

		char_1 = char_4 * char_4;
		int_4 = int_3 * int_2;
		short_2 = short_1 * short_4;
		char_3 = v_mem_reg2aln(long_2,float_3,short_5,int_1,double_2,short_5);

		float_4 = float_3 * float_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_8 = short_6 + short_7;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
		}
		short_9 = short_8 + short_9;
		int_1 = v_kputs(int_4,double_6);

		float_5 = float_4 + float_1;
		short_7 = short_3 * short_6;
		float_1 = float_3;
		long_3 = long_3;
	}
	unsigned_int_1 = unsigned_int_8 + unsigned_int_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_4 * int_4;
	}
	double_3 = double_1 * double_4;
	v_kputw(int_4,unsigned_int_6);

	int_4 = int_5 + int_4;
	int_5 = int_1;
	double_6 = double_6 * double_4;
}
void v_mem_reg2sam( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5,int parameter_6,double parameter_7)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	short short_4 = 1;
	char_1 = v_mem_reg2aln(long_1,float_1,short_1,int_1,double_1,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 + int_1;
	long_2 = long_1 * long_1;
	double_2 = double_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		int int_5 = 1;
		int int_7 = 1;
		float_2 = float_2;
		int_3 = int_5 * int_4;
		if(1)
		{
			int_6 = int_1;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_2 = short_2 * short_3;
		}
		if(1)
		{
			long_3 = long_1 + long_1;
		}
		int_5 = int_7 * int_5;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		v_mem_gen_alt(float_1,unsigned_int_3,double_2,double_3,int_1,unsigned_int_5);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		double_4 = double_3 + double_3;
		long_1 = long_3 * long_1;
		if(1)
		{
			double_2 = double_3 * double_4;
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "t") < 0)
		{
			long_1 = long_4 + long_3;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 * float_3;
		}
		long_2 = long_5 + long_4;
		int_7 = int_7;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_3 = int_1;
		}
		if(1)
		{
			double_4 = double_5 * double_5;
		}
	}
	if(1)
	{
		int int_8 = 1;
		char_1 = v_kvec_t(int_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		long_6 = long_2 + long_3;
		double_1 = double_2 + double_5;
		int_8 = int_2 * int_1;
	}
	if(1)
	{
		double double_6 = 1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_1 = double_6 + double_6;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long_4 = long_5 * long_3;
		}
		double_6 = double_3 * double_4;
	}
	long_8 = long_7 * long_1;
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double double_7 = 1;
			double double_8 = 1;
			double_8 = double_7 + double_8;
		}
		v_mem_aln2sam(double_1,float_1,long_5,short_4,int_6,unsigned_int_1,int_3,char_1);

		long_7 = long_6;
	}
}
int v_mem_approx_mapq_se( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 * short_2;
		short_1 = short_2 + short_1;
		int_3 = int_3 + int_1;
		int_4 = int_1 + int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_2;
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_2;
	}
	char_4 = char_2 * char_3;
	return int_3;
}
float v_hash_64( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_1 + double_2;
	float_3 = float_1 * float_2;
	char_1 = char_1 + char_1;
	long_2 = long_1 * long_1;
	return float_2;
}
int v_mem_mark_primary_se( char parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_1;
		if(1)
		{
			short_3 = short_2 * short_1;
		}
	}
	double_2 = double_1 * double_1;
	char_3 = char_1 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_4 = 1;
		short_1 = short_3 + short_4;
		long_3 = long_2 * long_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_2;
		if(1)
		{
			int_1 = int_2 + int_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float_2 = float_1;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				int_1 = int_1;
				if(1)
				{
					long_3 = long_3 + long_1;
				}
			}
			char controller_8[2];
			fgets(controller_8 ,2 ,stdin);
			if( strcmp( controller_8, "(") < 0)
			{
				double double_3 = 1;
				double_3 = double_1;
			}
		}
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				float_2 = v_hash_64(double_1);

				int_1 = int_3 + int_1;
			}
			float_2 = float_2 * float_1;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_4 = 1;
			int_4 = int_4 + int_3;
		}
	}
	char_2 = char_3;
	return int_2;
}
int v_mem_sam_pe( unsigned int parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6,int parameter_7,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	short short_3 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_2;
	double_3 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 + short_2;
	float_3 = float_1 + float_2;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	float_1 = float_2;
	int_1 = int_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double_3 = double_2;
		double_3 = double_2 * double_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double_3 = double_4 * double_4;
				}
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int_5 = int_3 * int_4;
			}
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	float_1 = float_4 + float_4;
	if(1)
	{
		int_6 = int_4 + int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_9 = 1;
		double_5 = double_1;
		int_2 = int_3 * int_2;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
				}
			}
			int_5 = int_4 * int_5;
		}
		if(1)
		{
			double_2 = double_1 + double_3;
		}
		double_4 = double_5 + double_2;
		float_2 = float_1 * float_2;
		float_5 = float_5 * float_6;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
		}
		unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			int_2 = int_2;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_8;
			float_6 = float_1 * float_6;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					int_7 = int_1 + int_1;
				}
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			}
			short_3 = short_3 * short_3;
			unsigned_int_8 = unsigned_int_6 + unsigned_int_4;
			short_3 = short_1 + short_3;
			double_1 = double_4 + double_3;
			unsigned_int_4 = unsigned_int_6;
		}
		if(1)
		{
			long_2 = long_1 * long_1;
			float_6 = float_7 * float_5;
			double_4 = double_1 + double_3;
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_1 = unsigned_int_9 + unsigned_int_3;
			if(1)
			{
				short short_4 = 1;
				int_2 = int_2 * int_3;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
					}
				}
				short_4 = short_1;
			}
		}
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				float float_8 = 1;
				float_7 = float_8 + float_8;
			}
		}
		if(1)
		{
			int_7 = int_3 + int_4;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			unsigned_int_1 = unsigned_int_10 + unsigned_int_11;
			int_4 = int_2 * int_4;
			int_6 = int_6 * int_7;
			unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
			char_1 = char_1 + char_1;
			if(1)
			{
				long long_4 = 1;
				long_1 = long_3;
				if(1)
				{
					long_1 = long_3;
				}
				long_4 = long_2 * long_1;
				int_4 = int_3 * int_7;
				int_1 = int_3 + int_5;
				double_3 = double_4 + double_2;
			}
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			int_1 = int_4 * int_7;
		}
		int_4 = int_7 * int_5;
		double_3 = double_3 * double_2;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			long long_5 = 1;
			long_5 = long_2 + long_3;
		}
		float_5 = float_9 * float_6;
		if(1)
		{
			unsigned_int_7 = unsigned_int_4 + unsigned_int_7;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			double double_6 = 1;
			unsigned_int_8 = unsigned_int_12;
			double_6 = double_1 + double_5;
			if(1)
			{
				int_4 = int_2 * int_3;
			}
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				short_2 = short_1 + short_1;
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
	}
	if(1)
	{
		short_3 = short_2;
	}
	for(int looper_16=0; looper_16<1;looper_16++)
	{
		double_1 = double_3 * double_3;
		if(1)
		{
			if(1)
			{
				float_5 = float_1 + float_7;
			}
			if(1)
			{
				unsigned_int_10 = unsigned_int_9;
			}
		}
		if(1)
		{
			double_1 = double_1 * double_7;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_7;
		}
	}
	if(1)
	{
		float float_10 = 1;
		float_5 = float_10 * float_6;
		int_7 = int_1;
		char_1 = char_1;
		if(1)
		{
			int_1 = int_7;
		}
	}
	double_7 = double_5 * double_2;
	unsigned_int_1 = unsigned_int_12 * unsigned_int_4;
	if(1)
	{
		char_1 = char_1;
	}
	int_5 = int_2 * int_6;
	unsigned_int_2 = unsigned_int_10 * unsigned_int_11;
	double_7 = double_5 * double_3;
}
long v_worker2(int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1733[3];
	fgets(controller4vul_1733 ,3 ,stdin);
	if( strcmp( controller4vul_1733, "mT") > 0)
	{
		char controller4vul_1734[2];
		fgets(controller4vul_1734 ,2 ,stdin);
		if( strcmp( controller4vul_1734, ")") > 0)
		{
			int_2 = v_mem_sam_pe(unsigned_int_3,char_1,int_1,unsigned_int_2,int_2,double_1,int_2,uni_para);

			double_1 = double_2 + double_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		if(1)
		{
			int_3 = int_2;
		}
		int_2 = int_3 + int_1;
		short_2 = short_1 + short_1;
		double_3 = double_1 + double_2;
	}
	return long_1;
}
void v_filterCompetingAln( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 * short_2;
			double_1 = double_1 * double_2;
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			double double_3 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			int_3 = int_2 + int_1;
			long_2 = long_1 + long_2;
			double_2 = double_2 * double_3;
		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_1 = long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long long_3 = 1;
			long long_4 = 1;
			unsigned_int_6 = unsigned_int_2;
			long_4 = long_3 + long_1;
		}
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
}
char v_mem_infer_dir( short parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 * int_2;
	int_4 = int_1;
	short_1 = short_1;
	long_1 = long_1 + long_1;
	return char_1;
}
short v_cal_sub( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3;
			}
		}
	}
	unsigned_int_2 = unsigned_int_2;
	return short_1;
}
void v_mem_pestat( unsigned int parameter_1,float parameter_2,int parameter_3,long parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char_1 = v_kvec_t(int_1);

	short_1 = v_cal_sub(double_1,short_2);

	int_2 = int_1;
	char_2 = v_mem_infer_dir(short_3,unsigned_int_1,float_1,unsigned_int_1);

	v_ks_introsort_64(double_2,float_2);

}
int v_mem_test_and_remove_exact( float parameter_1,int parameter_2,short parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	return int_1;
}
float v_kputc( int parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char * vul_var;
	char controller4vul_1745[3];
	fgets(controller4vul_1745 ,3 ,stdin);
	if( strcmp( controller4vul_1745, "z_") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 273)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		int_2 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 * float_2;
	}
	double_2 = double_1 * double_1;
	int_3 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_1;
}
void v_kputw( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double_1 = double_2;
		int_3 = int_1 + int_1;
		float_1 = v_kputc(int_2,unsigned_int_1,-1 );

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
}
long v_push_cigar( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	long long_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		if(1)
		{
			double double_2 = 1;
			short short_1 = 1;
			double_2 = double_1 * double_1;
			short_1 = short_1;
		}
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	return long_4;
}
int v_ksw_global2( int parameter_1,long parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,char parameter_13)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	return int_1;
	long_1 = v_push_cigar(int_2,int_3,int_4,int_2,int_3);

}
long v_bwa_gen_cigar2( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,char parameter_8,int parameter_9,float parameter_10,char parameter_11,double parameter_12,int parameter_13,int parameter_14,int parameter_15,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_1 * int_2;
	int_2 = int_3 + int_1;
	int_5 = int_3 * int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_2 = double_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_5 = int_4 + int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_6;
			double_1 = double_4 + double_3;
			int_5 = int_1 * int_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float_1 = float_1 * float_1;
		}
	}
	if(1)
	{
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		float_1 = float_1 + float_1;
		double_3 = double_3 * double_2;
		int_6 = int_5 * int_4;
		char_2 = char_2 + char_2;
		unsigned_int_2 = unsigned_int_5;
		long_1 = long_2 * long_3;
		double_1 = double_2 * double_3;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double double_6 = 1;
			unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
			unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_1 = double_2 + double_5;
			}
			double_6 = double_3 * double_2;
			double_8 = double_6 + double_7;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				long_1 = long_4 + long_1;
			}
			float_3 = float_1 * float_2;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	char controller4vul_1742[3];
	fgets(controller4vul_1742 ,3 ,stdin);
	if( strcmp( controller4vul_1742, "p4") > 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		int int_7 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char_4 = char_3 + char_1;
		float_4 = float_3 + float_3;
		int_7 = int_5 * int_1;
		double_2 = double_7 * double_1;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_8 = 1;
			short_2 = short_1 * short_2;
			unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_8;
			char controller4vul_1743[3];
			fgets(controller4vul_1743 ,3 ,stdin);
			if( strcmp( controller4vul_1743, " 3") < 0)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					char controller4vul_1744[2];
					fgets(controller4vul_1744 ,2 ,stdin);
					if( strcmp( controller4vul_1744, "q") < 0)
					{
						int int_9 = 1;
						long long_5 = 1;
						float_2 = v_kputc(int_1,unsigned_int_8,uni_para);

						int_8 = int_1;
						int_7 = int_1 + int_7;
						int_9 = int_1;
						long_3 = long_5 + long_2;
					}
					if(1)
					{
						long_3 = long_4 + long_1;
					}
				}
				double_2 = double_3;
				unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
			}
			if(1)
			{
				if(1)
				{
					short_3 = short_2 * short_1;
					double_8 = double_5 * double_4;
					for(int looper_8=0; looper_8<1;looper_8++)
					{
						unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
					}
					int_2 = int_8 * int_6;
					int_1 = int_6 * int_4;
				}
				unsigned_int_2 = unsigned_int_4;
			}
			if(1)
			{
				int_2 = int_4 + int_5;
			}
		}
		short_4 = short_2 + short_3;
		short_1 = short_4 + short_2;
		short_3 = short_4;
		short_1 = short_2 * short_5;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "}") < 0)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			unsigned_int_4 = unsigned_int_8;
		}
	}
	double_5 = double_3 + double_1;
	return long_3;
}
int v_mem_patch_reg( unsigned int parameter_1,double parameter_2,char parameter_3,double parameter_4,int parameter_5,short parameter_6,int parameter_7,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_5 = 1;
	char char_2 = 1;
	long long_4 = 1;
	char char_3 = 1;
	long long_5 = 1;
	int_1 = int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_3 + double_1;
	int_1 = int_2 * int_2;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	char controller4vul_1740[3];
	fgets(controller4vul_1740 ,3 ,stdin);
	if( strcmp( controller4vul_1740, "G_") > 0)
	{
		char controller4vul_1741[2];
		fgets(controller4vul_1741 ,2 ,stdin);
		if( strcmp( controller4vul_1741, "9") < 0)
		{
			long_3 = v_bwa_gen_cigar2(float_1,int_2,int_2,int_3,int_3,int_4,float_2,char_1,int_5,float_2,char_2,double_2,int_5,int_1,int_4,uni_para);

		}
	}
	if(1)
	{
	}
	int_3 = int_3 + int_1;
	double_2 = double_2 + double_2;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 * float_1;
	}
	long_4 = long_2;
	char_3 = char_2;
	long_5 = long_4 + long_3;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_4 + double_1;
	}
	if(1)
	{
	}
	long_1 = long_1 + long_5;
	return int_2;
}
int v_mem_sort_dedup_patch( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5,char parameter_6,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_5 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	char char_6 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1 * float_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			char_1 = char_1 + char_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_3 = 1;
			short short_3 = 1;
			double double_1 = 1;
			char char_4 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_1 * int_1;
			char_1 = char_3 + char_1;
			short_2 = short_2 * short_3;
			if(1)
			{
				int_2 = int_2;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			double_2 = double_1 + double_2;
			char_4 = char_4 * char_2;
			short_3 = short_3;
			char controller4vul_1738[3];
			fgets(controller4vul_1738 ,3 ,stdin);
			if( strcmp( controller4vul_1738, "9:") < 0)
			{
				char controller4vul_1739[2];
				fgets(controller4vul_1739 ,2 ,stdin);
				if( strcmp( controller4vul_1739, "n") < 0)
				{
					int_2 = v_mem_patch_reg(unsigned_int_1,double_2,char_5,double_2,int_1,short_4,int_1,uni_para);

					int_1 = int_2 * int_3;
					unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_1;
				}
			}
			if(1)
			{
				int int_4 = 1;
				short short_5 = 1;
				int_3 = int_4;
				int_1 = int_4 + int_4;
				double_1 = double_2;
				short_5 = short_1 + short_1;
				float_3 = float_2 * float_2;
				double_3 = double_1 + double_1;
				char_6 = char_1;
				unsigned_int_3 = unsigned_int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_2 = 1;
		if(1)
		{
			if(1)
			{
				double_3 = double_4;
			}
			if(1)
			{
				float_3 = float_1 * float_2;
			}
		}
		long_3 = long_1 * long_2;
	}
	long_3 = long_1 + long_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			double_3 = double_4 * double_2;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			if(1)
			{
				long long_4 = 1;
				long_1 = long_4 * long_3;
			}
			if(1)
			{
				char_1 = char_6 * char_1;
			}
		}
	}
	return int_2;
}
int v_ksw_extend2( int parameter_1,short parameter_2,int parameter_3,char parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_9 = 1;
	float float_2 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short_1 = short_2;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_1;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_1 * int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_2 = short_2 * short_3;
		}
	}
	int_5 = int_5 + int_6;
	int_2 = int_4 * int_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_4 = int_3;
	}
	short_2 = short_3;
	short_1 = short_1 + short_3;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4;
	long_1 = long_3;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
	int_5 = int_5;
	short_4 = short_1 + short_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_1 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_7 = 1;
		double double_3 = 1;
		int int_10 = 1;
		int int_11 = 1;
		long long_4 = 1;
		int int_12 = 1;
		short short_7 = 1;
		double_1 = double_1 + double_2;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			int_4 = int_7 * int_3;
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 * short_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3;
			}
		}
		if(1)
		{
			double_1 = double_1 * double_3;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_8 = 1;
			double double_5 = 1;
			short short_6 = 1;
			int_5 = int_2;
			char_2 = char_1 + char_1;
			short_1 = short_3;
			int_1 = int_4 * int_7;
			double_2 = double_4 * double_2;
			short_1 = short_3;
			int_8 = int_4 * int_5;
			float_1 = float_1 * float_1;
			int_9 = int_9 * int_6;
			short_2 = short_2;
			int_9 = int_10 * int_11;
			double_5 = double_1 * double_2;
			short_6 = short_6 * short_4;
			int_2 = int_11 * int_4;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			long_3 = long_2 * long_3;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
			char_1 = char_1;
		}
		float_2 = float_2;
		long_1 = long_4 * long_5;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_2;
			int_12 = int_4;
		}
		if(1)
		{
			double_1 = double_3 * double_2;
		}
		if(1)
		{
			float float_3 = 1;
			double_3 = double_2 * double_2;
			float_4 = float_3 * float_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int_12 = int_3 * int_5;
				}
			}
			if(1)
			{
				if(1)
				{
					long_1 = long_4;
				}
			}
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double double_6 = 1;
			double_7 = double_2 + double_6;
		}
		unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int_11 = int_7 + int_10;
		}
		short_3 = short_7 * short_4;
	}
	float_4 = float_2 * float_1;
	double_2 = double_8 + double_7;
	if(1)
	{
		long_2 = long_5;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
		double_4 = double_2;
	}
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	}
	return int_9;
}
void v_ks_introsort_64( double parameter_1,float parameter_2)
{
}
double v_cal_max_gap( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	int_1 = int_1 * int_1;
	return double_1;
}
void v_mem_chain2aln( char parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5,double parameter_6,double parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_2 = 1;
	int int_9 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_12 = 1;
	unsigned int unsigned_int_11 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	char_3 = char_1 + char_2;
	int_1 = v_ksw_extend2(int_1,short_1,int_1,char_3,int_2,float_1,int_2,int_2,int_1,int_3,int_4,int_3,int_5,int_3,int_5,int_3,int_3,int_6,int_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_1 + short_2;
		short_4 = short_2 + short_3;
		unsigned_int_2 = unsigned_int_3;
		int_8 = int_7 * int_2;
		short_5 = short_1 + short_2;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		}
	}
	long_4 = long_1 + long_3;
	float_3 = float_2 * float_1;
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float_5 = float_4 * float_1;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
	}
	char_4 = char_4 + char_5;
	int_3 = v_bns_fetch_seq(double_2,unsigned_int_2,int_5,int_9,char_3,int_1);

	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	short_2 = short_5 * short_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_1 * long_5;
	}
	int_2 = int_4 * int_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_3 = 1;
		short short_6 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_6 = 1;
		long long_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_7 = 1;
		int int_10 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_7 = 1;
		char char_6 = 1;
		double double_6 = 1;
		int int_11 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_12 = 1;
		float_5 = float_1 * float_5;
		int_3 = int_4 + int_8;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_4 = v_err_printf(short_4,int_7);

			double_3 = double_3 + double_2;
			short_6 = short_2;
			long_3 = long_2 * long_4;
			if(1)
			{
				int_8 = int_7;
			}
			if(1)
			{
				float_5 = float_5 * float_5;
			}
			float_1 = float_5 * float_6;
			int_4 = int_4 * int_4;
			unsigned_int_7 = unsigned_int_2 + unsigned_int_1;
			double_1 = double_4 + double_4;
			if(1)
			{
				char_3 = char_3 + char_1;
			}
			unsigned_int_4 = unsigned_int_7 * unsigned_int_4;
			long_6 = long_6 + long_6;
			short_6 = short_3;
			unsigned_int_1 = unsigned_int_3;
			if(1)
			{
				long_7 = long_7 + long_6;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_6 = unsigned_int_8 + unsigned_int_8;
				if(1)
				{
					short_7 = short_7 * short_6;
				}
				unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
				if(1)
				{
					double_2 = double_1 + double_5;
				}
				if(1)
				{
					int_3 = int_9 + int_10;
				}
				if(1)
				{
					short_3 = short_4 + short_7;
				}
			}
			if(1)
			{
				int_10 = int_7;
				short_7 = short_5 * short_3;
			}
			if(1)
			{
				int_3 = int_5;
			}
		}
		unsigned_int_7 = unsigned_int_5 + unsigned_int_8;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
		unsigned_int_2 = unsigned_int_9 + unsigned_int_8;
		unsigned_int_9 = unsigned_int_6 * unsigned_int_1;
		float_7 = float_7 * float_3;
		if(1)
		{
			char_6 = char_3;
		}
		if(1)
		{
			long long_8 = 1;
			long long_9 = 1;
			long_2 = long_4;
			long_9 = long_8 * long_7;
			double_2 = double_2 * double_3;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				float_5 = float_2 * float_1;
			}
			double_5 = v_cal_max_gap(double_1,int_1);

			v_ks_introsort_64(double_4,float_5);

			long_6 = long_6;
			long_6 = long_5 * long_8;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double_2 = double_1;
			}
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				int_8 = int_5 + int_9;
				double_1 = double_6 + double_5;
				if(1)
				{
					int_5 = int_3 + int_10;
					int_6 = int_10 * int_8;
					for(int looper_9=0; looper_9<1;looper_9++)
					{
						int_10 = int_10 * int_6;
					}
					int_8 = int_9 + int_5;
					short_5 = short_5;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						float_2 = float_2 + float_5;
					}
					unsigned_int_7 = unsigned_int_2;
				}
				unsigned_int_7 = unsigned_int_8 * unsigned_int_9;
				if(1)
				{
					char char_7 = 1;
					float_1 = float_2 * float_7;
					char_6 = char_5 * char_7;
				}
				if(1)
				{
					short_3 = short_5 + short_2;
				}
			}
			if(1)
			{
				int_1 = int_6 + int_3;
				int_5 = int_10 + int_11;
			}
			if(1)
			{
				float_2 = float_2 * float_7;
				int_9 = int_5 + int_11;
			}
			unsigned_int_3 = unsigned_int_7 * unsigned_int_10;
			long_4 = long_8 * long_2;
		}
		if(1)
		{
			double_4 = double_7;
		}
		if(1)
		{
			double double_8 = 1;
			char_3 = char_5 * char_5;
			int_3 = int_7 + int_4;
			unsigned_int_9 = unsigned_int_5 + unsigned_int_5;
			short_5 = short_7;
			for(int looper_11=0; looper_11<1;looper_11++)
			{
				double_7 = double_5;
				double_8 = double_5 + double_8;
				if(1)
				{
					int_1 = int_7;
					double_7 = double_1;
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						int_5 = int_11;
					}
					unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
					double_7 = double_1;
					for(int looper_13=0; looper_13<1;looper_13++)
					{
						char_4 = char_6;
					}
					unsigned_int_5 = unsigned_int_10;
				}
				unsigned_int_8 = unsigned_int_10;
				if(1)
				{
					float_2 = float_6 + float_2;
					int_7 = int_3 + int_2;
				}
				if(1)
				{
					float_3 = float_6;
				}
			}
			if(1)
			{
				double_1 = double_6;
				unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
			}
			if(1)
			{
				double_1 = double_3 * double_8;
				float_1 = float_1;
			}
		}
		if(1)
		{
			int_2 = int_12;
		}
		if(1)
		{
			unsigned_int_11 = unsigned_int_11 * unsigned_int_7;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			int_2 = int_4 * int_10;
			if(1)
			{
				int_3 = int_3 * int_4;
			}
		}
		unsigned_int_11 = unsigned_int_12 + unsigned_int_9;
		double_5 = double_6;
		short_5 = short_4 * short_4;
	}
	unsigned_int_11 = unsigned_int_10 + unsigned_int_5;
	int_12 = int_8 * int_12;
}
int v_err_printf( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	v__err_fatal_simple(unsigned_int_1,long_1);

	double_3 = double_2 * double_4;
	double_4 = double_5 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1x") < 0)
	{
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	return int_1;
}
void v_mem_print_chain( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = v_err_printf(short_1,int_1);

		unsigned_int_2 = unsigned_int_1;
		char_1 = char_1 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			short short_2 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char_1 = char_2 + char_2;
			int_1 = v_mem_chain_weight(char_3);

			short_1 = short_1 * short_2;
			char_4 = v_bns_depos(int_1,unsigned_int_3,int_1);

			int_1 = int_1 * int_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_1 = long_2;
			}
			double_2 = double_1 * double_1;
		}
		float_3 = float_1 + float_2;
	}
}
long v_revseq( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return long_1;
}
unsigned int v_ksw_u8( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
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
	return unsigned_int_1;
}
unsigned int v_ksw_i16( unsigned int parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
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
			float float_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int_2 = int_1 * int_2;
			float_1 = float_3 * float_2;
			short_3 = short_1 * short_2;
		}
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
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
	float_2 = float_4 + float_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	return unsigned_int_1;
}
void v_ksw_qinit( int parameter_1,int parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 + char_2;
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	char_4 = char_3 + char_1;
	char_2 = char_4 + char_1;
	float_1 = float_2 + float_2;
	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_3 = float_1 * float_1;
	short_3 = short_3 + short_3;
	double_5 = double_3 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
	}
	int_2 = int_1 + int_1;
	double_4 = double_3 * double_4;
	float_1 = float_3 * float_4;
	if(1)
	{
		double_3 = double_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
			double_2 = double_1 * double_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_4 = double_2 * double_2;
				}
			}
		}
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "L ") < 0)
	{
		long long_3 = 1;
		long_1 = long_3 + long_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char char_5 = 1;
			char_2 = char_3 * char_5;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					int int_3 = 1;
					int_3 = int_1 * int_2;
				}
			}
		}
	}
}
double v_ksw_align2( int parameter_1,double parameter_2,int parameter_3,char parameter_4,int parameter_5,double parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,float parameter_12)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	double double_2 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = v_revseq(int_1,unsigned_int_1);

	short_2 = short_1 + short_1;
	v_ksw_qinit(int_2,int_1,float_1,int_2,float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 + double_1;
	int_1 = int_3 + int_1;
	int_4 = int_1 + int_2;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	short_3 = short_2 * short_3;
	unsigned_int_1 = v_ksw_i16(unsigned_int_1,int_4,short_3,int_4,int_5,int_2,int_6,int_7);

	long_3 = long_2 * long_3;
	unsigned_int_4 = v_ksw_u8(long_4,int_7,int_6,int_2,int_1,int_5,int_3,int_4);

	long_5 = long_3 + long_5;
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_5;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if(remainder_check(controller_3,100,1))
	{
	}
	float_3 = float_1 + float_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_7 = int_4;
	double_2 = double_1 * double_2;
	float_5 = float_6 + float_7;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_2;
	if(1)
	{
		float_2 = float_5 * float_7;
	}
	return double_1;
}
long v_bns_get_seq( float parameter_1,short parameter_2,int parameter_3,char parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "Q") > 0)
	{
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		long_1 = long_2;
		float_1 = float_1 + float_2;
		char_1 = char_1;
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "@") > 0)
		{
			long_2 = long_1 + long_3;
			double_3 = double_2 + double_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_4 = 1;
				double double_5 = 1;
				double_5 = double_4 + double_1;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return long_3;
}
int v_bns_fetch_seq( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5,int parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short_3 = short_1 * short_2;
	float_1 = float_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		float_2 = float_1 * float_3;
	}
	double_2 = double_1 * double_2;
	double_4 = double_3 + double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = v_bns_get_seq(float_3,short_2,int_1,char_1,double_1);

	char_3 = char_2 * char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_2 = long_3;
		int_1 = int_2 * int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	int_3 = v_bns_pos2rid(float_3,char_1);

	long_4 = long_4 + long_2;
	char_2 = v_bns_depos(int_1,unsigned_int_2,int_2);

	float_1 = float_1 * float_4;
	int_2 = int_4 * int_3;
	if(1)
	{
		long_3 = long_3;
	}
	unsigned_int_4 = unsigned_int_1;
	return int_2;
}
int v_mem_seed_sw( float parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5,float parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	long_4 = long_4;
	double_1 = double_1;
	char_2 = char_1 + char_1;
	double_2 = double_2 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1;
	float_3 = float_2 + float_2;
	int_1 = v_bns_fetch_seq(double_3,unsigned_int_7,int_2,int_3,char_2,int_4);

	int_2 = int_5 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_7;
	if(1)
	{
		if(1)
		{
			long_4 = long_1 * long_4;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "bC") < 0)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_3 = unsigned_int_8 * unsigned_int_3;
		}
	}
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	double_2 = v_ksw_align2(int_4,double_2,int_1,char_1,int_4,double_1,int_2,int_5,int_3,int_5,int_6,float_1);

	char_3 = char_1 + char_1;
	int_1 = int_3 * int_4;
	return int_1;
}
void v_mem_flt_chained_seeds( long parameter_1,short parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6,short parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int_1 = v_mem_seed_sw(float_1,long_1,float_2,int_2,double_1,float_3);

			double_2 = double_2 + double_1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			if(1)
			{
				short_1 = short_1;
				float_1 = float_1;
			}
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
}
int v_mem_chain_weight( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		double_3 = double_1 * double_2;
	}
	double_4 = double_3 + double_3;
	int_1 = int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_5 = double_1 * double_4;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		}
		char_3 = char_2 + char_1;
	}
	short_1 = short_2;
	float_3 = float_3 + float_3;
	return int_3;
}
int v_mem_chain_flt( double parameter_1,int parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 + float_2;
		float_2 = float_3 + float_2;
		short_1 = short_1 * short_1;
		float_2 = float_1 * float_3;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	short_3 = short_2 * short_1;
	double_2 = double_2 * double_1;
	double_4 = double_3 + double_4;
	short_2 = short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		float_1 = float_2 * float_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_3 = 1;
			long long_4 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			short_1 = short_1;
			long_4 = long_3 + long_2;
			if(1)
			{
				long_2 = long_2 * long_3;
				int_2 = v_mem_chain_weight(char_1);

				long_3 = long_2 + long_4;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_3;
					if(1)
					{
						int_2 = int_3 * int_1;
					}
					if(1)
					{
						char_1 = char_1 + char_1;
					}
				}
			}
		}
		if(1)
		{
			int_3 = int_1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char_1 = v_kvec_t(int_3);

		double_2 = double_3 * double_3;
		if(1)
		{
			double_4 = double_4 * double_3;
		}
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			float float_4 = 1;
			float_3 = float_4;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 + int_1;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double_2 = double_1 + double_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
	}
	return int_1;
}
double v_smem_aux_destroy( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short_2 = short_1 + short_2;
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_2;
	float_1 = float_2 + float_3;
	float_4 = float_4 + float_2;
	short_3 = short_3;
	float_6 = float_5 * float_2;
	return double_2;
}
long v_test_and_merge( double parameter_1,float parameter_2,int parameter_3,short parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	int_3 = int_1 + int_3;
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
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_1;
			long_1 = long_1 + long_1;
		}
		long_1 = long_1;
	}
	return long_2;
}
char v_bns_depos( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	return char_1;
}
int v_bns_pos2rid( float parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	short_2 = short_1 * short_2;
	int_2 = int_1 + int_1;
	return int_3;
}
int v_bns_intv2rid( double parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	int_1 = int_1;
	int_2 = v_bns_pos2rid(float_1,char_2);

	char_2 = v_bns_depos(int_2,unsigned_int_1,int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_4 + double_3;
	return int_1;
}
char v_bwt_sa( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_bwt_invPsi(float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
int v_bwt_seed_strategy1( double parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	v_bwt_extend(double_1,long_1,char_2,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double_1 = double_1 * double_2;
			char_1 = char_2;
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double_5 = double_3 * double_4;
				float_1 = float_1 * float_2;
			}
			short_3 = short_1 + short_2;
		}
		if(1)
		{
		}
	}
	return int_1;
}
short v_bwt_reverse_intvs( char parameter_1)
{
	short short_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E2") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double_4 = double_1 * double_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			int_3 = int_1 + int_2;
		}
	}
	return short_1;
}
void v_bwt_2occ4( int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_2;
	v_bwt_occ4(double_1,int_1,long_1);

}
void v_bwt_extend( double parameter_1,long parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	v_bwt_2occ4(int_1,int_1,double_1,unsigned_int_1,float_1);

	long_1 = long_1 + long_2;
	int_1 = int_2;
	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_2 = char_1 * char_1;
		double_4 = double_3 + double_3;
	}
	short_1 = short_1 + short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
}
int v_bwt_smem1a( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,char parameter_7,int parameter_8)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	short short_1 = 1;
	char char_4 = 1;
	float float_6 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_8 = 1;
	char char_5 = 1;
	v_bwt_extend(double_1,long_1,char_1,int_1);

	int_2 = int_1 * int_1;
	int_1 = int_1;
	int_3 = int_2 * int_2;
	char_3 = char_2 * char_3;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	long_2 = long_1 * long_2;
	float_3 = float_1 + float_2;
	long_3 = long_2 + long_1;
	char_1 = char_2 + char_3;
	int_4 = int_2;
	float_4 = float_4 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_2 = int_1 * int_2;
			int_1 = int_4 + int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			long_2 = long_1 * long_3;
			if(1)
			{
				float float_5 = 1;
				short_1 = v_bwt_reverse_intvs(char_4);

				float_6 = float_3 * float_5;
				if(1)
				{
					int_1 = int_3 * int_2;
				}
			}
			double_4 = double_3 + double_4;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3;
			double_2 = double_2 * double_2;
		}
	}
	if(1)
	{
		float_6 = float_3 * float_3;
	}
	double_2 = double_4 * double_1;
	int_2 = int_4 * int_3;
	short_2 = short_2 * short_2;
	short_3 = short_4;
	char_4 = char_3 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_9 = 1;
		short_5 = short_2 * short_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char_3 = char_4 * char_2;
			if(1)
			{
				int_1 = int_1 + int_1;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int int_5 = 1;
						float float_7 = 1;
						int_6 = int_2 * int_5;
						int_8 = int_1 + int_7;
						float_1 = float_7;
					}
				}
			}
			if(1)
			{
				short_1 = short_2 * short_2;
				int_8 = int_7 * int_1;
			}
		}
		if(1)
		{
			int_7 = int_1;
		}
		int_6 = int_4 + int_4;
		short_5 = short_5 * short_5;
		int_9 = int_8 * int_9;
	}
	char_1 = char_5 + char_4;
	if(1)
	{
		float_4 = float_1;
	}
	if(1)
	{
		short_2 = short_4;
	}
	return int_8;
}
int v_bwt_smem1( short parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	return int_1;
	int_1 = v_bwt_smem1a(int_1,int_1,int_2,int_2,int_1,float_1,char_1,int_1);

}
float v_mem_collect_intv( double parameter_1,char parameter_2,int parameter_3,float parameter_4,double parameter_5)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	int int_6 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_bwt_smem1(short_1,int_2,float_1,int_2,int_1,long_1,int_3);

	unsigned_int_1 = unsigned_int_2;
	int_2 = v_bwt_seed_strategy1(double_1,int_4,short_2,int_1,int_5,int_4,long_1);

	double_1 = double_1 + double_2;
	int_3 = v_bwt_smem1a(int_4,int_4,int_2,int_2,int_6,float_2,char_1,int_5);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	return float_2;
}
int v_mem_chain( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	char char_6 = 1;
	long long_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	double_4 = double_2 * double_3;
	char_1 = v_bwt_sa(unsigned_int_2,long_1);

	double_1 = double_3 + double_3;
	double_1 = double_4 * double_4;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	short_1 = short_1 * short_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = v_smem_aux_init();

		short_1 = short_3 * short_1;
		int_2 = v_bns_intv2rid(double_3,unsigned_int_2,unsigned_int_2);

		double_5 = double_4 + double_4;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			long_2 = long_1 + long_1;
		}
	}
	double_5 = double_1 * double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_3 = 1;
		int int_4 = 1;
		int_2 = int_2 * int_2;
		int_3 = int_1;
		long_3 = long_1 + long_2;
		int_1 = int_4 * int_5;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_4 = 1;
			char char_2 = 1;
			unsigned_int_1 = unsigned_int_1;
			double_3 = v_smem_aux_destroy(int_5);

			double_4 = double_2 * double_3;
			int_4 = int_3 * int_1;
			int_1 = int_2 * int_2;
			int_1 = int_5 + int_2;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
			double_2 = double_1 * double_1;
			if(1)
			{
				long long_4 = 1;
				long_4 = long_4 + long_4;
			}
			if(1)
			{
				char_4 = char_2 * char_3;
				if(1)
				{
					int_5 = int_3;
				}
			}
			if(1)
			{
				char char_5 = 1;
				char_5 = char_1 * char_2;
			}
			if(1)
			{
				char char_7 = 1;
				long_2 = v_test_and_merge(double_4,float_2,int_3,short_1,int_2);

				char_2 = char_2 * char_3;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
				v_logMessage(char_3,int_2,char_6,long_5);

				int_3 = int_5 * int_2;
				double_3 = double_1;
				int_3 = int_1 + int_2;
				float_3 = v_mem_collect_intv(double_3,char_4,int_6,float_3,double_5);

				char_1 = char_7 + char_3;
				int_1 = int_2 + int_5;
			}
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_3 + double_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_5 = int_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_7 = 1;
		double double_8 = 1;
		double_8 = double_7 + double_4;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_10 = double_4 * double_9;
	return int_3;
}
long v_mem_align1_core( int parameter_1,float parameter_2,short parameter_3,long parameter_4,int parameter_5,char parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	int_1 = int_2;
	v_mem_print_chain(float_1,unsigned_int_1);

	char_2 = char_1 * char_1;
	int_2 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	v_mem_chain2aln(char_2,double_1,char_2,int_4,int_4,double_1,double_2);

	double_1 = double_2 * double_1;
	int_5 = int_5 + int_6;
	int_3 = v_mem_sort_dedup_patch(long_1,unsigned_int_3,unsigned_int_1,double_3,int_2,char_3,-1 );

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_2 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_7 = v_mem_chain(long_1);

		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			char_1 = char_1;
		}
		double_3 = double_3 * double_3;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	}
	int_5 = v_mem_test_and_remove_exact(float_2,int_7,short_1,int_7);

	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	int_2 = v_err_printf(short_2,int_3);

	float_4 = float_3 * float_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		v_mem_flt_chained_seeds(long_2,short_2,double_1,int_1,unsigned_int_4,int_6,short_3);

		double_4 = double_4 * double_5;
	}
	if(1)
	{
		long_1 = long_2 + long_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_1 = v_mem_chain_flt(double_2,int_8,short_2);

			int_5 = int_4 + int_4;
			unsigned_int_5 = unsigned_int_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long_2 = long_2 + long_1;
		if(1)
		{
			int_5 = int_7 * int_1;
		}
	}
	unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
	return long_3;
}
long v_worker1(int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		short_1 = short_2;
	}
	if(1)
	{
		char char_1 = 1;
		int int_4 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		char_1 = char_1 * char_2;
		if(1)
		{
			int int_3 = 1;
			long_1 = v_mem_align1_core(int_1,float_1,short_3,long_2,int_2,char_2);

			int_3 = int_1 + int_1;
		}
		int_4 = int_2 * int_2;
	}
	return long_3;
}
short v_smem_aux_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_1;
	double_1 = double_1 + double_2;
	return short_1;
}
double v_cputime()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	return double_3;
}
long v_steal_work()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2 * double_3;
		}
	}
	char_1 = char_2;
	float_1 = float_1 + float_2;
	return long_1;
}
double v_ktf_worker()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	return double_3;
	long_1 = v_steal_work();

}
void v_kt_for( int parameter_1,float parameter_2,long parameter_3,int parameter_4,long parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_1;
	char_1 = char_1;
	double_1 = double_1;
	double_2 = v_ktf_worker();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_3 = double_1 + double_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
}
void v_mem_process_seqs( float parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7,int parameter_8,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_6 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	short short_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_1 * int_1;
	char_4 = char_1 + char_3;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	double_2 = double_3;
	char_1 = char_3 + char_5;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 * double_4;
	short_1 = short_1 * short_2;
	char_4 = char_6 * char_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_2;
	float_2 = float_1 * float_2;
	char_4 = char_6 * char_5;
	unsigned_int_4 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_3 * short_4;
	}
	short_2 = short_1 + short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	float_3 = float_1 + float_3;
	char controller4vul_1731[3];
	fgets(controller4vul_1731 ,3 ,stdin);
	if( strcmp( controller4vul_1731, ",I") < 0)
	{
		char controller4vul_1732[2];
		fgets(controller4vul_1732 ,2 ,stdin);
		if( strcmp( controller4vul_1732, "R") < 0)
		{
			long_2 = v_worker2(int_1,int_2,uni_para);

			short_2 = short_4;
		}
		if(1)
		{
			char_2 = char_5 * char_1;
		}
	}
	unsigned_int_3 = unsigned_int_4;
	short_3 = short_3 * short_2;
	short_2 = short_5;
	float_4 = float_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_2 = double_2;
	}
	int_3 = int_1 + int_3;
}
char v_kvec_t( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_7 = 1;
	float float_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	short_2 = short_1 + short_2;
	short_3 = short_2 * short_3;
	int_1 = int_1;
	short_3 = short_3 * short_4;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_1;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_1;
	float_3 = float_2 + float_3;
	double_3 = double_1 * double_2;
	short_2 = short_4 * short_2;
	float_3 = float_2 + float_2;
	double_2 = double_4;
	long_3 = long_2 + long_2;
	short_3 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_1;
	short_2 = short_3 * short_3;
	char_2 = char_1 * char_1;
	long_4 = long_2 * long_1;
	double_2 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	float_3 = float_1 * float_3;
	float_4 = float_3 + float_4;
	float_6 = float_1 * float_5;
	short_4 = short_4 + short_4;
	long_2 = long_4 + long_4;
	int_1 = int_1 + int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	double_4 = double_2 + double_1;
	float_6 = float_4;
	int_3 = int_3 + int_2;
	short_6 = short_3 + short_5;
	int_3 = int_2 + int_3;
	double_1 = double_5 * double_6;
	short_2 = short_1 + short_7;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_7 * float_7;
	long_2 = long_2 * long_5;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
	double_4 = double_1 * double_7;
	float_1 = float_5 * float_4;
	double_6 = double_4 * double_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	int_2 = int_4 + int_4;
	long_4 = long_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_1 * int_3;
	int_1 = int_5 + int_3;
	int_3 = int_1 + int_6;
	unsigned_int_6 = unsigned_int_7;
	int_5 = int_4 * int_2;
	char_3 = char_3 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_7 = 1;
		char char_4 = 1;
		float_5 = float_1 * float_1;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
		int_7 = int_3;
		char_4 = char_1 * char_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
		}
	}
	return char_1;
}
void v_bseq_classify( int parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		if(1)
		{
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short_2 = short_1 * short_2;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
				char_2 = v_kvec_t(int_1);

				char_1 = char_2;
			}
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1 * double_2;
			}
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	char_2 = char_2 + char_1;
	char_1 = char_3 + char_4;
}
double v_kseq2bseq1( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char_1 = char_2;
	float_1 = float_1 + float_2;
	int_1 = int_2;
	float_3 = float_2;
	int_4 = int_2 + int_3;
	return double_1;
}
unsigned int v_trim_readno()
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	return unsigned_int_1;
}
char v_bseq_read( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = v_trim_readno();

	short_1 = short_1 + short_2;
	return char_1;
	double_1 = v_kseq2bseq1(int_1,double_3);

}
unsigned int v_process(int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_7 = 1;
	double double_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		long long_3 = 1;
		float_1 = float_1;
		double_1 = double_1 + double_2;
		int_3 = int_1 + int_4;
		long_4 = long_3 * long_2;
		if(1)
		{
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_6 = int_1 + int_5;
				int_2 = int_5 * int_3;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_1 = char_1 * char_2;
			}
		}
		double_2 = double_2 + double_1;
	}
	char controller4vul_1728[2];
	fgets(controller4vul_1728 ,2 ,stdin);
	if( strcmp( controller4vul_1728, "H") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char controller4vul_1729[2];
		fgets(controller4vul_1729 ,2 ,stdin);
		if( strcmp( controller4vul_1729, "G") > 0)
		{
			long long_5 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long_5 = long_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			short_1 = short_3 * short_2;
			double_2 = double_2 + double_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			char controller4vul_1730[2];
			fgets(controller4vul_1730 ,2 ,stdin);
			if( strcmp( controller4vul_1730, "`") < 0)
			{
				v_mem_process_seqs(float_1,short_2,float_2,int_6,int_4,int_3,short_4,int_7,uni_para);

				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				double_2 = double_3 * double_4;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					double_3 = double_4 * double_3;
				}
			}
			if(1)
			{
				int int_8 = 1;
				long_1 = long_1 + long_1;
				int_8 = int_3 * int_5;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					int_1 = int_5 + int_3;
				}
			}
			double_5 = double_2 + double_5;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
		}
		if(1)
		{
			int_4 = int_6;
		}
		double_5 = double_4 + double_1;
	}
	if(1)
	{
		int int_9 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			float float_3 = 1;
			if(1)
			{
				double_3 = double_1 + double_2;
			}
			double_5 = double_3 * double_1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_7 + int_7;
			float_3 = float_3 + float_1;
			long_4 = long_4;
		}
		char_2 = char_1 + char_1;
		int_1 = int_9 * int_3;
	}
	return unsigned_int_3;
}
void v_ktp_worker()
{
	if(1)
	{
	}
}
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	int int_3 = 1;
	char_1 = char_2;
	double_1 = double_1;
	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "q[") < 0)
	{
		char_3 = char_2;
	}
	char_1 = char_1;
	char_4 = char_2 + char_1;
	char_3 = char_2 * char_1;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	long_2 = long_2 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		v_ktp_worker();

		short_2 = short_1 * short_2;
	}
	char_4 = char_1 * char_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double_1 = double_2 * double_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	int_3 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
}
void v_bwa_print_sam_hdr( float parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 + int_1;
		int_1 = v_err_fprintf(float_1,long_1,unsigned_int_1);

		char_1 = char_1 * char_2;
		int_1 = int_2 * int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
}
double v_cmd2argv( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "g") > 0)
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
	char_1 = char_1;
	double_2 = double_2 + double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	return double_3;
}
long v_kftp_send_cmd( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = v_write_bytes(int_1,short_1,int_1);

	long_1 = long_1 * long_1;
	return long_1;
	int_2 = v_socket_wait(int_3,int_3);

	short_1 = v_kftp_get_response(int_3);

}
int v_socket_wait( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1 + long_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_3;
	}
	double_3 = double_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_3 * long_4;
	}
	return int_1;
}
short v_kftp_get_response( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = v_socket_wait(int_2,int_1);

	int_3 = int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_1;
		if(1)
		{
			long_2 = long_2 * long_3;
		}
		float_1 = float_1 * float_2;
		long_2 = long_1 + long_3;
	}
	return short_1;
}
void v_ftp_open( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	float_1 = float_1 + float_1;
	char_2 = char_1 + char_1;
	long_2 = v_socket_connect(unsigned_int_1,float_2);

	double_3 = double_1 * double_2;
	double_1 = double_2 * double_1;
	if(1)
	{
		int_2 = int_2 * int_3;
	}
	double_5 = double_2 + double_4;
	short_3 = short_1 + short_2;
	short_2 = v_kftp_get_response(int_2);

	double_6 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_4 = double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_2 * float_3;
	}
	long_2 = v_kftp_send_cmd(int_4,double_5,int_2);

	int_3 = int_3 * int_5;
	unsigned_int_1 = unsigned_int_4;
	double_1 = double_2 * double_2;
	int_1 = int_2 + int_5;
	unsigned_int_4 = unsigned_int_4;
	char_5 = char_3 * char_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_4 = float_3 * float_3;
	if(1)
	{
		int_5 = int_5;
	}
	unsigned_int_5 = unsigned_int_3;
	if(1)
	{
		short_1 = short_4 * short_3;
		double_1 = double_6 + double_5;
	}
	int_6 = int_6;
	short_4 = short_5;
	char_1 = char_1 + char_2;
	short_2 = short_3 + short_5;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
}
unsigned int v_write_bytes( int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	long_3 = long_1 + long_2;
	double_2 = double_1 + double_2;
	double_2 = double_2;
	char_1 = char_2;
	int_2 = int_1;
	double_3 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_3;
	double_4 = double_3 * double_4;
	int_3 = int_2 * int_1;
	double_4 = double_4 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_3 + char_3;
	unsigned_int_4 = unsigned_int_4;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	float_2 = float_1 * float_2;
	float_1 = float_3 + float_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
		double_2 = double_2;
	}
	if(1)
	{
		double_4 = double_4 * double_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		long long_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
		long_3 = long_4 * long_1;
	}
	float_3 = float_3 * float_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	return unsigned_int_2;
}
long v_socket_connect( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return long_1;
}
char v_http_open( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	long_1 = v_socket_connect(unsigned_int_1,float_1);

	unsigned_int_1 = v_write_bytes(int_1,short_1,int_1);

	int_2 = int_2 + int_1;
	return char_1;
}
float v_kopen( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	v_ftp_open(char_1);

	long_1 = long_1;
	char_2 = v_http_open(double_1);

	short_3 = short_1 * short_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		float_2 = float_1 * float_2;
		double_1 = v_cmd2argv(double_2);

		int_1 = int_1 + int_2;
	}
	int_1 = int_3;
	return float_3;
}
void v_compileORFHistory( long parameter_1,long parameter_2,long parameter_3,long parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	char_2 = char_1 + char_2;
	float_3 = float_2 * float_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int_3 = int_1 + int_2;
				double_3 = double_1 * double_2;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				long long_1 = 1;
				long long_2 = 1;
				unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
				long_2 = long_1 * long_1;
			}
			int_2 = int_1 * int_1;
			if(1)
			{
				char char_3 = 1;
				if(1)
				{
					int int_4 = 1;
					int int_5 = 1;
					int_5 = int_4 + int_4;
				}
				float_2 = float_2 * float_3;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				int_3 = int_3 * int_1;
				float_2 = float_3 * float_1;
				char_3 = char_2 + char_1;
			}
		}
	}
}
void v_addORFHistory( long parameter_1,long parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			char_2 = char_1 * char_1;
			double_3 = double_1;
			long_2 = long_1 * long_2;
		}
	}
	double_1 = double_2;
}
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "XR") > 0)
		{
			short short_3 = 1;
			long_1 = v_getLastAlignedPos(long_2,int_1);

			short_3 = short_3 + short_3;
		}
	}
	return long_2;
}
int v_getSequenceORF( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,float parameter_5,short parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int_1 = int_2;
	long_1 = v_getLastAlignedOrfPos(long_1,int_1,unsigned_int_1);

	char_1 = char_1 + char_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	long_2 = v_getLastAlignedPos(long_1,int_2);

	unsigned_int_3 = unsigned_int_1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		char_1 = char_1 * char_1;
		char_1 = char_1 * char_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_2 = int_3;
		short_1 = short_1 * short_3;
		int_1 = int_4;
		short_4 = short_3 * short_2;
		double_2 = double_1 + double_1;
		if(1)
		{
			int_2 = int_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			v_encodeCodon(char_2,int_4);

			v_addORFHistory(long_2,long_2,double_2);

			long_2 = long_1 * long_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			}
			int_3 = int_4 + int_4;
			if(1)
			{
				char char_4 = 1;
				if(1)
				{
					float float_3 = 1;
					for(int looper_4=0; looper_4<1;looper_4++)
					{
						if(1)
						{
							long long_4 = 1;
							long_2 = long_3 + long_1;
							long_4 = long_1 + long_1;
							float_2 = float_1 + float_2;
							int_2 = int_4 * int_1;
							int_4 = int_2 + int_2;
						}
					}
					float_2 = float_3;
				}
				v_compileORFHistory(long_3,long_3,long_5,long_2);

				char_4 = char_3 + char_2;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_4;
			}
		}
	}
	double_1 = double_2 * double_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_4 = 1;
		char_3 = char_1;
		double_4 = double_3 * double_3;
	}
	return int_2;
}
int v_writeReadsProtein( char parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	int int_7 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_8 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_3 = 1;
	int_1 = v_getSequenceORF(char_1,unsigned_int_1,int_1,int_2,float_1,short_1);

	int_4 = int_3 + int_2;
	int_6 = int_5 * int_2;
	if(1)
	{
	}
	v_logMessage(char_2,int_7,char_3,long_1);

	v_err_xopen_core(unsigned_int_2,char_1,float_2);

	char_4 = char_3 + char_4;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Wc") > 0)
	{
		int_8 = v_err_gzclose(long_2);

		int_2 = int_3 * int_7;
	}
	int_4 = v_err_fclose(double_1);

	int_5 = int_9 * int_7;
	float_1 = float_2 + float_2;
	return int_10;
	int_8 = v_convertToAA(char_4,long_3,int_9,char_4,unsigned_int_1);

}
char v_bns_restore_core( long parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	long_3 = long_1 * long_2;
	int_2 = v_err_fclose(double_1);

	v_err_fatal(long_2,char_1,char_1);

	double_2 = double_2 + double_3;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
float v_bns_restore()
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	char_1 = v_bns_restore_core(long_1,int_1,char_2);

	long_1 = long_1;
	float_2 = float_1 + float_1;
	long_3 = long_2 * long_1;
	short_3 = short_1 + short_2;
	char_4 = char_2 * char_3;
	int_3 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
			if(1)
			{
				float_2 = float_2 + float_3;
			}
			if(1)
			{
				char_4 = char_4 + char_1;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3;
			}
		}
		double_1 = double_1 + double_2;
		double_3 = double_3 * double_1;
		double_4 = double_3 * double_1;
		double_3 = double_4;
		long_3 = long_4 * long_3;
		float_3 = float_3 * float_2;
		int_3 = int_1 + int_1;
		double_5 = double_1 + double_5;
		double_3 = double_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		int_1 = int_2 * int_4;
		double_5 = double_2 * double_3;
		int_3 = int_2 * int_5;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return float_4;
}
void v_bwt_restore_sa( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	float_1 = float_1 + float_1;
	short_2 = short_1 * short_1;
	double_3 = double_2 * double_3;
	int_2 = int_1 * int_1;
	int_4 = int_2 + int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_3;
	float_2 = v_fread_fix(double_2,int_3);

	char_1 = char_2;
	long_1 = long_1 + long_1;
	char_2 = char_2 + char_1;
	v_err_fread_noeof(double_4,int_4,short_2);

	int_3 = v_err_fclose(double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	long_3 = long_2 + long_2;
}
void v_index_load_bwt( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 + char_1;
	v_logMessage(char_2,int_1,char_1,long_1);

	short_3 = short_1 + short_2;
	short_1 = short_4 * short_5;
	if(1)
	{
		int_2 = int_1;
	}
	float_1 = v_index_infer_prefix();

	int_1 = int_1 * int_2;
	v_bwt_restore_sa(short_1,double_1);

	char_3 = char_3 + char_3;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	float_2 = v_bwt_restore_bwt(double_1);

	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_4 + short_4;
}
float v_index_infer_prefix()
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	char_2 = char_1 * char_2;
	double_3 = double_2 * double_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3 * int_4;
		int_3 = int_4 * int_4;
	}
	return float_1;
}
float v_index_load_from_disk( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_3 = 1;
	int int_6 = 1;
	float float_6 = 1;
	float_1 = v_bns_restore();

	long_1 = long_1;
	float_1 = v_index_infer_prefix();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	v_logMessage(char_1,int_2,char_1,long_2);

	int_4 = int_3 + int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	v_index_load_bwt(double_1);

	int_4 = int_3 + int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		char char_3 = 1;
		double_2 = double_1;
		char_3 = char_2 * char_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				v_err_fread_noeof(double_2,int_2,short_1);

				unsigned_int_1 = unsigned_int_1;
			}
		}
		int_4 = int_1 + int_3;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_3 = 1;
			float_5 = float_3 + float_4;
			int_5 = v_err_fclose(double_3);

			unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
			short_3 = short_2 * short_1;
			long_2 = long_1 + long_3;
		}
	}
	int_5 = int_1 + int_6;
	char_1 = char_2 + char_2;
	return float_6;
}
unsigned int v_index_load( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	float_1 = v_index_load_from_disk(unsigned_int_1,int_1);

}
int v_bwa_mem2idx( long parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_1;
	float_1 = float_1 + float_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	int_4 = int_2 * int_3;
	short_2 = short_3 * short_3;
	double_1 = double_1 * double_3;
	int_4 = int_1;
	double_3 = double_4;
	double_1 = double_3 * double_4;
	char_1 = char_1 + char_2;
	short_1 = short_4 + short_3;
	double_4 = double_4 + double_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1;
	int_4 = int_3;
	char_3 = char_3 * char_4;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
		long_1 = long_1 + long_2;
		double_2 = double_2 + double_1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
	int_1 = int_3 + int_5;
	char_1 = char_1 + char_3;
	return int_6;
}
float v_index_load_from_shm( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_2 = char_1 * char_1;
	double_1 = double_1 * double_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	char_3 = char_2 * char_2;
	int_2 = int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	int_1 = int_3 * int_2;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_3 = v_bwa_mem2idx(long_1,float_1,double_2);

		char_1 = char_3;
		int_1 = int_2;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		int_5 = int_1 * int_4;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	double_4 = double_1 * double_3;
	double_3 = double_1 * double_1;
	double_4 = double_1 + double_4;
	double_3 = double_5 * double_1;
	return float_1;
}
int v_getIndexCompatible( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	short_1 = short_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1;
	}
	float_3 = float_1 * float_2;
	float_4 = float_4 + float_4;
	double_3 = double_1 + double_1;
	double_3 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_2;
}
long v_getIndexHeader( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_2 = float_1 + float_1;
	int_3 = int_1 * int_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_2 * long_1;
	}
	v_logMessage(char_1,int_4,char_2,long_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return long_1;
}
double v_update_a( char parameter_1,char parameter_2)
{
	double double_4 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			float_1 = float_1 * float_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			float float_3 = 1;
			float_2 = float_3 + float_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			double double_1 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			double_2 = double_3 + double_3;
		}
	}
	return double_4;
}
int v_renderAlignUsage( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_7 = 1;
	double double_6 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	short short_8 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	float_1 = float_2;
	double_3 = double_3 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	int_2 = int_3 * int_3;
	short_3 = short_1 + short_2;
	float_1 = float_3 + float_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_4 + short_1;
	float_1 = float_3 * float_3;
	float_1 = float_3;
	long_1 = long_1 + long_2;
	long_1 = long_2 * long_2;
	double_5 = double_2 * double_4;
	double_5 = double_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	float_4 = float_2 * float_2;
	int_4 = int_3 + int_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	short_2 = short_5;
	double_4 = double_1;
	double_5 = double_5;
	int_3 = int_4 + int_5;
	float_2 = float_2 * float_5;
	int_5 = int_3 + int_3;
	int_6 = int_6 + int_6;
	unsigned_int_3 = unsigned_int_1;
	int_2 = int_1;
	int_2 = int_7;
	int_8 = int_8 + int_5;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_6 = float_5 + float_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
	double_2 = double_4;
	int_9 = int_6 + int_8;
	char_1 = char_1 * char_2;
	short_6 = short_1 + short_1;
	char_2 = char_3 * char_2;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_4 + short_7;
	int_6 = int_7 + int_1;
	int_4 = int_4;
	double_6 = double_3;
	int_6 = int_8 * int_5;
	int_4 = int_5 * int_1;
	int_10 = int_7 * int_2;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_8;
	float_4 = float_2 * float_6;
	char_1 = char_2 + char_3;
	double_3 = double_4 + double_5;
	char_1 = char_4 + char_3;
	short_5 = short_8 + short_2;
	double_7 = double_6 * double_6;
	char_5 = char_1 + char_2;
	int_3 = int_2 + int_5;
	unsigned_int_7 = unsigned_int_9 * unsigned_int_5;
	double_8 = double_8;
	long_1 = long_2 * long_1;
	double_7 = double_9 * double_1;
	return int_7;
}
long v_bwa_insert_header( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_3 = int_1 + int_2;
		double_1 = double_2;
		int_1 = int_2 + int_2;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	v_bwa_escape(char_3);

	short_1 = short_2;
	return long_1;
}
void v_bwa_escape( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
			if(1)
			{
				short short_2 = 1;
				short_1 = short_2;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_4 = double_2 + double_3;
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 + char_2;
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 + short_1;
		}
	}
	int_3 = int_1 * int_2;
}
void v_bwa_set_rg( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_1;
		short_2 = short_1 * short_2;
	}
	int_2 = int_1 + int_2;
	double_2 = double_1;
	if(1)
	{
		short short_3 = 1;
		float_2 = float_1 * float_1;
		v_bwa_escape(char_1);

		short_3 = short_3;
	}
	v_logMessage(char_2,int_3,char_2,long_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		float_2 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_3 = double_2 + double_3;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
}
void v_renderTranslations()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	short_3 = short_1 + short_2;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_2 + int_1;
		}
	}
}
float v_convertTransArgs( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short_3 = short_1 + short_2;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		double_1 = double_1 * double_1;
		char_3 = char_3 + char_1;
	}
	int_3 = int_1 * int_2;
	int_3 = int_3 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = long_1 * long_1;
			int_1 = int_1 * int_3;
		}
	}
	char_4 = char_2;
	short_3 = short_4 + short_5;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		long_2 = long_3;
		if(1)
		{
			char_4 = char_2 + char_2;
			short_5 = short_3 * short_4;
		}
		if(1)
		{
			double double_3 = 1;
			long_1 = long_2 + long_2;
			double_2 = double_2 + double_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		v_renderTranslations();

		long_5 = long_3 + long_4;
	}
	return float_1;
}
void v_bwa_fill_scmat( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		long_2 = long_1 * long_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
unsigned int v_mem_opt_init()
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_7 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	short_5 = short_3 + short_4;
	short_6 = short_3 * short_3;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1 + long_2;
	int_3 = int_4 * int_1;
	double_1 = double_1 * double_2;
	int_3 = int_5 + int_3;
	short_4 = short_5;
	int_5 = int_3 + int_4;
	char_3 = char_1 + char_2;
	short_5 = short_7 * short_4;
	short_6 = short_3 + short_8;
	double_1 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	char_3 = char_4 + char_1;
	double_1 = double_1 * double_2;
	char_4 = char_4 * char_1;
	int_1 = int_5;
	short_6 = short_2 * short_8;
	int_1 = int_4 + int_2;
	double_2 = double_2;
	double_2 = double_2 * double_3;
	short_5 = short_5 * short_5;
	double_5 = double_2 + double_4;
	v_bwa_fill_scmat(int_5,int_1,unsigned_int_4);

	short_8 = short_5 * short_5;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	char_3 = char_3 * char_4;
	int_4 = int_3 * int_5;
	float_2 = float_1 + float_1;
	char_2 = char_1 + char_1;
	int_1 = int_1 * int_2;
	short_7 = short_6 * short_1;
	short_2 = short_6;
	float_2 = float_2 * float_1;
	return unsigned_int_6;
}
int v_command_align( int parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_7 = 1;
	double double_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1;
	int_1 = int_3 + int_1;
	char controller4vul_1725[2];
	fgets(controller4vul_1725 ,2 ,stdin);
	if( strcmp( controller4vul_1725, "j") > 0)
	{
		int_3 = int_1 * int_2;
		short_2 = short_1 + short_1;
		char controller4vul_1726[2];
		fgets(controller4vul_1726 ,2 ,stdin);
		if( strcmp( controller4vul_1726, "g") > 0)
		{
			int int_4 = 1;
			int int_6 = 1;
			char controller4vul_1727[3];
			fgets(controller4vul_1727 ,3 ,stdin);
			if( strcmp( controller4vul_1727, "[G") > 0)
			{
				unsigned_int_1 = v_process(int_2,uni_para);

			}
			int_6 = int_4 + int_5;
			if(1)
			{
				short_2 = short_2 * short_1;
			}
			double_1 = double_1;
		}
		if(1)
		{
			float float_1 = 1;
			int_2 = int_3 + int_3;
			if(1)
			{
				float_2 = float_1 * float_1;
			}
			if(1)
			{
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					unsigned_int_1 = unsigned_int_1;
					float_1 = float_2 * float_3;
				}
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_2 = 1;
				double_2 = double_1 + double_1;
				float_3 = float_2 + float_1;
			}
			if(1)
			{
				char char_2 = 1;
				char_1 = char_2 + char_3;
			}
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		float float_6 = 1;
		float_4 = float_2 + float_3;
		long_1 = long_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			long long_5 = 1;
			double_1 = double_1 + double_3;
			double_3 = double_3 * double_1;
			char_4 = char_4 + char_3;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				long long_4 = 1;
				long_4 = long_3 * long_2;
				short_3 = short_1 * short_3;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					int_5 = int_7;
				}
			}
			if(1)
			{
				double_4 = double_1 + double_1;
				double_5 = double_4 * double_3;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					char_5 = char_1;
				}
			}
			long_3 = long_5;
			long_3 = long_5;
		}
		if(1)
		{
			double_1 = double_5 + double_3;
		}
		float_5 = float_6;
	}
	if(1)
	{
		int int_8 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			float float_7 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			if(1)
			{
				char_1 = char_1 * char_4;
			}
			short_1 = short_2 * short_3;
			int_7 = int_1 * int_3;
			float_4 = float_4 + float_7;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			float_5 = float_5 + float_5;
			double_4 = double_6 + double_6;
			double_1 = double_7 + double_3;
		}
		int_2 = int_8;
		char_4 = char_5 * char_3;
	}
	return int_3;
}
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 * double_2;
	double_2 = double_1 * double_2;
	v_err_xopen_core(unsigned_int_1,char_2,float_1);

	short_1 = short_1 * short_2;
	long_1 = long_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_3 = 1;
		int_1 = v_err_gzclose(long_1);

		int_1 = int_2 + int_3;
	}
	short_2 = short_2 + short_2;
	int_2 = int_4 * int_2;
}
int v_cleanUniprotReference( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_6 = 1;
	double double_3 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = float_1;
	long_1 = long_1;
	v_cleanUniprotReferenceUniref(unsigned_int_1,int_1);

	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	long_5 = long_4 + long_4;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	v_logMessage(char_2,int_2,char_2,long_6);

	double_1 = double_3;
	long_7 = long_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		v_writeIndexHeader(double_4,unsigned_int_1);

		unsigned_int_1 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		double_4 = double_5 + double_3;
		v_err_xopen_core(unsigned_int_3,char_3,float_2);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_3 = double_6 * double_7;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		double_1 = double_2 + double_7;
	}
	int_4 = int_1 * int_3;
	return int_5;
}
void v_downloadUniprotReference( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long_1 = long_1;
	double_1 = double_1 + double_2;
	double_3 = double_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	v_err_xopen_core(unsigned_int_2,char_1,float_1);

	float_1 = float_2 * float_1;
	char_2 = char_2 + char_2;
	v_logMessage(char_3,int_2,char_2,long_1);

	int_3 = int_1 + int_3;
	if(1)
	{
		short_2 = short_1 * short_2;
	}
	int_1 = int_1;
	char_1 = char_1 * char_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		float_3 = float_3 * float_2;
		short_3 = short_1 + short_2;
	}
	float_5 = float_4 + float_2;
	int_1 = int_1 * int_2;
}
int v_command_prepare( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		int_1 = v_cleanUniprotReference(int_1,double_2);

		double_2 = double_3 * double_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "[") < 0)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
			if(1)
			{
				char_3 = char_1 * char_1;
			}
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_2;
		double_1 = double_3 + double_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		short_3 = short_2;
		int_1 = int_2 + int_3;
		char_5 = char_3 + char_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_2 = float_1 + float_2;
			int_2 = int_4 + int_1;
		}
		unsigned_int_5 = unsigned_int_4;
		v_downloadUniprotReference(int_3,double_2);

		int_1 = v_command_index(int_1,char_6);

		double_3 = double_4 * double_2;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
		float_1 = float_2 + float_2;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
	}
	int_4 = int_4 + int_1;
	return int_3;
}
void v_bwt_dump_sa( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	short_1 = short_3;
	int_1 = v_err_fflush(long_1);

	char_1 = char_1 * char_2;
	long_2 = long_1 * long_2;
	int_1 = v_err_fwrite(float_1,float_1,float_1,int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_3 = short_4 + short_4;
	int_2 = v_err_fclose(double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_2;
}
void v___occ_aux( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_3;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_2 * long_3;
		}
	}
}
void v_bwt_occ4( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "L") < 0)
	{
		double_2 = double_1 + double_2;
	}
	short_1 = v_getOccInterval(float_1,double_1);

	char_2 = char_1 + char_2;
	double_1 = double_1 + double_2;
	int_2 = int_2;
	double_1 = double_1;
	int_2 = int_2 * int_1;
	float_1 = v_unpackBWTValue(short_2,short_1);

	char_1 = char_2 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float_2 = float_1 + float_2;
		char_2 = char_2 + char_2;
		int_1 = int_1 * int_2;
		double_1 = double_3 * double_4;
		int_3 = int_2 + int_2;
	}
	int_2 = int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		double_1 = double_5 + double_3;
	}
}
float v_bwt_occ( double parameter_1,short parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_bwt_occ4(double_1,int_1,long_3);

	float_1 = float_1 * float_2;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v___occ_aux(int_2,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char_3 = char_1 + char_2;
	long_2 = long_2 + long_3;
	int_2 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = v_getOccInterval(float_3,double_1);

		char_1 = char_1;
	}
	int_4 = int_2 + int_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "1r") > 0)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_6;
	}
	return float_4;
}
short v_getOccInterval( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	return short_1;
}
float v_unpackBWTValue( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	short_1 = v_getOccInterval(float_1,double_1);

	long_1 = long_1 * long_1;
	float_1 = float_1 + float_1;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_2;
	return float_2;
}
void v_bwt_invPsi( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 + double_1;
	float_1 = v_bwt_occ(double_1,short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_unpackBWTValue(short_1,short_2);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 + double_1;
}
void v_bwt_cal_sa( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "x") < 0)
	{
		double double_3 = 1;
		double_3 = double_3 * double_1;
	}
	int_1 = int_2 * int_2;
	long_2 = long_1 * long_2;
	int_1 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	v_bwt_invPsi(float_1,unsigned_int_3);

	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		if(1)
		{
			short_1 = short_1;
		}
		int_1 = int_2 + int_3;
		long_1 = long_2 * long_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	char_2 = char_2 + char_3;
}
void v_bwt_bwtupdate_core( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_2;
	char_1 = char_1 + char_1;
	char_2 = char_1 * char_2;
	int_3 = int_1 * int_2;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		double_1 = double_1;
	}
	int_4 = int_3 * int_4;
	char_3 = char_3 + char_3;
	char_2 = char_1 + char_4;
	int_2 = int_3 + int_3;
}
float v_fread_fix( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = long_2;
		}
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
	}
	double_1 = double_1 * double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		long_1 = long_2 * long_1;
	}
	return float_1;
	v_err_fread_noeof(double_1,int_1,short_2);

}
float v_bwt_restore_bwt( double parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float_1 = v_fread_fix(double_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1;
	v_err_fread_noeof(double_3,int_1,short_1);

	int_3 = int_2 + int_2;
	char_1 = char_2;
	char_3 = char_2;
	short_1 = short_2;
	char_5 = char_4 + char_1;
	long_1 = v_err_ftell(long_2);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	double_4 = double_2 + double_3;
	int_1 = v_err_fclose(double_3);

	double_3 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	double_4 = double_1;
	int_2 = int_2;
	return float_1;
	int_3 = v_err_fseek(float_2,long_1,int_2);

}
void v_bwt_destroy( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	short_3 = short_1 + short_2;
	double_2 = double_1 * double_2;
}
void v_bwt_dump_bwt( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	int_3 = int_1 + int_3;
	int_4 = v_err_fflush(long_2);

	int_2 = v_err_fclose(double_1);

	short_1 = short_2;
	int_1 = v_err_fwrite(float_1,float_1,float_2,int_2);

	short_1 = short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
}
void v_packValue( unsigned int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
}
unsigned int v_induceSA( char parameter_1,short parameter_2,char parameter_3,int parameter_4,double parameter_5,int parameter_6,unsigned int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_2 * float_1;
		if(1)
		{
			short_3 = short_2;
			if(1)
			{
				char char_2 = 1;
				char char_3 = 1;
				char_3 = char_1 * char_2;
				long_3 = long_3 + long_1;
			}
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	short_5 = short_4 + short_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int int_5 = 1;
			char_1 = v_getCounts(long_2,double_4,float_1,char_1,float_2);

			int_4 = v_getBuckets(int_1,short_6,long_4,long_1);

			float_1 = float_1 * float_1;
			if(1)
			{
				float_1 = float_3 + float_3;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
			int_4 = int_5 * int_2;
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_3 + long_4;
		}
	}
	return unsigned_int_3;
}
int v_getBuckets( int parameter_1,short parameter_2,long parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long_3 = long_1 + long_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int_3 = int_2;
			double_3 = double_1 + double_2;
		}
	}
	return int_3;
}
char v_getCounts( long parameter_1,double parameter_2,float parameter_3,char parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	return char_1;
}
long v_sais_main( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5,int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_3 = 1;
	float_2 = float_1 * float_2;
	short_2 = short_1 * short_1;
	int_1 = int_2;
	int_3 = int_2 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "R&") > 0)
	{
		short short_4 = 1;
		short_1 = short_3 * short_4;
		double_1 = double_2;
	}
	if(1)
	{
	}
	char_1 = v_getCounts(long_1,double_3,float_2,char_2,float_2);

	int_1 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_3 * int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			char_2 = char_1 + char_2;
		}
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_6 = 1;
		unsigned_int_1 = v_induceSA(char_1,short_5,char_1,int_2,double_3,int_5,unsigned_int_2);

		int_2 = int_6;
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_1 = double_2 + double_2;
			}
			if(1)
			{
				int_2 = int_4;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int_1 = int_4 * int_4;
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			int_7 = int_4 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long_1 = long_1;
			int_4 = int_2 * int_7;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double_2 = double_2 + double_1;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_7 * unsigned_int_4;
			}
		}
		if(1)
		{
			int_2 = int_5 + int_8;
		}
		double_3 = double_2 * double_2;
	}
	if(1)
	{
		char_3 = char_2 * char_1;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				double_3 = double_1 + double_3;
			}
		}
		if(1)
		{
		}
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_4 = unsigned_int_8 + unsigned_int_8;
			}
			if(1)
			{
				float_2 = float_1 * float_1;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			double_1 = double_2 * double_3;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
	}
	float_1 = float_4;
	int_4 = int_9 + int_5;
	for(int looper_12=0; looper_12<1;looper_12++)
	{
		char_2 = char_1 + char_3;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		double double_4 = 1;
		short_5 = short_5 + short_2;
		double_4 = double_1 * double_1;
	}
	int_10 = int_8 + int_2;
	if(1)
	{
		long long_2 = 1;
		int_8 = v_getBuckets(int_7,short_3,long_1,long_1);

		long_2 = long_3;
	}
	return long_3;
}
short v_is_sa( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	long_1 = v_sais_main(double_1,unsigned_int_1,unsigned_int_1,float_1,int_1,int_1);

	double_2 = double_2;
	if(1)
	{
		if(1)
		{
			long_1 = long_1 + long_1;
		}
	}
	return short_1;
}
long v_is_bwt( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			short_1 = v_is_sa(unsigned_int_1,short_1,char_1);

			long_1 = long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	return long_2;
}
void v_err_fread_noeof(double parameter_2,int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		v__err_fatal_simple(unsigned_int_2,long_1);

		int_1 = int_1 + int_1;
	}
}
long v_err_ftell( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	return long_1;
	v__err_fatal_simple(unsigned_int_1,long_1);

}
int v_err_fseek( float parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	v__err_fatal_simple(unsigned_int_1,long_1);

	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") < 0)
	{
		int_1 = int_1 * int_1;
	}
	return int_1;
}
long v_bwa_seq_len( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = v_err_ftell(long_2);

	int_1 = v_err_fclose(double_1);

	int_3 = int_2 + int_1;
	int_1 = v_err_fseek(float_1,long_1,int_2);

	double_2 = double_1 + double_1;
	v_err_fread_noeof(double_2,int_4,short_1);

	double_1 = double_1 + double_2;
	int_2 = int_2 * int_4;
	int_1 = int_4 * int_1;
	char_2 = char_1 * char_2;
	float_3 = float_1 * float_2;
	float_4 = float_1 * float_1;
	return long_1;
}
void v_bwt_pac2bwt( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short_2 = short_1 + short_1;
	long_1 = v_is_bwt(float_1,int_1);

	short_3 = short_1 * short_3;
	short_2 = short_1 + short_3;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1;
	long_2 = v_bwa_seq_len(long_5);

	v_packValue(unsigned_int_2,unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	int_2 = int_3;
	v_err_fread_noeof(double_1,int_3,short_2);

	int_4 = v_err_fclose(double_1);

	int_2 = int_2 * int_4;
	float_2 = float_2;
	char_3 = char_1 + char_2;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_5;
	short_3 = short_4 * short_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		char_2 = char_1 * char_4;
	}
	double_1 = double_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_2 = short_3 + short_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 + float_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_2 = long_5 * long_5;
	}
	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
}
void v_bns_destroy()
{
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int_1 = v_err_fclose(double_1);

			long_1 = long_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		long_3 = long_4;
		double_1 = double_1 * double_1;
	}
}
int v_err_fprintf( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	v__err_fatal_simple(unsigned_int_1,long_1);

	float_1 = float_1 + float_2;
	int_1 = int_2;
	short_1 = short_4 * short_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return int_3;
}
void v_bns_dump( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_2;
	double_1 = double_3 + double_4;
	int_1 = v_err_fflush(long_1);

	int_1 = v_err_fclose(double_3);

	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		float_1 = float_2;
		char_1 = char_1;
		if(1)
		{
			int_2 = int_2 + int_2;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "/") > 0)
		{
			int_1 = int_1 * int_3;
		}
		int_2 = int_3 + int_2;
	}
	int_2 = int_1 * int_1;
	int_1 = int_4;
	double_5 = double_2 + double_5;
	int_2 = int_4;
	short_1 = short_2;
	double_4 = double_5 * double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_1 = short_2 + short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	int_4 = v_err_fprintf(float_3,long_2,unsigned_int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_3 + short_4;
}
int v_err_fflush( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	double_4 = double_2 * double_3;
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return int_1;
	v__err_fatal_simple(unsigned_int_1,long_1);

}
int v_err_fwrite( float parameter_1,float parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	v__err_fatal_simple(unsigned_int_1,long_1);

	float_3 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return int_1;
}
int v_add1( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,short parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	float float_8 = 1;
	float float_9 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_1 * double_1;
	double_1 = double_1 + double_2;
	double_2 = double_1 + double_3;
	int_1 = int_1;
	float_1 = float_3 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_1 = float_4 + float_5;
			}
			if(1)
			{
				char char_2 = 1;
				char char_3 = 1;
				float float_6 = 1;
				float float_7 = 1;
				long long_1 = 1;
				if(1)
				{
					char char_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					char_1 = char_1 + char_2;
					short_2 = short_1 + short_1;
				}
				char_3 = char_2 + char_2;
				double_1 = double_3 + double_3;
				float_7 = float_6 + float_6;
				int_1 = int_2 * int_2;
				long_1 = long_1 * long_1;
				long_2 = long_2 * long_2;
			}
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "mV") > 0)
		{
			double double_4 = 1;
			int_5 = int_3 * int_4;
			double_3 = double_4 + double_2;
			unsigned_int_1 = unsigned_int_4;
		}
		if(1)
		{
			int_4 = int_1 + int_2;
		}
		long_2 = long_2;
		int_1 = int_1 + int_5;
	}
	float_9 = float_3 + float_8;
	return int_3;
}
double v_bns_fasta2bntseq( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int_1 = v_err_fwrite(float_1,float_1,float_2,int_2);

	int_1 = v_err_fclose(double_1);

	v_bns_destroy();

	float_2 = float_2 * float_2;
	return double_1;
	int_1 = v_add1(long_1,char_1,char_2,int_1,int_2,int_2,short_1);

	int_3 = v_err_fflush(long_2);

	v_bns_dump(short_2,double_1);

}
void v_logMessageRaw( int parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	int_1 = int_1;
	double_1 = double_1 + double_2;
	int_1 = int_2 + int_2;
}
int v_writeIndexTestProtein( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short_1 = short_1;
	int_1 = v_err_gzclose(long_1);

	unsigned_int_1 = unsigned_int_2;
	int_2 = v_convertToAA(char_1,long_2,int_3,char_1,unsigned_int_1);

	int_2 = v_err_fclose(double_1);

	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		v_err_xopen_core(unsigned_int_1,char_1,float_1);

		double_2 = double_2 * double_2;
		double_3 = double_3 + double_1;
		short_2 = short_1 * short_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_2 + int_1;
	}
	char_1 = char_1;
	return int_4;
}
int v_writeIndexDirectProtein( short parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	long_3 = long_1 * long_2;
	float_1 = float_1;
	v_err_xopen_core(unsigned_int_1,char_1,float_2);

	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = v_err_fclose(double_1);

	long_1 = long_3;
	return int_1;
	v_writeIndexHeader(double_2,unsigned_int_2);

}
long v_getLastAlignedPos( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return long_2;
}
int v_writeIndexCodingProtein( short parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_convertToAA(char_1,long_1,int_2,char_2,unsigned_int_3);

	float_2 = float_1 * float_2;
	char_1 = char_2 + char_1;
	if(1)
	{
	}
	double_1 = double_2;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		int_1 = v_err_gzclose(long_2);

		char_3 = char_4;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_2 = v_err_fclose(double_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_4 = int_3 + int_1;
		v_err_xopen_core(unsigned_int_3,char_1,float_1);

		v_writeIndexHeader(double_2,unsigned_int_6);

		double_2 = double_3 * double_2;
		long_1 = v_getLastAlignedPos(long_2,int_5);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 + double_1;
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		char char_5 = 1;
		char_2 = char_5 * char_1;
	}
	long_4 = long_2 * long_1;
	return int_6;
}
int v_err_fclose( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return int_2;
	v__err_fatal_simple(unsigned_int_2,long_1);

}
void v__err_fatal_simple( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 * int_2;
}
int v_err_gzclose( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	v__err_fatal_simple(unsigned_int_1,long_1);

	char_2 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return int_1;
}
void v_encodeCodon( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = float_1 + float_1;
	float_2 = float_3;
	float_3 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		short short_1 = 1;
		int_1 = int_1;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_2;
		}
		if(1)
		{
		}
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
}
int v_convertToAA( char parameter_1,long parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	long_2 = long_1 + long_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_1;
	double_1 = double_2;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_5 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_3 = double_4;
		}
		double_3 = double_1 * double_5;
		if(1)
		{
			int_2 = int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	return int_2;
	v_encodeCodon(char_1,int_1);

}
int v_getNextCDS( char parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_4 = long_4 * long_5;
	return int_1;
}
void v_writeIndexHeader( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
}
void v_err_fatal( long parameter_1,char parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	short_3 = short_1 * short_2;
	double_1 = double_2;
	int_1 = int_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
}
void v_err_xopen_core( unsigned int parameter_1,char parameter_2,float parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			double double_3 = 1;
			v_err_fatal(long_1,char_1,char_1);

			double_2 = double_3 * double_1;
		}
		float_3 = float_1 * float_2;
	}
}
int v_writeIndexProtein( float parameter_1,float parameter_2,short parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_4 = 1;
	int int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_writeIndexHeader(double_1,unsigned_int_1);

	int_1 = v_err_fclose(double_1);

	long_3 = long_1 * long_2;
	int_2 = v_convertToAA(char_1,long_2,int_1,char_2,unsigned_int_1);

	int_1 = int_2 + int_3;
	char_4 = char_3 * char_2;
	float_2 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_4 + char_4;
	int_2 = int_2 + int_2;
	int_3 = int_1;
	int_4 = int_2 * int_2;
	int_3 = v_err_gzclose(long_3);

	short_1 = short_1 * short_2;
	float_2 = float_1 + float_3;
	char_5 = char_1 * char_2;
	int_4 = int_2 * int_5;
	int_3 = int_6 * int_4;
	v_err_xopen_core(unsigned_int_5,char_4,float_1);

	char_8 = char_6 + char_7;
	int_1 = v_getNextCDS(char_8,int_4,float_4);

	int_1 = int_7 * int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	short_4 = short_3 * short_3;
	double_1 = double_2 + double_1;
	int_1 = int_7 + int_2;
	return int_6;
}
void v_logMessage( char parameter_1,int parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_1 + double_2;
	double_3 = double_2 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") < 0)
	{
	}
	int_2 = int_1 * int_1;
	int_2 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_2 * int_3;
	int_3 = int_4 + int_3;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	double_4 = double_3 * double_3;
	short_2 = short_1 * short_1;
	int_4 = int_2 + int_4;
	double_4 = double_3 * double_2;
	float_2 = float_3 * float_1;
	char_2 = char_2 * char_1;
}
int v_command_index( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	float float_5 = 1;
	if(1)
	{
	}
	v_logMessage(char_1,int_1,char_1,long_1);

	long_1 = long_1 + long_1;
	v_bwt_dump_bwt(int_2,int_3);

	float_1 = v_bwt_restore_bwt(double_1);

	double_2 = double_2 + double_2;
	char_3 = char_1 + char_2;
	int_3 = v_writeIndexDirectProtein(short_1,int_1,float_1);

	float_1 = float_2;
	v_bwt_pac2bwt(short_2);

	v_bwt_bwtupdate_core(char_4);

	unsigned_int_1 = unsigned_int_1;
	double_3 = v_bns_fasta2bntseq(unsigned_int_1,float_2,int_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = v_writeIndexCodingProtein(short_1,int_1,float_3);

	v_logMessageRaw(int_1,char_3,int_4);

	float_4 = float_3 + float_1;
	if(1)
	{
		int_1 = v_writeIndexTestProtein(int_1,short_2);

		short_3 = short_3 + short_1;
	}
	if(1)
	{
	}
	v_bwt_dump_sa(char_1,int_3);

	double_1 = double_3 * double_3;
	if(1)
	{
	}
	int_5 = v_writeIndexProtein(float_1,float_4,short_3,long_2);

	int_6 = v_err_gzclose(long_3);

	v_bwt_cal_sa(long_3,int_1);

	float_3 = float_5;
	return int_6;
	v_bwt_destroy(int_5);

}
int v_renderMainUsage()
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 + float_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_2 + float_1;
	float_4 = float_4 * float_5;
	long_4 = long_1 + long_3;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 + short_2;
	int_2 = int_2 * int_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_1;
	return int_2;
}
int v_ksprintf( long parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "x") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float_2 = float_1 * float_1;
		short_2 = short_2 + short_3;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_3;
		char_1 = char_1;
	}
	short_2 = short_1 + short_2;
	char_1 = char_1 * char_1;
	return int_2;
}
double v_realtime()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_2;
	float_1 = float_1;
	short_2 = short_1 * short_1;
	return double_1;
}
int main()
{
	int uni_para =273;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	double double_4 = 1;
	long_2 = long_1 + long_1;
	long_4 = long_1 + long_3;
	char_1 = char_1 * char_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1 * float_1;
	}
	long_1 = long_2 + long_4;
	char controller4vul_1724[2];
	fgets(controller4vul_1724 ,2 ,stdin);
	if( strcmp( controller4vul_1724, "w") < 0)
	{
		int_1 = v_command_align(int_3,char_3,uni_para);

	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 + float_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	unsigned_int_2 = unsigned_int_2;
	long_3 = long_5;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
		short_2 = short_2 + short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
	}
	double_1 = double_4;
	return int_2;
}

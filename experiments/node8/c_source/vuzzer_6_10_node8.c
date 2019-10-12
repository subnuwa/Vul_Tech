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

int v_syscall_set_post( short parameter_1,short parameter_2);
int v_syscall_set_pre( double parameter_1,int parameter_2);
int v_FileKnob( short parameter_1,double parameter_2,long parameter_3,short parameter_4,float parameter_5);
short v_SizeLeaKnob( char parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,char parameter_5);
double v_SizeKnob( double parameter_1,double parameter_2,double parameter_3,char parameter_4,double parameter_5);
unsigned int v_MmapKnob( short parameter_1,char parameter_2,int parameter_3,char parameter_4,double parameter_5);
void v_CmpRawKnob( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5);
int v_ProvRawKnob( double parameter_1,int parameter_2,short parameter_3,char parameter_4,int parameter_5);
short v_fix_eflags( char parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
float v__lea_r2r_opw( short parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5);
short v__lea_r2r_opl( int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5);
void v_r2r_lea_idx_xfer_opw( short parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4);
void v_print_lea_log();
double v_r2r_lea_idx_xfer_opl( int parameter_1,char parameter_2,double parameter_3,double parameter_4);
long v_r2r_lea_base_xfer_opw( long parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4);
float v_r2r_lea_base_xfer_opl( char parameter_1,char parameter_2,double parameter_3,char parameter_4);
double v_r2m_save_opl( int parameter_1,unsigned int parameter_2);
int v_r2m_save_opw( char parameter_1,short parameter_2);
short v_m2r_restore_opl( short parameter_1,int parameter_2);
long v_m2r_restore_opw( unsigned int parameter_1,unsigned int parameter_2);
float v_m2m_xfer_opb( long parameter_1,float parameter_2);
char v_m2m_xfer_opw( char parameter_1,int parameter_2);
unsigned int v_m2m_xfer_opl( char parameter_1,char parameter_2);
char v_r2m_xfer_opln( short parameter_1,char parameter_2,float parameter_3,long parameter_4);
double v_r2m_xfer_opwn( unsigned int parameter_1,short parameter_2,char parameter_3,float parameter_4,int uni_para);
void v_tagmap_setq( float parameter_1,int uni_para);
float v_tagmap_setl( float parameter_1,int uni_para);
char v_tagmap_setw( double parameter_1,int uni_para);
char v_tagmap_setb( int parameter_1,int uni_para);
void v_tagmap_setn( short parameter_1,int parameter_2,int uni_para);
long v_r2m_xfer_opbn( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4);
long v_rep_predicate( int parameter_1);
int v__xadd_m2r_opb_l( unsigned int parameter_1,short parameter_2,char parameter_3);
int v__xadd_m2r_opb_u( short parameter_1,unsigned int parameter_2,double parameter_3);
char v__xadd_m2r_opw( char parameter_1,char parameter_2,long parameter_3);
double v__xadd_m2r_opl( unsigned int parameter_1,float parameter_2,float parameter_3);
long v__xadd_r2r_opb_ul( int parameter_1,long parameter_2,short parameter_3);
void v__xadd_r2r_opb_lu( long parameter_1,float parameter_2,char parameter_3);
int v__xadd_r2r_opb_u( long parameter_1,short parameter_2,short parameter_3);
long v__xadd_r2r_opb_l( unsigned int parameter_1,double parameter_2,double parameter_3);
short v__xadd_r2r_opw( double parameter_1,short parameter_2,double parameter_3);
float v__xchg_m2r_opb_l( unsigned int parameter_1,float parameter_2,long parameter_3);
short v__xchg_m2r_opb_u( double parameter_1,double parameter_2,unsigned int parameter_3);
unsigned int v__xchg_m2r_opw( short parameter_1,short parameter_2,long parameter_3);
void v__xchg_m2r_opl( long parameter_1,short parameter_2,float parameter_3);
unsigned int v__xchg_r2r_opb_ul( double parameter_1,long parameter_2,long parameter_3);
int v__xchg_r2r_opb_lu( char parameter_1,float parameter_2,unsigned int parameter_3);
float v__xchg_r2r_opb_u( unsigned int parameter_1,double parameter_2,int parameter_3);
long v__xchg_r2r_opb_l( float parameter_1,unsigned int parameter_2,int parameter_3);
double v__xchg_r2r_opw( float parameter_1,int parameter_2,char parameter_3);
void v_m2i_cmp_b( unsigned int parameter_1,char parameter_2,unsigned int parameter_3);
long v_m2i_cmp_w( float parameter_1,int parameter_2,float parameter_3);
char v_m2i_cmp_l( char parameter_1,unsigned int parameter_2,float parameter_3);
int v_r2m_cmp_bu( double parameter_1,int parameter_2,short parameter_3,int parameter_4,float parameter_5);
double v_r2m_cmp_bl( double parameter_1,char parameter_2,char parameter_3,long parameter_4,char parameter_5);
double v_r2i_cmp_bu( double parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,float parameter_5);
float v_r2i_cmp_bl( float parameter_1,float parameter_2,long parameter_3,float parameter_4,double parameter_5);
float v_r2r_cmp_opb_ul( long parameter_1,float parameter_2,long parameter_3,char parameter_4,char parameter_5,double parameter_6);
unsigned int v_r2r_cmp_opb_lu( char parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4,short parameter_5,char parameter_6);
char v_r2r_cmp_opb_u( short parameter_1,int parameter_2,float parameter_3,short parameter_4,double parameter_5,double parameter_6);
char v_r2r_cmp_opb_l( short parameter_1,int parameter_2,int parameter_3,float parameter_4,int parameter_5,unsigned int parameter_6);
char v_r2m_cmp_w( char parameter_1,double parameter_2,short parameter_3,short parameter_4,double parameter_5);
unsigned int v_r2i_cmp_w( char parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5);
double v_r2r_cmp_opw( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4,float parameter_5,int parameter_6);
unsigned int v_r2m_cmp_l( short parameter_1,long parameter_2,short parameter_3,long parameter_4,long parameter_5);
unsigned int v_r2i_cmp_l( long parameter_1,unsigned int parameter_2,long parameter_3,char parameter_4,float parameter_5);
unsigned int v_r2r_cmp_opl( double parameter_1,char parameter_2,char parameter_3,char parameter_4,short parameter_5,double parameter_6);
void v_cmpsb_m2m_xfer_opb( double parameter_1,int parameter_2,short parameter_3);
double v_cmpsw_m2m_xfer_opw( float parameter_1,double parameter_2,short parameter_3);
void v_split( short parameter_1,char parameter_2);
void v_print_log();
long v_tag_sprint();
short v_tag_count( char parameter_1);
short v_output( char parameter_1,double parameter_2);
long v_cmpsd_m2m_xfer_opl( char parameter_1,long parameter_2,float parameter_3);
char v__cmpxchg_r2m_opw_slow( unsigned int parameter_1,short parameter_2,short parameter_3);
long v__cmpxchg_m2r_opw_fast( double parameter_1,short parameter_2,long parameter_3);
double v__cmpxchg_r2m_opl_slow( char parameter_1,float parameter_2,short parameter_3);
char v__cmpxchg_m2r_opl_fast( long parameter_1,int parameter_2,float parameter_3);
double v__cmpxchg_r2r_opw_slow( float parameter_1,char parameter_2,unsigned int parameter_3);
void v__cmpxchg_r2r_opw_fast( double parameter_1,float parameter_2,float parameter_3,int parameter_4);
int v__cmpxchg_r2r_opl_slow( short parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v__cmpxchg_r2r_opl_fast( int parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4);
void v_r_clrl4( float parameter_1);
short v_r_clrl2( long parameter_1);
unsigned int v_r2r_ternary_opb_l( int parameter_1,unsigned int parameter_2);
float v_r2r_ternary_opb_u( int parameter_1,double parameter_2);
void v_r2r_ternary_opw( int parameter_1,short parameter_2);
long v_r2r_ternary_opl( unsigned int parameter_1,short parameter_2);
float v_m2r_ternary_opb( char parameter_1,short parameter_2);
char v_m2r_ternary_opw( float parameter_1,int parameter_2);
int v_m2r_ternary_opl( double parameter_1,char parameter_2);
short v__movzx_m2r_oplb( long parameter_1,double parameter_2,int parameter_3);
long v__movzx_m2r_oplw( short parameter_1,char parameter_2,unsigned int parameter_3);
long v__movzx_m2r_opwb( int parameter_1,long parameter_2,short parameter_3);
int v__movzx_r2r_oplb_l( short parameter_1,float parameter_2,unsigned int parameter_3);
void v__movzx_r2r_oplb_u( long parameter_1,float parameter_2,int parameter_3);
char v__movzx_r2r_oplw( short parameter_1,float parameter_2,double parameter_3);
double v__movzx_r2r_opwb_l( long parameter_1,unsigned int parameter_2,int parameter_3);
long v__movzx_r2r_opwb_u( double parameter_1,int parameter_2,int parameter_3);
char v_tag_dir_getb_as_ptr( char parameter_1,long parameter_2);
unsigned int v_tag_dir_getb( long parameter_1,double parameter_2);
void v__movsx_m2r_oplb( char parameter_1,char parameter_2,int parameter_3);
char v__movsx_m2r_oplw( long parameter_1,float parameter_2,double parameter_3);
float v__movsx_m2r_opwb( char parameter_1,double parameter_2,long parameter_3);
long v__movsx_r2r_oplb_l( double parameter_1,short parameter_2,int parameter_3);
double v__movsx_r2r_oplb_u( char parameter_1,double parameter_2,double parameter_3);
unsigned int v__movsx_r2r_oplw( char parameter_1,char parameter_2,unsigned int parameter_3);
short v__movsx_r2r_opwb_l( double parameter_1,int parameter_2,short parameter_3);
double v__movsx_r2r_opwb_u( char parameter_1,unsigned int parameter_2,char parameter_3);
double v__cwde( int parameter_1);
char v_r2m_xfer_opb_l( char parameter_1,int parameter_2,double parameter_3);
float v_r2m_xfer_opb_u( char parameter_1,int parameter_2,short parameter_3);
float v_r2m_xfer_opw( int parameter_1,float parameter_2,long parameter_3);
void v_r2m_xfer_opl( long parameter_1,unsigned int parameter_2,double parameter_3);
char v_m2r_xfer_opb_l( long parameter_1,short parameter_2,float parameter_3);
unsigned int v_m2r_xfer_opb_u( unsigned int parameter_1,char parameter_2,short parameter_3);
char v_m2r_xfer_opw( char parameter_1,float parameter_2,short parameter_3);
void v_m2r_xfer_opl( long parameter_1,long parameter_2,char parameter_3);
short v_r2r_xfer_opb_ul( unsigned int parameter_1,int parameter_2,float parameter_3);
void v_r2r_xfer_opb_lu( double parameter_1,char parameter_2,float parameter_3);
long v_r2r_xfer_opb_u( int parameter_1,char parameter_2,short parameter_3);
float v_r2r_xfer_opb_l( float parameter_1,int parameter_2,long parameter_3);
float v_r2r_xfer_opw( short parameter_1,long parameter_2,unsigned int parameter_3);
short v_r2r_xfer_opl( int parameter_1,char parameter_2,int parameter_3);
unsigned int v_r2m_binary_opb_l( int parameter_1,double parameter_2,int parameter_3);
short v_r2m_binary_opb_u( short parameter_1,int parameter_2,short parameter_3);
short v_r2m_binary_opw( long parameter_1,long parameter_2,double parameter_3);
short v_r2m_binary_opl( short parameter_1,int parameter_2,double parameter_3);
float v_m2r_binary_opb_l( float parameter_1,double parameter_2,unsigned int parameter_3);
long v_m2r_binary_opb_u( short parameter_1,float parameter_2,long parameter_3);
void v_m2r_binary_opw( long parameter_1,float parameter_2,short parameter_3);
void v_m2r_binary_opl( double parameter_1,char parameter_2,char parameter_3);
short v_r2r_binary_opb_ul( long parameter_1,float parameter_2,long parameter_3);
void v_r2r_binary_opb_lu( char parameter_1,long parameter_2,float parameter_3);
short v_r2r_binary_opb_u( unsigned int parameter_1,short parameter_2,unsigned int parameter_3);
unsigned int v_r2r_binary_opb_l( unsigned int parameter_1,float parameter_2,int parameter_3);
int v_r_clrb_l( unsigned int parameter_1,double parameter_2);
void v_REG8_INDX( long parameter_1);
double v_r_clrb_u( int parameter_1,unsigned int parameter_2);
void v_r2r_binary_opw( int parameter_1,short parameter_2,long parameter_3);
float v_REG16_INDX( long parameter_1);
unsigned int v_r_clrw( double parameter_1,int parameter_2);
char v_tag_combine( long parameter_1,short parameter_2);
double v_r2r_binary_opl( unsigned int parameter_1,double parameter_2,double parameter_3);
long v_REG32_INDX( char parameter_1);
void v_r_clrl( float parameter_1,char parameter_2);
void v_ins_inspect( double parameter_1,int uni_para);
void v_trace_inspect( short parameter_1,double parameter_2,int uni_para);
void v_tagmap_clrq( int parameter_1);
void v_tagmap_clrl( double parameter_1);
unsigned int v_tagmap_clrw( int parameter_1);
double v_virt2offset( long parameter_1,int uni_para);
unsigned int v_virt2page();
char v_virt2table( long parameter_1);
void v_tag_dir_setb( char parameter_1,char parameter_2,double parameter_3,int uni_para);
void v_tagmap_clrb( float parameter_1);
void v_tagmap_clrn( char parameter_1,char parameter_2);
long v_sysexit_save( unsigned int parameter_1,short parameter_2,float parameter_3,char parameter_4);
void v_sysenter_save( unsigned int parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4);
int v_tagmap_alloc();
float v_thread_free( char parameter_1,float parameter_2,char parameter_3,double parameter_4);
void v_tagmap_free();
void v_libdft_die();
char v_thread_alloc( short parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4);
double v_thread_ctx_init();
int v_libdft_init(int uni_para);
short v_CheckMagicOnWrite( unsigned int parameter_1,short parameter_2);
char v_CheckMagicOnRead( int parameter_1,short parameter_2);
double v_CheckMagicValue( short parameter_1,long parameter_2);
void v_LeaRawKnob( char parameter_1,char parameter_2,long parameter_3,short parameter_4,char parameter_5);
unsigned int v_ReadRawKnob( char parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5);
int v_OnExit( long parameter_1);
unsigned int v_KnobLibC( long parameter_1,short parameter_2,short parameter_3,float parameter_4,double parameter_5);
long v_ImageLoad( long parameter_1,float parameter_2);
int v_syscall_set_post( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	return int_1;
}
int v_syscall_set_pre( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_FileKnob( short parameter_1,double parameter_2,long parameter_3,short parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3;
	double_1 = double_3 * double_1;
	return int_2;
}
short v_SizeLeaKnob( char parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,char parameter_5)
{
	short short_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_2 = long_1 + long_2;
		float_1 = float_1 + float_1;
		double_1 = double_1 + double_2;
		char_2 = char_1 * char_2;
	}
	return short_1;
}
double v_SizeKnob( double parameter_1,double parameter_2,double parameter_3,char parameter_4,double parameter_5)
{
	double double_1 = 1;
	return double_1;
}
unsigned int v_MmapKnob( short parameter_1,char parameter_2,int parameter_3,char parameter_4,double parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	long_5 = long_3 * long_4;
	if(1)
	{
		short short_4 = 1;
		long long_6 = 1;
		long_2 = long_4 + long_5;
		short_2 = short_1 + short_1;
		float_1 = float_1 + float_1;
		if(1)
		{
			float_2 = float_2 * float_3;
			long_4 = long_2 + long_2;
		}
		if(1)
		{
			short_4 = short_3 * short_3;
			double_4 = double_2 * double_3;
		}
		if(1)
		{
			float_2 = float_2 + float_3;
			double_4 = double_3 * double_4;
		}
		if(1)
		{
			short_4 = short_2 + short_2;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			short_3 = short_2 + short_1;
			float_1 = float_2;
		}
		if(1)
		{
			float_3 = float_1 * float_2;
			long_4 = long_3 + long_5;
		}
		if(1)
		{
			double_4 = double_4 + double_5;
			int_1 = int_1 * int_1;
		}
		long_6 = long_6 + long_5;
	}
	if(1)
	{
		char char_3 = 1;
		double_5 = double_1 + double_1;
		char_1 = char_1 * char_1;
		if(1)
		{
			long_4 = long_2 * long_7;
		}
		if(1)
		{
			float_2 = float_2;
		}
		if(1)
		{
			float_2 = float_2 * float_3;
		}
		if(1)
		{
			double_3 = double_6 * double_7;
		}
		int_2 = int_3;
		char_2 = char_2 * char_3;
		double_4 = double_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		double_7 = double_6 + double_5;
		float_3 = float_1 * float_3;
		if(1)
		{
			int_1 = int_3 + int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		int int_4 = 1;
		if(1)
		{
			float float_4 = 1;
			int_3 = int_2;
			float_4 = float_4 * float_3;
			if(1)
			{
				double_2 = double_5 * double_6;
			}
			if(1)
			{
				int_3 = int_1 * int_3;
			}
			unsigned_int_2 = unsigned_int_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
				double_6 = double_4 * double_5;
				double_4 = double_3 * double_5;
			}
		}
		short_2 = short_3 + short_1;
		long_7 = long_1 * long_3;
		unsigned_int_5 = unsigned_int_1;
		double_7 = double_6;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_6;
		short_5 = short_2 + short_1;
		int_1 = int_2 + int_1;
		short_5 = short_2 + short_3;
		int_2 = int_2 * int_2;
		char_2 = char_1;
		int_1 = int_2 + int_3;
		int_4 = int_4 + int_1;
	}
	return unsigned_int_2;
}
void v_CmpRawKnob( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	short_3 = short_1 * short_2;
	int_2 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1;
	float_1 = float_1 + float_1;
	float_3 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_2;
	float_4 = float_1 + float_2;
	double_1 = double_1 * double_1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_2 * double_1;
	float_2 = float_1 + float_4;
	long_1 = long_1;
	int_4 = int_4 * int_1;
	short_3 = short_1 * short_3;
	int_2 = int_3 * int_3;
}
int v_ProvRawKnob( double parameter_1,int parameter_2,short parameter_3,char parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_2 = long_1 * long_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			short short_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			short_1 = short_2 + short_3;
		}
		char_1 = char_1;
		char_2 = char_2 + char_2;
	}
	return int_1;
}
short v_fix_eflags( char parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	return short_1;
}
float v__lea_r2r_opw( short parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "/") < 0)
	{
		double double_1 = 1;
		short_1 = v_tag_count(char_1);

		char_1 = v_tag_combine(long_1,short_1);

		double_2 = double_1 * double_1;
	}
	if(1)
	{
		if(1)
		{
			short_2 = v_output(char_2,double_2);

			long_2 = v_tag_sprint();

			int_2 = int_2 + int_1;
		}
	}
	return float_1;
	v_print_lea_log();

}
short v__lea_r2r_opl( int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		int int_1 = 1;
		v_print_lea_log();

		int_1 = int_1 * int_1;
	}
	char_1 = v_tag_combine(long_1,short_1);

	short_2 = short_2;
	short_2 = v_output(char_1,double_1);

	short_2 = v_tag_count(char_1);

	long_1 = v_tag_sprint();

	double_1 = double_2 + double_1;
	return short_1;
}
void v_r2r_lea_idx_xfer_opw( short parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = v_tag_count(char_1);

	v_print_lea_log();

	char_2 = char_1 * char_1;
	short_1 = v_output(char_2,double_1);

	long_1 = v_tag_sprint();

}
void v_print_lea_log()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short_1 = v_output(char_3,double_1);

		double_2 = double_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "&.") == 0)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		int_1 = int_2;
	}
	short_3 = short_1 * short_2;
	v_split(short_4,char_3);

	short_3 = short_3 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_2 = double_2 + double_3;
		char_1 = char_3 + char_2;
	}
	double_1 = double_4;
}
double v_r2r_lea_idx_xfer_opl( int parameter_1,char parameter_2,double parameter_3,double parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short_1 = v_tag_count(char_1);

	v_print_lea_log();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_tag_sprint();

	int_1 = int_1;
	short_2 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	return double_1;
	short_1 = v_output(char_2,double_1);

}
long v_r2r_lea_base_xfer_opw( long parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	return long_1;
}
float v_r2r_lea_base_xfer_opl( char parameter_1,char parameter_2,double parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = short_1 + short_2;
	char_1 = char_1 + char_1;
	char_4 = char_2 * char_3;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_5;
	double_3 = double_1 + double_2;
	short_3 = short_2;
	if(1)
	{
		double_3 = double_4 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_2 * double_5;
	if(1)
	{
		int_1 = int_2;
	}
	double_5 = double_5 + double_2;
	int_3 = int_3 + int_1;
	int_3 = int_2 * int_4;
	int_1 = int_4 + int_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "DB") < 0)
	{
		int_4 = int_5 + int_5;
	}
	int_4 = int_6 + int_7;
	int_2 = int_4 * int_8;
	if(1)
	{
		int_4 = int_5;
	}
	if(1)
	{
		double_4 = double_5 * double_1;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	float_1 = float_1 * float_2;
	double_5 = double_3 * double_3;
	return float_3;
}
double v_r2m_save_opl( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_9 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_2;
	v_tag_dir_setb(char_2,char_4,double_1,-1 );

	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	int_3 = int_2 * int_1;
	unsigned_int_4 = unsigned_int_1;
	int_3 = int_4 + int_5;
	float_2 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	float_3 = float_3 * float_2;
	short_1 = short_1 + short_3;
	char_4 = char_4 + char_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4;
	long_2 = long_1 * long_3;
	double_2 = double_2 * double_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
	char_5 = char_5 * char_2;
	int_7 = int_2 + int_6;
	if(1)
	{
		int int_8 = 1;
		char_4 = char_4 + char_3;
		int_8 = int_8 + int_3;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_4 = long_2 * long_2;
		long_1 = long_5;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "hN") < 0)
	{
		short short_4 = 1;
		short_4 = short_2 * short_4;
		char_2 = char_5 + char_1;
	}
	int_9 = int_4 + int_4;
	long_6 = long_6 * long_6;
	return double_1;
}
int v_r2m_save_opw( char parameter_1,short parameter_2)
{
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	v_tag_dir_setb(char_1,char_2,double_2,-1 );

	int_1 = int_1 + int_2;
	return int_3;
}
short v_m2r_restore_opl( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
long v_m2r_restore_opw( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	double_1 = double_2 * double_2;
	return long_1;
}
float v_m2m_xfer_opb( long parameter_1,float parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "w") > 0)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	v_tag_dir_setb(char_1,char_2,double_1,-1 );

}
char v_m2m_xfer_opw( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 * double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_1 * double_2;
		}
	}
	unsigned_int_1 = unsigned_int_2;
	return char_1;
}
unsigned int v_m2m_xfer_opl( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	int_1 = int_1 + int_1;
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
char v_r2m_xfer_opln( short parameter_1,char parameter_2,float parameter_3,long parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	float_1 = float_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	char_1 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_3 * double_3;
		unsigned_int_1 = unsigned_int_2;
		float_2 = float_1 + float_1;
		int_3 = int_2 * int_3;
		int_1 = int_1 * int_2;
		double_1 = double_4 + double_1;
		double_4 = double_3 * double_5;
		char_1 = char_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_4;
		if(1)
		{
			if(1)
			{
			}
			unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
			char_2 = char_2;
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
				v_tagmap_setn(short_3,int_2,-1 );

				double_3 = double_5 * double_6;
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
			if(1)
			{
			}
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
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
			unsigned_int_5 = unsigned_int_7 + unsigned_int_1;
			v_tag_dir_setb(char_3,char_4,double_4,-1 );

			long_2 = long_1 * long_1;
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
		double_2 = double_6 * double_2;
	}
	if(1)
	{
		if(1)
		{
		}
		int_4 = int_4 + int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_8;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	int_2 = int_6 * int_4;
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
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	unsigned_int_4 = unsigned_int_6;
	v_tagmap_clrn(char_2,char_4);

	long_3 = long_3 * long_1;
	long_2 = long_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 + char_4;
	int_2 = int_5 * int_2;
	return char_2;
}
double v_r2m_xfer_opwn( unsigned int parameter_1,short parameter_2,char parameter_3,float parameter_4,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	v_tagmap_setn(short_1,int_1,uni_para);

	int_1 = int_2 + int_1;
	float_2 = float_1 * float_1;
	return double_1;
}
void v_tagmap_setq( float parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 + float_2;
	char controller4vul_1976[3];
	fgets(controller4vul_1976 ,3 ,stdin);
	if( strcmp( controller4vul_1976, "a7") < 0)
	{
		float_1 = v_tagmap_setl(float_1,uni_para);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_2 + float_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
float v_tagmap_setl( float parameter_1,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char controller4vul_1977[2];
	fgets(controller4vul_1977 ,2 ,stdin);
	if( strcmp( controller4vul_1977, "b") > 0)
	{
		char_1 = v_tagmap_setw(double_1,uni_para);

	}
	short_1 = short_2;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return float_1;
}
char v_tagmap_setw( double parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_2;
	char controller4vul_1978[2];
	fgets(controller4vul_1978 ,2 ,stdin);
	if( strcmp( controller4vul_1978, "L") > 0)
	{
		char_1 = v_tagmap_setb(int_1,uni_para);

	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	return char_1;
}
char v_tagmap_setb( int parameter_1,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_tag_dir_setb(char_1,char_1,double_1,uni_para);

	double_1 = double_1 * double_1;
	double_3 = double_2 * double_2;
	return char_1;
}
void v_tagmap_setn( short parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_tagmap_setq(float_1,uni_para);

	int_1 = int_1 * int_2;
}
long v_r2m_xfer_opbn( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	v_tagmap_setn(short_1,int_1,-1 );

	int_1 = int_2;
	long_1 = long_2 + long_2;
	float_2 = float_1 * float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "?") < 0)
	{
		v_tagmap_clrn(char_1,char_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
		long_1 = long_2 * long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	double_2 = double_2 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		float_3 = float_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_2 + char_1;
	if(1)
	{
		float_1 = float_2 + float_3;
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	return long_3;
}
long v_rep_predicate( int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
int v__xadd_m2r_opb_l( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	double double_2 = 1;
	long long_5 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	short_3 = short_1 * short_2;
	float_2 = float_3 * float_3;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	long_3 = long_1 + long_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2 * float_4;
	int_1 = int_1;
	char_1 = v_tag_combine(long_1,short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_tag_dir_getb(long_4,double_2);

	long_5 = long_1 * long_1;
	return int_2;
}
int v__xadd_m2r_opb_u( short parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	unsigned_int_1 = v_tag_dir_getb(long_1,double_1);

	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	char_1 = v_tag_combine(long_1,short_1);

}
char v__xadd_m2r_opw( char parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_tag_dir_getb(long_1,double_1);

	char_1 = v_tag_combine(long_2,short_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				v_tag_dir_setb(char_1,char_1,double_1,-1 );

				float_2 = float_1 + float_2;
				int_2 = int_1 * int_1;
			}
		}
	}
	return char_2;
}
double v__xadd_m2r_opl( unsigned int parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	unsigned_int_1 = v_tag_dir_getb(long_1,double_2);

	v_tag_dir_setb(char_1,char_2,double_1,-1 );

	char_2 = v_tag_combine(long_2,short_1);

}
long v__xadd_r2r_opb_ul( int parameter_1,long parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	int_3 = int_2 + int_3;
	int_1 = int_3 * int_4;
	char_1 = char_1;
	char_2 = char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	char_2 = v_tag_combine(long_2,short_1);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_1;
	double_3 = double_1 * double_2;
	int_3 = int_4 * int_3;
	return long_3;
}
void v__xadd_r2r_opb_lu( long parameter_1,float parameter_2,char parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char_1 = v_tag_combine(long_1,short_1);

	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
}
int v__xadd_r2r_opb_u( long parameter_1,short parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	char_1 = v_tag_combine(long_1,short_1);

	float_1 = float_1 + float_1;
	return int_1;
}
long v__xadd_r2r_opb_l( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	double_1 = double_2;
	char_1 = char_2 * char_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
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
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		char_2 = v_tag_combine(long_3,short_3);

		long_1 = long_3;
	}
	if(1)
	{
		long long_4 = 1;
		long_1 = long_1 + long_4;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3;
	}
	return long_3;
}
short v__xadd_r2r_opw( double parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_2;
	int_2 = int_3 * int_1;
	int_2 = int_2 + int_2;
	int_4 = int_4 * int_3;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_5 * int_4;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Vf") > 0)
	{
		short short_3 = 1;
		int int_7 = 1;
		short_3 = short_1 + short_2;
		char_1 = v_tag_combine(long_1,short_2);

		int_7 = int_4;
	}
	return short_1;
}
float v__xchg_m2r_opb_l( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	double_2 = double_2 + double_2;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_1;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 + float_1;
		}
		double_3 = double_2 + double_3;
	}
	return float_2;
}
short v__xchg_m2r_opb_u( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	char char_6 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_2;
	int_3 = int_1 + int_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_3 = char_2 + char_3;
	}
	long_1 = long_1 * long_1;
	float_4 = float_3 + float_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		v_tag_dir_setb(char_4,char_5,double_1,-1 );

		int_4 = int_1 + int_3;
	}
	if(1)
	{
	}
	long_4 = long_2 * long_3;
	char_3 = char_3 + char_3;
	int_5 = int_3 * int_4;
	long_2 = long_2;
	double_2 = double_1 * double_2;
	int_1 = int_4;
	char_4 = char_6;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 + double_4;
	}
	return short_1;
}
unsigned int v__xchg_m2r_opw( short parameter_1,short parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_2 = 1;
			v_tag_dir_setb(char_1,char_2,double_1,-1 );

			double_2 = double_2 * double_2;
		}
	}
	return unsigned_int_1;
}
void v__xchg_m2r_opl( long parameter_1,short parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	v_tag_dir_setb(char_1,char_2,double_1,-1 );

	int_1 = int_1 + int_1;
}
unsigned int v__xchg_r2r_opb_ul( double parameter_1,long parameter_2,long parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			char char_2 = 1;
			short short_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_9 = 1;
			float float_10 = 1;
			long_2 = long_1 * long_2;
			if(1)
			{
				double_3 = double_1 + double_2;
			}
			if(1)
			{
				double double_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_1 = 1;
				float float_4 = 1;
				float float_5 = 1;
				int int_5 = 1;
				double double_5 = 1;
				int int_9 = 1;
				short short_4 = 1;
				short short_5 = 1;
				long long_4 = 1;
				int int_10 = 1;
				int int_11 = 1;
				char char_4 = 1;
				float float_6 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_7 = 1;
				short short_7 = 1;
				float float_7 = 1;
				float float_8 = 1;
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					double_1 = double_3;
					double_2 = double_4 + double_1;
					int_2 = int_1 + int_1;
				}
				short_1 = short_1 + short_1;
				short_1 = short_2 + short_2;
				unsigned_int_2 = unsigned_int_3;
				char_2 = char_1 + char_2;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
				double_1 = double_2 + double_4;
				float_1 = float_1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
				double_1 = double_2;
				char_2 = char_3 + char_3;
				short_1 = short_1 * short_3;
				unsigned_int_5 = unsigned_int_4;
				float_2 = float_2 * float_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
				float_3 = float_3;
				double_3 = double_1 + double_1;
				int_3 = int_3 * int_2;
				long_2 = long_2;
				int_4 = int_2 + int_4;
				int_1 = int_2 * int_2;
				float_5 = float_2 * float_4;
				double_3 = double_4 + double_1;
				short_1 = short_3 + short_3;
				int_3 = int_5 + int_2;
				float_2 = float_1 * float_1;
				long_3 = long_3 * long_3;
				int_5 = int_4 * int_1;
				int_6 = int_1;
				int_7 = int_1 + int_1;
				float_1 = float_1 + float_1;
				char_2 = char_1;
				unsigned_int_1 = unsigned_int_6 + unsigned_int_3;
				double_5 = double_1 * double_4;
				long_2 = long_1 + long_3;
				int_9 = int_8 * int_5;
				char_3 = char_3 * char_3;
				short_1 = short_4 * short_4;
				short_4 = short_5 + short_5;
				float_3 = float_4 + float_3;
				double_6 = double_3;
				long_4 = long_4 + long_4;
				char_3 = char_1 * char_2;
				float_2 = float_4 + float_3;
				short_3 = short_2 * short_4;
				int_10 = int_6;
				int_10 = int_4 + int_11;
				int_2 = int_1 + int_2;
				unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
				long_1 = long_1 * long_4;
				double_7 = double_2 * double_5;
				int_2 = int_2 * int_2;
				double_1 = double_4 * double_1;
				char_2 = char_1 * char_4;
				float_6 = float_2 + float_2;
				long_2 = long_1 + long_1;
				short_5 = short_2 * short_3;
				double_6 = double_1 * double_8;
				short_6 = short_3;
				short_2 = short_4 * short_6;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
				long_4 = long_3 * long_4;
				unsigned_int_8 = unsigned_int_7 * unsigned_int_8;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
				short_6 = short_2 + short_7;
				double_4 = double_5 * double_4;
				float_3 = float_7 * float_5;
				int_1 = int_6 * int_4;
				float_9 = float_8 * float_6;
				float_10 = float_1;
				unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
				unsigned_int_6 = unsigned_int_8 * unsigned_int_2;
			}
			if(1)
			{
				float float_11 = 1;
				unsigned int unsigned_int_9 = 1;
				short short_8 = 1;
				float_11 = float_10;
				unsigned_int_5 = unsigned_int_8 * unsigned_int_8;
				char_5 = char_6;
				unsigned_int_9 = unsigned_int_2 * unsigned_int_6;
				double_7 = double_6 * double_2;
				short_3 = short_8 * short_1;
				float_9 = float_2 * float_3;
				char_3 = char_5 + char_2;
			}
		}
	}
	if(1)
	{
		char char_7 = 1;
		long long_5 = 1;
		char char_8 = 1;
		char_7 = char_1 + char_5;
		int_3 = int_6 * int_8;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_8;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		long_5 = long_5 * long_3;
		int_3 = int_4 + int_7;
		char_8 = char_6 * char_3;
		double_1 = double_8 * double_3;
	}
	return unsigned_int_2;
}
int v__xchg_r2r_opb_lu( char parameter_1,float parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	double_3 = double_1 + double_2;
	return int_1;
}
float v__xchg_r2r_opb_u( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	float float_1 = 1;
	return float_1;
}
long v__xchg_r2r_opb_l( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2;
	double_3 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double_2 = double_3 + double_3;
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				long_1 = long_1;
			}
			float_2 = float_1 * float_1;
		}
		long_2 = long_3;
		int_2 = int_3 + int_1;
		if(1)
		{
			int_2 = int_3 * int_3;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
	}
	char_4 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_1 + double_4;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	return long_3;
}
double v__xchg_r2r_opw( float parameter_1,int parameter_2,char parameter_3)
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
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	unsigned_int_3 = unsigned_int_4;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	double_2 = double_2 * double_1;
	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 + long_2;
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int int_3 = 1;
				float float_3 = 1;
				int_2 = int_3;
				float_1 = float_3 * float_1;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					double_1 = double_3;
				}
				double_3 = double_1 + double_2;
			}
		}
	}
	double_2 = double_3 + double_1;
	double_4 = double_2;
	return double_5;
}
void v_m2i_cmp_b( unsigned int parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	v_print_log();

	double_2 = double_1 * double_2;
	short_1 = short_2;
	short_3 = short_1;
	float_2 = float_1 + float_1;
	short_4 = v_tag_count(char_1);

	float_2 = float_2 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_7 = 1;
		int_2 = int_1 * int_3;
		int_4 = int_2;
		short_4 = short_2 * short_3;
		short_1 = v_output(char_1,double_1);

		char_2 = char_1 * char_1;
		int_2 = int_4 + int_2;
		unsigned_int_1 = unsigned_int_2;
		char_3 = char_1;
		double_1 = double_2 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			short_1 = short_2 * short_4;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
			double_3 = double_3 * double_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
				short_5 = short_3 * short_5;
			}
		}
		unsigned_int_7 = unsigned_int_5 + unsigned_int_3;
		int_6 = int_3 * int_5;
		double_5 = double_5 * double_3;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long long_1 = 1;
			short short_6 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_8 = 1;
			long_1 = long_1 * long_1;
			short_6 = short_1 * short_2;
			short_4 = short_5 + short_7;
			unsigned_int_6 = unsigned_int_8 + unsigned_int_8;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				long long_2 = 1;
				short short_8 = 1;
				short short_9 = 1;
				long_3 = long_1 + long_2;
				long_3 = v_tag_sprint();

				short_9 = short_6 + short_8;
			}
		}
		double_6 = double_6 + double_7;
		int_2 = int_2;
		int_2 = int_2 * int_7;
	}
}
long v_m2i_cmp_w( float parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	short_1 = v_output(char_1,double_1);

	short_1 = v_tag_count(char_1);

	long_1 = v_tag_sprint();

	float_1 = float_1;
	if(1)
	{
	}
	v_print_log();

	char_3 = char_1 * char_2;
	return long_2;
}
char v_m2i_cmp_l( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_tag_sprint();

	double_1 = double_1 * double_2;
	short_1 = v_output(char_1,double_1);

	float_1 = float_1 + float_1;
	long_1 = long_1 * long_1;
	short_2 = v_tag_count(char_2);

	v_print_log();

	float_1 = float_1 + float_2;
	short_3 = short_1;
	short_2 = short_2;
	return char_2;
}
int v_r2m_cmp_bu( double parameter_1,int parameter_2,short parameter_3,int parameter_4,float parameter_5)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = v_output(char_1,double_1);

	double_2 = double_1 + double_1;
	short_2 = v_tag_count(char_1);

	int_3 = int_1 * int_2;
	long_1 = long_1 * long_1;
	return int_2;
	long_2 = v_tag_sprint();

	v_print_log();

}
double v_r2m_cmp_bl( double parameter_1,char parameter_2,char parameter_3,long parameter_4,char parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	return double_1;
	short_1 = v_output(char_1,double_1);

	short_2 = v_tag_count(char_2);

	long_1 = v_tag_sprint();

	v_print_log();

}
double v_r2i_cmp_bu( double parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	v_print_log();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_2;
		if(1)
		{
			short_1 = v_output(char_1,double_1);

			double_3 = double_2 * double_3;
		}
		short_2 = short_2 + short_2;
		double_2 = double_2 * double_3;
		short_3 = short_2 + short_3;
		short_3 = v_tag_count(char_1);

		long_1 = long_1 * long_2;
	}
	return double_2;
	long_3 = v_tag_sprint();

}
float v_r2i_cmp_bl( float parameter_1,float parameter_2,long parameter_3,float parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double_1 = double_2;
	double_1 = double_1;
	float_2 = float_1 * float_2;
	long_2 = long_1 + long_1;
	long_3 = v_tag_sprint();

	short_3 = short_1 + short_2;
	if(1)
	{
		double_3 = double_3 * double_4;
	}
	short_1 = short_1 * short_2;
	short_2 = v_output(char_1,double_3);

	double_4 = double_2 * double_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_4 = 1;
		long_3 = long_4 * long_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			double_2 = double_3 + double_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_2 = double_5 * double_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short_2 = v_tag_count(char_3);

		v_print_log();

		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	return float_3;
}
float v_r2r_cmp_opb_ul( long parameter_1,float parameter_2,long parameter_3,char parameter_4,char parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	short_1 = v_output(char_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = v_tag_count(char_2);

	short_3 = short_3 * short_3;
	v_print_log();

	long_2 = long_1 * long_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
	double_5 = double_3 * double_4;
	return float_2;
	long_1 = v_tag_sprint();

}
unsigned int v_r2r_cmp_opb_lu( char parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4,short parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_tag_count(char_1);

	v_print_log();

	int_2 = int_1 * int_1;
	short_1 = v_output(char_2,double_1);

	long_1 = v_tag_sprint();

	int_3 = int_3;
	return unsigned_int_1;
}
char v_r2r_cmp_opb_u( short parameter_1,int parameter_2,float parameter_3,short parameter_4,double parameter_5,double parameter_6)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	short_1 = v_tag_count(char_1);

	float_2 = float_1 + float_1;
	short_2 = v_output(char_2,double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_2 + short_3;
	v_print_log();

	long_2 = long_1 * long_2;
	float_1 = float_3 * float_4;
	return char_2;
	long_3 = v_tag_sprint();

}
char v_r2r_cmp_opb_l( short parameter_1,int parameter_2,int parameter_3,float parameter_4,int parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short_1 = v_output(char_1,double_1);

		short_2 = v_tag_count(char_2);

		v_print_log();

		long_3 = long_1 * long_2;
	}
	return char_3;
	long_4 = v_tag_sprint();

}
char v_r2m_cmp_w( char parameter_1,double parameter_2,short parameter_3,short parameter_4,double parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long_1 = v_tag_sprint();

	short_1 = short_1 + short_2;
	long_3 = long_2 + long_1;
	short_2 = v_tag_count(char_1);

	float_2 = float_1 + float_2;
	char_2 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") > 0)
	{
		v_print_log();

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		short_3 = v_output(char_2,double_1);

		long_1 = long_1;
	}
	double_1 = double_2 * double_2;
	return char_1;
}
unsigned int v_r2i_cmp_w( char parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long_1 = v_tag_sprint();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_tag_count(char_1);

	char_3 = char_1 + char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		v_print_log();

		int_3 = int_1 * int_2;
		short_1 = v_output(char_3,double_1);

		long_1 = long_1 + long_1;
	}
	return unsigned_int_2;
}
double v_r2r_cmp_opw( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4,float parameter_5,int parameter_6)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_1 = 1;
	long_1 = v_tag_sprint();

	char_1 = char_1 * char_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		v_print_log();

		int_2 = int_2 + int_1;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "gz") < 0)
		{
			short_1 = short_3 + short_1;
		}
		short_4 = v_tag_count(char_3);

		char_5 = char_3 * char_4;
	}
	char_3 = char_6 + char_5;
	return double_1;
	short_1 = v_output(char_4,double_1);

}
unsigned int v_r2m_cmp_l( short parameter_1,long parameter_2,short parameter_3,long parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	short short_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_1 = v_output(char_1,double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	long_1 = v_tag_sprint();

	float_2 = float_1 + float_2;
	int_3 = int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	v_print_log();

	double_3 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	long_2 = long_1 + long_1;
	char_3 = char_2 * char_2;
	int_5 = int_1 * int_4;
	double_1 = double_1 + double_1;
	double_1 = double_1 + double_2;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	int_5 = int_5 * int_5;
	int_3 = int_1 * int_6;
	short_2 = short_1;
	short_1 = short_1 * short_2;
	long_3 = long_1 * long_3;
	short_3 = v_tag_count(char_4);

	long_2 = long_3;
	short_4 = short_2 + short_4;
	return unsigned_int_7;
}
unsigned int v_r2i_cmp_l( long parameter_1,unsigned int parameter_2,long parameter_3,char parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			short_1 = v_tag_count(char_1);

			v_print_log();

			int_2 = int_1 + int_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
	}
	return unsigned_int_3;
	short_2 = v_output(char_1,double_3);

	long_1 = v_tag_sprint();

}
unsigned int v_r2r_cmp_opl( double parameter_1,char parameter_2,char parameter_3,char parameter_4,short parameter_5,double parameter_6)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_output(char_1,double_1);

	short_1 = v_tag_count(char_1);

	long_1 = v_tag_sprint();

	char_2 = char_2 * char_3;
	return unsigned_int_1;
	v_print_log();

}
void v_cmpsb_m2m_xfer_opb( double parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 + double_2;
	long_1 = v_tag_sprint();

	int_3 = int_3 * int_4;
	float_1 = float_2;
	float_4 = float_3 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_tag_count(char_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	v_print_log();

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_1 = v_output(char_1,double_1);

}
double v_cmpsw_m2m_xfer_opw( float parameter_1,double parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	char_3 = char_1 * char_2;
	double_1 = double_1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	long_1 = long_1;
	long_2 = v_tag_sprint();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_tag_count(char_2);

	short_1 = short_1 + short_1;
	int_1 = int_1 + int_1;
	double_4 = double_2 + double_3;
	char_4 = char_4;
	double_5 = double_2 + double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	char_5 = char_3 + char_2;
	double_1 = double_3 + double_1;
	float_1 = float_3;
	int_1 = int_2 + int_2;
	short_2 = v_output(char_4,double_5);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 * float_3;
	int_1 = int_2 * int_1;
	int_1 = int_3;
	float_4 = float_2 * float_2;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		v_print_log();

		double_3 = double_1 + double_1;
		char_4 = char_2 + char_4;
	}
	long_2 = long_2;
	return double_5;
}
void v_split( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
}
void v_print_log()
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = v_output(char_1,double_1);

	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		v_split(short_2,char_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		char_3 = char_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_2 = short_2 + short_1;
		int_1 = int_1 + int_1;
	}
	int_3 = int_1 * int_2;
}
long v_tag_sprint()
{
	long long_1 = 1;
	return long_1;
}
short v_tag_count( char parameter_1)
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
short v_output( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	return short_1;
}
long v_cmpsd_m2m_xfer_opl( char parameter_1,long parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float_3 = float_1 + float_2;
	short_1 = v_tag_count(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 * double_2;
	short_2 = v_output(char_2,double_2);

	long_1 = v_tag_sprint();

	float_1 = float_2 * float_2;
	v_print_log();

	double_1 = double_3;
	return long_1;
}
char v__cmpxchg_r2m_opw_slow( unsigned int parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_2;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_1;
	int_4 = int_3 * int_1;
	double_4 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
long v__cmpxchg_m2r_opw_fast( double parameter_1,short parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	unsigned_int_1 = v_tag_dir_getb(long_1,double_2);

	int_1 = int_1 * int_1;
	return long_1;
}
double v__cmpxchg_r2m_opl_slow( char parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_tag_dir_setb(char_1,char_2,double_1,-1 );

	unsigned_int_1 = unsigned_int_1;
	return double_1;
}
char v__cmpxchg_m2r_opl_fast( long parameter_1,int parameter_2,float parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	return char_1;
	unsigned_int_1 = v_tag_dir_getb(long_1,double_1);

}
double v__cmpxchg_r2r_opw_slow( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "<F") > 0)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_3 = double_1 + double_3;
	return double_2;
}
void v__cmpxchg_r2r_opw_fast( double parameter_1,float parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Jx") < 0)
		{
			long_1 = long_1 * long_1;
		}
	}
	long_3 = long_2 + long_1;
}
int v__cmpxchg_r2r_opl_slow( short parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	double_1 = double_2;
	return int_1;
}
void v__cmpxchg_r2r_opl_fast( int parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_1 * int_1;
	int_4 = int_2 + int_3;
	float_1 = float_2 * float_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_6 = 1;
		char_1 = char_1 + char_1;
		int_1 = int_4 + int_3;
		if(1)
		{
			if(1)
			{
				double_1 = double_2;
			}
			if(1)
			{
				double_1 = double_1 + double_3;
			}
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			long_2 = long_1 + long_2;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			double_3 = double_3 + double_2;
			if(1)
			{
				double_3 = double_1 * double_2;
			}
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_1;
	}
	int_4 = int_4;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
}
void v_r_clrl4( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
}
short v_r_clrl2( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	double_1 = double_1;
	char_2 = char_1 + char_2;
	double_1 = double_2;
	if(1)
	{
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_3;
	double_2 = double_4;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 + double_4;
	int_3 = int_1;
	if(1)
	{
		int_4 = int_1 + int_2;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		double_2 = double_3 + double_1;
		double_3 = double_1 * double_5;
	}
	if(1)
	{
		float float_2 = 1;
		short short_3 = 1;
		float_2 = float_1 * float_2;
		if(1)
		{
			float_3 = float_2 + float_2;
			double_5 = double_4 + double_4;
		}
		int_4 = int_3 + int_2;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		short_1 = short_4 * short_5;
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		float_3 = float_1 * float_3;
	}
	return short_5;
}
unsigned int v_r2r_ternary_opb_l( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v_tag_combine(long_1,short_1);

	float_1 = float_1;
	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
float v_r2r_ternary_opb_u( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = v_tag_combine(long_1,short_1);

	short_2 = short_1;
	long_1 = long_2 + long_3;
	short_2 = short_1 + short_1;
	return float_1;
}
void v_r2r_ternary_opw( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	double_3 = double_1 * double_2;
	float_2 = float_1 * float_2;
	char_1 = v_tag_combine(long_1,short_1);

}
long v_r2r_ternary_opl( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_1;
	float_3 = float_2 + float_1;
	long_3 = long_2 + long_1;
	return long_4;
	char_2 = v_tag_combine(long_2,short_3);

}
float v_m2r_ternary_opb( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	return float_1;
	char_1 = v_tag_combine(long_1,short_1);

}
char v_m2r_ternary_opw( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		double_2 = double_2 * double_2;
		char_1 = v_tag_combine(long_3,short_1);

		double_1 = double_2;
	}
	return char_1;
}
int v_m2r_ternary_opl( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
	char_1 = v_tag_combine(long_1,short_1);

}
short v__movzx_m2r_oplb( long parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "R:") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return short_3;
	unsigned_int_2 = v_tag_dir_getb(long_1,double_1);

}
long v__movzx_m2r_oplw( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_1 * float_1;
		unsigned_int_1 = v_tag_dir_getb(long_1,double_3);

		int_2 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return long_2;
}
long v__movzx_m2r_opwb( int parameter_1,long parameter_2,short parameter_3)
{
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") > 0)
	{
	}
	if(1)
	{
	}
	return long_1;
}
int v__movzx_r2r_oplb_l( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	char_1 = char_1 * char_1;
	char_1 = char_1 * char_1;
	return int_1;
}
void v__movzx_r2r_oplb_u( long parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
char v__movzx_r2r_oplw( short parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "pE") > 0)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
double v__movzx_r2r_opwb_l( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
	return double_2;
}
long v__movzx_r2r_opwb_u( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	return long_3;
}
char v_tag_dir_getb_as_ptr( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_2 = 1;
		char_1 = v_virt2table(long_1);

		double_2 = double_1 + double_1;
		if(1)
		{
			char char_2 = 1;
			double_1 = v_virt2offset(long_2,-1 );

			char_1 = char_1 + char_2;
			if(1)
			{
			}
		}
	}
	return char_1;
	unsigned_int_1 = v_virt2page();

}
unsigned int v_tag_dir_getb( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	return unsigned_int_1;
	char_1 = v_tag_dir_getb_as_ptr(char_1,long_1);

}
void v__movsx_m2r_oplb( char parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = v_tag_dir_getb(long_2,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
char v__movsx_m2r_oplw( long parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	return char_1;
}
float v__movsx_m2r_opwb( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 + int_1;
	long_1 = long_1 * long_1;
	int_3 = int_3;
	return float_1;
}
long v__movsx_r2r_oplb_l( double parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
double v__movsx_r2r_oplb_u( char parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_1;
	int_1 = int_1 * int_1;
	return double_1;
}
unsigned int v__movsx_r2r_oplw( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_1;
	long_2 = long_1 * long_1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	return unsigned_int_2;
}
short v__movsx_r2r_opwb_l( double parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_5 = 1;
	float_2 = float_1 * float_1;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_2;
	double_2 = double_1 + double_2;
	double_2 = double_3 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_3;
		char_3 = char_2 * char_1;
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		if(1)
		{
			short short_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short_4 = short_1 * short_4;
			short_1 = short_1 * short_4;
			if(1)
			{
				int_1 = int_1 * int_1;
				char_2 = char_1 * char_3;
			}
			long_3 = long_1 * long_2;
			double_5 = double_3 + double_4;
			int_2 = int_2 + int_1;
		}
		int_2 = int_1 + int_2;
	}
	return short_5;
}
double v__movsx_r2r_opwb_u( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") > 0)
	{
		double double_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_1 + int_1;
	}
	return double_2;
}
double v__cwde( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_1;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		char_2 = char_3;
		if(1)
		{
		}
	}
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	return double_4;
}
char v_r2m_xfer_opb_l( char parameter_1,int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_1;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	float_1 = float_1 + float_1;
	double_3 = double_2 * double_1;
	int_2 = int_2 * int_1;
	int_2 = int_3;
	double_2 = double_2 + double_1;
	double_3 = double_1 + double_3;
	float_2 = float_3;
	int_4 = int_1 * int_4;
	double_3 = double_4 * double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_1 = double_2 * double_5;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		float_4 = float_2 + float_1;
	}
	int_2 = int_4 * int_3;
	short_3 = short_1 + short_2;
	float_5 = float_3;
	return char_1;
}
float v_r2m_xfer_opb_u( char parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	float_1 = float_1 * float_2;
	int_3 = int_2 + int_2;
	int_2 = int_2 * int_3;
	long_2 = long_1 + long_2;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return float_2;
}
float v_r2m_xfer_opw( int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double_3 = double_1 * double_2;
	double_3 = double_2 * double_3;
	long_1 = long_1 + long_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_5;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_3;
	char_1 = char_1 * char_1;
	double_1 = double_5 + double_1;
	return float_1;
	v_tag_dir_setb(char_1,char_1,double_6,-1 );

}
void v_r2m_xfer_opl( long parameter_1,unsigned int parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	int_1 = int_1;
	int_1 = int_1;
}
char v_m2r_xfer_opb_l( long parameter_1,short parameter_2,float parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "WK") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_2 = double_1 * double_1;
		int_5 = int_2 + int_4;
	}
	return char_1;
}
unsigned int v_m2r_xfer_opb_u( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short_3 = short_1 + short_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		if(1)
		{
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				if(1)
				{
					int_1 = int_1 * int_1;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
				}
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					long_1 = long_2;
				}
				if(1)
				{
					int_1 = int_1 * int_1;
				}
				char controller_9[3];
				fgets(controller_9 ,3 ,stdin);
				if( strcmp( controller_9, ")^") > 0)
				{
					int_3 = int_2 * int_3;
				}
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
				}
				if(1)
				{
					double double_1 = 1;
					double_1 = double_1;
				}
				int_2 = int_2 + int_3;
			}
		}
		int_4 = int_3;
	}
	return unsigned_int_6;
}
char v_m2r_xfer_opw( char parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_3 + int_3;
	return char_1;
}
void v_m2r_xfer_opl( long parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	float_2 = float_1 + float_1;
	int_1 = int_2;
}
short v_r2r_xfer_opb_ul( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_2;
	return short_1;
}
void v_r2r_xfer_opb_lu( double parameter_1,char parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_2;
}
long v_r2r_xfer_opb_u( int parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "n") > 0)
		{
		}
	}
	return long_1;
}
float v_r2r_xfer_opb_l( float parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int_1 = int_1 * int_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_2;
	double_4 = double_1 * double_3;
	char_2 = char_1 + char_2;
	char_2 = char_3 + char_4;
	char_5 = char_2 * char_3;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_5 = double_2 * double_3;
		}
	}
	double_3 = double_4 + double_4;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return float_1;
}
float v_r2r_xfer_opw( short parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_2;
	return float_1;
}
short v_r2r_xfer_opl( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	double_3 = double_2 + double_1;
	short_1 = short_2;
	float_1 = float_2;
	if(1)
	{
		long_1 = long_1 * long_1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 + double_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float_1 = float_1 * float_3;
		int_1 = int_3 + int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
		int_3 = int_1 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		short_3 = short_1 + short_2;
		long_3 = long_2 * long_2;
	}
	float_3 = float_3 * float_2;
	return short_3;
}
unsigned int v_r2m_binary_opb_l( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_1;
		}
	}
	if(1)
	{
	}
	v_tag_dir_setb(char_1,char_1,double_1,-1 );

	double_1 = double_2 * double_2;
	int_2 = int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				char controller_5[2];
				fgets(controller_5 ,2 ,stdin);
				if( strcmp( controller_5, "T") < 0)
				{
					double_1 = double_3 * double_2;
				}
				if(1)
				{
					double_3 = double_1 + double_1;
				}
				if(1)
				{
					char_1 = char_2 + char_2;
				}
				if(1)
				{
					char_2 = v_tag_combine(long_1,short_1);

					unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
					if(1)
					{
						char char_3 = 1;
						char char_4 = 1;
						char_4 = char_3 + char_2;
					}
				}
			}
			if(1)
			{
				float float_1 = 1;
				float_1 = float_1 + float_1;
				if(1)
				{
					int_2 = int_1 + int_2;
				}
			}
		}
	}
	short_1 = short_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			}
		}
	}
	return unsigned_int_2;
}
short v_r2m_binary_opb_u( short parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	v_tag_dir_setb(char_1,char_2,double_2,-1 );

	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	double_3 = double_1 + double_1;
	if(1)
	{
		long long_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_2 = long_1 + long_1;
		short_2 = short_1 + short_1;
		char_2 = char_1;
		char_1 = v_tag_combine(long_2,short_1);

		short_4 = short_3 + short_2;
		short_5 = short_2 * short_1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		int_1 = int_1 * int_4;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_4 = int_5 * int_6;
		if(1)
		{
			int_1 = int_3 + int_6;
		}
	}
	char_2 = char_2 + char_2;
	unsigned_int_3 = unsigned_int_2;
	return short_2;
}
short v_r2m_binary_opw( long parameter_1,long parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	v_tag_dir_setb(char_1,char_2,double_1,-1 );

	int_4 = int_3 * int_2;
	int_3 = int_4;
	return short_4;
	char_2 = v_tag_combine(long_1,short_4);

}
short v_r2m_binary_opl( short parameter_1,int parameter_2,double parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	return short_1;
	char_1 = v_tag_combine(long_1,short_1);

	v_tag_dir_setb(char_1,char_1,double_1,-1 );

}
float v_m2r_binary_opb_l( float parameter_1,double parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	return float_1;
	char_1 = v_tag_combine(long_1,short_1);

}
long v_m2r_binary_opb_u( short parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
	char_1 = v_tag_combine(long_2,short_1);

}
void v_m2r_binary_opw( long parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	char char_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	long long_5 = 1;
	int int_7 = 1;
	double double_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	char char_3 = 1;
	int int_11 = 1;
	int int_12 = 1;
	int int_13 = 1;
	int int_14 = 1;
	char char_4 = 1;
	double double_9 = 1;
	char char_5 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_8 = 1;
	int int_16 = 1;
	int int_17 = 1;
	short short_3 = 1;
	long long_9 = 1;
	long long_10 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_11 = 1;
	short short_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	long long_12 = 1;
	int int_18 = 1;
	double double_12 = 1;
	short short_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_13 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_12 = 1;
	double double_14 = 1;
	short short_6 = 1;
	double double_15 = 1;
	int int_19 = 1;
	int int_20 = 1;
	double double_17 = 1;
	float float_9 = 1;
	float float_10 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 * short_1;
	float_3 = float_3 + float_3;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	double_1 = double_1;
	double_2 = double_2 * double_2;
	int_4 = int_3 + int_1;
	if(1)
	{
		long_3 = long_1 * long_2;
		int_3 = int_1 * int_1;
	}
	unsigned_int_5 = unsigned_int_2;
	short_1 = short_1 + short_2;
	float_4 = float_3 * float_1;
	double_4 = double_1 * double_3;
	float_3 = float_5 + float_1;
	int_5 = int_1 * int_3;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_6;
	if(1)
	{
		if(1)
		{
			long_4 = long_3 + long_2;
			char_2 = v_tag_combine(long_1,short_2);

			int_2 = int_6;
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
		}
		unsigned_int_7 = unsigned_int_7 * unsigned_int_6;
	}
	if(1)
	{
		double_2 = double_1 + double_5;
	}
	short_2 = short_2 + short_1;
	double_2 = double_2 * double_2;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
	if(1)
	{
		long_2 = long_5 + long_1;
	}
	unsigned_int_4 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
	int_1 = int_6;
	int_7 = int_3 + int_3;
	double_2 = double_5 + double_6;
	short_2 = short_1 * short_1;
	int_2 = int_6 + int_1;
	float_5 = float_5 * float_2;
	if(1)
	{
		int_9 = int_8 + int_9;
		if(1)
		{
			double_3 = double_3 + double_7;
		}
		if(1)
		{
			char_2 = char_2 + char_1;
		}
		if(1)
		{
			int_5 = int_5 * int_6;
		}
	}
	int_3 = int_2 + int_4;
	double_8 = double_1 * double_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	int_5 = int_10 * int_4;
	short_2 = short_2;
	unsigned_int_8 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
	double_1 = double_5 + double_3;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	long_5 = long_2 + long_6;
	char_1 = char_3 + char_3;
	char_1 = char_1 * char_1;
	int_11 = int_6 * int_7;
	long_6 = long_3 * long_6;
	double_5 = double_4;
	if(1)
	{
		double_2 = double_3 + double_2;
		double_5 = double_3;
		int_2 = int_3 + int_4;
		if(1)
		{
			long_1 = long_2 * long_1;
			int_2 = int_4 * int_1;
			double_3 = double_7 * double_6;
			int_4 = int_7 * int_9;
			int_12 = int_8 + int_5;
			float_5 = float_2;
		}
		if(1)
		{
			double_4 = double_6 + double_4;
			int_14 = int_13 + int_11;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char_3 = char_2 * char_4;
			}
			int_5 = int_10;
		}
		float_2 = float_4 + float_4;
	}
	double_5 = double_1;
	double_4 = double_6 + double_9;
	char_5 = char_4;
	char_4 = char_4 + char_2;
	if(1)
	{
		unsigned_int_7 = unsigned_int_1;
		long_7 = long_3 * long_2;
		double_2 = double_7 + double_8;
		if(1)
		{
			unsigned_int_10 = unsigned_int_9 + unsigned_int_8;
			double_9 = double_1 * double_7;
		}
		if(1)
		{
			int int_15 = 1;
			double_3 = double_9 + double_1;
			double_5 = double_3 * double_4;
			long_3 = long_5 + long_8;
			int_12 = int_15 * int_2;
		}
	}
	int_16 = int_16 + int_6;
	unsigned_int_10 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 + int_17;
	short_3 = short_2 * short_2;
	long_2 = long_3 * long_5;
	double_2 = double_3 + double_8;
	double_6 = double_3 * double_3;
	int_11 = int_8 * int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	double_4 = double_3 + double_3;
	unsigned_int_2 = unsigned_int_10 + unsigned_int_10;
	char_1 = char_3;
	long_5 = long_6 * long_9;
	long_10 = long_2;
	char_2 = char_6 + char_1;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_10;
	char controller_17[3];
	fgets(controller_17 ,3 ,stdin);
	if( strcmp( controller_17, "Hn") < 0)
	{
		long_9 = long_4 + long_10;
		unsigned_int_11 = unsigned_int_6 + unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	double_4 = double_5 + double_5;
	unsigned_int_9 = unsigned_int_11 + unsigned_int_4;
	long_1 = long_11 + long_9;
	short_2 = short_4 * short_2;
	short_1 = short_4 + short_3;
	long_8 = long_6 * long_2;
	double_1 = double_8 + double_6;
	unsigned_int_9 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_10 = unsigned_int_6;
	char_3 = char_3 + char_5;
	short_4 = short_4 + short_1;
	char_4 = char_6 + char_4;
	short_3 = short_2 + short_3;
	unsigned_int_9 = unsigned_int_2 * unsigned_int_9;
	int_17 = int_5 * int_6;
	int_3 = int_13 * int_10;
	double_11 = double_1 * double_10;
	double_2 = double_9 + double_3;
	int_6 = int_16 + int_8;
	int_10 = int_9 + int_1;
	long_11 = long_7;
	double_5 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_9;
	short_1 = short_2;
	double_10 = double_4 + double_10;
	long_3 = long_10 + long_12;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	int_9 = int_16 + int_18;
	double_10 = double_12;
	unsigned_int_11 = unsigned_int_2 + unsigned_int_1;
	short_4 = short_5 * short_5;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_2;
	float_6 = float_2;
	double_4 = double_8 + double_5;
	int_12 = int_18 + int_6;
	if(1)
	{
		float_7 = float_6 * float_1;
	}
	unsigned_int_5 = unsigned_int_9 * unsigned_int_1;
	if(1)
	{
		double_1 = double_13 * double_11;
		double_1 = double_8 + double_8;
	}
	char_4 = char_7 * char_3;
	if(1)
	{
		long_5 = long_3 * long_9;
	}
	int_14 = int_10 + int_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_12 + unsigned_int_9;
	}
	unsigned_int_6 = unsigned_int_8 + unsigned_int_4;
	if(1)
	{
		float_2 = float_6;
	}
	double_13 = double_3 + double_8;
	if(1)
	{
		char_7 = char_3 + char_5;
	}
	double_3 = double_14 * double_14;
	if(1)
	{
		short_3 = short_2 + short_3;
		short_2 = short_6 * short_5;
		if(1)
		{
			if(1)
			{
				double_15 = double_5 * double_7;
			}
			if(1)
			{
				short short_7 = 1;
				short_2 = short_7;
				double_12 = double_4 + double_14;
			}
		}
		if(1)
		{
			int_14 = int_11 + int_12;
			float_1 = float_6 + float_6;
		}
		if(1)
		{
			long_12 = long_12;
		}
	}
	float_6 = float_2;
	if(1)
	{
		double_10 = double_9 + double_15;
		float_2 = float_4 * float_4;
	}
	double_15 = double_13;
	if(1)
	{
		float float_8 = 1;
		unsigned int unsigned_int_13 = 1;
		unsigned_int_12 = unsigned_int_4;
		float_7 = float_8 * float_4;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_13;
		int_2 = int_19 * int_14;
	}
	double_15 = double_6 + double_10;
	if(1)
	{
		double double_16 = 1;
		char char_8 = 1;
		char char_9 = 1;
		float_1 = float_5 + float_4;
		unsigned_int_7 = unsigned_int_8 + unsigned_int_5;
		double_13 = double_13 * double_2;
		double_16 = double_2 + double_7;
		int_5 = int_5 * int_6;
		char_4 = char_8 + char_9;
		short_5 = short_5 + short_6;
		unsigned_int_10 = unsigned_int_2;
		if(1)
		{
			double_13 = double_14 * double_10;
		}
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		short short_8 = 1;
		short_6 = short_8 + short_2;
		int_19 = int_12 * int_2;
	}
	int_17 = int_20 + int_5;
	int_9 = int_3 * int_6;
	double_10 = double_17 + double_5;
	float_10 = float_6 + float_9;
	int_17 = int_2 + int_6;
}
void v_m2r_binary_opl( double parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
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
	int_1 = int_1;
	double_3 = double_1 + double_2;
	int_2 = int_2 + int_1;
	double_3 = double_3;
	if(1)
	{
		char_1 = v_tag_combine(long_1,short_1);

		int_1 = int_3 * int_4;
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
	long_3 = long_1 + long_3;
	int_2 = int_4 * int_4;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	double_3 = double_4;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_2 * char_2;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_3 * double_5;
	}
	if(1)
	{
	}
	short_1 = short_1;
}
short v_r2r_binary_opb_ul( long parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	short short_2 = 1;
	char_1 = v_tag_combine(long_1,short_1);

	char_1 = char_2 * char_3;
	double_1 = double_1 + double_2;
	char_1 = char_4;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "+=") < 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_2;
		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return short_2;
}
void v_r2r_binary_opb_lu( char parameter_1,long parameter_2,float parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char_1 = v_tag_combine(long_1,short_1);

	int_2 = int_1 * int_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_2;
	int_3 = int_3 * int_3;
}
short v_r2r_binary_opb_u( unsigned int parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	return short_1;
	char_1 = v_tag_combine(long_1,short_2);

}
unsigned int v_r2r_binary_opb_l( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "-.") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_4 = int_1 + int_3;
		int_3 = int_2 + int_4;
		char_1 = v_tag_combine(long_1,short_1);

		double_2 = double_1 + double_2;
		char_2 = char_3;
		int_4 = int_2;
	}
	return unsigned_int_1;
}
int v_r_clrb_l( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1 * int_2;
	}
	return int_2;
}
void v_REG8_INDX( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_1 + int_2;
	char_2 = char_1 * char_1;
}
double v_r_clrb_u( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return double_1;
}
void v_r2r_binary_opw( int parameter_1,short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_2;
	double_1 = double_4 * double_3;
	char_1 = v_tag_combine(long_1,short_1);

}
float v_REG16_INDX( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	int_2 = int_3 + int_4;
	int_1 = int_3 * int_2;
	long_2 = long_1 + long_2;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	int_2 = int_1;
	return float_1;
}
unsigned int v_r_clrw( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	long_1 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_2;
	return unsigned_int_2;
}
char v_tag_combine( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	return char_1;
}
double v_r2r_binary_opl( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			double double_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char_1 = char_1 + char_1;
			if(1)
			{
				char char_3 = 1;
				short short_2 = 1;
				short short_4 = 1;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned_int_3 = unsigned_int_2;
					unsigned_int_4 = unsigned_int_1;
				}
				char_2 = v_tag_combine(long_1,short_1);

				char_3 = char_2 * char_3;
				short_3 = short_2 * short_1;
				short_1 = short_3 * short_4;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				if(1)
				{
					char char_4 = 1;
					short_1 = short_3;
					char_1 = char_4 + char_1;
				}
				double_3 = double_1 * double_2;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
				float_1 = float_2;
			}
			double_5 = double_4 * double_4;
			int_2 = int_1 + int_2;
		}
	}
	return double_4;
}
long v_REG32_INDX( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "P") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return long_1;
}
void v_r_clrl( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "31") == 0)
	{
	}
	if(1)
	{
	}
	short_3 = short_2;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_1;
	char_2 = char_3 * char_3;
	int_3 = int_2 + int_3;
	if(1)
	{
	}
	int_2 = int_2;
	short_4 = short_3 + short_4;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_3 * int_4;
	long_1 = long_1 + long_1;
	long_1 = long_2 * long_1;
	if(1)
	{
	}
	int_5 = int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
}
void v_ins_inspect( double parameter_1,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		char controller4vul_1975[3];
		fgets(controller4vul_1975 ,3 ,stdin);
		if( strcmp( controller4vul_1975, "pN") > 0)
		{
			double_1 = v_r2m_xfer_opwn(unsigned_int_1,short_1,char_2,float_1,uni_para);

			char_3 = char_2 * char_1;
		}
	}
	int_1 = int_1;
	if(1)
	{
		char_3 = char_1;
	}
	int_1 = int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	long_1 = long_1 + long_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
}
void v_trace_inspect( short parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_2;
	char controller4vul_1973[2];
	fgets(controller4vul_1973 ,2 ,stdin);
	if( strcmp( controller4vul_1973, "R") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
		char controller4vul_1974[3];
		fgets(controller4vul_1974 ,3 ,stdin);
		if( strcmp( controller4vul_1974, "yz") < 0)
		{
			v_ins_inspect(double_4,uni_para);

		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_2;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				double double_5 = 1;
				double_5 = double_2 + double_3;
			}
		}
	}
}
void v_tagmap_clrq( int parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	v_tagmap_clrl(double_1);

}
void v_tagmap_clrl( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = v_tagmap_clrw(int_2);

}
unsigned int v_tagmap_clrw( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	int_1 = int_1 * int_1;
	short_3 = short_2 + short_2;
	int_2 = int_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
		v_tagmap_clrb(float_1);

		char_1 = char_1;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	short_1 = short_1 + short_1;
	return unsigned_int_3;
}
double v_virt2offset( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 985)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	int_1 = int_2;
}
unsigned int v_virt2page()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
char v_virt2table( long parameter_1)
{
	char char_1 = 1;
	return char_1;
}
void v_tag_dir_setb( char parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	char controller4vul_1979[3];
	fgets(controller4vul_1979 ,3 ,stdin);
	if( strcmp( controller4vul_1979, "EV") < 0)
	{
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_1980[3];
		fgets(controller4vul_1980 ,3 ,stdin);
		if( strcmp( controller4vul_1980, ": ") > 0)
		{
			char char_1 = 1;
			float float_1 = 1;
			double_1 = v_virt2offset(long_1,uni_para);

			char_1 = char_1 * char_1;
			float_1 = float_1;
		}
		double_4 = double_2 * double_3;
	}
	double_5 = double_4 * double_3;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		char_3 = char_2 * char_3;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_6 = double_6 + double_4;
		}
		long_1 = long_1 * long_2;
		int_2 = int_1 + int_1;
	}
	double_5 = double_7 + double_4;
	int_1 = int_3 + int_2;
}
void v_tagmap_clrb( float parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int_1 = int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_3 = 1;
		short_2 = short_2 * short_1;
		short_3 = short_4;
		v_tag_dir_setb(char_1,char_1,double_3,-1 );

		short_3 = short_1 + short_1;
		int_1 = int_2 + int_2;
		double_1 = double_2 + double_3;
		float_1 = float_1 + float_1;
		int_2 = int_1 + int_3;
		float_3 = float_2 * float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		char char_2 = 1;
		long long_1 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		char_2 = char_2 + char_1;
		float_3 = float_2 + float_4;
		long_1 = long_1;
	}
	float_1 = float_4 * float_3;
}
void v_tagmap_clrn( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_tagmap_clrb(float_1);

	int_2 = int_1 * int_1;
	v_tagmap_clrq(int_1);

	char_1 = char_1 * char_2;
	int_1 = int_2 * int_2;
	unsigned_int_1 = v_tagmap_clrw(int_3);

	v_tagmap_clrl(double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
long v_sysexit_save( unsigned int parameter_1,short parameter_2,float parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	float_1 = float_2;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_3 = 1;
		v_tagmap_clrn(char_1,char_1);

		float_1 = float_3 * float_4;
	}
	if(1)
	{
		double double_3 = 1;
		float float_5 = 1;
		double double_4 = 1;
		double_2 = double_2 + double_3;
		float_2 = float_4 * float_5;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "n") < 0)
		{
			double_2 = double_4 * double_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "o") > 0)
		{
			if(1)
			{
			}
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					if(1)
					{
						double_1 = double_4;
					}
				}
			}
		}
	}
	return long_1;
}
void v_sysenter_save( unsigned int parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		char char_3 = 1;
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_4 = 1;
			int_3 = int_1 + int_2;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
			int_1 = int_3 * int_2;
			unsigned_int_4 = unsigned_int_5;
			int_3 = int_3;
			double_4 = double_2 + double_3;
			int_4 = int_2 + int_1;
		}
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			double double_5 = 1;
			char_2 = char_2;
			long_2 = long_1 + long_1;
			double_3 = double_4 * double_1;
			int_2 = int_5 + int_6;
			long_1 = long_2 + long_3;
			int_5 = int_2 * int_1;
			double_4 = double_5;
		}
		char_1 = char_1 + char_3;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 * long_2;
		}
	}
}
int v_tagmap_alloc()
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
float v_thread_free( char parameter_1,float parameter_2,char parameter_3,double parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1;
	return float_1;
}
void v_tagmap_free()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
}
void v_libdft_die()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1;
	v_tagmap_free();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
char v_thread_alloc( short parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		v_libdft_die();

		double_1 = double_1 + double_1;
	}
	double_2 = double_2 * double_3;
	return char_3;
}
double v_thread_ctx_init()
{
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "U") < 0)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
	}
	unsigned_int_1 = unsigned_int_2;
	char_1 = v_thread_alloc(short_1,unsigned_int_3,double_1,short_2);

	float_2 = v_thread_free(char_1,float_2,char_2,double_1);

	double_1 = double_2 + double_3;
	return double_1;
}
int v_libdft_init(int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char controller4vul_1972[3];
	fgets(controller4vul_1972 ,3 ,stdin);
	if( strcmp( controller4vul_1972, "H}") < 0)
	{
		v_trace_inspect(short_1,double_1,uni_para);

	}
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_2;
	char_1 = char_1 + char_2;
	return int_1;
}
short v_CheckMagicOnWrite( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "v;") < 0)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return short_1;
}
char v_CheckMagicOnRead( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return char_1;
}
double v_CheckMagicValue( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			int int_2 = 1;
			char_1 = v_CheckMagicOnRead(int_1,short_1);

			int_1 = int_2;
		}
	}
	return double_4;
	short_2 = v_CheckMagicOnWrite(unsigned_int_1,short_1);

}
void v_LeaRawKnob( char parameter_1,char parameter_2,long parameter_3,short parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		float_1 = float_1 * float_1;
		int_1 = int_3 + int_4;
	}
	double_2 = double_1 * double_2;
	int_2 = int_3 + int_1;
	int_1 = int_5 + int_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		short_3 = short_3;
	}
	if(1)
	{
		float float_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		float_2 = float_1 * float_1;
		int_2 = int_2 + int_5;
		char_3 = char_2 + char_2;
		float_3 = float_3 * float_2;
	}
	double_2 = double_2;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3;
	}
	if(1)
	{
		short_1 = short_2 + short_2;
	}
}
unsigned int v_ReadRawKnob( char parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2;
	char_2 = char_3 + char_1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_4 = char_2;
	short_3 = short_3;
	unsigned_int_3 = unsigned_int_3;
	long_1 = long_2;
	float_1 = float_1 + float_1;
	return unsigned_int_2;
}
int v_OnExit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_ReadRawKnob(char_1,int_1,char_1,unsigned_int_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
	v_LeaRawKnob(char_2,char_2,long_1,short_1,char_2);

}
unsigned int v_KnobLibC( long parameter_1,short parameter_2,short parameter_3,float parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_ImageLoad( long parameter_1,float parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		float_1 = float_1 * float_1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = v_KnobLibC(long_1,short_1,short_2,float_1,double_1);

		double_4 = double_2 + double_3;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				long long_2 = 1;
				long_3 = long_2 * long_2;
			}
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller_5[3];
			fgets(controller_5 ,3 ,stdin);
			if( strcmp( controller_5, "OL") > 0)
			{
				int int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_2 = 1;
				int_1 = int_1 * int_1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
				int_1 = int_1 * int_2;
				double_4 = double_1 + double_1;
			}
		}
	}
	return long_3;
}
int main()
{
	int uni_para =985;
	short short_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	float float_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_1971[2];
	fgets(controller4vul_1971 ,2 ,stdin);
	if( strcmp( controller4vul_1971, "t") < 0)
	{
		long long_1 = 1;
		int_1 = v_libdft_init(uni_para);

		long_2 = long_1 * long_1;
	}
	double_2 = double_1 * double_1;
	float_3 = float_1 + float_2;
	long_4 = long_2 + long_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_2 = int_3;
	double_2 = double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double_2 = double_3;
	}
	double_4 = double_3 * double_1;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double_3 = double_4 + double_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	double_5 = double_2 + double_5;
	int_1 = int_1 * int_4;
	double_2 = double_6 * double_3;
	double_5 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 + double_3;
	short_1 = short_2;
	int_5 = int_2 * int_2;
	char_1 = char_1 + char_1;
	char_2 = char_1;
	int_6 = int_1 + int_2;
	float_4 = float_3 * float_3;
	float_3 = float_1;
	unsigned_int_2 = unsigned_int_2;
	double_4 = double_6;
	double_8 = double_7 + double_1;
	short_2 = short_2;
	float_1 = float_4 * float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_6 = int_6;
	return int_4;
}

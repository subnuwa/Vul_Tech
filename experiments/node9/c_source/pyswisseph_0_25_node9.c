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

float v_swi_get_fict_name( long parameter_1,char parameter_2);
double v_swe_get_planet_name( int parameter_1,char parameter_2);
char v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5);
short v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
unsigned int v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3);
double v_main_planet_bary( double parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
float v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,char parameter_3,char parameter_4,int uni_para);
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3);
short v_check_t_terms( double parameter_1,char parameter_2,double parameter_3);
unsigned int v_read_elements_file( char parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,int parameter_12,char parameter_13);
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7);
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3);
unsigned int v_intp_apsides( double parameter_1,int parameter_2,long parameter_3,char parameter_4);
int v_swi_plan_for_osc_elem( int parameter_1,double parameter_2,double parameter_3);
short v_lunar_osc_elem( double parameter_1,int parameter_2,char parameter_3,char parameter_4);
long v_corr_mean_apog( double parameter_1);
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3);
void v_app_pos_etc_mean( int parameter_1,int parameter_2,char parameter_3);
void v_swe_difrad2n( double parameter_1,double parameter_2);
double v_swi_mod2PI( double parameter_1);
unsigned int v_corr_mean_node( double parameter_1);
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3);
void v_app_pos_etc_sbar( unsigned int parameter_1,char parameter_2);
double v_swi_armc_to_mc( double parameter_1,double parameter_2);
long v_meff( double parameter_1);
void v_swi_deflect_light( double parameter_1,double parameter_2,long parameter_3);
int v_app_pos_etc_plan( int parameter_1,short parameter_2,char parameter_3);
char v_app_pos_etc_sun( float parameter_1,char parameter_2,int uni_para);
int v_main_planet( double parameter_1,int parameter_2,double parameter_3,int parameter_4,char parameter_5,int uni_para);
void v_swi_icrs2fk5( double parameter_1,short parameter_2,long parameter_3);
void v_swi_FK4_FK5( double parameter_1,double parameter_2);
int v_swi_right_trim( char parameter_1);
unsigned int v_swe_fixstar( char parameter_1,double parameter_2,char parameter_3,double parameter_4,char parameter_5,int uni_para);
double v_swe_get_ayanamsa_ex( double parameter_1,int parameter_2,double parameter_3,char parameter_4,int uni_para);
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,short parameter_3);
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_app_pos_rest( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,int uni_para);
long v_swi_approx_jplhor( double parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4);
void v_swi_bias( double parameter_1,double parameter_2,int parameter_3,char parameter_4);
double v_get_denum( unsigned int parameter_1,unsigned int parameter_2);
void v_swi_aberr_light( double parameter_1,double parameter_2,double parameter_3);
void v_swi_cartpol_sp( double parameter_1,double parameter_2);
void v_swi_precess_speed( double parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
void v_swi_nutate( double parameter_1,double parameter_2,short parameter_3);
void v_swi_polcart_sp( double parameter_1,double parameter_2);
void v_sidtime_non_polynomial_part( double parameter_1);
void v_swi_cartpol( double parameter_1,double parameter_2);
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3);
short v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3);
char v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_init_dt();
int v_deltat_aa( double parameter_1,double parameter_2);
void v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2);
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3);
int v_deltat_longterm_morrison_stephenson( double parameter_1);
unsigned int v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2);
int v_calc_deltat( double parameter_1,double parameter_2,double parameter_3,char parameter_4);
short v_swi_guess_ephe_flag();
void v_swe_deltat( double parameter_1);
double v_deltat( double parameter_1);
long v_swe_deltat_ex( double parameter_1,double parameter_2,char parameter_3);
int v_swi_get_observer( double parameter_1,short parameter_2,int parameter_3,double parameter_4,char parameter_5);
void v_app_pos_etc_moon( float parameter_1,char parameter_2);
long v_embofs_mosh( double parameter_1,double parameter_2);
float v_sscc_81( int parameter_1,double parameter_2,int parameter_3);
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3);
int v_swi_moshplan( double parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5,char parameter_6);
short v_swemoon( double parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5);
unsigned int v_embofs( double parameter_1,double parameter_2);
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3,int uni_para);
char v_pre_pecl( double parameter_1,double parameter_2);
void v_pre_pequ( double parameter_1,double parameter_2);
char v_pre_pmat( double parameter_1,double parameter_2,int uni_para);
double v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_precess_2( double parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5);
float v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
int v_swi_precess( double parameter_1,double parameter_2,float parameter_3,int parameter_4,int uni_para);
void v_swi_coortrf2( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_swi_polcart( double parameter_1,double parameter_2);
float v_ecldat_equ2000( double parameter_1,double parameter_2,int uni_para);
float v_moon4();
short v_moon3();
long v_moon2();
int v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5);
double v_sscc( int parameter_1,double parameter_2,int parameter_3);
int v_moon1();
void v_mean_elements_pl();
unsigned int v_mods3600( double parameter_1);
double v_mean_elements();
int v_swi_moshmoon2( double parameter_1,double parameter_2);
int v_swi_moshmoon( double parameter_1,short parameter_2,double parameter_3,char parameter_4,int uni_para);
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3);
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3);
long v_rot_back( int parameter_1);
short v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
char v_init_crc32();
float v_swi_crc32( long parameter_1,int parameter_2);
short v_do_fread(int parameter_2,int parameter_3,int parameter_4,long parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10);
unsigned int v_strncpy( unsigned int parameter_1,int parameter_2,short parameter_3);
short v_read_const( int parameter_1,char parameter_2);
float v_swi_strcpy( char parameter_1,char parameter_2);
short v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6);
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3);
int v_sweph( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5,long parameter_6,double parameter_7,char parameter_8);
short v_sweplan( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10,int uni_para);
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5);
long v_swi_get_tid_acc( double parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5,char parameter_6);
float v_swi_set_tid_acc( double parameter_1,char parameter_2,short parameter_3,char parameter_4);
int v_swi_get_jpl_denum();
short v_interp( double parameter_1,double parameter_2,double parameter_3,short parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,double parameter_8);
void v_reorder( char parameter_1,int parameter_2,int parameter_3);
long v_if( double parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4,unsigned int parameter_5,float parameter_6,int parameter_7);
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4);
unsigned int v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4);
float v_fsizer( char parameter_1);
char v_state( double parameter_1,float parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
double v_read_const_jpl( double parameter_1,char parameter_2);
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
short v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
double v_jplplan( double parameter_1,int parameter_2,long parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
long v_nut_matrix( int parameter_1,long parameter_2);
double v_bessel( double parameter_1,int parameter_2,double parameter_3);
unsigned int v_swe_radnorm( double parameter_1);
short v_swi_nutation_iau2000ab( double parameter_1,double parameter_2);
unsigned int v_swe_degnorm( double parameter_1);
long v_swi_nutation_iau1980( double parameter_1,double parameter_2);
int v_swi_nutation( double parameter_1,short parameter_2,double parameter_3);
void v_swi_check_nutation( double parameter_1,char parameter_2);
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3);
double v_swi_epsiln( double parameter_1,char parameter_2);
void v_calc_epsilon( double parameter_1,short parameter_2,short parameter_3);
void v_swi_check_ecliptic( double parameter_1,int parameter_2);
double v_for( char parameter_1);
void v_swi_force_app_pos_etc();
float v_swe_set_sid_mode( unsigned int parameter_1,double parameter_2,double parameter_3);
int v_plaus_iflag( double parameter_1,long parameter_2,double parameter_3,char parameter_4);
void v_swecalc( double parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,char parameter_5,int uni_para);
float v_swe_calc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para);
void v_swi_init_swed_if_start();
void v_swe_set_tid_acc( double parameter_1);
void v_swi_close_jpl_file();
char v_free_planets();
long v_memset( char parameter_1,long parameter_2,char parameter_3);
int v_swi_close_keep_topo_etc();
unsigned int v_swe_set_ephe_path( char parameter_1,int uni_para);
float v_swi_get_fict_name( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		unsigned_int_1 = v_read_elements_file(char_1,double_1,double_1,double_2,double_2,double_3,double_1,double_4,double_2,double_2,char_2,int_1,char_2);

		long_1 = long_1 * long_1;
	}
	return float_1;
}
double v_swe_get_planet_name( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_6 = 1;
		short short_2 = 1;
		char_1 = char_1 + char_2;
		double_2 = double_1 + double_1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				if(1)
				{
					short short_1 = 1;
					float float_1 = 1;
					if(1)
					{
						int int_3 = 1;
						int_1 = v_sweph(double_3,int_2,int_1,unsigned_int_2,double_4,long_1,double_5,char_2);

						int_1 = v_swi_right_trim(char_3);

						double_5 = double_1 + double_1;
						int_3 = int_2;
						double_3 = double_6 + double_4;
					}
					short_1 = short_1 * short_1;
					float_2 = float_1 * float_1;
					short_1 = short_2 + short_1;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					double_1 = double_5 + double_6;
					if(1)
					{
						int int_4 = 1;
						int int_6 = 1;
						if(1)
						{
							unsigned int unsigned_int_3 = 1;
							char_2 = char_3 + char_2;
							int_5 = int_4 + int_2;
							unsigned_int_3 = unsigned_int_3;
						}
						v_swi_init_swed_if_start();

						unsigned_int_4 = v_swi_fopen(int_5,char_1,char_4,char_3);

						int_2 = int_1 + int_6;
						short_2 = short_2 + short_2;
						float_2 = v_swi_get_fict_name(long_2,char_5);

						int_5 = int_4 + int_2;
					}
				}
			}
		}
	}
	return double_2;
}
char v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_2;
	char_2 = char_2 + char_3;
	float_1 = float_1 + float_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_2 * float_3;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		long_2 = long_1;
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "D&") > 0)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return char_3;
}
short v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			double_2 = double_1 + double_1;
			double_2 = double_2 * double_3;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			int_2 = int_3 + int_2;
		}
	}
	return short_1;
}
unsigned int v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "d=") < 0)
		{
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	return unsigned_int_2;
}
double v_main_planet_bary( double parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 * short_2;
		if(1)
		{
			int_1 = v_swi_moshplan(double_1,int_1,int_1,double_1,double_2,char_1);

			int_2 = int_1 * int_2;
		}
		double_2 = v_jplplan(double_3,int_3,long_1,long_2,double_2,double_3,double_3,char_2);

		long_1 = long_1 * long_2;
	}
	int_4 = int_2 + int_4;
	int_5 = int_5 * int_3;
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
			double double_5 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				float_1 = float_3 + float_2;
			}
			double_4 = double_5;
		}
		if(1)
		{
			int_5 = int_1;
		}
	}
	char_1 = char_2 + char_3;
	if(1)
	{
		int int_6 = 1;
		int_6 = int_3;
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_2 * float_3;
	}
	char_5 = char_4 * char_3;
	long_3 = long_3;
	return double_2;
	short_1 = v_sweplan(double_2,int_3,int_3,unsigned_int_2,short_2,double_3,double_2,double_4,double_6,char_1,-1 );

}
float v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,char parameter_3,char parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	int int_1 = 1;
	long long_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_4 = 1;
	float float_8 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	float_3 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1;
	float_2 = float_4 + float_5;
	long_1 = long_3 * long_2;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	double_2 = double_2 * double_1;
	if(1)
	{
		float_6 = float_4 * float_2;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long_5 = long_2 * long_4;
	}
	char controller4vul_2305[2];
	fgets(controller4vul_2305 ,2 ,stdin);
	if( strcmp( controller4vul_2305, "n") > 0)
	{
		char controller4vul_2306[2];
		fgets(controller4vul_2306 ,2 ,stdin);
		if( strcmp( controller4vul_2306, ";") > 0)
		{
			char controller4vul_2307[2];
			fgets(controller4vul_2307 ,2 ,stdin);
			if( strcmp( controller4vul_2307, "i") > 0)
			{
				v_app_pos_rest(double_2,char_1,double_2,double_3,char_1,char_2,uni_para);

			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				long_1 = long_3;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_4 = double_3 * double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				char_3 = char_2 * char_3;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				short_2 = short_1 * short_1;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_1 = double_2 * double_4;
		}
	}
	if(1)
	{
		float float_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_3 = 1;
		float_1 = float_6 * float_7;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				for(int looper_10=0; looper_10<1;looper_10++)
				{
					unsigned_int_5 = unsigned_int_1;
					if(1)
					{
						double_3 = double_4 + double_1;
					}
				}
				unsigned_int_4 = unsigned_int_2 * unsigned_int_8;
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					short_2 = short_1 + short_1;
				}
			}
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				unsigned_int_7 = unsigned_int_1 * unsigned_int_4;
			}
		}
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			double double_5 = 1;
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				double_5 = double_5 + double_1;
				if(1)
				{
					float_7 = float_4 * float_1;
				}
			}
			unsigned_int_9 = unsigned_int_8 * unsigned_int_5;
			int_3 = int_2 * int_1;
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				double_2 = double_5 + double_1;
				long_2 = long_3 * long_1;
			}
		}
		if(1)
		{
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				int_4 = int_3 + int_2;
			}
			float_4 = float_8 + float_7;
			short_2 = short_2;
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
				for(int looper_17=0; looper_17<1;looper_17++)
				{
					char_3 = char_1 * char_2;
				}
			}
			if(1)
			{
				for(int looper_18=0; looper_18<1;looper_18++)
				{
					int_5 = int_4;
				}
			}
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		float_8 = float_8 * float_6;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_20=0; looper_20<1;looper_20++)
			{
				double_1 = double_3 + double_1;
			}
		}
	}
	if(1)
	{
		for(int looper_21=0; looper_21<1;looper_21++)
		{
			short short_3 = 1;
			short_1 = short_3 * short_1;
		}
	}
	if(1)
	{
		int_5 = int_4 + int_6;
	}
	if(1)
	{
		int_2 = int_5 * int_6;
		if(1)
		{
			for(int looper_22=0; looper_22<1;looper_22++)
			{
				int_1 = int_7 + int_6;
			}
		}
	}
	for(int looper_23=0; looper_23<1;looper_23++)
	{
		int_5 = int_7 + int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_9;
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			unsigned_int_1 = unsigned_int_7 * unsigned_int_10;
		}
		float_6 = float_6 * float_1;
	}
	if(1)
	{
		long long_6 = 1;
		long_2 = long_6 * long_5;
	}
	return float_2;
}
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	return double_1;
	double_2 = v_swi_mod2PI(double_1);

}
short v_check_t_terms( double parameter_1,char parameter_2,double parameter_3)
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
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "*f") > 0)
	{
	}
	return short_1;
}
unsigned int v_read_elements_file( char parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,int parameter_12,char parameter_13)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_4 = 1;
	unsigned_int_1 = v_swe_degnorm(double_1);

	int_1 = v_swi_right_trim(char_1);

	float_1 = float_1;
	unsigned_int_1 = v_swi_fopen(int_1,char_2,char_3,char_2);

	int_2 = v_swi_cutstr(char_2,char_3,char_2,int_2);

	short_1 = v_check_t_terms(double_1,char_2,double_2);

	double_3 = double_1 + double_1;
	return unsigned_int_2;
	float_2 = v_swi_strcpy(char_1,char_4);

}
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_7 = 1;
	short short_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_9 = 1;
	float float_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_5 = 1;
	int int_10 = 1;
	char char_4 = 1;
	float float_6 = 1;
	char char_5 = 1;
	double double_9 = 1;
	float float_7 = 1;
	short_1 = short_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	short_3 = short_3 + short_4;
	int_1 = int_3;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = int_4 * int_1;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	int_1 = int_2 + int_4;
	int_4 = int_4 * int_5;
	short_4 = short_1;
	int_3 = int_5 + int_4;
	int_3 = int_6 * int_5;
	char_1 = char_1 + char_2;
	long_4 = long_3 * long_3;
	int_3 = int_2 + int_7;
	int_7 = int_6;
	short_2 = short_5 + short_4;
	long_1 = long_5 * long_4;
	double_1 = v_swi_epsiln(double_3,char_1);

	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	char_2 = char_2 * char_2;
	double_2 = double_2 * double_3;
	int_1 = int_5 + int_2;
	if(1)
	{
		long long_6 = 1;
		long_1 = long_6 * long_3;
		if(1)
		{
			double_2 = double_1 * double_1;
			double_5 = double_3 * double_4;
		}
		if(1)
		{
			int int_8 = 1;
			int_8 = int_6 * int_1;
		}
		if(1)
		{
			double_2 = v_swi_mod2PI(double_6);

			char_2 = char_2;
		}
		if(1)
		{
			long long_7 = 1;
			long long_8 = 1;
			long_5 = long_4 * long_7;
			long_4 = long_8 * long_5;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			short short_6 = 1;
			float_2 = float_1 + float_1;
			char_2 = char_1 * char_3;
			int_1 = v_swi_precess(double_6,double_2,float_3,int_9,-1 );

			float_3 = float_4 * float_4;
			short_3 = short_6;
			char_3 = char_3 * char_3;
			double_4 = double_3 + double_3;
			unsigned_int_3 = unsigned_int_1;
		}
	}
	float_4 = float_3 * float_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		double_6 = v_swi_kepler(double_1,double_1,double_1);

		double_5 = double_2 * double_7;
	}
	double_8 = double_2 * double_6;
	double_1 = double_4 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_7 * int_7;
	float_4 = float_2 + float_3;
	float_1 = float_5 * float_2;
	short_1 = short_1 + short_5;
	int_1 = int_10 + int_1;
	char_3 = char_4 + char_3;
	long_3 = long_5 * long_3;
	float_6 = float_5 + float_4;
	char_5 = char_4;
	char_5 = char_4 * char_1;
	unsigned_int_5 = v_read_elements_file(char_4,double_7,double_1,double_6,double_6,double_4,double_4,double_9,double_5,double_6,char_5,int_7,char_4);

	float_7 = float_1 + float_1;
	short_1 = short_3 * short_2;
	v_swi_coortrf(double_4,double_5,double_6);

	int_5 = int_5 * int_3;
	int_7 = int_7;
	if(1)
	{
		float float_8 = 1;
		double_5 = double_3 + double_1;
		float_8 = float_4 + float_8;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_4 = double_7 * double_7;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
		}
	}
	if(1)
	{
		double double_10 = 1;
		char char_6 = 1;
		double_10 = double_5 * double_10;
		char_6 = char_4;
	}
	return int_6;
}
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_1 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_3 = 1;
	int int_9 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_10 = 1;
	double double_4 = 1;
	char char_6 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	int_3 = int_1 + int_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_4 = int_3 + int_1;
	int_4 = int_1 + int_1;
	int_4 = int_2 * int_1;
	double_1 = v_mean_elements();

	short_3 = short_3;
	unsigned_int_3 = unsigned_int_5;
	short_4 = short_2;
	long_2 = long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_2 * double_1;
	int_4 = int_2 + int_3;
	int_4 = int_2 * int_1;
	long_2 = long_3;
	long_1 = long_4 + long_3;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_6;
	short_4 = short_2 * short_2;
	int_5 = int_2;
	long_4 = long_5 * long_2;
	int_6 = int_5 + int_2;
	double_1 = double_2 + double_2;
	int_6 = int_1 * int_4;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	int_6 = int_1;
	long_2 = long_6 * long_7;
	int_2 = int_3 + int_6;
	v_mean_elements_pl();

	float_1 = v_moon4();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
	int_7 = v_moon1();

	int_8 = int_6 + int_1;
	short_6 = short_2 * short_5;
	unsigned_int_2 = unsigned_int_1;
	short_6 = v_moon3();

	double_2 = double_3;
	int_7 = int_9 * int_8;
	double_3 = double_3 + double_3;
	float_1 = float_1 + float_1;
	double_2 = double_3 + double_3;
	float_1 = float_2;
	char_3 = char_2 + char_1;
	short_3 = short_3 + short_5;
	float_3 = float_1 * float_1;
	char_3 = char_3 * char_4;
	long_3 = long_7 * long_6;
	int_9 = int_10;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_5 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_8 = 1;
		char char_7 = 1;
		char_5 = char_1 * char_1;
		char_3 = char_1 * char_3;
		double_1 = double_2 + double_1;
		int_2 = int_4 + int_1;
		unsigned_int_4 = unsigned_int_4;
		char_1 = char_1 + char_5;
		double_4 = double_1 + double_4;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_8;
		char_6 = char_2 * char_2;
		long_8 = long_4 * long_3;
		char_2 = char_7 * char_6;
		int_8 = int_5 * int_6;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_3;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_9 = 1;
				unsigned_int_9 = unsigned_int_2;
			}
		}
		int_7 = int_3 * int_8;
	}
	float_1 = float_4 + float_1;
	long_5 = long_3 + long_4;
	unsigned_int_3 = v_mods3600(double_4);

	short_4 = short_4 * short_6;
	double_2 = double_5 * double_4;
	short_3 = short_2;
	char_4 = char_6 + char_1;
	int_4 = int_6 + int_9;
	return int_7;
	long_5 = v_moon2();

}
unsigned int v_intp_apsides( double parameter_1,int parameter_2,long parameter_3,char parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_7 = 1;
	int int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	int int_7 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_8 = 1;
	short short_6 = 1;
	double double_9 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_6 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	v_swi_nutate(double_3,double_2,short_1);

	long_3 = long_2 * long_1;
	v_swi_precess_speed(double_2,double_2,unsigned_int_2,int_2);

	double_1 = double_3;
	double_5 = double_4 * double_4;
	v_swi_coortrf2(double_1,double_1,double_2,double_1);

	int_1 = int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_2 = int_1 * int_2;
	int_2 = int_3;
	int_1 = int_4 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_swi_polcart_sp(double_6,double_3);

	long_1 = long_1 + long_2;
	short_1 = short_2 * short_1;
	double_6 = double_3 + double_6;
	if(1)
	{
		double_5 = double_3 * double_3;
		int_4 = int_4 + int_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_4 = double_5 * double_6;
		}
		long_1 = long_3 * long_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		int_5 = int_1 + int_3;
	}
	if(1)
	{
		int_3 = v_swi_trop_ra2sid_lon(double_3,double_7,double_2,int_1);

		double_4 = double_5 * double_5;
		int_2 = v_swi_intp_apsides(double_5,double_4,int_2);

		int_2 = int_6 * int_3;
		int_4 = int_1 + int_3;
	}
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		char_1 = char_2 + char_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_3 = short_3 + short_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	}
	int_4 = int_5 * int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	short_2 = short_4 * short_5;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_8 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				char_1 = char_4;
			}
			long_4 = long_5;
			if(1)
			{
				int_1 = int_5 * int_4;
			}
			if(1)
			{
				long long_6 = 1;
				long_6 = long_2 + long_3;
			}
			if(1)
			{
				int_4 = int_5 * int_6;
			}
			unsigned_int_3 = v_swe_degnorm(double_3);

			int_5 = int_5 * int_1;
			int_4 = v_swi_precess(double_6,double_3,float_1,int_7,-1 );

			char_2 = char_1 * char_4;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_2 + unsigned_int_6;
			if(1)
			{
			}
			float_2 = float_1 + float_1;
			unsigned_int_9 = unsigned_int_4 + unsigned_int_4;
			int_2 = v_swi_trop_ra2sid_lon_sosy(double_5,double_8,short_6);

			unsigned_int_7 = unsigned_int_9;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_9;
		}
		int_1 = int_2 + int_2;
		if(1)
		{
			double_8 = double_9 * double_1;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			char char_5 = 1;
			char_5 = char_1 + char_3;
		}
		short_3 = short_7 + short_3;
		double_6 = double_9 * double_1;
		if(1)
		{
			unsigned_int_9 = unsigned_int_5 * unsigned_int_4;
		}
		int_5 = int_5 + int_1;
	}
	if(1)
	{
		float float_4 = 1;
		if(1)
		{
			long_5 = v_memset(char_2,long_4,char_4);

			unsigned_int_7 = unsigned_int_10;
		}
		v_swe_difrad2n(double_5,double_3);

		v_swi_cartpol_sp(double_3,double_4);

		double_2 = double_3 * double_7;
		double_8 = double_2 * double_8;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_2 * float_1;
		}
		if(1)
		{
			int_5 = int_4 * int_1;
			if(1)
			{
				int int_8 = 1;
				int int_9 = 1;
				int_9 = int_7 * int_8;
			}
		}
		float_4 = float_2 * float_4;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		unsigned int unsigned_int_11 = 1;
		char char_7 = 1;
		short_5 = short_7 * short_3;
		double_9 = v_swe_get_ayanamsa_ex(double_4,int_6,double_8,char_6,-1 );

		unsigned_int_7 = unsigned_int_11 * unsigned_int_2;
		char_3 = char_7 * char_1;
		unsigned_int_11 = unsigned_int_4 * unsigned_int_10;
	}
	float_2 = float_1 + float_2;
	double_4 = double_5 * double_3;
	return unsigned_int_5;
}
int v_swi_plan_for_osc_elem( int parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_6 = 1;
	char char_6 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int int_6 = 1;
	char_1 = char_1 * char_2;
	char_3 = char_1 + char_1;
	v_swi_polcart_sp(double_1,double_2);

	double_3 = double_3 + double_2;
	int_1 = int_1 * int_2;
	int_1 = int_3 + int_3;
	v_calc_epsilon(double_4,short_1,short_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_1 + short_3;
	}
	double_5 = double_5 * double_3;
	if(1)
	{
		int_2 = int_3;
		long_1 = long_1;
		int_3 = int_4;
		float_1 = float_1;
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		char char_5 = 1;
		double_5 = v_get_denum(unsigned_int_1,unsigned_int_2);

		double_3 = double_5 + double_1;
		char_2 = char_3 * char_4;
		if(1)
		{
			int_3 = int_2 * int_4;
		}
		if(1)
		{
			char_5 = char_1 * char_5;
		}
		if(1)
		{
			char_3 = char_4 * char_5;
			double_3 = double_6;
		}
	}
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			int_2 = v_swi_nutation(double_5,short_2,double_5);

			int_2 = int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			short short_4 = 1;
			v_swi_bias(double_2,double_1,int_3,char_6);

			v_swi_cartpol_sp(double_4,double_6);

			float_2 = float_1 * float_1;
			short_1 = short_1 * short_4;
			long_1 = long_1 * long_4;
			float_2 = float_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_1 = int_5;
		}
	}
	float_1 = float_2 * float_2;
	char_2 = char_4 * char_2;
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long long_7 = 1;
		long_3 = long_5 * long_6;
		short_5 = short_2 + short_5;
		v_swi_coortrf2(double_6,double_7,double_1,double_4);

		long_7 = long_3 + long_6;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1;
			int_6 = v_swi_precess(double_6,double_2,float_1,int_5,-1 );

			short_2 = short_5 + short_1;
		}
	}
	return int_4;
	long_4 = v_nut_matrix(int_6,long_1);

}
short v_lunar_osc_elem( double parameter_1,int parameter_2,char parameter_3,char parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_9 = 1;
	return short_1;
	v_calc_epsilon(double_1,short_2,short_3);

	double_2 = v_jplplan(double_1,int_1,long_1,long_1,double_3,double_2,double_3,char_1);

	int_1 = v_swi_plan_for_osc_elem(int_1,double_4,double_2);

	short_4 = v_swemoon(double_4,short_4,char_1,double_3,char_1);

	int_2 = v_swi_moshmoon(double_4,short_4,double_3,char_1,-1 );

	v_swi_cross_prod(double_1,double_5,double_6,-1 );

	double_2 = v_swi_mod2PI(double_5);

	v_swi_polcart(double_5,double_3);

	v_swi_coortrf2(double_2,double_3,double_5,double_6);

	v_swi_cartpol(double_2,double_4);

	long_1 = v_memset(char_1,long_2,char_1);

	v_swi_cartpol_sp(double_3,double_5);

	int_2 = v_swi_precess(double_1,double_4,float_1,int_1,-1 );

	v_swi_precess_speed(double_5,double_7,unsigned_int_1,int_3);

	long_1 = v_if(double_6,int_2,short_2,unsigned_int_1,unsigned_int_2,float_2,int_1);

	v_swi_nutate(double_8,double_3,short_3);

	int_1 = v_swi_trop_ra2sid_lon(double_1,double_8,double_5,int_3);

	int_3 = v_swi_trop_ra2sid_lon_sosy(double_2,double_3,short_4);

	double_7 = v_swe_get_ayanamsa_ex(double_2,int_3,double_4,char_1,-1 );

	v_swi_polcart_sp(double_4,double_2);

	unsigned_int_3 = v_swe_degnorm(double_9);

}
long v_corr_mean_apog( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_2;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = long_2 + long_3;
	int_1 = int_2 * int_2;
	float_2 = float_1 + float_2;
	long_4 = long_4 * long_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 + int_1;
	return long_3;
}
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	char char_6 = 1;
	double double_5 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	int_2 = int_1 * int_1;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_3 + int_2;
	char_2 = char_3;
	long_1 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			v_swi_cartpol(double_1,double_1);

			int_2 = int_2 + int_2;
			if(1)
			{
				double_1 = double_1 + double_1;
			}
		}
	}
	char_4 = char_5;
	unsigned_int_5 = v_corr_mean_node(double_2);

	int_3 = int_3 + int_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_6;
	int_2 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_1 = double_1 + double_1;
	long_1 = v_corr_mean_apog(double_3);

	v_swi_coortrf(double_1,double_1,double_2);

	float_1 = float_1;
	double_1 = v_mean_elements();

	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	int_2 = int_4 * int_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_7;
	v_swi_polcart(double_2,double_4);

	double_1 = double_1 + double_3;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
	char_2 = char_6 * char_2;
	double_1 = v_swi_mod2PI(double_5);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
	return int_2;
}
void v_app_pos_etc_mean( int parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	int_3 = int_2 + int_3;
	int_5 = int_4 * int_3;
	int_2 = v_swi_precess(double_4,double_1,float_1,int_2,-1 );

	v_swi_precess_speed(double_5,double_4,unsigned_int_1,int_4);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		float_1 = float_2 * float_1;
		int_3 = int_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_coortrf2(double_4,double_3,double_6,double_6);

		short_1 = short_1 + short_1;
	}
	short_1 = short_1 + short_2;
	double_3 = double_2 + double_7;
	int_4 = int_3 + int_4;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			int_3 = int_1 * int_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				long_1 = long_1 + long_2;
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				v_app_pos_rest(double_5,char_1,double_4,double_2,char_1,char_2,-1 );

				long_1 = long_2 + long_2;
			}
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_8 = 1;
			double_6 = double_7 + double_8;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_1 * long_3;
			if(1)
			{
				double_7 = double_6 + double_1;
			}
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		int_1 = int_3 * int_6;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		}
		char_3 = char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		v_swi_polcart_sp(double_2,double_3);

		unsigned_int_5 = unsigned_int_3;
	}
}
void v_swe_difrad2n( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "rN") > 0)
	{
	}
	unsigned_int_2 = v_swe_radnorm(double_1);

}
double v_swi_mod2PI( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return double_1;
}
unsigned int v_corr_mean_node( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "b`") < 0)
	{
	}
	if(1)
	{
	}
	double_4 = double_3 + double_4;
	long_1 = long_1 * long_1;
	char_1 = char_1 + char_2;
	long_1 = long_2 * long_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	int_3 = int_3;
	return unsigned_int_4;
}
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3)
{
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_2;
	}
	float_3 = float_2 * float_2;
	double_1 = double_1 + double_1;
	short_1 = short_1;
	long_1 = long_2;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_2 * double_3;
			if(1)
			{
				double_5 = v_mean_elements();

				int_1 = int_1 + int_3;
			}
		}
	}
	unsigned_int_1 = unsigned_int_2;
	short_3 = short_1;
	double_6 = double_7;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 * short_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	long_2 = long_1 * long_2;
	int_3 = int_2 + int_2;
	char_1 = char_1 + char_2;
	return int_3;
	unsigned_int_1 = v_corr_mean_node(double_5);

	double_5 = v_swi_mod2PI(double_2);

}
void v_app_pos_etc_sbar( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	char char_3 = 1;
	v_swi_bias(double_1,double_1,int_1,char_1);

	v_swi_precess_speed(double_1,double_1,unsigned_int_1,int_1);

	float_1 = float_1 + float_1;
	double_2 = double_1 + double_2;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_4 = double_3 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_5 = 1;
			double_1 = double_5;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_2 = double_4;
		}
	}
	if(1)
	{
		double_4 = v_get_denum(unsigned_int_2,unsigned_int_1);

		char_2 = char_1 * char_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_7 = 1;
		int_1 = v_swi_precess(double_6,double_4,float_1,int_2,-1 );

		double_2 = double_7 + double_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_3 * int_4;
		if(1)
		{
			short_2 = short_2 + short_2;
		}
		long_2 = v_if(double_8,int_2,short_1,unsigned_int_5,unsigned_int_2,float_1,int_3);

		int_2 = int_1 * int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	}
	v_app_pos_rest(double_9,char_3,double_2,double_3,char_3,char_2,-1 );

}
double v_swi_armc_to_mc( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_4 = v_swe_degnorm(double_1);

		double_1 = double_2 * double_3;
		if(1)
		{
			short short_3 = 1;
			short_2 = short_1 + short_3;
		}
	}
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 + int_1;
		}
	}
	return double_2;
}
long v_meff( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 + double_3;
	}
	double_4 = double_3 * double_1;
	float_1 = float_1 + float_2;
	return long_1;
}
void v_swi_deflect_light( double parameter_1,double parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	int int_6 = 1;
	short_2 = short_1 * short_2;
	long_3 = long_1 * long_2;
	float_3 = float_1 + float_2;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2 * short_1;
	long_3 = v_meff(double_2);

	float_1 = float_2;
	double_2 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_3;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_3 = unsigned_int_3;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_2 = short_2;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_1 = v_for(char_1);

			int_3 = int_2 * int_1;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long_4 = long_1;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_1 = int_3 + int_1;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			double_1 = double_1 + double_1;
		}
	}
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		long_4 = v_if(double_3,int_1,short_2,unsigned_int_5,unsigned_int_1,float_1,int_2);

		double_2 = double_3;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	double_3 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		long long_5 = 1;
		double_5 = double_4 + double_2;
		unsigned_int_6 = unsigned_int_6;
		long_6 = long_5 + long_6;
	}
	int_2 = int_1 + int_3;
	int_4 = int_1 * int_3;
	long_6 = long_1 + long_4;
	double_3 = double_5 + double_4;
	int_4 = int_3;
	if(1)
	{
		int_5 = int_2 + int_4;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 * short_2;
	}
	unsigned_int_6 = unsigned_int_6 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_3;
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		short short_4 = 1;
		long long_7 = 1;
		long long_8 = 1;
		long long_9 = 1;
		short_2 = short_2 + short_2;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			unsigned_int_7 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				char_2 = char_2;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				unsigned_int_8 = unsigned_int_5;
			}
		}
		for(int looper_15=0; looper_15<1;looper_15++)
		{
			char_2 = char_1 * char_2;
		}
		short_4 = short_1 * short_4;
		long_4 = long_4 * long_4;
		float_3 = float_2;
		for(int looper_16=0; looper_16<1;looper_16++)
		{
			int_2 = int_3 * int_3;
			unsigned_int_7 = unsigned_int_8 * unsigned_int_7;
			double_2 = double_2 * double_5;
		}
		long_6 = long_7 + long_1;
		unsigned_int_3 = unsigned_int_7 + unsigned_int_7;
		long_8 = long_3 * long_1;
		char_1 = char_1 + char_1;
		int_6 = int_4 * int_2;
		if(1)
		{
			int_3 = int_2 * int_3;
		}
		if(1)
		{
			short_1 = short_2;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		long_6 = long_9 * long_1;
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			unsigned_int_4 = unsigned_int_8 * unsigned_int_2;
		}
		for(int looper_18=0; looper_18<1;looper_18++)
		{
			unsigned int unsigned_int_9 = 1;
			int_2 = int_3 + int_2;
			double_4 = double_5;
			float_3 = float_3;
			unsigned_int_9 = unsigned_int_6 + unsigned_int_7;
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		int int_7 = 1;
		int_7 = int_5 + int_6;
	}
}
int v_app_pos_etc_plan( int parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_5 = 1;
	char char_4 = 1;
	long long_4 = 1;
	int int_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_6 = 1;
	float float_6 = 1;
	int int_8 = 1;
	double double_8 = 1;
	int int_9 = 1;
	double double_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_7 = 1;
	char char_6 = 1;
	double double_10 = 1;
	long long_8 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_2;
	v_swi_deflect_light(double_1,double_2,long_2);

	double_3 = double_2;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_1 * short_1;
	short_1 = short_2;
	int_2 = int_1 + int_2;
	short_4 = short_3 * short_4;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_4 = v_get_denum(unsigned_int_5,unsigned_int_4);

	int_1 = int_1 + int_2;
	short_3 = v_sweplan(double_2,int_2,int_2,unsigned_int_2,short_2,double_3,double_2,double_3,double_4,char_1,-1 );

	unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		char_2 = char_3;
		float_1 = float_2;
		double_3 = double_5;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
		int_1 = v_swi_pleph(double_5,int_3,int_4,double_1,char_3);

		v_swi_bias(double_5,double_1,int_4,char_3);

		unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
		long_1 = long_3 + long_2;
	}
	if(1)
	{
		int_2 = v_swi_precess(double_4,double_1,float_1,int_2,-1 );

		int_3 = int_2;
		int_4 = int_5;
		double_5 = double_5 * double_1;
	}
	if(1)
	{
		double_6 = double_6 * double_7;
		unsigned_int_9 = unsigned_int_8 + unsigned_int_5;
		int_5 = int_3 * int_2;
	}
	unsigned_int_9 = unsigned_int_7 + unsigned_int_6;
	short_5 = short_3 + short_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_8 * unsigned_int_8;
		unsigned_int_6 = unsigned_int_9 * unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_7 = double_2;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_4 = char_2 * char_1;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_2 = double_1 * double_5;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			long_1 = long_4;
		}
	}
	if(1)
	{
		float float_4 = 1;
		int int_7 = 1;
		if(1)
		{
			v_swi_polcart(double_6,double_3);

			float_2 = float_2;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				float float_3 = 1;
				float_4 = float_1 + float_3;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					unsigned_int_6 = unsigned_int_7 + unsigned_int_8;
					if(1)
					{
						double_7 = double_5 + double_1;
					}
				}
				short_2 = short_2;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					int_2 = int_6;
				}
			}
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			float float_5 = 1;
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				char char_5 = 1;
				char_5 = char_3;
				if(1)
				{
					int_2 = int_2 + int_4;
				}
			}
			int_7 = int_5 * int_1;
			float_5 = float_1 * float_2;
			short_2 = short_3 + short_5;
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				long_6 = long_5 + long_4;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				v_swi_cartpol(double_4,double_3);

				int_7 = int_6 * int_3;
			}
		}
		if(1)
		{
			long_2 = v_if(double_4,int_5,short_6,unsigned_int_1,unsigned_int_8,float_6,int_8);

			unsigned_int_3 = unsigned_int_5 * unsigned_int_8;
		}
		if(1)
		{
			double_2 = double_4;
		}
		if(1)
		{
			double_7 = double_5 + double_4;
			if(1)
			{
				short_6 = short_2;
				float_2 = float_6 * float_6;
			}
		}
		if(1)
		{
			int_2 = v_swi_get_observer(double_6,short_2,int_2,double_5,char_3);

			v_swi_precess_speed(double_4,double_8,unsigned_int_7,int_1);

			unsigned_int_5 = unsigned_int_5;
			if(1)
			{
				int_5 = v_swi_moshplan(double_3,int_3,int_8,double_7,double_5,char_3);

				unsigned_int_7 = unsigned_int_1;
				unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
			}
			unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
		}
		if(1)
		{
		}
		if(1)
		{
			double_5 = double_7 * double_1;
			if(1)
			{
				int_9 = int_7 + int_6;
				double_4 = double_9 * double_8;
			}
		}
		long_1 = long_2 * long_6;
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			unsigned_int_8 = unsigned_int_10 + unsigned_int_3;
		}
		if(1)
		{
			double_6 = double_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			}
		}
		if(1)
		{
		}
		int_1 = int_10;
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				v_swi_aberr_light(double_2,double_4,double_2);

				double_1 = double_4 * double_2;
				short_1 = short_4 * short_3;
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_4 = unsigned_int_5;
				}
				if(1)
				{
					float_2 = float_4 + float_1;
					if(1)
					{
						int_10 = v_sweph(double_9,int_11,int_5,unsigned_int_9,double_1,long_5,double_2,char_4);

						long_5 = long_7 * long_5;
					}
				}
				if(1)
				{
				}
				for(int looper_16=0; looper_16<1;looper_16++)
				{
					unsigned_int_8 = unsigned_int_3 + unsigned_int_5;
				}
			}
			short_4 = short_5 + short_4;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_17=0; looper_17<1;looper_17++)
				{
					double double_11 = 1;
					v_app_pos_rest(double_6,char_6,double_1,double_10,char_6,char_3,-1 );

					double_11 = double_3 * double_11;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
				}
				for(int looper_18=0; looper_18<1;looper_18++)
				{
					int_5 = int_9;
				}
			}
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					float_2 = float_2 + float_2;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			double_9 = double_9;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_21=0; looper_21<1;looper_21++)
				{
					unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
				}
			}
			if(1)
			{
				if(1)
				{
					for(int looper_22=0; looper_22<1;looper_22++)
					{
						unsigned int unsigned_int_11 = 1;
						unsigned_int_11 = unsigned_int_11 + unsigned_int_4;
					}
				}
			}
		}
		if(1)
		{
			for(int looper_23=0; looper_23<1;looper_23++)
			{
				double double_12 = 1;
				double_12 = double_7 + double_4;
			}
		}
	}
	if(1)
	{
		long_3 = long_1 + long_1;
	}
	if(1)
	{
		int_8 = int_4;
		if(1)
		{
			for(int looper_24=0; looper_24<1;looper_24++)
			{
				unsigned_int_3 = unsigned_int_9 + unsigned_int_1;
			}
		}
	}
	if(1)
	{
		for(int looper_25=0; looper_25<1;looper_25++)
		{
			short short_7 = 1;
			v_swi_close_jpl_file();

			short_7 = short_1 + short_6;
		}
	}
	if(1)
	{
		double_4 = double_10;
	}
	int_9 = int_3 * int_6;
	long_3 = long_8 + long_6;
	if(1)
	{
		double_4 = double_8 * double_4;
	}
	for(int looper_26=0; looper_26<1;looper_26++)
	{
		double_2 = double_4 * double_7;
	}
	if(1)
	{
		char char_7 = 1;
		double_9 = double_9 + double_4;
		if(1)
		{
			long long_9 = 1;
			long_9 = long_6 + long_7;
		}
		char_7 = char_1;
	}
	if(1)
	{
		char char_8 = 1;
		char_6 = char_1 * char_8;
	}
	return int_10;
}
char v_app_pos_etc_sun( float parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	short short_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char_2 = char_1 * char_2;
	double_2 = double_1 * double_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	double_3 = double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_2;
	double_3 = double_4 * double_2;
	if(1)
	{
		double_2 = double_5 + double_4;
		short_2 = short_1 * short_1;
	}
	char controller4vul_2316[2];
	fgets(controller4vul_2316 ,2 ,stdin);
	if( strcmp( controller4vul_2316, "]") > 0)
	{
		char controller4vul_2317[2];
		fgets(controller4vul_2317 ,2 ,stdin);
		if( strcmp( controller4vul_2317, "4") > 0)
		{
			char controller4vul_2318[3];
			fgets(controller4vul_2318 ,3 ,stdin);
			if( strcmp( controller4vul_2318, "xn") < 0)
			{
				short_1 = v_sweplan(double_3,int_1,int_1,unsigned_int_2,short_3,double_1,double_5,double_5,double_2,char_2,uni_para);

			}
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_3 = 1;
				char_4 = char_1 + char_3;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_6 = double_2 * double_6;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_3 = short_1 + short_4;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_5 = char_1;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char_6 = char_4 + char_6;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double double_8 = 1;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				double_8 = double_6 + double_7;
				if(1)
				{
					int_1 = int_1 * int_2;
				}
				if(1)
				{
					double_3 = double_1 * double_2;
				}
			}
			int_3 = int_3 + int_4;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				int int_5 = 1;
				long long_4 = 1;
				float float_2 = 1;
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					double double_9 = 1;
					double_7 = double_9 * double_7;
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
					}
				}
				double_8 = double_2 + double_4;
				float_1 = float_1;
				if(1)
				{
					double_6 = double_3 + double_2;
				}
				if(1)
				{
					double_6 = double_3 * double_7;
				}
				if(1)
				{
					short_4 = short_2 * short_4;
					int_3 = int_2 + int_1;
				}
				int_3 = int_2 + int_5;
				if(1)
				{
					char_4 = char_5 + char_6;
				}
				if(1)
				{
					short_1 = short_3 * short_1;
				}
				long_5 = long_4 + long_1;
				if(1)
				{
					short_2 = short_3 + short_4;
				}
				float_1 = float_1 + float_2;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
				long_2 = long_5 + long_2;
				if(1)
				{
				}
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				int_6 = int_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			long long_6 = 1;
			long_5 = long_6 + long_5;
		}
	}
	if(1)
	{
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			int_2 = int_7 + int_4;
		}
	}
	if(1)
	{
		double_5 = double_3 + double_3;
	}
	if(1)
	{
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			int_4 = int_6 + int_4;
		}
	}
	if(1)
	{
		int_3 = int_8 * int_1;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		long long_7 = 1;
		long long_8 = 1;
		long_1 = long_7 + long_8;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_5 = short_6;
		}
		int_8 = int_7;
	}
	if(1)
	{
		double double_10 = 1;
		double_10 = double_3 + double_10;
	}
	return char_1;
}
int v_main_planet( double parameter_1,int parameter_2,double parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	int_2 = int_1 + int_2;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_3 * float_1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		float_2 = float_3 + float_1;
	}
	char controller4vul_2313[3];
	fgets(controller4vul_2313 ,3 ,stdin);
	if( strcmp( controller4vul_2313, "L`") > 0)
	{
		char controller4vul_2314[3];
		fgets(controller4vul_2314 ,3 ,stdin);
		if( strcmp( controller4vul_2314, ">T") > 0)
		{
			int_2 = int_2 + int_3;
			char controller4vul_2315[3];
			fgets(controller4vul_2315 ,3 ,stdin);
			if( strcmp( controller4vul_2315, "<X") < 0)
			{
				char_1 = v_app_pos_etc_sun(float_1,char_3,uni_para);

				int_2 = int_1 * int_4;
			}
			double_2 = double_1 + double_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int_5 = int_4 + int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_2 = double_3 * double_4;
			if(1)
			{
				char char_4 = 1;
				char_2 = char_4;
			}
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
		}
	}
	long_1 = long_1 + long_1;
	float_4 = float_3 * float_3;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_1 * double_3;
			if(1)
			{
				int_5 = int_1 * int_3;
			}
			double_1 = double_2;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_2 = double_1 * double_4;
	}
	if(1)
	{
		char_1 = char_3 * char_3;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_2;
			if(1)
			{
				int_4 = int_2;
			}
			int_2 = int_3 + int_4;
		}
		if(1)
		{
		}
	}
	unsigned_int_3 = unsigned_int_5;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 * long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
	}
	double_2 = double_2 * double_1;
	long_1 = long_3 + long_5;
	return int_1;
}
void v_swi_icrs2fk5( double parameter_1,short parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	if(1)
	{
		long_1 = long_2;
	}
	short_3 = short_1 + short_2;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_1;
	long_3 = long_2 * long_1;
	double_2 = double_1 + double_2;
	long_4 = long_4 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	int_4 = int_2 * int_1;
	int_4 = int_3 + int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_4 = unsigned_int_2;
			if(1)
			{
				long long_5 = 1;
				long_3 = long_5 * long_5;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_1 = long_1 * long_4;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_1 = short_3 * short_1;
	}
}
void v_swi_FK4_FK5( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "3q") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_swi_polcart_sp(double_2,double_3);

		short_2 = short_1 + short_1;
	}
	char_1 = char_1 * char_2;
	v_swi_cartpol_sp(double_4,double_4);

}
int v_swi_right_trim( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	float_3 = float_1 + float_2;
	double_1 = double_3;
	double_2 = double_4 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
unsigned int v_swe_fixstar( char parameter_1,double parameter_2,char parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int_1 = v_main_planet(double_1,int_1,double_2,int_2,char_1,uni_para);

	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_1;
	}
	int_2 = int_3 + int_4;
	double_4 = double_4 * double_2;
	return unsigned_int_4;
}
double v_swe_get_ayanamsa_ex( double parameter_1,int parameter_2,double parameter_3,char parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	double double_6 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	double_1 = double_1 + double_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_2;
	double_1 = double_1 * double_2;
	char_1 = char_1 + char_2;
	float_2 = float_3;
	double_2 = double_3 + double_1;
	char_4 = char_3 + char_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	char controller4vul_2311[3];
	fgets(controller4vul_2311 ,3 ,stdin);
	if( strcmp( controller4vul_2311, "28") > 0)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_2312[2];
		fgets(controller4vul_2312 ,2 ,stdin);
		if( strcmp( controller4vul_2312, "@") < 0)
		{
			unsigned_int_5 = v_swe_fixstar(char_4,double_2,char_5,double_3,char_3,uni_para);

		}
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		short short_2 = 1;
		int_4 = int_4;
		if(1)
		{
		}
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		char_6 = char_1 * char_2;
		if(1)
		{
		}
		long_1 = long_3 * long_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
		if(1)
		{
		}
		double_1 = double_4 + double_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		long_3 = long_1 * long_1;
		if(1)
		{
		}
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_3;
		if(1)
		{
		}
		double_5 = double_4 * double_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		int_1 = int_3;
	}
	if(1)
	{
		char char_7 = 1;
		char_2 = char_7 * char_6;
		if(1)
		{
		}
		float_1 = float_3;
	}
	if(1)
	{
		short short_3 = 1;
		int_4 = int_3 * int_4;
		if(1)
		{
		}
		short_3 = short_1 + short_1;
	}
	if(1)
	{
		int_4 = int_1 + int_3;
		if(1)
		{
		}
		long_3 = long_2;
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	long_1 = long_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
	}
	unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
	if(1)
	{
		long_3 = long_2 + long_4;
	}
	double_6 = double_2;
	int_1 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_1;
	char_2 = char_1 + char_6;
	long_1 = long_3 + long_4;
	int_5 = int_3;
	return double_2;
}
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	double double_8 = 1;
	v_swi_cartpol_sp(double_1,double_1);

	long_3 = long_1 + long_2;
	double_4 = double_2 + double_3;
	double_1 = double_2 * double_4;
	double_3 = double_2 * double_1;
	float_2 = float_1 + float_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_1;
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	char_1 = char_1 * char_2;
	double_1 = double_4 + double_4;
	v_swi_polcart(double_2,double_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_4;
	short_2 = short_2 + short_1;
	short_1 = short_3 + short_1;
	int_3 = v_swi_precess(double_5,double_4,float_2,int_4,-1 );

	float_3 = float_1 + float_1;
	float_2 = float_2 * float_3;
	if(1)
	{
		v_swi_cartpol(double_4,double_5);

		int_4 = int_5 + int_2;
	}
	short_2 = short_3 + short_4;
	short_2 = short_5 * short_5;
	char_3 = char_1;
	v_swi_polcart_sp(double_1,double_4);

	v_swi_coortrf(double_6,double_6,double_4);

	int_6 = int_6 * int_4;
	double_1 = double_5 * double_7;
	int_7 = int_6 + int_5;
	char_3 = char_3 * char_2;
	v_swi_coortrf2(double_1,double_5,double_7,double_7);

	int_5 = int_7 * int_1;
	unsigned_int_1 = v_swe_degnorm(double_8);

	int_6 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_7 = double_3 + double_7;
	return int_1;
}
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_2;
	int_3 = v_swi_precess(double_3,double_1,float_1,int_4,-1 );

	short_2 = short_1 * short_2;
	v_swi_polcart_sp(double_4,double_1);

	short_4 = short_3 * short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 * double_4;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	v_swi_coortrf2(double_3,double_4,double_2,double_3);

	float_2 = float_2 + float_1;
	double_3 = double_5 + double_4;
	if(1)
	{
		int_1 = int_2 * int_4;
	}
	double_2 = double_1 * double_2;
	int_4 = int_4 * int_4;
	v_swi_cartpol_sp(double_6,double_7);

	int_4 = int_3 * int_2;
	return int_4;
	v_calc_epsilon(double_6,short_5,short_4);

}
void v_app_pos_rest( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	short_2 = short_1 * short_2;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		int_1 = int_2 + int_1;
		if(1)
		{
			short_2 = short_1 * short_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_3 = double_1 + double_2;
	}
	char controller4vul_2308[2];
	fgets(controller4vul_2308 ,2 ,stdin);
	if( strcmp( controller4vul_2308, "]") < 0)
	{
		char controller4vul_2309[2];
		fgets(controller4vul_2309 ,2 ,stdin);
		if( strcmp( controller4vul_2309, "3") > 0)
		{
			char controller4vul_2310[2];
			fgets(controller4vul_2310 ,2 ,stdin);
			if( strcmp( controller4vul_2310, "5") < 0)
			{
				double_3 = v_swe_get_ayanamsa_ex(double_2,int_1,double_3,char_2,uni_para);

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
			unsigned int unsigned_int_4 = 1;
			int_1 = int_1 + int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_2 = double_3 * double_1;
			}
			if(1)
			{
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_1 = double_2 * double_3;
			}
			long_2 = long_3;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		}
	}
	int_4 = int_1 * int_4;
	float_1 = float_1 + float_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char char_3 = 1;
		char char_4 = 1;
		int int_5 = 1;
		char_4 = char_1 + char_3;
		int_5 = int_2 * int_1;
		int_4 = int_4;
		char_4 = char_2 * char_3;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	double_4 = double_1 + double_4;
}
long v_swi_approx_jplhor( double parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_3;
	v_swi_polcart(double_1,double_2);

	short_2 = short_1 * short_2;
	long_1 = long_1 + long_2;
	int_4 = int_1 * int_3;
	if(1)
	{
		long_1 = long_2 * long_1;
	}
	if(1)
	{
		v_swi_cartpol(double_1,double_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		char char_3 = 1;
		double_2 = double_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		char_3 = char_2 + char_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_3 * double_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	unsigned_int_1 = unsigned_int_6;
	return long_1;
}
void v_swi_bias( double parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_9 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_4 = 1;
	short short_2 = 1;
	long long_5 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	double_2 = double_1 * double_1;
	long_1 = v_swi_approx_jplhor(double_1,double_3,unsigned_int_1,double_4);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2;
	char_3 = char_1 + char_2;
	char_2 = char_2 + char_4;
	float_1 = float_1 + float_1;
	double_3 = double_5 * double_6;
	float_1 = float_1 + float_2;
	char_2 = char_1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "]G") < 0)
	{
		long_3 = long_2 * long_2;
	}
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_1;
		long_3 = long_3 * long_4;
		double_7 = double_3 * double_6;
		double_2 = double_8;
		float_3 = float_1 + float_3;
		int_3 = int_2 + int_2;
		float_1 = float_2 * float_2;
		long_3 = long_2 + long_4;
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		char char_5 = 1;
		char char_6 = 1;
		double_4 = double_6 * double_1;
		char_5 = char_2 + char_2;
		double_7 = double_9 + double_9;
		char_2 = char_1 * char_6;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_9 = double_2 + double_3;
		double_4 = double_4 + double_3;
		long_4 = long_4 + long_2;
		char_3 = char_7 * char_8;
	}
	if(1)
	{
		int_2 = int_3 + int_3;
	}
	unsigned_int_2 = unsigned_int_2;
	float_3 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_4;
	double_7 = double_5 + double_7;
	short_1 = short_2;
	short_1 = short_2;
	long_2 = long_1 * long_5;
	if(1)
	{
		long_1 = long_3 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				char_7 = char_8;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_9 = double_4 + double_7;
			if(1)
			{
				char char_9 = 1;
				char_8 = char_9;
			}
		}
		double_8 = double_9;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_9 = double_5 + double_8;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_3 = int_3 * int_3;
		}
	}
}
double v_get_denum( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
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
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
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
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
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
	return double_2;
}
void v_swi_aberr_light( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_2;
	int_2 = int_1 * int_1;
	double_1 = double_2 + double_3;
	char_1 = char_3 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	double_5 = double_2 * double_4;
	char_4 = char_2 + char_4;
	float_1 = float_1 + float_1;
	double_2 = double_3 * double_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_1 = double_4;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^Q") == 0)
	{
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_4 = char_4 + char_1;
		}
		int_3 = int_4 * int_2;
		unsigned_int_3 = unsigned_int_2;
		double_1 = double_4 * double_2;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_5 = double_2;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned int unsigned_int_4 = 1;
			long long_1 = 1;
			float float_2 = 1;
			char char_5 = 1;
			char char_6 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			long_1 = long_1 + long_1;
			float_2 = float_2;
			char_1 = char_5 + char_6;
		}
	}
}
void v_swi_cartpol_sp( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_2;
	char_1 = char_2;
	if(1)
	{
		short_2 = short_1 + short_1;
		short_2 = short_2 + short_3;
		unsigned_int_1 = unsigned_int_1;
		short_1 = short_1;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
		v_swi_cartpol(double_1,double_2);

		short_3 = short_2 * short_1;
	}
	short_1 = short_4;
	float_1 = float_1 + float_2;
	long_1 = long_1;
	short_5 = short_4;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_4;
	}
	int_2 = int_1 * int_2;
	long_3 = long_2 + long_1;
	short_1 = short_1 + short_4;
	long_1 = long_3 * long_1;
	long_4 = long_4 + long_2;
	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_4 + double_1;
	char_2 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	short_4 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	float_3 = float_1 * float_2;
}
void v_swi_precess_speed( double parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = v_swi_precess(double_1,double_1,float_1,int_2,-1 );

	int_1 = int_2 + int_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_1;
	long_1 = long_2 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Sh") == 0)
	{
		char_1 = char_1;
	}
	if(1)
	{
		long long_3 = 1;
		v_swi_coortrf2(double_2,double_2,double_3,double_1);

		long_2 = long_3 * long_2;
		v_swi_ldp_peps(double_2,double_4,double_5);

		int_1 = int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_1 + float_1;
		float_3 = float_4;
	}
	char_1 = char_2 * char_3;
	double_4 = double_5 + double_4;
	short_2 = short_1 + short_1;
	long_1 = long_2 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		v_swi_polcart_sp(double_3,double_5);

		int_1 = int_2 + int_3;
		v_swi_cartpol_sp(double_3,double_5);

		double_4 = double_4 * double_5;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_4 * int_3;
	}
	double_3 = double_1 + double_6;
	float_4 = float_1 * float_4;
	short_4 = short_2 + short_3;
}
void v_swi_nutate( double parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_2;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			double_2 = double_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long long_3 = 1;
				long_1 = long_1 + long_3;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_4 = 1;
			if(1)
			{
				double double_3 = 1;
				double_1 = double_3 * double_2;
			}
			if(1)
			{
				short_1 = short_2 * short_1;
			}
			double_2 = double_2 * double_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
}
void v_swi_polcart_sp( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B.") > 0)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_1 = double_3 * double_3;
	}
	short_2 = short_1 + short_1;
	long_2 = long_1 + long_1;
	long_1 = long_1 + long_1;
	int_1 = int_2;
	double_2 = double_2 * double_3;
	char_2 = char_1 + char_2;
	char_1 = char_2 * char_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 * int_2;
	char_3 = char_2 * char_2;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_2 + double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	double_1 = double_3 * double_3;
	long_1 = long_3 * long_3;
	v_swi_polcart(double_1,double_4);

	double_6 = double_5 * double_2;
}
void v_sidtime_non_polynomial_part( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = v_swe_radnorm(double_1);

	double_3 = double_4;
	long_1 = long_1;
	char_1 = char_1 * char_1;
	double_1 = double_3 + double_4;
	int_1 = int_1;
	double_2 = double_3 + double_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_6 = double_6;
	double_1 = double_7;
	int_2 = int_1 * int_1;
	int_1 = int_2;
	char_2 = char_2 * char_3;
	double_3 = double_8;
	float_2 = float_2 * float_3;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_9 = 1;
		int int_3 = 1;
		double_8 = double_8 + double_9;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		int_3 = int_3 + int_2;
	}
	unsigned_int_5 = unsigned_int_6;
}
void v_swi_cartpol( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_3 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_2 * int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	double_1 = double_2;
	char_1 = char_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "m<") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1;
		}
	}
	if(1)
	{
		int_5 = int_2 * int_1;
	}
	int_2 = int_2 * int_5;
	double_1 = double_1 + double_2;
	double_3 = double_1 * double_1;
}
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_2 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	int_1 = int_1;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_1;
	int_1 = int_1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
}
short v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	short short_5 = 1;
	double double_6 = 1;
	long long_5 = 1;
	float float_3 = 1;
	double_1 = double_1;
	short_1 = short_1 * short_1;
	v_swi_coortrf(double_2,double_3,double_4);

	int_1 = v_swi_nutation(double_1,short_2,double_2);

	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_1 * short_3;
	long_1 = long_3 + long_1;
	long_3 = v_swe_deltat_ex(double_3,double_4,char_1);

	double_3 = double_3 * double_1;
	unsigned_int_2 = v_swe_degnorm(double_3);

	short_4 = short_2 + short_3;
	double_2 = double_4 + double_5;
	int_3 = int_2 + int_2;
	v_swi_cartpol(double_1,double_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_4 * double_2;
	long_3 = long_2 + long_3;
	char_1 = char_1;
	int_3 = int_3 + int_2;
	float_2 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	v_swi_polcart(double_2,double_4);

	short_3 = short_3 + short_4;
	int_1 = int_1;
	long_2 = long_2 * long_2;
	long_3 = long_1 + long_1;
	char_1 = char_1 * char_1;
	int_1 = int_4;
	double_3 = v_swi_epsiln(double_4,char_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	int_1 = int_2;
	double_2 = double_1 * double_2;
	char_2 = char_2;
	short_5 = short_1 * short_4;
	if(1)
	{
		double_4 = double_6 + double_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_3 * long_3;
	}
	long_1 = long_1 * long_5;
	int_3 = v_swi_precess(double_3,double_6,float_3,int_4,-1 );

	double_1 = double_2 + double_2;
	return short_2;
}
char v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	long long_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long_1 = v_swe_deltat_ex(double_1,double_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	int_1 = int_2 + int_3;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double_4 = double_3 + double_4;
	}
	v_sidtime_non_polynomial_part(double_3);

	long_1 = long_1;
	if(1)
	{
		if(1)
		{
			double_4 = double_5 + double_1;
			if(1)
			{
				long_1 = long_2 + long_3;
			}
			if(1)
			{
				long long_4 = 1;
				long_5 = long_3 * long_4;
			}
			if(1)
			{
				double_4 = double_3 * double_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			}
			char_3 = char_1 + char_3;
		}
	}
	double_1 = double_5 * double_5;
	float_2 = float_3 + float_4;
	double_3 = double_5 * double_5;
	if(1)
	{
		short_1 = short_1 + short_1;
		long_2 = long_5 * long_6;
	}
	if(1)
	{
		double_1 = double_5 + double_1;
		unsigned_int_2 = unsigned_int_3;
	}
	v_swi_init_swed_if_start();

	short_3 = short_2 + short_1;
	int_3 = int_4;
	if(1)
	{
		double_5 = double_5 * double_5;
		double_2 = double_1 + double_3;
		int_3 = int_4 + int_2;
		int_3 = int_5 + int_3;
		double_4 = double_4;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		float float_5 = 1;
		char char_6 = 1;
		unsigned_int_3 = v_swe_degnorm(double_3);

		char_5 = char_4 * char_4;
		float_5 = float_4 * float_4;
		double_6 = double_6 + double_5;
		char_5 = char_4 + char_6;
	}
	if(1)
	{
		int_2 = int_3 * int_6;
		long_6 = long_2;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_6 * unsigned_int_6;
	double_6 = double_2;
	double_3 = double_4;
	short_3 = short_4 + short_4;
	long_1 = long_3 + long_1;
	int_5 = int_6 * int_5;
	if(1)
	{
		if(1)
		{
			float float_6 = 1;
			float float_7 = 1;
			int_5 = int_2;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
			short_4 = short_2 * short_3;
			long_3 = long_6;
			unsigned_int_3 = unsigned_int_4;
			long_3 = long_5 * long_5;
			short_1 = short_4 * short_5;
			float_2 = float_6 * float_7;
		}
		if(1)
		{
			long long_7 = 1;
			long_7 = long_6 + long_7;
			short_5 = v_sidtime_long_term(double_4,double_6,double_6);

			int_3 = int_4 + int_5;
		}
	}
	return char_3;
}
unsigned int v_init_dt()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	unsigned_int_2 = v_swi_fopen(int_1,char_1,char_1,char_1);

}
int v_deltat_aa( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_9 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_6 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	double_4 = double_3 + double_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = v_init_dt();

	double_6 = double_5 + double_5;
	char_1 = char_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_8 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_2 = unsigned_int_2;
		double_7 = double_2;
		int_1 = int_1 + int_1;
		short_1 = short_1 * short_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		int_1 = int_1 * int_2;
		double_8 = double_6;
		if(1)
		{
			double_3 = double_8 + double_2;
		}
		long_3 = long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			if(1)
			{
				int_3 = int_1;
			}
			if(1)
			{
				int_3 = int_2 * int_3;
			}
			double_4 = double_7 * double_6;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_1 = short_1;
		}
		float_3 = float_1 * float_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			double_7 = double_2 * double_8;
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_2 + long_5;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_5 = double_2 * double_2;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		float_3 = v_adjust_for_tidacc(double_9,double_4,double_4);

		char_1 = char_3 * char_3;
		if(1)
		{
			double_10 = double_7 + double_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
		}
		double_8 = double_8 * double_10;
		short_4 = short_2 + short_3;
		if(1)
		{
			double_10 = double_5;
		}
		double_6 = double_9 + double_3;
	}
	long_3 = long_6 * long_6;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if(remainder_check(controller_11,100,2))
	{
		long long_7 = 1;
		double_9 = double_1;
		long_7 = long_1 * long_4;
		char_2 = char_2 * char_2;
		char_2 = char_3 * char_2;
		long_4 = long_6;
	}
	return int_4;
}
void v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	short_1 = short_1 + short_1;
	short_1 = short_2;
	if(1)
	{
		double_2 = double_1 * double_1;
		double_1 = double_2 * double_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			int int_2 = 1;
			unsigned_int_4 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_5;
			char_2 = char_1 + char_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			float_1 = v_adjust_for_tidacc(double_1,double_3,double_2);

			double_3 = double_3;
			int_2 = int_1 * int_1;
			short_2 = short_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		int_4 = int_3 + int_1;
		unsigned_int_2 = unsigned_int_2;
		double_1 = double_2 * double_1;
		char_1 = char_1 * char_1;
		double_3 = double_4 * double_3;
		short_1 = short_1 * short_2;
	}
	short_1 = short_1 + short_3;
	int_5 = v_deltat_longterm_morrison_stephenson(double_3);

}
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_2;
	}
	return float_1;
}
int v_deltat_longterm_morrison_stephenson( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	return int_1;
}
unsigned int v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_2;
	int_2 = v_deltat_longterm_morrison_stephenson(double_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
		int_2 = int_3;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		unsigned_int_6 = unsigned_int_5;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_1 = v_adjust_for_tidacc(double_2,double_2,double_1);

		float_1 = float_2 * float_3;
		float_4 = float_2 + float_1;
	}
	if(1)
	{
		long long_2 = 1;
		unsigned_int_6 = unsigned_int_1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_1 = int_4 * int_5;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
		short short_3 = 1;
		unsigned int unsigned_int_7 = 1;
		short_1 = short_3 + short_3;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		double_3 = double_1 * double_3;
		long_4 = long_3 + long_1;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		int_3 = int_1 * int_1;
		short_5 = short_4 * short_1;
	}
	if(1)
	{
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
		char_1 = char_3;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_2 = char_4 + char_5;
		double_2 = double_3 + double_2;
	}
	double_1 = double_3 * double_3;
	double_2 = double_3 * double_2;
	return unsigned_int_1;
}
int v_calc_deltat( double parameter_1,double parameter_2,double parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	float_4 = v_adjust_for_tidacc(double_1,double_1,double_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_2 * double_3;
	int_1 = int_2;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	}
	char_1 = char_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_3 = int_4;
			}
			double_1 = double_5 * double_2;
		}
		if(1)
		{
			int_1 = int_4 * int_4;
		}
		char_2 = char_2 * char_3;
	}
	long_1 = long_1 * long_2;
	float_3 = float_4 + float_2;
	long_1 = long_2 * long_3;
	if(1)
	{
		long_1 = v_swi_get_tid_acc(double_4,long_3,char_2,unsigned_int_4,double_5,char_4);

		float_1 = float_3 + float_4;
	}
	if(1)
	{
		if(1)
		{
			double_7 = double_6 + double_3;
		}
		if(1)
		{
			if(1)
			{
				float float_5 = 1;
				int_5 = v_deltat_aa(double_7,double_3);

				char_3 = char_1 * char_5;
				float_4 = float_4 + float_5;
				v_deltat_stephenson_morrison_1600(double_1,double_2);

				unsigned_int_3 = unsigned_int_5;
				float_2 = v_swi_set_tid_acc(double_5,char_4,short_3,char_5);

				int_4 = int_6 + int_1;
				short_2 = short_3 + short_2;
				int_4 = int_7 + int_3;
			}
		}
	}
	if(1)
	{
		double_3 = double_5 * double_5;
	}
	double_4 = double_2 * double_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			int int_8 = 1;
			int int_9 = 1;
			int int_10 = 1;
			float float_6 = 1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
			v_swi_init_swed_if_start();

			int_4 = int_1 * int_5;
			int_9 = int_7 * int_8;
			char_4 = char_4 * char_3;
			int_8 = int_8;
			unsigned_int_4 = v_deltat_espenak_meeus_1620(double_5,double_6);

			int_10 = int_6 * int_1;
			float_6 = float_1 * float_3;
		}
		if(1)
		{
			double_4 = double_7 * double_6;
			short_2 = short_1 * short_2;
		}
	}
	char_4 = char_4 * char_4;
	return int_3;
}
short v_swi_guess_ephe_flag()
{
	float float_1 = 1;
	short short_1 = 1;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return short_1;
}
void v_swe_deltat( double parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = v_swi_guess_ephe_flag();

	long_1 = v_swe_deltat_ex(double_1,double_1,char_1);

	double_3 = double_2 + double_1;
}
double v_deltat( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	return double_1;
	v_swe_deltat(double_2);

}
long v_swe_deltat_ex( double parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = v_calc_deltat(double_1,double_1,double_2,char_1);

	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") > 0)
	{
	}
	double_2 = v_deltat(double_3);

	char_1 = char_2 + char_2;
	return long_1;
}
int v_swi_get_observer( double parameter_1,short parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_6 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int_2 = int_1 + int_1;
	int_4 = int_2 * int_3;
	int_3 = v_swi_precess(double_1,double_2,float_1,int_1,-1 );

	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 + int_4;
	if(1)
	{
		if(1)
		{
			short_2 = short_1 * short_2;
		}
	}
	int_5 = v_swi_nutation(double_1,short_2,double_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_2;
	if(1)
	{
		v_swi_nutate(double_1,double_3,short_2);

		unsigned_int_2 = unsigned_int_3;
		int_1 = int_3 * int_4;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double_4 = double_4 + double_3;
		if(1)
		{
			double_2 = double_3 + double_3;
		}
	}
	if(1)
	{
		char_1 = v_swe_sidtime0(double_3,double_3,double_2);

		int_2 = int_3 * int_3;
	}
	if(1)
	{
		short_2 = short_2 + short_2;
		short_2 = short_3;
	}
	int_2 = int_1 * int_1;
	int_6 = int_6;
	long_1 = long_1;
	float_2 = float_2 + float_3;
	double_2 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_3 + double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	short_3 = short_1 + short_4;
	v_swi_polcart_sp(double_4,double_1);

	char_1 = char_2 * char_2;
	double_4 = double_1 + double_4;
	v_swi_precess_speed(double_3,double_4,unsigned_int_1,int_5);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	double_5 = double_4 * double_3;
	double_5 = double_5 * double_1;
	long_2 = v_swe_deltat_ex(double_2,double_1,char_3);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float float_5 = 1;
		v_swi_coortrf2(double_3,double_5,double_2,double_1);

		float_1 = float_4 + float_5;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		double double_7 = 1;
		short_5 = short_6;
		int_6 = int_5 * int_6;
		double_7 = double_3 * double_6;
	}
	double_4 = double_1 * double_6;
	double_8 = double_1 * double_6;
	if(1)
	{
		long long_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_4 = int_3;
		}
		int_4 = int_1 * int_4;
		v_swi_cartpol(double_8,double_1);

		long_2 = long_2 * long_3;
	}
	return int_4;
	double_3 = v_swi_epsiln(double_9,char_2);

}
void v_app_pos_etc_moon( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_6 = 1;
	int int_9 = 1;
	int int_10 = 1;
	char char_7 = 1;
	long long_1 = 1;
	int int_11 = 1;
	int int_12 = 1;
	double double_8 = 1;
	double double_9 = 1;
	char char_8 = 1;
	float float_5 = 1;
	double double_10 = 1;
	short_1 = short_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	int_3 = int_3;
	double_3 = double_1 + double_2;
	int_1 = int_2 + int_2;
	float_2 = float_1 * float_2;
	int_4 = v_swi_get_observer(double_4,short_1,int_1,double_2,char_1);

	int_7 = int_5 * int_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_2 + char_3;
	v_swi_bias(double_2,double_5,int_2,char_4);

	double_2 = double_2 + double_4;
	if(1)
	{
		int_3 = v_swi_pleph(double_3,int_6,int_5,double_5,char_4);

		int_1 = int_8 + int_8;
		int_3 = int_7 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_aberr_light(double_3,double_2,double_6);

		float_4 = float_2 + float_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_7 = v_get_denum(unsigned_int_3,unsigned_int_1);

		v_app_pos_rest(double_2,char_2,double_4,double_6,char_5,char_2,-1 );

		unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_4 = char_5 * char_6;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_10 = int_9 + int_7;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_7 = double_4 * double_6;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_7 = int_5 + int_9;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			char_2 = char_5 + char_7;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			long_1 = v_if(double_1,int_11,short_2,unsigned_int_6,unsigned_int_1,float_4,int_7);

			int_5 = int_4 * int_8;
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			unsigned_int_6 = unsigned_int_5;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		float_2 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			double_5 = v_for(char_7);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			double_7 = double_3 * double_3;
			double_1 = double_5 * double_5;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			double_5 = double_4 + double_5;
		}
		char_4 = char_7 + char_3;
		int_7 = int_1 + int_8;
		if(1)
		{
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			short_2 = v_sweplan(double_4,int_12,int_11,unsigned_int_1,short_1,double_8,double_5,double_9,double_7,char_8,-1 );

			char_8 = char_6;
		}
		v_swi_close_jpl_file();

		float_5 = float_4 + float_4;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			long long_4 = 1;
			long long_5 = 1;
			int int_13 = 1;
			long long_6 = 1;
			int_9 = v_swi_precess(double_4,double_8,float_2,int_8,-1 );

			float_2 = float_4 + float_5;
			long_5 = long_1 + long_4;
			int_4 = int_13 * int_10;
			v_swi_precess_speed(double_10,double_8,unsigned_int_6,int_7);

			long_6 = long_1 * long_6;
			double_1 = double_3 * double_1;
		}
		int_8 = int_6 * int_11;
		if(1)
		{
			if(1)
			{
			}
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				int_3 = int_2;
			}
		}
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				unsigned_int_7 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				float_2 = float_5;
			}
		}
		if(1)
		{
			for(int looper_17=0; looper_17<1;looper_17++)
			{
				unsigned_int_7 = unsigned_int_4 * unsigned_int_5;
			}
		}
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		char_4 = char_3 * char_6;
	}
	if(1)
	{
		float_3 = float_5;
		if(1)
		{
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					int_7 = int_6;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			unsigned_int_5 = unsigned_int_8 * unsigned_int_9;
		}
	}
	if(1)
	{
		double_5 = double_2 + double_7;
	}
	for(int looper_21=0; looper_21<1;looper_21++)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		if(1)
		{
			int_3 = int_8;
		}
		short_3 = short_3;
	}
	if(1)
	{
		int_4 = int_7;
	}
}
long v_embofs_mosh( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	short short_1 = 1;
	long long_5 = 1;
	int int_7 = 1;
	double double_7 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_3 * int_2;
	double_1 = double_1 + double_2;
	double_2 = double_2 * double_2;
	int_3 = int_3 * int_4;
	float_2 = float_1 + float_1;
	double_3 = double_1 + double_2;
	double_5 = double_1 * double_4;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_6 = double_5 + double_6;
	int_1 = int_2 * int_4;
	double_6 = double_6 * double_1;
	int_2 = v_swi_precess(double_6,double_1,float_1,int_2,-1 );

	float_1 = float_2 * float_1;
	v_swi_polcart(double_1,double_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2;
	int_5 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_3 * float_2;
	double_6 = double_2 + double_2;
	float_4 = float_2 * float_4;
	long_3 = long_1 * long_3;
	double_6 = double_3 * double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2 * long_1;
	char_2 = char_1 + char_1;
	long_4 = long_4 + long_3;
	float_1 = float_4 * float_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	int_4 = int_2 * int_4;
	double_4 = double_5 * double_2;
	unsigned_int_6 = unsigned_int_3;
	int_2 = int_6 * int_3;
	unsigned_int_3 = v_swe_degnorm(double_6);

	short_1 = short_1 * short_1;
	long_3 = long_5;
	int_2 = int_7 * int_7;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	v_swi_coortrf2(double_6,double_4,double_5,double_5);

	double_7 = double_7 + double_1;
	short_2 = short_1;
	int_5 = int_6 + int_7;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	double_5 = double_5 + double_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_6 = 1;
		long_4 = long_1 * long_6;
	}
	return long_4;
}
float v_sscc_81( int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	short_1 = short_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_1;
	long_3 = long_3;
	int_2 = int_1 * int_2;
	double_2 = double_1 * double_1;
	char_1 = char_3 + char_4;
	double_1 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		short short_3 = 1;
		long long_6 = 1;
		double_5 = double_4 + double_3;
		int_1 = int_2 * int_3;
		long_5 = long_4 * long_2;
		short_1 = short_3;
		long_3 = long_1 + long_6;
	}
	return float_2;
}
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_6 = 1;
	int int_9 = 1;
	long long_7 = 1;
	double double_5 = 1;
	int int_10 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	long_3 = long_1 + long_2;
	short_3 = short_1 + short_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_4 = int_2 * int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	long_5 = long_2 * long_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_2;
	char_3 = char_1 * char_2;
	long_3 = long_2;
	double_1 = double_2 * double_2;
	char_4 = char_3 * char_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_4 = 1;
		char char_7 = 1;
		float float_6 = 1;
		char char_8 = 1;
		int_3 = int_5 + int_4;
		if(1)
		{
			double_3 = double_1 + double_3;
		}
		if(1)
		{
			int_6 = int_5 + int_6;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_1 = double_4 + double_2;
			}
			char_2 = char_1 * char_3;
			short_4 = short_5;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				float_3 = float_2 + float_2;
			}
			int_6 = int_1 + int_7;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				long_4 = long_6 + long_6;
			}
			int_5 = int_5 * int_4;
			char_6 = char_5 * char_1;
		}
		int_3 = int_5 + int_4;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
		short_3 = short_3 * short_2;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_2 = int_1 + int_3;
			char_6 = char_4 * char_5;
			if(1)
			{
				float float_5 = 1;
				float_1 = float_1 * float_3;
				if(1)
				{
					int_4 = int_4 * int_3;
				}
				float_5 = float_4 * float_5;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				if(1)
				{
					float_5 = float_5 + float_5;
				}
				float_3 = float_3 * float_5;
				if(1)
				{
					char_1 = char_4 * char_5;
					double_3 = double_1;
					int_4 = int_2;
				}
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					int int_8 = 1;
					unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
					int_8 = int_8 * int_9;
					char_3 = char_2 * char_7;
				}
			}
		}
		double_4 = double_1 * double_3;
		float_6 = float_4 + float_6;
		char_6 = char_2 * char_5;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned int unsigned_int_8 = 1;
			long_7 = long_6;
			unsigned_int_2 = unsigned_int_8 + unsigned_int_4;
		}
		int_6 = int_7 + int_4;
		short_3 = short_5 + short_2;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			short_5 = short_4;
			double_3 = double_2 * double_1;
		}
		char_1 = char_7 * char_8;
		double_3 = double_5;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			double_5 = double_2 + double_3;
			double_2 = double_4 + double_2;
		}
		char_1 = char_7 * char_8;
	}
	int_7 = int_9 * int_6;
	float_2 = v_sscc_81(int_10,double_5,int_7);

	long_6 = long_5 + long_6;
	long_2 = long_7;
	return int_1;
}
int v_swi_moshplan( double parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5,char parameter_6)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_7 = 1;
	int_1 = v_swi_moshplan2(double_1,int_2,double_2);

	double_1 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	short_1 = short_2 + short_2;
	char_2 = char_1 * char_2;
	long_1 = v_embofs_mosh(double_3,double_3);

	char_3 = char_2 + char_1;
	char_4 = char_1 * char_3;
	float_1 = float_1 + float_1;
	short_4 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		v_swi_polcart(double_2,double_3);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		int_2 = int_3 + int_4;
		long_2 = long_2;
	}
	if(1)
	{
		int_4 = int_4 + int_5;
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_5;
			if(1)
			{
				float_2 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			long long_4 = 1;
			long_1 = long_4 * long_1;
		}
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			int int_6 = 1;
			short_3 = short_2 + short_3;
			short_6 = short_2 * short_5;
			float_1 = float_1 * float_3;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				double_2 = double_1 + double_1;
				float_2 = float_2 + float_3;
			}
			int_2 = int_3 + int_5;
			unsigned_int_4 = unsigned_int_2;
			int_2 = int_5;
			int_6 = int_3 * int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float_4 = float_2 + float_4;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_7 = short_6 * short_4;
			}
		}
		char controller_11[3];
		fgets(controller_11 ,3 ,stdin);
		if( strcmp( controller_11, "Q*") > 0)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float_1 = float_1 + float_4;
			}
		}
	}
	if(1)
	{
		float_3 = float_2 * float_2;
	}
	if(1)
	{
		double double_4 = 1;
		if(1)
		{
			char_4 = char_3 * char_4;
		}
		if(1)
		{
			float float_5 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float_2 = float_4 + float_5;
			v_swi_coortrf2(double_1,double_3,double_3,double_3);

			int_5 = int_7;
			double_1 = double_4;
			if(1)
			{
				float float_6 = 1;
				unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
				float_2 = float_6;
				int_5 = int_7 + int_5;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
				}
			}
			short_7 = short_3 + short_3;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			int_5 = int_5 * int_5;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				short short_8 = 1;
				short_2 = short_4 * short_8;
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				double_2 = double_4 * double_3;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double double_5 = 1;
				double_1 = double_5 + double_4;
			}
		}
	}
	return int_2;
}
short v_swemoon( double parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_sweph(double_1,int_1,int_1,unsigned_int_1,double_1,long_1,double_1,char_1);

	double_2 = double_1;
	int_1 = int_1 * int_1;
	float_1 = float_1;
	float_3 = float_2 + float_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short_3 = short_3 + short_3;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			int_3 = int_3 + int_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			double_2 = double_1 + double_3;
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_1 + int_1;
		}
	}
	return short_3;
}
unsigned int v_embofs( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	return unsigned_int_1;
}
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 149)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	short_1 = short_1 * short_2;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_1;
}
char v_pre_pecl( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	char_1 = char_1 + char_1;
	float_1 = float_1;
	char_2 = char_2 * char_2;
	char_3 = char_1 + char_2;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		float float_2 = 1;
		char_1 = char_3 + char_2;
		double_1 = double_1 + double_1;
		int_2 = int_1 + int_2;
		double_2 = double_2 + double_1;
		short_1 = short_1 + short_1;
		float_2 = float_1 + float_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_2 + double_3;
		short_1 = short_1 + short_1;
		double_2 = double_1 + double_3;
	}
	double_1 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_2;
	}
	int_2 = int_2 * int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_2 * short_3;
	long_3 = long_2 + long_2;
	char_1 = char_3 * char_3;
	return char_3;
}
void v_pre_pequ( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	float_2 = float_1 + float_2;
	int_1 = int_3 * int_3;
	float_4 = float_3 + float_2;
	short_3 = short_1 + short_2;
	float_5 = float_5 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_3 + int_1;
		short_2 = short_2 * short_2;
		int_4 = int_1 * int_1;
		short_2 = short_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_2 = short_3 + short_2;
		short_3 = short_1 + short_2;
		short_3 = short_1 + short_4;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	int_3 = int_2 + int_4;
	short_3 = short_4 * short_5;
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		int_3 = int_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "o") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
}
char v_pre_pmat( double parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	v_swi_cross_prod(double_1,double_2,double_1,uni_para);

	short_1 = short_1 * short_1;
	char_2 = char_1 * char_1;
	double_2 = double_2 + double_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	char_3 = char_2;
	double_2 = double_1 + double_1;
	long_3 = long_1 * long_2;
	int_1 = int_1 * int_2;
	int_3 = int_1 * int_2;
	int_3 = int_1 + int_2;
	char_4 = char_3 + char_3;
	char_1 = char_4 * char_1;
	double_2 = double_3 + double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_4 + int_3;
	double_1 = double_4;
	return char_4;
}
double v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_1 = int_1;
	short_2 = short_1 + short_2;
	float_1 = float_1 + float_1;
	char controller4vul_2324[2];
	fgets(controller4vul_2324 ,2 ,stdin);
	if( strcmp( controller4vul_2324, "v") < 0)
	{
		char_1 = v_pre_pmat(double_1,double_1,uni_para);

	}
	int_2 = int_1 + int_1;
	int_2 = int_3 * int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_2 = 1;
			double_3 = double_2 + double_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return double_3;
}
void v_precess_2( double parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_4 = 1;
	char char_7 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	int int_7 = 1;
	long long_6 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	short short_6 = 1;
	float float_5 = 1;
	short short_7 = 1;
	short short_8 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_1;
	int_2 = int_2 * int_2;
	char_1 = char_2 * char_2;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1;
		int_3 = int_3 + int_2;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		long_1 = long_1 * long_1;
		char_4 = char_1 + char_3;
	}
	if(1)
	{
		float_2 = float_1;
		short_1 = short_1 + short_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_2 + int_1;
		double_2 = double_1 * double_2;
		short_2 = short_3;
	}
	long_3 = long_2 * long_1;
	if(1)
	{
		double_1 = double_1 + double_3;
	}
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_4 * int_3;
	double_2 = double_2 * double_1;
	char_5 = char_2 * char_2;
	long_3 = long_3 * long_3;
	float_1 = float_2 + float_2;
	char_6 = char_3 * char_5;
	long_3 = long_3 + long_4;
	char_1 = char_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1;
	}
	float_3 = float_3 * float_2;
	int_6 = int_5 * int_3;
	short_2 = short_3 + short_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		long_4 = long_5 * long_4;
	}
	if(1)
	{
		double_3 = double_3 * double_2;
	}
	long_5 = long_5;
	long_3 = long_1 + long_3;
	float_2 = float_3 + float_2;
	double_4 = v_swi_epsiln(double_3,char_7);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_7 = int_2;
	short_3 = short_1;
	long_1 = long_2 + long_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_6 = char_5 * char_6;
	}
	if(1)
	{
		int_7 = int_2 * int_3;
	}
	double_6 = double_2 + double_5;
	int_2 = int_2 + int_7;
	float_4 = float_2 + float_3;
	long_2 = long_1 * long_6;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		double double_7 = 1;
		double_7 = double_1;
	}
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	double_6 = double_8 + double_5;
	short_1 = short_1 * short_5;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_7;
	int_8 = int_6 + int_6;
	if(1)
	{
		short_1 = short_5 * short_6;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	}
	char_4 = char_6 + char_1;
	int_1 = int_8 + int_5;
	float_5 = float_2 * float_3;
	int_7 = int_6 * int_5;
	short_6 = short_7 + short_8;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
	}
}
float v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_5 = 1;
	double double_8 = 1;
	float float_6 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
		float_2 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
		int_4 = int_4 + int_1;
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		int_4 = int_3 + int_3;
		float_2 = float_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1;
	}
	if(1)
	{
		double_4 = double_3 * double_3;
		float_4 = float_3 + float_1;
		double_2 = double_1;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_1 = long_1 + long_1;
	double_5 = double_4 + double_2;
	double_6 = double_6 * double_7;
	double_1 = double_6 * double_1;
	float_5 = float_1 * float_2;
	short_1 = short_2 + short_1;
	double_3 = double_8 + double_7;
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "f") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		float_4 = float_3 + float_6;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		char char_3 = 1;
		float float_7 = 1;
		char_3 = char_1 + char_1;
		short_2 = short_2 * short_2;
		float_1 = float_1 * float_7;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_4 = char_5;
	}
	return float_6;
}
int v_swi_precess( double parameter_1,double parameter_2,float parameter_3,int parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	int_1 = int_2;
	char controller4vul_2323[2];
	fgets(controller4vul_2323 ,2 ,stdin);
	if( strcmp( controller4vul_2323, ";") < 0)
	{
		double_1 = v_precess_3(double_1,double_1,int_3,int_4,uni_para);

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int_3 = int_1;
	}
	if(1)
	{
		float_1 = float_2 * float_1;
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
	return int_1;
}
void v_swi_coortrf2( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_1;
	double_3 = double_1 * double_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_3 = int_1 * int_2;
}
void v_swi_polcart( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	long_2 = long_1 + long_1;
	float_2 = float_1 + float_2;
	char_2 = char_1 + char_2;
	double_2 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_2;
}
float v_ecldat_equ2000( double parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = v_swi_precess(double_1,double_1,float_1,int_1,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3;
	short_1 = short_1 * short_1;
	return float_1;
}
float v_moon4()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_mods3600(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	double_2 = double_2 + double_1;
	return float_1;
}
short v_moon3()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_3 = float_1 + float_2;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	int_3 = v_chewm(float_3,int_1,int_3,int_4,double_2);

	short_2 = short_1 * short_2;
	float_4 = float_3 * float_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	return short_2;
}
long v_moon2()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_9 = 1;
	float float_4 = 1;
	short short_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_12 = 1;
	double_1 = double_1 * double_1;
	short_3 = short_1 * short_2;
	long_2 = long_1 * long_2;
	double_1 = double_2 * double_2;
	char_1 = char_1;
	int_2 = int_1 + int_1;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2;
	int_4 = int_3 + int_3;
	char_1 = char_1 * char_2;
	char_1 = char_1;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_2 * char_2;
	char_1 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_2 = unsigned_int_6;
	double_2 = double_2 + double_4;
	double_4 = double_2 + double_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_3 + int_1;
	float_2 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
	int_5 = int_2 + int_2;
	double_2 = double_3 * double_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_7;
	int_5 = int_5 * int_6;
	short_1 = short_3 * short_1;
	short_2 = short_1;
	double_6 = double_4 + double_5;
	double_4 = double_7 + double_3;
	int_2 = int_6 + int_1;
	int_4 = int_3 + int_6;
	char_4 = char_3 + char_1;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	double_8 = double_5 + double_7;
	double_1 = double_4 * double_3;
	int_2 = int_3 * int_4;
	unsigned_int_8 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_9 = unsigned_int_9 + unsigned_int_10;
	short_1 = short_3 + short_3;
	double_4 = double_2 + double_2;
	short_1 = short_3 + short_2;
	char_1 = char_4 + char_1;
	double_5 = double_1 + double_4;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
	long_1 = long_3 * long_4;
	int_5 = int_2 + int_6;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_9;
	float_3 = float_2 * float_2;
	float_1 = float_1;
	int_3 = int_2 * int_6;
	double_5 = double_9;
	float_4 = float_1 * float_1;
	long_1 = long_2;
	unsigned_int_10 = unsigned_int_5;
	short_4 = short_1 * short_3;
	char_5 = char_5;
	int_4 = int_3 + int_2;
	short_2 = short_2 + short_1;
	double_8 = double_4;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_11;
	unsigned_int_11 = unsigned_int_4 + unsigned_int_5;
	int_7 = int_6 * int_4;
	unsigned_int_6 = unsigned_int_12;
	long_3 = long_4;
	long_4 = long_3 + long_1;
	short_4 = short_4;
	unsigned_int_9 = unsigned_int_12 + unsigned_int_12;
	return long_3;
}
int v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_2 + double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_2 + double_1;
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "0") < 0)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_1 = unsigned_int_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
				}
				int_2 = int_1 * int_1;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
				if(1)
				{
					unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
				}
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					float_3 = float_1 + float_2;
					unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
					unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
					int_3 = int_4;
					char_2 = char_2 * char_3;
				}
			}
		}
		int_4 = int_2 * int_2;
		unsigned_int_4 = unsigned_int_6;
		double_1 = double_3;
		double_6 = double_4 * double_5;
		long_1 = long_1 + long_1;
		if(1)
		{
			double_1 = double_7 + double_3;
		}
		long_2 = long_2 + long_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_7;
		char_4 = char_2 + char_1;
		int_1 = int_1 * int_4;
		char_4 = char_2 + char_4;
		char_4 = char_1 + char_3;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		char_5 = char_4 * char_2;
		unsigned_int_7 = unsigned_int_2;
		int_1 = int_3 * int_3;
		short_2 = short_1 + short_1;
		double_1 = double_7 + double_5;
		int_4 = int_5 * int_3;
	}
	return int_4;
}
double v_sscc( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1 * short_1;
	double_3 = double_1 * double_2;
	long_3 = long_1 + long_2;
	float_1 = float_1 + float_1;
	short_2 = short_1 * short_1;
	double_1 = double_2 * double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_5 * double_6;
		double_1 = double_1 + double_5;
		int_2 = int_3;
		float_3 = float_2 + float_1;
		double_3 = double_7;
	}
	return double_7;
}
int v_moon1()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_9 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	char char_7 = 1;
	double double_10 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_9 = 1;
	int int_9 = 1;
	long long_7 = 1;
	double double_11 = 1;
	long long_8 = 1;
	int int_10 = 1;
	float float_7 = 1;
	float float_8 = 1;
	float float_9 = 1;
	int int_11 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_10 = 1;
	long long_9 = 1;
	double_3 = double_1 * double_2;
	char_2 = char_1 * char_2;
	long_1 = long_2;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_4 = double_2 * double_1;
	}
	int_2 = int_2;
	long_3 = long_2 + long_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_2 * int_3;
	long_3 = long_3 * long_2;
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	int_1 = int_1 * int_1;
	long_3 = long_2 * long_1;
	long_4 = long_2 * long_4;
	int_2 = int_4 * int_2;
	short_1 = short_1 + short_2;
	double_2 = double_1 + double_1;
	double_2 = double_4 + double_3;
	short_2 = short_3 * short_1;
	int_5 = int_5 * int_4;
	char_3 = char_3;
	double_4 = double_4 + double_2;
	double_4 = double_5 + double_3;
	char_2 = char_1 + char_1;
	char_1 = char_3 + char_3;
	int_2 = int_5 + int_4;
	double_1 = double_3;
	int_1 = int_1 + int_4;
	int_1 = int_2 * int_1;
	int_1 = int_4 + int_5;
	long_3 = long_2 * long_5;
	short_1 = short_2 * short_4;
	char_4 = char_3;
	long_3 = long_3 * long_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	short_2 = short_2 + short_2;
	char_5 = char_3 + char_3;
	long_3 = long_5 + long_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	char_6 = char_4 + char_6;
	double_2 = double_4 + double_4;
	float_1 = float_1 * float_2;
	double_3 = double_5 * double_4;
	unsigned_int_5 = unsigned_int_5;
	int_5 = int_4;
	double_6 = double_2;
	int_4 = int_3 * int_5;
	double_8 = double_7 * double_1;
	float_1 = float_1 * float_3;
	int_2 = int_2 * int_1;
	int_6 = int_3;
	int_7 = int_2 + int_7;
	short_4 = short_1 * short_4;
	float_1 = float_3;
	double_6 = double_9 + double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_1 + short_4;
	double_7 = double_7 + double_9;
	double_4 = double_3;
	long_1 = long_5;
	float_1 = float_1 + float_3;
	float_1 = float_1;
	double_5 = double_9;
	long_6 = long_3 * long_3;
	long_6 = long_4 + long_4;
	int_6 = int_2 + int_5;
	double_6 = double_3;
	double_6 = double_6 * double_1;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	float_3 = float_1 + float_1;
	int_3 = int_5;
	long_4 = long_5;
	long_5 = long_1 + long_5;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
	double_2 = double_7 + double_2;
	double_6 = double_7 * double_9;
	unsigned_int_8 = unsigned_int_3;
	char_6 = char_6 * char_6;
	float_1 = float_2 * float_1;
	short_1 = short_2 + short_5;
	int_5 = int_2 * int_3;
	double_5 = double_6 * double_8;
	long_3 = long_5 + long_3;
	char_3 = char_4 * char_5;
	char_1 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_2;
	int_5 = int_7 * int_4;
	short_3 = short_2 + short_5;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_8;
	unsigned_int_8 = unsigned_int_8;
	short_5 = short_5;
	int_8 = int_3 + int_1;
	unsigned_int_5 = unsigned_int_7;
	double_7 = double_2 + double_2;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_9;
	short_6 = short_1 + short_5;
	char_2 = char_7 + char_4;
	double_3 = double_5 + double_2;
	char_5 = char_2;
	short_1 = short_4 + short_4;
	double_9 = double_6 + double_10;
	int_5 = int_8;
	float_1 = float_4;
	int_7 = int_2 * int_6;
	long_5 = long_4 + long_1;
	float_1 = float_1 * float_1;
	float_6 = float_5 + float_1;
	char_4 = char_5 + char_8;
	unsigned_int_1 = unsigned_int_10 * unsigned_int_9;
	double_7 = double_5 * double_10;
	double_10 = double_3 * double_7;
	int_4 = int_3 * int_2;
	double_6 = double_8;
	char_4 = char_6 + char_2;
	char_3 = char_7 * char_9;
	unsigned_int_9 = unsigned_int_2 * unsigned_int_6;
	double_10 = double_2;
	int_5 = int_9 * int_1;
	long_6 = long_6 + long_7;
	short_4 = short_1 * short_1;
	double_4 = double_4 + double_3;
	int_8 = int_9 + int_6;
	double_6 = double_11 * double_7;
	long_8 = long_6 + long_8;
	double_6 = double_8 * double_5;
	long_6 = long_1 + long_5;
	int_10 = int_9 * int_7;
	int_5 = int_9 * int_9;
	int_7 = int_10 * int_3;
	float_8 = float_1 * float_7;
	int_9 = int_10 * int_2;
	float_1 = float_9 * float_6;
	double_8 = double_3 + double_7;
	int_5 = int_1 + int_10;
	int_10 = int_10 + int_11;
	double_4 = double_5 + double_7;
	unsigned_int_9 = unsigned_int_6 + unsigned_int_5;
	long_8 = long_8 + long_4;
	unsigned_int_5 = unsigned_int_8 + unsigned_int_5;
	char_4 = char_2 + char_2;
	double_4 = double_9 * double_7;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_11;
	long_7 = long_6 * long_7;
	double_6 = double_10 * double_10;
	int_8 = int_5;
	int_3 = int_1;
	long_4 = long_5 * long_6;
	char_7 = char_1 + char_7;
	long_8 = long_5 * long_8;
	float_9 = float_7 * float_3;
	char_10 = char_4 * char_10;
	long_5 = long_6 * long_8;
	double_2 = v_sscc(int_5,double_8,int_1);

	double_2 = double_11 * double_11;
	double_4 = double_4 * double_6;
	char_9 = char_10 + char_4;
	short_6 = short_2 * short_1;
	char_5 = char_4 * char_1;
	float_1 = float_2 * float_3;
	double_8 = double_11 + double_1;
	int_6 = int_8 + int_11;
	long_9 = long_2 * long_4;
	int_9 = v_chewm(float_5,int_4,int_2,int_3,double_4);

	int_7 = int_10 * int_5;
	long_7 = long_5;
	return int_4;
}
void v_mean_elements_pl()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	double_2 = double_3 + double_2;
	unsigned_int_2 = v_mods3600(double_3);

	int_1 = int_1;
	char_2 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_2;
	double_1 = double_1 + double_1;
	short_1 = short_2;
	float_2 = float_1 * float_1;
}
unsigned int v_mods3600( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_2;
	return unsigned_int_1;
}
double v_mean_elements()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	return double_1;
	unsigned_int_1 = v_mods3600(double_2);

}
int v_swi_moshmoon2( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_1;
	short_1 = v_moon3();

	float_1 = v_moon4();

	double_3 = double_1 + double_2;
	double_3 = double_1 * double_3;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	v_mean_elements_pl();

	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 + long_1;
	int_1 = v_moon1();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 * double_2;
	int_1 = int_2;
	long_1 = v_moon2();

	int_3 = int_2 + int_2;
	double_2 = v_mean_elements();

	long_3 = long_2 + long_3;
	return int_3;
}
int v_swi_moshmoon( double parameter_1,short parameter_2,double parameter_3,char parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_1;
	double_1 = double_1 * double_1;
	double_3 = double_1 + double_2;
	short_1 = short_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char controller4vul_2321[2];
	fgets(controller4vul_2321 ,2 ,stdin);
	if( strcmp( controller4vul_2321, "v") > 0)
	{
		char controller4vul_2322[3];
		fgets(controller4vul_2322 ,3 ,stdin);
		if( strcmp( controller4vul_2322, ";y") > 0)
		{
			float_3 = v_ecldat_equ2000(double_1,double_4,uni_para);

			int_2 = int_1 * int_1;
			if(1)
			{
				int_2 = int_2 + int_3;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_1 = unsigned_int_2;
			}
		}
	}
	int_5 = int_1 * int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		long_1 = long_1 + long_2;
		char_1 = char_1;
	}
	float_3 = float_1 + float_3;
	long_1 = long_2 * long_3;
	int_4 = int_1 + int_3;
	double_4 = double_5;
	char_2 = char_2;
	int_4 = int_3 + int_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_4 = 1;
		if(1)
		{
			char_2 = char_1;
		}
		if(1)
		{
			char_3 = char_2 * char_3;
		}
		unsigned_int_3 = unsigned_int_2;
		float_3 = float_4 * float_3;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char_2 = char_3;
		}
	}
	return int_5;
}
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_3 = int_2 + int_1;
	int_2 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_4 = 1;
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_2 * short_2;
		float_3 = float_3 + float_2;
		long_2 = long_1 * long_1;
		float_4 = float_2 * float_2;
		int_4 = int_4;
		short_1 = short_3 + short_3;
		short_4 = short_1 + short_3;
		short_3 = short_2 * short_3;
	}
	return double_1;
}
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 + int_1;
	short_1 = short_1 * short_2;
	char_1 = char_2;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float_1 = float_1 + float_3;
		long_3 = long_1 + long_2;
		int_2 = int_1 + int_2;
	}
	return double_1;
}
long v_rot_back( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
	long_2 = long_2 * long_3;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	char_2 = char_1 + char_1;
	float_2 = float_1 + float_2;
	short_1 = short_1 + short_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_2;
	float_3 = float_1 * float_1;
	float_4 = float_2 + float_1;
	int_4 = int_1 + int_4;
	int_3 = int_1 * int_4;
	double_4 = double_1 + double_3;
	if(1)
	{
		long long_7 = 1;
		char_1 = char_1;
		float_1 = float_1 * float_4;
		long_5 = long_3 * long_4;
		int_1 = int_3 * int_1;
		long_1 = long_6 + long_7;
	}
	if(1)
	{
		char_4 = char_3 + char_1;
		int_3 = int_4 + int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		double_5 = double_3 + double_5;
		int_5 = int_3 * int_5;
		double_6 = double_4;
	}
	if(1)
	{
		double double_9 = 1;
		long long_8 = 1;
		short short_3 = 1;
		double_9 = double_7 + double_8;
		long_8 = long_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		char_2 = char_1 + char_2;
		short_3 = short_3 + short_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_4 = double_8 * double_3;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	int_5 = int_2 + int_6;
	int_2 = int_6 + int_6;
	int_7 = int_2 + int_4;
	float_3 = float_4 * float_3;
	long_3 = v_if(double_1,int_3,short_2,unsigned_int_2,unsigned_int_5,float_1,int_1);

	unsigned_int_3 = unsigned_int_6;
	double_2 = double_7 + double_3;
	float_2 = float_4 * float_1;
	char_3 = char_1 * char_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_6 = long_5 * long_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_4 = 1;
		double double_10 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
		short_2 = short_4 * short_2;
		double_8 = double_10;
		if(1)
		{
			double_6 = double_7;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		float_2 = float_4 * float_2;
		if(1)
		{
			double_4 = double_3 + double_3;
			int_2 = int_6;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_5 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		char_3 = char_1 + char_2;
		short_5 = short_2;
	}
	return long_4;
}
short v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_5 = 1;
	int int_8 = 1;
	long long_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_6 = 1;
	long long_7 = 1;
	short short_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	int_3 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_1;
	int_3 = int_1 + int_2;
	float_2 = float_1 * float_1;
	int_4 = int_3 + int_3;
	short_3 = short_1 + short_2;
	float_1 = float_3;
	short_3 = short_3 + short_4;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	short_4 = short_4 + short_1;
	float_2 = float_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	double_1 = double_1 + double_1;
	unsigned_int_7 = unsigned_int_5;
	short_2 = short_1 * short_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		float_2 = float_3 + float_2;
	}
	char_1 = char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
	}
	float_3 = float_3 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_3 = 1;
		int int_5 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_5 = 1;
		float float_4 = 1;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
		char_2 = char_2 + char_3;
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			char char_4 = 1;
			long_1 = long_2;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
			if(1)
			{
				int_6 = int_2 * int_5;
			}
			float_3 = float_1 + float_2;
			unsigned_int_7 = unsigned_int_2 * unsigned_int_8;
			int_7 = int_7 + int_6;
			float_3 = float_3 + float_1;
			char_4 = char_1 * char_3;
			short_5 = short_4 * short_3;
			float_3 = float_1 * float_2;
		}
		if(1)
		{
			int_2 = int_3 * int_6;
			unsigned_int_7 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_9 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_9 * unsigned_int_4;
			char_2 = char_5 * char_3;
			float_4 = float_3 + float_3;
		}
		if(1)
		{
			if(1)
			{
				char_2 = v_free_planets();

				unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
				if(1)
				{
					int_3 = int_5;
				}
			}
			int_2 = int_1 + int_6;
			double_1 = double_1 + double_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_9 = 1;
			long long_6 = 1;
			if(1)
			{
				char_5 = char_1;
			}
			if(1)
			{
				int_6 = int_7 + int_3;
				double_3 = double_1 + double_3;
				unsigned_int_2 = unsigned_int_8 + unsigned_int_4;
				if(1)
				{
					double_2 = double_2 * double_1;
				}
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						int_5 = int_4 * int_5;
					}
					if(1)
					{
						unsigned_int_9 = unsigned_int_1 * unsigned_int_8;
					}
				}
			}
			if(1)
			{
				long long_4 = 1;
				unsigned_int_8 = unsigned_int_5 * unsigned_int_4;
				int_8 = int_9;
				unsigned_int_7 = unsigned_int_3;
				if(1)
				{
					long_3 = long_3 + long_4;
				}
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						if(1)
						{
							int_2 = int_3;
						}
						if(1)
						{
							long long_5 = 1;
							long_4 = long_5 + long_6;
						}
					}
				}
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
				short_4 = short_3 + short_3;
				int_2 = int_3 + int_9;
				if(1)
				{
					float_1 = float_5 * float_5;
				}
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						if(1)
						{
							long_1 = long_6;
						}
						if(1)
						{
							float_6 = float_4 * float_3;
						}
					}
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			long_1 = v_memset(char_6,long_2,char_7);

			double_5 = double_2 + double_4;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				float_3 = float_6 + float_7;
			}
		}
	}
	unsigned_int_4 = unsigned_int_7 * unsigned_int_8;
	float_2 = float_5 * float_7;
	unsigned_int_6 = unsigned_int_10 + unsigned_int_3;
	short_6 = v_do_fread(int_4,int_1,int_6,long_7,long_3,int_2,int_8,int_2,char_7);

	short_7 = short_4 + short_5;
	return short_1;
}
char v_init_crc32()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return char_1;
}
float v_swi_crc32( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_2;
	if(1)
	{
		short short_1 = 1;
		char_1 = v_init_crc32();

		short_1 = short_1 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char_2 = char_1;
	}
	return float_1;
}
short v_do_fread(int parameter_2,int parameter_3,int parameter_4,long parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10)
{
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char_1 = char_1;
	long_1 = v_memset(char_2,long_1,char_2);

	float_2 = float_1 + float_2;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1 * double_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
				}
			}
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
				unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
				if(1)
				{
					long long_2 = 1;
					long_1 = long_1 + long_2;
				}
			}
		}
		if(1)
		{
			short_2 = short_1;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_1 = 1;
				if(1)
				{
					int int_2 = 1;
					int_2 = int_1 + int_1;
				}
				if(1)
				{
					int_1 = int_1;
				}
				if(1)
				{
					if(1)
					{
						short_2 = short_1 * short_2;
					}
				}
				double_1 = double_2;
			}
		}
	}
	return short_1;
}
unsigned int v_strncpy( unsigned int parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
short v_read_const( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = v_strncpy(unsigned_int_2,int_1,short_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_do_fread(int_1,int_2,int_3,long_1,long_2,int_4,int_3,int_1,char_1);

	float_1 = v_swi_crc32(long_3,int_3);

	int_3 = int_5 + int_3;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "FX") > 0)
	{
		double_1 = double_1 * double_1;
	}
	char_2 = v_free_planets();

	double_2 = double_2 + double_1;
	if(1)
	{
		int_3 = int_3 + int_1;
	}
	return short_2;
}
float v_swi_strcpy( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	float_2 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	int_2 = int_1 + int_2;
	double_3 = double_1 * double_2;
	return float_1;
}
short v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		float_3 = float_1 + float_2;
	}
	int_1 = int_2;
	char_3 = char_2 * char_1;
	short_1 = short_3 * short_4;
	short_2 = short_5 * short_5;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	}
	short_5 = short_2 + short_1;
	double_1 = double_2;
	int_2 = int_3;
	return short_2;
}
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v_swe_revjul(double_3,int_1,int_2,int_2,int_3,double_4);

}
int v_sweph( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5,long parameter_6,double parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_6 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	char_1 = char_1 + char_1;
	short_1 = v_read_const(int_1,char_2);

	double_3 = double_2 + double_2;
	double_4 = double_4 + double_3;
	double_4 = double_2 + double_3;
	float_2 = float_1 + float_2;
	float_4 = float_2 + float_3;
	double_2 = double_5 + double_6;
	unsigned_int_3 = v_swi_fopen(int_2,char_2,char_2,char_1);

	double_3 = v_swi_echeb(double_3,double_3,int_3);

	int_1 = int_2 * int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	float_1 = v_swi_strcpy(char_2,char_1);

	long_1 = long_3;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_2 = int_3;
	}
	int_3 = int_3;
	long_2 = long_2 * long_4;
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_2 = int_3 * int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
			long_5 = long_3 * long_2;
			if(1)
			{
				char_3 = char_2 * char_2;
			}
			float_2 = float_1;
			if(1)
			{
				short_1 = short_1 * short_1;
			}
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		}
	}
	if(1)
	{
		long long_7 = 1;
		long_7 = long_6 * long_3;
		char_2 = char_4;
		long_2 = v_rot_back(int_1);

		float_2 = float_4 * float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		int_5 = int_1 + int_4;
		short_3 = short_2 * short_1;
		if(1)
		{
			if(1)
			{
				long long_8 = 1;
				long_6 = long_4 * long_8;
				double_4 = double_4 + double_5;
				if(1)
				{
					long long_9 = 1;
					int_5 = int_5 + int_1;
					long_1 = long_6 + long_9;
				}
				unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
				short_2 = short_1 * short_2;
				if(1)
				{
					short short_4 = 1;
					short_4 = short_4 * short_3;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				}
			}
		}
		if(1)
		{
			double_5 = double_4;
		}
		double_1 = double_4 * double_4;
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
				float_2 = float_2 * float_1;
			}
			if(1)
			{
				char_3 = char_3 + char_3;
			}
			if(1)
			{
				float_2 = float_1;
			}
		}
	}
	if(1)
	{
		int_1 = int_5 * int_1;
		if(1)
		{
		}
		if(1)
		{
			v_swi_gen_filename(double_4,int_1,char_5);

			short_1 = v_get_new_segment(double_4,int_5,int_4,char_6);

			char_4 = char_6 * char_1;
		}
		if(1)
		{
			double_3 = double_1 + double_1;
		}
	}
	int_2 = int_2 * int_4;
	double_1 = v_swi_edcheb(double_5,double_7,int_4);

	char_5 = char_4 * char_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_4 + double_6;
		if(1)
		{
			double_2 = double_6 + double_2;
		}
		if(1)
		{
			char_2 = char_3 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned_int_7 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_9 * unsigned_int_1;
		if(1)
		{
		}
		int_2 = int_3 * int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float_1 = float_1;
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int_4 = int_5;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					double double_8 = 1;
					double_4 = double_8 + double_3;
				}
				if(1)
				{
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						long_2 = long_6;
					}
				}
			}
		}
		if(1)
		{
			double double_9 = 1;
			long_3 = long_4 + long_4;
			double_9 = double_4 * double_7;
			if(1)
			{
				short_1 = short_2 * short_3;
			}
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				int_7 = int_6 * int_2;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				long_2 = long_6 + long_2;
			}
		}
	}
	return int_2;
}
short v_sweplan( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_7 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
	short_3 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 * double_2;
	char_1 = char_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		double_1 = double_3;
	}
	char controller4vul_2319[3];
	fgets(controller4vul_2319 ,3 ,stdin);
	if( strcmp( controller4vul_2319, "W2") > 0)
	{
		char controller4vul_2320[2];
		fgets(controller4vul_2320 ,2 ,stdin);
		if( strcmp( controller4vul_2320, "S") < 0)
		{
			int_2 = v_swi_moshmoon(double_4,short_3,double_4,char_2,uni_para);

			if(1)
			{
				float_2 = float_1 * float_1;
			}
		}
		if(1)
		{
			double_4 = double_1 * double_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		long_3 = long_3 * long_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
		char_3 = char_1 * char_3;
		int_1 = int_2 + int_1;
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		double_4 = double_4 + double_3;
		int_3 = int_3 + int_1;
		char_1 = char_3;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
	}
	short_4 = short_1;
	if(1)
	{
		short_4 = short_2 + short_3;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_1 = double_2 + double_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_4;
			char controller_10[2];
			fgets(controller_10 ,2 ,stdin);
			if( strcmp( controller_10, "l") < 0)
			{
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_3 = 1;
				float_1 = float_2 * float_3;
			}
		}
	}
	if(1)
	{
		short_4 = short_2 * short_4;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long long_4 = 1;
				long_4 = long_3;
			}
		}
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_6 = short_1 * short_5;
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
					char_2 = char_3 + char_2;
				}
				unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
				if(1)
				{
				}
			}
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				long long_5 = 1;
				long long_6 = 1;
				long_3 = long_5 + long_6;
			}
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4 + double_1;
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				int_3 = int_2 * int_4;
			}
		}
		if(1)
		{
			double double_6 = 1;
			char_2 = char_3 * char_4;
			if(1)
			{
			}
			double_1 = double_5 * double_6;
			if(1)
			{
				double_4 = double_2 + double_1;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				int_4 = int_4;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			short_2 = short_2 + short_1;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int int_5 = 1;
			int_2 = int_5 + int_4;
		}
	}
	if(1)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			char_1 = char_2 + char_4;
		}
	}
	if(1)
	{
		char_5 = char_4 + char_1;
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_5 + unsigned_int_4;
			}
		}
		char controller_31[3];
		fgets(controller_31 ,3 ,stdin);
		if( strcmp( controller_31, ")-") > 0)
		{
			char_6 = char_1 * char_5;
			if(1)
			{
			}
			if(1)
			{
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					char_4 = char_2 * char_2;
				}
				if(1)
				{
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						unsigned int unsigned_int_9 = 1;
						unsigned int unsigned_int_10 = 1;
						unsigned_int_3 = unsigned_int_9 + unsigned_int_10;
					}
				}
			}
		}
	}
	if(1)
	{
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			char_2 = char_5 + char_6;
		}
	}
	return short_7;
}
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_7 = 1;
	int int_2 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_1 * float_2;
	}
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_4 = 1;
		float_4 = float_3 + float_1;
	}
	if(1)
	{
		if(1)
		{
			float_5 = float_2 + float_3;
		}
		if(1)
		{
			if(1)
			{
				float float_6 = 1;
				float_2 = float_5 + float_6;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			long_1 = long_1 + long_2;
			char controller_8[3];
			fgets(controller_8 ,3 ,stdin);
			if( strcmp( controller_8, "O#") > 0)
			{
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_2 = char_1 * char_2;
			}
		}
		if(1)
		{
			if(1)
			{
				long_1 = long_2;
			}
		}
	}
	if(1)
	{
		short short_2 = 1;
		short_3 = short_2 * short_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short_3 = short_1 + short_3;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		short_3 = short_1 + short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_1 = double_3 * double_2;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_5 = double_3 + double_4;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			double double_6 = 1;
			double_6 = double_6 * double_4;
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_2 * char_3;
		}
	}
	if(1)
	{
		float float_8 = 1;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				float float_9 = 1;
				char_1 = v_state(double_5,float_7,int_2,double_5,double_7,double_3,char_5);

				float_9 = float_8 + float_5;
			}
		}
		if(1)
		{
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				float_8 = float_7 * float_7;
			}
		}
	}
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		int_2 = int_1;
	}
	return int_1;
}
long v_swi_get_tid_acc( double parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5,char parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_7 = 1;
	int int_8 = 1;
	float float_5 = 1;
	short short_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	float_3 = float_1 + float_2;
	float_3 = float_4 + float_1;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			int_1 = int_1 + int_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_1 * double_1;
			}
			if(1)
			{
				long long_3 = 1;
				long_3 = long_3 + long_1;
				int_4 = int_3 * int_2;
				float_3 = v_swe_calc(double_1,int_4,float_4,double_2,char_1,-1 );

				double_3 = double_4;
				if(1)
				{
					double double_5 = 1;
					double_3 = double_2 + double_5;
				}
			}
		}
		if(1)
		{
			int int_5 = 1;
			int_4 = int_1 + int_5;
			char controller_9[2];
			fgets(controller_9 ,2 ,stdin);
			if( strcmp( controller_9, "b") < 0)
			{
				double_6 = double_4 + double_4;
				long_2 = long_1 + long_1;
			}
			if(1)
			{
				char_3 = char_2 * char_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			}
		}
	}
	char_2 = char_1 + char_3;
	float_1 = float_3 + float_1;
	float_3 = float_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	double_1 = double_6 + double_6;
	double_3 = double_4 + double_4;
	int_7 = int_6 + int_7;
	int_4 = int_2 + int_7;
	double_7 = double_3 + double_4;
	int_8 = int_3 * int_7;
	float_5 = float_2 + float_2;
	int_7 = int_4 + int_1;
	int_4 = int_3;
	short_3 = short_3 + short_2;
	float_5 = float_1;
	char_1 = char_3 + char_4;
	short_3 = short_4 + short_2;
	double_2 = double_1 + double_6;
	char_3 = char_3 * char_3;
	int_6 = int_8 * int_7;
	double_6 = double_2;
	short_3 = short_3;
	return long_1;
}
float v_swi_set_tid_acc( double parameter_1,char parameter_2,short parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			float_2 = float_1;
			long_1 = v_swi_get_tid_acc(double_4,long_2,char_1,unsigned_int_1,double_2,char_2);

			long_1 = long_2;
			double_1 = double_1 + double_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			double_4 = double_3 * double_4;
			float_3 = float_3 * float_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double_4 = double_3 * double_2;
			int_2 = int_1 + int_1;
		}
	}
	return float_1;
}
int v_swi_get_jpl_denum()
{
	int int_1 = 1;
	return int_1;
}
short v_interp( double parameter_1,double parameter_2,double parameter_3,short parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,double parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	char_1 = char_1 + char_2;
	float_2 = float_1 + float_2;
	int_3 = int_1 * int_2;
	int_2 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_1 + double_1;
	char_2 = char_1 + char_3;
	char_3 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	float_3 = float_3 * float_1;
	long_1 = long_2;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		int_3 = int_2;
	}
	unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
	int_1 = int_4 * int_3;
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_6;
		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_5 = unsigned_int_3;
		short_3 = short_2 + short_1;
		int_4 = int_2 + int_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_1 + double_2;
		}
		int_3 = int_1 * int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_1 + double_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_2 = double_1;
		}
	}
	if(1)
	{
	}
	double_2 = double_1 * double_4;
	char_3 = char_2;
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_1 = int_3 * int_1;
		}
		double_1 = double_3;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_1 = double_5 + double_2;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		}
		float_2 = float_1 + float_3;
	}
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	float_1 = float_1 * float_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_5 = double_1 + double_1;
		}
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			unsigned_int_9 = unsigned_int_8 * unsigned_int_5;
		}
		int_1 = int_2 * int_4;
	}
	if(1)
	{
	}
	char_3 = char_4 + char_4;
	double_4 = double_1 + double_6;
	if(1)
	{
		float_1 = float_4;
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			unsigned_int_1 = unsigned_int_3;
		}
	}
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		char_2 = char_2 + char_2;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			int_3 = int_1 * int_2;
		}
		char_3 = char_2 + char_4;
	}
	return short_2;
}
void v_reorder( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_6;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		int_3 = int_1 * int_2;
	}
}
long v_if( double parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4,unsigned int parameter_5,float parameter_6,int parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_2;
	return long_1;
}
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "C") < 0)
	{
	}
	if(1)
	{
	}
	return int_2;
}
unsigned int v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	char_1 = char_1 * char_2;
	char_1 = char_3 + char_3;
	double_2 = double_2;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	int_4 = v_swi_cutstr(char_4,char_5,char_4,int_2);

	int_3 = int_5 + int_1;
	int_5 = int_4 * int_4;
	char_4 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_2 = double_3 * double_3;
		if(1)
		{
			char_1 = char_3 + char_3;
		}
		if(1)
		{
			double_3 = double_4 + double_4;
			char controller_5[2];
			fgets(controller_5 ,2 ,stdin);
			if( strcmp( controller_5, ".") < 0)
			{
				int_3 = int_6 * int_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
		}
		long_1 = long_2;
		int_5 = int_6 * int_4;
		if(1)
		{
		}
	}
	double_4 = double_4;
	double_3 = double_2 * double_2;
	if(1)
	{
		double_1 = double_1 + double_3;
	}
	return unsigned_int_1;
}
float v_fsizer( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	long long_5 = 1;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_1;
	char_2 = char_1 * char_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	char_1 = char_3;
	int_3 = int_1 + int_1;
	if(1)
	{
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		int_4 = int_1 + int_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_1 * double_2;
			if(1)
			{
				float_4 = float_2 + float_1;
			}
		}
	}
	int_1 = int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_2 = v_swi_fopen(int_5,char_1,char_3,char_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	double_3 = double_1 + double_1;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	long_2 = long_3 + long_3;
	if(1)
	{
		float_3 = float_1 + float_3;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double_2 = double_3;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		long_1 = long_1 + long_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		v_reorder(char_3,int_1,int_6);

		short_2 = short_1 + short_3;
	}
	int_3 = int_6 + int_1;
	int_5 = int_4 + int_2;
	long_2 = long_1 + long_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
			short_2 = short_2 + short_2;
		}
	}
	if(1)
	{
		float_5 = float_2 * float_3;
	}
	if(1)
	{
		int_5 = int_4;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		double double_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double_3 = double_1 + double_1;
		double_4 = double_4 + double_5;
		double_4 = double_1;
		double_1 = double_4;
		long_2 = long_4 * long_2;
		float_1 = float_4 * float_5;
		long_1 = long_5 + long_2;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			int_2 = int_5 * int_2;
		}
		if(1)
		{
			if(1)
			{
				long_3 = long_5;
			}
		}
	}
	return float_1;
	long_5 = v_if(double_5,int_6,short_3,unsigned_int_3,unsigned_int_3,float_1,int_6);

}
char v_state( double parameter_1,float parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_6 = 1;
	float float_4 = 1;
	double double_7 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_6 = 1;
	double double_8 = 1;
	int int_11 = 1;
	short short_5 = 1;
	int int_12 = 1;
	short short_6 = 1;
	short short_8 = 1;
	float float_7 = 1;
	char char_4 = 1;
	int int_13 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	int_3 = int_2 * int_1;
	int_2 = int_1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_4;
	int_2 = int_2 + int_2;
	long_3 = long_1 * long_2;
	int_5 = int_6;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_10 = 1;
		float float_5 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_3 = float_1 * float_2;
		if(1)
		{
		}
		char_2 = char_1 + char_2;
		double_2 = double_1 * double_1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_3 * double_1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
		if(1)
		{
			int_4 = int_7 + int_7;
		}
		double_5 = double_4 + double_1;
		if(1)
		{
			char_1 = char_2 * char_2;
		}
		double_1 = double_2 * double_4;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_3;
		}
		double_1 = double_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		if(1)
		{
			double_2 = double_4 * double_3;
		}
		int_8 = int_5 + int_3;
		if(1)
		{
			int_2 = int_7;
		}
		int_7 = int_1 + int_9;
		if(1)
		{
			double_2 = double_1 + double_3;
		}
		long_2 = v_if(double_6,int_1,short_1,unsigned_int_1,unsigned_int_2,float_4,int_1);

		double_3 = double_1 + double_3;
		v_reorder(char_1,int_5,int_3);

		double_1 = double_7;
		if(1)
		{
			long_6 = long_3 + long_5;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
		}
		int_10 = int_6 + int_4;
		float_2 = v_fsizer(char_1);

		char_1 = char_3 + char_3;
		int_5 = int_7 * int_1;
		short_3 = short_3 * short_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_4 = 1;
			short_3 = short_3 + short_4;
			if(1)
			{
				float_1 = float_2 * float_3;
			}
			unsigned_int_3 = unsigned_int_1;
		}
		long_3 = long_1 + long_5;
		int_5 = int_3 * int_5;
		float_6 = float_5 + float_4;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_1;
				if(1)
				{
					double_7 = double_8 * double_4;
				}
			}
		}
		int_11 = int_11;
		double_4 = double_7 * double_8;
		if(1)
		{
			float_2 = float_3;
		}
		short_2 = short_5 * short_5;
		int_8 = int_8 + int_11;
		if(1)
		{
			int_12 = int_5;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_1 + int_3;
			}
		}
	}
	if(1)
	{
	}
	unsigned_int_7 = unsigned_int_3 + unsigned_int_5;
	double_7 = double_6 * double_5;
	long_2 = long_5 + long_3;
	short_5 = short_3 + short_3;
	if(1)
	{
		if(1)
		{
			short short_7 = 1;
			short_6 = short_7;
		}
	}
	double_7 = double_8;
	if(1)
	{
		float_4 = float_2 * float_2;
	}
	short_6 = v_interp(double_7,double_3,double_7,short_8,float_6,unsigned_int_3,unsigned_int_7,double_3);

	float_3 = float_7 + float_7;
	if(1)
	{
		int_2 = int_11 + int_1;
		if(1)
		{
			if(1)
			{
				int_1 = int_8;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				if(1)
				{
					double_3 = double_2 * double_6;
				}
			}
			if(1)
			{
				long_1 = long_3 + long_5;
			}
		}
	}
	if(1)
	{
		double double_9 = 1;
		double_2 = double_4 * double_9;
		int_12 = int_3 * int_6;
	}
	if(1)
	{
		char_3 = char_4 * char_2;
		int_12 = int_12 + int_13;
	}
	int_13 = int_1 * int_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_5 = 1;
		char_2 = char_1 + char_5;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			float float_8 = 1;
			float_8 = float_2;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					int_11 = int_5 + int_4;
				}
				if(1)
				{
					int_13 = int_4 * int_9;
				}
			}
		}
	}
	if(1)
	{
		char_4 = char_4 * char_4;
	}
	if(1)
	{
		long long_7 = 1;
		long_6 = long_3 * long_7;
	}
	return char_3;
}
double v_read_const_jpl( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		char char_2 = 1;
		short_1 = short_1 + short_2;
		double_2 = double_2 * double_4;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_2 = unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_2 = 1;
			long long_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_4 = 1;
			char_1 = v_state(double_2,float_1,int_1,double_1,double_2,double_1,char_1);

			double_1 = double_2 + double_4;
			double_1 = double_5 * double_5;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
			}
			float_1 = float_2 + float_2;
			double_1 = double_4 + double_3;
			long_1 = long_2;
			float_2 = float_3 * float_4;
			long_4 = long_3 + long_1;
		}
		int_2 = int_2 + int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_3 = long_3 + long_2;
		}
		char_1 = char_2;
	}
	return double_5;
}
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_1 + long_1;
		}
	}
	long_1 = long_1;
	char_1 = char_1 * char_2;
	v_swi_close_jpl_file();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	if(1)
	{
		int int_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		int_2 = int_1 * int_2;
		long_4 = long_2 + long_3;
		double_1 = v_read_const_jpl(double_1,char_2);

		double_2 = double_3;
		short_1 = short_2 + short_3;
		double_3 = double_3 + double_3;
	}
	return int_1;
}
short v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	int_1 = v_swi_get_jpl_denum();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = v_swi_open_jpl_file(double_1,char_1,char_2,char_1);

	short_1 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		int_1 = int_1 + int_1;
		if(1)
		{
			double_1 = double_1 * double_1;
			if(1)
			{
				int_4 = int_3 * int_1;
				if(1)
				{
					float_1 = v_swi_set_tid_acc(double_2,char_3,short_2,char_4);

					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				}
				if(1)
				{
					int_1 = int_3 + int_1;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
				}
				if(1)
				{
					short_1 = short_2;
				}
				int_1 = int_2 + int_4;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
		int_3 = int_4 * int_5;
		long_2 = long_1 * long_2;
	}
	return short_1;
}
double v_jplplan( double parameter_1,int parameter_2,long parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_8 = 1;
	double_1 = double_2;
	int_1 = int_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_2;
	int_4 = int_3 + int_1;
	double_3 = double_2 + double_3;
	short_2 = short_1 * short_2;
	v_swi_close_jpl_file();

	double_4 = double_3 * double_3;
	if(1)
	{
		long_1 = long_1 + long_2;
		int_4 = int_2 * int_3;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		short_2 = short_3 + short_1;
		float_2 = float_3;
		int_5 = int_3 + int_2;
	}
	if(1)
	{
		int_3 = int_3 + int_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		int_2 = int_1 + int_4;
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1;
			if(1)
			{
				char char_2 = 1;
				float float_4 = 1;
				char_2 = char_1 * char_1;
				short_5 = short_1 * short_4;
				float_4 = float_1;
			}
			if(1)
			{
				int_5 = int_1 + int_5;
				double_4 = double_1;
			}
		}
		if(1)
		{
			short_1 = short_1 * short_3;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_2 = int_4 + int_5;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_4 + double_3;
			if(1)
			{
				double_2 = double_4 + double_4;
				char_3 = char_4;
				int_6 = int_1 + int_5;
			}
			if(1)
			{
				short_5 = short_4 + short_3;
				int_5 = int_7 * int_6;
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned_int_7 = unsigned_int_8;
			}
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_6 = int_7 + int_5;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_3 = int_6 * int_2;
		}
	}
	if(1)
	{
		float float_5 = 1;
		if(1)
		{
			float_3 = float_5 * float_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
			if(1)
			{
				long long_3 = 1;
				float_5 = float_5;
				short_1 = v_open_jpl_file(double_2,char_4,char_1,char_3);

				double_6 = double_5 * double_5;
				long_1 = long_2 * long_3;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
				float_5 = float_2;
			}
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_8 = v_swi_pleph(double_6,int_6,int_2,double_4,char_3);

			double_5 = double_5 * double_4;
		}
	}
	return double_3;
}
long v_nut_matrix( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	long long_4 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_1;
	int_1 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_2;
	short_2 = short_2 + short_2;
	double_2 = double_1 * double_2;
	long_2 = long_1 + long_1;
	short_3 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 * float_2;
	short_4 = short_1 + short_4;
	int_4 = int_1 + int_4;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2;
	char_4 = char_1 * char_4;
	long_3 = long_1 * long_3;
	short_5 = short_5 + short_4;
	return long_4;
}
double v_bessel( double parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
		char_1 = char_1 * char_2;
	}
	double_3 = double_3 * double_3;
	short_2 = short_1 + short_2;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	long_1 = long_1 * long_2;
	if(1)
	{
		char_3 = char_2 * char_2;
	}
	char_1 = char_2 * char_2;
	double_2 = double_1 * double_4;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	double_6 = double_5 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			long_3 = long_2 * long_3;
		}
		int_1 = int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_3 + char_1;
	}
	float_2 = float_1 * float_1;
	double_4 = double_7 + double_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
		long long_4 = 1;
		long_5 = long_1 * long_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_3 = double_1 + double_5;
	}
	unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_7;
	if(1)
	{
		double double_8 = 1;
		double_7 = double_5 + double_8;
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_8 * unsigned_int_1;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_3 = unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_8 * unsigned_int_6;
	long_2 = long_3 + long_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_9 + unsigned_int_3;
	}
	return double_2;
}
unsigned int v_swe_radnorm( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") > 0)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return unsigned_int_1;
}
short v_swi_nutation_iau2000ab( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	long_3 = long_1 * long_2;
	long_1 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	long_2 = long_1 * long_3;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		double_1 = double_3;
	}
	int_1 = int_2;
	float_1 = float_2 + float_2;
	long_5 = long_4 * long_3;
	int_2 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		float_2 = float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		long long_6 = 1;
		int_1 = int_1;
		short_2 = short_1 + short_2;
		float_2 = float_2 + float_1;
		double_5 = double_2 + double_4;
		short_3 = short_4;
		long_4 = long_6 * long_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	double_1 = double_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		char char_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_7 = 1;
		double double_10 = 1;
		short short_5 = 1;
		short short_6 = 1;
		int_2 = int_1 * int_2;
		char_1 = char_4 * char_4;
		double_3 = double_6 * double_4;
		int_3 = int_3 + int_2;
		double_3 = double_6;
		double_4 = double_1 + double_6;
		unsigned_int_5 = v_swe_radnorm(double_2);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
		short_3 = short_2 * short_4;
		double_7 = double_3 * double_7;
		int_5 = int_3 * int_4;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		double_3 = double_2 * double_7;
		int_5 = int_1 * int_2;
		double_4 = double_1 * double_3;
		unsigned_int_5 = unsigned_int_8;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_6 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			int_6 = int_1 * int_1;
			int_1 = int_2 + int_5;
			double_8 = double_6 * double_4;
			float_3 = float_2 + float_2;
			double_2 = double_9 + double_1;
			unsigned_int_2 = unsigned_int_7 * unsigned_int_6;
			unsigned_int_7 = v_swe_degnorm(double_1);

			double_4 = double_4 + double_6;
		}
		int_7 = int_4 * int_2;
		double_10 = double_5 + double_10;
		if(1)
		{
			short_3 = short_2 * short_5;
		}
		float_2 = float_2 * float_2;
		long_2 = long_3 * long_4;
		short_2 = short_5 * short_5;
		short_6 = short_5 + short_6;
	}
	unsigned_int_9 = unsigned_int_2 * unsigned_int_4;
	short_4 = short_4;
	return short_3;
}
unsigned int v_swe_degnorm( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_2 + int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return unsigned_int_4;
}
long v_swi_nutation_iau1980( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_8 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	double_2 = double_2 + double_3;
	long_1 = long_2;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	long_3 = long_1 * long_3;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_1;
	char_1 = char_3 + char_1;
	int_3 = int_2 * int_4;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	double_3 = double_2 + double_3;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_1 * double_4;
	char_2 = char_1 * char_3;
	char_1 = char_1 * char_2;
	double_1 = double_2 + double_4;
	double_2 = double_3 * double_1;
	long_3 = long_4 + long_4;
	int_2 = int_5 * int_3;
	float_1 = float_1 + float_2;
	long_5 = long_3 * long_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_3 * float_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_3 = char_1 * char_1;
	float_1 = float_4 + float_1;
	double_5 = double_5 + double_2;
	char_1 = char_3;
	double_2 = double_1 + double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_1 * long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_7 = 1;
		int_5 = int_2;
		int_4 = int_3;
		double_3 = double_1;
		double_7 = double_6 + double_5;
		double_4 = double_1 * double_5;
		int_2 = int_3 * int_5;
		long_2 = long_4 * long_5;
		int_4 = int_1 * int_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		double_8 = double_8 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
			double_5 = double_3 + double_5;
			double_3 = double_3 + double_7;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
			int_1 = int_1 * int_6;
		}
	}
	unsigned_int_6 = unsigned_int_2;
	int_5 = int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_7 = 1;
		char char_4 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "k") < 0)
		{
			int_6 = int_6 + int_4;
		}
		int_3 = int_5 * int_5;
		float_5 = float_5 * float_2;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_7;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
			if(1)
			{
				char_2 = char_1 * char_1;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				int_5 = int_2 * int_7;
				if(1)
				{
					float float_6 = 1;
					float_6 = float_6 * float_4;
				}
				short_2 = short_1 * short_1;
				if(1)
				{
					double_5 = double_5 * double_6;
				}
				long_5 = long_2 * long_1;
				if(1)
				{
					int int_8 = 1;
					double_2 = double_1 + double_8;
					int_1 = int_7 + int_8;
					char_3 = char_2 * char_4;
				}
				if(1)
				{
					long long_6 = 1;
					int_6 = int_1 * int_7;
					long_5 = long_6 * long_5;
					float_1 = float_2;
				}
			}
		}
		int_1 = int_7 + int_3;
		if(1)
		{
			char_3 = char_4;
		}
		float_4 = float_4 * float_1;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3;
		}
		if(1)
		{
			float float_7 = 1;
			float_1 = float_7 * float_8;
			int_3 = int_4 + int_6;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
			unsigned_int_5 = v_swe_degnorm(double_6);

			int_7 = int_4 * int_4;
		}
		if(1)
		{
			long long_7 = 1;
			long_1 = long_1 + long_7;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
		}
	}
	short_4 = short_4 + short_5;
	float_8 = float_8 * float_1;
	return long_2;
}
int v_swi_nutation( double parameter_1,short parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double_1 = v_bessel(double_2,int_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_3;
	char_1 = char_1 + char_2;
	long_1 = v_swi_nutation_iau1980(double_1,double_1);

	long_3 = long_2 + long_3;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_3 = 1;
		char_4 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		long_1 = long_1 * long_4;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short_1 = v_swi_nutation_iau2000ab(double_3,double_1);

		long_2 = long_3 * long_4;
		if(1)
		{
			long long_5 = 1;
			long_5 = long_3 + long_2;
			int_2 = int_2 + int_3;
		}
	}
	if(1)
	{
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_5 = 1;
		int int_4 = 1;
		double_1 = double_4 * double_1;
		float_2 = float_1 * float_1;
		if(1)
		{
			char_5 = char_2 + char_4;
		}
		long_1 = long_1 * long_3;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_4 + int_4;
		char_2 = char_1 * char_5;
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			int_6 = int_5 + int_4;
		}
	}
	return int_3;
}
void v_swi_check_nutation( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	long_1 = v_nut_matrix(int_2,long_2);

	float_1 = float_1 * float_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_3 + float_2;
		int_3 = int_3 + int_4;
		int_2 = v_swi_nutation(double_1,short_1,double_1);

		int_1 = int_5;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		char_1 = char_1 * char_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			short short_2 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
			float_2 = float_2;
			int_1 = int_3 * int_5;
			long_3 = long_1 + long_1;
			short_1 = short_2 + short_2;
			int_5 = int_3 * int_3;
		}
	}
}
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	int_2 = int_3 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_1 = long_2 + long_2;
		long_1 = long_2 + long_3;
		double_3 = double_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		int_4 = int_4;
		short_3 = short_1 + short_2;
	}
	unsigned_int_3 = unsigned_int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_4 * int_1;
		int_2 = int_4 + int_3;
		float_2 = float_1 * float_1;
	}
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		long_1 = long_3 + long_1;
	}
}
double v_swi_epsiln( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int_2 = int_1 + int_2;
	short_2 = short_1 * short_2;
	double_2 = double_1 * double_2;
	int_3 = int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NR") > 0)
	{
		int_1 = int_3 + int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	}
	if(1)
	{
		char char_2 = 1;
		char_3 = char_1 + char_2;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		double_3 = double_3 + double_3;
	}
	if(1)
	{
		int_1 = int_4 + int_2;
	}
	if(1)
	{
		v_swi_ldp_peps(double_2,double_4,double_5);

		long_3 = long_1 + long_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 * short_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_5 + int_2;
	}
	if(1)
	{
		int_1 = int_5 * int_4;
	}
	if(1)
	{
		int_4 = int_7 + int_5;
	}
	if(1)
	{
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		int_8 = int_3 * int_5;
	}
	if(1)
	{
		double_2 = double_3 + double_4;
		int_7 = int_3 + int_8;
		int_1 = int_8 + int_7;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_4 = unsigned_int_8 * unsigned_int_2;
		if(1)
		{
			char char_4 = 1;
			double double_8 = 1;
			double double_9 = 1;
			float float_5 = 1;
			float float_6 = 1;
			unsigned_int_2 = unsigned_int_7 + unsigned_int_8;
			char_4 = char_3 * char_1;
			if(1)
			{
				unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
				long_2 = long_1 * long_1;
			}
			if(1)
			{
				double double_6 = 1;
				float float_4 = 1;
				double_5 = double_3 * double_6;
				float_1 = float_4 + float_4;
			}
			if(1)
			{
				double double_7 = 1;
				int int_9 = 1;
				char_3 = char_3 + char_4;
				double_5 = double_7 + double_3;
				int_9 = int_1 + int_7;
				short_1 = short_1;
			}
			double_8 = double_9;
			float_5 = float_6;
		}
	}
	return double_3;
}
void v_calc_epsilon( double parameter_1,short parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float_3 = float_1 + float_2;
	float_2 = float_3 * float_1;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_swi_epsiln(double_1,char_1);

}
void v_swi_check_ecliptic( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
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
		char char_1 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		char_1 = char_1 * char_1;
		int_1 = int_3 + int_3;
		int_1 = int_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_calc_epsilon(double_1,short_1,short_1);

		float_2 = float_1 * float_1;
	}
}
double v_for( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	int_1 = int_2;
	double_1 = double_2;
	short_1 = short_1;
	char_4 = char_1 * char_3;
	char_4 = char_2 + char_4;
	double_2 = double_1 * double_2;
	return double_1;
}
void v_swi_force_app_pos_etc()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_2 = v_for(char_1);

		double_4 = double_3 * double_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		long_2 = long_2 + long_2;
	}
}
float v_swe_set_sid_mode( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		v_swi_init_swed_if_start();

		double_1 = double_2;
	}
	if(1)
	{
		double double_3 = 1;
		float_1 = float_1;
		double_4 = double_3 * double_3;
	}
	if(1)
	{
		double_4 = double_2 + double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	double_2 = double_2 * double_4;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 * float_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		int_1 = int_2 + int_2;
		if(1)
		{
			int_1 = int_3 * int_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_4 = int_4 * int_3;
		v_swi_force_app_pos_etc();

		int_4 = int_4 * int_5;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	}
	long_3 = long_1 + long_3;
	return float_1;
}
int v_plaus_iflag( double parameter_1,long parameter_2,double parameter_3,char parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_3 = double_3;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		double_3 = double_4;
	}
	if(1)
	{
		double_3 = double_4;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 + short_3;
		double_4 = double_3 * double_5;
	}
	if(1)
	{
		double_6 = double_6 + double_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 + float_1;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		float_3 = float_1 * float_1;
	}
	long_1 = long_2;
	if(1)
	{
		double_7 = double_2 + double_7;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			if(1)
			{
				int int_3 = 1;
				float float_4 = 1;
				int_1 = int_3;
				char_2 = char_1;
				unsigned_int_3 = unsigned_int_2;
				double_1 = double_6 * double_2;
				unsigned_int_1 = unsigned_int_3;
				double_2 = double_5 + double_2;
				double_7 = double_4 * double_7;
				float_3 = float_4 * float_4;
			}
			long_3 = long_3 + long_3;
			double_4 = double_2 + double_5;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2;
	}
	if(1)
	{
		char_2 = char_2;
	}
	return int_1;
}
void v_swecalc( double parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = v_app_pos_etc_plan_osc(int_1,int_2,char_1,char_1,uni_para);

	int_3 = int_2;
	short_3 = short_1 + short_2;
}
float v_swe_calc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_7 = 1;
	float float_4 = 1;
	int int_5 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_7 = 1;
	short short_8 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	int_2 = int_2 * int_1;
	double_1 = double_3 + double_2;
	double_4 = double_3 * double_2;
	int_3 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	short_1 = short_1 + short_2;
	double_3 = double_2;
	long_1 = long_1 + long_1;
	short_1 = short_3 * short_1;
	double_5 = double_1 + double_2;
	char controller4vul_2303[2];
	fgets(controller4vul_2303 ,2 ,stdin);
	if( strcmp( controller4vul_2303, "+") > 0)
	{
		char controller4vul_2304[2];
		fgets(controller4vul_2304 ,2 ,stdin);
		if( strcmp( controller4vul_2304, "B") < 0)
		{
			v_swecalc(double_5,int_1,unsigned_int_1,double_3,char_1,uni_para);

			char_2 = char_3;
			float_1 = float_1 * float_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			}
			char_6 = char_4 + char_5;
			int_1 = int_3 + int_2;
		}
		char_6 = char_7 * char_5;
	}
	if(1)
	{
		char_6 = char_8;
	}
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		short_2 = short_2 + short_4;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_7 * unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_7 + unsigned_int_7;
	}
	if(1)
	{
		int_2 = int_3 + int_2;
		if(1)
		{
			if(1)
			{
				short_4 = short_1 * short_3;
				double_4 = double_5 + double_3;
			}
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					int_2 = int_1 + int_3;
				}
				int_3 = int_3 + int_4;
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_7;
		}
	}
	if(1)
	{
		short_4 = short_1 * short_4;
	}
	if(1)
	{
		double_4 = double_6 * double_4;
	}
	if(1)
	{
		float_1 = float_2 + float_3;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		short_5 = short_4 + short_3;
	}
	if(1)
	{
		char_7 = char_5 + char_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
		double_4 = double_3 * double_4;
		if(1)
		{
			unsigned_int_7 = unsigned_int_8 * unsigned_int_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		char char_9 = 1;
		double_2 = double_5 * double_1;
		double_3 = double_7 * double_6;
		short_2 = short_2 * short_5;
		float_1 = float_4 * float_4;
		unsigned_int_5 = unsigned_int_9;
		char_9 = char_9 * char_3;
		int_5 = int_1 + int_1;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_7;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			char_6 = char_4 * char_8;
		}
		if(1)
		{
			int_3 = int_2 + int_4;
		}
		int_5 = int_3 * int_1;
		double_4 = double_8 + double_6;
	}
	if(1)
	{
		double_7 = double_8 + double_3;
	}
	if(1)
	{
		short_4 = short_5 + short_4;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		double_8 = double_8;
	}
	if(1)
	{
		float float_5 = 1;
		float_3 = float_5 * float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_6 = 1;
		short_2 = short_3 * short_6;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_5 = unsigned_int_7 * unsigned_int_2;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_6 = 1;
			int_6 = int_2 + int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					int_3 = int_5;
				}
			}
			if(1)
			{
				long long_2 = 1;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					long_1 = long_2 * long_1;
				}
				if(1)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						long long_3 = 1;
						long_3 = long_2 * long_1;
					}
				}
			}
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_10 = unsigned_int_4;
		}
	}
	short_3 = short_7 * short_8;
	unsigned_int_10 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		char_4 = char_7 * char_8;
	}
	char_2 = char_3;
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		float float_6 = 1;
		float_6 = float_1 + float_4;
	}
	double_3 = double_5 * double_7;
	return float_2;
}
void v_swi_init_swed_if_start()
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "(G") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int_3 = int_1 * int_2;
		long_1 = v_memset(char_1,long_1,char_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_4;
		double_1 = double_1 * double_2;
		v_swe_set_tid_acc(double_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_swe_set_tid_acc( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_1 * short_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1 + float_2;
}
void v_swi_close_jpl_file()
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		float_1 = float_2 * float_1;
		char_1 = char_1;
	}
}
char v_free_planets()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, ",s") > 0)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_2 = double_1 * double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_1 = float_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "b") > 0)
		{
			long long_2 = 1;
			long_1 = v_memset(char_1,long_1,char_2);

			long_2 = long_1;
		}
	}
	return char_1;
}
long v_memset( char parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return long_1;
}
int v_swi_close_keep_topo_etc()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		if(1)
		{
			char_1 = v_free_planets();

			double_1 = double_3 + double_1;
		}
		long_1 = v_memset(char_1,long_2,char_1);

		int_1 = int_1 + int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_4 + double_4;
	long_1 = long_2 * long_3;
	int_1 = int_1 * int_3;
	v_swe_set_tid_acc(double_2);

	double_2 = double_5 * double_3;
	int_1 = int_1;
	short_2 = short_3 + short_2;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		v_swi_close_jpl_file();

		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	double_7 = double_6 * double_7;
	short_3 = short_3 + short_2;
	int_4 = int_4 + int_4;
	long_2 = long_2 * long_4;
	short_3 = short_2 * short_2;
	return int_4;
}
unsigned int v_swe_set_ephe_path( char parameter_1,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_2;
	long_3 = long_2 + long_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 + int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		long_2 = long_1 * long_3;
	}
	if(1)
	{
		char char_2 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		int_2 = int_4 + int_2;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_4 * double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	double_1 = double_5 + double_5;
	if(1)
	{
		int_2 = int_5;
	}
	double_2 = double_5 + double_1;
	float_1 = float_1 + float_1;
	char_4 = char_4 * char_1;
	char_3 = char_5 * char_4;
	if(1)
	{
		int_6 = int_2 + int_6;
	}
	long_1 = long_3 * long_1;
	char controller4vul_2300[3];
	fgets(controller4vul_2300 ,3 ,stdin);
	if( strcmp( controller4vul_2300, "td") > 0)
	{
		double double_6 = 1;
		char controller4vul_2301[2];
		fgets(controller4vul_2301 ,2 ,stdin);
		if( strcmp( controller4vul_2301, "J") < 0)
		{
			short short_1 = 1;
			double double_7 = 1;
			char char_6 = 1;
			char char_7 = 1;
			short short_3 = 1;
			int_3 = int_1 + int_5;
			char controller4vul_2302[3];
			fgets(controller4vul_2302 ,3 ,stdin);
			if( strcmp( controller4vul_2302, "[{") < 0)
			{
				float_1 = v_swe_calc(double_3,int_3,float_1,double_1,char_1,uni_para);

				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 * short_1;
			}
			double_7 = double_4 * double_6;
			char_7 = char_6 * char_3;
			int_2 = int_1;
			short_3 = short_1 * short_3;
			long_1 = long_1;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_4 = 1;
			float_3 = float_2 + float_2;
			if(1)
			{
				float_5 = float_2 + float_4;
			}
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
			int_4 = int_6;
			float_5 = float_4 * float_1;
			double_4 = double_6 + double_1;
		}
	}
	return unsigned_int_3;
}
int main()
{
	int uni_para =149;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_swe_set_ephe_path(char_1,uni_para);

	short_1 = short_1;
	long_3 = long_1 * long_2;
	float_3 = float_1 * float_2;
	double_1 = double_1;
	return int_1;
}

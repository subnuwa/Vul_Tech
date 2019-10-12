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

char v_swi_get_fict_name( short parameter_1,char parameter_2);
unsigned int v_swe_get_planet_name( int parameter_1,char parameter_2);
double v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5);
short v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
long v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_main_planet_bary( double parameter_1,int parameter_2,float parameter_3,short parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
long v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,double parameter_3,char parameter_4,int uni_para);
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_check_t_terms( double parameter_1,char parameter_2,double parameter_3);
short v_read_elements_file( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,long parameter_12,char parameter_13);
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7);
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3);
char v_intp_apsides( double parameter_1,int parameter_2,double parameter_3,char parameter_4);
int v_swi_plan_for_osc_elem( long parameter_1,double parameter_2,double parameter_3);
unsigned int v_lunar_osc_elem( double parameter_1,int parameter_2,long parameter_3,char parameter_4);
char v_corr_mean_apog( double parameter_1);
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3);
char v_app_pos_etc_mean( int parameter_1,short parameter_2,char parameter_3);
double v_swe_difrad2n( double parameter_1,double parameter_2);
double v_swi_mod2PI( double parameter_1);
long v_corr_mean_node( double parameter_1);
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3);
int v_app_pos_etc_sbar( double parameter_1,char parameter_2);
double v_swi_armc_to_mc( double parameter_1,double parameter_2);
unsigned int v_meff( double parameter_1);
void v_swi_deflect_light( double parameter_1,double parameter_2,short parameter_3);
unsigned int v_app_pos_etc_plan( int parameter_1,unsigned int parameter_2,char parameter_3,int uni_para);
unsigned int v_app_pos_etc_sun( float parameter_1,char parameter_2);
double v_main_planet( double parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5,int uni_para);
void v_swi_icrs2fk5( double parameter_1,long parameter_2,char parameter_3);
void v_swi_FK4_FK5( double parameter_1,double parameter_2);
long v_swi_right_trim( char parameter_1);
long v_swe_fixstar( char parameter_1,double parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para);
int v_swe_get_ayanamsa_ex( double parameter_1,char parameter_2,double parameter_3,char parameter_4,int uni_para);
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,long parameter_3);
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,float parameter_4);
unsigned int v_app_pos_rest( char parameter_1,short parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,int uni_para);
int v_swi_approx_jplhor( double parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4);
void v_swi_bias( double parameter_1,double parameter_2,char parameter_3,long parameter_4);
float v_get_denum( short parameter_1,long parameter_2);
void v_swi_aberr_light( double parameter_1,double parameter_2,unsigned int parameter_3);
void v_swi_cartpol_sp( double parameter_1,double parameter_2);
void v_swi_precess_speed( double parameter_1,double parameter_2,short parameter_3,int parameter_4);
void v_swi_nutate( double parameter_1,int parameter_2,int parameter_3);
void v_swi_polcart_sp( double parameter_1,double parameter_2);
unsigned int v_sidtime_non_polynomial_part( double parameter_1);
void v_swi_cartpol( double parameter_1,double parameter_2);
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3);
void v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3);
double v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3);
long v_init_dt();
float v_deltat_aa( double parameter_1,double parameter_2);
short v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2);
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3);
int v_deltat_longterm_morrison_stephenson( double parameter_1);
short v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2);
double v_calc_deltat( double parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4);
int v_swi_guess_ephe_flag();
float v_swe_deltat( double parameter_1);
double v_deltat( double parameter_1);
float v_swe_deltat_ex( double parameter_1,unsigned int parameter_2,char parameter_3);
int v_swi_get_observer( double parameter_1,int parameter_2,long parameter_3,double parameter_4,char parameter_5);
char v_app_pos_etc_moon( short parameter_1,char parameter_2);
int v_embofs_mosh( double parameter_1,double parameter_2,int uni_para);
float v_sscc_81( int parameter_1,double parameter_2,int parameter_3);
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3);
int v_swi_moshplan( double parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,int uni_para);
float v_swemoon( double parameter_1,long parameter_2,int parameter_3,double parameter_4,char parameter_5);
char v_embofs( double parameter_1,double parameter_2);
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3);
int v_pre_pecl( double parameter_1,double parameter_2);
long v_pre_pequ( double parameter_1,double parameter_2);
float v_pre_pmat( double parameter_1,double parameter_2);
float v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
float v_precess_2( double parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5);
float v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
int v_swi_precess( double parameter_1,double parameter_2,short parameter_3,int parameter_4);
void v_swi_coortrf2( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_swi_polcart( double parameter_1,double parameter_2);
char v_ecldat_equ2000( double parameter_1,double parameter_2);
unsigned int v_moon4();
unsigned int v_moon3();
long v_moon2();
float v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5);
char v_sscc( int parameter_1,double parameter_2,int parameter_3);
unsigned int v_moon1();
void v_mean_elements_pl();
float v_mods3600( double parameter_1);
long v_mean_elements();
int v_swi_moshmoon2( double parameter_1,double parameter_2);
int v_swi_moshmoon( double parameter_1,long parameter_2,double parameter_3,char parameter_4);
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3);
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3);
char v_rot_back( int parameter_1);
unsigned int v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
double v_init_crc32();
int v_swi_crc32( unsigned int parameter_1,int parameter_2);
unsigned int v_do_fread(int parameter_2,int parameter_3,int parameter_4,short parameter_5,char parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10);
long v_strncpy( double parameter_1,double parameter_2,short parameter_3);
long v_read_const( int parameter_1,char parameter_2);
long v_swi_strcpy( char parameter_1,char parameter_2);
double v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6);
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3);
char v_sweph( double parameter_1,int parameter_2,int parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
unsigned int v_sweplan( double parameter_1,int parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5);
double v_swi_get_tid_acc( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,short parameter_4,double parameter_5,char parameter_6);
char v_swi_set_tid_acc( double parameter_1,long parameter_2,long parameter_3,char parameter_4);
void v_swi_get_jpl_denum();
char v_interp( double parameter_1,double parameter_2,double parameter_3,float parameter_4,double parameter_5,char parameter_6,unsigned int parameter_7,double parameter_8);
float v_reorder( char parameter_1,int parameter_2,int parameter_3);
unsigned int v_if( long parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5,short parameter_6,double parameter_7);
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4);
double v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4);
int v_fsizer( char parameter_1);
long v_state( double parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
int v_read_const_jpl( double parameter_1,char parameter_2);
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
char v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
double v_jplplan( double parameter_1,int parameter_2,long parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
int v_nut_matrix( unsigned int parameter_1,unsigned int parameter_2);
char v_bessel( double parameter_1,int parameter_2,double parameter_3);
char v_swe_radnorm( double parameter_1);
void v_swi_nutation_iau2000ab( double parameter_1,double parameter_2);
float v_swe_degnorm( double parameter_1);
char v_swi_nutation_iau1980( double parameter_1,double parameter_2);
int v_swi_nutation( double parameter_1,float parameter_2,double parameter_3);
void v_swi_check_nutation( double parameter_1,short parameter_2);
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3);
double v_swi_epsiln( double parameter_1,int parameter_2);
char v_calc_epsilon( double parameter_1,int parameter_2,int parameter_3);
void v_swi_check_ecliptic( double parameter_1,short parameter_2);
void v_for( float parameter_1);
void v_swi_force_app_pos_etc();
short v_swe_set_sid_mode( unsigned int parameter_1,double parameter_2,double parameter_3);
char v_plaus_iflag( char parameter_1,short parameter_2,double parameter_3,char parameter_4);
short v_swecalc( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para);
int v_swe_calc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para);
short v_swi_init_swed_if_start();
unsigned int v_swe_set_tid_acc( double parameter_1);
void v_swi_close_jpl_file();
float v_free_planets();
short v_memset( int parameter_1,double parameter_2,float parameter_3);
int v_swi_close_keep_topo_etc();
void v_swe_set_ephe_path( char parameter_1,int uni_para);
char v_swi_get_fict_name( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "*") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		short_1 = v_read_elements_file(unsigned_int_1,double_1,double_1,double_1,double_1,double_2,double_2,double_2,double_3,double_2,char_1,long_1,char_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return char_2;
}
unsigned int v_swe_get_planet_name( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_5 = 1;
	if(1)
	{
		double_1 = double_1;
		double_1 = v_swi_fopen(int_1,char_1,char_1,char_1);

		long_1 = long_1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char_2 = v_swi_get_fict_name(short_1,char_3);

				double_1 = double_1 + double_1;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					if(1)
					{
						int int_2 = 1;
						int int_3 = 1;
						char char_4 = 1;
						int_1 = int_2 + int_3;
						long_1 = v_swi_right_trim(char_2);

						char_2 = char_1 * char_4;
						int_1 = int_2;
					}
					short_1 = v_swi_init_swed_if_start();

					double_1 = double_1 * double_1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
					unsigned_int_1 = unsigned_int_1;
				}
			}
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "I") < 0)
		{
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					double double_5 = 1;
					char_1 = v_sweph(double_2,int_4,int_1,long_1,double_3,double_1,double_4,char_5);

					double_2 = double_5;
					if(1)
					{
						double double_6 = 1;
						char char_6 = 1;
						if(1)
						{
							int int_5 = 1;
							long_1 = long_1 * long_1;
							double_3 = double_3 * double_6;
							int_1 = int_5;
						}
						char_5 = char_3 + char_6;
						double_3 = double_6;
						double_4 = double_1 * double_2;
					}
				}
			}
		}
	}
	return unsigned_int_2;
}
double v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	int_1 = int_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_1;
		if(1)
		{
			float_3 = float_1 + float_3;
		}
		int_2 = int_1 + int_1;
		if(1)
		{
			double_2 = double_2 * double_3;
		}
	}
	return double_2;
}
short v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			long_1 = long_1 + long_1;
			double_2 = double_1 * double_1;
			short_3 = short_2 + short_2;
			double_2 = double_2 * double_3;
		}
	}
	return short_1;
}
long v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	return long_1;
}
unsigned int v_main_planet_bary( double parameter_1,int parameter_2,float parameter_3,short parameter_4,short parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int_1 = v_swi_moshplan(double_1,int_1,double_2,double_2,double_2,char_1,-1 );

	double_1 = double_1 * double_1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		int_2 = int_1 * int_1;
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = v_sweplan(double_2,int_1,int_3,char_1,unsigned_int_2,double_2,double_1,double_2,double_1,char_2);

	char_1 = char_2 + char_1;
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
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_4 = float_5;
			}
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			double_3 = double_2;
		}
	}
	double_2 = v_jplplan(double_2,int_2,long_1,double_3,double_4,double_3,double_1,char_3);

	double_5 = double_2 * double_4;
	if(1)
	{
		double_6 = double_5 + double_4;
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_2 + char_2;
	}
	double_3 = double_2 * double_7;
	double_2 = double_3 * double_6;
	return unsigned_int_3;
}
long v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,double parameter_3,char parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	double_1 = double_3;
	int_1 = int_1;
	int_1 = int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 + float_2;
	char_1 = char_1 + char_2;
	char_1 = char_1 + char_3;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1 * double_3;
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
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_1 = double_1;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_3 = 1;
			long_4 = long_3 * long_2;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double_1 = double_1 + double_1;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		}
	}
	if(1)
	{
		long long_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_7 = 1;
		long_2 = long_5 + long_4;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				long_5 = long_5;
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				for(int looper_10=0; looper_10<1;looper_10++)
				{
					int_2 = int_1;
					if(1)
					{
						double_3 = double_3 + double_4;
					}
				}
				double_1 = double_2 + double_5;
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					long long_6 = 1;
					long_4 = long_6;
				}
			}
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				int_3 = int_1 + int_3;
			}
		}
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				double_1 = double_4 + double_3;
				if(1)
				{
					unsigned_int_6 = unsigned_int_7;
				}
			}
			unsigned_int_9 = unsigned_int_8 * unsigned_int_5;
			short_1 = short_1 * short_1;
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				double double_6 = 1;
				short_2 = short_2 * short_1;
				double_5 = double_6 * double_7;
			}
		}
		if(1)
		{
			double double_8 = 1;
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				double_8 = double_1 * double_5;
			}
			double_5 = double_8 + double_8;
			double_7 = double_5 + double_3;
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
					unsigned_int_7 = unsigned_int_7 + unsigned_int_4;
				}
			}
			if(1)
			{
				for(int looper_18=0; looper_18<1;looper_18++)
				{
					double_4 = double_4;
				}
			}
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		unsigned_int_5 = unsigned_int_7 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_20=0; looper_20<1;looper_20++)
			{
				float_2 = float_3 + float_3;
			}
		}
	}
	if(1)
	{
		for(int looper_21=0; looper_21<1;looper_21++)
		{
			unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_4 = char_5;
	}
	if(1)
	{
		int_2 = int_3 * int_1;
		if(1)
		{
			for(int looper_22=0; looper_22<1;looper_22++)
			{
				int int_4 = 1;
				int_3 = int_4 * int_3;
			}
		}
	}
	for(int looper_23=0; looper_23<1;looper_23++)
	{
		int_2 = int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		int_3 = int_1 * int_1;
		if(1)
		{
			short_2 = short_2 * short_1;
		}
		short_4 = short_3 + short_3;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_2 = int_5 * int_6;
	}
	float_5 = float_4 * float_4;
}
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = v_swi_mod2PI(double_2);

	long_1 = long_1 + long_1;
	return double_1;
}
unsigned int v_check_t_terms( double parameter_1,char parameter_2,double parameter_3)
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
	}
	return unsigned_int_1;
}
short v_read_elements_file( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,long parameter_12,char parameter_13)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	long_3 = v_swi_strcpy(char_1,char_1);

	int_1 = v_swi_cutstr(char_2,char_1,char_1,int_2);

	unsigned_int_1 = v_check_t_terms(double_1,char_1,double_2);

	long_4 = v_swi_right_trim(char_3);

	char_3 = char_1 + char_1;
	return short_1;
	double_3 = v_swi_fopen(int_3,char_4,char_5,char_1);

	float_1 = v_swe_degnorm(double_2);

}
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_3 = 1;
	float float_7 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	char char_5 = 1;
	double double_8 = 1;
	short short_6 = 1;
	int int_8 = 1;
	double double_9 = 1;
	int int_9 = 1;
	char char_6 = 1;
	double double_10 = 1;
	short short_7 = 1;
	long long_3 = 1;
	int int_10 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	short_1 = short_1 + short_2;
	double_1 = double_1 * double_1;
	float_3 = float_1 + float_2;
	int_1 = int_2 * int_2;
	double_2 = v_swi_epsiln(double_1,int_1);

	float_3 = float_1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_1;
	float_1 = float_3 + float_2;
	if(1)
	{
	}
	double_2 = double_2 + double_2;
	if(1)
	{
		long_1 = long_2 * long_2;
	}
	char_4 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_3 * short_3;
	float_2 = float_3 * float_4;
	double_1 = double_1 + double_1;
	float_4 = float_5 + float_6;
	double_2 = double_2 + double_2;
	double_3 = double_2 + double_1;
	float_1 = float_7 + float_6;
	int_1 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_6;
	double_2 = double_2;
	int_5 = int_1 * int_4;
	float_2 = float_1 + float_6;
	if(1)
	{
		int_2 = int_2 * int_5;
		if(1)
		{
			short_4 = short_3 * short_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			int_3 = int_2 * int_4;
		}
		if(1)
		{
			int_6 = int_2 * int_4;
		}
		if(1)
		{
			short_3 = short_3;
			short_4 = short_4 + short_1;
		}
		if(1)
		{
			int_5 = int_2;
		}
		if(1)
		{
			float float_8 = 1;
			float float_9 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_7;
			long_2 = long_2;
			char_2 = char_3 + char_1;
			double_3 = double_2 + double_1;
			int_7 = int_1 + int_6;
			float_9 = float_6 * float_8;
			double_1 = v_swi_kepler(double_3,double_4,double_2);

			double_5 = double_1;
		}
	}
	double_1 = double_4 + double_3;
	if(1)
	{
		double_2 = double_4 * double_6;
	}
	if(1)
	{
		int_1 = v_swi_precess(double_7,double_3,short_5,int_4);

		char_5 = char_2 + char_5;
	}
	double_7 = double_8 + double_6;
	short_5 = short_6;
	double_3 = v_swi_mod2PI(double_3);

	int_8 = int_6 + int_8;
	double_1 = double_3 + double_8;
	double_8 = double_9;
	int_1 = int_9 * int_8;
	char_2 = char_3 * char_6;
	unsigned_int_7 = unsigned_int_7;
	unsigned_int_7 = unsigned_int_3;
	int_7 = int_8 * int_3;
	double_10 = double_6 * double_5;
	char_1 = char_5 * char_1;
	short_4 = short_7 + short_5;
	double_5 = double_4 * double_3;
	long_2 = long_1 + long_1;
	long_1 = long_2;
	short_3 = v_read_elements_file(unsigned_int_3,double_6,double_3,double_10,double_6,double_7,double_6,double_1,double_2,double_9,char_5,long_2,char_5);

	long_3 = long_3 + long_2;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		int_10 = int_7;
		unsigned_int_8 = unsigned_int_5 * unsigned_int_4;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_6 = char_4 * char_5;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_1 = long_1 * long_3;
		}
	}
	if(1)
	{
		short_2 = short_7 * short_6;
		int_10 = int_6;
	}
	return int_3;
	v_swi_coortrf(double_4,double_3,double_5);

}
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_5 = 1;
	float float_7 = 1;
	int int_7 = 1;
	long long_6 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 * long_2;
	char_1 = char_1 + char_1;
	char_4 = char_2 + char_3;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	double_2 = double_3 * double_3;
	unsigned_int_3 = v_moon3();

	double_4 = double_1 + double_4;
	double_3 = double_3;
	int_1 = int_2 * int_3;
	short_3 = short_1 + short_2;
	short_3 = short_1 * short_2;
	float_3 = float_2 * float_1;
	double_4 = double_2;
	int_2 = int_1 * int_4;
	int_6 = int_2 * int_5;
	short_4 = short_4 + short_3;
	char_3 = char_1;
	float_3 = float_2 * float_1;
	double_2 = double_1 + double_3;
	double_5 = double_3 * double_2;
	double_1 = double_3 + double_6;
	double_5 = double_6;
	unsigned_int_2 = v_moon1();

	int_1 = int_3 + int_4;
	float_2 = float_3 * float_3;
	int_4 = int_5 + int_2;
	double_6 = double_5 + double_3;
	long_4 = long_4 + long_5;
	long_1 = v_moon2();

	char_4 = char_4;
	int_5 = int_3 + int_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	double_7 = double_2 + double_6;
	float_4 = float_2 + float_1;
	float_4 = float_5 + float_6;
	int_6 = int_2 + int_5;
	v_mean_elements_pl();

	short_2 = short_3 * short_2;
	int_3 = int_3 * int_6;
	double_3 = double_1 * double_5;
	float_2 = float_6;
	float_6 = float_6 * float_4;
	short_3 = short_5 + short_2;
	float_7 = float_7 + float_2;
	short_4 = short_5 + short_2;
	int_1 = int_4 * int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	double_6 = double_4 + double_1;
	int_7 = int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_6 = 1;
		double double_8 = 1;
		double double_9 = 1;
		long_2 = long_4 + long_6;
		int_7 = int_5 * int_4;
		double_6 = double_2;
		float_1 = float_2;
		long_4 = v_mean_elements();

		float_1 = v_mods3600(double_3);

		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		long_5 = long_4 * long_2;
		long_5 = long_3 + long_4;
		float_2 = float_7 * float_3;
		double_2 = double_3 * double_5;
		unsigned_int_3 = v_moon4();

		int_4 = int_5 + int_5;
		double_6 = double_3 + double_7;
		int_4 = int_4 * int_2;
		short_1 = short_6 * short_5;
		double_8 = double_5 + double_8;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_7 = int_7 * int_7;
			}
		}
		double_9 = double_2 + double_9;
	}
	long_1 = long_2 + long_6;
	long_6 = long_4 + long_5;
	double_10 = double_5 * double_10;
	double_3 = double_2;
	char_2 = char_1 + char_3;
	float_5 = float_3;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	return int_3;
}
char v_intp_apsides( double parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_9 = 1;
	int int_10 = 1;
	char char_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_12 = 1;
	double double_9 = 1;
	char char_6 = 1;
	double_1 = double_1;
	double_2 = double_1 * double_1;
	double_2 = double_3 * double_3;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 * short_3;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 + float_1;
	int_3 = int_2 + int_2;
	v_swi_nutate(double_3,int_4,int_2);

	float_1 = v_swe_degnorm(double_2);

	int_5 = int_4 * int_1;
	short_1 = short_1;
	short_2 = short_2 + short_1;
	int_5 = int_2 + int_3;
	int_6 = v_swi_trop_ra2sid_lon(double_1,double_3,double_3,float_2);

	char_2 = char_2 * char_2;
	int_8 = int_7 * int_3;
	if(1)
	{
		int_6 = int_3 + int_5;
		int_4 = v_swi_intp_apsides(double_3,double_2,int_2);

		float_2 = float_1 + float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_5 = int_8 * int_6;
		}
		double_4 = double_1 * double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_6 = v_swi_precess(double_2,double_3,short_3,int_3);

		double_1 = double_2 + double_4;
		int_2 = int_7 + int_7;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	int_8 = int_1 + int_7;
	short_2 = short_2 * short_1;
	if(1)
	{
		short_4 = v_memset(int_2,double_1,float_2);

		v_swi_coortrf2(double_3,double_3,double_2,double_5);

		v_swi_cartpol_sp(double_3,double_3);

		int_3 = int_7 + int_6;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_3 = 1;
			char_2 = char_3 * char_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char_1 = char_4 * char_4;
	}
	double_6 = double_2 * double_3;
	if(1)
	{
		v_swi_polcart_sp(double_1,double_7);

		int_10 = int_9 * int_8;
	}
	char_5 = char_2 * char_5;
	float_1 = float_3 * float_2;
	char_4 = char_5 * char_5;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				float_2 = float_4 + float_5;
			}
			short_4 = short_5 + short_1;
			if(1)
			{
				short_2 = short_3;
			}
			if(1)
			{
				long long_2 = 1;
				long_1 = long_2;
			}
			if(1)
			{
				double_5 = double_7 * double_2;
			}
			double_1 = double_5 * double_7;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		}
		if(1)
		{
			int_9 = v_swi_trop_ra2sid_lon_sosy(double_2,double_8,long_3);

			long_1 = long_3;
			if(1)
			{
			}
			unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
			long_4 = long_1;
			unsigned_int_5 = unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		}
		float_5 = float_4 * float_3;
		if(1)
		{
			double_3 = double_6;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_5 = double_4 * double_8;
		}
		short_1 = short_6 * short_3;
		float_3 = float_3 * float_5;
		if(1)
		{
			int int_11 = 1;
			int_6 = int_2 * int_11;
		}
		unsigned_int_3 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			long_3 = long_4 + long_1;
		}
		double_1 = double_8 * double_5;
		float_3 = float_4 * float_5;
		if(1)
		{
			char_2 = char_2 * char_1;
		}
		if(1)
		{
			double_1 = v_swe_difrad2n(double_4,double_2);

			int_6 = int_10 * int_6;
			if(1)
			{
				v_swi_precess_speed(double_4,double_4,short_4,int_12);

				int_4 = v_swe_get_ayanamsa_ex(double_9,char_5,double_2,char_6,-1 );

				double_8 = double_6;
			}
		}
		int_7 = int_2 * int_6;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		short short_7 = 1;
		short_4 = short_6 * short_3;
		short_5 = short_5 + short_3;
		double_7 = double_8 + double_3;
		short_4 = short_7 + short_3;
	}
	long_1 = long_1 * long_3;
	unsigned_int_2 = unsigned_int_6;
	return char_2;
}
int v_swi_plan_for_osc_elem( long parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_2 * int_3;
	short_1 = short_1;
	char_2 = char_1 * char_1;
	short_1 = short_2 * short_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	long_4 = long_4 + long_4;
	if(1)
	{
		char char_4 = 1;
		double_2 = double_1 * double_2;
		char_3 = char_1 * char_1;
		char_4 = char_4 * char_1;
		char_1 = char_3 + char_2;
		int_2 = v_swi_precess(double_3,double_4,short_1,int_3);

		double_1 = double_2 + double_1;
	}
	if(1)
	{
		v_swi_polcart_sp(double_2,double_1);

		double_1 = double_5 * double_3;
		short_1 = short_2 + short_1;
		if(1)
		{
			int_2 = int_2 * int_1;
		}
		if(1)
		{
			int_1 = int_3 + int_3;
		}
		if(1)
		{
			v_swi_bias(double_2,double_1,char_2,long_5);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			short_2 = short_1;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			short_2 = short_3 + short_1;
		}
		if(1)
		{
			float_1 = v_get_denum(short_1,long_4);

			v_swi_coortrf2(double_4,double_6,double_3,double_5);

			double_7 = double_4 * double_3;
		}
		if(1)
		{
			float float_3 = 1;
			int int_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			float_1 = float_2 * float_3;
			double_3 = double_2 * double_5;
			float_4 = float_1;
			int_1 = int_4 + int_5;
			double_2 = double_6;
			short_5 = short_2 * short_4;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_8 = 1;
			double_7 = double_6 * double_8;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_3 = v_calc_epsilon(double_1,int_1,int_1);

			int_1 = v_nut_matrix(unsigned_int_1,unsigned_int_3);

			int_5 = int_2 + int_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			v_swi_cartpol_sp(double_6,double_5);

			long_1 = long_1 + long_4;
		}
	}
	short_6 = short_3 * short_1;
	int_3 = int_6 * int_6;
	if(1)
	{
		float float_5 = 1;
		double_3 = double_2 + double_5;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		float_5 = float_4 + float_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			char_2 = char_3 + char_1;
			int_7 = v_swi_nutation(double_4,float_2,double_7);

			unsigned_int_5 = unsigned_int_4;
		}
	}
	return int_5;
}
unsigned int v_lunar_osc_elem( double parameter_1,int parameter_2,long parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	long long_4 = 1;
	return unsigned_int_1;
	char_1 = v_calc_epsilon(double_1,int_1,int_1);

	double_1 = v_jplplan(double_1,int_1,long_1,double_1,double_1,double_2,double_1,char_2);

	int_1 = v_swi_plan_for_osc_elem(long_1,double_1,double_2);

	float_1 = v_swemoon(double_2,long_2,int_2,double_1,char_2);

	int_3 = v_swi_moshmoon(double_3,long_3,double_1,char_3);

	v_swi_cross_prod(double_1,double_3,double_3);

	double_1 = v_swi_mod2PI(double_3);

	v_swi_polcart(double_4,double_5);

	v_swi_coortrf2(double_3,double_5,double_3,double_5);

	v_swi_cartpol(double_4,double_3);

	short_1 = v_memset(int_4,double_4,float_2);

	v_swi_cartpol_sp(double_1,double_4);

	int_2 = v_swi_precess(double_5,double_2,short_1,int_1);

	v_swi_precess_speed(double_3,double_4,short_1,int_2);

	unsigned_int_1 = v_if(long_2,int_5,unsigned_int_2,unsigned_int_3,unsigned_int_4,short_1,double_2);

	v_swi_nutate(double_1,int_3,int_6);

	int_5 = v_swi_trop_ra2sid_lon(double_1,double_2,double_3,float_2);

	int_2 = v_swi_trop_ra2sid_lon_sosy(double_1,double_6,long_4);

	int_5 = v_swe_get_ayanamsa_ex(double_2,char_2,double_2,char_3,-1 );

	v_swi_polcart_sp(double_2,double_6);

	float_1 = v_swe_degnorm(double_4);

}
char v_corr_mean_apog( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_5 = 1;
	char char_2 = 1;
	long_1 = long_2;
	float_2 = float_1 + float_1;
	short_3 = short_1 + short_2;
	long_1 = long_3;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1;
	short_1 = short_4;
	float_2 = float_2;
	short_1 = short_4 + short_1;
	double_2 = double_1 + double_2;
	short_2 = short_5 + short_4;
	return char_2;
}
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	int int_4 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_2;
	char_1 = v_corr_mean_apog(double_1);

	short_1 = short_2 * short_2;
	long_1 = v_mean_elements();

	double_4 = double_1 + double_3;
	v_swi_coortrf(double_5,double_3,double_3);

	double_6 = double_2 * double_5;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	double_3 = double_4 + double_3;
	if(1)
	{
		if(1)
		{
			long_1 = long_1;
			if(1)
			{
				double_2 = v_swi_mod2PI(double_4);

				double_3 = double_7 + double_3;
			}
		}
	}
	long_2 = long_2;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_2;
	short_2 = short_2 * short_2;
	v_swi_polcart(double_5,double_7);

	short_3 = short_1;
	long_4 = long_2 * long_3;
	int_3 = int_3 + int_3;
	int_3 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 * int_3;
	v_swi_cartpol(double_1,double_5);

	float_2 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_3;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
	long_5 = long_1 * long_1;
	return int_4;
	long_1 = v_corr_mean_node(double_1);

}
char v_app_pos_etc_mean( int parameter_1,short parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		v_swi_polcart_sp(double_1,double_1);

		double_3 = double_1 * double_2;
	}
	if(1)
	{
		float_1 = float_2;
	}
	float_1 = float_3 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_4 = float_1 * float_4;
	if(1)
	{
		short short_2 = 1;
		char_3 = char_2 * char_1;
		short_2 = short_1 + short_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_2;
	}
	unsigned_int_2 = v_app_pos_rest(char_3,short_3,double_1,double_2,double_2,char_4,-1 );

	double_2 = double_3 + double_2;
	v_swi_precess_speed(double_3,double_3,short_4,int_3);

	int_1 = int_3 * int_4;
	v_swi_coortrf2(double_3,double_4,double_1,double_5);

	short_3 = short_4 + short_3;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_1 = v_swi_precess(double_1,double_2,short_1,int_3);

				float_3 = float_3 * float_1;
			}
		}
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "p6") < 0)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_3 = int_3 + int_1;
		}
		if(1)
		{
			int_1 = int_4 * int_1;
			if(1)
			{
				short short_5 = 1;
				short_5 = short_3 + short_5;
			}
		}
	}
	if(1)
	{
		int_1 = int_3;
		if(1)
		{
			int int_5 = 1;
			int_2 = int_5;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	return char_2;
}
double v_swe_difrad2n( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int_1 = int_2;
	char_1 = v_swe_radnorm(double_1);

	int_2 = int_2 + int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "pn") == 0)
	{
	}
	return double_2;
}
double v_swi_mod2PI( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	return double_1;
}
long v_corr_mean_node( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	long_1 = long_1;
	int_2 = int_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "p") > 0)
	{
	}
	char_1 = char_1 * char_1;
	long_2 = long_2 * long_1;
	long_1 = long_3 + long_1;
	int_4 = int_4 * int_5;
	unsigned_int_1 = unsigned_int_3;
	long_2 = long_1 + long_4;
	return long_3;
}
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_7 = 1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char_1 = char_2;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	int_2 = int_2 + int_3;
	int_3 = int_3 + int_3;
	short_2 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
			double_4 = double_2 * double_3;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				long_1 = v_corr_mean_node(double_2);

				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	float_2 = float_1 + float_1;
	double_4 = v_swi_mod2PI(double_1);

	int_2 = int_4 + int_3;
	int_2 = int_5 * int_3;
	int_6 = int_2 * int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	int_2 = int_1;
	long_3 = v_mean_elements();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_4 + int_4;
	char_2 = char_2 * char_1;
	int_7 = int_2 * int_1;
	return int_4;
}
int v_app_pos_etc_sbar( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	double_2 = double_2 + double_1;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		int_1 = v_swi_precess(double_3,double_2,short_1,int_2);

		char_3 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_4 = v_app_pos_rest(char_1,short_2,double_4,double_2,double_5,char_4,-1 );

			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		v_swi_bias(double_5,double_1,char_4,long_1);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_3 = 1;
		unsigned_int_2 = v_if(long_2,int_3,unsigned_int_2,unsigned_int_3,unsigned_int_1,short_1,double_3);

		short_1 = short_1 * short_3;
	}
	if(1)
	{
		float float_2 = 1;
		int int_4 = 1;
		float_1 = v_get_denum(short_4,long_3);

		float_1 = float_2 + float_1;
		if(1)
		{
			float float_3 = 1;
			v_swi_precess_speed(double_1,double_6,short_1,int_2);

			float_3 = float_1;
		}
		int_2 = int_2 + int_4;
	}
	if(1)
	{
		double_6 = double_3 + double_5;
	}
	return int_3;
}
double v_swi_armc_to_mc( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float_1 = v_swe_degnorm(double_1);

		double_3 = double_1 * double_2;
		int_2 = int_1 + int_1;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_3;
		}
		if(1)
		{
			double_3 = double_3 * double_2;
		}
	}
	return double_2;
}
unsigned int v_meff( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "wO") > 0)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_1;
}
void v_swi_deflect_light( double parameter_1,double parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_7 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	int_1 = int_1 * int_1;
	char_1 = char_2;
	v_for(float_1);

	int_2 = int_2;
	unsigned_int_2 = unsigned_int_1;
	short_4 = short_3 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_3 * short_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_6 = 1;
			short_6 = short_4 + short_5;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_5 = short_4 * short_2;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_3 * int_3;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned_int_2 = unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_5 = unsigned_int_3;
		}
	}
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		char_1 = char_2 * char_1;
	}
	unsigned_int_6 = unsigned_int_5;
	double_1 = double_2;
	unsigned_int_7 = v_meff(double_1);

	short_1 = short_3 * short_7;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		float_1 = float_2 + float_2;
		long_2 = long_1 + long_1;
		float_3 = float_1 * float_1;
	}
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_1 + double_3;
	if(1)
	{
		double_1 = double_5 * double_5;
	}
	if(1)
	{
		double_5 = double_6 * double_5;
	}
	int_5 = int_4 * int_3;
	float_3 = float_1;
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		char char_3 = 1;
		int int_6 = 1;
		short short_8 = 1;
		unsigned_int_4 = v_if(long_1,int_5,unsigned_int_5,unsigned_int_5,unsigned_int_3,short_2,double_7);

		unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			long_4 = long_3 * long_1;
		}
		if(1)
		{
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				double_3 = double_7;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				unsigned_int_5 = unsigned_int_6;
			}
		}
		for(int looper_15=0; looper_15<1;looper_15++)
		{
			double_3 = double_1 * double_7;
		}
		char_3 = char_2 * char_1;
		unsigned_int_5 = unsigned_int_2;
		double_1 = double_3 * double_4;
		for(int looper_16=0; looper_16<1;looper_16++)
		{
			int_2 = int_4 + int_2;
			short_3 = short_1;
			long_1 = long_2 * long_4;
		}
		int_3 = int_3 + int_6;
		double_7 = double_5 * double_1;
		short_5 = short_1;
		short_3 = short_2 * short_8;
		char_2 = char_1 + char_2;
		if(1)
		{
			double_2 = double_1 + double_5;
		}
		if(1)
		{
			double_6 = double_2;
		}
		float_1 = float_2 + float_1;
		float_1 = float_2 + float_3;
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			long_1 = long_3 * long_4;
		}
		for(int looper_18=0; looper_18<1;looper_18++)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_1 = float_4 * float_2;
			double_6 = double_5 + double_1;
			float_1 = float_5 * float_5;
			float_2 = float_3 + float_5;
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		double_3 = double_7 * double_6;
	}
}
unsigned int v_app_pos_etc_plan( int parameter_1,unsigned int parameter_2,char parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_2 * int_3;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_2 + float_1;
	short_1 = short_2;
	float_3 = float_3 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
		double_1 = double_1 * double_3;
		int_2 = int_3;
		float_3 = float_4 + float_5;
	}
	if(1)
	{
		short_3 = short_2 * short_2;
		long_2 = long_3 + long_2;
		int_3 = int_4;
	}
	if(1)
	{
		short_2 = short_3;
		double_3 = double_3 * double_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		float_5 = float_1 * float_4;
		long_1 = long_4 * long_1;
		int_3 = int_2 + int_4;
	}
	double_4 = double_3 + double_2;
	double_4 = double_4 * double_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		char_1 = char_1 + char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_3;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float_5 = float_2 * float_5;
			}
		}
	}
	char controller4vul_1473[2];
	fgets(controller4vul_1473 ,2 ,stdin);
	if( strcmp( controller4vul_1473, "5") < 0)
	{
		char controller4vul_1474[3];
		fgets(controller4vul_1474 ,3 ,stdin);
		if( strcmp( controller4vul_1474, "mx") < 0)
		{
			char controller4vul_1475[2];
			fgets(controller4vul_1475 ,2 ,stdin);
			if( strcmp( controller4vul_1475, "0") > 0)
			{
				int_2 = v_swi_moshplan(double_5,int_4,double_1,double_1,double_4,char_2,uni_para);

			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float_5 = float_6 + float_7;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_1 = int_5;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			short_1 = short_2 + short_4;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		if(1)
		{
			int_3 = int_2 * int_5;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				long_2 = long_3 * long_2;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					char_3 = char_2 * char_1;
					if(1)
					{
						long_1 = long_1 * long_4;
					}
				}
				char_4 = char_2;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					int_2 = int_4 + int_6;
				}
			}
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				double_1 = double_5 * double_3;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				int_7 = int_6 + int_2;
				if(1)
				{
					double_3 = double_4 + double_2;
				}
			}
			char_3 = char_2 * char_1;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				int_2 = int_3 + int_8;
			}
		}
		if(1)
		{
			short_5 = short_1 + short_2;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			double_3 = double_1;
			if(1)
			{
				double_2 = double_5;
				int_6 = int_2 * int_6;
			}
		}
		if(1)
		{
			double_5 = double_1 * double_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
				int_3 = int_2 + int_8;
			}
			char_5 = char_1;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
			if(1)
			{
				char_4 = char_6 * char_5;
				unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
			}
		}
		int_5 = int_4 + int_5;
		if(1)
		{
			float_3 = float_4 * float_4;
		}
		if(1)
		{
			double_3 = double_5;
			if(1)
			{
				char_8 = char_1 * char_7;
			}
		}
		if(1)
		{
		}
		float_4 = float_3;
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				double_7 = double_6 + double_1;
				int_1 = int_6;
			}
			if(1)
			{
				if(1)
				{
					char_3 = char_4 + char_6;
				}
				if(1)
				{
					char_3 = char_2 + char_2;
					if(1)
					{
						double_4 = double_6 * double_5;
					}
				}
				if(1)
				{
				}
				for(int looper_16=0; looper_16<1;looper_16++)
				{
					double_4 = double_8 + double_2;
				}
			}
			float_2 = float_7;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_17=0; looper_17<1;looper_17++)
				{
					char_1 = char_7 * char_3;
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
					float_6 = float_7 * float_5;
				}
			}
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					double double_9 = 1;
					double_1 = double_4 + double_9;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			double_7 = double_1 + double_1;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_21=0; looper_21<1;looper_21++)
				{
					double_6 = double_8 + double_1;
				}
			}
			if(1)
			{
				if(1)
				{
					for(int looper_22=0; looper_22<1;looper_22++)
					{
						long_3 = long_1 + long_4;
					}
				}
			}
		}
		if(1)
		{
			for(int looper_23=0; looper_23<1;looper_23++)
			{
				double_7 = double_1 * double_5;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
	}
	if(1)
	{
		float_5 = float_7 + float_1;
		if(1)
		{
			for(int looper_24=0; looper_24<1;looper_24++)
			{
				float_5 = float_4 + float_3;
			}
		}
	}
	if(1)
	{
		for(int looper_25=0; looper_25<1;looper_25++)
		{
			int int_9 = 1;
			int_8 = int_9 + int_7;
		}
	}
	if(1)
	{
		short_4 = short_3 * short_5;
	}
	int_4 = int_6 + int_6;
	int_10 = int_5 * int_5;
	if(1)
	{
		float_1 = float_6 * float_3;
	}
	for(int looper_26=0; looper_26<1;looper_26++)
	{
		double_6 = double_2;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_1 * long_4;
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned int unsigned_int_10 = 1;
			unsigned_int_1 = unsigned_int_9 * unsigned_int_10;
		}
		char_7 = char_4 + char_8;
	}
	if(1)
	{
		char char_9 = 1;
		char_4 = char_9;
	}
	return unsigned_int_7;
}
unsigned int v_app_pos_etc_sun( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	int_1 = int_2;
	v_swi_close_jpl_file();

	short_1 = short_1 + short_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 * long_2;
	short_2 = short_1 * short_1;
	unsigned_int_4 = v_sweplan(double_1,int_3,int_2,char_1,unsigned_int_4,double_2,double_1,double_2,double_3,char_1);

	unsigned_int_3 = unsigned_int_1;
	int_4 = int_2 * int_3;
	if(1)
	{
		double_5 = double_1 * double_4;
		int_1 = v_swi_precess(double_2,double_6,short_2,int_4);

		int_1 = int_3 * int_2;
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
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char_2 = v_sweph(double_7,int_4,int_4,long_1,double_5,double_2,double_2,char_2);

				unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_7 + double_6;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_2 = v_swi_get_observer(double_3,int_2,long_2,double_5,char_2);

			double_3 = double_6 * double_2;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_3 = char_1 * char_3;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_6 = double_4 * double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				int_4 = int_1 * int_2;
				if(1)
				{
					int_4 = int_3;
				}
				if(1)
				{
					short_3 = short_2 + short_3;
				}
			}
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				float float_4 = 1;
				int int_8 = 1;
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					unsigned_int_6 = unsigned_int_7;
					if(1)
					{
						unsigned_int_1 = unsigned_int_7 * unsigned_int_1;
					}
				}
				int_4 = v_swi_moshplan(double_5,int_2,double_1,double_7,double_1,char_3,-1 );

				double_8 = double_1 + double_4;
				float_2 = float_2 * float_2;
				if(1)
				{
					double_9 = double_6 * double_2;
				}
				if(1)
				{
					double_5 = double_1 * double_4;
				}
				if(1)
				{
					int_2 = int_4 * int_2;
					v_swi_precess_speed(double_5,double_3,short_4,int_1);

					int_5 = int_6;
				}
				int_6 = int_3 + int_3;
				if(1)
				{
					double_5 = double_9 * double_4;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
				}
				int_7 = v_swi_pleph(double_2,int_5,int_6,double_3,char_1);

				unsigned_int_7 = v_app_pos_rest(char_3,short_4,double_6,double_8,double_2,char_2,-1 );

				float_3 = float_3 * float_4;
				if(1)
				{
					char_3 = char_1 + char_3;
				}
				unsigned_int_5 = unsigned_int_8 * unsigned_int_8;
				int_8 = int_1 + int_6;
				unsigned_int_7 = unsigned_int_7 * unsigned_int_4;
				if(1)
				{
				}
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				v_swi_aberr_light(double_3,double_5,unsigned_int_1);

				short_3 = short_1 * short_2;
				if(1)
				{
					unsigned_int_8 = unsigned_int_5 + unsigned_int_2;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			double_9 = double_4 + double_8;
		}
	}
	if(1)
	{
		long long_3 = 1;
		v_swi_bias(double_1,double_2,char_2,long_2);

		long_1 = long_3 + long_4;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		unsigned_int_8 = v_if(long_4,int_1,unsigned_int_6,unsigned_int_4,unsigned_int_3,short_2,double_6);

		unsigned_int_6 = unsigned_int_3;
	}
	if(1)
	{
		int int_9 = 1;
		int int_10 = 1;
		int_10 = int_9 + int_5;
		if(1)
		{
			double_7 = double_2 * double_2;
		}
		unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
		short short_5 = 1;
		float_2 = v_get_denum(short_1,long_1);

		short_5 = short_4 * short_3;
	}
	return unsigned_int_8;
}
double v_main_planet( double parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	short short_3 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int_2 = int_1;
		}
		int_2 = int_2 + int_3;
	}
	char controller4vul_1470[3];
	fgets(controller4vul_1470 ,3 ,stdin);
	if( strcmp( controller4vul_1470, "qw") < 0)
	{
		char controller4vul_1471[3];
		fgets(controller4vul_1471 ,3 ,stdin);
		if( strcmp( controller4vul_1471, "D.") > 0)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_1472[3];
			fgets(controller4vul_1472 ,3 ,stdin);
			if( strcmp( controller4vul_1472, "K#") < 0)
			{
				unsigned_int_2 = v_app_pos_etc_plan(int_2,unsigned_int_1,char_3,uni_para);

				int_1 = int_1 + int_3;
			}
			long_2 = long_1 * long_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		int_4 = int_2 + int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_1 + long_1;
			if(1)
			{
				int_1 = int_5 * int_1;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
		}
	}
	int_1 = int_5 + int_5;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_4 + char_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3;
			}
			double_1 = double_2 * double_2;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		char_2 = char_4 + char_5;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_3 * double_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
			}
			int_1 = int_6 * int_5;
		}
		if(1)
		{
		}
	}
	char_2 = char_5 * char_4;
	short_3 = short_3 + short_3;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		int_5 = int_5 * int_6;
	}
	if(1)
	{
	}
	int_5 = int_1 + int_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	return double_3;
}
void v_swi_icrs2fk5( double parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	long_3 = long_2 + long_1;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_1;
	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_1 * short_1;
	char_2 = char_1 + char_1;
	float_1 = float_1;
	long_5 = long_4 + long_5;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_1;
			if(1)
			{
				int int_2 = 1;
				int_3 = int_1 + int_2;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_3 = int_4 * int_5;
			if(1)
			{
				short short_2 = 1;
				short_1 = short_1 + short_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_4 = long_4 + long_4;
	}
}
void v_swi_FK4_FK5( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	long_2 = long_1 + long_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		v_swi_polcart_sp(double_3,double_1);

		int_4 = int_3 + int_2;
	}
	v_swi_cartpol_sp(double_4,double_2);

	int_4 = int_3 * int_1;
}
long v_swi_right_trim( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
long v_swe_fixstar( char parameter_1,double parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	double_1 = v_main_planet(double_1,int_1,long_1,long_2,char_1,uni_para);

	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2 + char_1;
	int_2 = int_2;
	int_1 = int_2 + int_3;
	long_4 = long_2 * long_3;
	int_2 = int_3 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_4 = int_4 + int_5;
	}
	unsigned_int_2 = unsigned_int_1;
	int_6 = int_1 + int_6;
	return long_2;
}
int v_swe_get_ayanamsa_ex( double parameter_1,char parameter_2,double parameter_3,char parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	short short_8 = 1;
	float float_4 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	float_2 = float_1 * float_2;
	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	double_3 = double_3 + double_3;
	short_2 = short_1 * short_2;
	long_2 = long_1 * long_1;
	short_1 = short_1;
	long_1 = long_2 * long_3;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_4 * long_4;
	}
	if(1)
	{
		double_4 = double_1 + double_4;
	}
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	char controller4vul_1468[3];
	fgets(controller4vul_1468 ,3 ,stdin);
	if( strcmp( controller4vul_1468, "cJ") > 0)
	{
		char_2 = char_1 * char_2;
		char controller4vul_1469[3];
		fgets(controller4vul_1469 ,3 ,stdin);
		if( strcmp( controller4vul_1469, "RF") > 0)
		{
			long_2 = v_swe_fixstar(char_1,double_4,int_1,double_5,char_2,uni_para);

		}
		short_1 = short_3;
	}
	if(1)
	{
		short_4 = short_4 * short_5;
		if(1)
		{
		}
		double_4 = double_5 * double_5;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		if(1)
		{
		}
		char_3 = char_2 + char_1;
	}
	if(1)
	{
		int int_4 = 1;
		char_1 = char_3 + char_3;
		if(1)
		{
		}
		int_3 = int_1 * int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
		}
		short_1 = short_5 + short_4;
	}
	if(1)
	{
		short_1 = short_6 * short_3;
		if(1)
		{
		}
		char_1 = char_1;
		short_7 = short_2;
		double_6 = double_5 * double_5;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
		if(1)
		{
		}
		float_2 = float_2;
	}
	if(1)
	{
		long long_5 = 1;
		unsigned int unsigned_int_8 = 1;
		long_3 = long_5;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_8 + unsigned_int_7;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
	}
	float_3 = float_2;
	short_8 = short_6 * short_1;
	if(1)
	{
		double_4 = double_1;
	}
	float_3 = float_1 + float_1;
	if(1)
	{
		long_2 = long_3;
	}
	char_3 = char_1 * char_2;
	int_3 = int_1 + int_3;
	double_3 = double_1 + double_5;
	short_7 = short_5;
	float_4 = float_1 * float_1;
	double_4 = double_2 * double_6;
	return int_2;
}
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	v_swi_polcart_sp(double_1,double_1);

	float_1 = v_swe_degnorm(double_2);

	char_1 = char_1 + char_2;
	v_swi_polcart(double_3,double_3);

	char_1 = char_3 + char_3;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_cartpol(double_1,double_4);

		double_1 = double_4 + double_4;
	}
	long_2 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "p") > 0)
	{
		float_3 = float_2 * float_1;
	}
	char_3 = char_4 * char_5;
	float_4 = float_3 + float_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_2;
	int_4 = int_2 + int_3;
	double_5 = double_1 * double_2;
	if(1)
	{
		int_5 = int_4 * int_3;
	}
	double_1 = double_6;
	short_1 = short_1 * short_2;
	double_3 = double_3 + double_7;
	char_5 = char_3;
	double_8 = double_6 * double_2;
	v_swi_coortrf(double_4,double_9,double_8);

	short_2 = short_2;
	double_5 = double_7 * double_8;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	v_swi_coortrf2(double_7,double_3,double_4,double_1);

	double_9 = double_7 + double_5;
	float_2 = float_1 * float_2;
	v_swi_cartpol_sp(double_2,double_2);

	short_4 = short_2 + short_3;
	return int_3;
	int_5 = v_swi_precess(double_8,double_9,short_1,int_1);

}
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	v_swi_coortrf2(double_1,double_2,double_1,double_2);

	int_3 = int_1 + int_2;
	short_2 = short_1 * short_1;
	double_3 = double_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long_2 = long_1;
		v_swi_cartpol_sp(double_3,double_3);

		double_2 = double_2 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_3 = long_1 * long_2;
	}
	short_1 = short_2 + short_2;
	float_2 = float_2;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	v_swi_polcart_sp(double_3,double_1);

	long_3 = long_3 * long_3;
	char_1 = v_calc_epsilon(double_4,int_4,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	return int_4;
	int_2 = v_swi_precess(double_5,double_5,short_2,int_1);

}
unsigned int v_app_pos_rest( char parameter_1,short parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double_3 = double_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	char controller4vul_1465[2];
	fgets(controller4vul_1465 ,2 ,stdin);
	if( strcmp( controller4vul_1465, "x") < 0)
	{
		char controller4vul_1466[3];
		fgets(controller4vul_1466 ,3 ,stdin);
		if( strcmp( controller4vul_1466, "O8") > 0)
		{
			char controller4vul_1467[3];
			fgets(controller4vul_1467 ,3 ,stdin);
			if( strcmp( controller4vul_1467, "c:") > 0)
			{
				int_1 = v_swe_get_ayanamsa_ex(double_4,char_1,double_2,char_1,uni_para);

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
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char_1 = char_2 + char_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_1 = 1;
				float_3 = float_1 + float_2;
			}
			if(1)
			{
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
			}
			short_3 = short_1 + short_2;
			char_1 = char_2;
		}
	}
	long_4 = long_1 * long_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_3 = double_1 * double_2;
		double_2 = double_2 + double_4;
		double_5 = double_3;
		double_4 = double_2 + double_6;
	}
	float_3 = float_2 + float_4;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	return unsigned_int_3;
}
int v_swi_approx_jplhor( double parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	short short_4 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "XR") > 0)
	{
		float float_1 = 1;
		int_2 = int_2 + int_3;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double_1 = double_1;
		v_swi_cartpol(double_3,double_2);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		long_1 = long_2 * long_2;
		long_3 = long_4;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		float_3 = float_2 + float_2;
	}
	unsigned_int_2 = unsigned_int_6;
	v_swi_polcart(double_2,double_3);

	double_4 = double_4 * double_4;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_3 = int_4 + int_5;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_5 = long_6;
	}
	short_4 = short_3 + short_1;
	return int_2;
}
void v_swi_bias( double parameter_1,double parameter_2,char parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_5 = 1;
	double double_6 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_1 * int_1;
	float_1 = float_2;
	double_1 = double_2;
	float_1 = float_1 + float_3;
	int_2 = int_1 * int_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_3;
	float_1 = float_2;
	int_3 = int_3 + int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_1 * int_4;
		long_1 = long_1 + long_1;
		short_2 = short_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		unsigned_int_1 = unsigned_int_1;
		int_5 = v_swi_approx_jplhor(double_3,double_2,double_2,unsigned_int_3);

		double_2 = double_3 + double_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_1 * int_4;
		short_1 = short_4;
	}
	if(1)
	{
		char char_1 = 1;
		int int_6 = 1;
		double_3 = double_3 * double_1;
		char_2 = char_1 * char_1;
		long_1 = long_2 * long_3;
		int_6 = int_2 + int_1;
		long_2 = long_3;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
		int_2 = int_6 * int_6;
		int_2 = int_2;
		long_1 = long_1 * long_3;
	}
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	float_1 = float_3;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	float_3 = float_4 + float_1;
	int_7 = int_8;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
	double_6 = double_2 + double_5;
	short_2 = short_2 + short_3;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_9 = 1;
			int_9 = int_7 + int_1;
			if(1)
			{
				float_3 = float_1 + float_2;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_4 = 1;
			long_3 = long_2 * long_4;
			if(1)
			{
				double_1 = double_3;
			}
		}
		short_3 = short_1 + short_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_7 = 1;
			double_7 = double_4;
		}
	}
}
float v_get_denum( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
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
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if(remainder_check(controller_5,100,1))
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_1;
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
	return float_1;
}
void v_swi_aberr_light( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	long_3 = long_1 + long_2;
	char_2 = char_1 * char_1;
	int_1 = int_1 + int_2;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_2 * double_3;
	}
	double_3 = double_5 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_3 + long_4;
	char_2 = char_1 + char_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float float_3 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_3 = double_3 * double_4;
		}
		float_3 = float_1;
		float_3 = float_3 + float_3;
		double_2 = double_1 * double_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			double double_6 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			double_5 = double_2 * double_6;
			float_4 = float_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			char_3 = char_3 + char_3;
		}
	}
}
void v_swi_cartpol_sp( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_7 = 1;
	char char_3 = 1;
	int_1 = int_2;
	short_1 = short_1;
	if(1)
	{
		char char_1 = 1;
		float float_1 = 1;
		char_1 = char_1 * char_2;
		float_1 = float_1;
		int_2 = int_3;
		long_3 = long_1 * long_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "Z") > 0)
	{
		int int_4 = 1;
		int_4 = int_1;
		char_2 = char_2;
	}
	short_2 = short_2;
	long_4 = long_2 * long_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	int_5 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_1 * double_1;
	int_3 = int_5 * int_6;
	double_3 = double_1 * double_1;
	short_3 = short_1 * short_3;
	long_6 = long_3 * long_5;
	v_swi_cartpol(double_1,double_4);

	float_3 = float_2 * float_3;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_3;
	float_3 = float_4 * float_3;
	long_7 = long_1 + long_2;
	char_2 = char_3 * char_3;
	long_7 = long_1 * long_2;
}
void v_swi_precess_speed( double parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_3;
	v_swi_polcart_sp(double_2,double_3);

	char_2 = char_1 + char_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		v_swi_cartpol_sp(double_4,double_1);

		int_1 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	int_3 = int_1 + int_3;
	double_3 = double_3 + double_4;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_3 = v_swi_precess(double_1,double_1,short_2,int_1);

		v_swi_coortrf2(double_2,double_2,double_1,double_2);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		float_1 = float_2 * float_2;
		v_swi_ldp_peps(double_4,double_1,double_3);

		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 + float_2;
	}
	long_2 = long_2 + long_1;
	short_3 = short_3 + short_4;
	short_3 = short_4 + short_4;
}
void v_swi_nutate( double parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char_1 = char_2;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_3 = int_1 * int_2;
			}
			if(1)
			{
				double double_4 = 1;
				double_5 = double_3 + double_4;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int int_4 = 1;
				int_1 = int_1 + int_4;
			}
			char controller_7[3];
			fgets(controller_7 ,3 ,stdin);
			if( strcmp( controller_7, "oe") < 0)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			}
			int_2 = int_3;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_5 = double_3 * double_5;
	}
}
void v_swi_polcart_sp( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		v_swi_polcart(double_2,double_2);

		short_3 = short_1 * short_2;
		double_1 = double_2 * double_3;
	}
	short_4 = short_2 + short_3;
	short_3 = short_5 + short_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	double_4 = double_4 + double_3;
	int_1 = int_1 * int_2;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
	double_2 = double_1;
	double_2 = double_4 * double_1;
	short_6 = short_4 * short_5;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_2;
	double_2 = double_5 * double_6;
	float_3 = float_2 * float_2;
	double_5 = double_2 * double_6;
	int_1 = int_3 + int_3;
	char_2 = char_1 * char_2;
}
unsigned int v_sidtime_non_polynomial_part( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_3 * double_1;
	int_4 = int_2 + int_1;
	short_1 = short_1 * short_2;
	int_4 = int_3 * int_2;
	char_1 = char_1;
	float_2 = float_1 * float_1;
	double_1 = double_1;
	short_2 = short_3;
	int_2 = int_1 + int_2;
	short_2 = short_3 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	short_3 = short_3 + short_4;
	int_4 = int_3 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		char_2 = v_swe_radnorm(double_2);

		unsigned_int_3 = unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_4 = double_2 + double_1;
		}
		int_5 = int_1 + int_2;
	}
	double_5 = double_5 * double_4;
	return unsigned_int_1;
}
void v_swi_cartpol( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_4 = char_5;
	}
	long_2 = long_1 * long_2;
	int_1 = int_3 + int_3;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4;
		}
		if(1)
		{
			int_3 = int_3 * int_2;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	long_3 = long_2 + long_3;
	short_1 = short_1 + short_1;
}
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 * double_3;
	int_2 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 + short_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	float_1 = float_1;
}
void v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_7 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	float_1 = v_swe_deltat_ex(double_1,unsigned_int_1,char_1);

	int_2 = int_1 + int_1;
	v_swi_cartpol(double_1,double_2);

	unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
	double_2 = double_1 + double_2;
	double_3 = v_swi_epsiln(double_4,int_2);

	int_1 = int_3 + int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	float_2 = float_1 * float_1;
	float_1 = float_2 + float_2;
	char_3 = char_1 * char_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	double_4 = double_1 * double_1;
	char_2 = char_2 * char_4;
	int_4 = int_5 * int_1;
	int_6 = v_swi_precess(double_1,double_3,short_1,int_4);

	short_3 = short_1 * short_2;
	double_2 = double_2 * double_2;
	char_4 = char_2;
	v_swi_polcart(double_3,double_4);

	short_4 = short_4 * short_4;
	char_5 = char_1 * char_2;
	v_swi_coortrf(double_5,double_2,double_5);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_7;
	double_4 = double_1 * double_6;
	double_1 = double_6 * double_1;
	float_3 = float_1 * float_2;
	int_4 = v_swi_nutation(double_5,float_2,double_6);

	unsigned_int_1 = unsigned_int_8 * unsigned_int_8;
	double_4 = double_1 + double_3;
	unsigned_int_9 = unsigned_int_2 * unsigned_int_9;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_4;
	int_6 = int_5 + int_7;
	char_1 = char_3 + char_1;
	float_4 = v_swe_degnorm(double_3);

	unsigned_int_11 = unsigned_int_10 * unsigned_int_5;
	if(1)
	{
		double_1 = double_2 + double_7;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_2 * float_2;
	}
	int_6 = int_3;
	double_7 = double_6 * double_3;
}
double v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2;
	int_1 = int_1 * int_1;
	int_1 = int_2 * int_1;
	double_3 = double_1 * double_1;
	int_1 = int_1 * int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	float_1 = v_swe_degnorm(double_2);

	double_3 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			short_1 = short_1 * short_1;
			if(1)
			{
				double_3 = double_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			}
			if(1)
			{
				char_3 = char_1 + char_2;
			}
			if(1)
			{
				int_5 = int_3 + int_4;
			}
			char_1 = char_3;
		}
	}
	double_3 = double_1 + double_1;
	short_3 = short_2 * short_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		long_1 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		double_3 = double_4 * double_1;
		long_3 = long_1 * long_2;
	}
	int_2 = int_1 * int_1;
	long_2 = long_4 + long_5;
	if(1)
	{
		short short_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short_4 = short_5;
		int_1 = int_1 + int_6;
		short_4 = v_swi_init_swed_if_start();

		unsigned_int_2 = v_sidtime_non_polynomial_part(double_2);

		int_6 = int_6 * int_5;
		int_2 = int_6 * int_7;
		int_5 = int_5 * int_1;
		float_4 = float_3 * float_1;
		v_sidtime_long_term(double_5,double_3,double_2);

		double_2 = double_4 * double_6;
	}
	if(1)
	{
		float float_5 = 1;
		float_1 = float_5;
		double_4 = double_3 * double_2;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_7;
		int_2 = int_4 * int_6;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
		float_1 = v_swe_deltat_ex(double_1,unsigned_int_8,char_1);

		int_5 = int_1;
		unsigned_int_1 = unsigned_int_8 + unsigned_int_7;
	}
	double_5 = double_3;
	int_3 = int_2 * int_6;
	char_3 = char_2;
	short_6 = short_2 + short_1;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_4;
	int_4 = int_3 * int_3;
	if(1)
	{
		if(1)
		{
			long long_6 = 1;
			int int_8 = 1;
			long long_7 = 1;
			double_3 = double_1 + double_6;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
			double_3 = double_5 * double_2;
			long_2 = long_6 + long_4;
			int_1 = int_4 * int_1;
			int_6 = int_5 + int_3;
			int_4 = int_8 * int_7;
			long_6 = long_7 + long_6;
		}
		if(1)
		{
			int int_9 = 1;
			int_9 = int_1 + int_1;
			double_3 = double_4 + double_2;
		}
	}
	return double_6;
}
long v_init_dt()
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return long_1;
	double_1 = v_swi_fopen(int_1,char_1,char_1,char_2);

}
float v_deltat_aa( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float float_4 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	char_2 = char_1 + char_1;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_1 = 1;
		int int_7 = 1;
		long_2 = v_init_dt();

		float_2 = float_1 + float_1;
		float_1 = float_3;
		long_1 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		double_3 = double_3 + double_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				char_1 = char_3;
			}
			if(1)
			{
				int_3 = int_2 + int_2;
			}
			double_1 = double_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_2 = int_4 * int_5;
		}
		double_2 = double_3 * double_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			double_4 = double_3 * double_4;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_6 = 1;
			int_6 = int_3 + int_2;
		}
		short_1 = short_2;
		int_7 = int_7 + int_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		if(1)
		{
			int int_8 = 1;
			int_8 = int_2 * int_1;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_3 = 1;
			short_3 = short_2 * short_1;
		}
		double_4 = double_3 * double_4;
		float_2 = v_adjust_for_tidacc(double_4,double_3,double_2);

		int_4 = int_3 * int_7;
		if(1)
		{
			long_2 = long_2;
		}
		float_2 = float_4 + float_1;
	}
	double_2 = double_3 * double_3;
	short_2 = short_2;
	if(1)
	{
		char char_4 = 1;
		float_4 = float_4 + float_3;
		char_4 = char_1 * char_2;
		float_3 = float_4 * float_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		char_1 = char_3 + char_2;
	}
	return float_3;
}
short v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	float_1 = v_adjust_for_tidacc(double_1,double_1,double_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		int_5 = int_2 * int_4;
		double_2 = double_1 + double_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			char_2 = char_1 + char_1;
			double_1 = double_1 + double_2;
			unsigned_int_2 = unsigned_int_2;
			double_1 = double_2;
			char_1 = char_2 + char_1;
			double_1 = double_1 + double_1;
			int_3 = v_deltat_longterm_morrison_stephenson(double_3);

			long_1 = long_1 + long_1;
		}
	}
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_2 + int_5;
		float_2 = float_2 * float_2;
		double_4 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_3 + double_2;
		float_2 = float_2;
	}
	float_2 = float_2 + float_1;
	return short_1;
}
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char_2 = char_1 * char_2;
		short_1 = short_1 + short_1;
	}
	return float_1;
}
int v_deltat_longterm_morrison_stephenson( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	int_1 = int_1;
	return int_2;
}
short v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		double_1 = double_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 * long_2;
		long_2 = long_3;
	}
	if(1)
	{
		int_1 = v_deltat_longterm_morrison_stephenson(double_1);

		float_2 = float_1 + float_1;
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_6 * unsigned_int_4;
		double_2 = double_3;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_1 = long_4 * long_5;
		float_2 = v_adjust_for_tidacc(double_1,double_4,double_3);

		int_3 = int_3 + int_2;
	}
	if(1)
	{
		char_3 = char_1 + char_3;
		double_2 = double_4 * double_2;
	}
	if(1)
	{
		short short_2 = 1;
		double double_5 = 1;
		short_1 = short_1 * short_2;
		double_5 = double_2 + double_4;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_2;
		int_1 = int_1 * int_3;
	}
	if(1)
	{
		char_3 = char_3 + char_1;
		char_2 = char_2 * char_3;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_4 = float_5;
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		float float_6 = 1;
		int_3 = int_2 + int_1;
		float_6 = float_1 + float_2;
	}
	int_5 = int_4 + int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
	return short_3;
}
double v_calc_deltat( double parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_1;
	double_2 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 * int_2;
	long_2 = long_2;
	if(1)
	{
		double_3 = double_1 * double_4;
	}
	short_2 = short_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "rR") < 0)
		{
			if(1)
			{
				long_4 = long_3 + long_3;
			}
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		float_2 = float_1 + float_1;
	}
	char_1 = char_1 * char_2;
	short_3 = v_swi_init_swed_if_start();

	int_1 = int_3;
	short_2 = short_2 + short_3;
	if(1)
	{
		short_2 = v_deltat_espenak_meeus_1620(double_2,double_2);

		int_4 = int_3 * int_4;
	}
	if(1)
	{
		if(1)
		{
			float_3 = float_1 * float_2;
		}
		if(1)
		{
			if(1)
			{
				char_1 = char_1 + char_2;
				double_5 = double_4 + double_2;
				float_3 = v_deltat_aa(double_1,double_1);

				int_4 = int_2 * int_5;
				char_1 = char_1 * char_2;
				char_2 = char_2;
				double_5 = double_1 + double_6;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	double_6 = v_swi_get_tid_acc(double_5,unsigned_int_3,unsigned_int_2,short_3,double_6,char_2);

	int_1 = int_2 * int_3;
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			int int_6 = 1;
			float_3 = float_3 * float_3;
			char_1 = v_swi_set_tid_acc(double_4,long_3,long_3,char_1);

			float_2 = v_adjust_for_tidacc(double_7,double_4,double_2);

			double_5 = double_1;
			long_4 = long_3 + long_5;
			int_3 = int_4 * int_5;
			short_3 = short_2 * short_3;
			int_5 = int_2 + int_6;
			short_1 = v_deltat_stephenson_morrison_1600(double_8,double_4);

			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			char_5 = char_3 + char_4;
			float_2 = float_1 * float_1;
		}
	}
	double_4 = double_1 + double_6;
	return double_2;
}
int v_swi_guess_ephe_flag()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return int_1;
}
float v_swe_deltat( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_1 = v_swi_guess_ephe_flag();

	double_1 = double_1 * double_1;
	return float_1;
	float_1 = v_swe_deltat_ex(double_2,unsigned_int_1,char_1);

}
double v_deltat( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	return double_1;
	float_1 = v_swe_deltat(double_2);

}
float v_swe_deltat_ex( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double_1 = v_calc_deltat(double_2,unsigned_int_1,double_1,char_1);

	char_1 = char_1 * char_2;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	return float_1;
	double_2 = v_deltat(double_3);

}
int v_swi_get_observer( double parameter_1,int parameter_2,long parameter_3,double parameter_4,char parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_7 = 1;
	int int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	short short_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	double double_9 = 1;
	float_2 = float_1 * float_1;
	v_swi_cartpol(double_1,double_2);

	double_4 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		int_2 = int_2 + int_2;
		char_4 = char_3 + char_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			float_2 = float_2 + float_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		char_5 = char_5 + char_3;
		double_4 = double_2 * double_4;
	}
	double_5 = v_swe_sidtime0(double_5,double_6,double_5);

	int_1 = int_1 + int_3;
	double_5 = double_6;
	v_swi_nutate(double_4,int_3,int_4);

	short_2 = short_2 * short_2;
	int_5 = v_swi_precess(double_4,double_2,short_1,int_5);

	long_1 = long_1;
	int_5 = int_3 * int_2;
	double_6 = double_5 + double_2;
	double_7 = double_3 + double_7;
	int_3 = int_4;
	int_6 = v_swi_nutation(double_6,float_2,double_3);

	short_1 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	long_2 = long_1 * long_1;
	float_2 = v_swe_deltat_ex(double_4,unsigned_int_4,char_5);

	double_8 = v_swi_epsiln(double_1,int_4);

	v_swi_precess_speed(double_4,double_5,short_4,int_2);

	long_3 = long_1 + long_2;
	int_4 = int_4 * int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	short_5 = short_3;
	v_swi_coortrf2(double_9,double_9,double_9,double_9);

	int_6 = int_6 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2 + long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		long_1 = long_1 * long_2;
		long_4 = long_5;
	}
	double_9 = double_3 + double_7;
	double_7 = double_7 * double_2;
	if(1)
	{
		long long_6 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_6 = 1;
			v_swi_polcart_sp(double_2,double_8);

			short_6 = short_2;
		}
		float_1 = float_2 * float_2;
		long_6 = long_2;
	}
	return int_1;
}
char v_app_pos_etc_moon( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	double double_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_8 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_1;
	short_1 = short_1;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_2;
	float_2 = float_1 * float_1;
	float_1 = float_2 + float_1;
	double_1 = double_3 * double_2;
	int_2 = int_1 + int_1;
	int_3 = v_swi_pleph(double_3,int_3,int_4,double_3,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_3 = long_2 + long_3;
		v_swi_close_jpl_file();

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_bias(double_2,double_4,char_1,long_3);

		char_3 = char_2 * char_2;
		char_2 = char_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_1 * int_5;
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
				double_5 = double_2 * double_4;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_1 = char_1 + char_3;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			v_swi_precess_speed(double_5,double_3,short_3,int_3);

			double_4 = double_5 * double_1;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_4 = int_3 * int_5;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			float_1 = float_2 * float_1;
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			int int_6 = 1;
			int_3 = int_4 + int_6;
		}
	}
	if(1)
	{
		short_2 = short_3 * short_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_4 + double_2;
		if(1)
		{
			double_4 = double_5 + double_6;
		}
		if(1)
		{
			unsigned_int_5 = v_sweplan(double_4,int_7,int_7,char_2,unsigned_int_6,double_6,double_2,double_2,double_2,char_3);

			int_4 = int_1 * int_4;
		}
		if(1)
		{
			char char_4 = 1;
			char_4 = char_2 * char_3;
			float_1 = v_get_denum(short_3,long_1);

			int_4 = v_swi_precess(double_6,double_3,short_4,int_5);

			long_3 = long_2 * long_1;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			v_for(float_2);

			double_6 = double_7;
		}
		double_3 = double_6 + double_6;
		unsigned_int_6 = unsigned_int_2;
		if(1)
		{
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			float_1 = float_1;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			unsigned int unsigned_int_7 = 1;
			float float_3 = 1;
			unsigned_int_1 = unsigned_int_5;
			unsigned_int_7 = unsigned_int_2;
			float_3 = float_2 * float_1;
			float_1 = float_2 * float_2;
			double_6 = double_4;
		}
		long_2 = long_4 * long_4;
		if(1)
		{
			if(1)
			{
			}
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				v_swi_aberr_light(double_6,double_3,unsigned_int_2);

				short_2 = short_3 + short_2;
			}
		}
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				long_2 = long_2 * long_1;
			}
		}
		if(1)
		{
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				short_1 = short_4;
			}
		}
		if(1)
		{
			for(int looper_17=0; looper_17<1;looper_17++)
			{
				int_1 = int_1 + int_2;
			}
		}
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		long long_5 = 1;
		long_5 = long_3 + long_4;
	}
	if(1)
	{
		double_4 = double_7 + double_3;
		if(1)
		{
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					float float_4 = 1;
					unsigned_int_4 = v_if(long_2,int_7,unsigned_int_5,unsigned_int_1,unsigned_int_8,short_2,double_6);

					int_5 = v_swi_get_observer(double_2,int_3,long_1,double_3,char_5);

					float_4 = float_1;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_9 = unsigned_int_8;
		}
	}
	if(1)
	{
		long long_6 = 1;
		long_6 = long_4 * long_6;
	}
	for(int looper_21=0; looper_21<1;looper_21++)
	{
		int_5 = int_2 * int_3;
	}
	if(1)
	{
		long long_7 = 1;
		long_2 = long_7 + long_4;
		if(1)
		{
			unsigned_int_10 = v_app_pos_rest(char_1,short_3,double_8,double_6,double_3,char_5,-1 );

			short_4 = short_3 * short_3;
		}
		unsigned_int_5 = unsigned_int_10 + unsigned_int_8;
	}
	if(1)
	{
		char char_6 = 1;
		char_1 = char_6 * char_3;
	}
	return char_5;
}
int v_embofs_mosh( double parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_6 = 1;
	double double_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_6 = 1;
	int int_8 = 1;
	float float_9 = 1;
	long long_8 = 1;
	long long_9 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 447)
	{
		vul_var = vul_var + 1;
	}
	double_1 = double_1 + double_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	int_3 = int_2 * int_3;
	long_4 = long_2 + long_3;
	long_6 = long_5 + long_4;
	double_4 = double_2 + double_3;
	int_5 = int_3 + int_4;
	long_7 = long_6 * long_1;
	long_1 = long_5;
	long_3 = long_1 + long_4;
	int_3 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_2 + double_4;
	float_3 = float_1 * float_2;
	double_1 = double_1;
	double_1 = double_3 * double_3;
	float_3 = float_4 + float_5;
	char_1 = char_1 + char_2;
	char_3 = char_1 + char_2;
	char_3 = char_3 * char_3;
	int_7 = int_6 * int_2;
	int_5 = int_7;
	double_5 = double_1 * double_4;
	double_5 = double_1 + double_5;
	long_4 = long_3 + long_1;
	char_5 = char_4 + char_3;
	float_6 = float_1 * float_1;
	char_4 = char_1 * char_4;
	double_6 = double_3 + double_4;
	int_7 = int_3;
	float_1 = float_2 * float_2;
	float_7 = float_1 + float_5;
	float_3 = float_8 * float_4;
	short_2 = short_1 * short_2;
	char_4 = char_6 * char_2;
	double_5 = double_3 * double_5;
	int_8 = int_5 * int_8;
	float_6 = float_9;
	long_8 = long_9;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		free(vul_var);
		double_5 = double_4 + double_6;
	}
	double_2 = double_6;
}
float v_sscc_81( int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_1;
	float_2 = float_2 * float_3;
	double_3 = double_2;
	unsigned_int_1 = unsigned_int_2;
	double_4 = double_4 + double_3;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_1;
	long_4 = long_3 * long_3;
	int_2 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double_5 = double_3 + double_2;
		int_4 = int_1 + int_1;
		short_1 = short_1 + short_2;
		int_2 = int_5 + int_4;
		int_6 = int_6;
	}
	return float_1;
}
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double_1 = double_1;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_1;
	char_2 = char_3;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	char_2 = char_1;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_2;
	char_2 = char_1;
	char_3 = char_2 + char_2;
	long_3 = long_1 + long_1;
	double_1 = double_1 * double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		long long_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_4 = 1;
		float float_3 = 1;
		int int_6 = 1;
		char char_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int_2 = int_3;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			int_2 = int_2;
			int_5 = int_4 * int_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_2 = double_1 + double_1;
			}
			unsigned_int_2 = unsigned_int_3;
			int_4 = int_2;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_3 = double_1 * double_1;
			}
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			double_1 = double_3 * double_4;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			}
			long_3 = long_4 + long_4;
			float_2 = float_1 * float_2;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_3;
		float_2 = float_2;
		float_2 = v_sscc_81(int_3,double_2,int_2);

		int_3 = int_2 * int_2;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long_4 = long_2;
			short_1 = short_1;
			if(1)
			{
				unsigned_int_5 = unsigned_int_6 * unsigned_int_3;
				if(1)
				{
					char_3 = char_2 * char_4;
				}
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
				float_3 = float_3;
				if(1)
				{
					int_6 = int_1 * int_6;
				}
				int_3 = int_3 + int_5;
				if(1)
				{
					int_6 = int_1;
					double_4 = double_2;
					char_5 = char_2;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4;
					char_3 = char_4;
					unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
				}
			}
		}
		int_2 = int_2;
		double_4 = double_4;
		double_5 = double_5 * double_4;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_4 = int_3 + int_2;
			int_6 = int_3 * int_5;
		}
		int_3 = int_5 * int_5;
		float_2 = float_3 + float_1;
		short_2 = short_2 * short_1;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int_2 = int_2 + int_4;
			char_5 = char_2 + char_4;
		}
		unsigned_int_7 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_1;
		double_3 = double_5;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			int_4 = int_1 * int_5;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
		}
		float_1 = float_3;
	}
	int_8 = int_7 * int_7;
	unsigned_int_5 = unsigned_int_3;
	char_2 = char_3 + char_1;
	return int_4;
}
int v_swi_moshplan( double parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_8 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_1 * int_1;
	int_3 = int_2 + int_1;
	int_3 = int_3 + int_1;
	if(1)
	{
		double_3 = double_1 * double_2;
		int_4 = int_4;
	}
	if(1)
	{
		int_4 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		double_1 = double_3 * double_3;
	}
	char controller4vul_1476[3];
	fgets(controller4vul_1476 ,3 ,stdin);
	if( strcmp( controller4vul_1476, "o9") < 0)
	{
		char controller4vul_1477[2];
		fgets(controller4vul_1477 ,2 ,stdin);
		if( strcmp( controller4vul_1477, "@") > 0)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
			char controller4vul_1478[3];
			fgets(controller4vul_1478 ,3 ,stdin);
			if( strcmp( controller4vul_1478, "}F") > 0)
			{
				int_4 = v_embofs_mosh(double_2,double_4,uni_para);

				int_3 = int_4 * int_5;
			}
		}
	}
	if(1)
	{
		int int_6 = 1;
		if(1)
		{
			int_5 = int_6 * int_7;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "U") < 0)
		{
			double double_5 = 1;
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double_5 = double_4 + double_1;
			float_2 = float_2 * float_3;
			float_1 = float_3 * float_2;
			int_1 = int_6 + int_6;
			if(1)
			{
				int int_9 = 1;
				long_1 = long_2 * long_1;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
				int_9 = int_1 * int_8;
			}
			long_3 = long_1 + long_1;
			char_2 = char_1 + char_1;
			short_3 = short_1 + short_2;
			int_4 = int_7;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_7 = int_4 + int_2;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_5 = short_4 + short_4;
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long_1 = long_4 * long_2;
			}
		}
	}
	if(1)
	{
		long_1 = long_3;
	}
	if(1)
	{
		double double_6 = 1;
		if(1)
		{
			int_8 = int_4 + int_2;
		}
		if(1)
		{
			char char_3 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_11 = 1;
			short short_6 = 1;
			double_6 = double_4;
			int_1 = int_2 + int_7;
			char_3 = char_3 + char_2;
			if(1)
			{
				float float_4 = 1;
				int int_10 = 1;
				float float_5 = 1;
				float_2 = float_4 * float_3;
				int_10 = int_4 * int_1;
				float_5 = float_1 * float_2;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					long_1 = long_1 * long_4;
				}
			}
			long_3 = long_4 * long_3;
			unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
			long_2 = long_2;
			int_11 = int_7 + int_5;
			short_6 = short_4 + short_5;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double_3 = double_6 + double_6;
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double_1 = double_1 * double_6;
			}
		}
	}
	return int_2;
}
float v_swemoon( double parameter_1,long parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_1 = v_sweph(double_1,int_1,int_1,long_1,double_1,double_2,double_1,char_2);

	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2 * char_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_2 * long_2;
	}
	long_2 = long_3 * long_1;
	int_3 = int_2 + int_1;
	if(1)
	{
		int_2 = int_3 + int_3;
	}
	if(1)
	{
		int_3 = int_3 + int_1;
		if(1)
		{
		}
		if(1)
		{
			float float_2 = 1;
			char char_3 = 1;
			int_1 = int_1 + int_1;
			float_1 = float_2;
			char_3 = char_1 * char_1;
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_2 = short_1;
		}
	}
	return float_1;
}
char v_embofs( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return char_1;
}
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	long_2 = long_1 + long_1;
	short_1 = short_1 * short_2;
}
int v_pre_pecl( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_1;
	float_2 = float_1 + float_1;
	int_2 = int_1 + int_1;
	float_4 = float_3 + float_4;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_3 + short_1;
		char_1 = char_1 * char_2;
		long_1 = long_1;
		short_3 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		int_2 = int_2 + int_1;
		double_1 = double_1;
	}
	long_1 = long_2 * long_1;
	short_1 = short_4;
	long_3 = long_3 * long_4;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "E") > 0)
	{
		short_2 = short_2 * short_4;
	}
	float_3 = float_3 + float_2;
	double_4 = double_4;
	char_1 = char_3 + char_3;
	float_4 = float_1 * float_4;
	unsigned_int_3 = unsigned_int_4;
	return int_1;
}
long v_pre_pequ( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_1;
	char_1 = char_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		long long_1 = 1;
		short_3 = short_3;
		short_1 = short_1 + short_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_6;
		long_1 = long_1 + long_2;
	}
	int_2 = int_1 + int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int_1 = int_3 + int_3;
		short_1 = short_3 * short_2;
		float_5 = float_3 + float_4;
	}
	unsigned_int_7 = unsigned_int_5 + unsigned_int_5;
	int_5 = int_4 * int_4;
	double_2 = double_1;
	double_3 = double_3 * double_1;
	unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
	}
	return long_2;
}
float v_pre_pmat( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	float float_5 = 1;
	float_1 = float_1;
	double_3 = double_1 + double_2;
	float_2 = float_1 + float_2;
	v_swi_cross_prod(double_4,double_2,double_4);

	long_2 = long_1 * long_2;
	float_1 = float_3 + float_2;
	double_4 = double_3;
	float_3 = float_2 * float_2;
	float_1 = float_2 + float_1;
	int_1 = v_pre_pecl(double_3,double_5);

	int_3 = int_2 * int_1;
	double_2 = double_6;
	float_2 = float_1 * float_4;
	char_2 = char_1 + char_2;
	double_6 = double_7 * double_8;
	unsigned_int_1 = unsigned_int_1;
	double_6 = double_7 + double_6;
	int_1 = int_3;
	double_6 = double_3 + double_4;
	long_3 = v_pre_pequ(double_6,double_1);

	double_4 = double_8 * double_4;
	return float_5;
}
float v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	if(1)
	{
	}
	float_1 = v_pre_pmat(double_1,double_2);

	double_3 = double_4;
	short_1 = short_1 + short_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_1 + int_3;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_6 = double_5 * double_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return float_2;
}
float v_precess_2( double parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_8 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	short_4 = short_5;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_2;
		char_3 = char_1 * char_2;
		float_3 = float_1 + float_1;
	}
	if(1)
	{
		short_2 = short_3 + short_2;
		double_1 = double_1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int_1 = int_1 * int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		double_2 = double_2 + double_1;
	}
	int_1 = int_3 + int_2;
	if(1)
	{
		short_6 = short_1 * short_1;
	}
	if(1)
	{
		char_1 = char_1 * char_3;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	short_2 = short_7 * short_7;
	int_4 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	char_1 = char_3 + char_1;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	short_8 = short_5 * short_3;
	short_8 = short_2 * short_7;
	float_3 = float_1 + float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_2 * float_1;
	}
	int_1 = int_1 * int_2;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
	int_1 = int_3 + int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = int_4 + int_3;
	}
	if(1)
	{
		char_1 = char_3 + char_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	}
	double_4 = double_2 + double_3;
	short_7 = short_7 * short_8;
	double_2 = double_2 * double_3;
	long_1 = long_2 + long_2;
	float_6 = float_5 + float_3;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_7;
	int_5 = int_5 + int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_3 = float_5 * float_5;
	}
	if(1)
	{
		short short_9 = 1;
		short_1 = short_9 * short_6;
	}
	float_6 = float_7 + float_8;
	int_3 = int_6 + int_5;
	char_5 = char_1 * char_2;
	char_6 = char_1 * char_6;
	double_1 = v_swi_epsiln(double_3,int_1);

	int_3 = int_5 * int_4;
	if(1)
	{
		char_1 = char_4 * char_6;
	}
	if(1)
	{
		char char_7 = 1;
		char_7 = char_6 * char_7;
	}
	float_6 = float_3 + float_5;
	double_6 = double_1 + double_5;
	int_6 = int_2;
	double_4 = double_3 + double_5;
	short_5 = short_5 + short_7;
	if(1)
	{
		unsigned_int_2 = unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_2 * unsigned_int_6;
	}
	double_6 = double_2 + double_5;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_3 * int_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	char_5 = char_1 + char_6;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_1 = unsigned_int_9 + unsigned_int_8;
	}
	return float_9;
}
float v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	short short_6 = 1;
	float float_2 = 1;
	char_1 = char_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 + short_1;
		short_2 = short_2 + short_2;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		long long_1 = 1;
		short short_3 = 1;
		long_1 = long_1;
		short_5 = short_3 * short_4;
		int_1 = int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_2 + int_2;
		int_4 = int_2;
		int_4 = int_2;
		short_5 = short_5 + short_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_1 = int_3 * int_1;
		int_1 = int_1 * int_3;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
	}
	long_4 = long_2 * long_3;
	double_3 = double_2 * double_1;
	double_1 = double_2 + double_3;
	char_2 = char_2 * char_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_6 = short_1 + short_4;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_3 = 1;
		short short_7 = 1;
		int int_5 = 1;
		char_2 = char_2 + char_3;
		short_7 = short_6 + short_7;
		int_1 = int_1 + int_5;
	}
	if(1)
	{
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_6 = int_6 + int_6;
		unsigned_int_4 = unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	return float_2;
}
int v_swi_precess( double parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = v_precess_1(double_1,double_1,int_2,int_2);

	long_3 = long_1 * long_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_1 = v_precess_2(double_1,double_2,double_2,int_3,int_3);

		float_2 = float_3 * float_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		float_2 = float_2 + float_2;
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
	return int_4;
	float_5 = v_precess_3(double_2,double_1,int_5,int_3);

}
void v_swi_coortrf2( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_2;
	short_2 = short_1 * short_2;
	short_3 = short_2;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_1;
}
void v_swi_polcart( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_1 + char_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_2;
	float_1 = float_2;
	int_2 = int_3 * int_3;
	int_4 = int_4 * int_1;
	char_3 = char_2 * char_3;
}
char v_ecldat_equ2000( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	v_swi_polcart(double_1,double_2);

	v_swi_coortrf2(double_3,double_2,double_4,double_5);

	unsigned_int_1 = unsigned_int_1;
	int_1 = v_swi_precess(double_1,double_1,short_1,int_2);

	double_5 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return char_1;
}
unsigned int v_moon4()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	double_3 = double_1 * double_2;
	float_1 = v_mods3600(double_3);

	double_3 = double_1 * double_1;
	float_4 = float_2 * float_3;
	return unsigned_int_1;
}
unsigned int v_moon3()
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = v_chewm(float_1,int_1,int_2,int_3,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	int_1 = int_4 * int_1;
	long_1 = long_2 * long_3;
	long_3 = long_1 + long_2;
	long_2 = long_3 + long_2;
	return unsigned_int_1;
}
long v_moon2()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_5 = 1;
	double double_3 = 1;
	int int_6 = 1;
	short short_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_5 = 1;
	double double_4 = 1;
	char char_6 = 1;
	long long_6 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 + short_1;
	double_1 = double_2 * double_1;
	long_3 = long_1 * long_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_1;
	int_2 = int_1 + int_2;
	float_3 = float_1 + float_2;
	long_3 = long_4 * long_1;
	long_2 = long_4 * long_2;
	float_4 = float_1 * float_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	short_1 = short_3;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
	char_1 = char_1 + char_1;
	char_1 = char_2 * char_3;
	int_3 = int_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
	short_4 = short_2 * short_3;
	int_4 = int_1 * int_2;
	int_2 = int_3 * int_5;
	char_1 = char_2 * char_3;
	long_4 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_3;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
	float_3 = float_1 * float_4;
	char_2 = char_2 + char_3;
	int_1 = int_2 + int_5;
	float_2 = float_3 + float_4;
	short_1 = short_5;
	int_4 = int_3;
	double_2 = double_2 * double_3;
	double_3 = double_1 * double_1;
	int_6 = int_6 + int_5;
	short_3 = short_6 + short_1;
	long_5 = long_4;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_9;
	unsigned_int_9 = unsigned_int_8;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_10;
	int_1 = int_7 * int_8;
	int_6 = int_5 + int_1;
	char_3 = char_1 * char_4;
	int_5 = int_5;
	short_5 = short_5 * short_3;
	float_2 = float_5 + float_5;
	float_6 = float_3;
	char_1 = char_5 + char_2;
	char_5 = char_3 + char_2;
	double_3 = double_2 * double_2;
	double_3 = double_3 + double_1;
	short_4 = short_1 + short_4;
	char_5 = char_4 * char_5;
	double_3 = double_2 + double_1;
	char_4 = char_2 + char_5;
	double_1 = double_4 + double_4;
	double_3 = double_2 * double_2;
	double_3 = double_4 * double_2;
	char_6 = char_4 * char_2;
	short_2 = short_1 + short_1;
	int_8 = int_3 * int_5;
	long_6 = long_5 + long_2;
	return long_4;
}
float v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	double_3 = double_1 + double_2;
	double_4 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_8 = 1;
		double_4 = double_4 + double_5;
		float_1 = float_2;
		int_2 = int_1 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				int int_3 = 1;
				short short_1 = 1;
				int_3 = int_3 * int_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				}
				double_4 = double_5 + double_6;
				short_1 = short_1 + short_2;
				if(1)
				{
					double_3 = double_6 * double_1;
				}
				if(1)
				{
					int_3 = int_3 * int_1;
					int_3 = int_2 * int_3;
					float_1 = float_1;
				}
				if(1)
				{
					double_2 = double_6 * double_3;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
					long_2 = long_1 * long_1;
				}
			}
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		double_1 = double_3 * double_6;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		double_4 = double_7;
		char_1 = char_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_7;
		}
		long_2 = long_3 + long_1;
		long_2 = long_4 + long_5;
		short_3 = short_3 * short_3;
		long_5 = long_2 * long_5;
		short_2 = short_2 * short_4;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_7;
		float_3 = float_2 + float_3;
		unsigned_int_4 = unsigned_int_8 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		short_3 = short_4 + short_2;
		double_8 = double_1 * double_1;
		float_2 = float_1 * float_1;
	}
	return float_4;
}
char v_sscc( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	int_2 = int_3 + int_4;
	float_1 = float_1 * float_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_3;
	int_4 = int_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		double_2 = double_2;
		short_1 = short_2;
		short_3 = short_1 + short_2;
		double_2 = double_1;
		double_1 = double_2;
	}
	return char_1;
}
unsigned int v_moon1()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	char char_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_3 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_8 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_8 = 1;
	int int_9 = 1;
	short short_4 = 1;
	double double_9 = 1;
	int int_10 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	char char_7 = 1;
	short short_6 = 1;
	int int_11 = 1;
	double double_10 = 1;
	short short_7 = 1;
	char char_8 = 1;
	float float_9 = 1;
	float float_10 = 1;
	long long_8 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_15 = 1;
	char char_9 = 1;
	short short_8 = 1;
	int int_12 = 1;
	long long_9 = 1;
	double double_12 = 1;
	int int_13 = 1;
	int int_14 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	double_1 = double_1;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 + double_2;
		int_1 = int_2;
	}
	int_4 = int_1 * int_3;
	double_5 = double_4 + double_1;
	int_5 = int_3 * int_2;
	double_2 = double_2 + double_3;
	double_1 = double_4 + double_3;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_2 * double_2;
	double_2 = double_4 * double_4;
	int_1 = int_5 * int_2;
	double_5 = double_1 * double_6;
	double_4 = double_2 + double_2;
	double_6 = double_5 + double_1;
	double_1 = double_3 * double_3;
	long_3 = long_1 * long_2;
	float_3 = float_1 * float_2;
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_5 = int_3 + int_2;
	float_4 = float_3 * float_2;
	float_1 = float_3 * float_5;
	int_1 = int_5 * int_1;
	char_2 = char_2 + char_3;
	int_5 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	char_5 = char_3 * char_4;
	short_1 = short_1 + short_1;
	double_2 = double_6;
	short_1 = short_2;
	long_4 = long_3 + long_4;
	char_5 = char_5 + char_6;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	double_2 = double_2;
	int_7 = int_4 + int_6;
	char_6 = char_5;
	int_8 = int_7;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_5;
	char_3 = v_sscc(int_5,double_4,int_5);

	float_4 = float_5 + float_1;
	short_2 = short_2 * short_3;
	float_7 = float_6 + float_1;
	int_4 = int_4;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
	double_3 = double_2;
	float_8 = float_8 * float_6;
	float_6 = float_1 * float_4;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	long_2 = long_3 + long_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	char_5 = char_4 * char_4;
	double_1 = double_2 + double_7;
	double_7 = double_1 * double_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_8;
	unsigned_int_2 = unsigned_int_9 + unsigned_int_8;
	int_6 = int_8 + int_4;
	int_3 = int_1 * int_8;
	long_4 = long_5 * long_6;
	unsigned_int_8 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_8 = unsigned_int_6 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_9 + unsigned_int_6;
	short_3 = short_2 + short_3;
	float_1 = float_4 * float_6;
	double_3 = double_8;
	double_5 = double_8 + double_3;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
	int_6 = int_9;
	short_2 = short_1 + short_1;
	short_1 = short_4 * short_4;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_5;
	double_6 = double_2 * double_9;
	int_1 = int_3;
	double_4 = double_6 * double_9;
	int_5 = int_4 * int_10;
	double_8 = double_8 + double_5;
	long_2 = long_5 + long_7;
	int_2 = int_8 * int_10;
	long_7 = long_5 * long_7;
	unsigned_int_3 = unsigned_int_9 * unsigned_int_7;
	unsigned_int_9 = unsigned_int_4 * unsigned_int_8;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
	long_6 = long_3 * long_7;
	short_1 = short_4 * short_2;
	double_9 = double_5 * double_8;
	unsigned_int_2 = unsigned_int_10 + unsigned_int_3;
	char_2 = char_3 * char_6;
	int_8 = int_4;
	short_2 = short_2;
	float_6 = float_6;
	unsigned_int_9 = unsigned_int_11 * unsigned_int_2;
	double_4 = double_4 + double_2;
	unsigned_int_11 = unsigned_int_2 * unsigned_int_7;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
	int_3 = int_6 + int_3;
	short_2 = short_2 * short_5;
	unsigned_int_13 = unsigned_int_12 + unsigned_int_13;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_10;
	unsigned_int_11 = unsigned_int_5 * unsigned_int_14;
	int_1 = int_8 + int_10;
	unsigned_int_6 = unsigned_int_13 * unsigned_int_2;
	long_4 = long_7 * long_5;
	unsigned_int_10 = unsigned_int_4 * unsigned_int_7;
	float_5 = float_8;
	char_7 = char_1 * char_2;
	short_4 = short_3 * short_6;
	float_4 = float_7 + float_7;
	float_6 = float_8;
	int_1 = int_3 * int_4;
	int_3 = int_5 * int_9;
	double_4 = double_5 * double_1;
	int_5 = int_6 * int_9;
	int_5 = int_11;
	unsigned_int_7 = unsigned_int_9 * unsigned_int_10;
	short_5 = short_1 * short_3;
	double_1 = double_7 * double_10;
	short_4 = short_4 * short_7;
	int_2 = int_9 + int_7;
	float_4 = float_3 * float_4;
	char_1 = char_8;
	int_6 = int_4 * int_6;
	double_7 = double_5 + double_7;
	unsigned_int_2 = unsigned_int_10 + unsigned_int_6;
	short_6 = short_2;
	long_2 = long_4;
	float_9 = float_10;
	unsigned_int_9 = unsigned_int_4 + unsigned_int_1;
	int_9 = int_6;
	double_9 = double_9;
	char_3 = char_4;
	double_9 = double_9 * double_7;
	long_4 = long_1 + long_8;
	float_10 = float_7 + float_9;
	float_4 = float_4 + float_9;
	char_1 = char_4 * char_8;
	double_3 = double_10 + double_6;
	unsigned_int_5 = unsigned_int_9 + unsigned_int_3;
	double_11 = double_10;
	double_2 = double_4 + double_6;
	char_2 = char_8 + char_1;
	float_2 = float_3;
	unsigned_int_11 = unsigned_int_15 + unsigned_int_7;
	int_11 = int_1 * int_8;
	double_6 = double_5 + double_6;
	double_10 = double_3 + double_4;
	char_9 = char_4 * char_1;
	short_8 = short_2 + short_1;
	double_6 = double_5;
	short_4 = short_2 + short_8;
	float_5 = v_chewm(float_7,int_3,int_12,int_12,double_5);

	int_9 = int_11 + int_6;
	long_9 = long_9 + long_4;
	double_12 = double_9 + double_7;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_12;
	long_6 = long_7 + long_4;
	short_3 = short_3;
	unsigned_int_7 = unsigned_int_10 * unsigned_int_9;
	int_4 = int_13;
	int_14 = int_3 + int_13;
	double_9 = double_4 * double_3;
	return unsigned_int_13;
}
void v_mean_elements_pl()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	double_3 = double_2 * double_3;
	double_3 = double_1 + double_4;
	int_3 = int_1;
	float_1 = float_1 + float_1;
	float_1 = v_mods3600(double_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	double_3 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
}
float v_mods3600( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_2;
	float_3 = float_1 * float_2;
	long_2 = long_2 * long_2;
	double_1 = double_1 + double_2;
	return float_1;
}
long v_mean_elements()
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	return long_1;
	float_1 = v_mods3600(double_1);

}
int v_swi_moshmoon2( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = v_mean_elements();

	v_mean_elements_pl();

	short_1 = short_1 + short_1;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_2;
	int_3 = int_1 + int_1;
	int_1 = int_3 * int_4;
	unsigned_int_1 = v_moon1();

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_2 * short_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_5;
	long_2 = v_moon2();

	double_3 = double_1 + double_3;
	float_2 = float_1 * float_1;
	unsigned_int_3 = v_moon4();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_3;
	unsigned_int_1 = v_moon3();

}
int v_swi_moshmoon( double parameter_1,long parameter_2,double parameter_3,char parameter_4)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_swi_moshmoon2(double_1,double_1);

	float_2 = float_1 * float_1;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short_1 = short_2 + short_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				int_1 = int_2 * int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			}
		}
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		float_1 = float_1 * float_1;
		char_2 = char_1 * char_2;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	short_1 = short_3 + short_2;
	int_4 = int_1 + int_3;
	int_1 = int_4 + int_2;
	double_3 = double_3;
	long_1 = long_2 * long_1;
	double_2 = double_4 + double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float_2 = float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			char_1 = v_ecldat_equ2000(double_6,double_5);

			unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
		}
		short_2 = short_3;
		short_1 = short_3 + short_1;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_7 = 1;
			double_6 = double_7;
		}
	}
	return int_2;
}
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_2;
	short_2 = short_1 + short_1;
	long_3 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		float float_3 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1 + double_2;
		int_3 = int_4;
		float_3 = float_1 + float_1;
		char_1 = char_1 * char_1;
		double_1 = double_2 + double_2;
		double_2 = double_1 * double_3;
		double_1 = double_4 * double_4;
	}
	return double_5;
}
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short_2 = short_1 * short_1;
	long_1 = long_1 * long_1;
	char_3 = char_1 * char_2;
	short_3 = short_3 * short_1;
	short_3 = short_4 + short_2;
	long_1 = long_2 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
		char_3 = char_3 + char_1;
		char_1 = char_2 + char_2;
	}
	return double_1;
}
char v_rot_back( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = float_1;
	char_1 = char_1;
	unsigned_int_1 = v_if(long_1,int_1,unsigned_int_1,unsigned_int_2,unsigned_int_2,short_1,double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_2 = short_1 + short_2;
	int_1 = int_1;
	double_2 = double_1 + double_1;
	double_1 = double_1 + double_1;
	double_1 = double_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_2;
	char_2 = char_2 * char_3;
	int_2 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	int_3 = int_4 * int_4;
	long_2 = long_2 + long_1;
	int_3 = int_2 * int_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") > 0)
	{
		double_3 = double_2 + double_4;
		double_1 = double_4;
		double_4 = double_2 * double_2;
		int_1 = int_3;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_5;
		int_1 = int_2 + int_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 * float_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		int int_5 = 1;
		long_1 = long_3;
		int_4 = int_4 * int_1;
		int_4 = int_1 * int_5;
		int_1 = int_3 + int_2;
		double_4 = double_2 + double_2;
		float_2 = float_1 * float_2;
		double_2 = double_2 * double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_4;
			double_3 = double_2 + double_2;
		}
	}
	char_5 = char_3 * char_2;
	int_1 = int_6 * int_3;
	int_3 = int_2;
	double_3 = double_5 + double_5;
	int_6 = int_1;
	double_2 = double_4;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 * short_3;
	int_6 = int_3 + int_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_4 = 1;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
		int_1 = int_1 + int_6;
		int_2 = int_1 * int_1;
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_4 * short_4;
		}
		unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		long_2 = long_4 * long_4;
		long_1 = long_3;
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "{*") > 0)
		{
			unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
			long_4 = long_4 + long_2;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_8 = 1;
		long_3 = long_1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_8;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
	}
	return char_1;
}
unsigned int v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	short short_6 = 1;
	int int_7 = 1;
	char_2 = char_1 + char_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_2;
	char_1 = char_3;
	char_2 = char_3 * char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	double_2 = double_4 * double_5;
	unsigned_int_4 = unsigned_int_5;
	int_1 = int_2;
	double_6 = double_5 + double_3;
	float_3 = float_1 + float_2;
	char_5 = char_3 + char_1;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_6;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2;
	float_2 = float_3 * float_3;
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	double_2 = double_3 + double_4;
	if(1)
	{
		char_6 = char_3;
	}
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_7 = 1;
		double double_8 = 1;
		double_4 = double_2 + double_7;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
		if(1)
		{
			float_3 = float_2 + float_1;
		}
		if(1)
		{
			int_2 = int_4 + int_2;
			short_1 = v_memset(int_4,double_2,float_2);

			float_2 = float_2 * float_1;
			if(1)
			{
				double_4 = double_5 + double_2;
			}
			double_7 = double_1 * double_6;
			float_2 = float_1 * float_1;
			unsigned_int_4 = unsigned_int_3;
			long_3 = long_3 + long_1;
			short_2 = short_2;
			unsigned_int_4 = v_do_fread(int_2,int_3,int_5,short_3,char_5,int_4,int_3,int_3,char_3);

			long_3 = long_4 * long_3;
			double_1 = double_5 + double_6;
		}
		if(1)
		{
			short short_4 = 1;
			short_1 = short_3 * short_3;
			float_2 = float_4;
			double_6 = double_8 * double_4;
			short_3 = short_4 * short_4;
			double_1 = double_6 + double_7;
			float_4 = float_1 + float_3;
		}
		if(1)
		{
			if(1)
			{
				double_5 = double_6 * double_1;
				if(1)
				{
					char_1 = char_3 + char_2;
				}
			}
			unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
			double_6 = double_2 * double_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float_4 = float_5 * float_3;
			}
			if(1)
			{
				double double_9 = 1;
				double_6 = double_9 + double_6;
				double_8 = double_4 + double_8;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
				if(1)
				{
					double_6 = double_2 * double_6;
				}
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						unsigned_int_6 = unsigned_int_6;
					}
					if(1)
					{
						int_3 = int_6 + int_2;
					}
				}
			}
			if(1)
			{
				short short_5 = 1;
				short_2 = short_5 * short_2;
				char_6 = char_4 + char_4;
				unsigned_int_2 = unsigned_int_6;
				if(1)
				{
					double double_10 = 1;
					double_10 = double_3;
				}
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						if(1)
						{
							short_1 = short_2 * short_1;
						}
						if(1)
						{
							unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
						}
					}
				}
			}
			if(1)
			{
				float_5 = v_free_planets();

				short_3 = short_3 + short_6;
				double_3 = double_5 + double_4;
				unsigned_int_1 = unsigned_int_6;
				if(1)
				{
					int_7 = int_4 * int_6;
				}
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						if(1)
						{
							int int_8 = 1;
							int int_9 = 1;
							int_9 = int_1 * int_8;
						}
						if(1)
						{
							long_3 = long_3 + long_2;
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
			long_1 = long_3;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				short_1 = short_2 + short_6;
			}
		}
	}
	int_7 = int_1 + int_4;
	float_4 = float_5;
	long_1 = long_4 + long_1;
	int_2 = int_7 * int_6;
	return unsigned_int_7;
}
double v_init_crc32()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_1 * double_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return double_1;
}
int v_swi_crc32( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") < 0)
	{
		int_2 = int_1 + int_1;
	}
	double_4 = v_init_crc32();

	long_4 = long_2 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_2 = int_1 + int_3;
	}
	return int_4;
}
unsigned int v_do_fread(int parameter_2,int parameter_3,int parameter_4,short parameter_5,char parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_1 * char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "d") > 0)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					short_1 = short_1;
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
				double double_2 = 1;
				double_2 = double_1 + double_2;
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float_3 = float_1 * float_2;
				}
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int int_3 = 1;
					int int_4 = 1;
					short_2 = v_memset(int_2,double_1,float_3);

					int_4 = int_3 + int_4;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_1;
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
					}
				}
				long_1 = long_2 + long_1;
			}
		}
	}
	return unsigned_int_2;
}
long v_strncpy( double parameter_1,double parameter_2,short parameter_3)
{
	long long_1 = 1;
	return long_1;
}
long v_read_const( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	long_1 = v_strncpy(double_2,double_2,short_1);

	short_3 = short_2 + short_1;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_3 * float_3;
	}
	double_1 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = v_do_fread(int_1,int_2,int_1,short_2,char_1,int_1,int_1,int_3,char_1);

		int_1 = v_swi_crc32(unsigned_int_3,int_1);

		int_1 = int_1 * int_1;
	}
	return long_1;
	float_5 = v_free_planets();

}
long v_swi_strcpy( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	int_1 = int_1 * int_1;
	int_1 = int_1;
	return long_1;
}
double v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	double_1 = double_1;
	double_2 = double_2 + double_3;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		char_1 = char_2 + char_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	char_2 = char_3 + char_4;
	float_1 = float_3;
	char_2 = char_1 + char_1;
	return double_3;
}
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = v_swe_revjul(double_2,int_1,int_2,int_3,int_2,double_2);

	char_1 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
char v_sweph( double parameter_1,int parameter_2,int parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_9 = 1;
	int int_9 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_10 = 1;
	int int_10 = 1;
	int int_11 = 1;
	short short_5 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_swi_fopen(int_1,char_1,char_2,char_3);

	char_4 = char_2 + char_1;
	float_3 = float_3 * float_3;
	float_3 = float_1 + float_3;
	float_4 = float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3;
	double_1 = v_swi_edcheb(double_2,double_1,int_4);

	float_4 = float_4 + float_1;
	long_1 = v_swi_strcpy(char_2,char_3);

	int_5 = int_4 + int_5;
	short_2 = short_1 * short_1;
	if(1)
	{
		char_4 = v_rot_back(int_6);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	char_1 = char_3 + char_5;
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		short_1 = short_1 * short_3;
	}
	int_8 = int_7 * int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			long_3 = long_2 * long_3;
			char_1 = char_5;
			if(1)
			{
				short_1 = short_1 + short_2;
			}
			long_3 = v_read_const(int_2,char_2);

			char_1 = char_5 * char_3;
			if(1)
			{
				int_1 = int_3;
			}
			short_2 = short_2 * short_2;
		}
	}
	if(1)
	{
		char_7 = char_5 * char_6;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			char char_8 = 1;
			char_1 = char_7 * char_8;
			char_5 = char_6 + char_9;
		}
		if(1)
		{
			int_7 = int_6 * int_9;
		}
		double_3 = double_3 * double_1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		if(1)
		{
			if(1)
			{
				unsigned_int_7 = unsigned_int_3;
				unsigned_int_6 = unsigned_int_4;
				if(1)
				{
					float_3 = float_4 * float_1;
					int_9 = int_4 + int_1;
				}
				int_2 = int_1 * int_3;
				char_6 = char_2 + char_1;
				if(1)
				{
					double_6 = double_4 * double_5;
					int_1 = int_5 + int_9;
				}
			}
		}
		if(1)
		{
			long_4 = long_4 + long_4;
		}
		char_1 = char_3 * char_3;
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
				short short_4 = 1;
				short_3 = short_4 + short_2;
			}
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_7 + unsigned_int_2;
			}
			if(1)
			{
				double_5 = double_3 * double_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
		}
		if(1)
		{
			char_2 = char_6 + char_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_9;
		}
	}
	unsigned_int_1 = unsigned_int_10 * unsigned_int_3;
	char_7 = char_10;
	double_3 = double_1 * double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_6 = unsigned_int_5;
		if(1)
		{
			long_1 = long_2;
		}
		if(1)
		{
			double_2 = double_2 + double_6;
		}
	}
	if(1)
	{
		v_swi_gen_filename(double_4,int_10,char_4);

		double_1 = v_swi_echeb(double_1,double_4,int_9);

		double_5 = double_2 * double_4;
		int_2 = int_6 * int_11;
		double_6 = double_3 + double_1;
		if(1)
		{
		}
		int_1 = int_4 * int_5;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_5 = short_3 * short_1;
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				unsigned_int_9 = unsigned_int_7 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		short short_7 = 1;
		if(1)
		{
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					short_5 = short_2 * short_5;
				}
				if(1)
				{
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						int_1 = int_11 + int_2;
					}
				}
			}
		}
		if(1)
		{
			short short_6 = 1;
			double_6 = double_3 + double_3;
			short_6 = short_6 + short_7;
			char controller_38[3];
			fgets(controller_38 ,3 ,stdin);
			if( strcmp( controller_38, ".&") < 0)
			{
				long long_5 = 1;
				long_5 = long_2 * long_3;
			}
			if(1)
			{
				long long_6 = 1;
				long long_7 = 1;
				long_4 = long_6 * long_7;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				short_1 = short_7;
			}
		}
	}
	return char_9;
	unsigned_int_9 = v_get_new_segment(double_5,int_5,int_3,char_9);

}
unsigned int v_sweplan( double parameter_1,int parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	float float_3 = 1;
	long long_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	char char_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_1;
	long_3 = long_1 * long_2;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 * char_1;
	long_4 = long_1 + long_4;
	float_1 = float_3 + float_1;
	if(1)
	{
		long_5 = long_3 * long_1;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_3 = int_3 * int_4;
			}
		}
		if(1)
		{
			int_1 = int_4 + int_2;
		}
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		float_3 = float_3;
	}
	if(1)
	{
		long_4 = long_6;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = v_sweph(double_2,int_1,int_1,long_1,double_3,double_1,double_2,char_1);

		double_4 = double_1 + double_2;
		char_3 = char_2 * char_3;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		long_5 = long_6 + long_1;
	}
	if(1)
	{
		float float_4 = 1;
		long_5 = long_4 * long_1;
		float_5 = float_1 + float_4;
		char_1 = char_1 * char_4;
		double_6 = double_3 + double_5;
	}
	short_1 = short_3 + short_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_4 = double_3 + double_7;
			}
		}
		if(1)
		{
			int_4 = int_4;
			if(1)
			{
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_1 = short_2 * short_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short_5 = short_4 + short_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
					char char_5 = 1;
					char char_6 = 1;
					char_6 = char_5 * char_4;
				}
				int_2 = int_3 + int_3;
				if(1)
				{
				}
			}
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int_7 = int_5 * int_6;
			}
		}
	}
	if(1)
	{
		short_5 = short_4 + short_5;
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				float_5 = float_5 * float_5;
			}
		}
		if(1)
		{
			int_1 = int_5;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			if(1)
			{
				double_4 = double_7 * double_4;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				char char_7 = 1;
				char_2 = char_4 + char_7;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_1 = int_7 + int_6;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			short short_6 = 1;
			short_1 = short_2 * short_6;
		}
	}
	if(1)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			float float_6 = 1;
			float_5 = float_6;
		}
	}
	if(1)
	{
		double_5 = double_6 + double_7;
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				int_6 = v_swi_moshmoon(double_6,long_4,double_6,char_1);

				long_2 = long_2 + long_2;
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4;
			if(1)
			{
			}
			if(1)
			{
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					int_5 = int_2 * int_5;
				}
				if(1)
				{
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						unsigned int unsigned_int_7 = 1;
						unsigned_int_2 = unsigned_int_5 + unsigned_int_7;
					}
				}
			}
		}
	}
	if(1)
	{
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			char_8 = v_embofs(double_1,double_5);

			double_5 = double_1 * double_1;
		}
	}
	return unsigned_int_8;
}
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long_1 = v_state(double_1,unsigned_int_1,int_1,double_2,double_2,double_3,char_1);

	float_3 = float_1 * float_2;
	double_4 = double_4 * double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
	}
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 * char_2;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_2 + int_3;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_5 = double_5 * double_3;
			if(1)
			{
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
			}
		}
		if(1)
		{
			if(1)
			{
				long long_2 = 1;
				long_2 = long_2 + long_2;
			}
		}
	}
	if(1)
	{
		long_3 = long_4;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_1;
	}
	if(1)
	{
		int_1 = int_2 + int_4;
	}
	if(1)
	{
		int_4 = int_4 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		float_3 = float_4 + float_1;
	}
	if(1)
	{
		long_3 = long_3 * long_4;
	}
	if(1)
	{
		double double_6 = 1;
		double_1 = double_6 + double_4;
	}
	if(1)
	{
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_2 = float_3 * float_5;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_4 = int_2 * int_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			float_2 = float_2 + float_5;
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			long long_5 = 1;
			long_5 = long_3 + long_3;
		}
	}
	if(1)
	{
		char controller_25[2];
		fgets(controller_25 ,2 ,stdin);
		if( strcmp( controller_25, "u") < 0)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				int_3 = int_2 + int_2;
			}
		}
		if(1)
		{
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				float_4 = float_1 + float_4;
			}
		}
	}
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	return int_2;
}
double v_swi_get_tid_acc( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,short parameter_4,double parameter_5,char parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_5 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_9 = 1;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_2;
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			if(1)
			{
				short short_1 = 1;
				short_3 = short_1 + short_2;
				float_4 = float_3 + float_3;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					short_4 = short_1 + short_2;
				}
			}
		}
		if(1)
		{
			float_3 = float_2 * float_2;
			if(1)
			{
				double_2 = double_2;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			}
			if(1)
			{
				int_3 = int_3;
			}
			if(1)
			{
				int_2 = int_4;
			}
		}
	}
	int_1 = int_4;
	long_4 = long_3 + long_4;
	int_4 = v_swe_calc(double_1,int_3,float_4,double_3,char_1,-1 );

	double_2 = double_2 * double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	float_4 = float_3 + float_4;
	double_4 = double_2 * double_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	double_5 = double_2 * double_2;
	double_6 = double_6;
	double_8 = double_7 * double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_6 = double_9;
	int_1 = int_5 * int_4;
	double_7 = double_10 + double_9;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_7 = unsigned_int_7;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_2 + long_5;
	short_2 = short_3 + short_4;
	float_1 = float_1 * float_2;
	char_1 = char_2;
	unsigned_int_9 = unsigned_int_5 * unsigned_int_4;
	long_1 = long_3;
	return double_1;
}
char v_swi_set_tid_acc( double parameter_1,long parameter_2,long parameter_3,char parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double_1 = v_swi_get_tid_acc(double_1,unsigned_int_1,unsigned_int_2,short_1,double_2,char_1);

	long_1 = long_1 * long_1;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_3;
			short_2 = short_1;
			short_4 = short_2 * short_3;
			long_1 = long_2 + long_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_1;
			char_3 = char_3;
		}
	}
	return char_2;
}
void v_swi_get_jpl_denum()
{
}
char v_interp( double parameter_1,double parameter_2,double parameter_3,float parameter_4,double parameter_5,char parameter_6,unsigned int parameter_7,double parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	short short_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_2;
	double_1 = double_2;
	double_3 = double_3 + double_4;
	short_3 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	long_2 = long_1 * long_1;
	long_1 = long_3 * long_4;
	int_4 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	float_3 = float_1 + float_2;
	float_3 = float_4 * float_5;
	long_1 = long_2 + long_2;
	int_6 = int_5 + int_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		int_2 = int_3 + int_7;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "m") < 0)
	{
		int_5 = int_7 * int_6;
	}
	int_8 = int_3;
	unsigned_int_3 = unsigned_int_6;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
		int_2 = int_4;
		double_4 = double_4 + double_5;
		long_2 = long_1 * long_4;
		int_4 = int_3 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_1 = short_3;
		}
		unsigned_int_9 = unsigned_int_2 + unsigned_int_8;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_8 = int_1 * int_6;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_4 = long_4 * long_3;
		}
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_9;
	float_1 = float_4 + float_6;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "b7") > 0)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_1 = float_2 + float_1;
		}
		unsigned_int_9 = unsigned_int_3 * unsigned_int_6;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_4 = 1;
		short_4 = short_5;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			char_1 = char_4 + char_5;
		}
		char_4 = char_6 + char_6;
	}
	if(1)
	{
	}
	short_3 = short_3 + short_1;
	double_1 = double_5 + double_3;
	if(1)
	{
		char_5 = char_2 * char_4;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		float float_7 = 1;
		short_5 = short_1 + short_5;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			char_1 = char_2 * char_5;
		}
		float_4 = float_7 + float_7;
	}
	if(1)
	{
	}
	long_4 = long_2 * long_2;
	long_2 = long_1;
	if(1)
	{
		double double_6 = 1;
		double_4 = double_1 + double_6;
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			double double_7 = 1;
			double double_8 = 1;
			double_3 = double_7 + double_8;
		}
	}
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		char_2 = char_6 * char_6;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			short_1 = short_2 * short_1;
		}
		char_5 = char_3 + char_2;
	}
	return char_1;
}
float v_reorder( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_2;
	short_1 = short_1 * short_2;
	float_2 = float_1 * float_2;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return float_1;
}
unsigned int v_if( long parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5,short parameter_6,double parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_1;
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
	return int_2;
}
double v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_8 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
	int_5 = int_4 * int_5;
	if(1)
	{
		int_6 = int_7;
	}
	if(1)
	{
		int_7 = int_6 + int_7;
	}
	short_1 = short_1 + short_1;
	int_3 = v_swi_cutstr(char_1,char_1,char_1,int_8);

	char_3 = char_2 * char_2;
	int_4 = int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_7 * int_8;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			int_8 = int_1;
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char char_6 = 1;
				char_6 = char_4 * char_5;
			}
		}
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 + long_2;
			}
		}
		double_1 = double_2 * double_1;
		double_3 = double_3;
		if(1)
		{
		}
	}
	float_1 = float_2;
	int_8 = int_4 * int_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_2;
	}
	return double_2;
}
int v_fsizer( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	int int_8 = 1;
	double_1 = double_2;
	char_1 = char_1 + char_1;
	int_3 = int_1 + int_2;
	char_1 = char_2 * char_2;
	double_1 = double_3 + double_2;
	long_1 = long_1 + long_1;
	char_2 = char_2;
	if(1)
	{
	}
	unsigned_int_1 = v_if(long_2,int_3,unsigned_int_1,unsigned_int_2,unsigned_int_3,short_1,double_4);

	float_1 = float_1 + float_1;
	short_3 = short_2 + short_1;
	double_4 = double_5 + double_3;
	if(1)
	{
		short_1 = short_2 + short_1;
	}
	if(1)
	{
		int_4 = int_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = v_swi_fopen(int_1,char_1,char_3,char_4);

		double_1 = double_2 + double_5;
	}
	if(1)
	{
		int_5 = int_3 * int_1;
	}
	if(1)
	{
		if(1)
		{
			short_3 = short_3 + short_3;
			if(1)
			{
				int_6 = int_4;
			}
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		double double_6 = 1;
		double_5 = double_6 * double_2;
	}
	short_4 = short_2 + short_3;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		long_3 = long_3 + long_3;
	}
	double_2 = double_3 + double_7;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_7 * int_3;
	}
	unsigned_int_8 = unsigned_int_1 + unsigned_int_7;
	short_1 = short_1 * short_4;
	int_3 = int_3 + int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 * float_1;
			unsigned_int_5 = unsigned_int_2;
		}
	}
	if(1)
	{
		double double_8 = 1;
		double_1 = double_4 + double_8;
	}
	if(1)
	{
		int_4 = int_7 * int_1;
	}
	unsigned_int_3 = unsigned_int_6 + unsigned_int_5;
	if(1)
	{
		double double_9 = 1;
		double_3 = double_9 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		short short_5 = 1;
		int int_9 = 1;
		double double_10 = 1;
		char_4 = char_4 + char_1;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_9;
		float_1 = v_reorder(char_5,int_8,int_6);

		unsigned_int_1 = unsigned_int_1;
		short_4 = short_5 * short_3;
		char_2 = char_4 + char_3;
		int_1 = int_9 * int_7;
		double_10 = double_4 + double_3;
		int_2 = int_8 + int_6;
		if(1)
		{
			short_2 = short_4 + short_1;
		}
		if(1)
		{
			if(1)
			{
				int_9 = int_8 + int_6;
			}
		}
	}
	return int_5;
}
long v_state( double parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
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
	char char_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_5 = 1;
	long long_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int_2 = int_1 * int_2;
	int_3 = int_2;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_2;
	long_3 = long_1 * long_2;
	short_3 = short_1 + short_2;
	long_2 = long_2 * long_2;
	int_1 = int_1 * int_3;
	char_1 = char_1;
	long_5 = long_2 * long_4;
	float_3 = v_reorder(char_2,int_3,int_3);

	short_1 = short_4;
	double_2 = double_1 + double_2;
	if(1)
	{
		short short_5 = 1;
		char char_5 = 1;
		short_5 = short_4 * short_4;
		double_1 = double_1 + double_2;
		if(1)
		{
		}
		char_4 = char_3 + char_2;
		char_2 = char_5 * char_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_5 = char_5;
		double_1 = double_1;
		if(1)
		{
			double_2 = double_3 + double_3;
		}
		double_4 = double_3 + double_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		long_1 = long_4;
		if(1)
		{
			int_2 = v_fsizer(char_1);

			float_2 = float_2 * float_3;
		}
		int_1 = int_2;
		if(1)
		{
			char char_6 = 1;
			char_7 = char_4 + char_6;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			double_3 = double_3 + double_2;
		}
		double_1 = double_3 + double_1;
		if(1)
		{
			double_1 = double_5 + double_1;
		}
		float_2 = float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
		short_3 = short_4 * short_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
		if(1)
		{
			double_4 = double_2 * double_5;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_2 = long_5 * long_3;
		}
		float_2 = float_2 + float_2;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
		char_3 = v_interp(double_5,double_5,double_3,float_4,double_1,char_2,unsigned_int_6,double_5);

		long_1 = long_4 * long_2;
		int_3 = int_1 * int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_6 = 1;
			double double_7 = 1;
			unsigned_int_3 = unsigned_int_2;
			if(1)
			{
				int_2 = int_2 + int_2;
			}
			double_4 = double_6 + double_7;
		}
		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		int_4 = int_3 + int_3;
		int_3 = int_3 + int_5;
		if(1)
		{
			if(1)
			{
				long_4 = long_5 * long_4;
				if(1)
				{
					long_3 = long_4 * long_2;
				}
			}
		}
		short_7 = short_6 + short_5;
		int_1 = int_1 + int_4;
		if(1)
		{
			float_1 = float_5 + float_2;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
		long_1 = long_6 + long_3;
		if(1)
		{
			float_4 = float_2;
		}
		if(1)
		{
			if(1)
			{
				int_4 = int_3 * int_1;
			}
		}
	}
	if(1)
	{
	}
	double_5 = double_4 * double_1;
	double_8 = double_2 + double_5;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	short_3 = short_2 * short_2;
	if(1)
	{
		if(1)
		{
			char_1 = char_1 * char_4;
		}
	}
	unsigned_int_3 = unsigned_int_7 * unsigned_int_8;
	if(1)
	{
		short_7 = short_6 * short_1;
	}
	short_6 = short_1 + short_1;
	if(1)
	{
		int_4 = int_5 * int_6;
		if(1)
		{
			if(1)
			{
				int int_7 = 1;
				int_7 = int_1;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				if(1)
				{
					long_2 = long_3 + long_6;
				}
			}
			if(1)
			{
				int_4 = int_1 * int_3;
			}
		}
	}
	if(1)
	{
		int_3 = int_1 + int_3;
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		double double_9 = 1;
		float float_7 = 1;
		float float_8 = 1;
		double_4 = double_9 * double_5;
		float_8 = float_6 + float_7;
	}
	unsigned_int_6 = v_if(long_4,int_1,unsigned_int_7,unsigned_int_3,unsigned_int_8,short_4,double_4);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_9;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_6 + int_6;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			float_5 = float_4 + float_6;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					short_2 = short_4 + short_2;
				}
				if(1)
				{
					long_1 = long_1 * long_3;
				}
			}
		}
	}
	if(1)
	{
		char char_8 = 1;
		char_1 = char_8 * char_8;
	}
	if(1)
	{
		char_4 = char_3 + char_7;
	}
	return long_1;
}
int v_read_const_jpl( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	long_1 = long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = v_state(double_1,unsigned_int_1,int_1,double_1,double_2,double_2,char_1);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		int_2 = int_1 * int_1;
		char_1 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_3;
		short_2 = short_1 * short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			long long_3 = 1;
			int int_4 = 1;
			char char_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int_3 = int_2 + int_1;
			long_1 = long_3 * long_3;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			}
			int_2 = int_1 + int_4;
			char_1 = char_1 + char_2;
			double_1 = double_3 * double_4;
			float_1 = float_2;
			double_5 = double_4 + double_3;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
		}
		long_4 = long_4 * long_1;
	}
	return int_1;
}
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
	}
	int_1 = int_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		v_swi_close_jpl_file();

		int_4 = int_3 + int_1;
		short_2 = short_1 + short_2;
		short_2 = short_2 + short_3;
		double_1 = double_2 + double_2;
		int_4 = v_read_const_jpl(double_1,char_4);

		float_2 = float_1 * float_2;
	}
	return int_5;
}
char v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double_1 = double_1;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		v_swi_get_jpl_denum();

		char_2 = v_swi_set_tid_acc(double_1,long_1,long_2,char_3);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			int_2 = int_1 * int_3;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				float_1 = float_1 * float_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1;
				}
				if(1)
				{
					long_3 = long_2 * long_2;
				}
				if(1)
				{
					short_2 = short_1 * short_1;
				}
				char controller_7[2];
				fgets(controller_7 ,2 ,stdin);
				if( strcmp( controller_7, "9") == 0)
				{
					char_1 = char_3 * char_2;
				}
				short_1 = short_1 + short_2;
			}
		}
	}
	if(1)
	{
		long long_4 = 1;
		int_4 = int_2 * int_3;
		double_1 = double_1 * double_1;
		long_2 = long_4 * long_3;
	}
	return char_3;
	int_4 = v_swi_open_jpl_file(double_1,char_1,char_3,char_2);

}
double v_jplplan( double parameter_1,int parameter_2,long parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double double_5 = 1;
	long long_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	v_swi_close_jpl_file();

	unsigned_int_1 = unsigned_int_1;
	int_1 = v_swi_pleph(double_1,int_1,int_1,double_2,char_1);

	long_2 = long_1 + long_2;
	double_1 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_2;
	long_3 = long_3 * long_2;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_3 * float_4;
		double_1 = double_4 + double_3;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		long_4 = long_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		float_4 = float_1 * float_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		double_5 = double_2 * double_5;
	}
	if(1)
	{
		long_4 = long_5;
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_6;
			if(1)
			{
				char char_4 = 1;
				char_3 = char_2 + char_3;
				short_2 = short_2;
				char_6 = char_4 * char_5;
			}
			if(1)
			{
				short_3 = short_2 * short_2;
				short_4 = short_4 + short_4;
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float float_6 = 1;
				float_6 = float_3 + float_6;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_3;
			if(1)
			{
				long_1 = long_2 + long_1;
				short_4 = short_3;
				double_5 = double_3 + double_2;
			}
			if(1)
			{
				short_3 = short_2 * short_1;
				int_3 = int_3 + int_1;
			}
		}
		if(1)
		{
			char_2 = char_6;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_7 = v_open_jpl_file(double_2,char_8,char_8,char_6);

				unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
			}
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_6 = 1;
			long long_7 = 1;
			long_7 = long_6 * long_6;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_4;
		}
		if(1)
		{
			double double_7 = 1;
			double_2 = double_6 * double_7;
			if(1)
			{
				double_3 = double_1 + double_3;
				double_2 = double_4 * double_4;
				long_3 = long_2 + long_5;
			}
			if(1)
			{
				float_4 = float_2 + float_3;
				char_3 = char_1 * char_5;
			}
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_3 = int_2 * int_3;
		}
	}
	return double_6;
}
int v_nut_matrix( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 + double_3;
	int_3 = int_1 * int_2;
	short_2 = short_1 * short_2;
	float_2 = float_1 + float_1;
	int_2 = int_4 * int_2;
	int_2 = int_2 * int_5;
	int_4 = int_2 * int_5;
	double_2 = double_2;
	long_1 = long_2;
	char_2 = char_1 + char_1;
	double_4 = double_2 + double_4;
	short_2 = short_3 + short_3;
	char_1 = char_1 + char_3;
	int_1 = int_5 + int_5;
	return int_2;
}
char v_bessel( double parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_7 = 1;
	int_1 = int_2;
	char_1 = char_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		int_4 = int_1 + int_3;
	}
	if(1)
	{
		float float_1 = 1;
		short_2 = short_1 * short_2;
		float_1 = float_1 * float_2;
	}
	int_3 = int_4;
	double_2 = double_1 * double_2;
	short_1 = short_1 + short_3;
	char_1 = char_2 * char_3;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4 * short_4;
	}
	char_2 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_4 = int_1;
	}
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_3 = char_3 * char_4;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_3 + long_4;
		}
		unsigned_int_2 = unsigned_int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	int_5 = int_5 * int_6;
	char_4 = char_1 + char_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_3 * short_5;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_2 = double_2;
	}
	int_6 = int_7 + int_6;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 * float_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	}
	short_7 = short_3 + short_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		int int_8 = 1;
		int_8 = int_5 + int_1;
	}
	return char_3;
}
char v_swe_radnorm( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float_1 = float_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	return char_1;
}
void v_swi_nutation_iau2000ab( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	float_3 = float_1 + float_2;
	double_3 = double_1 + double_2;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	float_2 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	long_1 = long_3 + long_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		double_1 = double_3;
		double_1 = double_4 + double_3;
		short_1 = short_1 + short_1;
		char_3 = v_swe_radnorm(double_3);

		double_1 = double_2;
		int_1 = int_2 + int_4;
		long_3 = long_3 * long_1;
		long_4 = long_4 + long_4;
	}
	double_4 = double_1 + double_3;
	char_4 = char_5;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_6 = 1;
		int int_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_6 = 1;
		float float_4 = 1;
		char char_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		float float_5 = 1;
		double double_5 = 1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
		float_3 = float_1 + float_3;
		unsigned_int_5 = unsigned_int_8;
		float_1 = float_2 + float_1;
		float_1 = v_swe_degnorm(double_1);

		unsigned_int_9 = unsigned_int_5;
		double_3 = double_2 + double_2;
		char_6 = char_3;
		unsigned_int_8 = unsigned_int_4 + unsigned_int_9;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_9;
		double_2 = double_3 + double_1;
		int_3 = int_5 + int_3;
		long_4 = long_4 + long_5;
		short_3 = short_2 * short_1;
		int_5 = int_1 + int_6;
		float_4 = float_4 + float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_7 = 1;
			short short_4 = 1;
			long_3 = long_5 * long_2;
			int_3 = int_5 * int_3;
			unsigned_int_9 = unsigned_int_6 * unsigned_int_9;
			char_3 = char_1 * char_4;
			int_6 = int_2 + int_7;
			double_1 = double_3 * double_3;
			short_4 = short_3;
		}
		char_5 = char_7 + char_4;
		short_6 = short_5 + short_5;
		if(1)
		{
			short short_7 = 1;
			short short_8 = 1;
			short_8 = short_2 + short_7;
		}
		float_1 = float_4 * float_3;
		double_4 = double_3 + double_2;
		float_5 = float_5 * float_1;
		double_5 = double_5 + double_3;
	}
	long_3 = long_5;
	long_4 = long_3 * long_4;
}
float v_swe_degnorm( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	short_1 = short_1 * short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "_") < 0)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	return float_1;
}
char v_swi_nutation_iau1980( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	char_1 = char_2;
	short_1 = short_1;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_2;
	float_2 = float_1 * float_2;
	long_1 = long_2 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	short_1 = short_2 * short_1;
	float_2 = float_3 * float_4;
	if(1)
	{
		double_4 = double_4 + double_3;
	}
	double_5 = double_4 + double_3;
	double_1 = double_5 + double_2;
	short_1 = short_1 + short_3;
	double_1 = double_5 + double_5;
	float_1 = float_2 * float_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_5 + double_3;
	int_2 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	short_2 = short_3 * short_4;
	unsigned_int_5 = unsigned_int_6;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_2 * short_4;
	int_2 = int_3;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
	int_1 = int_3 + int_2;
	unsigned_int_5 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	double_5 = double_2 * double_4;
	int_4 = int_4 + int_2;
	double_6 = double_4 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		long_1 = long_1 + long_3;
		double_4 = double_2 * double_2;
		int_1 = int_1 * int_3;
		long_2 = long_2;
		float_3 = float_2 + float_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		double_2 = double_6 + double_1;
		float_2 = float_5;
		char_3 = char_1 * char_3;
		float_1 = float_4 * float_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_1 * int_4;
			char_1 = char_1 + char_2;
			long_2 = long_2 * long_1;
			float_3 = v_swe_degnorm(double_6);

			unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
			unsigned_int_5 = unsigned_int_5;
		}
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_10 = 1;
		if(1)
		{
			int_3 = int_2 + int_3;
		}
		float_5 = float_4 + float_4;
		int_3 = int_5 + int_1;
		double_2 = double_5 * double_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_1 = double_6 + double_1;
			if(1)
			{
				long_2 = long_2 + long_2;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_1 + unsigned_int_7;
				char controller_5[2];
				fgets(controller_5 ,2 ,stdin);
				if( strcmp( controller_5, "<") > 0)
				{
					unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
				}
				unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
				if(1)
				{
					int_4 = int_5 * int_3;
				}
				long_2 = long_4 * long_2;
				if(1)
				{
					unsigned_int_8 = unsigned_int_7 + unsigned_int_8;
					char_2 = char_1 + char_1;
					unsigned_int_1 = unsigned_int_6;
				}
				if(1)
				{
					unsigned int unsigned_int_9 = 1;
					short_4 = short_2;
					unsigned_int_9 = unsigned_int_1 * unsigned_int_8;
					int_4 = int_3;
				}
			}
		}
		double_2 = double_5 + double_6;
		if(1)
		{
			double_1 = double_5 + double_1;
		}
		unsigned_int_10 = unsigned_int_7 + unsigned_int_10;
		char controller_10[3];
		fgets(controller_10 ,3 ,stdin);
		if( strcmp( controller_10, "bX") < 0)
		{
			long_4 = long_1 + long_3;
		}
		if(1)
		{
			int_3 = int_5 * int_5;
			unsigned_int_5 = unsigned_int_10 + unsigned_int_8;
		}
		if(1)
		{
			unsigned_int_10 = unsigned_int_2 * unsigned_int_5;
			float_3 = float_4 + float_2;
		}
		if(1)
		{
			float float_6 = 1;
			float_5 = float_6 + float_2;
			int_3 = int_3 * int_3;
		}
	}
	short_2 = short_3 * short_5;
	float_1 = float_3 + float_4;
	return char_2;
}
int v_swi_nutation( double parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_4 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		int_3 = int_3 * int_4;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3 + long_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_5 * int_1;
	}
	if(1)
	{
		float float_2 = 1;
		v_swi_nutation_iau2000ab(double_4,double_3);

		float_1 = float_2;
		if(1)
		{
			double_4 = double_1;
			double_6 = double_2 + double_5;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		int int_6 = 1;
		long long_5 = 1;
		char_1 = v_swi_nutation_iau1980(double_3,double_2);

		short_2 = short_1 * short_1;
		char_1 = char_2 * char_1;
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3 * char_2;
		}
		double_3 = double_2 * double_6;
		char_4 = v_bessel(double_3,int_3,double_6);

		double_1 = double_2 * double_3;
		int_6 = int_2 + int_3;
		long_4 = long_5;
		if(1)
		{
			double double_7 = 1;
			double_7 = double_5 + double_6;
		}
	}
	return int_2;
}
void v_swi_check_nutation( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	int_2 = int_3;
	int_4 = v_nut_matrix(unsigned_int_1,unsigned_int_2);

	double_3 = double_2 * double_2;
	if(1)
	{
		int int_5 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_3 + int_3;
		int_4 = v_swi_nutation(double_1,float_2,double_4);

		int_3 = int_1 + int_3;
		int_5 = int_2;
		double_3 = double_3 * double_5;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int int_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_7 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_3;
			int_2 = int_4 * int_6;
			long_2 = long_1 + long_2;
			int_3 = int_7 * int_2;
			unsigned_int_1 = unsigned_int_2;
		}
	}
}
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	float float_4 = 1;
	short short_6 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_1;
	float_3 = float_1 * float_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int_1 = int_2;
		double_1 = double_2;
		short_5 = short_4 * short_1;
		char_4 = char_2 * char_3;
		float_1 = float_4;
		long_2 = long_3 * long_4;
	}
	double_1 = double_1 * double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_1 * int_1;
		double_3 = double_1 + double_3;
	}
	short_6 = short_1 * short_4;
	float_4 = float_2 + float_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_2 * float_3;
	}
}
double v_swi_epsiln( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_swi_ldp_peps(double_2,double_3,double_4);

	long_3 = long_1 + long_2;
	int_1 = int_1 + int_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	long_2 = long_4 + long_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	}
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, "1") < 0)
	{
		char char_1 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		float_2 = float_1;
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		float_3 = float_2;
	}
	if(1)
	{
		float_1 = float_3 + float_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		int_2 = int_1 * int_1;
		short_3 = short_3 * short_4;
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 + char_3;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			float float_4 = 1;
			long long_5 = 1;
			int int_3 = 1;
			unsigned_int_7 = unsigned_int_3;
			double_3 = double_1;
			if(1)
			{
				float_4 = float_1;
				long_5 = long_3 + long_5;
			}
			if(1)
			{
				double double_5 = 1;
				float_3 = float_1 + float_4;
				double_2 = double_5 + double_1;
			}
			if(1)
			{
				char char_5 = 1;
				char_2 = char_5 * char_5;
				long_4 = long_4 + long_5;
				double_2 = double_4 * double_4;
				float_2 = float_2 * float_2;
			}
			int_3 = int_2;
			int_2 = int_1;
		}
	}
	return double_4;
}
char v_calc_epsilon( double parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_swi_epsiln(double_2,int_2);

	int_2 = int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return char_1;
}
void v_swi_check_ecliptic( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_1;
		long_3 = long_1 * long_2;
		int_1 = int_2 + int_2;
	}
	if(1)
	{
		char_1 = v_calc_epsilon(double_1,int_2,int_2);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
}
void v_for( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	char_1 = char_2 + char_2;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_3 * int_1;
	double_1 = double_1 + double_2;
}
void v_swi_force_app_pos_etc()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		v_for(float_1);

		unsigned_int_1 = unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_1;
		char_1 = char_1 * char_2;
	}
}
short v_swe_set_sid_mode( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		int_1 = int_2 * int_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5 * int_1;
	}
	float_1 = float_2 * float_2;
	if(1)
	{
		int int_6 = 1;
		float float_3 = 1;
		int_1 = int_2 * int_6;
		float_3 = float_2;
		short_4 = v_swi_init_swed_if_start();

		double_3 = double_2 * double_1;
		if(1)
		{
			int_2 = int_4 * int_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_3 + double_3;
		double_4 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	return short_3;
	v_swi_force_app_pos_etc();

}
char v_plaus_iflag( char parameter_1,short parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_7 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 + float_3;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_4 = double_4;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1;
	}
	if(1)
	{
		int_3 = int_3 * int_3;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_2 * char_3;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	double_3 = double_1 * double_5;
	char controller_15[2];
	fgets(controller_15 ,2 ,stdin);
	if( strcmp( controller_15, "5") < 0)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_2 * float_5;
	}
	if(1)
	{
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_6 = 1;
				double double_6 = 1;
				char char_5 = 1;
				char char_6 = 1;
				int_3 = int_5 * int_4;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				int_3 = int_1 + int_4;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
				float_6 = float_1 * float_3;
				double_2 = double_4 + double_6;
				char_5 = char_5 + char_6;
			}
			int_3 = int_1 * int_5;
			int_5 = int_3 * int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_6;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 * long_2;
	}
	return char_7;
}
short v_swecalc( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_1 = v_app_pos_etc_plan_osc(int_1,int_1,double_1,char_1,uni_para);

	int_2 = int_1;
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
int v_swe_calc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int int_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	int int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_2;
	int_5 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	int_5 = int_3 + int_1;
	char_1 = char_1 + char_1;
	char_4 = char_2 + char_3;
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
			int_1 = int_1 * int_5;
			if(1)
			{
				unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
			}
			float_4 = float_3 + float_3;
			short_2 = short_2 + short_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		int_6 = int_6 + int_2;
	}
	char_5 = char_4;
	int_5 = int_2 + int_1;
	if(1)
	{
		int_6 = int_1 * int_5;
	}
	char_1 = char_1 * char_3;
	if(1)
	{
		unsigned_int_7 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_8;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		char_4 = char_1;
		if(1)
		{
			if(1)
			{
				char char_6 = 1;
				char_6 = char_1 * char_3;
				char_4 = char_3 + char_3;
			}
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
				}
				long_4 = long_3 * long_3;
			}
			int_5 = int_3 * int_3;
		}
	}
	if(1)
	{
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		int_3 = int_6 + int_1;
	}
	if(1)
	{
		int_6 = int_6 + int_3;
	}
	if(1)
	{
		float_4 = float_2 * float_2;
	}
	if(1)
	{
		short_3 = short_1;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_1 * double_3;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 * unsigned_int_4;
		float_2 = float_1 * float_2;
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		float float_5 = 1;
		short short_4 = 1;
		int_6 = int_6;
		float_7 = float_5 + float_6;
		short_4 = short_1 * short_1;
		short_3 = short_3 + short_1;
		short_4 = short_3;
		unsigned_int_9 = unsigned_int_1 * unsigned_int_9;
		float_7 = float_6 + float_7;
		long_1 = long_4 * long_4;
		if(1)
		{
			int_3 = int_1;
		}
		if(1)
		{
			short_1 = short_1 * short_4;
		}
		if(1)
		{
			double_3 = double_2;
		}
		int_6 = int_6;
		double_2 = double_4 + double_5;
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_9 + unsigned_int_9;
	}
	if(1)
	{
		short_5 = short_2 + short_3;
	}
	if(1)
	{
		int int_8 = 1;
		int_6 = int_7 * int_8;
	}
	if(1)
	{
		double_6 = double_7;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_3 * long_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_1 = char_2 + char_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_2 = double_2 + double_7;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_1 + int_1;
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
					unsigned int unsigned_int_10 = 1;
					unsigned_int_10 = unsigned_int_9 + unsigned_int_6;
				}
			}
			if(1)
			{
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					int_6 = int_7;
				}
				if(1)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						double_7 = double_8 * double_5;
					}
				}
			}
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			double_4 = double_1 + double_5;
		}
	}
	double_8 = double_2 * double_7;
	unsigned_int_1 = unsigned_int_5;
	if(1)
	{
		double_6 = double_1 + double_7;
	}
	short_3 = short_5 * short_3;
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		float_6 = float_3 * float_4;
	}
	unsigned_int_1 = unsigned_int_8 * unsigned_int_4;
	float_7 = float_3 + float_4;
}
short v_swi_init_swed_if_start()
{
	short short_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1;
		int_1 = int_2 * int_3;
		float_1 = float_1 * float_1;
		int_3 = int_3 * int_1;
		char_2 = char_1 * char_2;
	}
	return short_1;
	short_1 = v_memset(int_4,double_1,float_2);

	unsigned_int_1 = v_swe_set_tid_acc(double_2);

}
unsigned int v_swe_set_tid_acc( double parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "g") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_2;
		double_2 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	return unsigned_int_1;
}
void v_swi_close_jpl_file()
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_1;
		}
		short_1 = short_2;
		double_5 = double_4 + double_2;
	}
}
float v_free_planets()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		float_1 = float_1 * float_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
	}
	return float_1;
	short_1 = v_memset(int_3,double_3,float_1);

}
short v_memset( int parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	return short_1;
}
int v_swi_close_keep_topo_etc()
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = v_memset(int_1,double_1,float_1);

			int_2 = int_1;
		}
		v_swi_close_jpl_file();

		char_2 = char_2;
	}
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_2 * float_3;
	int_3 = int_3 + int_2;
	int_3 = int_3;
	double_4 = double_2 + double_3;
	double_2 = double_2 + double_2;
	double_1 = double_2 * double_3;
	float_4 = v_free_planets();

	int_1 = int_4 * int_4;
	double_2 = double_4 * double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "X7") > 0)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_4 = v_swe_set_tid_acc(double_5);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	}
	int_4 = int_2;
	int_6 = int_5 + int_1;
	int_5 = int_1 * int_1;
	char_3 = char_3 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	return int_2;
}
void v_swe_set_ephe_path( char parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_1 * int_1;
	double_1 = double_1;
	float_1 = float_2;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_2 * double_5;
	}
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_1 * char_2;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
	}
	double_6 = double_6 * double_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_3;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
	}
	char_2 = char_4 + char_1;
	char controller4vul_1462[2];
	fgets(controller4vul_1462 ,2 ,stdin);
	if( strcmp( controller4vul_1462, "h") > 0)
	{
		short short_3 = 1;
		char controller4vul_1463[2];
		fgets(controller4vul_1463 ,2 ,stdin);
		if( strcmp( controller4vul_1463, "!") > 0)
		{
			float float_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			short_2 = short_3;
			char controller4vul_1464[3];
			fgets(controller4vul_1464 ,3 ,stdin);
			if( strcmp( controller4vul_1464, "fx") < 0)
			{
				int_1 = v_swe_calc(double_3,int_2,float_3,double_1,char_3,uni_para);

				int_2 = int_3;
			}
			if(1)
			{
				float float_4 = 1;
				float_4 = float_5;
			}
			unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
			int_1 = int_1;
			float_5 = float_5 * float_2;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			char_3 = char_4 * char_4;
			if(1)
			{
				double_2 = double_3;
			}
			int_2 = int_1 + int_1;
			double_6 = double_3 + double_1;
			char_2 = char_4 * char_4;
			short_3 = short_2 + short_3;
		}
	}
}
int main()
{
	int uni_para =447;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	v_swe_set_ephe_path(char_1,uni_para);

	char_1 = char_2 + char_2;
	double_1 = double_1 * double_2;
	double_1 = double_1 * double_3;
	long_3 = long_1 + long_2;
	return int_1;
}

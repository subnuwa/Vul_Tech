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

double v_swe_get_ayanamsa( double parameter_1);
long v_sidereal_houses_trad( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8);
double v_sidereal_houses_ssypl( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8);
short v_sidereal_houses_ecl_t0( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8);
double v_swe_houses_ex( double parameter_1,float parameter_2,double parameter_3,double parameter_4,int parameter_5,double parameter_6,double parameter_7);
void v_orbital_elements( double parameter_1,double parameter_2,long parameter_3,char parameter_4);
short v_apc_sector( int parameter_1,double parameter_2,double parameter_3,double parameter_4);
long v_sunshine_solution_makransky( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
int v_sunshine_init( double parameter_1,double parameter_2,double parameter_3);
void v_sunshine_solution_treindl( double parameter_1,double parameter_2,double parameter_3,short parameter_4);
unsigned int v_CalcH( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,double parameter_6);
long v_swe_houses_armc( double parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,double parameter_6);
long v_fix_asc_polar( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
unsigned int v_armc_to_mc( double parameter_1,double parameter_2);
unsigned int v_Asc2( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
char v_Asc1( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
short v_swe_house_pos( double parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,char parameter_6);
unsigned int v_swe_gauquelin_sector( double parameter_1,int parameter_2,char parameter_3,short parameter_4,long parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
char v_swe_rad_midp( double parameter_1,double parameter_2);
char v_swe_deg_midp( double parameter_1,double parameter_2);
int v_swe_difdeg2n( double parameter_1,double parameter_2);
void v_swe_d2l( double parameter_1);
void v_swi_mean_lunar_elements( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5);
char v_swe_nod_aps( double parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9);
void v_osc_iterate_min_dist( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7);
long v_osc_iterate_max_dist( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7);
double v_get_dist_from_2_vectors( double parameter_1,double parameter_2);
int v_osc_get_ecl_pos( double parameter_1,double parameter_2,double parameter_3);
char v_osc_get_orbit_constants( double parameter_1,double parameter_2);
unsigned int v_get_gmsm( double parameter_1,char parameter_2,char parameter_3,double parameter_4,double parameter_5,char parameter_6);
short v_swe_get_orbital_elements( double parameter_1,long parameter_2,double parameter_3,double parameter_4,char parameter_5);
double v_orbit_max_min_true_distance_helio( double parameter_1,int parameter_2,short parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
void v_swe_orbit_max_min_true_distance( double parameter_1,long parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
int v_get_geocentric_relative_distance( double parameter_1,double parameter_2,long parameter_3,char parameter_4);
double v_print_line( int parameter_1,short parameter_2);
double v_swe_house_name( int parameter_1);
double v_swe_get_ayanamsa_name( char parameter_1);
float v_swe_get_library_path( char parameter_1);
void v_swe_close();
unsigned int v_remove_whitespace( char parameter_1);
float v_do_print_heliacal( double parameter_1,double parameter_2,char parameter_3);
void v_get_heliacal_details( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,char parameter_7,double parameter_8,char parameter_9);
void v_azalt_cart( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,double parameter_6,char parameter_7);
short v_get_acronychal_day( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,unsigned int parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para);
double v_get_asc_obl( double parameter_1,long parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
char v_get_asc_obl_diff( double parameter_1,int parameter_2,char parameter_3,char parameter_4,double parameter_5,unsigned int parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9);
char v_get_asc_obl_with_sun( double parameter_1,long parameter_2,char parameter_3,char parameter_4,int parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9);
int v_heliacal_ut_vis_lim( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,short parameter_7,double parameter_8,char parameter_9,int uni_para);
int v_crossing( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_funct2( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
double v_qYallop( double parameter_1,double parameter_2);
int v_LengthMoon( double parameter_1,double parameter_2);
short v_WidthMoon( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5);
long v_swe_heliacal_pheno_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,double parameter_6,short parameter_7,double parameter_8,char parameter_9);
double v_HeliacalAngle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,int parameter_10,double parameter_11,char parameter_12);
void v_HourAngle( double parameter_1,double parameter_2,double parameter_3);
long v_heliacal_ut_arc_vis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,char parameter_7,double parameter_8,char parameter_9);
short v_heliacal_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,short parameter_6,long parameter_7,double parameter_8,char parameter_9,int uni_para);
int v_time_limit_invisible( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,unsigned int parameter_6,double parameter_7,double parameter_8,char parameter_9);
void v_time_optimum_visibility( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,float parameter_6,double parameter_7,char parameter_8);
short v_swe_vis_limit_mag( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para);
float v_get_heliacal_day( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9);
float v_get_synodic_period( int parameter_1);
double v_find_conjunct_sun( double parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,double parameter_5,char parameter_6);
long v_moon_event_vis_lim( double parameter_1,double parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,short parameter_6,double parameter_7,char parameter_8);
long v_x2min( double parameter_1,double parameter_2,double parameter_3);
double v_CVA( double parameter_1,double parameter_2,char parameter_3);
long v_Tanh( double parameter_1);
long v_PupilDia( double parameter_1,double parameter_2);
void v_OpticFactor( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,int parameter_7);
int v_Bn( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9);
unsigned int v_Bcity( double parameter_1,double parameter_2);
double v_MoonsBrightness( double parameter_1,double parameter_2);
short v_MoonPhase( double parameter_1,double parameter_2,double parameter_3);
short v_Bm( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,unsigned int parameter_11,char parameter_12);
short v_Bday( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
int v_Airmass( double parameter_1,double parameter_2);
float v_mymax( double parameter_1,double parameter_2);
int v_ka( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
void v_mymin( double parameter_1,double parameter_2);
long v_kOZ( double parameter_1,double parameter_2,double parameter_3);
char v_kW( double parameter_1,double parameter_2,double parameter_3);
int v_kt( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9);
void v_kR( double parameter_1,double parameter_2);
char v_Xlay( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_Xext( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_Deltam( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7,char parameter_8);
double v_DistanceAngle( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
unsigned int v_TempEfromTempS( double parameter_1,double parameter_2,double parameter_3);
void v_Kelvin( double parameter_1);
char v_PresEfromPresS( double parameter_1,double parameter_2,double parameter_3);
unsigned int v_Btwi( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,float parameter_9,char parameter_10);
short v_Bsky( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,long parameter_12,char parameter_13);
char v_VisLimMagn( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,double parameter_12,long parameter_13,long parameter_14,char parameter_15);
long v_TopoArcVisionis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,double parameter_12,long parameter_13,double parameter_14,char parameter_15);
short v_swe_fixstar_mag( char parameter_1,double parameter_2,char parameter_3);
short v_call_swe_fixstar_mag( char parameter_1,double parameter_2,char parameter_3);
short v_Magnitude( double parameter_1,double parameter_2,char parameter_3,char parameter_4,double parameter_5,char parameter_6,int uni_para);
short v_SunRA( double parameter_1,long parameter_2,char parameter_3);
double v_DeterTAV( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,double parameter_7,char parameter_8);
char v_TopoAltfromAppAlt( double parameter_1,double parameter_2,double parameter_3);
float v_AppAltfromTopoAlt( double parameter_1,double parameter_2,double parameter_3,long parameter_4);
unsigned int v_call_swe_fixstar( char parameter_1,double parameter_2,long parameter_3,double parameter_4,char parameter_5);
char v_ObjectLoc( double parameter_1,double parameter_2,double parameter_3,char parameter_4,char parameter_5,short parameter_6,double parameter_7,char parameter_8);
unsigned int v_Sgn( double parameter_1);
int v_call_swe_rise_trans( double parameter_1,short parameter_2,char parameter_3,int parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
void v_calc_rise_and_set( double parameter_1,float parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,float parameter_6,double parameter_7,char parameter_8);
unsigned int v_my_rise_trans( double parameter_1,short parameter_2,char parameter_3,double parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9);
int v_RiseSet( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,char parameter_6,int parameter_7,double parameter_8,char parameter_9);
double v_swe_pheno( double parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para);
unsigned int v_swe_pheno_ut( double parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5,int uni_para);
long v_moon_event_arc_vis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,float parameter_6,double parameter_7,char parameter_8);
double v_MoonEventJDut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,short parameter_5,long parameter_6,double parameter_7,char parameter_8);
float v_DeterObject( char parameter_1);
long v_default_heliacal_parameters( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
double v_strcpy_VBsafe( char parameter_1,char parameter_2);
void v_swe_heliacal_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,float parameter_7,double parameter_8,char parameter_9,int uni_para);
double v_call_heliacal_event( double parameter_1,short parameter_2,char parameter_3,float parameter_4,char parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para);
unsigned int v_swe_lun_occult_where( double parameter_1,double parameter_2,char parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
char v_swe_lun_occult_when_glob( double parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5,double parameter_6,short parameter_7,char parameter_8);
short v_occult_when_loc( double parameter_1,int parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9);
void v_swe_lun_occult_when_loc( double parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,double parameter_5,double parameter_6,double parameter_7,short parameter_8,char parameter_9);
long v_call_lunar_occultation( double parameter_1,double parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5,double parameter_6,char parameter_7);
long v_swe_sol_eclipse_where( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5);
char v_eclipse_how( double parameter_1,int parameter_2,char parameter_3,float parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9);
void v_swe_sol_eclipse_when_glob( double parameter_1,char parameter_2,short parameter_3,double parameter_4,short parameter_5,char parameter_6);
unsigned int v_calc_planet_star( double parameter_1,double parameter_2,char parameter_3,char parameter_4,double parameter_5,char parameter_6);
float v_eclipse_where( double parameter_1,float parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,char parameter_7);
long v_eclipse_when_loc( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
double v_swe_sol_eclipse_when_loc( double parameter_1,long parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,char parameter_7);
short v_call_solar_eclipse( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5);
char v_swe_split_deg( double parameter_1,int parameter_2,int parameter_3,long parameter_4,char parameter_5,double parameter_6,unsigned int parameter_7);
char v_hms_from_tjd( double parameter_1);
char v_find_zero( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6);
unsigned int v_swe_lun_eclipse_when( double parameter_1,long parameter_2,float parameter_3,double parameter_4,short parameter_5,char parameter_6);
double v_swe_lun_eclipse_when_loc( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,short parameter_6,char parameter_7);
double v_swi_dot_prod_unit( double parameter_1,double parameter_2);
char v_lun_eclipse_how( double parameter_1,long parameter_2,double parameter_3,double parameter_4,char parameter_5);
float v_swe_lun_eclipse_how( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5);
void v_call_lunar_eclipse( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5);
void v_dms( double parameter_1,float parameter_2);
double v_hms( double parameter_1,short parameter_2);
void v_swe_calc_ut( double parameter_1,float parameter_2,float parameter_3,double parameter_4,char parameter_5);
long v_swe_time_equ( double parameter_1,double parameter_2,char parameter_3);
void v_swe_lmt_to_lat( double parameter_1,double parameter_2,double parameter_3,char parameter_4);
void v_ut_to_lmt_lat( double parameter_1,double parameter_2,double parameter_3,char parameter_4);
long v_find_maximum( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6);
int v_swe_azalt_rev( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5);
void v_calc_astronomical_refr( double parameter_1,double parameter_2,double parameter_3);
void v_calc_dip( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
unsigned int v_swe_refrac_extended( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7);
double v_swe_cotrans( double parameter_1,double parameter_2,double parameter_3);
void v_swe_azalt( double parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7);
double v_rdi_twilight( double parameter_1);
short v_swe_sidtime( double parameter_1);
char v_calc_mer_trans( double parameter_1,short parameter_2,char parameter_3,short parameter_4,double parameter_5,char parameter_6,double parameter_7,char parameter_8);
int v_swe_rise_trans_true_hor( double parameter_1,float parameter_2,char parameter_3,double parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11);
char v_swe_rise_trans( double parameter_1,char parameter_2,char parameter_3,long parameter_4,char parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
char v_do_printf( char parameter_1);
double v_call_rise_set( double parameter_1,long parameter_2,char parameter_3,long parameter_4,float parameter_5,double parameter_6,char parameter_7);
char v_do_special_event( double parameter_1,long parameter_2,char parameter_3,char parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para);
int v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5);
short v_swe_set_topo( double parameter_1,double parameter_2,double parameter_3);
int v_swe_set_astro_models( double parameter_1);
void v_load_dpsi_deps();
char v_swe_set_jpl_file( char parameter_1);
float v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
char v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3);
short v_main_planet_bary( double parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10);
long v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,int parameter_3,char parameter_4);
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3);
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7);
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3);
void v_intp_apsides( double parameter_1,int parameter_2,double parameter_3,char parameter_4);
int v_swi_plan_for_osc_elem( char parameter_1,double parameter_2,double parameter_3);
short v_lunar_osc_elem( double parameter_1,int parameter_2,long parameter_3,char parameter_4);
float v_corr_mean_apog( double parameter_1);
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3);
double v_app_pos_etc_mean( int parameter_1,int parameter_2,char parameter_3);
long v_swe_difrad2n( double parameter_1,double parameter_2);
double v_swi_mod2PI( double parameter_1);
float v_corr_mean_node( double parameter_1);
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3);
int v_app_pos_etc_sbar( char parameter_1,char parameter_2);
double v_swi_armc_to_mc( double parameter_1,double parameter_2);
float v_meff( double parameter_1);
void v_swi_deflect_light( double parameter_1,double parameter_2,short parameter_3);
float v_app_pos_etc_plan( int parameter_1,double parameter_2,char parameter_3,int uni_para);
double v_app_pos_etc_sun( int parameter_1,char parameter_2);
void v_main_planet( double parameter_1,int parameter_2,float parameter_3,short parameter_4,char parameter_5);
void v_swi_icrs2fk5( double parameter_1,long parameter_2,long parameter_3);
void v_swi_FK4_FK5( double parameter_1,double parameter_2);
unsigned int v_swe_fixstar( char parameter_1,double parameter_2,float parameter_3,double parameter_4,char parameter_5);
void v_swe_get_ayanamsa_ex( double parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4);
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,int parameter_3);
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
float v_app_pos_rest( long parameter_1,long parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,char parameter_6);
short v_swi_approx_jplhor( double parameter_1,double parameter_2,int parameter_3,char parameter_4);
void v_swi_bias( double parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4);
void v_get_denum( unsigned int parameter_1,char parameter_2);
void v_swi_aberr_light( double parameter_1,double parameter_2,char parameter_3);
void v_swi_cartpol_sp( double parameter_1,double parameter_2);
void v_swi_precess_speed( double parameter_1,double parameter_2,char parameter_3,int parameter_4);
void v_swi_nutate( double parameter_1,int parameter_2,long parameter_3);
void v_swi_polcart_sp( double parameter_1,double parameter_2);
long v_sidtime_non_polynomial_part( double parameter_1);
void v_swi_cartpol( double parameter_1,double parameter_2);
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3);
int v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3);
double v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3);
long v_init_dt();
long v_deltat_aa( double parameter_1,double parameter_2);
double v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2);
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3);
short v_deltat_longterm_morrison_stephenson( double parameter_1);
int v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2);
float v_calc_deltat( double parameter_1,char parameter_2,double parameter_3,char parameter_4);
long v_swi_guess_ephe_flag();
long v_swe_deltat( double parameter_1);
double v_deltat( double parameter_1);
double v_swe_deltat_ex( double parameter_1,long parameter_2,char parameter_3);
int v_swi_get_observer( double parameter_1,float parameter_2,double parameter_3,double parameter_4,char parameter_5);
long v_app_pos_etc_moon( short parameter_1,char parameter_2);
long v_embofs_mosh( double parameter_1,double parameter_2);
void v_sscc_88( int parameter_1,double parameter_2,int parameter_3);
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3);
int v_swi_moshplan( double parameter_1,int parameter_2,long parameter_3,double parameter_4,double parameter_5,char parameter_6);
double v_swemoon( double parameter_1,double parameter_2,int parameter_3,double parameter_4,char parameter_5);
char v_embofs( double parameter_1,double parameter_2);
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3);
int v_pre_pecl( double parameter_1,double parameter_2);
long v_pre_pequ( double parameter_1,double parameter_2);
unsigned int v_pre_pmat( double parameter_1,double parameter_2);
char v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
double v_precess_2( double parameter_1,double parameter_2,long parameter_3,int parameter_4,int parameter_5);
long v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
int v_swi_precess( double parameter_1,double parameter_2,long parameter_3,int parameter_4);
void v_swi_coortrf2( double parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_swi_polcart( double parameter_1,double parameter_2);
double v_ecldat_equ2000( double parameter_1,double parameter_2);
double v_moon4();
long v_moon3();
float v_moon2();
int v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5);
float v_sscc( int parameter_1,double parameter_2,int parameter_3);
short v_moon1();
void v_mean_elements_pl();
short v_mods3600( double parameter_1);
long v_mean_elements();
int v_swi_moshmoon2( double parameter_1,double parameter_2);
int v_swi_moshmoon( double parameter_1,int parameter_2,double parameter_3,char parameter_4);
long v_sweplan( double parameter_1,int parameter_2,int parameter_3,float parameter_4,long parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10,int uni_para);
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5);
long v_swi_get_tid_acc( double parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5,char parameter_6);
char v_swi_set_tid_acc( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4);
short v_swi_get_jpl_denum();
double v_interp( double parameter_1,double parameter_2,double parameter_3,char parameter_4,float parameter_5,char parameter_6,float parameter_7,double parameter_8);
int v_reorder( char parameter_1,int parameter_2,int parameter_3);
long v_fsizer( char parameter_1);
char v_state( double parameter_1,float parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7);
long v_read_const_jpl( double parameter_1,char parameter_2);
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
long v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
double v_jplplan( double parameter_1,int parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8);
long v_nut_matrix( float parameter_1,char parameter_2);
void v_bessel( double parameter_1,int parameter_2,double parameter_3);
char v_swe_radnorm( double parameter_1);
char v_swi_nutation_iau2000ab( double parameter_1,double parameter_2);
long v_swi_nutation_iau1980( double parameter_1,double parameter_2);
int v_swi_nutation( double parameter_1,long parameter_2,double parameter_3);
void v_swi_check_nutation( double parameter_1,unsigned int parameter_2);
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3);
double v_swi_epsiln( double parameter_1,short parameter_2);
char v_calc_epsilon( double parameter_1,short parameter_2,long parameter_3);
void v_swi_check_ecliptic( double parameter_1,unsigned int parameter_2);
int v_for( float parameter_1);
void v_swi_force_app_pos_etc();
long v_swe_set_sid_mode( float parameter_1,double parameter_2,double parameter_3);
short v_plaus_iflag( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4);
short v_swecalc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para);
long v_swe_calc( double parameter_1,int parameter_2,double parameter_3,double parameter_4,char parameter_5,int uni_para);
void v_swi_close_jpl_file();
char v_swi_close_keep_topo_etc();
char v_swe_set_ephe_path( char parameter_1);
int v_make_ephemeris_path( float parameter_1,char parameter_2,char parameter_3);
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3);
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3);
unsigned int v_if( char parameter_1,int parameter_2,double parameter_3,int parameter_4,short parameter_5,float parameter_6,double parameter_7);
char v_rot_back( int parameter_1);
long v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
long v_free_planets();
long v_init_crc32();
void v_swi_crc32( char parameter_1,int parameter_2,int uni_para);
long v_do_fread(int parameter_2,int parameter_3,int parameter_4,double parameter_5,unsigned int parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10);
long v_strncpy( char parameter_1,short parameter_2,float parameter_3);
void v_read_const( int parameter_1,char parameter_2,int uni_para);
float v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6);
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3);
float v_sweph( double parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para);
long v_swi_right_trim( char parameter_1);
float v_swe_degnorm( double parameter_1);
float v_check_t_terms( double parameter_1,char parameter_2,double parameter_3);
char v_swi_strcpy( char parameter_1,char parameter_2);
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4);
float v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4);
unsigned int v_read_elements_file( int parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,char parameter_12,char parameter_13);
long v_swi_get_fict_name( long parameter_1,char parameter_2);
long v_swe_set_tid_acc( double parameter_1);
short v_memset( double parameter_1,double parameter_2,unsigned int parameter_3);
char v_swi_init_swed_if_start();
double v_swe_get_planet_name( int parameter_1,char parameter_2);
unsigned int v_letter_to_ipl( int parameter_1);
double v_swe_get_ayanamsa( double parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = v_swi_guess_ephe_flag();

	v_swe_get_ayanamsa_ex(double_1,unsigned_int_1,double_1,char_1);

	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_1 * int_2;
	return double_1;
}
long v_sidereal_houses_trad( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_3 * int_1;
	float_1 = v_swe_degnorm(double_1);

	char_2 = char_1 * char_1;
	long_2 = long_1 + long_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		long_2 = v_swe_houses_armc(double_3,double_4,double_2,int_3,double_1,double_5);

		long_1 = long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
	}
	if(1)
	{
		double_2 = v_swe_get_ayanamsa(double_4);

		double_3 = double_5;
	}
	int_2 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_5 = double_3;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	return long_2;
}
double v_sidereal_houses_ssypl( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	long long_1 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_10 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_11 = 1;
	char char_4 = 1;
	double double_12 = 1;
	long long_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_14 = 1;
	float float_3 = 1;
	double double_15 = 1;
	short short_5 = 1;
	long long_4 = 1;
	float_1 = float_2;
	int_1 = int_2;
	short_1 = short_2;
	float_2 = float_1 + float_1;
	int_2 = int_2;
	char_1 = char_1 + char_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		short_2 = short_2;
	}
	double_1 = double_2;
	double_3 = double_4 * double_1;
	double_5 = double_5 + double_6;
	char_3 = char_3 + char_2;
	char_1 = char_3 * char_2;
	v_swi_cartpol_sp(double_7,double_5);

	long_1 = long_1 * long_1;
	double_7 = v_swi_dot_prod_unit(double_2,double_4);

	int_2 = int_2;
	v_swi_polcart_sp(double_2,double_8);

	unsigned_int_1 = unsigned_int_2;
	float_1 = v_swe_degnorm(double_8);

	float_2 = float_1;
	int_2 = int_2 + int_3;
	long_1 = long_2;
	double_2 = double_1 + double_2;
	v_swi_cross_prod(double_7,double_9,double_4);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_9 * double_6;
	double_10 = double_4 * double_10;
	int_5 = int_2 * int_4;
	double_7 = double_1;
	v_swi_coortrf(double_9,double_2,double_11);

	char_4 = char_3 * char_4;
	double_3 = double_3;
	double_12 = double_6;
	long_1 = v_swe_houses_armc(double_1,double_5,double_10,int_4,double_10,double_4);

	int_4 = int_1 * int_5;
	int_5 = v_swi_precess(double_2,double_9,long_3,int_1);

	char_2 = char_5 + char_3;
	int_1 = int_2 * int_2;
	double_4 = double_12 * double_11;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	short_2 = short_2 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_13 = 1;
		double_5 = double_13 * double_13;
	}
	float_1 = float_1 * float_2;
	int_4 = int_1;
	double_3 = double_11;
	double_6 = double_4 + double_3;
	char_4 = char_6 * char_3;
	unsigned_int_4 = unsigned_int_4;
	short_1 = short_1 + short_3;
	short_4 = short_3 + short_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1;
	}
	long_1 = long_1 + long_3;
	v_swi_cartpol(double_14,double_6);

	char_6 = char_5 + char_5;
	float_2 = float_1 + float_1;
	float_3 = float_2 * float_2;
	v_swi_polcart(double_11,double_6);

	double_12 = double_4 + double_11;
	double_7 = double_9 + double_7;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_5 = v_swi_epsiln(double_15,short_5);

	long_4 = long_1 * long_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_1 + double_11;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_3 = char_1 + char_1;
	}
	return double_2;
}
short v_sidereal_houses_ecl_t0( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,double parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = v_swi_dot_prod_unit(double_1,double_1);

	int_1 = int_3 * int_3;
	v_swi_cartpol(double_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_2 * double_1;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		int_3 = int_3;
	}
	int_2 = v_swi_precess(double_2,double_3,long_1,int_2);

	int_2 = int_1 + int_2;
	v_swi_cartpol_sp(double_3,double_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_2;
	v_swi_coortrf(double_4,double_2,double_4);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_3 + int_2;
	int_2 = int_1 + int_1;
	double_3 = double_2 * double_5;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4;
	int_1 = int_1 + int_3;
	float_1 = v_swe_degnorm(double_2);

	long_3 = long_1 * long_1;
	v_swi_polcart_sp(double_3,double_1);

	int_4 = int_4;
	short_3 = short_3 * short_1;
	short_3 = short_4 + short_5;
	double_6 = double_2 * double_6;
	short_3 = short_4 + short_1;
	float_1 = float_1 + float_2;
	double_5 = double_3 + double_3;
	float_1 = float_3 + float_4;
	v_swi_cross_prod(double_3,double_5,double_4);

	double_7 = double_7 * double_6;
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	}
	long_1 = v_swe_houses_armc(double_5,double_5,double_3,int_3,double_2,double_1);

	char_1 = char_1 + char_1;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_5 + short_3;
	}
	short_3 = short_4 + short_4;
	char_2 = char_2;
	long_4 = long_1 + long_1;
	long_3 = long_2 + long_5;
	double_7 = v_swi_epsiln(double_7,short_6);

	unsigned_int_7 = unsigned_int_6;
	if(1)
	{
		short_1 = short_6 + short_5;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_4 + int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_5 = long_1 * long_4;
	}
	return short_5;
}
double v_swe_houses_ex( double parameter_1,float parameter_2,double parameter_3,double parameter_4,int parameter_5,double parameter_6,double parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	long long_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	double double_10 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_2;
	long_1 = v_swe_set_sid_mode(float_1,double_2,double_3);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_1 + short_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		float_2 = v_swe_degnorm(double_4);

		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	char_1 = char_2;
	v_swe_calc_ut(double_2,float_3,float_4,double_3,char_1);

	double_2 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_2;
	}
	short_2 = v_sidereal_houses_ecl_t0(double_2,double_3,double_5,double_6,double_4,int_2,double_7,double_8);

	double_1 = double_3 + double_1;
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double_4 = v_swe_sidtime0(double_6,double_7,double_8);

			long_1 = v_sidereal_houses_trad(double_3,double_3,double_9,double_5,double_2,int_2,double_5,double_7);

			long_4 = long_3 * long_3;
			int_2 = int_1;
			double_5 = v_swi_epsiln(double_5,short_3);

			unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
			double_9 = double_4 * double_6;
			int_4 = int_3 + int_3;
			int_5 = int_5;
			double_3 = double_7 + double_6;
			long_5 = v_swe_houses_armc(double_4,double_5,double_8,int_6,double_1,double_5);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
			float_3 = float_2 + float_4;
			float_3 = float_2 + float_2;
			double_8 = double_9 * double_6;
		}
	}
	double_1 = double_5 * double_7;
	if(1)
	{
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_2;
		int_2 = int_2 + int_6;
		int_7 = int_5 + int_5;
		if(1)
		{
		}
		char_4 = char_3 + char_1;
	}
	if(1)
	{
		if(1)
		{
			int_7 = int_1 * int_1;
		}
		if(1)
		{
			double_5 = v_swe_deltat_ex(double_9,long_2,char_1);

			double_10 = v_sidereal_houses_ssypl(double_1,double_7,double_9,double_8,double_5,int_5,double_8,double_10);

			char_2 = char_2 + char_3;
		}
		if(1)
		{
			long_2 = long_4;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_6;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_7 = v_swi_nutation(double_6,long_6,double_10);

			double_1 = double_1;
		}
	}
	return double_7;
}
void v_orbital_elements( double parameter_1,double parameter_2,long parameter_3,char parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char_1 = char_1 + char_1;
	short_1 = v_swe_get_orbital_elements(double_1,long_1,double_2,double_3,char_1);

	int_3 = int_1 * int_2;
	double_1 = v_hms(double_2,short_2);

	double_3 = double_2 + double_1;
	double_4 = double_2 + double_3;
	double_3 = double_3 + double_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "P") > 0)
	{
		int_4 = int_2 * int_3;
	}
	if(1)
	{
		long long_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_2;
		char_2 = char_3;
		double_2 = double_3 + double_4;
		int_6 = int_1 + int_5;
		unsigned_int_1 = unsigned_int_2;
		float_1 = v_swe_revjul(double_1,int_3,int_4,int_5,int_1,double_5);

		int_4 = int_2 * int_2;
	}
}
short v_apc_sector( int parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_2 = int_1 * int_2;
		char_1 = v_swe_radnorm(double_1);

		float_3 = float_3 + float_2;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
		if(1)
		{
			short_1 = short_1;
			if(1)
			{
				long long_3 = 1;
				long_1 = long_3 + long_2;
			}
		}
		if(1)
		{
			int_4 = int_3 + int_1;
		}
	}
	if(1)
	{
		float_2 = v_swe_degnorm(double_2);

		short_2 = short_1 + short_1;
		float_3 = float_2 + float_1;
	}
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		int_3 = int_3 * int_4;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_1 = char_2 * char_3;
	}
	double_3 = double_3;
	int_4 = int_4 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_2;
}
long v_sunshine_solution_makransky( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_2;
	double_4 = double_2 + double_3;
	char_1 = char_1 + char_1;
	short_1 = short_3 * short_2;
	short_2 = short_4 * short_4;
	double_1 = double_4 * double_5;
	double_3 = double_2 + double_1;
	short_4 = short_4 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	long_1 = long_1 + long_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_4 + short_4;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_5 = 1;
		float float_5 = 1;
		long_1 = long_2 * long_2;
		if(1)
		{
			float_2 = float_1 + float_1;
		}
		long_3 = long_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			long_1 = long_3 * long_2;
		}
		if(1)
		{
			double_2 = double_5 * double_1;
		}
		if(1)
		{
			float_3 = v_swe_degnorm(double_3);

			float_2 = float_1 * float_3;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			}
			double_4 = double_3 + double_5;
			if(1)
			{
				int_3 = int_2 * int_2;
			}
			if(1)
			{
				long long_4 = 1;
				long_4 = long_1 * long_2;
			}
			long_5 = long_1 * long_3;
			int_1 = v_sunshine_init(double_5,double_6,double_7);

			double_3 = double_3 + double_5;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		char_2 = char_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
			if(1)
			{
				unsigned_int_8 = unsigned_int_5;
			}
			if(1)
			{
				double double_8 = 1;
				double_4 = double_3 + double_8;
			}
		}
		if(1)
		{
			int_3 = int_3;
			if(1)
			{
				short_1 = short_5 * short_2;
			}
			if(1)
			{
				long_2 = long_1;
			}
		}
		if(1)
		{
			int int_4 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_9 = 1;
			int int_5 = 1;
			int_2 = int_4;
			double_9 = double_1 + double_5;
			if(1)
			{
				if(1)
				{
					int_3 = int_3 * int_1;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_8 + unsigned_int_1;
				}
			}
			if(1)
			{
				if(1)
				{
					short_5 = short_3 + short_3;
				}
				if(1)
				{
					short short_6 = 1;
					short_6 = short_4 + short_5;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_9 = unsigned_int_8 * unsigned_int_8;
				}
				if(1)
				{
					int_5 = int_3 * int_1;
				}
			}
			if(1)
			{
				float float_4 = 1;
				float_1 = float_4 + float_4;
				if(1)
				{
					double double_10 = 1;
					double_1 = double_5 * double_10;
				}
				if(1)
				{
					long_5 = long_2 + long_2;
				}
				if(1)
				{
					float_1 = float_1 + float_3;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_7 = unsigned_int_9;
				}
				if(1)
				{
					unsigned int unsigned_int_10 = 1;
					unsigned_int_8 = unsigned_int_3 + unsigned_int_10;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
				}
				if(1)
				{
					int int_6 = 1;
					int_6 = int_4 * int_5;
				}
			}
			if(1)
			{
				char char_4 = 1;
				char_4 = char_2 + char_3;
			}
		}
		float_5 = float_3 + float_2;
	}
	return long_5;
}
int v_sunshine_init( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_3 = float_4;
	}
	int_1 = int_1 * int_2;
	char_3 = char_2 + char_3;
	int_2 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_1;
	double_4 = double_3 * double_2;
	float_2 = float_1;
	char_3 = char_3 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	return int_2;
}
void v_sunshine_solution_treindl( double parameter_1,double parameter_2,double parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_2;
	char_1 = char_3 + char_1;
	long_1 = long_1;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_3 + double_2;
	double_2 = double_4 + double_1;
	char_1 = char_1 + char_2;
	float_1 = float_2 * float_3;
	double_1 = double_4 + double_1;
	int_3 = int_2 * int_2;
	short_1 = short_1 * short_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_2 = float_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		if(1)
		{
			int_4 = v_sunshine_init(double_5,double_3,double_6);

			char_2 = v_Asc1(double_2,double_2,double_7,double_4);

			long_3 = long_2 + long_3;
		}
		double_3 = double_1;
		short_2 = short_3 * short_3;
		double_1 = double_1 + double_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
			int_4 = int_2;
		}
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			int_4 = int_3 + int_3;
			char_5 = char_2 + char_4;
		}
		double_5 = double_2 + double_8;
		short_2 = short_2 * short_1;
		if(1)
		{
			double_8 = double_7 * double_1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
		int_3 = int_4 + int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		long_3 = long_4 * long_1;
		float_1 = float_2 * float_1;
		double_5 = double_6 + double_6;
		if(1)
		{
			char char_6 = 1;
			long_4 = long_2 * long_4;
			char_3 = char_6 + char_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
		}
		float_4 = float_4;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				float_1 = v_swe_degnorm(double_4);

				unsigned_int_4 = unsigned_int_7 * unsigned_int_6;
			}
			int_3 = int_3;
		}
	}
}
unsigned int v_CalcH( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,double parameter_6)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_11 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	int int_9 = 1;
	double double_12 = 1;
	float float_4 = 1;
	double double_13 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	float float_5 = 1;
	char char_6 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_7 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_15 = 1;
	short short_7 = 1;
	short short_8 = 1;
	int int_10 = 1;
	int int_11 = 1;
	int int_12 = 1;
	int int_13 = 1;
	double double_16 = 1;
	char char_7 = 1;
	char char_8 = 1;
	long long_8 = 1;
	long long_9 = 1;
	double double_17 = 1;
	double double_18 = 1;
	int int_14 = 1;
	char char_9 = 1;
	short short_9 = 1;
	long long_10 = 1;
	unsigned int unsigned_int_12 = 1;
	short short_10 = 1;
	float float_7 = 1;
	char char_10 = 1;
	short short_11 = 1;
	char char_11 = 1;
	char char_12 = 1;
	int int_15 = 1;
	short short_12 = 1;
	double double_19 = 1;
	float float_8 = 1;
	float float_9 = 1;
	float float_10 = 1;
	unsigned int unsigned_int_13 = 1;
	long long_11 = 1;
	long long_12 = 1;
	float float_11 = 1;
	long long_13 = 1;
	short short_13 = 1;
	unsigned int unsigned_int_14 = 1;
	short short_14 = 1;
	unsigned int unsigned_int_15 = 1;
	unsigned int unsigned_int_16 = 1;
	int int_16 = 1;
	double double_20 = 1;
	int int_17 = 1;
	char char_13 = 1;
	int int_18 = 1;
	short short_15 = 1;
	char char_14 = 1;
	char char_15 = 1;
	long long_15 = 1;
	int int_19 = 1;
	float float_12 = 1;
	short short_16 = 1;
	float float_13 = 1;
	int int_20 = 1;
	unsigned int unsigned_int_17 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_1;
	short_1 = short_1;
	short_3 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		if(1)
		{
			double_3 = double_3 + double_2;
		}
		if(1)
		{
			long_1 = long_1 + long_2;
		}
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		float_2 = float_1 * float_1;
		long_3 = long_1 + long_1;
		if(1)
		{
			int_3 = int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_3 * double_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
	}
	int_4 = int_1 * int_5;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	int_6 = int_5 * int_1;
	if(1)
	{
		double_1 = double_4 + double_4;
		int_4 = int_7 * int_8;
	}
	double_2 = double_5 * double_5;
	if(1)
	{
		double_1 = double_3 * double_3;
		float_1 = float_2 * float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_3;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_5 = int_5 + int_6;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	short_1 = short_2 * short_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_6 = double_5 + double_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_4 = double_2 * double_3;
	}
	double_7 = double_4 * double_3;
	if(1)
	{
		if(1)
		{
			char_2 = char_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				double_6 = double_2 + double_8;
			}
			if(1)
			{
				int_3 = int_4 * int_1;
			}
		}
		long_1 = long_1 + long_1;
	}
	char_1 = char_2 + char_3;
	double_4 = double_4 * double_4;
	double_8 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			int_3 = int_4 * int_4;
		}
		if(1)
		{
			double_10 = double_9 + double_8;
		}
	}
	if(1)
	{
		long_1 = long_4 + long_3;
		long_5 = long_4;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_6;
	double_6 = double_4 + double_11;
	if(1)
	{
		short_4 = short_3;
	}
	float_1 = float_3;
	double_9 = double_4 * double_9;
	if(1)
	{
		long_2 = long_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_6 + unsigned_int_5;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_2;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				if(1)
				{
					long_3 = long_3;
				}
				float_2 = float_3 * float_2;
			}
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char_4 = char_3 + char_2;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			float_2 = float_3 + float_2;
		}
		if(1)
		{
			int_4 = int_9 * int_5;
		}
		if(1)
		{
			double_2 = double_12 * double_9;
		}
		short_1 = short_2 + short_3;
		float_2 = float_4 * float_3;
		if(1)
		{
			double_6 = double_13 + double_4;
		}
	}
	short_3 = short_5 + short_3;
	short_1 = short_1 + short_4;
	if(1)
	{
		short_1 = short_5 + short_5;
		float_2 = float_1 * float_1;
		if(1)
		{
			short_6 = short_6;
			double_1 = double_1;
		}
	}
	long_4 = long_6;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 * unsigned_int_8;
	}
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		int_4 = int_9 * int_1;
		int_1 = int_6 * int_2;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
	}
	char_3 = char_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
		char_1 = char_4;
		int_9 = int_2 * int_1;
	}
	char_4 = v_Asc1(double_7,double_11,double_12,double_13);

	float_2 = float_5 * float_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
	}
	if(1)
	{
		short_5 = short_1 * short_1;
	}
	double_9 = double_11 * double_10;
	double_6 = double_7 + double_2;
	char_6 = char_5 * char_4;
	long_5 = long_1 * long_3;
	short_1 = short_3 + short_5;
	double_14 = double_14 + double_1;
	short_2 = short_5 * short_2;
	unsigned_int_6 = unsigned_int_9 * unsigned_int_6;
	long_7 = long_7 + long_3;
	double_3 = double_5 * double_7;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_9;
		float_3 = float_4 + float_3;
		char_2 = char_2 + char_3;
	}
	int_4 = int_6 * int_3;
	long_4 = long_7 * long_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_9;
	}
	if(1)
	{
		float_6 = float_3 * float_1;
		int_4 = int_8;
	}
	int_8 = int_8 * int_8;
	if(1)
	{
		unsigned_int_11 = unsigned_int_2 + unsigned_int_10;
	}
	if(1)
	{
		double_4 = double_13 + double_15;
		long_7 = long_5;
	}
	v_sunshine_solution_treindl(double_5,double_3,double_4,short_6);

	double_11 = double_1;
	short_8 = short_2 * short_7;
	if(1)
	{
		double_11 = double_1 * double_2;
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		float_4 = float_4;
	}
	unsigned_int_2 = unsigned_int_8 * unsigned_int_9;
	float_4 = float_1;
	if(1)
	{
		double_12 = double_13 + double_11;
		long_4 = long_4 + long_2;
		float_2 = v_swe_degnorm(double_11);

		unsigned_int_4 = unsigned_int_1;
	}
	float_2 = float_3 + float_2;
	unsigned_int_8 = unsigned_int_9 + unsigned_int_3;
	int_6 = int_2 + int_2;
	double_7 = double_14 + double_1;
	int_6 = int_4 * int_7;
	unsigned_int_4 = unsigned_int_10 + unsigned_int_10;
	long_1 = long_6;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_8;
	int_10 = int_4 + int_1;
	if(1)
	{
		double_10 = double_14;
		char_4 = char_5 * char_3;
		int_7 = int_9 + int_5;
	}
	float_6 = float_1 * float_2;
	if(1)
	{
		int_13 = int_11 + int_12;
	}
	if(1)
	{
		int_9 = int_9 * int_10;
		long_5 = long_4 * long_2;
		float_3 = float_2 * float_3;
	}
	if(1)
	{
		double_1 = double_12 + double_16;
		long_5 = long_2 + long_3;
		float_6 = float_1 * float_4;
		long_4 = long_3 + long_5;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_10;
		double_4 = double_11 * double_2;
		int_4 = int_13;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
		char_5 = char_2 + char_6;
		char_5 = char_5;
		float_3 = float_5 + float_1;
	}
	if(1)
	{
		int_13 = int_12 * int_4;
		unsigned_int_3 = unsigned_int_9 * unsigned_int_10;
		double_7 = double_2 + double_10;
		short_7 = short_2 * short_2;
	}
	if(1)
	{
		double_8 = double_5;
		char_2 = char_7 * char_8;
		int_4 = int_6 * int_4;
		double_3 = double_14;
	}
	long_9 = long_8 * long_8;
	int_5 = int_1 + int_7;
	int_11 = int_12 + int_11;
	short_3 = short_3 + short_4;
	double_7 = v_swe_cotrans(double_17,double_18,double_6);

	int_10 = int_14 * int_6;
	int_2 = int_2 * int_2;
	short_8 = short_5 * short_5;
	if(1)
	{
		float_5 = float_3;
		if(1)
		{
			long_5 = long_6 * long_1;
			double_1 = double_12 * double_15;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				if(1)
				{
					int_5 = int_2 * int_7;
				}
				int_10 = int_5 + int_11;
			}
		}
	}
	char_9 = char_9 + char_3;
	short_9 = short_2 * short_4;
	long_6 = long_2;
	if(1)
	{
		int_1 = int_9;
		long_10 = long_3 + long_8;
	}
	unsigned_int_7 = unsigned_int_12 + unsigned_int_9;
	char_6 = char_5 * char_1;
	long_3 = long_4 + long_7;
	short_6 = short_3 * short_10;
	double_6 = double_9 + double_12;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_12;
	double_8 = double_12 * double_10;
	int_7 = int_14;
	double_16 = double_17 * double_5;
	int_3 = int_4 + int_4;
	int_9 = int_8 + int_5;
	long_9 = long_7 + long_6;
	unsigned_int_10 = unsigned_int_1;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_6;
	int_9 = int_9 + int_8;
	short_8 = short_9 * short_9;
	if(1)
	{
		unsigned_int_4 = unsigned_int_7 * unsigned_int_9;
		if(1)
		{
			float_4 = float_7 * float_3;
			char_1 = char_7;
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				unsigned_int_10 = unsigned_int_2 + unsigned_int_6;
			}
		}
	}
	char_4 = char_9 * char_10;
	float_1 = float_3;
	if(1)
	{
		long_8 = long_4 + long_7;
		short_7 = short_11;
	}
	float_7 = float_2;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		float_2 = float_7 * float_7;
	}
	int_5 = int_8 + int_4;
	double_10 = double_6 + double_16;
	if(1)
	{
		double_2 = double_6 + double_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_8;
	}
	char_6 = char_11 + char_12;
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		unsigned_int_3 = unsigned_int_10 + unsigned_int_1;
	}
	int_15 = int_4 * int_4;
	int_4 = int_6 + int_8;
	long_10 = v_sunshine_solution_makransky(double_2,double_2,double_4,int_3);

	double_16 = double_14;
	for(int looper_12=0; looper_12<1;looper_12++)
	{
		long_9 = long_6 + long_10;
		if(1)
		{
			unsigned_int_12 = unsigned_int_7 + unsigned_int_10;
		}
		short_6 = short_2 + short_12;
		if(1)
		{
			long_10 = long_8 * long_8;
			unsigned_int_11 = unsigned_int_7 + unsigned_int_3;
			if(1)
			{
				int_13 = int_15 * int_4;
			}
		}
		if(1)
		{
			if(1)
			{
				int_4 = int_10 * int_4;
			}
			if(1)
			{
				double_18 = double_18 * double_14;
			}
		}
		char_7 = char_8;
	}
	short_3 = v_apc_sector(int_7,double_16,double_13,double_13);

	char_6 = char_8 + char_8;
	if(1)
	{
		short_9 = short_9 + short_5;
	}
	unsigned_int_8 = unsigned_int_11 * unsigned_int_2;
	int_2 = int_6 * int_14;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_11 = unsigned_int_1 * unsigned_int_5;
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		short_2 = short_7;
		if(1)
		{
			int_12 = int_14 + int_9;
		}
		unsigned_int_8 = unsigned_int_5 + unsigned_int_12;
		int_3 = v_swe_difdeg2n(double_19,double_6);

		int_5 = int_3 * int_12;
		float_5 = float_2 * float_8;
		char_8 = char_1 + char_10;
		int_8 = int_3 * int_3;
	}
	short_7 = short_3 * short_2;
	if(1)
	{
		unsigned_int_11 = unsigned_int_1 * unsigned_int_12;
	}
	float_4 = float_3 + float_8;
	unsigned_int_12 = unsigned_int_1 * unsigned_int_2;
	float_8 = float_3;
	int_13 = int_13 + int_9;
	if(1)
	{
		double_5 = double_16 * double_12;
		char_7 = char_1;
	}
	unsigned_int_12 = unsigned_int_9 * unsigned_int_6;
	short_9 = short_6 * short_12;
	short_2 = short_7 + short_11;
	float_9 = float_1 + float_5;
	for(int looper_14=0; looper_14<1;looper_14++)
	{
		if(1)
		{
			short_1 = short_5 * short_9;
			if(1)
			{
				int_8 = int_11 + int_14;
				unsigned_int_12 = unsigned_int_5 * unsigned_int_11;
				if(1)
				{
					int_3 = int_9 + int_13;
				}
			}
			if(1)
			{
				if(1)
				{
					int_9 = int_11 + int_8;
				}
				if(1)
				{
					double_11 = double_13;
				}
			}
			unsigned_int_4 = unsigned_int_10 + unsigned_int_2;
		}
	}
	long_9 = long_3 * long_3;
	unsigned_int_10 = unsigned_int_10 * unsigned_int_10;
	float_1 = float_6;
	if(1)
	{
		unsigned_int_8 = unsigned_int_5 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_8 * unsigned_int_2;
		unsigned_int_8 = unsigned_int_4 + unsigned_int_11;
	}
	unsigned_int_12 = unsigned_int_10 + unsigned_int_10;
	double_6 = double_6;
	double_19 = double_11 + double_15;
	float_8 = float_8 * float_3;
	double_15 = double_14 * double_10;
	unsigned_int_5 = unsigned_int_9 + unsigned_int_12;
	char_1 = char_10 + char_12;
	float_2 = float_10 + float_6;
	int_4 = int_2 + int_12;
	long_5 = long_2;
	unsigned_int_6 = unsigned_int_12;
	int_8 = int_10 * int_3;
	long_4 = long_2 * long_8;
	unsigned_int_13 = unsigned_int_11 + unsigned_int_10;
	unsigned_int_8 = unsigned_int_12 * unsigned_int_13;
	for(int looper_15=0; looper_15<1;looper_15++)
	{
		unsigned_int_1 = unsigned_int_12 * unsigned_int_12;
	}
	if(1)
	{
		long_11 = long_5 + long_8;
		float_4 = float_7;
		unsigned_int_11 = unsigned_int_5 + unsigned_int_12;
	}
	long_12 = long_2;
	for(int looper_16=0; looper_16<1;looper_16++)
	{
		float_3 = float_5;
		unsigned_int_3 = unsigned_int_12 + unsigned_int_1;
		float_7 = float_3 + float_7;
		int_15 = int_14;
		if(1)
		{
			double_15 = double_6 + double_17;
		}
		if(1)
		{
			float_3 = float_4 + float_11;
			long_13 = long_9 * long_10;
			for(int looper_17=0; looper_17<1;looper_17++)
			{
				double_18 = double_6 + double_19;
				if(1)
				{
					long_13 = long_13;
					double_1 = double_10 + double_12;
				}
				short_13 = short_3 + short_4;
				short_12 = short_13 + short_6;
			}
		}
		long_3 = long_12;
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		double_17 = double_4 * double_9;
		float_4 = float_6 + float_6;
		short_2 = short_5 + short_12;
		unsigned_int_2 = unsigned_int_14 * unsigned_int_13;
		if(1)
		{
			long_11 = long_1 * long_7;
		}
		if(1)
		{
			short_14 = short_4 * short_14;
			double_10 = double_14 * double_10;
			for(int looper_19=0; looper_19<1;looper_19++)
			{
				double_4 = double_17 + double_7;
				if(1)
				{
					double_8 = double_7 * double_13;
					long_12 = long_12 + long_12;
				}
				float_4 = float_3;
				unsigned_int_16 = unsigned_int_15 + unsigned_int_12;
			}
		}
		int_1 = int_16;
	}
	int_3 = int_11;
	double_7 = double_14;
	long_3 = long_13 + long_13;
	short_13 = short_9 * short_4;
	short_12 = short_5;
	char_8 = char_8 * char_5;
	if(1)
	{
		unsigned_int_8 = unsigned_int_2 * unsigned_int_2;
	}
	unsigned_int_10 = unsigned_int_7 * unsigned_int_11;
	double_19 = double_20 * double_16;
	int_12 = int_17 * int_1;
	short_11 = short_12 + short_4;
	double_14 = double_3 + double_12;
	char_4 = char_9 + char_7;
	int_7 = int_10 + int_3;
	char_13 = char_5 + char_1;
	char_3 = char_3 + char_6;
	for(int looper_20=0; looper_20<1;looper_20++)
	{
		long long_14 = 1;
		int_2 = int_9 * int_18;
		long_14 = long_5 * long_10;
		double_10 = double_13 * double_6;
		int_13 = int_1 * int_7;
		double_11 = double_6;
		unsigned_int_14 = unsigned_int_10 * unsigned_int_16;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_13;
		if(1)
		{
			int_14 = int_5;
		}
		long_10 = long_11 * long_2;
		long_7 = long_5 + long_6;
	}
	char_12 = char_10;
	for(int looper_21=0; looper_21<1;looper_21++)
	{
		short_15 = short_14 + short_7;
	}
	char_11 = char_14;
	char_15 = char_3 + char_3;
	if(1)
	{
		char_4 = char_1 * char_7;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
			int_16 = int_14 + int_11;
			for(int looper_22=0; looper_22<1;looper_22++)
			{
				unsigned_int_5 = unsigned_int_13 + unsigned_int_13;
			}
		}
	}
	short_7 = short_2 * short_7;
	if(1)
	{
		double_19 = double_9 + double_5;
		long_4 = long_4 * long_15;
		char_6 = char_2 * char_11;
	}
	short_8 = short_8 + short_9;
	int_3 = int_18 + int_9;
	int_5 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_16;
	unsigned_int_12 = unsigned_int_9 * unsigned_int_16;
	if(1)
	{
		int_6 = int_2;
	}
	if(1)
	{
		short_4 = short_10 * short_12;
		int_13 = int_2 + int_13;
		for(int looper_23=0; looper_23<1;looper_23++)
		{
			double double_21 = 1;
			short_10 = short_8 + short_10;
			if(1)
			{
				unsigned_int_11 = unsigned_int_16 * unsigned_int_3;
				int_3 = int_15 + int_19;
			}
			unsigned_int_9 = unsigned_int_4;
			double_5 = double_21 * double_5;
		}
	}
	unsigned_int_8 = unsigned_int_14;
	int_17 = int_19 * int_13;
	if(1)
	{
		float_12 = float_7 * float_3;
	}
	if(1)
	{
		char char_16 = 1;
		unsigned_int_13 = unsigned_int_8 + unsigned_int_8;
		char_2 = char_16;
		for(int looper_24=0; looper_24<1;looper_24++)
		{
			unsigned_int_8 = unsigned_int_1 * unsigned_int_7;
			if(1)
			{
				short_16 = short_16 + short_4;
				double_8 = double_14 + double_10;
			}
			short_11 = short_4 + short_15;
			short_9 = short_10 * short_15;
		}
	}
	char_12 = char_1 + char_2;
	short_15 = short_5 * short_11;
	if(1)
	{
		char_1 = char_8 + char_5;
	}
	if(1)
	{
		float_9 = float_13 * float_1;
		double_18 = double_18 * double_9;
		for(int looper_25=0; looper_25<1;looper_25++)
		{
			short_2 = short_11 * short_9;
			if(1)
			{
				unsigned_int_15 = unsigned_int_11 + unsigned_int_1;
				double_18 = double_15 * double_18;
			}
			long_12 = long_6;
			short_3 = short_15;
		}
	}
	int_20 = int_12;
	double_13 = double_5 + double_12;
	if(1)
	{
		unsigned_int_10 = unsigned_int_16 * unsigned_int_4;
	}
	if(1)
	{
		short_3 = short_12 + short_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_9;
		for(int looper_26=0; looper_26<1;looper_26++)
		{
			short_4 = short_4 * short_6;
			if(1)
			{
				long long_16 = 1;
				long_12 = long_11 + long_16;
				unsigned_int_12 = unsigned_int_13 + unsigned_int_6;
			}
			long_7 = long_15 * long_1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_15;
		}
	}
	unsigned_int_1 = unsigned_int_5;
	if(1)
	{
		short short_17 = 1;
		char_14 = char_1 * char_9;
		char_8 = char_13;
		unsigned_int_10 = unsigned_int_3 + unsigned_int_7;
		char_10 = char_9 + char_10;
		short_10 = short_2 * short_17;
		short_2 = short_2 + short_12;
	}
	if(1)
	{
		int_14 = int_7 * int_7;
	}
	if(1)
	{
		int_10 = int_17 + int_19;
	}
	float_12 = float_1 * float_10;
	if(1)
	{
		int_15 = int_9;
		if(1)
		{
			double_13 = double_6 * double_14;
		}
	}
	double_17 = double_17;
	if(1)
	{
		int_14 = int_11;
		long_6 = long_12 + long_8;
		if(1)
		{
			unsigned_int_17 = unsigned_int_12;
		}
	}
	if(1)
	{
		if(1)
		{
			short_11 = short_16 + short_3;
		}
		if(1)
		{
			double_18 = double_4 + double_4;
		}
	}
	unsigned_int_14 = unsigned_int_6 + unsigned_int_17;
	float_13 = float_11 * float_11;
	if(1)
	{
		int_19 = int_7 * int_4;
	}
	if(1)
	{
		short_8 = short_16 + short_16;
	}
	char_10 = char_11 + char_7;
	if(1)
	{
		double_17 = double_6;
	}
	return unsigned_int_5;
}
long v_swe_houses_armc( double parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,double parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_7 = 1;
	long long_8 = 1;
	char char_6 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_3;
	int_1 = int_1 * int_3;
	int_3 = int_4 * int_1;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			float_1 = float_2;
			if(1)
			{
				char_2 = char_1 + char_1;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_4;
			char_1 = char_1;
		}
	}
	int_2 = int_1 * int_3;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_4 = double_3 * double_3;
	long_4 = long_1;
	int_3 = int_4;
	float_2 = float_3 + float_1;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_4;
	short_3 = short_2 + short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_4 = 1;
		float_4 = float_4 + float_4;
	}
	long_6 = long_4 + long_5;
	if(1)
	{
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short_1 = short_2 * short_4;
			int_3 = int_1;
			unsigned_int_3 = unsigned_int_4;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
			double_5 = double_3 + double_1;
			long_2 = long_6;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
			double_5 = double_3;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
			short_1 = v_swe_house_pos(double_2,double_5,double_4,int_2,double_4,char_5);

			double_1 = double_5 * double_3;
			unsigned_int_6 = v_CalcH(double_6,double_7,double_1,char_4,int_2,double_5);

			int_4 = int_4;
			char_3 = char_1 + char_1;
			int_3 = int_4 + int_1;
			float_3 = float_2;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_7;
		}
		if(1)
		{
			double double_8 = 1;
			double_2 = double_8 + double_2;
			long_1 = long_2 + long_4;
			long_1 = long_6;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_3 = int_1 + int_4;
			}
			unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short_4 = short_3 + short_3;
			}
			unsigned_int_2 = unsigned_int_4 * unsigned_int_7;
		}
	}
	if(1)
	{
		float_3 = v_swe_degnorm(double_7);

		float_1 = float_3 * float_1;
	}
	double_2 = double_4 * double_3;
	long_7 = long_2 + long_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_8 = long_1 + long_2;
	double_5 = double_6 * double_3;
	char_6 = char_2 * char_6;
	return long_6;
}
long v_fix_asc_polar( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		float_1 = v_swe_degnorm(double_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return long_1;
}
unsigned int v_armc_to_mc( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_2;
		double_1 = double_2 + double_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			float_2 = v_swe_degnorm(double_3);

			int_1 = int_1 + int_2;
		}
	}
	return unsigned_int_4;
}
unsigned int v_Asc2( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	double_2 = double_2 + double_1;
	if(1)
	{
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		double double_4 = 1;
		if(1)
		{
			double_4 = double_3 + double_1;
		}
		if(1)
		{
			double_4 = double_3 + double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		float_2 = float_3 * float_1;
	}
	return unsigned_int_2;
}
char v_Asc1( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	int_3 = int_3 + int_4;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float_3 = v_swe_degnorm(double_1);

		int_4 = int_4;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_1 = int_4;
	}
	float_3 = float_2 + float_3;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 + float_2;
	}
	if(1)
	{
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_3 * float_1;
	}
	return char_2;
	unsigned_int_1 = v_Asc2(double_2,double_3,double_3,double_3);

}
short v_swe_house_pos( double parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	long_1 = v_fix_asc_polar(double_3,double_2,double_1,double_3);

	short_1 = short_1;
	double_2 = v_swe_cotrans(double_4,double_1,double_5);

	float_1 = v_swe_degnorm(double_5);

	char_1 = char_1 * char_1;
	float_2 = float_2 * float_1;
	unsigned_int_1 = v_armc_to_mc(double_2,double_2);

	short_2 = short_1 * short_2;
	char_2 = v_Asc1(double_5,double_2,double_5,double_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_swe_difdeg2n(double_4,double_3);

	double_5 = double_3 + double_6;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_2 = v_swe_houses_armc(double_4,double_2,double_7,int_1,double_2,double_7);

	unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	return short_3;
}
unsigned int v_swe_gauquelin_sector( double parameter_1,int parameter_2,char parameter_3,short parameter_4,long parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_4 = 1;
	short short_6 = 1;
	double double_9 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 * short_1;
	char_1 = v_swe_rise_trans(double_1,char_1,char_1,long_1,char_2,double_1,double_2,double_2,double_3,char_3);

	int_1 = int_1 + int_1;
	short_4 = short_2 * short_3;
	int_3 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	double_1 = double_1 * double_3;
	int_4 = int_3 * int_1;
	float_3 = float_2 * float_2;
	short_4 = short_2 * short_4;
	if(1)
	{
		if(1)
		{
			float_4 = float_4;
		}
	}
	if(1)
	{
		float_6 = float_5 + float_5;
	}
	if(1)
	{
		float_1 = float_4 * float_6;
		float_1 = v_swe_degnorm(double_1);

		int_3 = int_2 * int_4;
		double_2 = v_swe_sidtime0(double_4,double_5,double_4);

		double_2 = double_2 * double_1;
		int_2 = int_5 * int_1;
		short_2 = short_5;
		float_7 = float_4;
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
			long_1 = long_1 + long_2;
		}
		long_1 = long_3 * long_1;
	}
	if(1)
	{
		unsigned_int_2 = v_swe_fixstar(char_4,double_6,float_4,double_6,char_1);

		short_4 = short_1 + short_3;
	}
	if(1)
	{
		int_4 = int_3;
	}
	int_6 = int_5 + int_5;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		int_4 = v_swi_nutation(double_6,long_2,double_4);

		long_3 = v_swe_calc(double_5,int_1,double_1,double_7,char_1,-1 );

		int_5 = int_3 * int_1;
	}
	if(1)
	{
		char_4 = char_2 * char_3;
		double_7 = double_3 + double_8;
		if(1)
		{
			short_4 = short_5;
		}
		double_3 = v_swe_deltat_ex(double_2,long_1,char_4);

		long_3 = long_4 + long_1;
		double_7 = double_6 * double_3;
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_2 * float_5;
		}
	}
	if(1)
	{
		char_3 = char_4;
		double_4 = double_8;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		float_6 = float_7 * float_4;
		double_5 = v_swi_epsiln(double_5,short_6);

		short_4 = v_swe_house_pos(double_4,double_4,double_9,int_4,double_8,char_5);

		short_3 = short_5 * short_1;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_1 + int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			long_4 = long_3 + long_2;
		}
		if(1)
		{
			short_1 = short_2 * short_3;
		}
	}
	if(1)
	{
		int_3 = int_5 + int_6;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		}
	}
	return unsigned_int_4;
}
char v_swe_rad_midp( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	return char_1;
	char_2 = v_swe_deg_midp(double_1,double_1);

}
char v_swe_deg_midp( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_1 = short_2;
	int_1 = v_swe_difdeg2n(double_1,double_2);

	int_1 = int_1 + int_2;
	float_1 = v_swe_degnorm(double_1);

	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
int v_swe_difdeg2n( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	float_1 = v_swe_degnorm(double_1);

	int_2 = int_1 + int_1;
	if(1)
	{
	}
	return int_3;
}
void v_swe_d2l( double parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_swi_mean_lunar_elements( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_2;
	long_1 = v_mean_elements();

	long_2 = long_1 + long_1;
	short_1 = short_2;
	long_3 = long_2;
	float_2 = v_corr_mean_apog(double_1);

	int_1 = int_3 * int_3;
	float_3 = v_corr_mean_node(double_1);

	int_3 = int_2 + int_1;
	long_3 = long_3 * long_4;
	char_1 = char_1 * char_2;
	int_3 = int_1 * int_4;
	short_1 = short_3 * short_1;
	float_2 = float_4 * float_3;
	long_2 = long_3 * long_4;
	float_5 = v_swe_degnorm(double_2);

	char_3 = char_3;
}
char v_swe_nod_aps( double parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_7 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_9 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_7 = 1;
	short short_8 = 1;
	double double_10 = 1;
	int int_9 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_11 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_5 = 1;
	short short_9 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_12 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_6 = 1;
	char char_8 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_13 = 1;
	long long_7 = 1;
	long long_8 = 1;
	double double_14 = 1;
	int int_14 = 1;
	float float_9 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_10 = 1;
	long long_9 = 1;
	int int_15 = 1;
	int int_16 = 1;
	int int_17 = 1;
	unsigned int unsigned_int_14 = 1;
	long long_10 = 1;
	unsigned int unsigned_int_15 = 1;
	unsigned int unsigned_int_16 = 1;
	int int_18 = 1;
	int int_19 = 1;
	double_1 = double_1;
	double_2 = double_2 + double_2;
	v_swi_polcart_sp(double_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2;
	int_1 = int_3 + int_3;
	int_3 = int_4 * int_2;
	float_2 = float_1 + float_2;
	double_4 = double_2 + double_3;
	int_3 = int_3 + int_1;
	int_2 = int_2 * int_4;
	int_5 = int_3;
	double_5 = double_1 * double_1;
	float_3 = float_3 * float_3;
	float_3 = float_1;
	double_6 = double_5 * double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	v_swi_deflect_light(double_2,double_4,short_1);

	double_2 = double_5 + double_2;
	double_6 = double_1 * double_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	float_1 = float_2 * float_2;
	int_5 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_5;
	long_2 = long_1 + long_1;
	int_6 = int_3 + int_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_1 + char_2;
	v_swi_cross_prod(double_1,double_4,double_3);

	float_4 = float_2;
	int_2 = int_5 + int_6;
	double_6 = v_swi_mod2PI(double_7);

	char_2 = char_3 * char_1;
	short_2 = short_2;
	float_1 = float_4 * float_3;
	char_4 = char_4 + char_4;
	if(1)
	{
		int_1 = int_6 * int_4;
	}
	int_3 = v_swi_trop_ra2sid_lon_sosy(double_4,double_7,int_5);

	unsigned_int_3 = unsigned_int_4;
	long_1 = long_2 * long_3;
	double_3 = double_7 + double_4;
	long_3 = long_3 + long_4;
	double_3 = double_6 + double_1;
	v_swi_aberr_light(double_3,double_8,char_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
	char_3 = char_3 * char_2;
	int_3 = int_4 * int_4;
	if(1)
	{
		double_8 = double_4 * double_9;
	}
	if(1)
	{
		float_1 = float_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
		}
	}
	int_2 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			v_swi_coortrf2(double_6,double_9,double_3,double_9);

			float_2 = float_1 * float_2;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				short_2 = short_1 + short_3;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_3 = char_1 + char_1;
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short_1 = short_4 * short_1;
			}
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short_6 = short_1 * short_5;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char_5 = char_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
			double_4 = double_8;
			double_3 = double_8 + double_1;
			double_8 = double_5 + double_6;
			int_7 = int_7 * int_6;
			int_1 = int_5 + int_5;
			int_6 = int_8;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			char_3 = char_1 * char_2;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
			short_1 = short_7 * short_8;
			short_6 = short_4 * short_4;
			double_9 = double_10;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			short_7 = short_8;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
			double_4 = double_8 * double_2;
			int_7 = int_8 * int_9;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
			unsigned_int_6 = unsigned_int_6;
			char_6 = char_2 + char_1;
			int_3 = int_5 + int_7;
			char_4 = char_2 + char_2;
		}
		int_3 = int_8 + int_6;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_7;
		double_9 = double_8 * double_4;
		double_5 = v_swe_cotrans(double_10,double_5,double_7);

		int_2 = int_6 + int_1;
		double_12 = double_11 * double_8;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_8;
		unsigned_int_5 = unsigned_int_4;
		char_5 = char_3 * char_5;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		int_4 = int_5 * int_10;
		double_8 = double_8;
		int_4 = int_7 * int_10;
		short_6 = short_3;
		int_5 = int_6 * int_11;
		if(1)
		{
			int_5 = v_swi_plan_for_osc_elem(char_3,double_7,double_12);

			unsigned_int_7 = unsigned_int_7 * unsigned_int_4;
			int_11 = v_swi_trop_ra2sid_lon(double_9,double_2,double_2,int_11);

			long_1 = long_5;
		}
		if(1)
		{
			int_5 = int_2 * int_6;
			unsigned_int_2 = unsigned_int_7 * unsigned_int_5;
		}
		short_2 = short_4 * short_1;
		short_4 = short_9 * short_6;
		unsigned_int_9 = v_if(char_5,int_8,double_12,int_4,short_9,float_2,double_13);

		unsigned_int_9 = unsigned_int_5;
		long_2 = v_swe_calc(double_5,int_7,double_7,double_9,char_2,-1 );

		unsigned_int_10 = unsigned_int_10 * unsigned_int_1;
		short_1 = short_2 * short_4;
		int_2 = v_swi_get_observer(double_12,float_5,double_13,double_2,char_5);

		short_5 = short_5 + short_7;
		double_12 = double_1 + double_11;
		unsigned_int_8 = unsigned_int_4 + unsigned_int_7;
		int_10 = int_5;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			float_3 = float_1 + float_6;
			int_11 = int_2 * int_2;
			float_5 = float_3 + float_5;
			long_2 = long_2 + long_5;
			int_11 = int_10 * int_12;
		}
	}
	if(1)
	{
		if(1)
		{
		}
		short_7 = short_5 + short_5;
		double_6 = double_6 + double_13;
		if(1)
		{
			if(1)
			{
				int_2 = int_11 * int_5;
				short_9 = short_1;
			}
			if(1)
			{
				int_4 = int_6 + int_10;
			}
		}
		if(1)
		{
			float_2 = float_4 + float_1;
			char_7 = char_5 * char_2;
			char_3 = char_3;
		}
		if(1)
		{
			if(1)
			{
				short_6 = short_9 * short_8;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_11 + unsigned_int_3;
			}
			v_swi_cartpol_sp(double_8,double_12);

			short_2 = short_6 + short_8;
			unsigned_int_2 = unsigned_int_9 + unsigned_int_3;
			long_3 = long_1;
		}
		if(1)
		{
			char_1 = char_7 + char_1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
		}
		if(1)
		{
			double_7 = double_3 * double_11;
			short_4 = short_4 + short_1;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			if(1)
			{
				long_3 = long_5 + long_6;
			}
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
				}
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					int_4 = int_5 * int_9;
				}
			}
			char_3 = char_3 + char_3;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				char_8 = char_1;
			}
			short_9 = short_6;
			short_1 = short_4 + short_1;
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				int_4 = v_swi_precess(double_1,double_7,long_5,int_5);

				short_4 = short_2;
				double_8 = double_4 * double_2;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			unsigned int unsigned_int_12 = 1;
			char char_9 = 1;
			double double_15 = 1;
			char char_11 = 1;
			double_1 = double_9 * double_10;
			unsigned_int_12 = unsigned_int_1 + unsigned_int_2;
			float_7 = float_2 + float_5;
			int_3 = int_5 * int_2;
			unsigned_int_3 = unsigned_int_11 * unsigned_int_12;
			double_8 = double_4 + double_2;
			char_6 = char_9 + char_9;
			unsigned_int_9 = unsigned_int_2;
			float_6 = float_8 + float_3;
			int_6 = int_13 + int_4;
			if(1)
			{
				v_swi_cartpol(double_6,double_5);

				long_7 = long_4 + long_2;
			}
			int_10 = int_13;
			long_5 = long_5;
			unsigned_int_6 = unsigned_int_11 + unsigned_int_7;
			double_12 = double_12 * double_1;
			unsigned_int_12 = unsigned_int_2;
			long_6 = long_8 + long_7;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
			double_5 = double_14 * double_7;
			double_8 = double_12;
			int_2 = int_4 + int_1;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_1;
			int_12 = int_7;
			char_1 = char_5 + char_1;
			double_15 = double_5 + double_14;
			int_6 = int_14;
			unsigned_int_12 = unsigned_int_6 * unsigned_int_11;
			int_13 = int_10 * int_11;
			unsigned_int_9 = unsigned_int_6;
			unsigned_int_4 = unsigned_int_10 * unsigned_int_4;
			float_5 = float_9;
			if(1)
			{
				long_4 = long_2 + long_2;
			}
			if(1)
			{
				v_swe_get_ayanamsa_ex(double_13,unsigned_int_4,double_12,char_5);

				unsigned_int_12 = unsigned_int_8 + unsigned_int_5;
			}
			unsigned_int_13 = unsigned_int_1 + unsigned_int_2;
			long_4 = long_4 + long_7;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_9;
			v_swi_force_app_pos_etc();

			int_1 = int_4 * int_4;
			char_10 = char_10 + char_4;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			unsigned_int_4 = unsigned_int_12 * unsigned_int_13;
			unsigned_int_11 = unsigned_int_6 * unsigned_int_3;
			v_swi_nutate(double_8,int_12,long_7);

			double_3 = double_3 * double_14;
			char_1 = char_11 + char_7;
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				double_13 = double_8 * double_7;
				long_9 = long_2 + long_1;
			}
		}
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			if(1)
			{
				char_8 = char_4 * char_1;
				int_7 = int_10 + int_6;
				int_5 = int_2 * int_15;
				int_14 = int_16 * int_5;
				v_swi_mean_lunar_elements(double_14,double_10,double_6,double_3,double_3);

				short_2 = short_4 * short_3;
				int_13 = int_4 + int_17;
				float_8 = float_9;
				unsigned_int_14 = unsigned_int_13 * unsigned_int_2;
			}
			if(1)
			{
				short short_10 = 1;
				short_10 = short_2 + short_8;
				int_3 = int_12 * int_6;
				long_4 = long_2 + long_10;
				int_10 = int_2 * int_3;
				int_12 = int_14;
				short_9 = short_10 + short_2;
				unsigned_int_9 = unsigned_int_14 + unsigned_int_2;
				char_2 = char_4;
			}
		}
		unsigned_int_4 = unsigned_int_5 + unsigned_int_15;
	}
	if(1)
	{
		long_9 = long_3;
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
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			int_11 = int_4 + int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				int_10 = int_17 + int_16;
			}
		}
	}
	if(1)
	{
		for(int looper_16=0; looper_16<1;looper_16++)
		{
			double_14 = double_4 + double_3;
		}
	}
	if(1)
	{
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			char_10 = char_7 * char_7;
		}
	}
	if(1)
	{
		char_2 = char_1 + char_10;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_10 * unsigned_int_16;
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		double double_16 = 1;
		unsigned int unsigned_int_17 = 1;
		if(1)
		{
			for(int looper_19=0; looper_19<1;looper_19++)
			{
				v_swi_polcart(double_8,double_3);

				char_1 = char_8 + char_2;
			}
			float_2 = float_4 * float_8;
		}
		if(1)
		{
			v_swi_precess_speed(double_8,double_8,char_10,int_1);

			unsigned_int_9 = unsigned_int_9 + unsigned_int_5;
			if(1)
			{
				double_10 = double_11 + double_2;
			}
		}
		unsigned_int_7 = unsigned_int_2 * unsigned_int_16;
		unsigned_int_6 = unsigned_int_16 + unsigned_int_13;
		if(1)
		{
			if(1)
			{
				short short_11 = 1;
				short_11 = short_7 + short_9;
			}
		}
		double_2 = double_6 + double_6;
		if(1)
		{
			double_16 = double_3 + double_8;
		}
		if(1)
		{
			for(int looper_20=0; looper_20<1;looper_20++)
			{
				int_9 = int_12;
			}
		}
		if(1)
		{
			if(1)
			{
				for(int looper_21=0; looper_21<1;looper_21++)
				{
					long_3 = long_9 + long_3;
				}
			}
		}
		for(int looper_22=0; looper_22<1;looper_22++)
		{
			long_5 = long_5 + long_6;
		}
		if(1)
		{
			for(int looper_23=0; looper_23<1;looper_23++)
			{
				float float_10 = 1;
				float_9 = float_10 + float_8;
			}
		}
		double_12 = double_11 + double_11;
		if(1)
		{
			long_4 = long_4;
		}
		if(1)
		{
			double_7 = double_16;
			if(1)
			{
				if(1)
				{
				}
				if(1)
				{
					for(int looper_24=0; looper_24<1;looper_24++)
					{
						double_14 = double_7 * double_16;
					}
				}
				if(1)
				{
					for(int looper_25=0; looper_25<1;looper_25++)
					{
						double_9 = double_2;
					}
				}
				if(1)
				{
					if(1)
					{
						for(int looper_26=0; looper_26<1;looper_26++)
						{
							int_9 = int_4 * int_15;
						}
					}
				}
				if(1)
				{
					for(int looper_27=0; looper_27<1;looper_27++)
					{
						double_9 = double_1 + double_13;
					}
				}
				if(1)
				{
					for(int looper_28=0; looper_28<1;looper_28++)
					{
						short short_12 = 1;
						short_12 = short_3 + short_6;
					}
				}
				for(int looper_29=0; looper_29<1;looper_29++)
				{
					int_9 = int_12 + int_17;
				}
				if(1)
				{
				}
			}
		}
		for(int looper_30=0; looper_30<1;looper_30++)
		{
			short_6 = short_9 + short_8;
		}
		if(1)
		{
			double_14 = double_14;
			if(1)
			{
				double_5 = double_6 + double_14;
			}
		}
		if(1)
		{
			unsigned_int_9 = unsigned_int_13 * unsigned_int_17;
		}
		for(int looper_31=0; looper_31<1;looper_31++)
		{
			unsigned_int_3 = unsigned_int_14 + unsigned_int_7;
		}
		int_13 = int_1 * int_8;
		if(1)
		{
			long_10 = long_5 + long_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_11 + unsigned_int_8;
			if(1)
			{
				int_17 = int_15 * int_15;
			}
		}
		for(int looper_32=0; looper_32<1;looper_32++)
		{
			float_1 = float_7;
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
				if(1)
				{
				}
			}
			if(1)
			{
				double double_17 = 1;
				double double_18 = 1;
				int_4 = int_9 + int_7;
				if(1)
				{
				}
				double_1 = double_17 + double_18;
				long_9 = long_2;
			}
		}
		if(1)
		{
			for(int looper_33=0; looper_33<1;looper_33++)
			{
				unsigned int unsigned_int_18 = 1;
				unsigned_int_7 = unsigned_int_18;
			}
			unsigned_int_10 = unsigned_int_7;
		}
		if(1)
		{
			for(int looper_34=0; looper_34<1;looper_34++)
			{
				unsigned int unsigned_int_19 = 1;
				unsigned_int_19 = unsigned_int_4 + unsigned_int_7;
			}
			int_18 = int_15 + int_18;
		}
		long_8 = long_8;
		unsigned_int_3 = unsigned_int_10 * unsigned_int_11;
		if(1)
		{
			for(int looper_35=0; looper_35<1;looper_35++)
			{
				long_7 = long_8 + long_2;
				int_14 = int_14 + int_19;
				unsigned_int_9 = unsigned_int_14 + unsigned_int_3;
				unsigned_int_15 = unsigned_int_17 * unsigned_int_10;
			}
		}
		if(1)
		{
			for(int looper_36=0; looper_36<1;looper_36++)
			{
				double_6 = double_12 + double_3;
			}
			float_1 = float_5;
		}
		if(1)
		{
			unsigned int unsigned_int_20 = 1;
			for(int looper_37=0; looper_37<1;looper_37++)
			{
				unsigned int unsigned_int_21 = 1;
				unsigned_int_21 = unsigned_int_8 * unsigned_int_20;
			}
			unsigned_int_2 = unsigned_int_15 + unsigned_int_20;
		}
	}
	for(int looper_38=0; looper_38<1;looper_38++)
	{
		if(1)
		{
			short short_13 = 1;
			short_13 = short_9 + short_7;
		}
		if(1)
		{
			short_9 = short_1;
		}
		if(1)
		{
			long_4 = long_1 * long_4;
		}
		if(1)
		{
			long long_11 = 1;
			long_7 = long_11;
		}
		if(1)
		{
			int_4 = int_19 * int_18;
		}
	}
	return char_1;
	float_2 = v_swe_degnorm(double_11);

}
void v_osc_iterate_min_dist( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_osc_get_ecl_pos(double_1,double_2,double_1);

	double_2 = v_get_dist_from_2_vectors(double_1,double_2);

}
long v_osc_iterate_max_dist( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "a") > 0)
			{
				if(1)
				{
					double_1 = double_1 * double_1;
				}
				if(1)
				{
					short_1 = short_1 * short_2;
				}
			}
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		if(1)
		{
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int_1 = v_osc_get_ecl_pos(double_4,double_5,double_6);

			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	char controller_11[2];
	fgets(controller_11 ,2 ,stdin);
	if( strcmp( controller_11, "[") < 0)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double_5 = v_get_dist_from_2_vectors(double_6,double_4);

			char_1 = char_2;
		}
	}
	return long_2;
}
double v_get_dist_from_2_vectors( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3 + int_4;
	return double_2;
}
int v_osc_get_ecl_pos( double parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float_2 = float_1 + float_1;
	short_3 = short_1 + short_2;
	long_1 = long_1 + long_1;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_1;
	double_1 = double_3 + double_2;
	char_1 = char_1;
	int_1 = int_3 * int_1;
	float_1 = float_1;
	char_2 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_4;
}
char v_osc_get_orbit_constants( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_4 + int_1;
	long_3 = long_1 * long_2;
	double_1 = double_3 * double_1;
	double_2 = double_3 * double_2;
	int_2 = int_1;
	float_1 = float_1 + float_1;
	int_1 = int_2 + int_5;
	double_5 = double_4 + double_2;
	float_2 = float_1 + float_1;
	double_3 = double_3 * double_4;
	long_3 = long_3 * long_3;
	double_1 = double_5 * double_2;
	long_2 = long_4 * long_1;
	short_3 = short_1 * short_2;
	long_6 = long_5 * long_5;
	short_3 = short_3 * short_2;
	unsigned_int_1 = unsigned_int_3;
	return char_2;
}
unsigned int v_get_gmsm( double parameter_1,char parameter_2,char parameter_3,double parameter_4,double parameter_5,char parameter_6)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = v_swe_calc(double_1,int_1,double_2,double_2,char_1,-1 );

	double_2 = double_1 * double_1;
	double_1 = double_3;
	double_5 = double_4 * double_5;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") > 0)
	{
		double_4 = double_2 * double_1;
	}
	if(1)
	{
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long_2 = long_2;
			if(1)
			{
				if(1)
				{
					int int_2 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_1 = 1;
					int_2 = int_2 * int_1;
					short_2 = short_1 + short_1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
				if(1)
				{
					for(int looper_1=0; looper_1<1;looper_1++)
					{
						long long_3 = 1;
						long long_4 = 1;
						long_3 = long_3 + long_4;
					}
					if(1)
					{
						char_2 = char_3 + char_2;
					}
				}
			}
			if(1)
			{
				char char_4 = 1;
				char_3 = char_4 + char_4;
			}
			float_2 = float_1 * float_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			}
		}
		if(1)
		{
			short short_3 = 1;
			char_3 = char_3 * char_3;
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
					}
					if(1)
					{
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_5 = 1;
						unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
					}
				}
				if(1)
				{
				}
				if(1)
				{
					char_2 = char_3 * char_3;
				}
			}
			short_3 = short_1 * short_3;
		}
	}
	double_6 = double_3;
	return unsigned_int_6;
}
short v_swe_get_orbital_elements( double parameter_1,long parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	int int_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int int_8 = 1;
	long long_5 = 1;
	int int_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	char char_6 = 1;
	double double_14 = 1;
	int int_12 = 1;
	short short_8 = 1;
	short short_9 = 1;
	double double_15 = 1;
	int int_13 = 1;
	double double_16 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_swe_degnorm(double_1);

	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2;
	double_2 = double_3;
	double_1 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 + double_1;
	double_2 = double_4 + double_4;
	float_1 = float_2 * float_1;
	double_2 = double_1 * double_3;
	int_1 = int_2 + int_3;
	long_2 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			int_2 = int_2 * int_2;
		}
	}
	if(1)
	{
		double_3 = double_4 * double_2;
	}
	if(1)
	{
	}
	long_1 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			double_6 = double_3 * double_5;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		}
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
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_2 = char_3 * char_1;
		}
	}
	unsigned_int_2 = unsigned_int_4;
	double_2 = double_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_1 = float_2;
		float_2 = float_3;
	}
	short_2 = short_1 + short_2;
	int_3 = int_2 * int_3;
	double_7 = double_3 + double_5;
	short_4 = short_1 + short_3;
	double_4 = double_7 * double_8;
	float_4 = float_1 * float_1;
	int_4 = int_3 * int_2;
	double_3 = double_3 * double_2;
	float_1 = float_4 * float_3;
	short_3 = short_5;
	if(1)
	{
		char_1 = char_3 + char_2;
	}
	int_5 = int_1 + int_5;
	double_8 = double_1 + double_4;
	int_1 = int_2 * int_1;
	long_3 = long_3 + long_3;
	char_1 = char_4 + char_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	double_9 = v_swi_mod2PI(double_8);

	char_5 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	float_5 = float_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	}
	v_swi_cartpol(double_8,double_10);

	int_4 = int_4 * int_5;
	double_7 = double_8;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	double_5 = double_8 * double_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1;
	short_2 = short_5 + short_5;
	if(1)
	{
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		int_2 = int_4;
	}
	float_2 = float_2 * float_4;
	char_4 = char_2 + char_2;
	int_2 = int_3 + int_4;
	double_9 = double_10 * double_6;
	unsigned_int_1 = unsigned_int_3;
	float_3 = float_6 + float_1;
	int_6 = int_3 + int_6;
	float_5 = float_3 * float_1;
	float_7 = float_1 + float_5;
	float_2 = float_6 + float_7;
	unsigned_int_1 = unsigned_int_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_7;
	short_5 = short_5 + short_5;
	long_4 = v_swe_calc(double_7,int_4,double_8,double_3,char_3,-1 );

	double_5 = double_2;
	int_2 = int_7;
	unsigned_int_8 = unsigned_int_3 * unsigned_int_5;
	short_6 = short_2 + short_6;
	short_1 = short_7 + short_6;
	unsigned_int_9 = unsigned_int_4;
	v_swi_polcart(double_11,double_7);

	double_7 = double_5 * double_12;
	double_11 = double_5 * double_9;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_5 = short_4 * short_6;
		double_4 = double_1;
	}
	char_4 = char_5;
	double_13 = double_13 + double_5;
	int_3 = int_8 + int_5;
	int_8 = int_2;
	long_5 = long_4;
	v_swi_coortrf2(double_10,double_13,double_13,double_12);

	double_5 = double_10;
	if(1)
	{
		int_1 = int_8 * int_8;
		int_5 = int_7;
		double_12 = double_6 * double_8;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	int_6 = int_1 * int_7;
	float_3 = float_6;
	int_9 = int_1 * int_8;
	int_6 = int_9 * int_10;
	int_11 = int_1 + int_8;
	short_6 = short_3;
	float_2 = float_1 + float_7;
	float_6 = float_5 + float_6;
	int_2 = int_11;
	unsigned_int_1 = v_get_gmsm(double_4,char_2,char_2,double_13,double_3,char_6);

	v_swi_cross_prod(double_3,double_8,double_14);

	long_1 = long_2 + long_5;
	float_6 = float_1 * float_7;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_9;
	long_3 = long_5 * long_2;
	if(1)
	{
		int_11 = int_11 * int_12;
	}
	if(1)
	{
		short_9 = short_8 * short_9;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_7 = unsigned_int_7;
	short_8 = short_8;
	short_5 = short_9 * short_4;
	double_14 = double_2 + double_15;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_4;
	short_7 = short_2 + short_2;
	short_3 = short_9 + short_8;
	double_4 = double_5 + double_13;
	short_1 = short_7 + short_8;
	int_13 = int_12 + int_1;
	double_10 = double_3 + double_3;
	double_6 = double_11 + double_15;
	double_16 = double_10;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_9;
	int_4 = int_7 * int_6;
	return short_8;
}
double v_orbit_max_min_true_distance_helio( double parameter_1,int parameter_2,short parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = v_osc_get_orbit_constants(double_1,double_2);

	char_3 = char_1 + char_1;
	int_2 = v_osc_get_ecl_pos(double_2,double_1,double_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_3 * int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	short_1 = v_swe_get_orbital_elements(double_2,long_1,double_3,double_4,char_3);

	float_3 = float_1 + float_4;
	int_5 = int_4 + int_5;
	char_3 = char_4 + char_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	float_5 = float_5 * float_5;
	short_2 = short_1 * short_1;
	return double_3;
}
void v_swe_orbit_max_min_true_distance( double parameter_1,long parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_10 = 1;
	float float_5 = 1;
	int int_2 = 1;
	double double_11 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_8 = 1;
	long_1 = long_1;
	float_2 = float_1 + float_1;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_5 = double_2 * double_4;
	int_1 = int_1;
	double_6 = v_get_dist_from_2_vectors(double_4,double_4);

	float_2 = float_2 + float_3;
	double_5 = double_3 + double_2;
	long_1 = v_osc_iterate_max_dist(double_6,double_5,double_1,double_4,double_5,double_5,int_1);

	long_1 = long_1 * long_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		double_1 = double_1 * double_7;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	float_3 = float_2 * float_4;
	short_4 = short_1 * short_3;
	double_2 = double_4 + double_7;
	char_1 = v_osc_get_orbit_constants(double_3,double_8);

	double_8 = double_8;
	char_1 = char_1 + char_1;
	float_3 = float_1 * float_1;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		short_2 = short_5;
		unsigned_int_6 = unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_1 = long_1 + long_1;
			long_1 = long_1 + long_2;
			short_4 = short_5 * short_1;
			if(1)
			{
				int_1 = int_1;
				long_2 = long_2;
				int_1 = v_osc_get_ecl_pos(double_2,double_3,double_4);

				unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
					unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
				}
			}
			if(1)
			{
				short short_6 = 1;
				char_1 = char_1 + char_1;
				double_3 = double_7 * double_9;
				short_3 = short_6 * short_1;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_7 = double_5 * double_8;
					unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
				}
			}
		}
	}
	double_9 = double_4 * double_10;
	float_4 = float_3 + float_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_1 = double_9 * double_8;
		float_1 = float_1 * float_5;
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		float float_6 = 1;
		char char_2 = 1;
		float_2 = float_6 * float_2;
		char_2 = char_2;
		if(1)
		{
			int_2 = int_1;
		}
		int_2 = int_1 * int_2;
	}
	float_5 = float_4;
	double_11 = double_9 + double_5;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double_9 = double_5 + double_11;
		int_1 = int_1 + int_1;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
		if(1)
		{
			long_2 = long_2;
		}
		long_1 = long_2 + long_3;
	}
	int_1 = int_2 + int_2;
	double_10 = v_orbit_max_min_true_distance_helio(double_9,int_3,short_7,double_7,double_10,double_2,char_1);

	v_osc_iterate_min_dist(double_4,double_7,double_5,double_9,double_1,double_6,int_1);

	unsigned_int_8 = unsigned_int_7 * unsigned_int_8;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_8 = v_swe_get_orbital_elements(double_10,long_3,double_8,double_10,char_1);

}
int v_get_geocentric_relative_distance( double parameter_1,double parameter_2,long parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	v_swe_orbit_max_min_true_distance(double_1,long_2,double_2,double_1,double_2,double_2,char_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
		double_2 = double_2 + double_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 * int_1;
		long_2 = v_swe_calc(double_4,int_2,double_1,double_5,char_1,-1 );

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
}
double v_print_line( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	v_dms(double_1,float_1);

	int_1 = v_get_geocentric_relative_distance(double_2,double_3,long_1,char_1);

	char_2 = v_swe_nod_aps(double_2,long_1,float_1,int_2,double_1,double_1,double_4,double_2,char_1);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return double_3;
	int_1 = v_swe_julday(int_3,int_1,int_1,double_2,int_2);

	double_5 = v_swe_pheno(double_3,unsigned_int_1,int_4,double_5,char_1,-1 );

	float_1 = v_swe_degnorm(double_5);

	v_swe_d2l(double_5);

}
double v_swe_house_name( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	return double_2;
}
double v_swe_get_ayanamsa_name( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	return double_1;
}
float v_swe_get_library_path( char parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = v_strncpy(char_1,short_1,float_1);

	char_1 = char_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	int_2 = int_1 * int_2;
	short_1 = short_2 + short_2;
	short_4 = short_3 + short_4;
	float_2 = float_1 + float_2;
	double_1 = double_2;
	return float_3;
}
void v_swe_close()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	char char_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_6 = 1;
	char char_8 = 1;
	char char_9 = 1;
	short short_2 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		double_1 = double_1 * double_2;
	}
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	long_2 = v_swe_set_tid_acc(double_2);

	double_2 = double_1;
	double_2 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	long_3 = long_3 + long_3;
	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		float_3 = float_1 + float_2;
		short_1 = short_1 * short_1;
	}
	long_3 = v_free_planets();

	float_3 = float_4 + float_1;
	int_2 = int_4 * int_5;
	char_3 = char_1 * char_2;
	char_4 = char_1 * char_4;
	double_2 = double_3;
	v_swi_close_jpl_file();

	char_5 = char_4 * char_4;
	long_4 = long_5;
	char_7 = char_5 * char_6;
	int_6 = int_4 + int_2;
	double_4 = double_3 * double_2;
	if(1)
	{
		double_2 = double_1 * double_1;
		long_4 = long_1;
	}
	if(1)
	{
		float float_5 = 1;
		short_1 = v_memset(double_3,double_5,unsigned_int_4);

		float_5 = float_4 * float_1;
		int_4 = int_2 * int_3;
	}
	long_6 = long_3 + long_3;
	if(1)
	{
		if(1)
		{
			float_2 = float_3 * float_4;
			double_2 = double_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
			}
			char_2 = char_4 * char_4;
		}
		if(1)
		{
			char_5 = char_3 + char_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_2 + double_4;
		}
	}
	char_8 = char_9;
	short_2 = short_2;
}
unsigned int v_remove_whitespace( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_5 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_2;
	int_2 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	char_1 = char_1;
	long_1 = long_1;
	double_2 = double_2 + double_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_3;
	short_4 = short_2 + short_3;
	double_2 = double_2 + double_2;
	char_2 = char_3;
	int_1 = int_3;
	int_1 = int_3 * int_2;
	double_3 = double_2;
	short_5 = short_5 + short_2;
	return unsigned_int_2;
}
float v_do_print_heliacal( double parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float_1 = float_1;
	char_1 = v_hms_from_tjd(double_1);

	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	char_1 = v_do_printf(char_1);

	char_1 = char_1 + char_1;
	short_2 = short_1;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			short_2 = short_2 * short_2;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_3 = 1;
			int int_5 = 1;
			char_3 = char_2 + char_1;
			unsigned_int_1 = v_remove_whitespace(char_1);

			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			unsigned_int_1 = unsigned_int_1;
			float_2 = v_swe_revjul(double_2,int_1,int_2,int_1,int_2,double_1);

			long_4 = long_2 + long_3;
			int_3 = int_3;
			double_3 = double_2 + double_2;
			int_5 = int_3 * int_4;
		}
	}
	if(1)
	{
		double double_4 = 1;
		int_4 = int_2 * int_4;
		double_3 = double_4 + double_1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	}
	char_4 = char_3 + char_2;
	return float_3;
}
void v_get_heliacal_details( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,char parameter_7,double parameter_8,char parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	int_1 = int_2 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		long long_1 = 1;
		int_3 = int_2 + int_2;
		long_3 = long_1 * long_2;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	long_2 = long_4 * long_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	}
	short_2 = short_1 + short_2;
	double_2 = double_3 + double_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_5 = double_4 + double_3;
		short_3 = short_3 * short_1;
	}
	if(1)
	{
		double double_6 = 1;
		int int_4 = 1;
		double_4 = double_1 + double_3;
		short_3 = short_2;
		unsigned_int_2 = unsigned_int_2;
		double_6 = double_4 * double_6;
		int_2 = int_4 * int_4;
		v_time_optimum_visibility(double_3,double_7,double_5,double_3,char_1,float_1,double_1,char_3);

		int_2 = int_5 + int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int_6 = v_time_limit_invisible(double_7,double_8,double_7,double_3,char_1,unsigned_int_4,double_3,double_8,char_3);

		double_4 = double_1;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3 * char_3;
		}
		if(1)
		{
			int_1 = int_5 * int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
		}
		float_3 = float_1 + float_2;
	}
}
void v_azalt_cart( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,double parameter_6,char parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_5 = 1;
	float_3 = float_1 + float_2;
	int_3 = int_1 * int_2;
	char_3 = char_1 + char_2;
	int_2 = int_2 + int_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char_3 = char_2 * char_1;
	}
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_2 + int_2;
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
	unsigned_int_2 = unsigned_int_1;
	v_swe_azalt(double_2,int_1,double_2,double_3,double_1,double_3,double_3);

	double_3 = double_3 * double_1;
	float_4 = float_1 + float_4;
	float_3 = v_DeterObject(char_3);

	unsigned_int_1 = v_call_swe_fixstar(char_1,double_2,long_1,double_3,char_4);

	long_1 = long_2 + long_3;
	double_1 = double_2 * double_2;
	char_1 = char_3 + char_4;
	v_swi_polcart(double_3,double_2);

	long_2 = long_4 + long_1;
	short_2 = short_1 * short_1;
	double_4 = v_swe_deltat_ex(double_5,long_3,char_1);

	int_1 = int_1;
	double_3 = double_5 + double_3;
	int_1 = int_4 * int_5;
	long_3 = long_1 + long_1;
	long_5 = v_swe_calc(double_2,int_2,double_2,double_3,char_1,-1 );

}
short v_get_acronychal_day( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,unsigned int parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_2;
	char controller4vul_146[3];
	fgets(controller4vul_146 ,3 ,stdin);
	if( strcmp( controller4vul_146, "vW") > 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		short_1 = v_swe_vis_limit_mag(double_2,double_1,double_1,double_2,char_1,int_1,double_3,char_2,uni_para);

		int_3 = int_2 + int_2;
	}
	return short_2;
}
double v_get_asc_obl( double parameter_1,long parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = int_1;
	long_1 = long_2;
	int_1 = int_1;
	int_3 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
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
	float_1 = v_swe_degnorm(double_1);

	short_1 = short_1;
	if(1)
	{
		if(1)
		{
			long_2 = v_swe_calc(double_3,int_4,double_3,double_1,char_1,-1 );

			double_2 = v_swe_get_planet_name(int_3,char_2);

			double_1 = double_3 * double_3;
		}
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2 + short_2;
		}
		unsigned_int_1 = v_swe_fixstar(char_3,double_3,float_1,double_4,char_3);

		char_3 = char_1 * char_1;
	}
	long_4 = long_2 + long_3;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char_6 = char_4 * char_5;
	}
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, "@") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	long_3 = long_3 + long_4;
	return double_2;
}
char v_get_asc_obl_diff( double parameter_1,int parameter_2,char parameter_3,char parameter_4,double parameter_5,unsigned int parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	double_1 = v_get_asc_obl(double_2,long_1,char_1,char_2,double_2,double_2,double_1,char_2);

	char_2 = char_1 * char_2;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_2 + int_3;
		}
		if(1)
		{
			double_2 = double_1 + double_1;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_2 + int_1;
	if(1)
	{
		int int_4 = 1;
		float_1 = v_swe_degnorm(double_1);

		int_4 = int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return char_1;
}
char v_get_asc_obl_with_sun( double parameter_1,long parameter_2,char parameter_3,char parameter_4,int parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char_1 = v_get_asc_obl_diff(double_1,int_1,char_1,char_2,double_2,unsigned_int_1,unsigned_int_1,double_3,char_3);

	int_1 = int_2 * int_2;
	int_3 = int_4;
	if(1)
	{
	}
	float_1 = float_1;
	double_4 = double_3;
	double_3 = double_4 + double_2;
	int_1 = int_1 + int_3;
	return char_2;
}
int v_heliacal_ut_vis_lim( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,short parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_2;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	char controller4vul_144[3];
	fgets(controller4vul_144 ,3 ,stdin);
	if( strcmp( controller4vul_144, ".H") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		char controller4vul_145[2];
		fgets(controller4vul_145 ,2 ,stdin);
		if( strcmp( controller4vul_145, "J") < 0)
		{
			short_4 = v_get_acronychal_day(double_1,double_1,double_2,double_2,char_1,unsigned_int_1,double_2,double_3,char_1,uni_para);

		}
	}
	return int_1;
}
int v_crossing( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
	return int_1;
}
void v_funct2( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
}
double v_qYallop( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	return double_1;
}
int v_LengthMoon( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	int_2 = int_1 + int_1;
	long_3 = long_2 + long_2;
	return int_1;
}
short v_WidthMoon( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	return short_1;
}
long v_swe_heliacal_pheno_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,double parameter_6,short parameter_7,double parameter_8,char parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	char char_5 = 1;
	double double_10 = 1;
	float float_2 = 1;
	double double_11 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_12 = 1;
	double double_13 = 1;
	char char_6 = 1;
	long long_2 = 1;
	char char_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_1 = v_swe_pheno_ut(double_1,short_1,char_1,double_1,char_2,-1 );

	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_mymin(double_2,double_1);

	int_1 = int_1 + int_1;
	double_1 = v_strcpy_VBsafe(char_3,char_4);

	long_1 = v_default_heliacal_parameters(double_1,double_3,double_1,int_2);

	v_kR(double_3,double_4);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	float_1 = v_DeterObject(char_2);

	int_2 = v_LengthMoon(double_3,double_3);

	double_5 = double_2 * double_3;
	short_1 = v_WidthMoon(double_4,double_1,double_5,double_6,double_1);

	long_1 = v_x2min(double_2,double_6,double_3);

	int_2 = int_1 + int_2;
	float_1 = v_AppAltfromTopoAlt(double_7,double_7,double_4,long_1);

	int_2 = int_3;
	int_4 = v_kt(double_6,double_1,double_2,double_8,double_6,double_9,double_5,float_1,char_5);

	char_5 = v_kW(double_7,double_9,double_2);

	unsigned_int_2 = unsigned_int_4;
	short_1 = v_swe_set_topo(double_6,double_7,double_10);

	char_5 = char_3;
	unsigned_int_2 = v_Sgn(double_7);

	unsigned_int_2 = unsigned_int_5;
	double_2 = v_qYallop(double_6,double_1);

	int_4 = int_2 + int_3;
	float_1 = float_1;
	short_1 = v_Magnitude(double_5,double_7,char_5,char_1,double_2,char_4,-1 );

	double_1 = double_8 + double_6;
	float_1 = float_2;
	int_2 = v_RiseSet(double_1,double_11,double_10,char_3,int_4,char_1,int_5,double_8,char_3);

	int_6 = v_crossing(double_8,double_4,double_8,double_4);

	double_7 = double_4 + double_9;
	char_5 = v_swi_set_tid_acc(double_2,unsigned_int_1,char_1,char_4);

	int_7 = v_ka(double_12,double_9,double_9,double_13,double_13,double_4,double_3,char_5);

	double_2 = v_DeterTAV(double_13,double_11,double_4,double_5,char_1,char_6,double_7,char_5);

	float_2 = v_mymax(double_5,double_7);

	int_1 = int_5 + int_6;
	short_1 = v_SunRA(double_13,long_2,char_6);

	char_6 = v_ObjectLoc(double_12,double_13,double_10,char_1,char_3,short_1,double_4,char_7);

	long_3 = v_kOZ(double_1,double_3,double_3);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	return long_2;
	v_funct2(double_12,double_9,double_12,double_8);

}
double v_HeliacalAngle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,int parameter_10,double parameter_11,char parameter_12)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	short_1 = v_SunRA(double_1,long_1,char_1);

	long_1 = v_TopoArcVisionis(double_2,double_3,double_1,double_2,double_4,double_2,double_3,double_2,double_4,double_5,double_5,double_5,long_1,double_6,char_2);

}
void v_HourAngle( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	char_1 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
}
long v_heliacal_ut_arc_vis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,char parameter_7,double parameter_8,char parameter_9)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_6 = 1;
	char char_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	double_1 = v_swe_deltat_ex(double_1,long_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_Magnitude(double_1,double_2,char_2,char_1,double_2,char_3,-1 );

	unsigned_int_2 = v_call_swe_fixstar(char_1,double_1,long_2,double_2,char_1);

	long_3 = v_swe_heliacal_pheno_ut(double_3,double_1,double_4,double_4,char_2,double_2,short_2,double_3,char_2);

	int_2 = int_1 + int_2;
	long_4 = v_swe_calc(double_3,int_1,double_2,double_5,char_3,-1 );

	short_4 = short_3 + short_1;
	float_1 = v_DeterObject(char_1);

	unsigned_int_2 = v_my_rise_trans(double_6,short_4,char_4,double_4,float_1,double_7,double_7,double_5,char_4);

	v_swe_azalt(double_7,int_2,double_2,double_4,double_6,double_4,double_2);

	v_HourAngle(double_7,double_5,double_5);

	double_1 = v_HeliacalAngle(double_2,double_2,double_6,double_8,double_8,double_7,double_9,double_10,double_3,int_1,double_8,char_4);

	unsigned_int_2 = v_Sgn(double_9);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	return long_5;
}
short v_heliacal_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,short parameter_6,long parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	char controller4vul_143[2];
	fgets(controller4vul_143 ,2 ,stdin);
	if( strcmp( controller4vul_143, "d") > 0)
	{
		int_1 = v_heliacal_ut_vis_lim(double_1,double_1,double_1,double_1,char_2,int_2,short_1,double_2,char_3,uni_para);

	}
	if(1)
	{
	}
	return short_2;
}
int v_time_limit_invisible( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,unsigned int parameter_6,double parameter_7,double parameter_8,char parameter_9)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_8 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	long_1 = long_1 * long_2;
	int_1 = int_3 + int_1;
	float_1 = float_1;
	int_5 = int_4 * int_3;
	short_1 = short_1 * short_2;
	int_3 = int_4 + int_3;
	int_7 = int_6 + int_5;
	int_3 = int_1 + int_7;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	return int_8;
	short_1 = v_swe_vis_limit_mag(double_1,double_2,double_1,double_2,char_1,int_7,double_1,char_2,-1 );

}
void v_time_optimum_visibility( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,float parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_2;
	float_1 = float_1 * float_1;
	short_1 = v_swe_vis_limit_mag(double_2,double_3,double_3,double_2,char_1,int_1,double_3,char_2,-1 );

	double_3 = double_4 + double_1;
	int_1 = int_2;
	int_2 = int_3 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_2;
	char_3 = char_1 + char_1;
	int_4 = int_4 + int_2;
}
short v_swe_vis_limit_mag( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	char_1 = char_1;
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_2 + char_3;
	}
	char controller4vul_147[3];
	fgets(controller4vul_147 ,3 ,stdin);
	if( strcmp( controller4vul_147, "uS") > 0)
	{
		char controller4vul_148[3];
		fgets(controller4vul_148 ,3 ,stdin);
		if( strcmp( controller4vul_148, "&8") < 0)
		{
			short_1 = v_Magnitude(double_1,double_2,char_1,char_3,double_1,char_2,uni_para);

			double_2 = double_3;
		}
	}
	int_2 = int_3;
	float_2 = float_1 * float_2;
	long_1 = long_1;
	int_1 = int_1 + int_4;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 + short_2;
		}
		double_1 = double_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2;
		int_1 = int_1 + int_2;
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
		int_2 = int_2 * int_4;
		char_4 = char_1;
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
		double double_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_5 = 1;
		double_2 = double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		short_1 = short_1 + short_2;
		double_1 = double_4 + double_2;
		short_1 = short_2;
		short_5 = short_4 + short_2;
		unsigned_int_2 = unsigned_int_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_4 = int_1 + int_4;
		}
		char_3 = char_5 * char_5;
	}
	int_2 = int_4;
	double_3 = double_5;
	char_1 = char_6 + char_3;
	int_3 = int_2;
	char_7 = char_3 + char_3;
	unsigned_int_4 = unsigned_int_4;
	short_2 = short_2 + short_2;
	if(1)
	{
	}
	char_4 = char_1 + char_2;
	return short_6;
}
float v_get_heliacal_day( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,unsigned int parameter_7,double parameter_8,char parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	short_1 = v_swe_vis_limit_mag(double_1,double_3,double_4,double_4,char_1,int_1,double_1,char_2,-1 );

	int_2 = int_2;
	int_2 = int_3 * int_2;
	float_3 = float_1 * float_2;
	float_2 = v_DeterObject(char_3);

	short_2 = v_call_swe_fixstar_mag(char_3,double_3,char_2);

	unsigned_int_2 = v_my_rise_trans(double_5,short_3,char_2,double_6,float_3,double_3,double_1,double_3,char_4);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	double_6 = double_3 * double_5;
	int_4 = int_4 + int_1;
	return float_3;
}
float v_get_synodic_period( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
double v_find_conjunct_sun( double parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,double parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		float_1 = v_get_synodic_period(int_1);

		short_3 = short_1 + short_2;
		int_2 = int_1 + int_1;
		if(1)
		{
			float_1 = v_swe_degnorm(double_1);

			double_1 = double_1 * double_2;
			unsigned_int_2 = unsigned_int_4;
		}
	}
	return double_2;
	long_1 = v_swe_calc(double_3,int_1,double_3,double_2,char_1,-1 );

}
long v_moon_event_vis_lim( double parameter_1,double parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,short parameter_6,double parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	long long_5 = 1;
	double double_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_2;
	double_1 = v_find_conjunct_sun(double_1,unsigned_int_1,float_2,int_1,double_2,char_1);

	unsigned_int_2 = v_my_rise_trans(double_1,short_1,char_1,double_1,float_1,double_2,double_1,double_2,char_2);

	short_1 = short_2 * short_1;
	long_1 = long_1 + long_1;
	double_4 = double_3 + double_2;
	if(1)
	{
		if(1)
		{
			short_3 = short_1 * short_1;
		}
	}
	int_1 = int_2 + int_3;
	char_3 = char_2 + char_2;
	double_3 = double_2 * double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	float_2 = v_get_heliacal_day(double_1,double_3,double_5,double_6,char_1,int_2,unsigned_int_1,double_6,char_1);

	double_5 = double_6 + double_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_4 + short_5;
	if(1)
	{
	}
	int_1 = int_2 + int_4;
	if(1)
	{
		int_5 = int_1;
	}
	char_3 = char_4 + char_1;
	float_3 = float_3;
	if(1)
	{
		int_5 = int_5 + int_1;
	}
	double_6 = double_6 * double_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		int_5 = int_4 * int_3;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		int int_6 = 1;
		int_6 = int_1 + int_5;
	}
	float_4 = float_2 + float_2;
	float_6 = float_1 * float_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	int_5 = int_1 * int_5;
	if(1)
	{
		long long_4 = 1;
		int_2 = v_time_limit_invisible(double_1,double_5,double_1,double_2,char_3,unsigned_int_4,double_4,double_1,char_1);

		long_2 = long_1 * long_4;
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
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_1 = unsigned_int_6 + unsigned_int_3;
			}
		}
		if(1)
		{
			double double_7 = 1;
			float float_7 = 1;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
			double_7 = double_8;
			float_7 = float_4 + float_6;
		}
		if(1)
		{
			int_3 = int_1 * int_3;
		}
	}
	return long_5;
	v_time_optimum_visibility(double_9,double_1,double_8,double_5,char_3,float_3,double_6,char_3);

}
long v_x2min( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	return long_1;
}
double v_CVA( double parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_mymin(double_1,double_2);

		long_1 = long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_3;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
long v_Tanh( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
long v_PupilDia( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	return long_1;
	long_1 = v_Tanh(double_1);

}
void v_OpticFactor( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_10 = 1;
	double_1 = double_1;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_2;
	short_2 = short_1 + short_2;
	int_1 = int_1 + int_2;
	int_2 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		float_1 = v_mymax(double_2,double_3);

		float_3 = float_2 + float_1;
	}
	int_4 = int_2 * int_2;
	if(1)
	{
		int_6 = int_4 + int_5;
		short_2 = short_1;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_1 * float_3;
			char_2 = char_3 * char_1;
			int_4 = int_6 * int_3;
			float_4 = float_1 + float_1;
		}
		double_2 = v_CVA(double_2,double_4,char_2);

		double_1 = double_2 * double_4;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	int_4 = int_2;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	double_3 = double_5 + double_2;
	if(1)
	{
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		int_1 = int_4 + int_3;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		short short_3 = 1;
		char char_4 = 1;
		int int_7 = 1;
		short_2 = short_3 * short_2;
		char_4 = char_1;
		double_3 = double_1 * double_2;
		int_5 = int_7 + int_1;
	}
	if(1)
	{
		float_1 = float_4 * float_2;
		long_1 = long_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_4 + short_1;
	short_5 = short_4 + short_5;
	double_6 = double_5 * double_1;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_7;
	}
	double_5 = double_4 * double_7;
	char_2 = char_5 * char_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	double_8 = double_9;
	long_2 = v_PupilDia(double_7,double_3);

	float_5 = float_3 + float_2;
	v_mymin(double_4,double_2);

	unsigned_int_8 = unsigned_int_4 + unsigned_int_7;
	unsigned_int_7 = unsigned_int_9 * unsigned_int_4;
	double_5 = double_10 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_Bn( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_2;
	float_3 = v_mymax(double_3,double_4);

	double_5 = double_4 + double_5;
	char_1 = v_PresEfromPresS(double_4,double_3,double_1);

	int_2 = int_1 * int_1;
	unsigned_int_1 = v_TempEfromTempS(double_5,double_1,double_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 * int_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	unsigned_int_3 = v_Deltam(double_4,double_1,double_5,double_3,double_3,double_4,int_4,char_2);

	int_4 = int_1 * int_4;
	float_2 = float_3 * float_2;
	float_1 = float_4 + float_2;
	long_1 = long_1 + long_1;
	short_1 = short_3 + short_3;
	float_2 = float_1 + float_2;
	float_5 = v_swe_revjul(double_6,int_2,int_5,int_2,int_5,double_2);

	double_5 = double_3 + double_4;
	unsigned_int_4 = unsigned_int_5;
	return int_6;
	float_1 = v_AppAltfromTopoAlt(double_1,double_2,double_1,long_2);

}
unsigned int v_Bcity( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char_1 = char_1 + char_2;
	double_1 = double_1;
	return unsigned_int_1;
	float_1 = v_mymax(double_2,double_2);

}
double v_MoonsBrightness( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
	return double_1;
}
short v_MoonPhase( double parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_1;
	char_1 = char_1;
	float_2 = float_1 + float_1;
	return short_1;
}
short v_Bm( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,unsigned int parameter_11,char parameter_12)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	char char_2 = 1;
	double double_8 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short_1 = v_MoonPhase(double_1,double_2,double_3);

	long_1 = long_1 + long_1;
	double_4 = v_MoonsBrightness(double_4,double_5);

	float_2 = float_1 + float_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_1 = v_mymax(double_4,double_6);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		double_3 = v_DistanceAngle(double_5,double_7,double_4,double_2);

		char_1 = char_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		char_3 = char_1 * char_2;
		double_2 = double_3 * double_6;
		char_4 = char_4 * char_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_2;
	}
	unsigned_int_2 = v_Deltam(double_1,double_7,double_6,double_1,double_6,double_8,int_3,char_2);

	long_3 = long_2 * long_2;
	return short_2;
}
short v_Bday( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double_1 = v_DistanceAngle(double_2,double_3,double_1,double_4);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	short_2 = short_1 + short_1;
	float_1 = float_1 + float_2;
	int_1 = int_1 + int_2;
	float_3 = float_2 * float_2;
	float_3 = float_2 + float_2;
	unsigned_int_3 = unsigned_int_4;
	int_4 = int_3 * int_4;
	int_2 = int_1 + int_2;
	unsigned_int_5 = v_Deltam(double_1,double_4,double_4,double_4,double_4,double_3,int_4,char_1);

	float_3 = v_mymax(double_4,double_4);

	float_2 = float_3 * float_1;
	return short_1;
}
int v_Airmass( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_3;
}
float v_mymax( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
int v_ka( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char_2 = char_1 + char_2;
	v_mymin(double_1,double_2);

	long_1 = long_2;
	double_4 = double_3 * double_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	short_1 = short_1 * short_2;
	float_1 = v_mymax(double_1,double_1);

	double_2 = double_5;
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			long_2 = v_kOZ(double_1,double_3,double_3);

			char_2 = char_1;
			unsigned_int_2 = v_Sgn(double_3);

			char_2 = char_3 * char_2;
			char_2 = v_kW(double_5,double_2,double_5);

			int_5 = int_4 * int_1;
			if(1)
			{
				if(1)
				{
					double_4 = double_2;
				}
			}
		}
		if(1)
		{
			char_2 = char_2 + char_3;
			if(1)
			{
				if(1)
				{
					int_6 = int_6 * int_7;
				}
			}
		}
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_2 + char_3;
		}
		if(1)
		{
			v_kR(double_4,double_5);

			unsigned_int_3 = unsigned_int_2;
		}
		float_3 = float_1 * float_2;
		int_6 = int_7 * int_4;
	}
	double_1 = double_1 + double_2;
	return int_8;
}
void v_mymin( double parameter_1,double parameter_2)
{
	if(1)
	{
	}
}
long v_kOZ( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	v_mymin(double_1,double_2);

	int_1 = int_1 + int_1;
	float_2 = float_1 * float_1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	int_2 = int_2 * int_3;
	double_3 = double_2;
	double_2 = double_1 * double_2;
	char_3 = char_3 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		char_1 = char_3;
	}
	int_1 = int_2 + int_3;
	double_5 = double_2 * double_4;
	char_2 = char_2 + char_1;
	double_4 = double_2;
	long_1 = long_1;
	return long_1;
}
char v_kW( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_1;
	char_1 = char_1 + char_2;
	return char_2;
}
int v_kt( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	long long_5 = 1;
	int_2 = int_1 + int_2;
	long_1 = long_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		v_kR(double_1,double_2);

		int_2 = v_ka(double_3,double_2,double_2,double_3,double_2,double_2,double_4,char_1);

		long_3 = long_4;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_3 * double_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char_2 = v_kW(double_3,double_6,double_6);

		int_3 = int_4;
	}
	return int_2;
	long_5 = v_kOZ(double_6,double_3,double_1);

}
void v_kR( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	int_1 = int_2;
	short_1 = short_1;
}
char v_Xlay( double parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float_3 = float_1 + float_2;
	return char_1;
}
unsigned int v_Xext( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int v_Deltam( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,int parameter_7,char parameter_8)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = v_PresEfromPresS(double_1,double_1,double_1);

	long_1 = v_kOZ(double_1,double_2,double_1);

	int_1 = v_Airmass(double_1,double_1);

	float_1 = float_1 * float_1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_1;
	double_3 = double_2 + double_2;
	unsigned_int_1 = v_TempEfromTempS(double_1,double_2,double_1);

	long_1 = long_2 + long_2;
	long_3 = long_1 + long_1;
	if(1)
	{
	}
	float_1 = v_AppAltfromTopoAlt(double_3,double_4,double_4,long_1);

	int_1 = int_3 * int_4;
	long_1 = long_4;
	int_5 = v_kt(double_3,double_4,double_1,double_2,double_1,double_3,double_1,float_2,char_1);

	double_3 = double_2 * double_3;
	if(1)
	{
		long long_5 = 1;
		int_3 = int_5 * int_4;
		if(1)
		{
			double_5 = double_2 * double_2;
		}
		v_kR(double_6,double_3);

		char_2 = v_kW(double_4,double_2,double_5);

		long_5 = long_2 * long_1;
		double_4 = double_5 * double_3;
		int_3 = int_1 + int_2;
		unsigned_int_1 = v_Xext(double_4,double_6,double_5);

		int_1 = int_5 + int_2;
		char_1 = v_Xlay(double_1,double_4,double_7);

		char_1 = char_1 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_4 = double_3 + double_6;
	return unsigned_int_4;
}
double v_DistanceAngle( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = char_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	double_1 = double_3 + double_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		unsigned_int_2 = unsigned_int_2;
	}
	return double_2;
}
unsigned int v_TempEfromTempS( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_Kelvin( double parameter_1)
{
}
char v_PresEfromPresS( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	return char_1;
	v_Kelvin(double_1);

}
unsigned int v_Btwi( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,float parameter_9,char parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_2 = 1;
	double_1 = v_DistanceAngle(double_2,double_1,double_2,double_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_mymax(double_3,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = v_Deltam(double_4,double_5,double_1,double_3,double_3,double_2,int_1,char_2);

	double_3 = double_3 + double_5;
	short_2 = short_1 + short_1;
	unsigned_int_3 = v_TempEfromTempS(double_2,double_1,double_4);

	int_2 = int_1 * int_1;
	long_2 = long_1 * long_2;
	double_4 = double_1 * double_2;
	char_1 = v_PresEfromPresS(double_3,double_1,double_6);

	float_1 = v_AppAltfromTopoAlt(double_6,double_5,double_5,long_3);

	unsigned_int_3 = unsigned_int_1;
	char_3 = char_4;
	double_4 = double_5 * double_1;
	return unsigned_int_2;
	int_3 = v_kt(double_7,double_2,double_5,double_8,double_4,double_3,double_3,float_2,char_2);

}
short v_Bsky( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,long parameter_12,char parameter_13)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	double double_7 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = v_Bcity(double_1,double_1);

			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int int_5 = 1;
			double_1 = double_2 * double_2;
			short_1 = v_Bm(double_1,double_1,double_3,double_3,double_3,double_2,double_2,double_1,double_3,double_3,unsigned_int_2,char_1);

			char_2 = char_2 * char_1;
			if(1)
			{
				int int_3 = 1;
				unsigned_int_2 = v_Btwi(double_3,double_4,double_4,double_2,double_4,double_2,double_3,double_2,float_2,char_2);

				int_2 = int_2 + int_3;
			}
			int_4 = v_Bn(double_3,double_5,double_6,double_3,double_3,double_3,double_3,float_1,char_2);

			int_4 = int_1 + int_5;
		}
	}
	if(1)
	{
		short_2 = v_Bday(double_2,double_5,double_7,double_1,double_6,double_1,double_2,double_1,double_2,char_2);

		double_5 = double_1 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_mymin(double_3,double_6);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_4 = int_2 + int_6;
	}
	return short_2;
}
char v_VisLimMagn( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,double parameter_12,long parameter_13,long parameter_14,char parameter_15)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short_1 = v_Bsky(double_1,double_2,double_3,double_4,double_2,double_1,double_4,double_2,double_5,double_3,double_6,long_1,char_1);

	v_OpticFactor(double_3,double_3,double_3,double_1,char_1,int_1,int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_7 = double_1 + double_2;
	unsigned_int_3 = v_Deltam(double_7,double_7,double_1,double_8,double_7,double_8,int_1,char_1);

	double_2 = double_2 * double_6;
	short_1 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	char_2 = char_1 * char_2;
	if(1)
	{
		int_3 = int_2 + int_3;
	}
	unsigned_int_2 = unsigned_int_2;
	short_3 = short_1 + short_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		int_2 = int_4;
	}
	if(1)
	{
		double_5 = double_1 + double_8;
	}
	if(1)
	{
		short_2 = short_4 * short_4;
	}
	if(1)
	{
		int_3 = int_1 * int_4;
		short_3 = short_1 * short_3;
		if(1)
		{
			double_5 = double_3 * double_4;
		}
	}
	if(1)
	{
		short_5 = short_6;
		int_3 = int_2 + int_5;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		}
	}
	short_4 = short_4 * short_2;
	long_2 = long_2 + long_3;
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_5 = int_6 + int_7;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_1;
	double_8 = double_7 + double_1;
	float_3 = float_2 * float_2;
	if(1)
	{
		if(1)
		{
			short short_7 = 1;
			short_7 = short_6 * short_5;
		}
	}
	return char_3;
}
long v_TopoArcVisionis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,double parameter_11,double parameter_12,long parameter_13,double parameter_14,char parameter_15)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	return long_1;
	char_1 = v_VisLimMagn(double_1,double_2,double_1,double_2,double_2,double_1,double_2,double_2,double_1,double_3,double_1,double_3,long_1,long_2,char_1);

}
short v_swe_fixstar_mag( char parameter_1,double parameter_2,char parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long_1 = v_strncpy(char_1,short_1,float_1);

	short_1 = short_1 + short_2;
	float_2 = v_swi_fopen(int_1,char_2,char_1,char_1);

	char_3 = char_3 * char_2;
	short_4 = short_1 * short_3;
	char_2 = v_swi_strcpy(char_4,char_5);

	double_2 = double_1 + double_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		long_1 = v_swi_right_trim(char_1);

		int_1 = int_2;
	}
	double_2 = double_2 * double_3;
	float_2 = float_2 * float_3;
	return short_1;
	int_1 = v_swi_cutstr(char_2,char_1,char_5,int_3);

}
short v_call_swe_fixstar_mag( char parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	short_1 = v_swe_fixstar_mag(char_1,double_1,char_1);

	float_2 = float_1 * float_1;
	long_1 = long_2;
	if(1)
	{
		float_1 = float_3 + float_3;
	}
	float_5 = float_3 + float_4;
	int_1 = int_2;
	int_3 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	return short_2;
}
short v_Magnitude( double parameter_1,double parameter_2,char parameter_3,char parameter_4,double parameter_5,char parameter_6,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_2 = float_1 + float_2;
	float_3 = float_3 + float_4;
	double_2 = double_1 + double_1;
	double_1 = double_3 * double_1;
	double_4 = double_4 * double_3;
	double_2 = double_4 + double_4;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	char controller4vul_149[2];
	fgets(controller4vul_149 ,2 ,stdin);
	if( strcmp( controller4vul_149, "$") < 0)
	{
		double double_5 = 1;
		double_5 = double_2;
		char controller4vul_150[3];
		fgets(controller4vul_150 ,3 ,stdin);
		if( strcmp( controller4vul_150, "nC") > 0)
		{
			unsigned_int_1 = v_swe_pheno_ut(double_3,short_2,char_1,double_1,char_2,uni_para);

		}
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return short_1;
}
short v_SunRA( double parameter_1,long parameter_2,char parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	long_1 = long_1;
	float_1 = v_swe_degnorm(double_1);

	float_1 = float_2 + float_1;
	long_2 = v_swe_calc(double_1,int_1,double_2,double_1,char_1,-1 );

	int_3 = int_2 + int_3;
	double_1 = double_2 + double_1;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		long long_4 = 1;
		char_3 = char_2 * char_1;
		double_1 = v_swe_deltat_ex(double_1,long_3,char_4);

		long_4 = long_1 * long_4;
		int_3 = int_3 * int_3;
		int_1 = int_4 + int_3;
		double_1 = double_2 * double_3;
		float_2 = v_swe_revjul(double_2,int_3,int_1,int_2,int_4,double_4);

		char_3 = char_1 + char_2;
		if(1)
		{
			short short_2 = 1;
			float float_3 = 1;
			short_2 = short_1 * short_2;
			float_2 = float_2 * float_3;
		}
	}
	double_5 = double_4 * double_4;
	int_4 = int_1 * int_1;
	double_3 = double_4 + double_5;
	return short_1;
}
double v_DeterTAV( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6,double parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_ObjectLoc(double_1,double_2,double_1,char_2,char_2,short_1,double_1,char_2);

	long_1 = v_TopoArcVisionis(double_1,double_1,double_3,double_1,double_2,double_4,double_5,double_6,double_4,double_1,double_4,double_1,long_1,double_2,char_2);

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
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		short_1 = v_Magnitude(double_1,double_6,char_3,char_2,double_4,char_3,-1 );

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
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return double_3;
	short_2 = v_SunRA(double_7,long_1,char_3);

}
char v_TopoAltfromAppAlt( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			short_1 = short_2 * short_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
		double_1 = double_1 + double_1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return char_1;
}
float v_AppAltfromTopoAlt( double parameter_1,double parameter_2,double parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_3;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		int_4 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int_4 = int_3 + int_4;
		}
		if(1)
		{
			int_1 = int_4 + int_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		char_1 = v_TopoAltfromAppAlt(double_4,double_2,double_4);

		char_1 = char_2 + char_2;
		long_3 = long_1 * long_2;
	}
	int_5 = int_6;
	if(1)
	{
		long_2 = long_3;
	}
	return float_1;
}
unsigned int v_call_swe_fixstar( char parameter_1,double parameter_2,long parameter_3,double parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = v_swe_fixstar(char_3,double_1,float_1,double_2,char_1);

	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 * double_2;
	short_2 = short_1 * short_2;
	return unsigned_int_2;
}
char v_ObjectLoc( double parameter_1,double parameter_2,double parameter_3,char parameter_4,char parameter_5,short parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_2;
	long_1 = v_swe_calc(double_4,int_3,double_3,double_4,char_1,-1 );

	float_1 = v_AppAltfromTopoAlt(double_1,double_4,double_2,long_1);

	float_2 = float_1 * float_2;
	double_4 = double_4 * double_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_DeterObject(char_1);

	unsigned_int_1 = v_call_swe_fixstar(char_2,double_1,long_1,double_5,char_3);

	float_3 = float_2 * float_3;
	if(1)
	{
		int_4 = int_4 * int_3;
	}
	if(1)
	{
		char_2 = char_3 * char_3;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	char_4 = char_3 + char_1;
	long_2 = long_2 * long_1;
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
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_5 + int_2;
		}
		if(1)
		{
			float float_4 = 1;
			v_swe_azalt(double_1,int_5,double_4,double_4,double_6,double_6,double_7);

			char_5 = char_5 + char_2;
			int_2 = int_5;
			float_1 = float_4;
			if(1)
			{
				long_1 = long_1 + long_2;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double_4 = v_swe_deltat_ex(double_3,long_1,char_1);

				short_3 = short_1 + short_2;
			}
			if(1)
			{
				double_3 = double_7 * double_6;
				if(1)
				{
					int int_6 = 1;
					int_4 = int_3 * int_6;
				}
				char_4 = char_4;
			}
		}
	}
	return char_5;
}
unsigned int v_Sgn( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_call_swe_rise_trans( double parameter_1,short parameter_2,char parameter_3,int parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float_1 = float_2;
	short_1 = short_2;
	char_1 = v_swe_rise_trans(double_1,char_2,char_3,long_1,char_4,double_2,double_1,double_1,double_3,char_1);

	double_3 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_4 + double_2;
	return int_1;
}
void v_calc_rise_and_set( double parameter_1,float parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,float parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	v_swe_calc_ut(double_1,float_1,float_1,double_2,char_1);

	float_2 = v_swe_degnorm(double_2);

	v_swe_azalt(double_2,int_1,double_3,double_3,double_2,double_2,double_3);

}
unsigned int v_my_rise_trans( double parameter_1,short parameter_2,char parameter_3,double parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		float_1 = v_DeterObject(char_1);

		v_calc_rise_and_set(double_1,float_1,double_1,double_1,unsigned_int_1,float_1,double_2,char_1);

		int_2 = int_2 * int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int_2 = v_call_swe_rise_trans(double_3,short_1,char_2,int_2,float_1,double_3,double_1,double_3,double_1,char_3);

		long_2 = long_1 + long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	return unsigned_int_3;
}
int v_RiseSet( double parameter_1,double parameter_2,double parameter_3,char parameter_4,int parameter_5,char parameter_6,int parameter_7,double parameter_8,char parameter_9)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = v_my_rise_trans(double_1,short_2,char_1,double_2,float_1,double_3,double_4,double_4,char_1);

		short_2 = short_3;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		double_4 = double_4 + double_4;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	return int_1;
	float_1 = v_DeterObject(char_3);

}
double v_swe_pheno( double parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_4;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int_3 = int_2 * int_3;
	}
	float_2 = float_1 * float_1;
	short_1 = short_3 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	short_4 = short_3 * short_2;
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
		double_2 = double_3 + double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
		}
		if(1)
		{
		}
		int_4 = int_4 + int_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		long_3 = long_2 * long_3;
	}
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_5 = int_5 + int_3;
	}
	if(1)
	{
		double_3 = double_2;
	}
	char controller4vul_152[2];
	fgets(controller4vul_152 ,2 ,stdin);
	if( strcmp( controller4vul_152, "H") < 0)
	{
		int int_7 = 1;
		int int_8 = 1;
		long long_5 = 1;
		int int_9 = 1;
		if(1)
		{
			float_1 = float_1 * float_3;
			unsigned_int_2 = unsigned_int_1;
			int_5 = int_5;
		}
		char controller4vul_153[2];
		fgets(controller4vul_153 ,2 ,stdin);
		if( strcmp( controller4vul_153, "-") < 0)
		{
			int int_6 = 1;
			short short_5 = 1;
			int_6 = int_5 * int_5;
			char controller4vul_154[2];
			fgets(controller4vul_154 ,2 ,stdin);
			if( strcmp( controller4vul_154, "@") > 0)
			{
				long_4 = v_swe_calc(double_3,int_2,double_4,double_5,char_3,uni_para);

				int_4 = int_7;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_2 = int_3;
			}
			short_3 = short_5 * short_1;
			double_3 = double_2;
			float_3 = float_1 + float_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		}
		if(1)
		{
			double_6 = double_2 * double_5;
			int_1 = int_2 + int_1;
			float_3 = float_2;
			int_7 = int_3 + int_8;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			long_5 = long_2 * long_3;
			unsigned_int_4 = unsigned_int_4;
			if(1)
			{
				long_5 = long_1 + long_2;
			}
			double_3 = double_5 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
			float_3 = float_3;
			int_5 = int_9 + int_2;
			if(1)
			{
				int_5 = int_3 + int_5;
			}
		}
		if(1)
		{
			short short_6 = 1;
			long_5 = long_3 * long_1;
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_7 + unsigned_int_7;
			}
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			short_6 = short_3;
			if(1)
			{
				short_2 = short_3;
			}
		}
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
			double double_7 = 1;
			int int_10 = 1;
			double_3 = double_7 * double_7;
			int_9 = int_10 * int_2;
			if(1)
			{
				int_4 = int_10 * int_9;
				int_4 = int_5;
			}
			if(1)
			{
				int_2 = int_3 * int_8;
				float_1 = float_1;
			}
			if(1)
			{
				long_5 = long_1;
				double_7 = double_7 * double_7;
			}
			char_2 = char_2 * char_3;
		}
		if(1)
		{
			long_1 = long_3;
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
		char_1 = char_2;
	}
	if(1)
	{
		double_5 = double_4 * double_5;
		if(1)
		{
		}
		double_2 = double_1;
		long_4 = long_3 * long_2;
		if(1)
		{
			double double_8 = 1;
			if(1)
			{
			}
			if(1)
			{
			}
			double_5 = double_8;
			if(1)
			{
				int int_11 = 1;
				short short_7 = 1;
				char_2 = char_3;
				unsigned_int_4 = unsigned_int_1;
				short_4 = short_3 * short_3;
				long_4 = long_4 * long_4;
				long_4 = long_1 + long_4;
				double_8 = double_6;
				int_11 = int_3;
				short_1 = short_7;
				float_3 = float_3;
			}
		}
	}
	if(1)
	{
		double_4 = double_6 + double_1;
	}
	return double_2;
}
unsigned int v_swe_pheno_ut( double parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = float_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_151[2];
	fgets(controller4vul_151 ,2 ,stdin);
	if( strcmp( controller4vul_151, "a") > 0)
	{
		int int_2 = 1;
		double double_5 = 1;
		double_3 = v_swe_pheno(double_2,unsigned_int_1,int_1,double_4,char_1,uni_para);

		int_2 = int_2;
		double_3 = double_5 + double_1;
	}
	float_4 = float_2 * float_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float_3 = float_1 + float_4;
		short_1 = short_1 + short_2;
	}
	return unsigned_int_1;
}
long v_moon_event_arc_vis( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,float parameter_6,double parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned_int_1 = v_swe_pheno_ut(double_1,short_1,char_1,double_2,char_2,-1 );

	long_1 = v_x2min(double_1,double_2,double_1);

	int_1 = int_2;
	return long_1;
	int_2 = v_RiseSet(double_1,double_2,double_2,char_2,int_1,char_3,int_3,double_3,char_3);

	unsigned_int_1 = v_Sgn(double_2);

	char_4 = v_ObjectLoc(double_3,double_3,double_2,char_1,char_3,short_2,double_1,char_2);

	double_2 = v_DeterTAV(double_4,double_3,double_4,double_3,char_3,char_5,double_2,char_6);

}
double v_MoonEventJDut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,short parameter_5,long parameter_6,double parameter_7,char parameter_8)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long_1 = v_moon_event_arc_vis(double_1,double_2,double_1,double_1,char_1,float_1,double_3,char_2);

	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	long_2 = v_moon_event_vis_lim(double_2,double_1,double_2,double_2,unsigned_int_1,short_1,double_1,char_3);

}
float v_DeterObject( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_2;
	float_3 = float_1 * float_2;
	float_5 = float_4 * float_1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
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
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_4;
}
long v_default_heliacal_parameters( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double_2 = double_2 * double_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 * double_1;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char_1 = char_1 + char_1;
		int_3 = int_3 + int_4;
	}
	return long_3;
}
double v_strcpy_VBsafe( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_2;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				int_4 = int_2 + int_1;
			}
			int_4 = int_1 * int_4;
		}
	}
	double_3 = double_1 * double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	int_4 = int_1 + int_3;
	double_1 = double_4 + double_5;
	return double_6;
}
void v_swe_heliacal_ut( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,int parameter_6,float parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_1;
	char controller4vul_142[2];
	fgets(controller4vul_142 ,2 ,stdin);
	if( strcmp( controller4vul_142, "H") > 0)
	{
		short_1 = v_heliacal_ut(double_1,double_2,double_2,double_1,char_1,short_2,long_1,double_2,char_2,uni_para);

	}
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_1 = double_3 + double_4;
		double_1 = double_3 * double_4;
	}
}
double v_call_heliacal_event( double parameter_1,short parameter_2,char parameter_3,float parameter_4,char parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_5 = 1;
	float_2 = float_1 * float_1;
	long_2 = long_1 + long_1;
	short_1 = short_1 * short_1;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		long_2 = long_3 + long_2;
	}
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	char_1 = char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_2 + double_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			long_2 = long_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			char_4 = char_1 * char_3;
			double_2 = double_3;
			short_2 = short_1 + short_1;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		char controller4vul_138[3];
		fgets(controller4vul_138 ,3 ,stdin);
		if( strcmp( controller4vul_138, "/R") < 0)
		{
			float float_3 = 1;
			short short_3 = 1;
			float float_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char controller4vul_139[3];
			fgets(controller4vul_139 ,3 ,stdin);
			if( strcmp( controller4vul_139, "Fi") < 0)
			{
				unsigned int unsigned_int_6 = 1;
				float_2 = float_1;
				double_1 = double_3 * double_2;
				if(1)
				{
					long_2 = long_3 * long_2;
				}
				if(1)
				{
					short_1 = short_2;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
					float_3 = float_1 + float_3;
				}
				short_1 = short_3;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
				char controller4vul_140[2];
				fgets(controller4vul_140 ,2 ,stdin);
				if( strcmp( controller4vul_140, "V") < 0)
				{
					double_3 = double_2 * double_3;
					double_4 = double_3 + double_2;
					char controller4vul_141[3];
					fgets(controller4vul_141 ,3 ,stdin);
					if( strcmp( controller4vul_141, "m,") < 0)
					{
						v_swe_heliacal_ut(double_3,double_4,double_4,double_4,char_5,int_1,float_2,double_4,char_1,uni_para);

						double_3 = double_1 + double_2;
					}
					float_3 = float_4;
				}
				int_4 = int_2;
				unsigned_int_2 = unsigned_int_3;
				if(1)
				{
					float_2 = float_2 + float_4;
				}
				if(1)
				{
					float_2 = float_1;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
					int_4 = int_1 * int_2;
					int_5 = int_6;
				}
				unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
			}
			if(1)
			{
				long_1 = long_1 * long_3;
				short_1 = short_2 + short_2;
				if(1)
				{
					short_3 = short_3 + short_1;
				}
				if(1)
				{
					int_2 = int_6 * int_6;
					double_4 = double_3;
					double_3 = double_1 + double_4;
				}
				int_2 = int_5;
			}
			if(1)
			{
				float_3 = float_4 * float_3;
				int_3 = int_4 + int_3;
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_8 = 1;
					unsigned_int_8 = unsigned_int_7 + unsigned_int_5;
				}
				char controller_9[3];
				fgets(controller_9 ,3 ,stdin);
				if( strcmp( controller_9, "w9") > 0)
				{
					long long_4 = 1;
					long_3 = long_1 * long_3;
					long_4 = long_3 + long_2;
					int_1 = int_3 + int_4;
				}
				char_4 = char_3 * char_4;
				if(1)
				{
					long long_5 = 1;
					double_4 = double_4;
					long_1 = long_5 * long_2;
				}
			}
		}
	}
	return double_3;
}
unsigned int v_swe_lun_occult_where( double parameter_1,double parameter_2,char parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	float_1 = v_eclipse_where(double_1,float_2,char_1,char_2,double_2,double_3,char_3);

	char_1 = v_eclipse_how(double_4,int_1,char_3,float_2,double_4,double_5,double_1,double_5,char_2);

	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_6 = double_3 + double_4;
	}
	int_2 = int_1;
	float_3 = float_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	return unsigned_int_2;
	char_2 = v_swi_set_tid_acc(double_6,unsigned_int_3,char_1,char_4);

}
char v_swe_lun_occult_when_glob( double parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5,double parameter_6,short parameter_7,char parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_8 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		char_1 = v_swi_set_tid_acc(double_1,unsigned_int_4,char_1,char_2);

		long_1 = v_swe_calc(double_2,int_1,double_1,double_3,char_1,-1 );

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3;
	double_1 = v_swe_deltat_ex(double_4,long_1,char_1);

	short_1 = short_1 * short_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = v_swe_degnorm(double_4);

		char_2 = char_1 + char_2;
		char_2 = char_1;
		double_5 = double_2 + double_4;
		unsigned_int_2 = v_calc_planet_star(double_1,double_5,char_1,char_2,double_2,char_2);

		int_2 = int_2;
	}
	double_5 = v_swi_dot_prod_unit(double_2,double_3);

	float_2 = float_1 + float_2;
	char_2 = char_3 * char_1;
	if(1)
	{
		char char_6 = 1;
		char char_7 = 1;
		char_3 = char_1 * char_3;
		char_4 = v_find_zero(double_2,double_3,double_2,double_6,double_7,double_3);

		char_1 = char_4 + char_4;
		float_1 = v_eclipse_where(double_6,float_2,char_4,char_5,double_2,double_3,char_1);

		char_5 = char_6 + char_7;
		double_7 = double_2 * double_4;
		short_1 = short_1;
	}
	int_1 = int_1 * int_1;
	long_2 = v_find_maximum(double_4,double_7,double_5,double_3,double_2,double_7);

	float_3 = float_4;
	return char_8;
}
short v_occult_when_loc( double parameter_1,int parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,double parameter_7,float parameter_8,char parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	return short_1;
}
void v_swe_lun_occult_when_loc( double parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,double parameter_5,double parameter_6,double parameter_7,short parameter_8,char parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = v_swi_set_tid_acc(double_1,unsigned_int_1,char_1,char_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	short_1 = v_occult_when_loc(double_1,int_3,char_1,char_2,double_1,double_2,double_3,float_1,char_3);

	double_5 = double_3 + double_4;
	double_5 = double_4 + double_4;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_1 * char_3;
	double_5 = double_3 + double_6;
	float_3 = v_eclipse_where(double_5,float_3,char_2,char_1,double_6,double_4,char_1);

}
long v_call_lunar_occultation( double parameter_1,double parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5,double parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	double double_8 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_10 = 1;
	short short_2 = 1;
	char char_4 = 1;
	float float_4 = 1;
	char char_5 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_4 = 1;
	v_ut_to_lmt_lat(double_1,double_2,double_3,char_1);

	double_4 = v_hms(double_5,short_1);

	char_1 = v_swe_lun_occult_when_glob(double_5,float_1,char_2,unsigned_int_1,char_2,double_4,short_1,char_1);

	int_1 = int_1 * int_2;
	if(1)
	{
		double double_9 = 1;
		short_1 = v_swe_set_topo(double_4,double_6,double_6);

		char_1 = v_do_printf(char_3);

		double_6 = v_swe_deltat_ex(double_4,long_1,char_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_2 = v_swe_revjul(double_7,int_1,int_1,int_3,int_1,double_8);

		char_1 = v_hms_from_tjd(double_3);

		double_2 = double_9 + double_4;
	}
	return long_2;
	v_swe_lun_occult_when_loc(double_3,unsigned_int_3,char_1,float_3,double_5,double_5,double_10,short_2,char_4);

	v_swe_calc_ut(double_8,float_1,float_4,double_6,char_4);

	unsigned_int_2 = v_swe_lun_occult_where(double_7,double_2,char_4,double_6,double_6,double_1,char_5);

	v_dms(double_2,float_2);

	char_1 = v_swe_split_deg(double_11,int_1,int_3,long_2,char_4,double_2,unsigned_int_4);

}
long v_swe_sol_eclipse_where( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_2;
	double_2 = double_2;
	char_1 = v_swi_set_tid_acc(double_1,unsigned_int_1,char_2,char_2);

	unsigned_int_2 = unsigned_int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = v_eclipse_how(double_1,int_1,char_1,float_1,double_2,double_2,double_3,double_3,char_2);

	double_3 = double_2;
	return long_1;
	float_2 = v_eclipse_where(double_3,float_3,char_1,char_2,double_3,double_3,char_3);

}
char v_eclipse_how( double parameter_1,int parameter_2,char parameter_3,float parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	return char_1;
	double_1 = v_swe_deltat_ex(double_2,long_1,char_2);

	short_1 = v_swe_set_topo(double_3,double_1,double_4);

	unsigned_int_1 = v_calc_planet_star(double_3,double_5,char_3,char_2,double_2,char_1);

	long_1 = v_swe_calc(double_3,int_1,double_2,double_6,char_2,-1 );

	double_5 = v_swi_epsiln(double_4,short_2);

	double_3 = v_swe_sidtime0(double_6,double_5,double_6);

	short_1 = v_swe_sidtime(double_1);

	float_1 = v_swe_degnorm(double_6);

	double_7 = v_swe_cotrans(double_6,double_8,double_9);

	v_swe_azalt(double_1,int_1,double_1,double_4,double_8,double_6,double_8);

	double_2 = v_swi_dot_prod_unit(double_9,double_7);

}
void v_swe_sol_eclipse_when_glob( double parameter_1,char parameter_2,short parameter_3,double parameter_4,short parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	int int_4 = 1;
	double double_8 = 1;
	float float_4 = 1;
	int int_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_9 = 1;
	int int_8 = 1;
	char char_7 = 1;
	long long_5 = 1;
	int int_9 = 1;
	double double_10 = 1;
	char char_8 = 1;
	short short_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	char char_9 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_10 = 1;
	char char_10 = 1;
	float float_7 = 1;
	short short_6 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	char_2 = char_1 * char_2;
	float_1 = float_2;
	int_1 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	double_1 = v_swe_deltat_ex(double_2,long_1,char_2);

	int_1 = int_2 + int_1;
	char_3 = char_3 + char_1;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_3 * int_2;
	char_1 = char_2 + char_3;
	float_3 = float_1 + float_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_1 * double_2;
	double_2 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
	long_2 = long_1 * long_1;
	char_3 = char_4;
	float_2 = float_3 + float_2;
	double_4 = double_5;
	double_1 = double_5 * double_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		long_1 = v_find_maximum(double_2,double_6,double_4,double_6,double_7,double_3);

		int_2 = int_3 + int_3;
	}
	int_1 = int_1 * int_2;
	double_6 = double_7 * double_1;
	char_5 = char_3 + char_5;
	double_3 = double_2 * double_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 * int_4;
	}
	double_5 = double_8 + double_6;
	int_2 = int_1 + int_3;
	float_3 = float_1 + float_1;
	int_2 = int_4 * int_4;
	float_1 = float_1 + float_2;
	if(1)
	{
		float_2 = float_2 + float_3;
	}
	if(1)
	{
		float_4 = float_3 + float_3;
		int_3 = int_5 + int_2;
	}
	char_4 = char_6 * char_4;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_5;
	float_2 = float_1 + float_4;
	int_6 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_5;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_5;
	double_3 = double_5;
	if(1)
	{
		int_7 = int_4 * int_5;
	}
	char_6 = char_4 * char_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
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
			if(1)
			{
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				float_1 = v_swe_degnorm(double_5);

				long_3 = long_1;
				long_2 = long_4;
			}
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			char_6 = char_5 * char_4;
			double_7 = double_9 * double_5;
			int_3 = int_4 * int_8;
		}
		char_5 = char_2 + char_7;
		long_2 = long_4 + long_5;
	}
	long_5 = long_1 + long_1;
	long_3 = v_swe_calc(double_1,int_9,double_3,double_10,char_8,-1 );

	short_4 = short_1 + short_1;
	float_5 = float_5 + float_1;
	if(1)
	{
	}
	unsigned_int_8 = unsigned_int_1 + unsigned_int_7;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_9 + unsigned_int_4;
		long_5 = long_5 + long_2;
	}
	int_8 = int_5 * int_5;
	if(1)
	{
		float_6 = float_3 + float_1;
		int_9 = int_2 * int_8;
	}
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_3 * int_3;
		double_8 = double_10;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	}
	if(1)
	{
		int_7 = int_6 + int_6;
		int_5 = int_7 * int_6;
	}
	if(1)
	{
		double_9 = v_swi_dot_prod_unit(double_6,double_9);

		double_1 = double_9 + double_7;
		int_6 = int_5 + int_2;
	}
	if(1)
	{
		double_3 = double_10 * double_9;
		char_9 = v_find_zero(double_7,double_9,double_9,double_11,double_9,double_4);

		double_7 = double_8 * double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_9 * unsigned_int_2;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_4;
	}
	if(1)
	{
		double_7 = double_11 + double_8;
		unsigned_int_8 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
	}
	if(1)
	{
		float_6 = v_eclipse_where(double_11,float_5,char_8,char_4,double_6,double_7,char_3);

		unsigned_int_9 = unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_5 * int_5;
	}
	if(1)
	{
		float_6 = float_5 * float_2;
	}
	double_7 = double_7 + double_4;
	float_4 = float_4 * float_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			char_5 = char_8 * char_3;
			int_2 = int_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_9 = unsigned_int_6 * unsigned_int_10;
			}
			unsigned_int_5 = unsigned_int_8;
			int_1 = int_4 + int_6;
		}
		if(1)
		{
			if(1)
			{
				int_6 = int_2 * int_1;
			}
			short_2 = short_2 * short_3;
			double_2 = double_6 * double_4;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
			}
			if(1)
			{
				double_7 = double_10;
			}
			if(1)
			{
				int_2 = int_9 * int_10;
			}
			if(1)
			{
				float_2 = float_1 + float_3;
			}
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		char_1 = char_10 * char_7;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_9;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				short short_5 = 1;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					if(1)
					{
					}
					if(1)
					{
						double_1 = double_4 + double_8;
					}
					if(1)
					{
						int_9 = int_8 + int_4;
					}
					if(1)
					{
						float_1 = float_6 * float_7;
					}
				}
				float_7 = float_2 * float_3;
				short_5 = short_5 + short_6;
			}
		}
	}
	if(1)
	{
		if(1)
		{
		}
		double_4 = double_2;
		if(1)
		{
		}
		long_1 = long_6 + long_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_8 + unsigned_int_6;
			float_1 = float_2;
		}
	}
	if(1)
	{
		long_3 = long_7 + long_4;
		double_9 = double_1 * double_1;
	}
	if(1)
	{
		long_6 = long_1 * long_6;
		char_5 = char_8 * char_3;
	}
	char_10 = char_4;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		unsigned int unsigned_int_11 = 1;
		long_2 = long_7 * long_5;
		char_5 = v_swi_set_tid_acc(double_8,unsigned_int_2,char_9,char_3);

		unsigned_int_12 = unsigned_int_11 * unsigned_int_11;
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_10 + unsigned_int_6;
		if(1)
		{
			long_5 = long_2;
		}
	}
	if(1)
	{
		double_10 = double_9 + double_11;
	}
	if(1)
	{
		short short_7 = 1;
		short short_8 = 1;
		unsigned int unsigned_int_13 = 1;
		short_8 = short_6 + short_7;
		float_2 = float_3 + float_5;
		unsigned_int_13 = unsigned_int_8;
		if(1)
		{
			char char_11 = 1;
			char_5 = char_1 * char_11;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			long long_8 = 1;
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				short short_9 = 1;
				int int_11 = 1;
				char_3 = v_eclipse_how(double_9,int_5,char_6,float_5,double_7,double_7,double_10,double_1,char_5);

				short_9 = short_1 * short_1;
				if(1)
				{
				}
				if(1)
				{
				}
				int_4 = int_11 * int_10;
				if(1)
				{
					float_1 = float_7 * float_5;
				}
				if(1)
				{
					unsigned_int_13 = unsigned_int_12 * unsigned_int_6;
				}
			}
			unsigned_int_2 = unsigned_int_13 + unsigned_int_5;
			if(1)
			{
				double_1 = double_1 * double_9;
			}
			long_4 = long_3 + long_3;
			long_8 = long_3 + long_4;
		}
		double_2 = double_3 * double_4;
	}
}
unsigned int v_calc_planet_star( double parameter_1,double parameter_2,char parameter_3,char parameter_4,double parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = v_swe_fixstar(char_1,double_3,float_1,double_2,char_2);

	int_2 = int_1 * int_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_4 = double_5;
	}
	if(1)
	{
		if(1)
		{
			char controller_4[3];
			fgets(controller_4 ,3 ,stdin);
			if( strcmp( controller_4, "JF") > 0)
			{
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					float float_2 = 1;
					long_1 = v_swe_calc(double_6,int_2,double_2,double_3,char_1,-1 );

					float_2 = float_2 + float_1;
				}
			}
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_2 * long_1;
			}
		}
	}
	return unsigned_int_2;
}
float v_eclipse_where( double parameter_1,float parameter_2,char parameter_3,char parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	double double_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = v_calc_planet_star(double_3,double_4,char_1,char_1,double_1,char_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = v_swe_deltat_ex(double_3,long_1,char_2);

	double_3 = double_5 + double_2;
	double_3 = v_swi_dot_prod_unit(double_5,double_3);

	int_1 = int_1;
	long_2 = v_swe_calc(double_4,int_1,double_1,double_3,char_1,-1 );

	int_3 = int_2 + int_2;
	short_2 = v_swe_sidtime(double_2);

	short_1 = short_2 * short_2;
	if(1)
	{
		int int_4 = 1;
		double_1 = v_swe_sidtime0(double_5,double_5,double_1);

		int_2 = int_3 + int_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	int_1 = int_2 + int_5;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	double_1 = v_deltat(double_3);

	float_1 = v_swe_degnorm(double_6);

	char_2 = char_3 * char_2;
	v_swi_polcart(double_7,double_4);

	int_1 = int_2 + int_1;
	return float_2;
	v_swi_cartpol(double_4,double_4);

}
long v_eclipse_when_loc( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_2;
	return long_1;
}
double v_swe_sol_eclipse_when_loc( double parameter_1,long parameter_2,double parameter_3,double parameter_4,double parameter_5,char parameter_6,char parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float_2 = float_1 + float_2;
	char_1 = v_swi_set_tid_acc(double_1,unsigned_int_1,char_1,char_2);

	float_1 = v_eclipse_where(double_2,float_3,char_1,char_1,double_3,double_1,char_1);

	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			int_1 = int_2 * int_2;
		}
	}
	long_1 = v_eclipse_when_loc(double_3,unsigned_int_2,double_3,double_2,double_4,double_4,char_1);

	double_4 = double_4;
	char_4 = char_3 * char_3;
	if(1)
	{
	}
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	short_2 = short_3 * short_4;
	return double_2;
}
short v_call_solar_eclipse( double parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_7 = 1;
	char char_8 = 1;
	double double_9 = 1;
	float float_6 = 1;
	short short_5 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_6 = 1;
	float_1 = float_1 + float_1;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_2 + float_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	float_4 = float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_1 * short_2;
		if(1)
		{
			if(1)
			{
				double_3 = double_3 + double_1;
			}
			if(1)
			{
				float float_5 = 1;
				float_4 = float_1 + float_3;
				char_1 = char_1 + char_2;
				if(1)
				{
					int_2 = int_1 + int_2;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
					float_5 = float_2;
				}
				if(1)
				{
					float_2 = float_5 + float_1;
					unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
					char_2 = char_3 + char_3;
				}
				if(1)
				{
					double_2 = double_4 * double_5;
					double_4 = double_4;
					float_4 = float_3 + float_4;
				}
				if(1)
				{
					int_3 = int_4;
				}
				if(1)
				{
					int_1 = int_5 * int_6;
					if(1)
					{
						for(int looper_2=0; looper_2<1;looper_2++)
						{
							if(1)
							{
								char_1 = char_3 + char_2;
							}
						}
					}
					unsigned_int_3 = unsigned_int_1;
					v_ut_to_lmt_lat(double_5,double_3,double_1,char_2);

					long_3 = long_1 * long_2;
					double_1 = double_1 * double_6;
					short_1 = short_2 * short_1;
					char_5 = char_4 * char_2;
					if(1)
					{
						char_6 = v_swe_split_deg(double_5,int_2,int_2,long_4,char_5,double_3,unsigned_int_2);

						double_1 = double_3;
					}
					if(1)
					{
						unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
					}
					if(1)
					{
						int_3 = int_1 + int_3;
					}
					if(1)
					{
						double_5 = double_1 + double_2;
					}
					if(1)
					{
						double_8 = double_6 + double_7;
					}
					if(1)
					{
						double_8 = double_6;
					}
					if(1)
					{
						long_4 = long_2;
					}
					if(1)
					{
						double_2 = double_5 * double_7;
					}
					if(1)
					{
						char_4 = char_4 * char_2;
					}
					v_swe_sol_eclipse_when_glob(double_4,char_3,short_2,double_7,short_2,char_2);

					long_2 = long_1;
					double_4 = double_2 * double_1;
					int_4 = int_3;
				}
			}
		}
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_7 = 1;
			long long_5 = 1;
			long long_7 = 1;
			long long_8 = 1;
			int int_8 = 1;
			if(1)
			{
				long_3 = v_swe_sol_eclipse_where(double_5,char_4,double_4,double_2,char_5);

				float_3 = float_3 + float_3;
			}
			double_6 = v_swe_deltat_ex(double_2,long_4,char_7);

			short_3 = short_3 * short_1;
			if(1)
			{
				short_2 = short_2 * short_2;
				double_2 = double_2;
			}
			if(1)
			{
				double_8 = double_3 + double_7;
				unsigned_int_4 = unsigned_int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				char_4 = v_do_printf(char_1);

				float_4 = float_3 + float_4;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
			}
			if(1)
			{
				char_2 = char_3 * char_8;
				long_4 = v_swe_calc(double_7,int_3,double_7,double_9,char_7,-1 );

				double_1 = double_4 + double_5;
			}
			if(1)
			{
				float_2 = float_1 + float_6;
			}
			double_1 = double_2 * double_2;
			if(1)
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						double_2 = double_5;
					}
				}
			}
			int_3 = int_7 + int_1;
			int_2 = int_3;
			long_5 = long_1;
			int_6 = int_4 + int_4;
			if(1)
			{
				long long_6 = 1;
				long_8 = long_6 + long_7;
			}
			if(1)
			{
				double_1 = double_2;
			}
			if(1)
			{
				long_2 = long_8 + long_5;
			}
			if(1)
			{
				short short_4 = 1;
				float_6 = v_swe_revjul(double_5,int_5,int_5,int_2,int_4,double_1);

				short_3 = short_2 + short_4;
			}
			short_3 = short_5 * short_3;
			int_2 = int_4 + int_3;
			double_2 = double_5 + double_9;
			char_2 = char_6 + char_1;
			float_1 = float_2 * float_1;
			double_8 = v_hms(double_4,short_1);

			double_4 = double_2 + double_4;
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				if(1)
				{
					v_dms(double_1,float_6);

					int_7 = int_4 + int_1;
				}
				if(1)
				{
					long_7 = long_7 + long_1;
				}
				short_5 = v_swe_set_topo(double_3,double_4,double_10);

				unsigned_int_3 = unsigned_int_8 + unsigned_int_1;
				char_3 = v_hms_from_tjd(double_8);

				unsigned_int_1 = unsigned_int_6;
				int_1 = int_1 * int_7;
				char_6 = char_3 + char_8;
			}
			double_8 = v_swe_sol_eclipse_when_loc(double_6,long_3,double_2,double_11,double_6,char_8,char_6);

			double_4 = double_4 + double_4;
			int_8 = int_6 + int_4;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
			if(1)
			{
				unsigned int unsigned_int_9 = 1;
				double_3 = double_11 + double_7;
				unsigned_int_6 = unsigned_int_9 * unsigned_int_6;
				float_2 = float_3 * float_4;
				long_2 = long_8 + long_5;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				long_1 = long_4 * long_7;
			}
		}
	}
	return short_6;
}
char v_swe_split_deg( double parameter_1,int parameter_2,int parameter_3,long parameter_4,char parameter_5,double parameter_6,unsigned int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		char_2 = char_1 + char_2;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_2 * char_1;
		}
	}
	int_3 = int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_1 * float_1;
	}
	int_2 = int_2 * int_1;
	int_3 = int_3 * int_3;
	float_2 = float_1 * float_1;
	short_2 = short_1 + short_2;
	double_2 = double_3 + double_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1;
	}
	return char_1;
}
char v_hms_from_tjd( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_1 = v_hms(double_2,short_1);

	double_3 = double_3 + double_3;
	int_1 = int_1 + int_1;
	int_4 = int_2 * int_3;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
char v_find_zero( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	short_3 = short_3 * short_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	int_3 = int_2 + int_3;
	char_2 = char_2 * char_1;
	char_2 = char_2 + char_1;
	return char_2;
}
unsigned int v_swe_lun_eclipse_when( double parameter_1,long parameter_2,float parameter_3,double parameter_4,short parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	return unsigned_int_1;
	char_1 = v_swi_set_tid_acc(double_1,unsigned_int_1,char_1,char_1);

	float_1 = v_swe_degnorm(double_2);

	long_1 = v_swe_calc(double_2,int_1,double_3,double_4,char_1,-1 );

	double_5 = v_swi_dot_prod_unit(double_1,double_5);

	long_2 = v_find_maximum(double_3,double_4,double_6,double_1,double_2,double_4);

	double_5 = v_swe_deltat_ex(double_1,long_3,char_2);

	float_1 = v_swe_lun_eclipse_how(double_2,double_7,double_6,double_5,char_2);

	char_2 = v_lun_eclipse_how(double_1,long_1,double_2,double_8,char_1);

	char_2 = v_find_zero(double_4,double_9,double_3,double_1,double_9,double_4);

}
double v_swe_lun_eclipse_when_loc( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,short parameter_6,char parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	double double_7 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_2;
	char_1 = v_swe_rise_trans(double_1,char_1,char_1,long_1,char_2,double_1,double_2,double_1,double_1,char_1);

	long_1 = long_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = v_swe_lun_eclipse_when(double_3,long_2,float_2,double_4,short_1,char_1);

	long_2 = long_2 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_2 = int_1;
		}
		if(1)
		{
			char_4 = char_3 + char_3;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			float float_3 = 1;
			int int_4 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			int_1 = int_2 * int_3;
			double_5 = double_3 + double_1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
			double_4 = double_1 + double_2;
			float_2 = v_swe_lun_eclipse_how(double_3,double_4,double_2,double_1,char_1);

			float_3 = float_1 * float_1;
			float_2 = float_3 * float_3;
			char_5 = char_5 + char_1;
			int_2 = int_4 + int_2;
			short_3 = short_1 * short_2;
			int_5 = int_4 + int_5;
			double_1 = double_3 * double_2;
			int_5 = int_1 + int_2;
			unsigned_int_5 = unsigned_int_6;
			int_3 = int_5 + int_1;
			char_5 = char_1 + char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_7 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		}
		float_1 = float_1 + float_2;
	}
	double_1 = double_6 * double_6;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		if(1)
		{
			short short_4 = 1;
			if(1)
			{
				unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
			}
			if(1)
			{
				char_4 = char_3 * char_5;
			}
			short_1 = short_4 * short_4;
		}
		if(1)
		{
			int_6 = int_6 * int_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int_2 = int_7 + int_5;
				}
			}
			short_2 = short_1 * short_3;
			if(1)
			{
				int_3 = int_2;
			}
		}
		if(1)
		{
			float_5 = float_1 + float_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					int_7 = int_2 + int_6;
				}
			}
			long_4 = long_3 * long_2;
			if(1)
			{
				int_3 = int_7 * int_1;
			}
		}
	}
	long_3 = long_4 + long_1;
	if(1)
	{
	}
	if(1)
	{
		char char_6 = 1;
		if(1)
		{
			double_4 = double_6;
		}
		if(1)
		{
			float_1 = float_5 * float_4;
		}
		char_6 = char_4 + char_5;
	}
	double_5 = double_7 * double_6;
	return double_7;
}
double v_swi_dot_prod_unit( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int_1 = int_2;
	int_3 = int_1 + int_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
	}
	return double_2;
}
char v_lun_eclipse_how( double parameter_1,long parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int_2 = int_1 * int_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_2;
	long_1 = long_2 + long_2;
	double_1 = double_1 + double_2;
	char_5 = char_4 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = v_deltat(double_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	int_2 = int_2 + int_3;
	char_5 = char_4;
	double_2 = double_3 + double_2;
	double_2 = double_4;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	int_3 = int_2 * int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_2 = short_3 + short_2;
		double_5 = double_4 * double_4;
	}
	float_1 = float_3 + float_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_2 = short_1;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short_4 = short_2 + short_4;
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	double_5 = double_5;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		char_2 = char_5 * char_5;
	}
	unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	int_5 = int_5 * int_3;
	double_5 = v_swe_deltat_ex(double_6,long_2,char_4);

	double_5 = double_2 * double_6;
	short_4 = short_3 * short_3;
	float_1 = float_3 + float_2;
	double_4 = double_1 + double_3;
	int_3 = int_2 * int_2;
	long_3 = v_swe_calc(double_4,int_1,double_3,double_1,char_4,-1 );

	unsigned_int_7 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 * int_1;
	double_5 = double_7;
	char_1 = char_6 + char_7;
	int_2 = int_2 + int_5;
	int_3 = int_4 * int_2;
	char_3 = char_8 * char_1;
	double_2 = double_5 * double_3;
	int_6 = int_1;
	double_7 = v_swi_dot_prod_unit(double_1,double_7);

	double_1 = double_4 * double_5;
	int_8 = int_1 + int_7;
	if(1)
	{
		unsigned_int_4 = unsigned_int_8 + unsigned_int_1;
		int_3 = int_1;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_4 + short_5;
		char_8 = char_4 + char_3;
	}
	if(1)
	{
		long_3 = long_3;
		double_8 = double_9;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_6 = unsigned_int_8 + unsigned_int_1;
		}
	}
	unsigned_int_5 = unsigned_int_9 + unsigned_int_2;
	double_6 = double_9 * double_1;
	if(1)
	{
		unsigned_int_10 = unsigned_int_1 * unsigned_int_3;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		long long_4 = 1;
		char_1 = char_4 * char_4;
		if(1)
		{
			double_8 = double_2;
		}
		unsigned_int_6 = unsigned_int_2 + unsigned_int_8;
		if(1)
		{
			unsigned int unsigned_int_11 = 1;
			short_4 = short_3;
			unsigned_int_10 = unsigned_int_4 * unsigned_int_11;
			unsigned_int_3 = unsigned_int_3;
		}
		long_4 = long_2 * long_4;
		if(1)
		{
			float_2 = float_2 * float_3;
			double_3 = double_1;
			short_3 = short_2 + short_1;
		}
	}
	if(1)
	{
		double_5 = double_4 * double_8;
	}
	return char_8;
}
float v_swe_lun_eclipse_how( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_2 + double_1;
	char_1 = v_lun_eclipse_how(double_1,long_1,double_3,double_4,char_2);

	long_2 = long_1 * long_1;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_2 + double_1;
		}
	}
	short_1 = short_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_swi_set_tid_acc(double_3,unsigned_int_2,char_3,char_3);

	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_3;
	if(1)
	{
	}
	long_1 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_4 + double_1;
	if(1)
	{
		long long_4 = 1;
		short_3 = v_swe_set_topo(double_2,double_4,double_2);

		v_swe_azalt(double_1,int_1,double_1,double_3,double_2,double_3,double_3);

		long_4 = long_2;
	}
	return float_1;
	v_swe_calc_ut(double_3,float_2,float_1,double_4,char_2);

}
void v_call_lunar_eclipse( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	int int_8 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	double double_15 = 1;
	char_1 = char_1 * char_2;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_5 = 1;
		int int_7 = 1;
		long long_7 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_8 = 1;
		int int_9 = 1;
		float float_7 = 1;
		unsigned int unsigned_int_11 = 1;
		double double_9 = 1;
		int_1 = int_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
				if(1)
				{
					long_1 = long_2;
					unsigned_int_3 = unsigned_int_5;
				}
				if(1)
				{
					double_1 = double_2;
					unsigned_int_6 = v_swe_lun_eclipse_when(double_2,long_3,float_3,double_1,short_1,char_2);

					int_2 = int_2 + int_3;
				}
				if(1)
				{
					char_3 = char_1 * char_3;
					long_4 = long_4;
				}
				if(1)
				{
					v_ut_to_lmt_lat(double_3,double_2,double_4,char_2);

					int_1 = int_4 * int_3;
				}
				short_1 = short_2 + short_2;
				if(1)
				{
					long_3 = long_5 * long_6;
				}
				int_6 = int_5 * int_4;
			}
			double_1 = double_2 + double_1;
		}
		if(1)
		{
			float float_6 = 1;
			unsigned int unsigned_int_10 = 1;
			if(1)
			{
				double_4 = double_2;
			}
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
						int_2 = int_5 + int_7;
					}
				}
			}
			long_1 = long_4 * long_3;
			if(1)
			{
				unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
				float_4 = v_swe_lun_eclipse_how(double_3,double_5,double_5,double_1,char_4);

				long_6 = long_7 + long_7;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
				double_6 = double_2 + double_6;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_7 + unsigned_int_3;
				short_1 = short_2 + short_2;
			}
			float_4 = float_5 + float_6;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_8;
			unsigned_int_9 = unsigned_int_10;
			double_1 = v_hms(double_2,short_1);

			long_5 = long_8 + long_2;
			char_3 = v_swe_split_deg(double_7,int_5,int_2,long_4,char_4,double_1,unsigned_int_9);

			int_3 = int_8 + int_9;
			float_4 = float_6 * float_7;
			if(1)
			{
				int_7 = int_9 + int_1;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_7 + unsigned_int_11;
			}
			if(1)
			{
				short_1 = short_2 + short_1;
			}
			if(1)
			{
				float_2 = float_4 + float_5;
			}
			if(1)
			{
				char_3 = char_2 * char_5;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
			}
			if(1)
			{
				double_9 = double_8 * double_4;
			}
			if(1)
			{
				double_5 = double_6 * double_3;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_8 * unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_5 * unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_9 + unsigned_int_6;
			}
			unsigned_int_11 = unsigned_int_7 * unsigned_int_3;
			double_10 = double_7 * double_9;
		}
		if(1)
		{
			long long_10 = 1;
			long long_11 = 1;
			int int_10 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_11 = 1;
			if(1)
			{
				long long_9 = 1;
				long_10 = long_2 * long_9;
			}
			float_3 = float_5;
			if(1)
			{
				char_5 = v_hms_from_tjd(double_8);

				long_7 = long_10 + long_2;
				char_2 = char_1;
			}
			if(1)
			{
				char_2 = v_do_printf(char_5);

				double_2 = double_1 + double_9;
				long_3 = long_2 + long_2;
			}
			if(1)
			{
				double_1 = double_4 + double_4;
				int_2 = int_9 * int_5;
			}
			long_2 = long_4 * long_11;
			if(1)
			{
				int_2 = int_10;
			}
			if(1)
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						double_8 = double_6 * double_9;
					}
				}
			}
			int_3 = int_4 * int_10;
			long_4 = long_8 + long_7;
			unsigned_int_9 = unsigned_int_7 * unsigned_int_7;
			long_1 = long_10;
			float_7 = float_4;
			double_6 = double_3 + double_2;
			short_4 = short_1 + short_3;
			if(1)
			{
				unsigned_int_5 = unsigned_int_3 * unsigned_int_11;
			}
			if(1)
			{
				int_9 = int_9;
			}
			if(1)
			{
				double_11 = v_swe_lun_eclipse_when_loc(double_3,double_10,double_12,double_13,double_2,short_2,char_4);

				unsigned_int_9 = unsigned_int_7 + unsigned_int_8;
			}
			if(1)
			{
				short_4 = short_1 * short_3;
			}
			if(1)
			{
				char char_6 = 1;
				double_1 = v_swe_deltat_ex(double_14,long_6,char_4);

				char_1 = char_3 * char_6;
			}
			if(1)
			{
				long_1 = long_7 + long_11;
			}
			if(1)
			{
				double_14 = double_1 + double_9;
			}
			if(1)
			{
				float float_8 = 1;
				float_8 = float_4;
			}
			int_7 = int_1 * int_11;
			double_9 = double_4 + double_13;
			float_2 = float_2 * float_4;
			if(1)
			{
				int int_12 = 1;
				int_12 = int_2 * int_5;
				float_4 = v_swe_revjul(double_10,int_1,int_6,int_5,int_8,double_15);

				double_8 = double_3 * double_11;
			}
		}
		if(1)
		{
			char_4 = char_3 + char_1;
		}
		if(1)
		{
			float_7 = float_2 + float_5;
		}
	}
}
void v_dms( double parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_2;
	double_1 = double_2;
	double_2 = double_1 + double_3;
	double_2 = double_4;
	int_1 = int_1 * int_1;
	char_1 = char_1;
	int_3 = int_1 * int_2;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_3 + long_4;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		double_4 = double_3 + double_3;
	}
	double_3 = double_4;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_1;
	}
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_3 * double_3;
		if(1)
		{
			float_1 = float_3 + float_3;
			short_4 = short_3 + short_3;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		float_1 = v_swe_degnorm(double_2);

		short_3 = short_1 + short_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_5 * short_4;
		float_3 = float_1;
	}
	if(1)
	{
		long long_5 = 1;
		double double_5 = 1;
		long_5 = long_5 * long_2;
		double_2 = double_5 + double_3;
	}
	float_4 = float_2 + float_3;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
}
double v_hms( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_2;
	long_1 = long_2;
	int_1 = int_1 + int_2;
	char_2 = char_2 * char_3;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "7") == 0)
	{
		double double_1 = 1;
		double double_3 = 1;
		char char_4 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_3 = double_1 * double_2;
		char_2 = char_4 * char_1;
		double_2 = double_1;
		v_dms(double_2,float_1);

		int_1 = int_3;
	}
	return double_2;
}
void v_swe_calc_ut( double parameter_1,float parameter_2,float parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long_1 = v_swe_calc(double_1,int_1,double_2,double_3,char_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_deltat(double_3);

	double_4 = v_swe_deltat_ex(double_2,long_1,char_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	long_3 = long_2 * long_1;
	int_1 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		short_1 = v_plaus_iflag(unsigned_int_5,unsigned_int_1,double_4,char_2);

		int_1 = int_2 * int_1;
		double_1 = double_4;
	}
	double_5 = double_4 + double_3;
	int_3 = int_2 * int_2;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		short_2 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_6;
	}
}
long v_swe_time_equ( double parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	v_swe_calc_ut(double_1,float_1,float_2,double_2,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_plaus_iflag(unsigned_int_3,unsigned_int_2,double_2,char_2);

	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		char_2 = v_swi_init_swed_if_start();

		int_4 = int_4 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_3 = v_swe_degnorm(double_3);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	}
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	char_3 = char_3;
	char_4 = char_2 * char_2;
	if(1)
	{
		double_2 = double_1 * double_3;
	}
	double_1 = double_2 + double_3;
	if(1)
	{
		short_2 = short_2 * short_3;
	}
	double_4 = double_2 + double_3;
	short_3 = short_3;
	return long_1;
	short_1 = v_swe_sidtime(double_2);

}
void v_swe_lmt_to_lat( double parameter_1,double parameter_2,double parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	long_1 = v_swe_time_equ(double_1,double_1,char_1);

}
void v_ut_to_lmt_lat( double parameter_1,double parameter_2,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_1;
		}
	}
	char_2 = char_1 * char_2;
	v_swe_lmt_to_lat(double_2,double_2,double_3,char_2);

}
long v_find_maximum( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_1;
	double_2 = double_2 + double_3;
	double_3 = double_4 + double_5;
	long_1 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	return long_3;
}
int v_swe_azalt_rev( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_2;
	long_1 = v_swe_calc(double_3,int_1,double_1,double_3,char_1,-1 );

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_3 + double_3;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_4;
	}
	float_1 = float_1 * float_1;
	short_2 = short_3 * short_4;
	double_3 = v_swe_deltat_ex(double_1,long_3,char_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_1;
	long_3 = long_3 * long_4;
	int_1 = int_2;
	short_1 = v_swe_sidtime(double_1);

	double_1 = double_5;
	if(1)
	{
		short short_5 = 1;
		long long_5 = 1;
		char char_2 = 1;
		int_2 = int_2;
		double_5 = v_swe_cotrans(double_5,double_5,double_6);

		short_3 = short_5;
		float_2 = v_swe_degnorm(double_1);

		long_5 = long_1 * long_2;
		char_2 = char_2;
		char_2 = char_2 * char_1;
	}
	return int_3;
}
void v_calc_astronomical_refr( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	int_1 = int_1 + int_2;
}
void v_calc_dip( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
}
unsigned int v_swe_refrac_extended( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_2;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_1;
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_4 = double_3 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				v_calc_dip(double_4,double_2,double_4,double_1);

				float_1 = float_1;
				double_1 = double_5 * double_1;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
				short_1 = short_1 + short_1;
			}
		}
		double_3 = double_1 * double_4;
		double_2 = double_5;
		double_4 = double_2 * double_5;
		char_1 = char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_3 = 1;
			unsigned_int_5 = unsigned_int_2;
			long_1 = long_2;
			short_1 = short_1 + short_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				short_1 = short_1 + short_2;
			}
			short_2 = short_3 + short_3;
			int_1 = int_1 + int_1;
			int_1 = int_1 * int_1;
		}
		double_2 = double_5 * double_4;
		if(1)
		{
			if(1)
			{
				double_4 = double_1 + double_5;
				unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
				double_2 = double_5;
				long_2 = long_2 * long_1;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
			int_1 = int_1 + int_1;
			char_2 = char_1 * char_3;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		v_calc_astronomical_refr(double_5,double_3,double_2);

		double_5 = double_5 + double_3;
		if(1)
		{
			if(1)
			{
				long long_3 = 1;
				double double_6 = 1;
				short_1 = short_2 * short_2;
				long_3 = long_2 * long_2;
				double_4 = double_2 + double_6;
				double_1 = double_5 + double_5;
			}
			if(1)
			{
				char_3 = char_3 + char_3;
				unsigned_int_7 = unsigned_int_4;
				char_3 = char_1 + char_2;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			}
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return unsigned_int_3;
}
double v_swe_cotrans( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_3 * int_3;
	}
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_swi_coortrf(double_3,double_4,double_4);

	short_2 = short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_3 = short_2 * short_3;
	}
	v_swi_polcart(double_1,double_4);

	int_1 = int_2 + int_2;
	v_swi_cartpol(double_4,double_1);

	double_1 = double_2 + double_5;
	long_2 = long_1 * long_1;
	short_2 = short_3;
	long_1 = long_2 * long_3;
	short_2 = short_3;
	return double_6;
}
void v_swe_azalt( double parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_6 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	double double_7 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_2;
	unsigned_int_1 = v_swe_refrac_extended(double_1,double_3,double_4,double_5,double_1,int_1,double_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1 * short_2;
	}
	float_1 = v_swe_degnorm(double_6);

	char_1 = char_1 * char_3;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 * int_1;
		int_2 = int_3 + int_3;
		double_2 = double_4;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	float_4 = float_2 + float_3;
	long_1 = long_1;
	int_5 = int_4 + int_1;
	short_2 = short_1 + short_2;
	long_3 = long_1 * long_2;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_2 = v_swe_sidtime(double_3);

		double_3 = double_3;
	}
	long_1 = long_3 + long_3;
	long_1 = v_swe_calc(double_1,int_2,double_2,double_4,char_3,-1 );

	double_3 = v_swe_deltat_ex(double_2,long_4,char_4);

	double_1 = v_swe_cotrans(double_2,double_6,double_7);

}
double v_rdi_twilight( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	return double_1;
}
short v_swe_sidtime( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_1 = v_swe_sidtime0(double_1,double_1,double_2);

	double_2 = double_2;
	double_1 = v_swe_deltat_ex(double_2,long_1,char_1);

	int_2 = v_swi_nutation(double_3,long_1,double_3);

	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_2 * long_3;
	}
	double_3 = v_swi_epsiln(double_3,short_1);

	long_1 = long_1 + long_4;
	double_3 = double_2 * double_1;
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			int int_3 = 1;
			float float_3 = 1;
			double double_4 = 1;
			char char_3 = 1;
			int_3 = int_3 + int_4;
			char_2 = v_swi_init_swed_if_start();

			float_3 = float_3 + float_3;
			double_4 = double_3 * double_4;
			int_4 = int_2;
			char_3 = char_1 * char_2;
			double_4 = double_3 * double_3;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "M") < 0)
		{
			unsigned int unsigned_int_5 = 1;
			int_2 = int_4;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
		}
	}
	return short_3;
}
char v_calc_mer_trans( double parameter_1,short parameter_2,char parameter_3,short parameter_4,double parameter_5,char parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_6 = 1;
	double_3 = double_1 + double_2;
	long_1 = v_swe_calc(double_2,int_1,double_2,double_3,char_1,-1 );

	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_2 * char_2;
	char_1 = char_1;
	int_1 = int_1;
	int_1 = int_2 * int_3;
	int_4 = int_1 + int_4;
	float_2 = float_1 * float_4;
	int_5 = int_4 * int_3;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	long_1 = long_4 * long_4;
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
	float_4 = float_4 + float_3;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_2 + float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_5 = 1;
		float float_6 = 1;
		int_2 = int_2 + int_3;
		if(1)
		{
			double_4 = v_swe_deltat_ex(double_4,long_2,char_2);

			float_2 = float_3;
		}
		unsigned_int_2 = v_swe_fixstar(char_3,double_1,float_3,double_3,char_3);

		double_2 = double_4 + double_2;
		short_1 = short_1;
		if(1)
		{
			double double_5 = 1;
			short_3 = v_swe_sidtime(double_3);

			double_3 = double_4 + double_5;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
		int_1 = int_6 * int_6;
		float_2 = v_swe_degnorm(double_2);

		float_1 = float_5 + float_6;
		if(1)
		{
			int int_7 = 1;
			int_7 = int_2 * int_6;
		}
		if(1)
		{
			int_5 = int_5 + int_6;
			if(1)
			{
			}
		}
	}
	int_2 = int_6;
	return char_3;
}
int v_swe_rise_trans_true_hor( double parameter_1,float parameter_2,char parameter_3,double parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	short short_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_6 = 1;
	float float_6 = 1;
	char char_7 = 1;
	float float_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_8 = 1;
	double double_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	char char_8 = 1;
	long long_5 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	short_2 = short_2 * short_1;
	if(1)
	{
		if(1)
		{
			short_4 = short_1 + short_3;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_4 = int_2 * int_3;
	int_3 = int_5 + int_4;
	double_2 = double_1 * double_1;
	char_1 = char_3;
	if(1)
	{
	}
	if(1)
	{
		short_2 = v_swe_set_topo(double_3,double_2,double_4);

		float_3 = float_4;
	}
	if(1)
	{
		float_1 = float_3 + float_5;
		short_4 = short_5 * short_4;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			int_2 = int_2 + int_1;
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_5;
			}
			if(1)
			{
				short_3 = short_3 * short_3;
			}
			if(1)
			{
				int_4 = int_1 + int_2;
			}
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			if(1)
			{
				long_3 = long_2 + long_1;
			}
		}
		int_4 = int_2 + int_4;
		if(1)
		{
			if(1)
			{
				double_3 = double_5;
			}
			if(1)
			{
				short_1 = short_6 * short_5;
			}
		}
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		char_5 = char_3 + char_4;
		if(1)
		{
			double_1 = double_5 + double_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			float_4 = float_1;
			double_3 = v_swe_deltat_ex(double_3,long_3,char_3);

			short_1 = short_6 * short_5;
		}
		if(1)
		{
			short short_7 = 1;
			short_7 = short_6 * short_5;
			double_1 = double_4 * double_3;
			char_6 = char_1;
			int_7 = int_6 + int_2;
			int_8 = int_3;
		}
		char_5 = char_3 * char_2;
		if(1)
		{
			int_5 = int_7 + int_8;
			int_3 = int_1 + int_2;
			double_6 = double_3 + double_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			if(1)
			{
				int_7 = int_7 * int_5;
			}
		}
		if(1)
		{
			double_5 = double_5 + double_5;
			int_3 = int_8;
			short_4 = short_5 + short_4;
			double_4 = v_rdi_twilight(double_4);

			float_2 = float_6 + float_3;
			int_3 = int_1 + int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_9 = 1;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					unsigned_int_3 = v_swe_fixstar(char_7,double_2,float_7,double_7,char_5);

					long_3 = long_3 * long_2;
					if(1)
					{
						if(1)
						{
						}
					}
					unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
					unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
					double_1 = double_7 + double_5;
				}
				short_6 = short_8 * short_9;
				int_8 = int_4 + int_1;
			}
			char_3 = char_3 + char_6;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			if(1)
			{
				float float_8 = 1;
				short short_10 = 1;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					int_4 = v_swe_azalt_rev(double_1,double_7,double_8,double_1,double_4);

					long_1 = long_3;
					int_4 = int_8 + int_2;
				}
				int_3 = int_9 * int_3;
				if(1)
				{
					char_6 = char_4 + char_5;
					if(1)
					{
					}
				}
				int_6 = int_2 + int_10;
				if(1)
				{
					if(1)
					{
						double_9 = double_1;
					}
					if(1)
					{
						char_1 = char_6 + char_2;
					}
				}
				float_8 = float_5 * float_2;
				char_2 = char_4 + char_6;
				if(1)
				{
					char_2 = char_1 * char_1;
				}
				if(1)
				{
					float float_9 = 1;
					float_8 = float_9 + float_1;
				}
				if(1)
				{
					double_2 = double_1 * double_8;
					unsigned_int_1 = unsigned_int_7 * unsigned_int_4;
				}
				if(1)
				{
					int int_11 = 1;
					unsigned_int_8 = unsigned_int_4 + unsigned_int_3;
					short_2 = short_10 + short_10;
					long_4 = long_3 + long_1;
					v_swe_azalt(double_7,int_7,double_3,double_8,double_1,double_2,double_7);

					int_8 = int_8;
					int_4 = int_11 * int_6;
				}
				char_8 = v_calc_mer_trans(double_4,short_1,char_8,short_8,double_5,char_8,double_2,char_4);

				int_3 = int_8;
				short_5 = short_4 * short_10;
			}
		}
	}
	long_5 = v_find_maximum(double_9,double_6,double_5,double_9,double_10,double_9);

	double_5 = double_1 + double_11;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		int int_12 = 1;
		double double_13 = 1;
		long long_6 = 1;
		if(1)
		{
			char_6 = char_3 + char_8;
		}
		if(1)
		{
			long_5 = v_swe_calc(double_12,int_3,double_1,double_11,char_7,-1 );

			long_1 = long_2 * long_5;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_5 * unsigned_int_2;
		}
		int_9 = int_12 + int_5;
		double_1 = double_7 * double_1;
		double_11 = double_6 + double_13;
		char_5 = char_8 + char_6;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			char char_9 = 1;
			char char_10 = 1;
			unsigned_int_2 = unsigned_int_8 + unsigned_int_2;
			if(1)
			{
				double_11 = double_8 * double_13;
				if(1)
				{
				}
			}
			char_2 = char_2 * char_9;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_9 = 1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_9;
				}
				if(1)
				{
					char_1 = char_1 + char_7;
				}
			}
			double_9 = double_4 + double_12;
			char_8 = char_4 + char_10;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_7;
			}
			if(1)
			{
				int_12 = int_7 + int_10;
			}
			if(1)
			{
				double_6 = double_5;
				long_6 = long_4 + long_4;
			}
			if(1)
			{
				double double_14 = 1;
				float_2 = float_6 * float_5;
				short_6 = short_6 * short_8;
				float_6 = float_2;
				unsigned_int_1 = unsigned_int_8 + unsigned_int_4;
				double_5 = double_13 * double_14;
			}
			if(1)
			{
				double_5 = double_3 * double_2;
				int_3 = int_7 + int_4;
			}
			if(1)
			{
				long long_7 = 1;
				unsigned int unsigned_int_10 = 1;
				long_1 = long_7 + long_1;
				unsigned_int_6 = unsigned_int_10 + unsigned_int_8;
			}
		}
		if(1)
		{
			long long_8 = 1;
			long_4 = long_6 * long_8;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_7 + unsigned_int_1;
	}
	return int_10;
}
char v_swe_rise_trans( double parameter_1,char parameter_2,char parameter_3,long parameter_4,char parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	return char_1;
	int_1 = v_swe_rise_trans_true_hor(double_1,float_1,char_1,double_1,float_1,double_2,double_2,double_2,double_1,double_2,char_1);

}
char v_do_printf( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_1 * short_1;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_1;
	double_2 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	char_3 = char_1 + char_2;
	double_3 = double_2 * double_2;
	double_1 = double_3;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
	double_1 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_6;
	double_5 = double_4 * double_3;
	int_2 = int_1 * int_1;
	short_3 = short_1 * short_1;
	int_2 = int_3 + int_1;
	unsigned_int_6 = unsigned_int_4;
	int_3 = int_4;
	int_5 = int_1 + int_4;
	double_3 = double_2;
	short_3 = short_4;
	char_1 = char_1 * char_4;
	long_2 = long_3 + long_2;
	if(1)
	{
		int_4 = int_5;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "(") < 0)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	int_4 = int_1 * int_4;
	short_3 = short_2 * short_4;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
	short_2 = short_2 * short_1;
	long_4 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_8;
	double_6 = double_6 + double_4;
	unsigned_int_9 = unsigned_int_7 + unsigned_int_6;
	long_3 = long_4 * long_5;
	double_2 = double_1 * double_6;
	double_7 = double_5 + double_4;
	short_3 = short_2 + short_3;
	unsigned_int_7 = unsigned_int_10 + unsigned_int_11;
	return char_2;
}
double v_call_rise_set( double parameter_1,long parameter_2,char parameter_3,long parameter_4,float parameter_5,double parameter_6,char parameter_7)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short short_5 = 1;
	double double_5 = 1;
	char char_4 = 1;
	long long_1 = 1;
	char char_5 = 1;
	double double_6 = 1;
	char char_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char_1 = v_do_printf(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1 * short_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_5 = 1;
		short short_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_7 = 1;
		int_3 = int_2 + int_2;
		if(1)
		{
			short short_3 = 1;
			char char_2 = 1;
			int_5 = int_4 + int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			}
			if(1)
			{
				int_2 = int_1 * int_3;
			}
			if(1)
			{
				int_1 = int_3 + int_2;
			}
			if(1)
			{
				short_4 = short_2 + short_3;
				int_2 = int_1;
			}
			double_3 = double_1 * double_1;
			if(1)
			{
				float_1 = v_swe_revjul(double_3,int_2,int_1,int_2,int_4,double_1);

				short_2 = short_1 * short_3;
			}
			if(1)
			{
				char_3 = char_1 + char_2;
			}
			if(1)
			{
				double_2 = double_1;
			}
			if(1)
			{
				short_1 = short_4 + short_1;
				int_5 = int_4 * int_5;
			}
			short_5 = short_4 + short_3;
			if(1)
			{
				int_2 = int_3 * int_4;
				double_3 = double_4;
			}
			int_3 = int_6;
			v_ut_to_lmt_lat(double_5,double_5,double_5,char_3);

			float_2 = float_3;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				int_3 = int_1 * int_1;
			}
			if(1)
			{
				float float_5 = 1;
				float_5 = float_1 * float_4;
				char_4 = char_3 + char_2;
				long_1 = long_1 * long_1;
			}
			int_7 = int_2 * int_2;
			if(1)
			{
				short_2 = short_4 * short_3;
			}
			if(1)
			{
				int_5 = int_2 + int_4;
				double_5 = v_hms(double_2,short_2);

				short_3 = short_1 + short_5;
				char_5 = char_4 + char_5;
			}
			if(1)
			{
				double_4 = double_2 + double_5;
				double_2 = double_2 + double_5;
			}
			unsigned_int_2 = unsigned_int_3;
			short_4 = short_2 * short_3;
		}
		if(1)
		{
			char char_7 = 1;
			if(1)
			{
				int_6 = int_5 * int_7;
			}
			if(1)
			{
				double_2 = double_6;
			}
			double_3 = double_2 * double_3;
			if(1)
			{
				short short_6 = 1;
				char_6 = v_swe_rise_trans(double_2,char_3,char_5,long_1,char_4,double_2,double_7,double_6,double_6,char_3);

				double_8 = double_5 * double_4;
				short_4 = short_6;
			}
			double_3 = double_2 * double_4;
			if(1)
			{
				float float_6 = 1;
				float_3 = float_6 + float_6;
			}
			if(1)
			{
				short_5 = v_swe_set_topo(double_6,double_8,double_3);

				short_4 = short_4;
				int_2 = int_2 * int_6;
			}
			float_2 = float_4 * float_2;
			if(1)
			{
				char_3 = char_3 + char_6;
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
				unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
			}
			char_5 = char_7 * char_3;
		}
	}
	return double_1;
}
char v_do_special_event( double parameter_1,long parameter_2,char parameter_3,char parameter_4,float parameter_5,double parameter_6,double parameter_7,double parameter_8,char parameter_9,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_137[2];
	fgets(controller4vul_137 ,2 ,stdin);
	if( strcmp( controller4vul_137, "a") < 0)
	{
		char char_3 = 1;
		double_1 = v_call_heliacal_event(double_2,short_1,char_1,float_1,char_1,double_2,double_2,double_2,char_2,uni_para);

		char_3 = char_3 + char_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_2;
	}
	return char_4;
}
int v_swe_julday( int parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_2;
	short_1 = short_1 + short_1;
	int_1 = int_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	int_1 = int_1 + int_3;
	int_2 = int_4 * int_4;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 * int_1;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		short_2 = short_3;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		long_2 = long_2 + long_3;
		if(1)
		{
			float_2 = float_1 + float_2;
		}
	}
	return int_4;
}
short v_swe_set_topo( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") == 0)
	{
	}
	int_2 = int_3 * int_3;
	int_2 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_swi_init_swed_if_start();

	v_swi_force_app_pos_etc();

	double_1 = double_1;
	return short_1;
}
int v_swe_set_astro_models( double parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = v_swi_init_swed_if_start();

	double_1 = double_1;
	int_1 = int_1;
	double_1 = double_1;
	return int_2;
}
void v_load_dpsi_deps()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_7 = 1;
	char char_7 = 1;
	float float_8 = 1;
	float_2 = float_1 + float_2;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float_1 = float_3 * float_1;
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 + int_1;
	}
	double_2 = double_2 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short_1 = short_2 + short_1;
	}
	if(1)
	{
		int_3 = v_swi_cutstr(char_3,char_2,char_4,int_4);

		double_3 = double_1 + double_1;
	}
	long_3 = long_1 + long_2;
	if(1)
	{
		char_2 = char_2 + char_4;
	}
	if(1)
	{
		short_3 = short_2 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long_2 = long_3 * long_1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		float_1 = float_4 + float_5;
		double_4 = double_3;
		char_5 = char_5 * char_5;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		double_3 = double_2 * double_1;
		if(1)
		{
			char_4 = char_6 + char_4;
		}
	}
	double_4 = double_3 * double_4;
	short_2 = short_3 + short_2;
	if(1)
	{
		double_4 = double_3 + double_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_3 = long_2 + long_4;
	}
	double_5 = double_2 + double_4;
	short_2 = short_1 + short_1;
	double_6 = double_4;
	int_5 = int_4 + int_1;
	float_2 = float_3 * float_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		float_6 = float_2;
	}
	long_2 = long_3 + long_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	char_5 = char_6 + char_5;
	if(1)
	{
		short_2 = short_1;
	}
	float_7 = v_swi_fopen(int_3,char_5,char_7,char_5);

	float_6 = float_1 + float_8;
	long_2 = long_3 * long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
}
char v_swe_set_jpl_file( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_1;
	double_2 = double_3 * double_2;
	float_3 = float_2 * float_3;
	double_4 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char_1 = v_swi_init_swed_if_start();

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_3 * double_3;
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
	}
	short_2 = short_1 + short_1;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			long_1 = v_open_jpl_file(double_1,char_1,char_1,char_2);

			char_3 = char_3 * char_2;
			v_load_dpsi_deps();

			unsigned_int_2 = unsigned_int_4;
			double_3 = double_2 * double_4;
			short_2 = short_3 + short_3;
			int_1 = int_3;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
			char_2 = char_2;
		}
		if(1)
		{
			short short_4 = 1;
			float float_4 = 1;
			short_1 = short_2 + short_4;
			float_4 = float_2;
			unsigned_int_3 = unsigned_int_3;
			float_1 = float_2 + float_2;
			double_1 = double_1 + double_3;
			char_3 = v_swi_close_keep_topo_etc();

			double_4 = double_3 + double_1;
		}
	}
	return char_4;
}
float v_calc_speed( double parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long_1 = long_1 + long_1;
			long_1 = long_2 + long_2;
			double_4 = double_2 + double_3;
			short_1 = short_2;
		}
	}
	return float_2;
}
char v_denormalize_positions( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return char_3;
}
short v_main_planet_bary( double parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_2;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		if(1)
		{
			short_1 = short_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	int_1 = v_swi_moshplan(double_3,int_1,long_1,double_1,double_1,char_1);

	float_3 = float_1;
	double_4 = v_jplplan(double_2,int_2,char_2,long_2,double_3,double_3,double_4,char_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
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
			short_2 = short_1;
			if(1)
			{
				int_2 = int_1 * int_3;
			}
			unsigned_int_3 = unsigned_int_4;
		}
		if(1)
		{
			int_4 = int_4 + int_4;
		}
	}
	double_1 = double_5 * double_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_1 = v_sweplan(double_1,int_3,int_4,float_1,long_1,double_5,double_4,double_5,double_4,char_3,-1 );

		long_3 = long_4;
	}
	int_3 = int_1;
	double_4 = double_4 * double_4;
	return short_2;
}
long v_app_pos_etc_plan_osc( int parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	char char_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	double double_8 = 1;
	long long_7 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v_if(char_1,int_1,double_1,int_1,short_1,float_1,double_2);

	v_swi_aberr_light(double_3,double_1,char_2);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	short_2 = short_2 * short_1;
	short_1 = v_main_planet_bary(double_4,int_1,unsigned_int_2,long_1,double_1,double_4,double_3,double_2,double_4,char_3);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_1;
	char_4 = char_2 * char_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double_3 = double_3 * double_2;
	}
	if(1)
	{
		int_1 = v_swi_precess(double_3,double_5,long_1,int_2);

		double_1 = double_6 + double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_4;
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
				short_3 = short_3;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_2 = long_1 * long_1;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_1 = double_1 * double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				int_3 = int_4;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				short_3 = short_4 * short_1;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_2 = double_6 * double_6;
		}
	}
	if(1)
	{
		int int_6 = 1;
		long long_3 = 1;
		char_3 = char_2 * char_2;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				int_3 = int_3 * int_4;
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				for(int looper_10=0; looper_10<1;looper_10++)
				{
					int_6 = int_4 * int_5;
					if(1)
					{
						int_6 = int_7 + int_2;
					}
				}
				char_5 = char_2;
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					long_4 = long_2 * long_3;
				}
			}
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				long_4 = long_4 * long_5;
			}
		}
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				double_5 = double_4 + double_5;
				if(1)
				{
					float_2 = v_app_pos_rest(long_5,long_1,double_7,double_5,unsigned_int_3,char_3);

					int_2 = int_6 * int_6;
				}
			}
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
			int_4 = v_swi_get_observer(double_6,float_1,double_3,double_7,char_2);

			int_2 = int_5 * int_7;
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				int_3 = int_8 + int_5;
				int_5 = int_2 + int_8;
			}
		}
		if(1)
		{
			short short_5 = 1;
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				long_2 = long_4 * long_3;
			}
			short_5 = short_1 + short_4;
			unsigned_int_3 = unsigned_int_4;
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
					v_swi_deflect_light(double_7,double_6,short_1);

					int_4 = int_4 + int_2;
				}
			}
			if(1)
			{
				for(int looper_18=0; looper_18<1;looper_18++)
				{
					double double_9 = 1;
					int_8 = v_swi_osc_el_plan(double_5,double_3,int_3,int_5,double_1,double_8,char_5);

					double_9 = double_4 * double_2;
				}
			}
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_20=0; looper_20<1;looper_20++)
			{
				v_swi_precess_speed(double_7,double_4,char_3,int_2);

				unsigned_int_3 = unsigned_int_1;
			}
		}
	}
	if(1)
	{
		for(int looper_21=0; looper_21<1;looper_21++)
		{
			short_4 = short_3 * short_4;
		}
	}
	if(1)
	{
		int int_9 = 1;
		int_9 = int_7 * int_5;
	}
	if(1)
	{
		long_1 = long_4 + long_4;
		if(1)
		{
			for(int looper_22=0; looper_22<1;looper_22++)
			{
				unsigned_int_5 = unsigned_int_1;
			}
		}
	}
	for(int looper_23=0; looper_23<1;looper_23++)
	{
		double double_10 = 1;
		double_5 = double_3 + double_10;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		if(1)
		{
			long long_6 = 1;
			long_1 = long_6 * long_4;
		}
		short_2 = short_3 + short_1;
	}
	if(1)
	{
		int int_10 = 1;
		int_2 = int_10 + int_5;
	}
	return long_7;
}
double v_swi_kepler( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	double_1 = v_swi_mod2PI(double_2);

}
int v_swi_osc_el_plan( double parameter_1,double parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_9 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	short short_2 = 1;
	double double_10 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_3 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_1 = v_swi_kepler(double_2,double_1,double_2);

	int_3 = int_1 * int_2;
	int_2 = int_1 * int_4;
	char_2 = char_1 + char_2;
	double_1 = v_swi_epsiln(double_1,short_1);

	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	int_5 = int_4 + int_5;
	double_1 = double_3 + double_1;
	long_1 = long_1 + long_2;
	long_3 = long_2 * long_3;
	if(1)
	{
	}
	double_5 = double_4 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	double_7 = double_1 + double_6;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	char_1 = char_2 + char_2;
	double_4 = double_6 + double_6;
	double_4 = double_8 + double_5;
	char_1 = char_2;
	float_1 = float_1 + float_2;
	double_1 = double_7 + double_5;
	int_3 = int_6 + int_3;
	double_7 = double_1 * double_7;
	int_7 = int_1 * int_5;
	v_swi_coortrf(double_6,double_3,double_9);

	char_5 = char_3 + char_4;
	double_7 = double_2 * double_5;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		char char_6 = 1;
		long long_4 = 1;
		double_6 = double_5 + double_4;
		if(1)
		{
			unsigned_int_1 = v_read_elements_file(int_6,double_9,double_3,double_9,double_2,double_9,double_5,double_3,double_8,double_7,char_4,char_3,char_1);

			char_6 = char_4 * char_5;
			long_4 = long_4 * long_5;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			double_1 = double_1 + double_10;
		}
		if(1)
		{
			int_3 = int_4 * int_7;
			short_4 = short_3 * short_3;
		}
		if(1)
		{
			long_1 = long_4 * long_5;
		}
		if(1)
		{
			char_5 = char_6;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
			int_7 = int_6;
			long_6 = long_6 + long_6;
			long_4 = long_3 + long_1;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
		}
	}
	long_6 = long_7 + long_6;
	if(1)
	{
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		int_4 = int_4 + int_3;
	}
	double_3 = double_9 * double_7;
	char_2 = char_7;
	double_1 = double_1 + double_7;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
	double_8 = double_1 + double_4;
	char_2 = char_8;
	float_4 = float_4 + float_5;
	float_1 = float_3 + float_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
	int_2 = v_swi_precess(double_5,double_1,long_2,int_2);

	long_5 = long_1 + long_3;
	float_5 = float_2 + float_2;
	int_3 = int_5;
	double_8 = double_5 + double_7;
	double_3 = v_swi_mod2PI(double_4);

	short_2 = short_4 + short_4;
	short_4 = short_4 + short_3;
	float_2 = float_4 * float_5;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_7;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_5 * int_3;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_9 = 1;
			char_5 = char_9 + char_8;
		}
	}
	if(1)
	{
		double_5 = double_1 * double_10;
		double_8 = double_10;
	}
	return int_7;
}
int v_swi_intp_apsides( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_8 = 1;
	short short_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_3 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_1 + short_1;
	int_3 = int_2 + int_1;
	unsigned_int_4 = unsigned_int_4;
	long_1 = v_mean_elements();

	int_4 = int_3 * int_3;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2;
	char_2 = char_2;
	long_3 = long_2 + long_3;
	char_4 = char_1 + char_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_4;
	float_3 = float_1 + float_2;
	float_3 = float_3 * float_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	v_mean_elements_pl();

	int_1 = int_4;
	double_6 = double_5 * double_5;
	int_5 = int_5 * int_3;
	int_6 = int_3 * int_3;
	int_2 = int_3 + int_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	double_7 = double_3 + double_1;
	long_2 = long_1;
	int_2 = int_1;
	int_7 = int_5 + int_2;
	double_7 = double_2 + double_1;
	char_3 = char_5;
	char_3 = char_4 * char_6;
	double_6 = double_4;
	int_6 = int_2 * int_2;
	float_2 = v_moon2();

	short_1 = short_1 * short_1;
	int_3 = int_2 + int_8;
	short_1 = short_1 * short_2;
	double_5 = double_1 * double_4;
	int_5 = int_5 + int_3;
	short_2 = v_moon1();

	double_4 = double_3 * double_4;
	int_4 = int_8 + int_8;
	int_7 = int_5 + int_4;
	double_8 = double_5 + double_5;
	char_2 = char_3 + char_3;
	double_6 = v_moon4();

	double_6 = double_9 * double_3;
	double_8 = double_9 * double_6;
	short_2 = short_1 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		long long_4 = 1;
		short short_5 = 1;
		char char_7 = 1;
		char char_8 = 1;
		short short_6 = 1;
		unsigned_int_5 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		short_1 = short_1 * short_3;
		short_3 = v_mods3600(double_10);

		int_1 = int_7 * int_1;
		char_1 = char_4 * char_3;
		unsigned_int_4 = unsigned_int_1;
		short_4 = short_1 * short_1;
		long_4 = long_3 + long_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		short_5 = short_2 + short_1;
		char_6 = char_7 + char_8;
		short_6 = short_1 * short_2;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
		long_5 = v_moon3();

		int_6 = int_7 + int_3;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			}
		}
		double_7 = double_8 * double_4;
	}
	int_2 = int_1 * int_9;
	int_4 = int_7 + int_7;
	unsigned_int_4 = unsigned_int_3;
	int_1 = int_3 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_7;
	double_1 = double_10;
	return int_2;
}
void v_intp_apsides( double parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	int int_6 = 1;
	int int_8 = 1;
	char char_5 = 1;
	long long_5 = 1;
	int int_9 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_10 = 1;
	double double_10 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_swe_difrad2n(double_1,double_1);

	int_1 = v_swi_trop_ra2sid_lon(double_2,double_1,double_1,int_2);

	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	int_3 = int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_2 + char_1;
	char_3 = char_1;
	v_swi_coortrf2(double_3,double_1,double_1,double_3);

	double_3 = double_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	v_swi_cartpol_sp(double_3,double_1);

	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	long_1 = long_2;
	int_3 = v_swi_intp_apsides(double_1,double_1,int_1);

	short_2 = short_1 + short_2;
	short_1 = short_2 + short_1;
	int_4 = int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		v_swi_nutate(double_3,int_5,long_1);

		long_1 = long_3 * long_4;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_4 = int_5 + int_1;
		}
		unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_2 + int_2;
		short_2 = short_2 + short_2;
	}
	if(1)
	{
		double_4 = double_3 * double_3;
		double_3 = double_5 * double_3;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_1;
	double_6 = double_2 + double_6;
	if(1)
	{
		char_2 = char_2 * char_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_2 = long_3 * long_1;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_1 = v_memset(double_7,double_7,unsigned_int_6);

		double_8 = double_3 + double_8;
	}
	int_5 = v_swi_trop_ra2sid_lon_sosy(double_4,double_8,int_1);

	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	double_9 = double_5;
	double_4 = double_7 + double_8;
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_7;
			}
			char_4 = char_4 * char_1;
			if(1)
			{
				int_1 = int_6;
			}
			if(1)
			{
				int int_7 = 1;
				int_3 = int_5 + int_7;
			}
			if(1)
			{
				int_4 = int_8 * int_5;
			}
			v_swe_get_ayanamsa_ex(double_6,unsigned_int_5,double_7,char_5);

			unsigned_int_1 = unsigned_int_3;
			long_4 = long_5 + long_2;
		}
		if(1)
		{
			int_6 = int_9;
			if(1)
			{
			}
			unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
			short_1 = short_3 * short_2;
			short_3 = short_4;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_6 = int_8;
		}
		int_3 = int_10 * int_2;
		if(1)
		{
			char char_6 = 1;
			v_swi_precess_speed(double_10,double_6,char_5,int_5);

			char_6 = char_5 * char_1;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			float_4 = float_1 + float_3;
		}
		long_1 = long_2;
		double_9 = double_7;
		if(1)
		{
			double_7 = double_5 * double_1;
		}
		unsigned_int_6 = unsigned_int_7 + unsigned_int_7;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		double_7 = double_8;
		double_5 = double_4 + double_6;
		if(1)
		{
			double_2 = double_8 * double_1;
		}
		if(1)
		{
			float_4 = v_swe_degnorm(double_8);

			double_2 = double_8 + double_2;
			if(1)
			{
				double_7 = double_7 + double_5;
			}
		}
		int_10 = int_6 * int_9;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		unsigned int unsigned_int_8 = 1;
		long_3 = long_5 + long_1;
		short_1 = short_3 * short_3;
		unsigned_int_2 = unsigned_int_8 * unsigned_int_7;
		int_5 = int_2 + int_6;
	}
	short_4 = short_1 * short_1;
	double_1 = double_8 + double_8;
	v_swi_polcart_sp(double_9,double_10);

	int_4 = v_swi_precess(double_3,double_1,long_5,int_5);

}
int v_swi_plan_for_osc_elem( char parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	int int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_9 = 1;
	int int_8 = 1;
	double double_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	int_1 = int_1;
	int_2 = int_3;
	if(1)
	{
		int_1 = v_swi_nutation(double_2,long_1,double_1);

		int_6 = int_4 * int_5;
	}
	long_2 = v_nut_matrix(float_1,char_1);

	double_1 = double_3;
	if(1)
	{
		double_4 = double_2;
		short_3 = short_1;
		short_2 = short_1 * short_2;
		long_3 = long_1 + long_3;
		v_swi_coortrf2(double_5,double_5,double_5,double_2);

		long_3 = long_3 * long_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			int_3 = int_2 * int_4;
		}
		if(1)
		{
			double_2 = double_4 + double_4;
		}
		if(1)
		{
			char_1 = char_2;
			double_2 = double_1 * double_4;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			int_1 = int_1 * int_7;
		}
		if(1)
		{
			char_2 = v_calc_epsilon(double_4,short_2,long_2);

			v_swi_polcart_sp(double_6,double_6);

			int_1 = int_1 + int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double double_8 = 1;
			int_2 = int_7 * int_5;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
			v_swi_cartpol_sp(double_4,double_5);

			double_4 = double_6 + double_7;
			v_get_denum(unsigned_int_2,char_3);

			double_3 = double_8 + double_5;
			double_8 = double_4 + double_9;
			short_3 = short_3;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_4 = int_8 * int_6;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_1 = float_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_9 = 1;
			int_9 = int_6 + int_7;
		}
	}
	int_4 = v_swi_precess(double_9,double_10,long_4,int_3);

	long_5 = long_3;
	int_8 = int_6 * int_7;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		short short_4 = 1;
		v_swi_bias(double_7,double_3,unsigned_int_5,short_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
		short_4 = short_2;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			unsigned int unsigned_int_8 = 1;
			char_1 = char_4 * char_4;
			unsigned_int_1 = unsigned_int_8 * unsigned_int_8;
		}
	}
	return int_8;
}
short v_lunar_osc_elem( double parameter_1,int parameter_2,long parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	long long_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_8 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_7 = 1;
	long long_5 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double_1 = v_jplplan(double_2,int_1,char_1,long_1,double_3,double_1,double_2,char_2);

	int_1 = v_swi_moshmoon(double_1,int_2,double_2,char_1);

	float_1 = float_1 * float_1;
	v_swi_cross_prod(double_4,double_2,double_3);

	char_1 = char_2 + char_3;
	int_2 = v_swi_precess(double_1,double_4,long_1,int_2);

	int_3 = v_swi_trop_ra2sid_lon_sosy(double_1,double_5,int_3);

	long_3 = long_1 + long_2;
	if(1)
	{
		float float_2 = 1;
		double_2 = double_1 * double_6;
		if(1)
		{
			int_3 = int_3 * int_3;
		}
		double_3 = v_swi_mod2PI(double_3);

		v_swi_coortrf2(double_4,double_2,double_5,double_3);

		v_swi_cartpol_sp(double_6,double_1);

		float_3 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_swi_polcart(double_5,double_7);

	v_swi_cartpol(double_3,double_6);

	long_4 = long_4;
	char_4 = v_calc_epsilon(double_5,short_1,long_4);

	double_4 = v_swemoon(double_1,double_4,int_4,double_4,char_4);

	short_1 = v_memset(double_4,double_3,unsigned_int_2);

	int_5 = v_swi_trop_ra2sid_lon(double_3,double_8,double_8,int_6);

	short_2 = short_2;
	int_1 = v_swi_plan_for_osc_elem(char_3,double_2,double_3);

	unsigned_int_3 = v_if(char_5,int_4,double_6,int_3,short_1,float_3,double_5);

	v_swi_nutate(double_8,int_7,long_5);

	double_7 = double_7;
	return short_3;
	v_swi_precess_speed(double_8,double_8,char_2,int_7);

	v_swe_get_ayanamsa_ex(double_3,unsigned_int_1,double_1,char_4);

	v_swi_polcart_sp(double_6,double_7);

	float_4 = v_swe_degnorm(double_3);

}
float v_corr_mean_apog( double parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long_1 = long_1 + long_1;
	char_1 = char_1 + char_1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	double_1 = double_2 + double_3;
	short_1 = short_1 + short_2;
	short_2 = short_2 + short_1;
	int_2 = int_1;
	double_4 = double_3 + double_2;
	return float_2;
}
int v_swi_mean_apog( double parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	int int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_mean_elements();

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_2 * int_2;
	double_2 = v_swi_mod2PI(double_1);

	int_3 = int_3 + int_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			v_swi_coortrf(double_2,double_2,double_3);

			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			if(1)
			{
				float_2 = float_2 + float_3;
			}
		}
	}
	float_2 = v_corr_mean_apog(double_3);

	char_2 = char_1 + char_2;
	long_3 = long_2 * long_2;
	double_4 = double_1 * double_1;
	double_2 = double_5 + double_2;
	int_4 = int_2 * int_5;
	v_swi_cartpol(double_3,double_1);

	short_2 = short_2 + short_2;
	int_1 = int_5;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	int_2 = int_6 + int_4;
	float_3 = v_corr_mean_node(double_2);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_5 * int_5;
	v_swi_polcart(double_5,double_1);

	char_3 = char_3;
	int_6 = int_7 + int_5;
	short_4 = short_2 + short_3;
	return int_5;
}
double v_app_pos_etc_mean( int parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_8 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	int_2 = int_2 * int_2;
	if(1)
	{
		v_swi_polcart_sp(double_3,double_4);

		int_2 = int_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3 + int_4;
	int_3 = int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		char_2 = char_1 + char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_precess_speed(double_4,double_5,char_1,int_3);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	v_swi_coortrf2(double_2,double_3,double_6,double_4);

	int_6 = int_3 * int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_3 * double_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_3 * int_6;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float_1 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_2 = int_1 * int_4;
		}
		if(1)
		{
			int int_7 = 1;
			int_2 = int_1 + int_7;
			if(1)
			{
				int_6 = v_swi_precess(double_7,double_4,long_1,int_4);

				float_1 = v_app_pos_rest(long_1,long_2,double_8,double_7,unsigned_int_4,char_2);

				char_1 = char_2 + char_1;
			}
		}
	}
	if(1)
	{
		long long_3 = 1;
		int int_8 = 1;
		long_3 = long_2;
		if(1)
		{
			double double_9 = 1;
			double_9 = double_7 * double_5;
		}
		int_8 = int_5 * int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	}
	return double_6;
}
long v_swe_difrad2n( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	char_1 = v_swe_radnorm(double_1);

	short_2 = short_1;
	if(1)
	{
	}
	return long_1;
}
double v_swi_mod2PI( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_2;
	}
	return double_1;
}
float v_corr_mean_node( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
int v_swi_mean_node( double parameter_1,double parameter_2,char parameter_3)
{
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1;
	char_2 = char_1 + char_1;
	short_1 = short_1 + short_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
			if(1)
			{
				long_1 = v_mean_elements();

				char_2 = char_1 + char_2;
			}
		}
	}
	unsigned_int_1 = unsigned_int_3;
	double_2 = v_swi_mod2PI(double_2);

	long_1 = long_1 + long_2;
	float_3 = v_corr_mean_node(double_2);

	char_4 = char_2 * char_3;
	double_3 = double_2 * double_3;
	long_3 = long_1;
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	float_4 = float_2;
	char_3 = char_1;
	double_1 = double_3 + double_1;
	int_3 = int_2;
	return int_4;
}
int v_app_pos_etc_sbar( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	v_swi_bias(double_1,double_1,unsigned_int_1,short_1);

	int_3 = int_1 * int_2;
	unsigned_int_2 = v_if(char_1,int_4,double_2,int_2,short_2,float_1,double_3);

	double_4 = double_1 * double_4;
	float_1 = v_app_pos_rest(long_1,long_1,double_4,double_1,unsigned_int_2,char_2);

	short_2 = short_1 + short_2;
	double_3 = double_4;
	double_3 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_2;
	}
	if(1)
	{
		v_swi_precess_speed(double_2,double_4,char_2,int_2);

		double_2 = double_1 + double_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_4 = v_swi_precess(double_3,double_5,long_1,int_5);

			double_5 = double_3 * double_2;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_1 = double_3;
		}
	}
	if(1)
	{
		v_get_denum(unsigned_int_2,char_3);

		int_4 = int_5 * int_1;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_4;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_2 + double_5;
		if(1)
		{
			char_2 = char_2;
		}
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int_4 = int_2;
	}
	return int_4;
}
double v_swi_armc_to_mc( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		short_2 = short_1 + short_2;
		float_1 = float_1 + float_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			float_1 = v_swe_degnorm(double_2);

			double_1 = double_3 + double_4;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "t^") < 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
	}
	return double_3;
}
float v_meff( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") > 0)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	return float_1;
}
void v_swi_deflect_light( double parameter_1,double parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	float float_7 = 1;
	int int_4 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	long_2 = long_2 * long_1;
	short_5 = short_4 + short_4;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_4 = long_5;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long_5 = long_4 * long_2;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			short_3 = short_3;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int_1 = int_2;
		}
	}
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		char_1 = char_1 * char_2;
	}
	int_3 = int_3 + int_3;
	double_3 = double_2 + double_2;
	float_1 = float_1 * float_3;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		int_2 = int_3;
		float_1 = float_1;
		long_2 = long_5 + long_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	double_1 = double_1;
	double_4 = double_4 * double_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		float_3 = float_4;
	}
	double_2 = double_3 + double_4;
	unsigned_int_2 = v_if(char_1,int_1,double_1,int_3,short_1,float_4,double_4);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		float float_6 = 1;
		float_7 = float_5 + float_6;
	}
	if(1)
	{
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_7 = 1;
		char_2 = char_1 * char_2;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			short_4 = short_2;
		}
		if(1)
		{
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				unsigned_int_2 = unsigned_int_3;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				int_4 = int_1 * int_2;
			}
		}
		for(int looper_15=0; looper_15<1;looper_15++)
		{
			int_4 = int_4 + int_3;
		}
		double_1 = double_4 * double_1;
		char_1 = char_2 * char_2;
		long_4 = long_6 + long_3;
		for(int looper_16=0; looper_16<1;looper_16++)
		{
			long long_7 = 1;
			double_4 = double_4 + double_3;
			long_6 = long_7;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
		float_5 = float_7 + float_4;
		double_5 = double_5 * double_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		double_2 = double_6 * double_4;
		if(1)
		{
			short short_6 = 1;
			short_6 = short_2 * short_3;
		}
		if(1)
		{
			float float_8 = 1;
			int_4 = v_for(float_3);

			float_8 = float_2 + float_7;
		}
		char_3 = char_3 + char_3;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_7;
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			unsigned_int_7 = unsigned_int_5;
		}
		for(int looper_18=0; looper_18<1;looper_18++)
		{
			char char_4 = 1;
			int int_5 = 1;
			char_1 = char_2 * char_3;
			char_4 = char_2 * char_4;
			int_5 = int_3 + int_3;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		short_3 = short_3 + short_5;
	}
	float_4 = v_meff(double_4);

}
float v_app_pos_etc_plan( int parameter_1,double parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	long long_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_12 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	short_2 = short_1 * short_1;
	int_3 = int_1 * int_2;
	double_1 = double_1 + double_1;
	short_3 = short_1 + short_1;
	int_3 = int_2 * int_1;
	double_1 = double_2 + double_1;
	int_1 = int_4 + int_2;
	if(1)
	{
		int_3 = int_4;
		short_1 = short_1 + short_4;
		char_1 = char_1;
	}
	if(1)
	{
		long_2 = long_4 + long_3;
		char_3 = char_2 * char_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		int_3 = int_1;
		double_4 = double_3 + double_2;
		long_2 = long_5 + long_5;
	}
	if(1)
	{
		long_3 = long_4 + long_1;
		double_5 = double_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	double_6 = double_3 + double_4;
	int_3 = int_3 + int_5;
	if(1)
	{
		int_3 = int_4 * int_4;
		double_1 = double_7;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_3 + int_3;
	}
	if(1)
	{
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_2 = double_3;
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
				unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_8 = unsigned_int_1 + unsigned_int_5;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned_int_6 = unsigned_int_7;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_10 = 1;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			int_1 = int_4 + int_2;
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				double_8 = double_7 * double_3;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					unsigned_int_3 = unsigned_int_8 + unsigned_int_8;
					if(1)
					{
						double_6 = double_2 * double_2;
					}
				}
				double_7 = double_8 + double_1;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					int_1 = int_2;
				}
			}
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				char_2 = char_2 + char_2;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			for(int looper_12=0; looper_12<1;looper_12++)
			{
				double_5 = double_9 + double_1;
				if(1)
				{
					int_2 = int_3 + int_2;
				}
			}
			unsigned_int_3 = unsigned_int_5 + unsigned_int_8;
			float_1 = float_2 + float_1;
			double_4 = double_4 + double_9;
			for(int looper_13=0; looper_13<1;looper_13++)
			{
				short_1 = short_5 * short_5;
			}
		}
		if(1)
		{
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				double_1 = double_5 + double_8;
			}
		}
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			int_2 = int_6 + int_3;
		}
		if(1)
		{
			double_10 = double_4 + double_8;
			if(1)
			{
				double_2 = double_7;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
			}
		}
		if(1)
		{
			double_10 = double_1 * double_7;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
				short_2 = short_5;
			}
			long_2 = long_2 * long_3;
		}
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_2;
			if(1)
			{
				float_4 = float_3 + float_1;
				unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
			}
		}
		char_2 = char_3 + char_2;
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_9;
		}
		if(1)
		{
			long_5 = long_3 + long_2;
			if(1)
			{
				double_10 = double_4;
			}
		}
		if(1)
		{
		}
		unsigned_int_10 = unsigned_int_5 * unsigned_int_4;
		if(1)
		{
			double double_11 = 1;
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				unsigned_int_7 = unsigned_int_3;
				double_11 = double_7 * double_5;
			}
			if(1)
			{
				if(1)
				{
					short_1 = short_4 * short_5;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_8 * unsigned_int_5;
					if(1)
					{
						double_10 = double_11 * double_1;
					}
				}
				if(1)
				{
				}
				for(int looper_16=0; looper_16<1;looper_16++)
				{
					double_6 = double_4;
				}
			}
			unsigned_int_4 = unsigned_int_4 + unsigned_int_10;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_17=0; looper_17<1;looper_17++)
				{
					int_1 = int_2 + int_4;
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
					unsigned_int_10 = unsigned_int_8 + unsigned_int_3;
				}
			}
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					int_3 = int_3 + int_5;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			char_2 = char_1;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_21=0; looper_21<1;looper_21++)
				{
					float float_5 = 1;
					float float_6 = 1;
					float_6 = float_4 * float_5;
				}
			}
			if(1)
			{
				if(1)
				{
					for(int looper_22=0; looper_22<1;looper_22++)
					{
						char_2 = char_3 + char_1;
					}
				}
			}
		}
		if(1)
		{
			for(int looper_23=0; looper_23<1;looper_23++)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_8;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_11 = 1;
		unsigned_int_11 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		double_3 = double_9 * double_12;
		if(1)
		{
			for(int looper_24=0; looper_24<1;looper_24++)
			{
				unsigned_int_10 = unsigned_int_5;
			}
		}
	}
	if(1)
	{
		for(int looper_25=0; looper_25<1;looper_25++)
		{
			int_3 = int_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_12 = 1;
		unsigned_int_12 = unsigned_int_2;
	}
	short_3 = short_4 * short_3;
	double_3 = double_4 + double_4;
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		int_9 = int_7 + int_8;
	}
	for(int looper_26=0; looper_26<1;looper_26++)
	{
		short_5 = short_5;
	}
	if(1)
	{
		double_3 = double_8 * double_12;
		if(1)
		{
			long_5 = long_3 + long_1;
		}
		long_5 = long_2 * long_4;
	}
	if(1)
	{
		float_3 = float_3;
	}
	short_4 = short_5;
}
double v_app_pos_etc_sun( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	double double_8 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_9 = 1;
	char char_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	float float_4 = 1;
	long long_7 = 1;
	char char_7 = 1;
	double double_10 = 1;
	int int_8 = 1;
	short short_5 = 1;
	float float_5 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	double_2 = double_1 * double_2;
	double_4 = double_3 + double_2;
	char_1 = char_2;
	double_4 = double_2 * double_3;
	long_2 = long_1 + long_1;
	double_1 = double_5 * double_6;
	if(1)
	{
		long_3 = long_2 + long_3;
		double_6 = double_5 * double_3;
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
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float_1 = float_3 * float_2;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_5 = double_1 + double_4;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			short_2 = short_1 * short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_4 = 1;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				double_5 = double_6;
				if(1)
				{
					int_1 = int_1 * int_2;
				}
				if(1)
				{
					short_3 = short_1;
				}
			}
			v_swi_aberr_light(double_2,double_5,char_2);

			short_1 = short_3;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					long_4 = long_2 + long_3;
					if(1)
					{
						int_1 = int_3 * int_1;
					}
				}
				unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
				int_3 = v_swi_pleph(double_7,int_2,int_2,double_7,char_2);

				long_2 = long_1;
				if(1)
				{
					double_3 = double_7 * double_6;
				}
				if(1)
				{
					char_3 = char_1;
				}
				if(1)
				{
					v_get_denum(unsigned_int_4,char_3);

					short_4 = short_2 + short_3;
					unsigned_int_3 = unsigned_int_4;
				}
				unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
				char controller_17[3];
				fgets(controller_17 ,3 ,stdin);
				if( strcmp( controller_17, "ce") < 0)
				{
					double_2 = double_2 * double_5;
				}
				if(1)
				{
					char_4 = char_3 * char_2;
				}
				int_3 = int_1;
				if(1)
				{
					v_swi_close_jpl_file();

					float_1 = float_1 + float_3;
				}
				long_5 = long_2;
				int_2 = int_3 * int_4;
				double_8 = double_2 + double_1;
				if(1)
				{
				}
			}
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				v_swi_bias(double_8,double_6,unsigned_int_3,short_2);

				int_5 = int_1;
				if(1)
				{
					int_5 = v_swi_moshplan(double_7,int_6,long_4,double_5,double_9,char_5);

					short_1 = short_4 + short_2;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			v_swi_precess_speed(double_2,double_1,char_1,int_4);

			short_3 = short_2;
		}
	}
	if(1)
	{
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			int_2 = int_1 + int_7;
		}
	}
	if(1)
	{
		float_2 = v_app_pos_rest(long_5,long_3,double_2,double_9,unsigned_int_5,char_2);

		int_6 = int_2 + int_4;
	}
	if(1)
	{
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
		}
	}
	if(1)
	{
		long long_6 = 1;
		int_7 = v_swi_get_observer(double_3,float_2,double_9,double_6,char_6);

		long_2 = long_3 * long_6;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		long_2 = v_sweplan(double_8,int_6,int_1,float_4,long_7,double_3,double_1,double_8,double_7,char_2,-1 );

		char_7 = char_2 * char_5;
	}
	if(1)
	{
		float_2 = float_3 + float_3;
		if(1)
		{
			float_2 = v_sweph(double_5,int_3,int_2,int_7,double_6,int_2,double_4,char_7,-1 );

			short_3 = short_1 * short_1;
		}
		double_10 = double_3 * double_10;
	}
	if(1)
	{
		short short_6 = 1;
		unsigned_int_4 = v_if(char_4,int_1,double_8,int_8,short_5,float_5,double_5);

		short_6 = short_2 * short_1;
	}
	return double_10;
	int_3 = v_swi_precess(double_4,double_9,long_1,int_4);

}
void v_main_planet( double parameter_1,int parameter_2,float parameter_3,short parameter_4,char parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_5 = 1;
	double_1 = double_1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_1 * double_2;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			short_1 = short_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		float_1 = float_3 * float_1;
	}
	if(1)
	{
		double_4 = v_jplplan(double_2,int_2,char_1,long_1,double_1,double_2,double_4,char_1);

		char_2 = char_2 + char_1;
	}
	if(1)
	{
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 * float_4;
		if(1)
		{
			int_1 = int_3 + int_3;
		}
		double_3 = double_1;
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			int_1 = v_swi_moshplan(double_2,int_4,long_1,double_1,double_4,char_2);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			}
			char_3 = char_1 + char_3;
		}
		if(1)
		{
		}
	}
	double_4 = double_2 * double_2;
	int_2 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_6 = 1;
			int_7 = int_5 + int_6;
			if(1)
			{
				int_5 = int_1 + int_7;
			}
			double_2 = double_1 + double_5;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		char_1 = char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char char_5 = 1;
			unsigned int unsigned_int_5 = 1;
			char_2 = char_5 + char_4;
			if(1)
			{
				char_6 = char_4 * char_1;
			}
			double_3 = v_app_pos_etc_sun(int_8,char_2);

			unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
		}
	}
	float_3 = v_app_pos_etc_plan(int_2,double_5,char_6,-1 );

	unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_8 + int_7;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
	}
	long_3 = v_sweplan(double_2,int_3,int_1,float_2,long_1,double_5,double_4,double_4,double_1,char_6,-1 );

	int_5 = int_8 + int_2;
	float_1 = float_2 + float_5;
}
void v_swi_icrs2fk5( double parameter_1,long parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_1;
	int_3 = int_1 * int_4;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 + long_2;
	short_1 = short_2;
	double_4 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_3 = 1;
			long_3 = long_1 + long_1;
			if(1)
			{
				double_2 = double_2;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 * short_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_4 = unsigned_int_2;
	}
}
void v_swi_FK4_FK5( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_swi_cartpol_sp(double_1,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_2;
	}
	v_swi_polcart_sp(double_1,double_1);

	short_3 = short_1 * short_2;
}
unsigned int v_swe_fixstar( char parameter_1,double parameter_2,float parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_5 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_7 = 1;
	short short_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long_1 = v_free_planets();

	char_1 = v_swi_strcpy(char_1,char_2);

	v_swi_FK4_FK5(double_1,double_2);

	v_swi_icrs2fk5(double_2,long_1,long_2);

	v_swi_nutate(double_1,int_1,long_1);

	v_swi_coortrf2(double_1,double_3,double_4,double_4);

	v_swi_polcart_sp(double_4,double_2);

	float_1 = float_1 * float_1;
	if(1)
	{
		short_1 = v_memset(double_1,double_3,unsigned_int_1);

		long_3 = v_swi_right_trim(char_2);

		int_1 = v_swi_precess(double_1,double_4,long_4,int_1);

		v_swi_cartpol_sp(double_5,double_1);

		double_5 = double_3 * double_2;
	}
	char_3 = v_swi_init_swed_if_start();

	v_swi_close_jpl_file();

	long_2 = v_strncpy(char_1,short_1,float_1);

	float_1 = v_swi_fopen(int_2,char_4,char_3,char_3);

	v_swi_bias(double_4,double_1,unsigned_int_2,short_1);

	int_1 = v_swi_get_observer(double_5,float_2,double_4,double_5,char_2);

	v_swi_deflect_light(double_2,double_4,short_1);

	v_swi_precess_speed(double_4,double_4,char_5,int_3);

	float_1 = float_1 + float_1;
	short_2 = v_plaus_iflag(unsigned_int_3,unsigned_int_1,double_6,char_5);

	int_1 = v_swi_cutstr(char_5,char_4,char_3,int_4);

	v_get_denum(unsigned_int_3,char_2);

	v_main_planet(double_6,int_5,float_3,short_2,char_1);

	v_swi_aberr_light(double_7,double_4,char_2);

	int_2 = v_swi_trop_ra2sid_lon_sosy(double_1,double_1,int_3);

	short_1 = short_3 * short_2;
	if(1)
	{
		int int_6 = 1;
		v_swi_check_ecliptic(double_8,unsigned_int_2);

		v_swi_polcart(double_4,double_2);

		v_swe_get_ayanamsa_ex(double_4,unsigned_int_3,double_1,char_4);

		int_3 = int_6 + int_4;
	}
	return unsigned_int_1;
	long_3 = v_swe_set_sid_mode(float_1,double_6,double_8);

	v_swi_check_nutation(double_8,unsigned_int_4);

	int_7 = v_swi_trop_ra2sid_lon(double_2,double_4,double_4,int_8);

}
void v_swe_get_ayanamsa_ex( double parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	char char_7 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_1 = v_swe_deltat_ex(double_1,long_1,char_1);

	char_3 = char_2 + char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	char_3 = v_swi_init_swed_if_start();

	double_4 = double_2 * double_3;
	short_1 = v_plaus_iflag(unsigned_int_5,unsigned_int_6,double_2,char_3);

	double_1 = double_4 * double_5;
	long_1 = v_swe_set_sid_mode(float_1,double_1,double_3);

	char_4 = char_5;
	char_4 = char_6 + char_6;
	double_3 = double_2 * double_2;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	float_2 = v_swe_degnorm(double_6);

	int_1 = v_swi_precess(double_5,double_2,long_2,int_3);

	int_3 = int_1 * int_3;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		char_6 = char_4 * char_4;
	}
	if(1)
	{
		unsigned_int_1 = v_swe_fixstar(char_7,double_1,float_3,double_1,char_3);

		unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_1 = int_2 + int_1;
		if(1)
		{
		}
		int_4 = int_5;
	}
	if(1)
	{
		float_2 = float_4 * float_2;
		if(1)
		{
		}
		double_5 = v_swi_epsiln(double_2,short_1);

		int_6 = int_6;
	}
	if(1)
	{
		char_3 = char_5 * char_3;
		if(1)
		{
		}
		int_3 = int_6 + int_3;
	}
	if(1)
	{
		char_2 = char_6;
		if(1)
		{
		}
		float_5 = float_4;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short_4 = short_2 * short_3;
		if(1)
		{
		}
		short_5 = short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_5;
		if(1)
		{
		}
		char_7 = char_4 + char_4;
	}
	if(1)
	{
		int int_7 = 1;
		double double_7 = 1;
		int_7 = int_4 * int_6;
		if(1)
		{
		}
		float_5 = float_2 + float_2;
		double_6 = double_3 * double_7;
		int_2 = int_3;
	}
	if(1)
	{
		v_swi_coortrf(double_1,double_2,double_2);

		float_5 = float_6 * float_1;
		char controller_22[2];
		fgets(controller_22 ,2 ,stdin);
		if( strcmp( controller_22, "}") > 0)
		{
		}
		int_4 = int_6 * int_1;
	}
	if(1)
	{
		char_7 = char_2 + char_7;
		if(1)
		{
		}
		v_swi_cartpol(double_6,double_6);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_4 * int_3;
		if(1)
		{
		}
		float_6 = float_1 * float_3;
	}
	double_3 = double_1 + double_6;
	double_1 = double_6 + double_1;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_2;
	}
	float_7 = float_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_8;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_8;
	char_6 = char_1 + char_4;
	int_2 = int_4;
	char_1 = char_6 + char_1;
	char_5 = char_6 + char_5;
	double_5 = v_swi_armc_to_mc(double_3,double_6);

}
int v_swi_trop_ra2sid_lon_sosy( double parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	int_1 = v_swi_precess(double_3,double_3,long_1,int_2);

	short_2 = short_1 + short_1;
	char_2 = char_1 * char_2;
	int_2 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_2;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	int_1 = int_1;
	int_5 = int_4 * int_5;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_4 + double_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	float_1 = float_2;
	v_swi_polcart(double_1,double_1);

	char_3 = char_2 * char_1;
	v_swi_coortrf2(double_1,double_3,double_4,double_3);

	v_swi_cartpol_sp(double_3,double_1);

	short_2 = short_3 * short_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "^") < 0)
	{
		v_swi_coortrf(double_1,double_1,double_2);

		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	}
	float_1 = v_swe_degnorm(double_1);

	unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
	long_1 = long_2;
	double_1 = double_1 + double_3;
	double_3 = double_3;
	short_3 = short_4 + short_1;
	float_1 = float_3 * float_4;
	char_4 = char_2 * char_3;
	v_swi_cartpol(double_4,double_2);

	double_4 = double_1 * double_1;
	v_swi_polcart_sp(double_3,double_2);

	double_4 = double_4 + double_3;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	double_2 = double_1 * double_4;
	return int_3;
}
int v_swi_trop_ra2sid_lon( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int_1 = v_swi_precess(double_1,double_2,long_1,int_1);

	int_2 = int_2 * int_2;
	v_swi_polcart_sp(double_2,double_1);

	long_1 = long_1 + long_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
		char_1 = v_calc_epsilon(double_1,short_1,long_3);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_2 + double_2;
	}
	v_swi_cartpol_sp(double_4,double_5);

	int_1 = int_1;
	long_3 = long_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "$ ") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		v_swi_coortrf2(double_6,double_2,double_4,double_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	float_3 = float_2 * float_1;
	int_1 = int_1 * int_3;
	double_2 = double_7 * double_3;
	return int_4;
}
float v_app_pos_rest( long parameter_1,long parameter_2,double parameter_3,double parameter_4,unsigned int parameter_5,char parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	float float_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		v_swi_nutate(double_1,int_2,long_1);

		double_2 = double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_3 + int_4;
	}
	v_swi_polcart_sp(double_3,double_4);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		double_1 = double_1 + double_4;
		if(1)
		{
			v_swi_cartpol_sp(double_1,double_5);

			long_3 = long_2 * long_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = int_1 * int_2;
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
			if(1)
			{
			}
		}
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2 * short_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_3 = v_swi_trop_ra2sid_lon(double_2,double_4,double_4,int_3);

				short_2 = short_3 + short_1;
			}
			if(1)
			{
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_1 = double_3 * double_3;
			}
			int_5 = int_1 * int_5;
			v_swi_coortrf2(double_1,double_6,double_6,double_1);

			unsigned_int_2 = v_if(char_1,int_1,double_4,int_3,short_2,float_1,double_1);

			int_1 = v_swi_trop_ra2sid_lon_sosy(double_1,double_2,int_5);

			v_swe_get_ayanamsa_ex(double_1,unsigned_int_3,double_5,char_2);

			double_6 = double_1 + double_2;
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_5 + double_7;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_6 = 1;
		double double_8 = 1;
		float_2 = float_1 + float_1;
		int_2 = int_1 * int_5;
		int_6 = int_5 * int_4;
		double_3 = double_8 + double_6;
	}
	long_4 = long_1 * long_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	return float_2;
}
short v_swi_approx_jplhor( double parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	char_1 = char_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	short_1 = short_2;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		double_2 = double_4 + double_1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_3 = float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "`2") > 0)
	{
		int_2 = int_3 * int_1;
		v_swi_cartpol(double_4,double_1);

		int_2 = int_2 + int_2;
		double_2 = double_4 + double_1;
		char_3 = char_2 + char_2;
	}
	v_swi_polcart(double_4,double_1);

	double_4 = double_1;
	double_5 = double_1 * double_2;
	if(1)
	{
		char_1 = char_3;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	float_2 = float_1 * float_3;
	return short_2;
}
void v_swi_bias( double parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	double double_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_1;
	int_1 = int_1 + int_1;
	float_3 = float_1;
	int_2 = int_1 + int_2;
	double_1 = double_1;
	long_3 = long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_1;
	if(1)
	{
		float_2 = float_2 * float_4;
	}
	if(1)
	{
		float_1 = float_2 + float_3;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_1 * long_4;
		float_5 = float_2 * float_1;
		float_5 = float_2 * float_3;
		double_2 = double_2;
		int_1 = int_2 * int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		float_5 = float_2 + float_5;
	}
	if(1)
	{
		short short_3 = 1;
		char char_2 = 1;
		float float_6 = 1;
		short short_4 = 1;
		short_1 = short_3 + short_1;
		char_1 = char_1 * char_2;
		float_6 = float_4 * float_2;
		double_2 = double_2 * double_1;
		short_3 = short_4;
		double_2 = double_1 + double_3;
		double_3 = double_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_2;
	double_4 = double_1 + double_5;
	int_4 = int_2 + int_3;
	if(1)
	{
		int_5 = int_1 + int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
			if(1)
			{
				int_2 = int_3 * int_4;
			}
		}
	}
	if(1)
	{
		float float_7 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
			if(1)
			{
				int_4 = int_4 * int_5;
			}
		}
		float_7 = float_5;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_7 = 1;
		short_5 = v_swi_approx_jplhor(double_4,double_6,int_3,char_3);

		unsigned_int_7 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_4 = 1;
			char_4 = char_1 + char_3;
		}
	}
}
void v_get_denum( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_1;
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
		double double_1 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char controller_10[2];
		fgets(controller_10 ,2 ,stdin);
		if( strcmp( controller_10, "K") > 0)
		{
		}
		if(1)
		{
		}
	}
}
void v_swi_aberr_light( double parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_2;
	char_1 = char_2;
	double_2 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1 * short_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_2 * char_1;
	}
	int_3 = int_3 + int_2;
	long_1 = long_1 + long_2;
	double_3 = double_2 + double_3;
	short_2 = short_1 + short_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_3 = long_2 * long_1;
	}
	if(1)
	{
		int int_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_3 * long_4;
		}
		unsigned_int_3 = unsigned_int_3;
		int_1 = int_4 * int_1;
		short_4 = short_2 * short_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long long_6 = 1;
			long_6 = long_2 + long_2;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
			long_3 = long_6;
			unsigned_int_3 = unsigned_int_3;
		}
	}
}
void v_swi_cartpol_sp( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_6 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int_3 = int_1 + int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		long long_4 = 1;
		char_2 = char_1 + char_1;
		v_swi_cartpol(double_1,double_1);

		char_1 = char_3 * char_3;
		long_4 = long_3 + long_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long long_5 = 1;
		long_6 = long_2 + long_5;
		long_2 = long_2 * long_5;
	}
	char_1 = char_1 * char_2;
	char_4 = char_3 + char_1;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		char_3 = char_4;
	}
	short_1 = short_1 + short_1;
	int_3 = int_2 + int_1;
	short_2 = short_2 + short_2;
	float_3 = float_2 * float_2;
	float_3 = float_1 + float_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 + int_2;
	double_3 = double_4 * double_4;
	int_2 = int_4;
	short_4 = short_3 + short_2;
	int_3 = int_2 * int_3;
	short_5 = short_4 + short_5;
	long_1 = long_2 + long_6;
	char_3 = char_3;
	long_3 = long_6 + long_3;
}
void v_swi_precess_speed( double parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	v_swi_ldp_peps(double_1,double_2,double_1);

	double_2 = double_2;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_2;
	double_3 = double_3 + double_1;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		v_swi_polcart_sp(double_4,double_5);

		double_5 = double_2 + double_5;
		int_3 = v_swi_precess(double_5,double_3,long_1,int_4);

		short_3 = short_2 + short_1;
	}
	if(1)
	{
		char char_2 = 1;
		short short_4 = 1;
		v_swi_cartpol_sp(double_5,double_4);

		char_2 = char_1;
		short_4 = short_2 + short_3;
	}
	int_4 = int_1;
	int_1 = int_2 * int_4;
	int_4 = int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_6 = 1;
		double_3 = double_3 + double_6;
		double_2 = double_1 * double_3;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	int_3 = int_5 + int_1;
	float_2 = float_1 * float_1;
	short_5 = short_5;
	v_swi_coortrf2(double_5,double_2,double_5,double_4);

}
void v_swi_nutate( double parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float float_2 = 1;
				float_1 = float_1 + float_2;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short_3 = short_1 + short_2;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
			}
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1 + int_1;
			}
			unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_3 = 1;
		float_3 = float_1 + float_3;
	}
}
void v_swi_polcart_sp( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Vp") < 0)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
		char_2 = char_1 + char_1;
	}
	v_swi_polcart(double_2,double_2);

	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1 * int_1;
	double_4 = double_3 * double_2;
	char_2 = char_1 + char_2;
	char_2 = char_1 + char_3;
	int_2 = int_1 + int_1;
	int_1 = int_2 + int_1;
	double_2 = double_5;
	char_1 = char_1 + char_1;
	int_3 = int_2 * int_1;
	double_5 = double_5 + double_1;
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_4 + char_2;
	double_6 = double_5 * double_3;
	long_1 = long_3 * long_1;
	double_2 = double_5 * double_4;
	double_5 = double_1;
}
long v_sidtime_non_polynomial_part( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	long long_6 = 1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2;
	double_1 = double_1 + double_1;
	float_1 = float_2;
	float_2 = float_1 * float_2;
	char_3 = char_1 * char_2;
	float_5 = float_3 + float_4;
	double_3 = double_1 + double_2;
	char_4 = v_swe_radnorm(double_2);

	unsigned_int_1 = unsigned_int_2;
	char_5 = char_1 + char_5;
	double_3 = double_1 + double_1;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_3;
	long_4 = long_2 * long_1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		float_4 = float_5 * float_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 + int_1;
		}
		long_4 = long_2 + long_5;
	}
	float_2 = float_4;
	return long_6;
}
void v_swi_cartpol( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = int_1 + int_1;
	int_3 = int_2 + int_3;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
	}
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_2;
	int_2 = int_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_3;
	}
	char_1 = char_2;
	long_1 = long_1 + long_2;
	short_4 = short_1 + short_3;
}
void v_swi_coortrf( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 * double_3;
	float_1 = float_2;
	int_1 = int_1 + int_2;
	short_2 = short_1 * short_2;
	float_1 = float_1 + float_3;
	char_2 = char_1 + char_2;
	short_2 = short_3 * short_1;
	double_2 = double_3;
}
int v_sidtime_long_term( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_9 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	v_swi_cartpol(double_2,double_1);

	char_3 = char_1 * char_2;
	int_1 = int_1;
	int_2 = int_3;
	double_3 = double_4;
	double_3 = double_1;
	short_2 = short_2 * short_2;
	v_swi_polcart(double_4,double_4);

	long_1 = long_2;
	double_4 = double_3 * double_4;
	int_1 = int_3 * int_1;
	char_3 = char_4 + char_5;
	int_4 = int_4 * int_3;
	float_1 = v_swe_degnorm(double_4);

	char_3 = char_1 * char_5;
	v_swi_coortrf(double_3,double_2,double_5);

	float_2 = float_1;
	int_3 = v_swi_precess(double_3,double_5,long_2,int_2);

	double_2 = double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_6;
	int_5 = int_5 * int_6;
	double_6 = v_swi_epsiln(double_3,short_2);

	long_2 = long_1;
	int_6 = int_3 * int_3;
	double_2 = v_swe_deltat_ex(double_4,long_2,char_4);

	int_1 = int_7 + int_8;
	float_2 = float_2;
	int_1 = int_6 * int_6;
	double_7 = double_4;
	int_6 = int_8 + int_8;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_2 = v_swi_nutation(double_6,long_3,double_1);

	int_1 = int_5;
	if(1)
	{
		double double_8 = 1;
		double_2 = double_8 + double_5;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	int_2 = int_1 * int_8;
	unsigned_int_4 = unsigned_int_3;
	return int_9;
}
double v_swe_sidtime0( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_4 = 1;
	char char_4 = 1;
	float float_7 = 1;
	long long_5 = 1;
	double double_9 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 + long_2;
	int_1 = v_sidtime_long_term(double_1,double_2,double_3);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_1 + double_1;
	short_1 = short_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		short_2 = short_2 * short_2;
	}
	if(1)
	{
		double_4 = double_4 + double_5;
	}
	double_1 = double_4 * double_5;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_1 = short_1 + short_3;
			if(1)
			{
				short_2 = short_4 * short_1;
			}
			if(1)
			{
				double_2 = double_1;
			}
			if(1)
			{
				int_1 = int_1 * int_1;
			}
			if(1)
			{
				char char_3 = 1;
				char_3 = char_1 + char_2;
			}
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
	}
	short_2 = short_4 * short_2;
	char_2 = v_swi_init_swed_if_start();

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	double_4 = double_1 + double_2;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_4;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		long_1 = v_sidtime_non_polynomial_part(double_4);

		double_2 = double_3 * double_1;
		double_1 = v_swe_deltat_ex(double_6,long_3,char_1);

		int_3 = int_2 * int_2;
	}
	float_3 = float_1 * float_3;
	int_2 = int_3 + int_2;
	if(1)
	{
		double double_8 = 1;
		float_1 = float_2 + float_4;
		double_8 = double_7 + double_8;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		double_2 = double_7 + double_2;
		double_2 = double_3 * double_3;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		float_1 = float_2 + float_1;
		unsigned_int_2 = unsigned_int_5;
		float_5 = float_2 + float_4;
		int_2 = int_3 + int_2;
	}
	if(1)
	{
		double_3 = double_7;
		long_2 = long_3;
		float_6 = float_4 * float_2;
	}
	float_6 = float_4 * float_5;
	int_4 = int_3 + int_1;
	char_4 = char_2 + char_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	int_2 = int_3 * int_1;
	float_7 = v_swe_degnorm(double_6);

	long_2 = long_1 * long_5;
	if(1)
	{
		if(1)
		{
			char char_5 = 1;
			short short_5 = 1;
			char_5 = char_2;
			float_1 = float_5 + float_4;
			int_3 = int_1 * int_4;
			short_1 = short_4 + short_4;
			short_5 = short_4 + short_4;
			float_3 = float_3 + float_6;
			float_5 = float_4;
			unsigned_int_4 = unsigned_int_2;
		}
		if(1)
		{
			int_4 = int_1 + int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return double_9;
}
long v_init_dt()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_2 = short_1 * short_1;
			short_2 = short_3;
		}
		float_1 = v_swi_fopen(int_1,char_1,char_2,char_2);

		unsigned_int_1 = unsigned_int_2;
	}
	return long_1;
}
long v_deltat_aa( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_4 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	float_1 = v_adjust_for_tidacc(double_1,double_1,double_2);

	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_3;
	double_3 = double_4 * double_3;
	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_3 = 1;
		long long_3 = 1;
		int_1 = int_1 + int_1;
		int_2 = int_2 + int_1;
		char_1 = char_1 * char_1;
		short_1 = short_1 + short_3;
		if(1)
		{
			int_1 = int_1;
		}
		double_4 = double_1 * double_1;
		long_1 = v_init_dt();

		short_2 = short_3 * short_1;
		if(1)
		{
			double_3 = double_5 + double_1;
		}
		short_3 = short_3 + short_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			if(1)
			{
				int_2 = int_2 * int_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_5 = double_4 + double_3;
		}
		double_3 = double_4 + double_1;
		double_4 = double_1;
		if(1)
		{
			int_3 = int_1 * int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		short_1 = short_3 + short_1;
		int_3 = int_2 * int_3;
		if(1)
		{
			short_2 = short_2;
		}
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_1 = char_1 + char_2;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		long_3 = long_2 + long_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_4 * double_5;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double_4 = double_1 * double_1;
		char_1 = char_2 + char_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		long_2 = long_1 + long_4;
	}
	return long_4;
}
double v_deltat_stephenson_morrison_1600( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_3 = double_1 + double_2;
	short_1 = short_1 + short_1;
	double_2 = double_4 + double_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = v_deltat_longterm_morrison_stephenson(double_1);

	float_1 = v_adjust_for_tidacc(double_1,double_2,double_1);

	double_4 = double_3 + double_5;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
		double_1 = double_2 * double_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_2 = 1;
			long_1 = long_2;
			double_4 = double_5 + double_3;
			double_5 = double_2 + double_5;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int_3 = int_1 + int_1;
			long_1 = long_3 * long_3;
			float_2 = float_2 + float_2;
		}
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_4 = int_3 + int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		int_1 = int_3 * int_4;
		double_3 = double_4;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	char_2 = char_1 * char_2;
	return double_2;
}
float v_adjust_for_tidacc( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long_3 = long_1 + long_2;
		int_2 = int_1 * int_1;
	}
	return float_1;
}
short v_deltat_longterm_morrison_stephenson( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 + short_2;
	int_3 = int_1 * int_2;
	return short_3;
}
int v_deltat_espenak_meeus_1620( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		char_4 = char_2 + char_3;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short_1 = v_deltat_longterm_morrison_stephenson(double_1);

		double_1 = double_2 * double_1;
		int_4 = int_2 * int_3;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
		char_1 = char_3 + char_5;
	}
	if(1)
	{
		double_1 = double_2;
		int_3 = int_2 * int_2;
	}
	if(1)
	{
		short short_2 = 1;
		char char_6 = 1;
		short_2 = short_2 * short_1;
		char_2 = char_5 * char_6;
	}
	if(1)
	{
		int_1 = int_1 * int_5;
		char_5 = char_1;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		double_2 = double_3 + double_4;
	}
	if(1)
	{
		int_2 = int_5 + int_5;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_6;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_7 = 1;
		float_3 = float_1 + float_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_7;
	}
	int_3 = int_4 * int_1;
	float_4 = v_adjust_for_tidacc(double_3,double_3,double_3);

	double_3 = double_3 + double_1;
	return int_4;
}
float v_calc_deltat( double parameter_1,char parameter_2,double parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char_2 = char_2 + char_2;
	char_2 = char_3 * char_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		int_3 = int_2 + int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "_v") > 0)
	{
		if(1)
		{
			if(1)
			{
				char_5 = char_2 * char_4;
			}
			char_6 = v_swi_set_tid_acc(double_3,unsigned_int_3,char_4,char_3);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		char_4 = char_6 + char_6;
	}
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		if(1)
		{
			long_3 = long_4;
		}
		if(1)
		{
			if(1)
			{
				int int_4 = 1;
				char char_7 = 1;
				double_3 = double_2 + double_3;
				int_4 = int_3;
				char_7 = char_5 * char_1;
				long_4 = v_swi_get_tid_acc(double_3,double_3,char_1,unsigned_int_5,double_1,char_2);

				long_1 = long_3;
				long_3 = v_deltat_aa(double_4,double_1);

				int_4 = int_4 + int_2;
				double_4 = v_deltat_stephenson_morrison_1600(double_4,double_4);

				unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	char_1 = char_1 * char_4;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			float float_2 = 1;
			char char_8 = 1;
			unsigned_int_7 = unsigned_int_1;
			float_1 = float_2;
			char_1 = v_swi_init_swed_if_start();

			double_1 = double_5 * double_5;
			unsigned_int_4 = unsigned_int_3;
			double_5 = double_1;
			int_2 = int_2;
			char_6 = char_8;
		}
		if(1)
		{
			int_5 = v_deltat_espenak_meeus_1620(double_4,double_5);

			short_2 = short_1 + short_2;
			float_3 = v_adjust_for_tidacc(double_4,double_5,double_6);

			double_4 = double_2;
		}
	}
	float_3 = float_4 + float_3;
	return float_4;
}
long v_swi_guess_ephe_flag()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "=@") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return long_1;
}
long v_swe_deltat( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double_1 = v_swe_deltat_ex(double_1,long_1,char_1);

	char_3 = char_1 * char_2;
	return long_2;
	long_2 = v_swi_guess_ephe_flag();

}
double v_deltat( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	return double_1;
	long_1 = v_swe_deltat(double_1);

}
double v_swe_deltat_ex( double parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double_1 = v_deltat(double_1);

	float_1 = v_calc_deltat(double_2,char_1,double_1,char_1);

	long_2 = long_1 + long_2;
	if(1)
	{
	}
	double_3 = double_2;
	return double_2;
}
int v_swi_get_observer( double parameter_1,float parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_4 = 1;
	char char_1 = 1;
	double double_6 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_2 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	v_swi_polcart_sp(double_1,double_2);

	double_3 = double_1 + double_1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_3;
	double_3 = double_4 + double_2;
	int_3 = v_swi_nutation(double_4,long_1,double_2);

	int_3 = int_2 + int_3;
	if(1)
	{
		if(1)
		{
			long_3 = long_1 + long_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_5 = v_swe_deltat_ex(double_3,long_4,char_1);

	double_2 = double_6;
	if(1)
	{
		float_1 = float_1 + float_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		char_3 = char_2 + char_2;
		if(1)
		{
			double_5 = double_5 * double_7;
		}
	}
	if(1)
	{
		double_2 = double_2 + double_6;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	int_1 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_3 = v_swi_precess(double_1,double_3,long_3,int_3);

	v_swi_precess_speed(double_5,double_2,char_3,int_2);

	int_1 = int_2;
	double_1 = v_swi_epsiln(double_2,short_1);

	short_3 = short_1 + short_2;
	char_1 = char_2 + char_2;
	double_3 = double_6 + double_3;
	v_swi_cartpol(double_1,double_4);

	long_1 = long_5 + long_6;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	float_2 = float_1;
	double_7 = double_3 * double_2;
	v_swi_coortrf2(double_3,double_4,double_5,double_7);

	long_7 = long_2 * long_3;
	float_2 = float_2;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	double_3 = double_5 * double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_7 = long_4 * long_7;
	}
	if(1)
	{
		double double_8 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float_2 = float_3 + float_1;
		double_8 = double_6 + double_5;
		double_7 = v_swe_sidtime0(double_1,double_7,double_1);

		unsigned_int_2 = unsigned_int_8 + unsigned_int_9;
	}
	float_1 = float_4 * float_4;
	int_4 = int_3 * int_2;
	if(1)
	{
		float float_5 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_4 = 1;
			char_1 = char_4 * char_3;
		}
		float_5 = float_3 * float_5;
		int_3 = int_4;
	}
	return int_3;
	v_swi_nutate(double_4,int_4,long_6);

}
long v_app_pos_etc_moon( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_3 = 1;
	double double_6 = 1;
	int int_8 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	double double_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_10 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_11 = 1;
	long long_7 = 1;
	float float_5 = 1;
	short_1 = short_1 * short_1;
	v_swi_aberr_light(double_1,double_1,char_1);

	int_1 = int_2;
	int_2 = v_swi_pleph(double_2,int_2,int_3,double_2,char_2);

	long_1 = v_sweplan(double_3,int_3,int_1,float_1,long_1,double_4,double_5,double_3,double_5,char_1,-1 );

	char_2 = char_2 * char_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_2 + double_1;
	short_2 = short_1 + short_1;
	int_3 = int_3 + int_4;
	int_5 = v_for(float_2);

	int_7 = int_5 * int_6;
	v_swi_bias(double_5,double_5,unsigned_int_1,short_3);

	int_6 = int_5 * int_2;
	double_5 = double_6;
	if(1)
	{
		int_5 = int_8 + int_2;
		short_1 = short_1 * short_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_4 + double_5;
		float_3 = float_1 * float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_2 = short_4 * short_3;
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
				int_7 = int_6;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_4 = float_3 + float_4;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_6 = double_4 + double_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_8 = v_swi_get_observer(double_2,float_4,double_4,double_4,char_3);

			float_3 = float_3 + float_4;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double double_7 = 1;
			double_7 = double_6 + double_2;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			double_3 = double_2;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			short short_5 = 1;
			int_3 = v_swi_precess(double_8,double_4,long_2,int_2);

			short_5 = short_2 + short_2;
		}
	}
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_5 = long_3 + long_4;
		v_get_denum(unsigned_int_2,char_4);

		short_1 = short_2 + short_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			float_1 = float_2 * float_1;
		}
		if(1)
		{
			double_3 = double_6 * double_9;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			double_3 = double_10;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			char_7 = char_5 + char_6;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		long_1 = long_4 + long_3;
		if(1)
		{
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			int int_9 = 1;
			int int_10 = 1;
			float_4 = v_app_pos_rest(long_1,long_6,double_1,double_5,unsigned_int_2,char_6);

			int_10 = int_9 * int_8;
		}
		double_9 = double_6 + double_6;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			int int_11 = 1;
			char char_8 = 1;
			char char_9 = 1;
			v_swi_precess_speed(double_4,double_10,char_5,int_6);

			float_3 = float_1;
			int_2 = int_11;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
			char_9 = char_6 + char_8;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		}
		unsigned_int_6 = v_if(char_4,int_2,double_11,int_3,short_3,float_4,double_3);

		long_7 = long_4 * long_1;
		if(1)
		{
			if(1)
			{
			}
			for(int looper_14=0; looper_14<1;looper_14++)
			{
				double_11 = double_11;
			}
		}
		if(1)
		{
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				int_2 = int_2;
			}
		}
		if(1)
		{
			for(int looper_16=0; looper_16<1;looper_16++)
			{
				double_10 = double_3 + double_6;
			}
		}
		if(1)
		{
			for(int looper_17=0; looper_17<1;looper_17++)
			{
				short_4 = short_4 * short_2;
			}
		}
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		int_6 = int_7 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_3;
		if(1)
		{
			if(1)
			{
				for(int looper_19=0; looper_19<1;looper_19++)
				{
					short short_6 = 1;
					short_4 = short_2 + short_6;
				}
			}
		}
	}
	if(1)
	{
		for(int looper_20=0; looper_20<1;looper_20++)
		{
			double_2 = double_5 * double_1;
		}
	}
	if(1)
	{
		float_5 = float_5 + float_5;
	}
	for(int looper_21=0; looper_21<1;looper_21++)
	{
		long_2 = long_7;
	}
	if(1)
	{
		float_5 = float_5 * float_2;
		if(1)
		{
			v_swi_close_jpl_file();

			char_6 = char_6 * char_7;
		}
		long_3 = long_6;
	}
	if(1)
	{
		char_7 = char_7 + char_6;
	}
	return long_7;
}
long v_embofs_mosh( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int_1 = int_1 + int_1;
	float_1 = v_swe_degnorm(double_1);

	int_1 = int_2 + int_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_4 = int_2;
	long_2 = long_1 + long_1;
	int_3 = int_4;
	short_2 = short_1 * short_2;
	char_1 = char_1 * char_1;
	int_4 = int_3;
	char_1 = char_2 + char_2;
	short_2 = short_2 + short_1;
	double_1 = double_2 + double_3;
	long_2 = long_2 * long_2;
	int_4 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_2;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	char_3 = char_3;
	float_1 = float_1 * float_2;
	int_5 = int_3 + int_5;
	float_1 = float_2;
	long_3 = long_1 + long_3;
	short_1 = short_3 + short_2;
	float_3 = float_3 + float_2;
	int_4 = int_3 + int_1;
	long_2 = long_3 * long_1;
	int_4 = int_4 * int_4;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	char_1 = char_1 * char_2;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_8;
	double_4 = double_1 * double_2;
	short_4 = short_3 + short_3;
	int_1 = int_5 + int_6;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
	int_3 = v_swi_precess(double_4,double_5,long_4,int_5);

	double_3 = double_5 + double_4;
	v_swi_coortrf2(double_6,double_1,double_2,double_4);

	int_3 = int_3 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_swi_polcart(double_2,double_7);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_8;
	}
	return long_1;
}
void v_sscc_88( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_3;
	short_2 = short_1 * short_1;
	short_3 = short_2 * short_3;
	double_1 = double_1 + double_2;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_4 = int_4 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_4 = short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		char_1 = char_1 * char_2;
		double_1 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	}
}
int v_swi_moshplan2( double parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char char_5 = 1;
	short short_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_8 = 1;
	double double_9 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	char_4 = char_1 * char_3;
	int_1 = int_2;
	int_1 = int_1 * int_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_2 = float_1 * float_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	short_3 = short_1 * short_2;
	float_1 = float_2 * float_3;
	char_5 = char_4 * char_2;
	short_3 = short_4;
	float_3 = float_4 + float_5;
	unsigned_int_3 = unsigned_int_2;
	char_3 = char_5 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_6 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_7 = 1;
		char char_8 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_5 = 1;
		short short_7 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		long long_5 = 1;
		double_2 = double_2 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long_1 = long_1 + long_2;
			char_6 = char_6 * char_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long_4 = long_3 * long_2;
			}
			float_2 = float_5 * float_1;
			unsigned_int_5 = unsigned_int_6;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_7;
			double_1 = double_3;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_2 = unsigned_int_6;
			}
			unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
			double_2 = double_1 + double_1;
		}
		char_7 = char_6 + char_1;
		int_3 = int_1 + int_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			double double_4 = 1;
			char_8 = char_5 * char_1;
			double_3 = double_3 + double_4;
			if(1)
			{
				double_5 = double_5 + double_1;
				if(1)
				{
					double_6 = double_3 * double_2;
				}
				int_2 = int_1;
				double_7 = double_6 * double_6;
				if(1)
				{
					int_4 = int_3 + int_3;
				}
				int_5 = int_2;
				if(1)
				{
					char char_9 = 1;
					char_2 = char_4 + char_9;
					double_4 = double_1 + double_1;
					unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
				}
				if(1)
				{
					char char_10 = 1;
					char_5 = char_10 + char_3;
					short_6 = short_4 + short_5;
					v_sscc_88(int_3,double_2,int_4);

					short_2 = short_2 * short_4;
				}
			}
		}
		short_7 = short_1 * short_4;
		float_5 = float_2;
		int_6 = int_6;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			long_2 = long_3 * long_1;
			int_5 = int_1 + int_7;
		}
		double_6 = double_7 + double_1;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_8;
		int_7 = int_2;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			char_8 = char_7 * char_4;
			int_2 = int_3 * int_2;
		}
		double_6 = double_6 + double_5;
		float_1 = float_4 + float_1;
		long_2 = long_3 + long_4;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			int int_8 = 1;
			int int_9 = 1;
			long_1 = long_4;
			int_9 = int_5 + int_8;
		}
		long_1 = long_5 + long_1;
	}
	short_4 = short_6 * short_5;
	double_3 = double_8 * double_8;
	double_8 = double_2 + double_9;
	return int_4;
}
int v_swi_moshplan( double parameter_1,int parameter_2,long parameter_3,double parameter_4,double parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	v_swi_polcart(double_1,double_1);

	double_2 = double_2 * double_3;
	double_2 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_2;
	short_1 = short_2 + short_2;
	long_1 = long_1;
	double_1 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_1 + int_2;
	char_1 = char_1 * char_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		double_4 = double_2;
		short_2 = short_3 * short_4;
	}
	if(1)
	{
		char_2 = char_2 + char_1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
			if(1)
			{
				float_1 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			char char_3 = 1;
			int_3 = int_2 + int_4;
			char_3 = char_1 * char_1;
			long_1 = long_1 + long_3;
			int_3 = int_1 + int_3;
			if(1)
			{
				char_1 = char_3 + char_1;
				unsigned_int_1 = unsigned_int_3;
				short_3 = short_2 * short_4;
			}
			float_2 = float_2 * float_2;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
			long_3 = v_embofs_mosh(double_3,double_3);

			int_3 = int_4 + int_1;
			char_2 = char_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_2 = double_3 * double_2;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_2 = int_2 + int_3;
			}
		}
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				v_swi_coortrf2(double_1,double_5,double_6,double_6);

				int_1 = int_3 * int_1;
			}
		}
	}
	if(1)
	{
		float_3 = float_1 + float_3;
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_2 = double_5 * double_7;
		}
		if(1)
		{
			char char_4 = 1;
			int int_5 = 1;
			short short_5 = 1;
			unsigned_int_4 = unsigned_int_3;
			char_4 = char_1 * char_4;
			double_1 = double_5;
			if(1)
			{
				double_4 = double_3 + double_4;
				long_1 = long_3 * long_3;
				double_2 = double_6 + double_4;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					int_5 = int_5 * int_5;
				}
			}
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			short_3 = short_3 * short_5;
			int_5 = int_3;
			short_5 = short_1 + short_4;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_2 = unsigned_int_5;
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				float_2 = float_3;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double double_8 = 1;
				int_3 = v_swi_moshplan2(double_6,int_4,double_5);

				double_8 = double_1 + double_3;
			}
		}
	}
	return int_1;
}
double v_swemoon( double parameter_1,double parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_4 = 1;
	float_1 = v_sweph(double_1,int_1,int_2,int_1,double_2,int_3,double_1,char_1,-1 );

	char_2 = char_1 + char_2;
	int_1 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_3 + int_2;
	if(1)
	{
		long long_5 = 1;
		long_5 = long_4 * long_1;
	}
	if(1)
	{
		double_1 = double_2;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long_4 = long_1;
			unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_3 + char_2;
		}
	}
	return double_4;
}
char v_embofs( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return char_1;
}
void v_swi_cross_prod( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_1 * double_2;
}
int v_pre_pecl( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_2;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	long_1 = long_2;
	float_1 = float_1 * float_1;
	short_2 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_3 = double_2 + double_1;
		int_2 = int_1 + int_2;
		double_4 = double_2;
		int_3 = int_2 * int_1;
		int_4 = int_3;
		char_1 = char_1 * char_1;
	}
	char_2 = char_1 + char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	double_5 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_1;
	float_3 = float_2 + float_1;
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_2;
	}
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	double_3 = double_5 + double_3;
	int_4 = int_3 * int_4;
	char_3 = char_2 + char_3;
	char_4 = char_3 * char_4;
	return int_5;
}
long v_pre_pequ( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	double double_5 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_3;
	int_1 = int_1 + int_3;
	char_2 = char_1 * char_2;
	long_2 = long_1 * long_1;
	int_3 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_3 = float_1 * float_2;
		int_2 = int_4 + int_5;
		char_3 = char_3 + char_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_5 = int_2 + int_3;
		short_1 = short_2;
	}
	int_4 = int_6 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		double_4 = double_3 + double_4;
	}
	double_3 = double_5;
	long_3 = long_2 * long_1;
	float_2 = float_4 * float_1;
	float_1 = float_2 + float_4;
	float_3 = float_3 * float_5;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		int int_7 = 1;
		int_4 = int_7 * int_1;
	}
	return long_1;
}
unsigned int v_pre_pmat( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_6 = 1;
	short short_4 = 1;
	float float_1 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_2;
	int_1 = v_pre_pecl(double_1,double_1);

	short_1 = short_2 + short_2;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	int_2 = int_3 * int_4;
	short_2 = short_1 + short_2;
	double_3 = double_2 + double_1;
	double_1 = double_4 * double_5;
	int_5 = int_3 * int_2;
	long_1 = v_pre_pequ(double_3,double_4);

	short_3 = short_3 + short_3;
	double_3 = double_4 + double_2;
	int_6 = int_1 * int_5;
	int_2 = int_3 + int_3;
	short_4 = short_4 + short_4;
	float_1 = float_1 * float_1;
	short_5 = short_5 * short_6;
	v_swi_cross_prod(double_4,double_2,double_1);

	char_2 = char_1 * char_1;
	return unsigned_int_1;
}
char v_precess_3( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = v_pre_pmat(double_1,double_2);

	long_1 = long_2;
	int_1 = int_2;
	if(1)
	{
	}
	short_1 = short_2;
	short_1 = short_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "wn") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_1 + double_3;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_1 = long_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_1 = double_2 * double_3;
	}
	return char_1;
}
double v_precess_2( double parameter_1,double parameter_2,long parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	char char_6 = 1;
	int int_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	long long_6 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	int_2 = int_1 + int_2;
	double_1 = double_2;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2 + int_3;
		double_3 = double_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		char_3 = char_4;
		int_1 = int_1 + int_3;
		int_1 = int_1;
	}
	if(1)
	{
		double_4 = double_1 * double_1;
		int_2 = int_1;
		char_4 = char_2 + char_4;
	}
	double_5 = double_6;
	if(1)
	{
		double_4 = double_3 * double_4;
	}
	if(1)
	{
		char_2 = char_5 * char_3;
	}
	short_4 = short_4 * short_5;
	short_5 = short_2;
	double_2 = double_1 + double_6;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	float_2 = float_2 + float_3;
	int_1 = int_4 * int_3;
	double_7 = double_6 * double_1;
	long_1 = long_3 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_2;
	}
	unsigned_int_1 = unsigned_int_1;
	float_5 = float_4 + float_2;
	long_4 = long_1 * long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_6 = char_5 + char_5;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_2;
	}
	if(1)
	{
		float_1 = float_5 * float_3;
	}
	char_3 = char_6;
	int_5 = int_2 * int_3;
	double_1 = double_8 + double_8;
	unsigned_int_3 = unsigned_int_3;
	double_9 = double_7 * double_3;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_4 + float_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_8 = double_7 * double_9;
	}
	if(1)
	{
		int_1 = int_2;
	}
	float_4 = float_4 * float_4;
	double_2 = v_swi_epsiln(double_9,short_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_6 = double_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	float_6 = float_3 * float_4;
	if(1)
	{
		char_5 = char_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	long_6 = long_3;
	float_5 = float_4 * float_2;
	double_1 = double_6 * double_4;
	short_3 = short_1 * short_5;
	int_3 = int_6 * int_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	int_2 = int_5 + int_4;
	double_2 = double_3 + double_7;
	char_4 = char_4 * char_6;
	short_3 = short_4;
	double_5 = double_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long_6 = long_3 * long_1;
	}
	return double_4;
}
long v_precess_1( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1 + long_1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		short_1 = short_1;
		unsigned_int_2 = unsigned_int_2;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double_1 = double_2 * double_4;
		double_3 = double_2 + double_5;
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_2 = double_5;
		unsigned_int_3 = unsigned_int_4;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
	}
	double_2 = double_4 * double_1;
	char_3 = char_1 + char_2;
	char_6 = char_4 * char_5;
	short_2 = short_1 * short_1;
	int_2 = int_3;
	int_5 = int_1 + int_4;
	float_2 = float_3 * float_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		long_1 = long_3 + long_1;
		char_6 = char_2 * char_1;
		int_2 = int_3 * int_3;
	}
	if(1)
	{
		long long_4 = 1;
		float_1 = float_2 * float_3;
		double_4 = double_2 * double_3;
		long_3 = long_2 * long_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_5 * double_4;
	}
	return long_2;
}
int v_swi_precess( double parameter_1,double parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long_1 = v_precess_1(double_1,double_1,int_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1 + int_1;
	double_1 = v_precess_2(double_1,double_2,long_2,int_2,int_2);

	char_1 = char_2;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char_2 = v_precess_3(double_2,double_3,int_2,int_1);

		float_2 = float_1 * float_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_1 + long_3;
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
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "Eu") < 0)
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
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long_3 = long_1 * long_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_2;
	int_3 = int_1 * int_3;
	int_2 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
}
void v_swi_polcart( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char_3 = char_1 + char_2;
	double_2 = double_1 * double_2;
	char_2 = char_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
}
double v_ecldat_equ2000( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_swi_polcart(double_1,double_2);

	long_1 = long_2;
	return double_2;
	v_swi_coortrf2(double_2,double_1,double_3,double_1);

	int_1 = v_swi_precess(double_4,double_3,long_1,int_1);

}
double v_moon4()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	int_3 = int_1 * int_2;
	short_1 = v_mods3600(double_1);

	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_3;
}
long v_moon3()
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short_1 = short_1;
	short_1 = short_1 * short_1;
	char_1 = char_2;
	long_1 = long_1;
	long_1 = long_1 + long_2;
	int_1 = v_chewm(float_1,int_1,int_1,int_2,double_1);

	double_2 = double_1;
	double_5 = double_3 * double_4;
	return long_3;
}
float v_moon2()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_6 = 1;
	float float_6 = 1;
	char char_5 = 1;
	long_1 = long_1 * long_1;
	long_3 = long_2 + long_2;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_1;
	float_3 = float_1 * float_2;
	int_1 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	short_2 = short_1 + short_1;
	short_1 = short_2 + short_1;
	double_1 = double_1 + double_2;
	double_3 = double_1 + double_1;
	int_3 = int_2 + int_1;
	float_4 = float_4;
	short_4 = short_3 + short_1;
	unsigned_int_3 = unsigned_int_3;
	short_3 = short_3 * short_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_1;
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2;
	char_2 = char_1 + char_2;
	double_3 = double_1;
	short_4 = short_2 * short_2;
	float_1 = float_1 + float_1;
	double_3 = double_4;
	double_3 = double_1;
	short_2 = short_2 * short_1;
	double_5 = double_3 + double_5;
	int_5 = int_4 + int_1;
	float_3 = float_3 + float_2;
	float_5 = float_1 + float_1;
	long_2 = long_2 + long_3;
	long_1 = long_3;
	int_5 = int_3;
	int_1 = int_6 + int_1;
	double_5 = double_2 + double_3;
	double_3 = double_3 * double_4;
	int_5 = int_7 + int_3;
	char_3 = char_3 * char_4;
	long_2 = long_2 * long_2;
	short_1 = short_5;
	char_1 = char_4;
	char_2 = char_3 + char_2;
	long_4 = long_1;
	double_5 = double_1;
	int_2 = int_7 + int_5;
	int_5 = int_1 + int_8;
	double_2 = double_2;
	short_2 = short_3 * short_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	int_6 = int_5 + int_1;
	double_1 = double_3 + double_5;
	float_1 = float_1 + float_1;
	long_2 = long_1;
	int_1 = int_1 + int_9;
	short_1 = short_4 + short_6;
	short_3 = short_3;
	short_5 = short_2 + short_3;
	int_7 = int_8;
	float_3 = float_1;
	float_6 = float_1 * float_2;
	int_4 = int_3;
	int_6 = int_7 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	float_2 = float_2 + float_2;
	char_4 = char_5 * char_1;
	double_1 = double_4 + double_1;
	float_1 = float_6;
	double_4 = double_3 + double_3;
	return float_6;
}
int v_chewm( float parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_5 = 1;
		short short_6 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		short_3 = short_1 + short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			if(1)
			{
				double double_3 = 1;
				unsigned int unsigned_int_5 = 1;
				double_2 = double_1 + double_1;
				if(1)
				{
					double_2 = double_3;
				}
				char_2 = char_2 * char_1;
				double_3 = double_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
				}
				if(1)
				{
					short_4 = short_3 + short_3;
					long_1 = long_1 * long_2;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
					double_4 = double_2 * double_2;
					short_3 = short_5 + short_1;
				}
			}
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
		float_1 = float_1 + float_1;
		long_2 = long_3;
		unsigned_int_7 = unsigned_int_3;
		if(1)
		{
			int_4 = int_2 * int_3;
		}
		int_2 = int_3 + int_1;
		short_5 = short_1 * short_4;
		char_2 = char_2 * char_3;
		int_1 = int_1 + int_2;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_8;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
		double_1 = double_4 + double_4;
		int_4 = int_1 * int_5;
		char_3 = char_3 + char_3;
		double_4 = double_2 + double_2;
		long_1 = long_3;
		int_2 = int_3 + int_2;
		short_4 = short_6;
	}
	return int_1;
}
float v_sscc( int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_1;
	long_1 = long_1 + long_2;
	long_4 = long_3 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		int int_2 = 1;
		double double_2 = 1;
		short short_3 = 1;
		long_5 = long_1 * long_1;
		int_2 = int_2;
		double_2 = double_1 * double_2;
		short_1 = short_2 * short_3;
		float_1 = float_1;
	}
	return float_1;
}
short v_moon1()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short short_4 = 1;
	int int_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_9 = 1;
	float float_5 = 1;
	double double_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_9 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_5 = 1;
	char char_10 = 1;
	float float_9 = 1;
	long long_6 = 1;
	int int_10 = 1;
	int int_11 = 1;
	float float_10 = 1;
	short short_7 = 1;
	short short_8 = 1;
	float float_11 = 1;
	long long_7 = 1;
	double double_11 = 1;
	char char_11 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_12 = 1;
	int int_12 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_1;
		short_1 = short_1 + short_1;
	}
	double_2 = double_1 + double_1;
	double_3 = double_3;
	int_3 = int_2 + int_1;
	int_4 = int_1 + int_3;
	long_1 = long_1 * long_1;
	char_4 = char_3 + char_1;
	double_3 = double_1 + double_1;
	double_1 = double_2 + double_1;
	float_1 = v_sscc(int_4,double_4,int_3);

	int_4 = int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_7 = int_5 + int_6;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	int_7 = int_5 + int_4;
	char_3 = char_5 + char_4;
	int_2 = int_1 + int_4;
	short_2 = short_3;
	int_4 = int_6 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	double_4 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	float_4 = float_1 * float_3;
	char_7 = char_1 + char_6;
	int_5 = int_5 + int_4;
	int_5 = int_2 + int_2;
	short_2 = short_1 + short_3;
	unsigned_int_4 = unsigned_int_4;
	short_4 = short_2 + short_4;
	int_7 = int_1 + int_7;
	int_7 = int_1 * int_8;
	short_3 = short_2 * short_4;
	double_4 = double_2 + double_3;
	long_2 = long_2 + long_1;
	long_2 = long_1 + long_3;
	double_1 = double_4 * double_4;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	int_4 = int_1;
	char_4 = char_1 + char_5;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
	double_1 = double_2 * double_3;
	int_5 = int_9;
	long_2 = long_1 * long_1;
	float_4 = float_5 * float_2;
	char_6 = char_4;
	char_4 = char_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	long_1 = long_3;
	char_6 = char_1 + char_7;
	double_5 = double_2;
	float_3 = float_6 + float_2;
	int_4 = int_7 * int_3;
	float_7 = float_4 * float_6;
	short_2 = short_3 + short_2;
	char_4 = char_4 + char_2;
	double_2 = double_1 * double_5;
	int_6 = int_2 * int_6;
	int_9 = int_8 * int_2;
	long_4 = long_1 * long_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	short_3 = short_4;
	unsigned_int_7 = unsigned_int_1;
	int_3 = int_5;
	long_2 = long_4 + long_2;
	char_7 = char_6 * char_5;
	int_7 = int_3 * int_3;
	double_3 = double_4;
	short_4 = short_2 * short_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_4 + long_3;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	short_1 = short_3;
	int_1 = int_5 * int_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_7;
	double_1 = double_5 * double_1;
	double_3 = double_5 * double_1;
	double_5 = double_1 * double_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_8;
	double_3 = double_3 + double_3;
	long_1 = long_2 * long_1;
	unsigned_int_9 = unsigned_int_5 * unsigned_int_5;
	double_3 = double_4 + double_6;
	double_5 = double_7;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	char_4 = char_2 * char_8;
	unsigned_int_5 = unsigned_int_10 * unsigned_int_9;
	short_4 = short_4 * short_4;
	short_4 = short_3 * short_4;
	char_8 = char_8;
	double_6 = double_5;
	float_2 = float_5 * float_8;
	long_1 = long_4;
	unsigned_int_3 = unsigned_int_7;
	double_9 = double_4 * double_8;
	long_2 = long_2 * long_1;
	int_9 = int_8 * int_4;
	double_4 = double_3 * double_9;
	double_3 = double_10 * double_9;
	float_6 = float_7 * float_8;
	unsigned_int_4 = unsigned_int_9;
	unsigned_int_10 = unsigned_int_10 * unsigned_int_7;
	unsigned_int_11 = unsigned_int_4 + unsigned_int_10;
	char_1 = char_9 * char_7;
	double_5 = double_6 + double_5;
	short_1 = short_5 + short_5;
	float_1 = float_4 + float_4;
	short_6 = short_1;
	long_3 = long_5 * long_3;
	unsigned_int_3 = unsigned_int_9 + unsigned_int_11;
	int_2 = v_chewm(float_4,int_7,int_6,int_5,double_8);

	double_6 = double_9 * double_7;
	int_4 = int_9;
	long_4 = long_4;
	char_9 = char_10 + char_1;
	float_9 = float_2 * float_5;
	int_6 = int_3;
	long_2 = long_6;
	long_2 = long_4 + long_1;
	int_5 = int_10 + int_10;
	float_4 = float_6 * float_5;
	int_9 = int_11 * int_7;
	short_2 = short_3 + short_5;
	float_1 = float_1;
	unsigned_int_10 = unsigned_int_5 + unsigned_int_11;
	int_8 = int_11 + int_9;
	double_3 = double_7 + double_5;
	float_8 = float_10;
	short_4 = short_7 + short_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	short_8 = short_8;
	float_1 = float_11 + float_3;
	char_1 = char_9 + char_10;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_8;
	long_6 = long_5 * long_7;
	double_11 = double_5 + double_6;
	double_8 = double_2 * double_9;
	float_6 = float_6 * float_8;
	double_6 = double_10;
	unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
	char_8 = char_6 * char_8;
	char_11 = char_11 * char_9;
	int_4 = int_11 + int_1;
	unsigned_int_5 = unsigned_int_12;
	float_6 = float_10 * float_4;
	int_1 = int_6 + int_11;
	int_9 = int_1 + int_2;
	unsigned_int_13 = unsigned_int_9 * unsigned_int_2;
	char_1 = char_2 * char_10;
	float_1 = float_8 + float_4;
	char_3 = char_3 + char_12;
	int_12 = int_4;
	double_7 = double_11 * double_7;
	return short_6;
}
void v_mean_elements_pl()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int_1 = int_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	short_1 = v_mods3600(double_1);

	short_4 = short_2 + short_3;
	double_1 = double_2 + double_2;
	double_4 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_4 * double_3;
	long_2 = long_3 * long_2;
}
short v_mods3600( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_2 = short_1 * short_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_1;
	short_3 = short_3 * short_4;
	return short_4;
}
long v_mean_elements()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		float float_1 = 1;
		short_1 = v_mods3600(double_1);

		float_1 = float_1 * float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	short_1 = short_2 + short_1;
	return long_1;
}
int v_swi_moshmoon2( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_1;
	char_1 = char_1 + char_1;
	long_1 = v_mean_elements();

	float_1 = v_moon2();

	double_1 = double_1;
	v_mean_elements_pl();

	double_1 = double_2 * double_2;
	double_3 = v_moon4();

	long_2 = long_1 + long_2;
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	short_2 = short_2;
	long_1 = v_moon3();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_moon1();

	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	return int_3;
}
int v_swi_moshmoon( double parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	short_2 = short_1 * short_2;
	double_2 = double_1 + double_1;
	double_3 = double_2;
	short_2 = short_3;
	double_5 = double_4 + double_1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double_2 = double_6 * double_7;
	}
	if(1)
	{
		if(1)
		{
			float_3 = float_1 * float_2;
			if(1)
			{
				int_2 = int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		short short_4 = 1;
		int int_3 = 1;
		short_2 = short_4 + short_3;
		char_1 = char_1 * char_2;
		int_5 = int_3 + int_4;
	}
	float_2 = float_1 * float_4;
	char_3 = char_2 + char_1;
	char_3 = char_2 * char_1;
	double_4 = double_4 * double_6;
	double_2 = double_7 * double_6;
	long_3 = long_1 * long_2;
	char_4 = char_1 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			float_4 = float_4 * float_3;
		}
		short_2 = short_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_2 = int_5 + int_4;
		}
	}
	return int_2;
	int_1 = v_swi_moshmoon2(double_3,double_7);

	double_2 = v_ecldat_equ2000(double_8,double_5);

}
long v_sweplan( double parameter_1,int parameter_2,int parameter_3,float parameter_4,long parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,char parameter_10,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_1 + double_2;
	float_1 = float_1;
	short_3 = short_1 + short_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_5;
			}
		}
		if(1)
		{
			int_1 = int_3;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		short_4 = short_4;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		float float_3 = 1;
		int_1 = int_3;
		int_3 = int_2;
		float_2 = float_2 * float_2;
		float_2 = float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		long_3 = long_1 * long_2;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_5;
		unsigned_int_1 = unsigned_int_1;
		char_1 = char_1 + char_1;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		double_3 = double_4 + double_5;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_2 = int_4 + int_1;
			}
		}
		if(1)
		{
			long_4 = long_4;
			if(1)
			{
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_4 = short_3 + short_1;
			}
		}
	}
	if(1)
	{
		short short_5 = 1;
		double_2 = double_1 * double_3;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float_2 = float_2;
			}
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_2;
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
					short_1 = short_5 * short_2;
				}
				long_3 = long_1 * long_4;
				if(1)
				{
				}
			}
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short short_6 = 1;
				short_6 = short_5 * short_6;
			}
		}
	}
	if(1)
	{
		int_2 = int_4 * int_1;
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				int_4 = int_4 + int_1;
			}
		}
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			long_6 = long_1 + long_5;
			if(1)
			{
			}
			int_2 = int_3 * int_1;
			if(1)
			{
				unsigned_int_6 = unsigned_int_6;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				unsigned_int_8 = unsigned_int_6 + unsigned_int_2;
			}
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			double_6 = double_1 * double_3;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			int int_5 = 1;
			int_2 = int_5 * int_2;
		}
	}
	if(1)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			short_2 = short_3 + short_2;
		}
	}
	if(1)
	{
		double_6 = double_5 + double_2;
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				short_4 = short_4 * short_1;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_8 * unsigned_int_2;
			if(1)
			{
			}
			if(1)
			{
				for(int looper_11=0; looper_11<1;looper_11++)
				{
					char_1 = char_1 + char_1;
				}
				if(1)
				{
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						int int_6 = 1;
						int int_7 = 1;
						int_7 = int_3 + int_6;
					}
				}
			}
		}
	}
	if(1)
	{
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			float float_4 = 1;
			float_1 = float_4 + float_2;
		}
	}
	unsigned_int_6 = unsigned_int_8 + unsigned_int_1;
}
int v_swi_pleph( double parameter_1,int parameter_2,int parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_1;
	short_1 = short_1 + short_1;
	double_3 = double_1 * double_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_4 * double_3;
	}
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		double_3 = double_5 * double_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_1 + int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
			if(1)
			{
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				short_3 = short_2 * short_2;
			}
		}
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		float_1 = float_2 * float_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	if(1)
	{
		char_1 = v_state(double_1,float_3,int_3,double_1,double_4,double_6,char_1);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_4 = 1;
			int_2 = int_4 + int_5;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			long_1 = long_1;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				int_3 = int_5;
			}
		}
		if(1)
		{
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				int_1 = int_2 * int_3;
			}
		}
	}
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		double_3 = double_6 + double_1;
	}
	return int_2;
}
long v_swi_get_tid_acc( double parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_1 + double_3;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				int_3 = int_1 * int_2;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				if(1)
				{
					double_5 = double_3 * double_4;
				}
			}
		}
		if(1)
		{
			double_1 = double_4 * double_4;
			if(1)
			{
				double_6 = double_6 * double_7;
				float_1 = float_3 * float_4;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
			}
			if(1)
			{
				char_2 = char_1 + char_1;
			}
		}
	}
	short_1 = short_1 + short_1;
	short_1 = short_2 + short_2;
	double_1 = double_6 + double_3;
	long_2 = long_1 * long_1;
	float_3 = float_1 + float_4;
	double_6 = double_5 + double_7;
	double_4 = double_2;
	int_3 = int_3 + int_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	char_3 = char_1 * char_1;
	float_3 = float_3 + float_1;
	long_3 = v_swe_calc(double_7,int_5,double_7,double_4,char_2,-1 );

	unsigned_int_6 = unsigned_int_2 + unsigned_int_6;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
	int_2 = int_4 * int_1;
	long_3 = long_4;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	long_1 = long_5;
	double_6 = double_2 * double_7;
	float_4 = float_4 + float_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	double_1 = double_5 + double_4;
	char_1 = char_4 + char_4;
	return long_5;
}
char v_swi_set_tid_acc( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
			long long_3 = 1;
			double double_2 = 1;
			float float_2 = 1;
			int_1 = int_1;
			long_3 = long_2 * long_2;
			long_2 = v_swi_get_tid_acc(double_1,double_1,char_2,unsigned_int_1,double_1,char_1);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_2 + double_1;
			double_1 = double_1 + double_1;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			float float_3 = 1;
			unsigned_int_1 = unsigned_int_1;
			float_1 = float_3 + float_3;
		}
	}
	return char_2;
}
short v_swi_get_jpl_denum()
{
	short short_1 = 1;
	return short_1;
}
double v_interp( double parameter_1,double parameter_2,double parameter_3,char parameter_4,float parameter_5,char parameter_6,float parameter_7,double parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_6 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_1;
	long_1 = long_3 * long_3;
	double_4 = double_2 * double_3;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_2 * float_3;
	long_1 = long_3 * long_2;
	char_1 = char_3 + char_2;
	double_3 = double_1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double_4 = double_1 + double_4;
	}
	int_3 = int_3 + int_1;
	double_1 = double_5;
	short_1 = short_1 * short_1;
	if(1)
	{
		double double_7 = 1;
		double_4 = double_6 + double_7;
		float_2 = float_1 + float_3;
		double_2 = double_7 + double_5;
		unsigned_int_4 = unsigned_int_3;
		float_3 = float_1 + float_1;
		int_2 = int_4;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = int_1 + int_4;
		}
		float_2 = float_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_8 = double_8 * double_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float float_5 = 1;
			float_4 = float_5;
		}
	}
	if(1)
	{
	}
	double_2 = double_9 + double_3;
	int_1 = int_2;
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char_1 = char_2 * char_4;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long_3 = long_3 * long_3;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
	}
	double_2 = double_1 + double_4;
	char_2 = char_5 + char_4;
	if(1)
	{
		float_3 = float_3 * float_2;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int int_5 = 1;
			int int_6 = 1;
			int_4 = int_5 * int_6;
		}
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			double_3 = double_6 * double_8;
		}
		double_6 = double_8;
	}
	if(1)
	{
	}
	double_5 = double_5 + double_9;
	float_2 = float_4 * float_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			double double_10 = 1;
			double_10 = double_1 * double_6;
		}
	}
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		float_3 = float_1 + float_4;
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			double double_11 = 1;
			double_4 = double_11 + double_9;
		}
		char_4 = char_1 + char_5;
	}
	return double_1;
}
int v_reorder( char parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
		float_2 = float_1 * float_2;
	}
	return int_1;
}
long v_fsizer( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	int int_7 = 1;
	short short_3 = 1;
	char char_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	int_1 = int_1;
	int_1 = int_2 + int_3;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	int_4 = v_reorder(char_3,int_1,int_4);

	long_1 = long_1 * long_2;
	if(1)
	{
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		int_4 = int_2 + int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_3 * int_5;
			if(1)
			{
				float_1 = float_1 * float_1;
			}
		}
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		int_6 = int_2 * int_5;
	}
	unsigned_int_1 = v_if(char_1,int_1,double_1,int_1,short_1,float_2,double_3);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short_1 = short_2;
	}
	int_1 = int_2 * int_6;
	if(1)
	{
		char_3 = char_4 + char_3;
	}
	int_7 = int_1 * int_3;
	if(1)
	{
		float_1 = v_swi_fopen(int_2,char_4,char_3,char_2);

		short_3 = short_3 * short_3;
	}
	char_3 = char_2 + char_5;
	if(1)
	{
		short_4 = short_2;
	}
	unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
	if(1)
	{
		short_4 = short_1 + short_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_1 = float_2 * float_2;
	}
	int_5 = int_1 + int_4;
	long_3 = long_1 * long_1;
	long_4 = long_4 + long_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_8 = int_2 + int_2;
			short_1 = short_3 + short_1;
		}
	}
	if(1)
	{
		char_4 = char_2 + char_1;
	}
	if(1)
	{
		int int_9 = 1;
		int_9 = int_4;
	}
	unsigned_int_3 = unsigned_int_8 * unsigned_int_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		short short_5 = 1;
		int int_10 = 1;
		double double_4 = 1;
		float_5 = float_3 * float_4;
		float_1 = float_5;
		int_5 = int_7 * int_1;
		float_2 = float_6 * float_2;
		short_1 = short_5 * short_4;
		int_5 = int_10 * int_6;
		double_4 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_7;
		if(1)
		{
			char char_6 = 1;
			char_2 = char_6 + char_2;
		}
		if(1)
		{
			if(1)
			{
				int_2 = int_8 + int_6;
			}
		}
	}
	return long_3;
}
char v_state( double parameter_1,float parameter_2,int parameter_3,double parameter_4,double parameter_5,double parameter_6,char parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	float float_5 = 1;
	char char_6 = 1;
	int int_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_8 = 1;
	short short_6 = 1;
	char char_8 = 1;
	int int_9 = 1;
	float float_7 = 1;
	int int_10 = 1;
	long long_6 = 1;
	float float_8 = 1;
	float float_9 = 1;
	float_1 = float_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_3;
	double_2 = double_1 + double_1;
	long_1 = long_1 * long_1;
	double_1 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		float float_6 = 1;
		int_3 = int_2;
		double_2 = double_3 + double_2;
		if(1)
		{
		}
		int_1 = v_reorder(char_3,int_4,int_2);

		double_2 = double_2 + double_1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
		short_5 = short_3 * short_4;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
		if(1)
		{
			double_4 = double_4 * double_4;
		}
		float_2 = float_3 * float_4;
		if(1)
		{
			double_3 = double_2;
		}
		double_3 = double_4 * double_5;
		if(1)
		{
			unsigned_int_8 = unsigned_int_7 + unsigned_int_3;
		}
		double_2 = double_6 + double_3;
		if(1)
		{
			long long_2 = 1;
			long_3 = long_1 + long_2;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			int_5 = int_4 * int_3;
		}
		unsigned_int_2 = unsigned_int_6 + unsigned_int_8;
		if(1)
		{
			long_4 = long_3 + long_4;
		}
		int_1 = int_1 * int_6;
		if(1)
		{
			int_2 = int_3 + int_3;
		}
		char_5 = char_1 + char_4;
		double_3 = double_2;
		if(1)
		{
			unsigned_int_7 = unsigned_int_4 + unsigned_int_7;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_5 = long_5 * long_3;
		}
		float_6 = float_2 + float_5;
		float_1 = float_1;
		double_1 = double_1 + double_2;
		short_5 = short_2 * short_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_3 + double_6;
			if(1)
			{
				char char_7 = 1;
				char_7 = char_5 + char_6;
			}
			int_2 = int_4 + int_2;
		}
		unsigned_int_2 = v_if(char_3,int_1,double_2,int_7,short_3,float_2,double_3);

		double_3 = double_7 * double_8;
		int_4 = int_8 * int_2;
		int_8 = int_7 * int_8;
		if(1)
		{
			if(1)
			{
				short_6 = short_6 + short_2;
				if(1)
				{
					char_8 = char_6;
				}
			}
		}
		int_6 = int_5 + int_4;
		int_2 = int_1 * int_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		}
		float_3 = float_1 + float_5;
		double_2 = double_2 + double_5;
		if(1)
		{
			int_4 = int_4 * int_7;
		}
		if(1)
		{
			if(1)
			{
				int_7 = int_9;
			}
		}
	}
	if(1)
	{
	}
	short_4 = short_1 * short_3;
	double_7 = double_2;
	double_2 = v_interp(double_5,double_7,double_1,char_5,float_3,char_2,float_2,double_6);

	float_4 = float_5 + float_7;
	int_6 = int_10 + int_8;
	if(1)
	{
		if(1)
		{
			char_8 = char_2 + char_3;
		}
	}
	long_5 = v_fsizer(char_1);

	long_3 = long_4 * long_6;
	if(1)
	{
		int_9 = int_4 * int_10;
	}
	double_6 = double_7 * double_8;
	if(1)
	{
		char_8 = char_4 * char_3;
		if(1)
		{
			if(1)
			{
				short_1 = short_1;
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				if(1)
				{
					double_4 = double_7 * double_6;
				}
			}
			if(1)
			{
				int_9 = int_8 + int_3;
			}
		}
	}
	if(1)
	{
		float_9 = float_8 * float_3;
		short_4 = short_6 + short_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_7;
		double_2 = double_2 * double_3;
	}
	unsigned_int_8 = unsigned_int_3 + unsigned_int_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float_8 = float_3 + float_2;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			short_4 = short_3 * short_2;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					float float_10 = 1;
					float_10 = float_9 * float_5;
				}
				if(1)
				{
					short_1 = short_5 * short_6;
				}
			}
		}
	}
	if(1)
	{
		char_4 = char_6 + char_4;
	}
	if(1)
	{
		float_1 = float_2 * float_8;
	}
	return char_5;
}
long v_read_const_jpl( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_2 = 1;
		char_2 = char_1 + char_2;
		double_3 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_2 = short_1 * short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_3 = 1;
			long_1 = long_1 + long_2;
			long_2 = long_3;
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			}
			char_3 = v_state(double_4,float_2,int_1,double_4,double_4,double_1,char_1);

			long_1 = long_2;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
			char_2 = char_3;
			float_1 = float_3;
			float_3 = float_3 * float_1;
		}
		int_1 = int_2 * int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
		}
		double_3 = double_1 + double_2;
	}
	return long_2;
}
int v_swi_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_3 = 1;
			v_swi_close_jpl_file();

			double_3 = double_1 * double_2;
		}
	}
	float_2 = float_1 * float_1;
	float_4 = float_3 * float_1;
	float_2 = float_1 * float_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		int int_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_3 = float_3 * float_1;
		long_2 = v_read_const_jpl(double_2,char_1);

		long_3 = long_3 + long_2;
		int_2 = int_1 * int_1;
		int_1 = int_3 + int_3;
		short_1 = short_1 + short_2;
	}
	return int_2;
}
long v_open_jpl_file( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_5 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 + char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				long long_2 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short_2 = short_1 + short_1;
				}
				if(1)
				{
					short_3 = v_swi_get_jpl_denum();

					double_1 = double_1;
				}
				if(1)
				{
					float float_1 = 1;
					float_1 = float_1 * float_1;
				}
				if(1)
				{
					char_2 = v_swi_set_tid_acc(double_2,unsigned_int_3,char_1,char_3);

					int_2 = int_1 + int_2;
				}
				long_1 = long_1 + long_2;
			}
		}
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int_1 = v_swi_open_jpl_file(double_2,char_2,char_2,char_1);

		long_3 = long_4;
		double_1 = double_1 * double_1;
		long_1 = long_1 * long_4;
	}
	return long_5;
}
double v_jplplan( double parameter_1,int parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6,double parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	float float_5 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	char_2 = char_1 * char_1;
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_6 = 1;
		short_2 = short_3 * short_4;
		short_6 = short_5 * short_1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char_2 = char_1 + char_2;
		int_1 = int_2;
		short_2 = short_2 * short_5;
	}
	if(1)
	{
		int_4 = int_3 * int_2;
	}
	if(1)
	{
		double_3 = double_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		short short_7 = 1;
		short_1 = short_7 + short_1;
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_4;
			if(1)
			{
				unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
				char_1 = char_2 + char_3;
				int_3 = int_4;
			}
			if(1)
			{
				double_6 = double_4 + double_5;
				long_1 = v_open_jpl_file(double_6,char_2,char_2,char_1);

				int_4 = int_5 + int_3;
			}
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_3 * unsigned_int_6;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float float_4 = 1;
				float_4 = float_1 + float_4;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_8 = double_4 * double_7;
			if(1)
			{
				double_8 = double_1 * double_5;
				int_1 = v_swi_pleph(double_4,int_5,int_3,double_5,char_2);

				v_swi_close_jpl_file();

				float_5 = float_1 * float_5;
				long_1 = long_1;
			}
			if(1)
			{
				double_6 = double_6;
				unsigned_int_4 = unsigned_int_4;
			}
		}
		if(1)
		{
			int_4 = int_1 * int_4;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_1 = double_8 + double_6;
			}
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char_1 = char_2;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_6 = 1;
			int_6 = int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_5;
		}
		if(1)
		{
			float_5 = float_2;
			if(1)
			{
				char_1 = char_3;
				unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			}
			if(1)
			{
				double double_9 = 1;
				double_9 = double_9 + double_8;
				double_6 = double_5 * double_3;
			}
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char_2 = char_3;
		}
	}
	return double_4;
}
long v_nut_matrix( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	double_3 = double_4;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_1;
	double_4 = double_5;
	double_1 = double_5;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_2;
	short_2 = short_1 + short_1;
	double_3 = double_4 + double_2;
	float_1 = float_2;
	long_1 = long_3 + long_2;
	long_3 = long_1 * long_1;
	double_2 = double_2 * double_1;
	int_4 = int_2 * int_3;
	float_2 = float_1 * float_2;
	int_2 = int_5 * int_3;
	int_7 = int_6 + int_2;
	return long_3;
}
void v_bessel( double parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		char_3 = char_1 * char_2;
		int_2 = int_1 + int_1;
	}
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	int_3 = int_3 * int_3;
	long_3 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	double_2 = double_2 * double_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		long_4 = long_3 * long_3;
	}
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 * double_2;
		}
		double_4 = double_4 + double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_5 = 1;
		long_5 = long_4 * long_4;
	}
	int_1 = int_1 * int_3;
	short_2 = short_2;
	if(1)
	{
		double_4 = double_5 * double_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_6;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_6 = unsigned_int_7;
	}
	unsigned_int_2 = unsigned_int_8;
	char_1 = char_1 + char_2;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		char_3 = char_2 + char_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_1 = short_1 + short_3;
	}
	int_3 = int_2 + int_1;
	short_2 = short_1 + short_3;
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "OM") > 0)
	{
		double_2 = double_5 + double_1;
	}
}
char v_swe_radnorm( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	return char_3;
}
char v_swi_nutation_iau2000ab( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_2;
	int_1 = int_2 + int_2;
	long_2 = long_1 * long_2;
	char_1 = char_1 + char_1;
	int_4 = int_3 + int_3;
	float_1 = float_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		float_3 = float_2 * float_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_3;
	int_1 = int_3;
	long_4 = long_1 * long_3;
	int_2 = int_2;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 * char_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "tl") > 0)
	{
		short_1 = short_2 * short_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_2 = long_1 + long_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_1 + char_1;
		long_3 = long_5 * long_6;
		long_5 = long_6 * long_4;
		double_3 = double_1 * double_2;
		double_4 = double_3 + double_2;
	}
	char_3 = v_swe_radnorm(double_3);

	int_1 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_6 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_4 = double_3 + double_1;
		short_4 = short_2 * short_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
		float_4 = float_1 + float_3;
		double_5 = double_2 * double_3;
		double_5 = double_2 * double_2;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
		int_5 = int_1 + int_2;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
		int_2 = int_2 * int_6;
		unsigned_int_6 = unsigned_int_5;
		short_5 = short_1;
		unsigned_int_3 = unsigned_int_8 * unsigned_int_6;
		float_1 = float_1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_6 = 1;
			short_3 = short_5;
			short_3 = short_5 * short_5;
			int_2 = int_6 + int_2;
			short_1 = short_3;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
			short_1 = short_6;
			unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
		}
		double_6 = double_1 + double_5;
		int_8 = int_7 + int_5;
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_9;
		}
		int_6 = int_3;
		unsigned_int_6 = unsigned_int_3;
		float_4 = float_3;
		int_7 = int_4 * int_7;
	}
	float_1 = v_swe_degnorm(double_2);

	char_1 = char_4 + char_4;
	float_1 = float_1 + float_1;
	return char_5;
}
long v_swi_nutation_iau1980( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	char char_3 = 1;
	double double_8 = 1;
	char char_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	float float_4 = 1;
	long long_4 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_2;
	short_2 = short_2 * short_1;
	int_3 = int_1 * int_1;
	float_2 = float_1 * float_2;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	}
	int_1 = int_1 * int_2;
	short_1 = short_3 * short_3;
	double_2 = double_3 * double_1;
	int_4 = int_2 + int_1;
	short_4 = short_3 + short_3;
	double_3 = double_3;
	int_2 = int_3;
	double_3 = double_1 + double_3;
	int_2 = int_2 + int_3;
	double_6 = double_4 * double_5;
	short_2 = short_3;
	char_2 = char_1 * char_2;
	int_2 = int_1 + int_1;
	long_3 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	double_6 = double_3 * double_6;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_7;
	char_3 = char_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_5 = 1;
		int int_5 = 1;
		double_6 = double_4 * double_8;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		char_1 = char_4;
		double_8 = double_1 * double_6;
		int_1 = int_3;
		double_7 = double_4 * double_5;
		double_4 = double_2 * double_7;
		char_5 = char_3 + char_5;
		int_5 = int_1 + int_4;
		char_6 = char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_8 = 1;
			float float_3 = 1;
			char_2 = char_7 * char_5;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
			char_8 = char_6 + char_7;
			double_8 = double_6 * double_4;
			float_2 = float_3 + float_1;
		}
	}
	double_5 = double_1 * double_2;
	char_6 = char_6 * char_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_5 = 1;
		float float_6 = 1;
		double double_9 = 1;
		int int_7 = 1;
		if(1)
		{
			char_4 = char_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		float_2 = float_1 + float_2;
		int_4 = int_4 * int_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char_6 = char_2 + char_1;
			if(1)
			{
				short_5 = short_4 * short_3;
			}
			if(1)
			{
				int int_6 = 1;
				int_6 = int_2 * int_3;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
				}
				double_3 = double_5 * double_2;
				if(1)
				{
					int_1 = int_6;
				}
				float_5 = float_4 + float_2;
				if(1)
				{
					short_5 = short_5 * short_5;
					float_6 = float_4 + float_6;
					unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
				}
				if(1)
				{
					double double_10 = 1;
					double_10 = double_9 + double_9;
					long_4 = long_2 * long_4;
					char_2 = char_3 + char_3;
				}
			}
		}
		int_7 = int_4;
		if(1)
		{
			long_3 = long_3;
		}
		float_1 = float_2;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			short short_6 = 1;
			unsigned_int_3 = unsigned_int_8;
			short_6 = short_1 * short_1;
		}
		if(1)
		{
			double double_11 = 1;
			float_4 = v_swe_degnorm(double_7);

			double_8 = double_9 + double_11;
			char_1 = char_6 * char_7;
		}
		if(1)
		{
			float_5 = float_5 + float_6;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		}
	}
	short_5 = short_5;
	short_4 = short_4;
	return long_4;
}
int v_swi_nutation( double parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	char_1 = v_swi_nutation_iau2000ab(double_1,double_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_bessel(double_1,int_1,double_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_3 = int_2 * int_1;
	double_4 = double_2 * double_3;
	long_1 = long_1 * long_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_3 + int_4;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 + short_1;
	}
	if(1)
	{
		double_5 = double_4 * double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char controller_7[2];
		fgets(controller_7 ,2 ,stdin);
		if( strcmp( controller_7, "h") < 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
			unsigned_int_3 = unsigned_int_3;
		}
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_1 = char_1 + char_1;
		double_2 = double_2 * double_5;
		if(1)
		{
			int int_6 = 1;
			int_6 = int_5 + int_3;
		}
		char_1 = char_1 * char_1;
		long_4 = long_2 + long_3;
		char_2 = char_3;
		long_1 = v_swi_nutation_iau1980(double_3,double_6);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1;
		}
	}
	return int_5;
}
void v_swi_check_nutation( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	long_1 = v_nut_matrix(float_1,char_1);

	float_1 = float_2;
	int_1 = int_1 + int_2;
	int_2 = int_2 + int_2;
	double_3 = double_4 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_5 = double_5;
		int_1 = int_3 * int_3;
		double_2 = double_2 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 * short_1;
		if(1)
		{
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short_1 = short_3 * short_2;
			double_2 = double_2 * double_1;
			short_2 = short_1 * short_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			int_3 = v_swi_nutation(double_5,long_2,double_4);

			float_3 = float_2 * float_1;
			unsigned_int_3 = unsigned_int_4;
		}
	}
}
void v_swi_ldp_peps( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char_1 = char_1 + char_1;
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_2;
	char_3 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1;
		int_3 = int_3 + int_1;
		int_3 = int_2 + int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_2;
		long_1 = long_2;
	}
	float_1 = float_3 * float_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_3 = 1;
		double_2 = double_3;
		float_3 = float_1;
		long_1 = long_1 + long_3;
	}
	long_2 = long_4 * long_5;
	double_3 = double_2 * double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2;
	}
}
double v_swi_epsiln( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double double_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	v_swi_ldp_peps(double_2,double_3,double_2);

	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double_3 = double_4 + double_5;
	}
	if(1)
	{
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double_5 = double_1;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		int_1 = int_2 * int_4;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		short_4 = short_3 + short_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int_4 = int_3 + int_4;
		double_4 = double_1 * double_5;
		short_3 = short_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_1 * int_5;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
				float_1 = float_1 + float_1;
			}
			if(1)
			{
				int_1 = int_3 * int_3;
				float_2 = float_1;
			}
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2 * char_2;
				double_6 = double_4;
				float_1 = float_1 + float_2;
				int_2 = int_4;
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		}
	}
	return double_6;
}
char v_calc_epsilon( double parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_swi_epsiln(double_1,short_1);

	float_3 = float_1 + float_2;
	short_2 = short_1 + short_1;
	double_1 = double_2;
	return char_1;
}
void v_swi_check_ecliptic( double parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char_1 = v_calc_epsilon(double_1,short_1,long_1);

		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long_2 = long_2 + long_1;
	}
}
int v_for( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1;
	double_3 = double_1 * double_2;
	int_1 = int_1;
	double_6 = double_4 * double_5;
	if(1)
	{
	}
	double_4 = double_2 * double_4;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	if(1)
	{
	}
	int_2 = int_3;
	return int_1;
}
void v_swi_force_app_pos_etc()
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = v_for(float_1);

	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1 + double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_1 = short_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_2 = double_3 * double_1;
		short_3 = short_2 + short_1;
	}
}
long v_swe_set_sid_mode( float parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	v_swi_force_app_pos_etc();

	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		int_1 = int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_3 = int_2 * int_1;
		int_4 = int_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	char_2 = v_swi_init_swed_if_start();

	short_1 = short_2;
	if(1)
	{
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float_2 = float_1 + float_1;
		double_2 = double_1 * double_2;
		double_4 = double_1 * double_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		float float_3 = 1;
		char_1 = char_3 + char_2;
		double_5 = double_5 * double_5;
		float_3 = float_2 + float_2;
	}
	double_5 = double_1 * double_6;
	return long_1;
}
short v_plaus_iflag( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 + int_1;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		double_4 = double_3 + double_1;
	}
	if(1)
	{
		double_5 = double_5 * double_1;
	}
	if(1)
	{
		double_1 = double_3 + double_6;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		int_6 = int_1 + int_1;
	}
	if(1)
	{
		double_5 = double_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		int_6 = int_4 + int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	long_4 = long_2 + long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_8 = 1;
		int_3 = int_6 * int_8;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
				long long_5 = 1;
				int int_9 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float_3 = float_2 * float_1;
				long_1 = long_4 + long_5;
				int_4 = int_9 + int_1;
				int_9 = int_7 + int_2;
				double_6 = double_2 + double_4;
				short_1 = short_2;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
			}
			double_3 = double_2;
			char_2 = char_1 + char_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4 + float_3;
	}
	if(1)
	{
		double double_7 = 1;
		double double_8 = 1;
		double_7 = double_8;
	}
	return short_2;
}
short v_swecalc( double parameter_1,int parameter_2,float parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = v_app_pos_etc_plan(int_1,double_1,char_1,uni_para);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	return short_2;
}
long v_swe_calc( double parameter_1,int parameter_2,double parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_8 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_14 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	double_1 = double_2;
	int_4 = int_1 * int_3;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	int_2 = int_4 + int_3;
	short_2 = short_3;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			double_3 = double_2 + double_1;
			short_2 = short_2 + short_3;
			if(1)
			{
				short_2 = short_1 * short_4;
			}
			int_1 = int_2 + int_5;
			double_2 = double_2 * double_1;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	short_4 = short_1 * short_3;
	float_4 = float_2 * float_3;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	double_2 = double_3 * double_4;
	if(1)
	{
		double_1 = double_4 * double_1;
	}
	if(1)
	{
		double_3 = double_4;
	}
	if(1)
	{
		double_5 = double_5;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		int_2 = int_4 + int_4;
		if(1)
		{
			if(1)
			{
				double_2 = double_4;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			}
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					int_1 = int_3 * int_3;
				}
				short_3 = short_4 * short_5;
			}
			long_2 = long_2 * long_2;
		}
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short_2 = short_3;
	}
	if(1)
	{
		short short_6 = 1;
		short_6 = short_1 * short_5;
	}
	if(1)
	{
		long_3 = long_2 * long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		int_5 = int_5 + int_6;
	}
	if(1)
	{
		if(1)
		{
			int_6 = int_6 + int_1;
		}
	}
	if(1)
	{
		float_4 = float_5 + float_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			short_5 = short_1 * short_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_7 = 1;
		double_3 = double_5;
		float_1 = float_5 + float_4;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		unsigned_int_9 = unsigned_int_5 + unsigned_int_8;
		unsigned_int_11 = unsigned_int_9 + unsigned_int_10;
		float_2 = float_1;
		int_5 = int_1 + int_4;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_10;
		if(1)
		{
			int_2 = int_5 * int_4;
		}
		if(1)
		{
			int_5 = int_4 * int_4;
		}
		if(1)
		{
			int_5 = int_7 + int_4;
		}
		int_3 = int_4 + int_2;
		int_7 = int_8 * int_2;
	}
	if(1)
	{
		long_3 = long_4 * long_1;
	}
	if(1)
	{
		int_3 = int_4 * int_1;
	}
	if(1)
	{
		int_1 = int_5;
	}
	if(1)
	{
		long_4 = long_2 * long_4;
	}
	if(1)
	{
		long_4 = long_1 * long_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_6 = 1;
		double_1 = double_6 + double_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_2 = unsigned_int_12;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_5 = double_2;
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
					unsigned int unsigned_int_13 = 1;
					unsigned_int_8 = unsigned_int_1 + unsigned_int_13;
				}
			}
			if(1)
			{
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					int_2 = int_5 * int_8;
				}
				if(1)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						float_2 = float_2 * float_2;
					}
				}
			}
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_9 = unsigned_int_11 + unsigned_int_6;
		}
	}
	unsigned_int_9 = unsigned_int_12;
	double_1 = double_5;
	if(1)
	{
		int_2 = int_5 * int_5;
	}
	unsigned_int_4 = unsigned_int_14;
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
	}
	int_4 = int_3 + int_8;
	double_3 = double_2 + double_1;
}
void v_swi_close_jpl_file()
{
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "X") > 0)
		{
			double_1 = double_1 + double_3;
		}
		short_2 = short_1 * short_2;
		double_3 = double_3 * double_1;
	}
}
char v_swi_close_keep_topo_etc()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		int_3 = int_2 + int_1;
	}
	long_1 = v_swe_set_tid_acc(double_1);

	float_1 = float_1 + float_2;
	float_3 = float_1 + float_2;
	short_3 = v_memset(double_1,double_2,unsigned_int_1);

	long_1 = v_free_planets();

	short_1 = short_2 * short_1;
	int_2 = int_2 + int_1;
	float_4 = float_1;
	float_1 = float_4 + float_3;
	char_2 = char_1 * char_2;
	char_3 = char_1;
	unsigned_int_2 = unsigned_int_1;
	float_3 = float_2 + float_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		double_1 = double_1 * double_1;
	}
	v_swi_close_jpl_file();

	float_3 = float_1 + float_4;
	float_2 = float_1;
	char_5 = char_2 * char_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	return char_3;
}
char v_swe_set_ephe_path( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_1;
	long_1 = v_swe_calc(double_1,int_1,double_1,double_1,char_1,-1 );

	int_3 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_1 + double_2;
	if(1)
	{
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		char_2 = char_3 * char_4;
	}
	if(1)
	{
		char_1 = v_swi_init_swed_if_start();

		char_3 = char_4 + char_4;
	}
	if(1)
	{
		char_3 = char_2 * char_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3 + double_4;
		}
	}
	char_4 = char_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	}
	int_5 = int_1 * int_4;
	long_1 = long_1 * long_1;
	double_5 = double_2 * double_4;
	short_1 = short_1 + short_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_2;
	}
	float_3 = float_3;
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int_2 = int_3 + int_5;
			if(1)
			{
				long long_2 = 1;
				char_2 = v_swi_set_tid_acc(double_2,unsigned_int_5,char_4,char_5);

				long_2 = long_1 * long_1;
			}
			if(1)
			{
				int_3 = int_5 * int_3;
			}
			long_3 = long_1 + long_3;
			char_1 = v_swi_close_keep_topo_etc();

			double_2 = double_1 + double_5;
			double_5 = double_4 * double_2;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
		}
		if(1)
		{
			long long_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float_3 = float_2 + float_3;
			if(1)
			{
				float_3 = float_1 * float_3;
			}
			long_1 = long_4;
			double_1 = double_5;
			int_1 = int_4 + int_4;
			float_4 = float_4 + float_5;
		}
	}
	return char_6;
}
int v_make_ephemeris_path( float parameter_1,char parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char_1 = char_1 * char_2;
	float_1 = float_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	if(1)
	{
		double_3 = double_3;
		if(1)
		{
			float_1 = float_1;
			long_1 = long_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_1 = 1;
		char char_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long_4 = long_1 * long_3;
		long_3 = long_5 * long_2;
		int_1 = int_1 * int_1;
		char_2 = char_2 + char_3;
		char_3 = char_1 + char_1;
		double_3 = double_3 * double_1;
		int_2 = int_1 + int_1;
		double_3 = double_4 + double_5;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_2 + int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_4 * double_2;
		}
		if(1)
		{
			int_1 = int_1 * int_3;
		}
		double_7 = double_6 * double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_1 * int_3;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					float_1 = float_1 * float_1;
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_1 + short_1;
		}
	}
	return int_4;
}
double v_swi_edcheb( double parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 + int_2;
	char_1 = char_1 + char_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 * float_1;
	char_5 = char_3 + char_4;
	float_3 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		float_4 = float_4 * float_1;
		int_2 = int_3;
		float_3 = float_4 * float_4;
		int_3 = int_3;
		double_3 = double_4;
		int_2 = int_4 + int_3;
		unsigned_int_3 = unsigned_int_3;
	}
	return double_5;
}
double v_swi_echeb( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	short_1 = short_3 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		float_3 = float_1 + float_2;
		double_2 = double_1 * double_1;
		int_1 = int_1 + int_1;
	}
	return double_3;
}
unsigned int v_if( char parameter_1,int parameter_2,double parameter_3,int parameter_4,short parameter_5,float parameter_6,double parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_2;
	char_4 = char_1 + char_3;
	return unsigned_int_1;
}
char v_rot_back( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	int int_6 = 1;
	float float_7 = 1;
	double double_8 = 1;
	float float_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_7 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	char_2 = char_1 * char_2;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_3;
	int_4 = int_2 * int_2;
	int_1 = int_1 * int_1;
	char_1 = char_2 + char_1;
	double_2 = double_1 * double_2;
	long_5 = long_1 * long_4;
	long_3 = long_1 + long_2;
	int_4 = int_4;
	int_4 = int_3 + int_5;
	double_1 = double_2 * double_2;
	short_2 = short_1 * short_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		double_1 = double_2 + double_1;
		short_1 = short_2 + short_2;
		long_3 = long_4 * long_5;
		double_3 = double_1 + double_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "q_") < 0)
	{
		unsigned_int_3 = unsigned_int_6;
		float_1 = float_1 + float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_1 * float_2;
		double_3 = double_4 * double_4;
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		double double_5 = 1;
		float float_4 = 1;
		long long_6 = 1;
		double_6 = double_5 + double_3;
		float_3 = float_4;
		float_3 = float_5;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		long_2 = long_4 + long_6;
		int_5 = int_4 * int_3;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_7 = 1;
			double_7 = double_4 * double_7;
			double_2 = double_1 + double_1;
		}
	}
	short_1 = short_1 + short_2;
	float_6 = float_2 + float_5;
	double_1 = double_6;
	unsigned_int_7 = v_if(char_2,int_6,double_1,int_2,short_2,float_7,double_2);

	double_4 = double_8 + double_4;
	int_3 = int_6 + int_4;
	float_6 = float_8 * float_3;
	float_8 = float_6;
	float_6 = float_5 + float_8;
	char_4 = char_3 + char_4;
	long_2 = long_7;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_7 = 1;
		char char_5 = 1;
		int_7 = int_5 * int_7;
		char_5 = char_2;
		int_1 = int_2 + int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
		}
		short_2 = short_2 + short_1;
		float_3 = float_3;
		unsigned_int_3 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
			int_6 = int_3 * int_7;
			long_5 = long_2 + long_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_6 = 1;
		char_6 = char_1 * char_2;
		int_4 = int_3 * int_4;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	return char_4;
}
long v_get_new_segment( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	char_1 = char_1 * char_1;
	float_1 = float_1 + float_1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_memset(double_1,double_1,unsigned_int_2);

	char_2 = char_1 + char_1;
	double_2 = double_2;
	long_2 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	char_2 = char_3;
	int_1 = int_1;
	int_2 = int_3;
	float_1 = float_1 * float_1;
	short_1 = short_4 + short_5;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_3 = short_5 * short_3;
	long_1 = v_free_planets();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_1 = v_do_fread(int_4,int_4,int_1,double_2,unsigned_int_3,int_4,int_5,int_1,char_1);

	double_1 = double_2 + double_2;
	int_1 = int_2 + int_5;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1;
	}
	int_4 = int_5 + int_1;
	if(1)
	{
		double_3 = double_2;
	}
	int_4 = int_1 + int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		float float_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_4 = 1;
		int_4 = int_3 + int_2;
		double_4 = double_1 * double_2;
		if(1)
		{
			int_5 = int_2;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float float_5 = 1;
			long_1 = long_4 + long_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			if(1)
			{
				float_1 = float_2 * float_1;
			}
			double_4 = double_5 * double_1;
			float_4 = float_3 + float_2;
			double_5 = double_5 * double_5;
			long_7 = long_5 * long_6;
			float_2 = float_3 * float_5;
			unsigned_int_5 = unsigned_int_6;
			double_4 = double_1 + double_2;
		}
		if(1)
		{
			int int_6 = 1;
			double_3 = double_5 * double_3;
			int_3 = int_5;
			double_2 = double_6 * double_1;
			int_3 = int_4 + int_6;
			short_5 = short_2 * short_3;
			long_1 = long_5;
		}
		if(1)
		{
			short short_6 = 1;
			if(1)
			{
				int_2 = int_5 * int_2;
				if(1)
				{
					char_3 = char_4 * char_1;
				}
			}
			long_4 = long_4 + long_1;
			short_6 = short_6 + short_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_7 = 1;
			if(1)
			{
				unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
			}
			if(1)
			{
				int int_7 = 1;
				short_4 = short_3;
				int_4 = int_7 * int_4;
				char_3 = char_1;
				if(1)
				{
					int_2 = int_5;
				}
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						float_4 = float_1 * float_1;
					}
					if(1)
					{
						unsigned_int_4 = unsigned_int_5 * unsigned_int_7;
					}
				}
			}
			if(1)
			{
				short short_7 = 1;
				double double_7 = 1;
				short_1 = short_7 * short_1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
				double_7 = double_2 + double_2;
				if(1)
				{
					unsigned int unsigned_int_8 = 1;
					unsigned_int_8 = unsigned_int_4;
				}
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						if(1)
						{
							double double_8 = 1;
							double_2 = double_5 * double_8;
						}
						if(1)
						{
							short_3 = short_3;
						}
					}
				}
			}
			if(1)
			{
				char_2 = char_4;
				unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
				long_4 = long_5 * long_1;
				if(1)
				{
					long_6 = long_7 * long_4;
				}
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						if(1)
						{
							double double_9 = 1;
							double_1 = double_9 + double_9;
						}
						if(1)
						{
							char char_5 = 1;
							char_3 = char_2 * char_5;
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
			int_3 = int_3 * int_1;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				long_6 = long_7 * long_7;
			}
		}
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_9 * unsigned_int_1;
	double_6 = double_2 * double_4;
	return long_4;
}
long v_free_planets()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			char_1 = char_1;
		}
		float_2 = float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double_2 = double_2 + double_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short_1 = v_memset(double_3,double_1,unsigned_int_1);

			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			char_1 = char_1;
		}
	}
	return long_1;
}
long v_init_crc32()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_2 = int_2 + int_3;
		}
		int_3 = int_1 * int_4;
	}
	return long_2;
}
void v_swi_crc32( char parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char * vul_var;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_160[2];
	fgets(controller4vul_160 ,2 ,stdin);
	if( strcmp( controller4vul_160, "O") > 0)
	{
		float float_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 997)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		float_1 = float_2;
	}
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
}
long v_do_fread(int parameter_2,int parameter_3,int parameter_4,double parameter_5,unsigned int parameter_6,int parameter_7,int parameter_8,int parameter_9,char parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_3 = int_1 * int_1;
				if(1)
				{
					float_2 = float_2 * float_2;
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
				unsigned_int_3 = unsigned_int_2;
				if(1)
				{
					double double_3 = 1;
					double_1 = double_1 * double_3;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			float_2 = float_3;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					short_1 = v_memset(double_4,double_1,unsigned_int_4);

					long_3 = long_2 * long_3;
				}
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					char_2 = char_1 * char_1;
				}
				if(1)
				{
					if(1)
					{
						int int_4 = 1;
						int_3 = int_3 * int_4;
					}
				}
				float_1 = float_2 + float_1;
			}
		}
	}
	return long_3;
}
long v_strncpy( char parameter_1,short parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1;
	return long_2;
}
void v_read_const( int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	char controller4vul_159[2];
	fgets(controller4vul_159 ,2 ,stdin);
	if( strcmp( controller4vul_159, "U") < 0)
	{
		v_swi_crc32(char_1,int_1,uni_para);

	}
	if(1)
	{
	}
	if(1)
	{
	}
}
float v_swe_revjul( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		int_1 = int_1;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		long_1 = long_1 * long_1;
	}
	short_4 = short_3 * short_2;
	float_3 = float_3 * float_2;
	short_1 = short_1 + short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_2;
	}
	int_4 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_2 * int_1;
	return float_4;
}
void v_swi_gen_filename( double parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float_1 = v_swe_revjul(double_1,int_1,int_2,int_3,int_4,double_2);

}
float v_sweph( double parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_3 = 1;
	long long_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_7 = 1;
	int int_9 = 1;
	float float_4 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 * int_2;
	long_1 = long_1 * long_1;
	int_3 = int_2 + int_3;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2;
	int_4 = int_3 + int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_1 * short_2;
	if(1)
	{
		int_5 = int_4;
	}
	int_5 = int_5 + int_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int_6 = int_4;
	}
	long_2 = long_1 * long_2;
	int_3 = int_2;
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_1 = 1;
				char_3 = char_1 + char_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3;
			}
			long_2 = long_3 + long_4;
			if(1)
			{
				float float_1 = 1;
				float_1 = float_1 + float_1;
			}
			float_2 = float_2 + float_3;
		}
	}
	char controller4vul_155[3];
	fgets(controller4vul_155 ,3 ,stdin);
	if( strcmp( controller4vul_155, "UR") > 0)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
			long_5 = long_5;
			char_5 = char_3 + char_4;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_4;
		}
		unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
		int_2 = int_2 + int_5;
		char controller4vul_156[3];
		fgets(controller4vul_156 ,3 ,stdin);
		if( strcmp( controller4vul_156, "UK") > 0)
		{
			char controller4vul_157[2];
			fgets(controller4vul_157 ,2 ,stdin);
			if( strcmp( controller4vul_157, "r") > 0)
			{
				int_3 = int_7 * int_2;
				unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
				char controller4vul_158[3];
				fgets(controller4vul_158 ,3 ,stdin);
				if( strcmp( controller4vul_158, "d1") < 0)
				{
					v_read_const(int_8,char_2,uni_para);

					char_5 = char_2 * char_3;
					short_3 = short_2 * short_3;
				}
				long_5 = long_4 * long_6;
				double_3 = double_1 * double_2;
				if(1)
				{
					char_2 = char_2 * char_2;
					unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
				}
			}
		}
		if(1)
		{
			int_6 = int_4 + int_6;
		}
		double_4 = double_3 * double_2;
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
				long_7 = long_5 * long_1;
			}
			if(1)
			{
				int_1 = int_9;
			}
			if(1)
			{
				float_2 = float_2;
			}
		}
	}
	if(1)
	{
		double_2 = double_3;
		if(1)
		{
		}
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_2 + unsigned_int_2;
		}
	}
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_5 * char_5;
	float_4 = float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_1 = long_7 + long_3;
		if(1)
		{
			char_4 = char_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4;
		}
	}
	if(1)
	{
		int_8 = int_4 + int_9;
		int_7 = int_5 + int_7;
		long_5 = long_7 * long_3;
		if(1)
		{
		}
		double_4 = double_2 + double_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short short_4 = 1;
				short_3 = short_1 + short_4;
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
					char char_6 = 1;
					char_2 = char_2 * char_6;
				}
				if(1)
				{
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						long_1 = long_1 + long_6;
					}
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
			double_1 = double_4;
			if(1)
			{
				long long_8 = 1;
				long long_9 = 1;
				long_9 = long_8 * long_4;
			}
			if(1)
			{
				long_7 = long_3 + long_6;
			}
		}
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				float float_5 = 1;
				float float_6 = 1;
				float_6 = float_3 + float_5;
			}
		}
	}
	return float_4;
}
long v_swi_right_trim( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	float_2 = float_1 + float_1;
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
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_3 + double_4;
	}
	return long_1;
}
float v_swe_degnorm( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float_1 = float_1 + float_2;
	short_1 = short_2;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return float_4;
}
float v_check_t_terms( double parameter_1,char parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_2;
	int_3 = int_1 * int_2;
	return float_1;
}
char v_swi_strcpy( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	float_3 = float_1 + float_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_2;
	return char_1;
}
int v_swi_cutstr( char parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_5 = 1;
	int int_4 = 1;
	double double_9 = 1;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	double_5 = double_4 * double_1;
	if(1)
	{
		long long_2 = 1;
		long_3 = long_1 + long_2;
		int_1 = int_1;
		if(1)
		{
			if(1)
			{
			}
			int_3 = int_2 + int_1;
			if(1)
			{
				double_1 = double_4 * double_6;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double double_7 = 1;
			double_5 = double_5;
			if(1)
			{
				short_1 = short_1;
			}
			if(1)
			{
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					unsigned int unsigned_int_3 = 1;
					double_7 = double_6 + double_6;
					unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
				}
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_1 = char_1 * char_2;
				double_3 = double_7;
			}
			if(1)
			{
				float_1 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		long long_4 = 1;
		int_2 = int_2 * int_3;
		double_3 = double_5 + double_5;
		if(1)
		{
			double double_8 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_5 = double_6 + double_6;
			int_2 = int_3 + int_3;
			double_8 = double_1;
			float_3 = float_2 * float_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				long_4 = long_4;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					long_5 = long_5 * long_4;
				}
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_2 + short_1;
				int_4 = int_3;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_9 = double_1 * double_9;
				}
			}
			float_2 = float_1 + float_2;
			char_2 = char_1;
		}
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		long_4 = long_1 + long_3;
	}
	if(1)
	{
		long long_6 = 1;
		int int_5 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_4 = 1;
			float float_4 = 1;
			if(1)
			{
				int_2 = int_4 * int_3;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			float_4 = float_4 + float_4;
			int_2 = int_4 + int_3;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			double_4 = double_9 + double_6;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		}
		long_1 = long_5 * long_6;
		int_2 = int_5 * int_2;
	}
	return int_3;
}
float v_swi_fopen( int parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	int_3 = int_1 + int_4;
	int_2 = int_3;
	long_1 = long_1 + long_1;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	short_1 = short_1 + short_1;
	short_3 = short_2 + short_3;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_6 = 1;
		long long_4 = 1;
		int_5 = v_swi_cutstr(char_1,char_2,char_2,int_3);

		double_3 = double_2 * double_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3 * char_3;
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1 + double_1;
			if(1)
			{
				double_1 = double_1;
			}
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_3 + short_4;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
			}
		}
		int_4 = int_6 * int_5;
		long_2 = long_4;
		if(1)
		{
		}
	}
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_2 + float_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	return float_1;
}
unsigned int v_read_elements_file( int parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,double parameter_7,double parameter_8,double parameter_9,double parameter_10,char parameter_11,char parameter_12,char parameter_13)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_7 = 1;
	double double_5 = 1;
	int int_8 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	float_1 = v_swe_degnorm(double_1);

	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	short_2 = short_4 * short_5;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	int_2 = int_2 + int_2;
	char_2 = char_1 + char_2;
	float_2 = v_swi_fopen(int_4,char_2,char_3,char_1);

	int_1 = v_swi_cutstr(char_2,char_2,char_4,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	float_2 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = v_swi_right_trim(char_4);

		double_2 = double_2 * double_2;
	}
	double_3 = double_4;
	int_5 = int_4 * int_4;
	short_6 = short_4 + short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		long_2 = long_2 * long_2;
	}
	char_3 = v_swi_strcpy(char_4,char_3);

	unsigned_int_5 = unsigned_int_6;
	if(1)
	{
		long long_3 = 1;
		char char_5 = 1;
		int int_6 = 1;
		long long_4 = 1;
		double_1 = double_4 + double_3;
		long_1 = long_3 * long_1;
		char_3 = char_5 * char_5;
		float_3 = float_2 * float_2;
		float_2 = float_3;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		char_4 = char_1;
		int_4 = int_6 + int_7;
		float_3 = v_check_t_terms(double_2,char_4,double_5);

		double_5 = double_2 + double_3;
		int_8 = int_5 + int_6;
		long_4 = long_1 * long_4;
	}
	int_7 = int_2 * int_8;
	return unsigned_int_3;
}
long v_swi_get_fict_name( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return long_1;
	unsigned_int_2 = v_read_elements_file(int_1,double_1,double_2,double_3,double_3,double_4,double_2,double_4,double_4,double_1,char_1,char_2,char_1);

}
long v_swe_set_tid_acc( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	if(1)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_1 = long_1;
		char_2 = char_1 * char_2;
	}
	double_1 = double_1 * double_2;
	double_4 = double_2 + double_3;
	return long_2;
}
short v_memset( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
	}
	return short_1;
}
char v_swi_init_swed_if_start()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = v_swe_set_tid_acc(double_1);

		double_2 = double_1;
		short_3 = short_1 * short_2;
		int_1 = int_1;
		short_1 = v_memset(double_2,double_2,unsigned_int_1);

		float_1 = float_1 + float_1;
		float_2 = float_2 * float_2;
	}
	return char_1;
}
double v_swe_get_planet_name( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	char char_6 = 1;
	long_1 = v_swi_get_fict_name(long_2,char_1);

	float_1 = float_2;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 + int_1;
	}
	float_2 = v_swi_fopen(int_3,char_2,char_3,char_4);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_sweph(double_1,int_2,int_2,int_4,double_2,int_3,double_1,char_5,-1 );

	char_4 = char_1 * char_2;
	float_2 = float_3 * float_2;
	long_1 = v_swi_right_trim(char_4);

	long_1 = long_1 * long_2;
	if(1)
	{
		char_6 = v_swi_init_swed_if_start();

		int_4 = int_2 * int_2;
	}
	return double_1;
}
unsigned int v_letter_to_ipl( int parameter_1)
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
int main()
{
	int uni_para =997;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	char controller4vul_134[3];
	fgets(controller4vul_134 ,3 ,stdin);
	if( strcmp( controller4vul_134, "4O") > 0)
	{
		float float_1 = 1;
		float_1 = float_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		char controller4vul_135[3];
		fgets(controller4vul_135 ,3 ,stdin);
		if( strcmp( controller4vul_135, "+=") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			unsigned_int_3 = unsigned_int_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char controller4vul_136[2];
				fgets(controller4vul_136 ,2 ,stdin);
				if( strcmp( controller4vul_136, "E") > 0)
				{
					double double_3 = 1;
					char_1 = v_do_special_event(double_1,long_1,char_1,char_1,float_2,double_1,double_1,double_2,char_2,uni_para);

					double_3 = double_2 + double_2;
				}
			}
			int_2 = int_1 * int_1;
		}
	}
	float_5 = float_3 * float_4;
	return int_2;
}

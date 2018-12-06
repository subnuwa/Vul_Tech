#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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

float dump_table( unsigned int parameter_1,int parameter_2);
short dump_x( long parameter_1,char parameter_2,char parameter_3,short parameter_4,long parameter_5);
float dump_llx( unsigned int parameter_1,double parameter_2,long parameter_3,double parameter_4,double parameter_5);
double dump_indent( char parameter_1,int parameter_2);
long dump_header( unsigned int parameter_1,double parameter_2);
long dump_bmfs( int parameter_1,long parameter_2);
char cmd_dump( unsigned int parameter_1,int parameter_2,long parameter_3);
void bmfs_get_status( int parameter_1,double parameter_2);
void bmfs_status_init( int parameter_1);
char cmd_status( float parameter_1,int parameter_2,int parameter_3);
int bmfs_delete_dir( short parameter_1,short parameter_2);
int bmfs_delete_dir_recursively( char parameter_1,double parameter_2);
float cmd_rmdir( long parameter_1,int parameter_2,double parameter_3);
int delete_table_entry( double parameter_1,short parameter_2);
void delete_entry( unsigned int parameter_1,short parameter_2);
int bmfs_delete_file( short parameter_1,double parameter_2);
unsigned int cmd_rm( char parameter_1,int parameter_2,char parameter_3);
double cmd_touch( char parameter_1,int parameter_2,char parameter_3);
void bmfs_entry_set_deleted( char parameter_1);
void bmfs_entry_copy( long parameter_1,long parameter_2);
int bmfs_rename( double parameter_1,short parameter_2,char parameter_3);
char cmd_mv( unsigned int parameter_1,int parameter_2,int parameter_3);
int bmfs_create_dir( int parameter_1,int parameter_2);
int cmd_mkdir( unsigned int parameter_1,int parameter_2,double parameter_3);
float time_print();
long next_without_skipping( char parameter_1);
float bmfs_dir_next( short parameter_1);
long find_dir( short parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5);
int bmfs_entry_is_directory( char parameter_1);
int bmfs_dir_import( float parameter_1);
void bmfs_dir_set_disk( short parameter_1,short parameter_2);
long open_dir( unsigned int parameter_1,short parameter_2,short parameter_3,int uni_para);
int bmfs_open_dir( double parameter_1,float parameter_2,char parameter_3,int uni_para);
void bmfs_dir_init( short parameter_1);
float cmd_ls( double parameter_1,int parameter_2,int parameter_3,int uni_para);
void bmfs_table_entry_set_deleted();
int bmfs_table_free( short parameter_1,long parameter_2);
void bmfs_host_free( int parameter_1,short parameter_2);
float table_free( double parameter_1);
unsigned int bmfs_host_malloc( int parameter_1,long parameter_2,unsigned int parameter_3);
int bmfs_host_init( float parameter_1);
void table_host_init( double parameter_1);
int table_malloc( short parameter_1,float parameter_2);
int copy_over_data( int parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4);
int bmfs_table_realloc( double parameter_1,short parameter_2,char parameter_3);
unsigned int file_resize( unsigned int parameter_1,long parameter_2);
int bmfs_file_write( int parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4);
void bmfs_file_set_mode( long parameter_1,short parameter_2);
long bmfs_table_find( double parameter_1,char parameter_2);
long can_fit_entry( float parameter_1,float parameter_2);
float add_entry( short parameter_1,float parameter_2,short parameter_3);
short entry_exists( char parameter_1,long parameter_2,float parameter_3,char parameter_4);
char create_entry( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int new_get_block_size( double parameter_1);
int bmfs_create_file( char parameter_1,short parameter_2);
unsigned int cmd_cp( float parameter_1,int parameter_2,long parameter_3);
int bmfs_file_seek( long parameter_1,long parameter_2,int parameter_3);
int bmfs_file_read( char parameter_1,unsigned int parameter_3,short parameter_4);
int bmfs_file_eof();
int bmfs_get_current_time();
int bmfs_entry_save( short parameter_1,int parameter_2);
long file_can_write( float parameter_1);
void bmfs_file_close( char parameter_1);
int bmfs_file_import( float parameter_1);
int find_file( double parameter_1,double parameter_2,double parameter_3,short parameter_4,float parameter_5);
short bmfs_entry_is_deleted( short parameter_1);
double is_entry( int parameter_1,long parameter_2,int parameter_3);
double find_entry( int parameter_1,short parameter_2,float parameter_3,float parameter_4,char parameter_5,int uni_para);
int is_separator( char parameter_1);
int bmfs_path_split_root( char parameter_1,short parameter_2);
void bmfs_path_set( unsigned int parameter_1,float parameter_2,int parameter_3);
void bmfs_path_init( char parameter_1);
int bmfs_entry_read( int parameter_1,unsigned int parameter_2,int uni_para);
void bmfs_file_set_disk( int parameter_1,double parameter_2);
long open_file( short parameter_1,long parameter_2,int parameter_3);
int bmfs_open_file( unsigned int parameter_1,long parameter_2,char parameter_3);
void bmfs_file_init( float parameter_1);
int cmd_cat( unsigned int parameter_1,int parameter_2,float parameter_3);
void bmfs_table_set_count( float parameter_1,int parameter_2);
int bmfs_header_check( unsigned int parameter_1);
int bmfs_import( long parameter_1);
int bmfs_export( unsigned int parameter_1);
void bmfs_filedisk_done( short parameter_1);
int bmfs_header_write( double parameter_1,int parameter_2);
float next_entry( double parameter_1);
long bmfs_table_next( double parameter_1);
void bmfs_table_view_deleted( double parameter_1);
void bmfs_table_begin( float parameter_1);
int bmfs_table_save_all( long parameter_1);
int bmfs_disk_tell( unsigned int parameter_1,char parameter_2,int uni_para);
void bmfs_memcpy(unsigned int parameter_2,short parameter_3);
int bmfs_entry_write( unsigned int parameter_1,unsigned int parameter_2);
int bmfs_table_entry_write( unsigned int parameter_1,char parameter_2);
int bmfs_table_save( float parameter_1);
void bmfs_table_entry_copy( float parameter_1,double parameter_2);
int bmfs_table_push( int parameter_1,long parameter_2);
double bmfs_table_entry_is_deleted( double parameter_1);
void bmfs_encode_uint32( int parameter_1);
void bmfs_encode_uint64( char parameter_1);
int bmfs_table_entry_checksum( short parameter_1);
int bmfs_table_entry_read( int parameter_1,short parameter_2);
double prev_entry( short parameter_1);
long bmfs_table_previous( char parameter_1);
void bmfs_table_hide_deleted( char parameter_1);
void bmfs_table_end( int parameter_1);
long get_block_size( short parameter_1);
double to_block_size( double parameter_1,short parameter_2);
int bmfs_table_alloc( unsigned int parameter_1,short parameter_2,unsigned int parameter_3);
int bmfs_allocate( unsigned int parameter_1,long parameter_2,char parameter_3);
void bmfs_entry_set_type( short parameter_1,int parameter_2);
void bmfs_entry_init();
void bmfs_table_set_max_offset( unsigned int parameter_1,short parameter_2);
void bmfs_table_set_min_offset( short parameter_1,double parameter_2);
void bmfs_table_set_offset( double parameter_1,long parameter_2);
int bmfs_format( char parameter_1,long parameter_2);
void bmfs_table_set_block_size( long parameter_1,double parameter_2);
void bmfs_set_block_size( short parameter_1,long parameter_2);
int bmfs_disk_write( double parameter_1,long parameter_2,int parameter_3,int parameter_4);
unsigned int bmfs_crc32( double parameter_1,double parameter_2,char parameter_3);
float bmfs_decode_uint32( long parameter_1);
long bmfs_decode_uint64( double parameter_1);
int bmfs_disk_read( short parameter_1,double parameter_3,long parameter_4);
int bmfs_header_read( int parameter_1,long parameter_2);
int bmfs_disk_seek( unsigned int parameter_1,char parameter_2,int parameter_3);
int bmfs_check_signature( int parameter_1);
float cmd_format( char parameter_1,int parameter_2,char parameter_3);
void bmfs_table_set_disk( int parameter_1,int parameter_2);
void bmfs_set_disk( char parameter_1,unsigned int parameter_2);
void bmfs_table_set_host( char parameter_1,double parameter_2);
void bmfs_host_done( unsigned int parameter_1,double parameter_2);
void bmfs_set_host( double parameter_1,char parameter_2);
void bmfs_table_entry_init( unsigned int parameter_1);
void bmfs_table_init();
void bmfs_header_init();
void bmfs_init( int parameter_1);
void bmfs_filedisk_set_offset( char parameter_1,short parameter_2);
double bmfs_strerror( int parameter_1);
int bmfs_filedisk_open( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
float bmfs_filedisk_write(int parameter_2,int parameter_3,long parameter_4);
long bmfs_filedisk_read(short parameter_3,float parameter_4);
unsigned int bmfs_filedisk_tell(char parameter_2);
int to_bmfs_errno( int parameter_1);
double bmfs_filedisk_seek(char parameter_2,int parameter_3);
void bmfs_disk_init();
void bmfs_filedisk_init();
unsigned int file_exists( char parameter_1);
char print_version();
long print_usage( char parameter_1);
int print_help( long parameter_1,int parameter_2,int parameter_3);
int command_parse( float parameter_1);
int bmfs_size_bytes( float parameter_1,float parameter_2);
int to_type( long parameter_1,short parameter_2);
int bmfs_size_parse( float parameter_1,double parameter_2);
char is_opt( char parameter_1,char parameter_2,float parameter_3);
float dump_table( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_4 = 0;
	char char_3 = 0;
	int int_1 = 0;
	long long_1 = 0;
	double double_6 = 0;
	double double_7 = 0;
	short short_2 = 0;
	float float_1 = 0;
	char char_4 = 0;
	long long_2 = 0;
	double double_8 = 0;
	double double_9 = 0;
	long long_3 = 0;
	int int_3 = 0;
	float float_3 = 0;
	double double_5 = 0;
	short short_1 = 0;
	int int_2 = 0;
	float float_2 = 0;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_2;
	double_1 = pow ( double_2 , double_3 ) ;
	unsigned_int_4 = unsigned_int_3;
	for(int looper_1=0; looper_1<10;looper_1++)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_4 = 0;
		char char_3 = 0;
		int int_1 = 0;
		long long_1 = 0;
		double double_6 = 0;
		double double_7 = 0;
		short short_2 = 0;
		float float_1 = 0;
		char char_4 = 0;
		long long_2 = 0;
		double double_8 = 0;
		double double_9 = 0;
		long long_3 = 0;
		int int_3 = 0;
		float float_3 = 0;
		double double_5 = 0;
		short short_1 = 0;
		int int_2 = 0;
		float float_2 = 0;
		double_4 = dump_indent(char_3,int_1);

		long_1 = bmfs_table_next(double_4);

		double_5 = double_4;
		char controller_1[3];
		scanf("%3s", controller_1);
		if( strcmp( controller_1, "m|X") > 0)
		{
		}
		double_5 = ceil ( double_6 ) ;
		bmfs_table_view_deleted(double_7);

		short_2 = short_1 + short_1;
		double_2 = cosh ( double_5 ) ;
		double_6 = exp ( double_2 ) ;
		int_2 = int_2 + int_2;
		float_1 = float_1 - float_2;
		short_2 = dump_x(long_1,char_3,char_4,short_2,long_2);

		double_3 = tanh ( double_8 ) ;
		double_8 = floor ( double_8 ) ;
	}
	double_4 = double_1 - double_7;
	float_1 = dump_llx(unsigned_int_1,double_6,long_2,double_8,double_3);

	double_9 = tan ( double_1 ) ;
	long_2 = long_3;
	double_3 = tanh ( double_2 ) ;
	double_2 = exp ( double_6 ) ;
	int_3 = int_1;
	double_1 = cos ( double_7 ) ;
	return float_3;
	bmfs_table_begin(float_1);

}
short dump_x( long parameter_1,char parameter_2,char parameter_3,short parameter_4,long parameter_5)
{
	short short_1 = 0;
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short_1 = short_1;
	if(1)
	{
		short short_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		float float_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		double_1 = dump_indent(char_1,int_1);

		float_1 = float_1 * float_2;
	}
	else
	{
		short short_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		float float_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return short_1;
}
float dump_llx( unsigned int parameter_1,double parameter_2,long parameter_3,double parameter_4,double parameter_5)
{
	long long_1 = 0;
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	float float_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long_1 = long_1 - long_1;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "XIM.A") > 0)
	{
		long long_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double_1 = dump_indent(char_1,int_1);

		long_2 = long_3;
	}
	else
	{
		long long_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double_2 = atan2 ( double_3 , double_2 ) ;
	}
	return float_1;
}
double dump_indent( char parameter_1,int parameter_2)
{
	double double_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short_2 = short_1 * short_2;
	}
	return double_1;
}
long dump_header( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	long long_1 = 0;
	char char_2 = 0;
	long long_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_5 = 0;
	double_1 = dump_indent(char_1,int_1);

	double_2 = double_2;
	double_2 = double_1 - double_2;
	char_1 = char_1;
	double_3 = double_2;
	double_1 = atan ( double_3 ) ;
	double_1 = floor ( double_3 ) ;
	float_1 = float_1 * float_2;
	double_1 = sinh ( double_3 ) ;
	short_1 = dump_x(long_1,char_2,char_1,short_1,long_2);

	double_1 = asin ( double_4 ) ;
	float_2 = dump_llx(unsigned_int_1,double_2,long_1,double_1,double_2);

	double_4 = atan ( double_5 ) ;
	return long_2;
}
long dump_bmfs( int parameter_1,long parameter_2)
{
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	long long_2 = 0;
	float float_1 = 0;
	int int_1 = 0;
	long_1 = long_1;
	long_1 = dump_header(unsigned_int_1,double_1);

	double_2 = exp ( double_1 ) ;
	unsigned_int_2 = unsigned_int_2 - unsigned_int_3;
	return long_2;
	float_1 = dump_table(unsigned_int_3,int_1);

}
char cmd_dump( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 0;
	float float_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	char char_2 = 0;
	long long_1 = 0;
	int int_1 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double_1 = log ( double_1 ) ;
	float_1 = float_1 / float_1;
	int looper_1 = 0;
	while(looper_1 < 10)
	{
		double double_1 = 0;
		float float_1 = 0;
		char char_1 = 0;
		double double_2 = 0;
		char char_2 = 0;
		long long_1 = 0;
		int int_1 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		looper_1 += 1;
		if(1)
		{
			double_1 = fmod ( double_1 , double_1 ) ;
			if(1)
			{
				char_1 = is_opt(char_1,char_1,float_1);

				double_1 = double_2;
				return char_2;
			}
		}
		long_1 = dump_bmfs(int_1,long_1);

		unsigned_int_1 = unsigned_int_2;
	}
	double_1 = cos ( double_1 ) ;
	if(1)
	{
		double double_1 = 0;
		float float_1 = 0;
		char char_1 = 0;
		double double_2 = 0;
		char char_2 = 0;
		long long_1 = 0;
		int int_1 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short_1 = short_2;
		return char_1;
	}
	double_3 = ceil ( double_2 ) ;
	double_3 = atan ( double_3 ) ;
	return char_2;
}
void bmfs_get_status( int parameter_1,double parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_1 = 0;
	double double_3 = 0;
	long long_1 = 0;
	float float_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_4 = 0;
	double_1 = ceil ( double_2 ) ;
	double_2 = sinh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	bmfs_table_hide_deleted(char_1);

	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_1 = 0;
		double double_3 = 0;
		long long_1 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_4 = 0;
		int_3 = int_1 * int_2;
		if(1)
		{
		}
		long_1 = bmfs_table_next(double_3);

		double_1 = ceil ( double_4 ) ;
	}
	bmfs_table_begin(float_1);

}
void bmfs_status_init( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double_1 = sinh ( double_2 ) ;
	double_3 = atan ( double_2 ) ;
	double_4 = double_2 - double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = ceil ( double_2 ) ;
	unsigned_int_2 = unsigned_int_2;
}
char cmd_status( float parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_1 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	char char_1 = 0;
	int int_2 = 0;
	double_1 = cos ( double_2 ) ;
	double_3 = acos ( double_4 ) ;
	double_2 = double_1;
	bmfs_get_status(int_1,double_3);

	double_3 = sqrt ( double_2 ) ;
	double_4 = floor ( double_1 ) ;
	double_4 = double_3 + double_1;
	double_5 = double_4;
	double_1 = double_1;
	double_2 = fmod ( double_6 , double_3 ) ;
	double_7 = fabs ( double_3 ) ;
	return char_1;
	bmfs_status_init(int_2);

}
int bmfs_delete_dir( short parameter_1,short parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	float float_1 = 0;
	char char_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_2 = 0;
	int_1 = bmfs_open_dir(double_1,float_1,char_1,512);

	float_2 = bmfs_dir_next(short_1);

	double_1 = tan ( double_1 ) ;
	bmfs_dir_init(short_2);

	double_1 = tan ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 / unsigned_int_1;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "I|V") < 0)
	{
		return int_2;
	}
	if(1)
	{
		return int_2;
	}
	int_2 = int_1 - int_2;
	char controller_3[3];
	scanf("%3s", controller_3);
	if( strcmp( controller_3, "9oH") > 0)
	{
		return int_1;
	}
	return int_2;
	delete_entry(unsigned_int_2,short_1);

}
int bmfs_delete_dir_recursively( char parameter_1,double parameter_2)
{
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_1 = 0;
	short short_2 = 0;
	float float_1 = 0;
	double double_3 = 0;
	int int_2 = 0;
	short short_3 = 0;
	int int_3 = 0;
	float float_2 = 0;
	char char_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char_1 = char_1 / char_1;
	delete_entry(unsigned_int_1,short_1);

	long_3 = long_1 / long_2;
	unsigned_int_2 = unsigned_int_2;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "cz{") > 0)
	{
		return int_1;
	}
	for(int looper_1=0; looper_1<10;looper_1++)
	{
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		short short_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_1 = 0;
		short short_2 = 0;
		float float_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		short short_3 = 0;
		int int_3 = 0;
		float float_2 = 0;
		char char_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double_1 = floor ( double_2 ) ;
		if(1)
		{
		}
		bmfs_dir_init(short_2);

		float_1 = bmfs_dir_next(short_2);

		double_3 = double_2 - double_3;
		char controller_3[4];
		scanf("%4s", controller_3);
		if( strcmp( controller_3, "UZO6") > 0)
		{
			return int_2;
		}
	}
	short_1 = short_2 / short_3;
	if(1)
	{
		return int_2;
	}
	return int_1;
	int_3 = bmfs_open_dir(double_3,float_2,char_2,279);

}
float cmd_rmdir( long parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	double double_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	float float_3 = 0;
	int int_3 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_3 = 0;
	double double_4 = 0;
	int_1 = int_2;
	int_2 = bmfs_delete_dir(short_1,short_1);

	double_1 = bmfs_strerror(int_1);

	char_1 = char_1;
	char_2 = is_opt(char_2,char_2,float_1);

	int_1 = int_2 / int_1;
	int looper_1 = 0;
	while(looper_1 < 3)
	{
		int int_1 = 0;
		int int_2 = 0;
		short short_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		float float_3 = 0;
		int int_3 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_3 = 0;
		double double_4 = 0;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
			int_3 = int_1;
		}
		char controller_3[1];
		scanf("%1s", controller_3);
		if( strcmp( controller_3, "C") > 0)
		{
			int int_1 = 0;
			int int_2 = 0;
			short short_1 = 0;
			double double_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			float float_3 = 0;
			int int_3 = 0;
			short short_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_2 = 0;
			double double_3 = 0;
			short short_3 = 0;
			double double_4 = 0;
			short_2 = short_1;
		}
		else
		{
			int int_1 = 0;
			int int_2 = 0;
			short short_1 = 0;
			double double_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			float float_3 = 0;
			int int_3 = 0;
			short short_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_2 = 0;
			double double_3 = 0;
			short short_3 = 0;
			double double_4 = 0;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			return float_2;
		}
		double_1 = ldexp ( double_1 , int_3 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 8)
	{
		int int_1 = 0;
		int int_2 = 0;
		short short_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		float float_3 = 0;
		int int_3 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_3 = 0;
		double double_4 = 0;
		looper_2 += 1;
		char controller_4[5];
		scanf("%5s", controller_4);
		if( strcmp( controller_4, "?+Gh^") < 0)
		{
			int int_1 = 0;
			int int_2 = 0;
			short short_1 = 0;
			double double_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			float float_3 = 0;
			int int_3 = 0;
			short short_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_2 = 0;
			double double_3 = 0;
			short short_3 = 0;
			double double_4 = 0;
			int_1 = bmfs_delete_dir_recursively(char_1,double_1);

			short_3 = short_3;
			return float_3;
		}
		double_2 = tanh ( double_1 ) ;
		if(1)
		{
			double_2 = cosh ( double_2 ) ;
		}
		else
		{
			double_2 = ldexp ( double_3 , int_1 ) ;
		}
		if(1)
		{
			int int_1 = 0;
			int int_2 = 0;
			short short_1 = 0;
			double double_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			float float_3 = 0;
			int int_3 = 0;
			short short_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_2 = 0;
			double double_3 = 0;
			short short_3 = 0;
			double double_4 = 0;
			double_4 = ceil ( double_2 ) ;
			double_3 = exp ( double_4 ) ;
			return float_3;
		}
		double_1 = cosh ( double_1 ) ;
	}
	return float_3;
}
int delete_table_entry( double parameter_1,short parameter_2)
{
	int int_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	return int_1;
	int_1 = bmfs_table_free(short_1,long_1);

}
void delete_entry( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_2 = 0;
	short short_3 = 0;
	double_1 = sqrt ( double_1 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "j1") > 0)
	{
	}
	bmfs_entry_set_deleted(char_1);

	double_1 = asin ( double_1 ) ;
	int_1 = delete_table_entry(double_2,short_1);

	int_1 = bmfs_entry_save(short_2,int_2);

	short_3 = short_3;
	if(1)
	{
	}
}
int bmfs_delete_file( short parameter_1,double parameter_2)
{
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	double double_3 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	int int_3 = 0;
	long long_1 = 0;
	char char_1 = 0;
	bmfs_file_init(float_1);

	double_1 = ldexp ( double_2 , int_1 ) ;
	double_2 = pow ( double_2 , double_1 ) ;
	int_1 = int_1;
	double_3 = fabs ( double_1 ) ;
	if(1)
	{
		return int_2;
	}
	delete_entry(unsigned_int_1,short_1);

	double_2 = cos ( double_3 ) ;
	if(1)
	{
		return int_2;
	}
	return int_1;
	int_3 = bmfs_open_file(unsigned_int_1,long_1,char_1);

}
unsigned int cmd_rm( char parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	double double_5 = 0;
	int int_3 = 0;
	double double_4 = 0;
	int_2 = int_1 / int_1;
	double_1 = sqrt ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 7)
	{
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
			double_1 = atan2 ( double_1 , double_2 ) ;
		}
		else
		{
			double_3 = log10 ( double_2 ) ;
			return unsigned_int_1;
		}
		double_3 = atan2 ( double_3 , double_1 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 7)
	{
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		double double_5 = 0;
		int int_3 = 0;
		double double_4 = 0;
		looper_2 += 1;
		char controller_3[3];
		scanf("%3s", controller_3);
		if( strcmp( controller_3, "=*y") < 0)
		{
			double_3 = cosh ( double_3 ) ;
			return unsigned_int_1;
		}
		int_3 = int_2;
		if(1)
		{
			double_1 = bmfs_strerror(int_1);

			double_1 = double_1 / double_3;
			char_1 = is_opt(char_2,char_2,float_1);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			return unsigned_int_2;
		}
		double_2 = atan ( double_4 ) ;
	}
	return unsigned_int_1;
	int_2 = bmfs_delete_file(short_1,double_5);

}
double cmd_touch( char parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 0;
	char char_1 = 0;
	short short_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int_1 = bmfs_create_file(char_1,short_1);

	int_2 = int_3;
	int looper_1 = 0;
	while(looper_1 < 10)
	{
		looper_1 += 1;
		if(1)
		{
		}
		else
		{
			double_1 = exp ( double_1 ) ;
			return double_2;
		}
		double_1 = sinh ( double_1 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		int int_1 = 0;
		char char_1 = 0;
		short short_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		looper_2 += 1;
		if(1)
		{
			double_2 = double_1 / double_1;
			return double_3;
		}
		double_4 = double_1;
		if(1)
		{
			int int_1 = 0;
			char char_1 = 0;
			short short_1 = 0;
			int int_2 = 0;
			int int_3 = 0;
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double_3 = bmfs_strerror(int_1);

			double_5 = acos ( double_2 ) ;
			double_4 = cos ( double_4 ) ;
			return double_3;
		}
		double_3 = atan ( double_4 ) ;
	}
	return double_2;
}
void bmfs_entry_set_deleted( char parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = sinh ( double_2 ) ;
}
void bmfs_entry_copy( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned_int_1 = unsigned_int_1 / unsigned_int_2;
}
int bmfs_rename( double parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_4 = 0;
	long long_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	float float_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	short short_1 = 0;
	int int_5 = 0;
	float float_2 = 0;
	double double_6 = 0;
	double double_7 = 0;
	unsigned int unsigned_int_4 = 0;
	char char_4 = 0;
	short short_2 = 0;
	int int_6 = 0;
	double double_5 = 0;
	int int_2 = 0;
	double_1 = double_1 + double_1;
	double_2 = log ( double_3 ) ;
	int_1 = bmfs_open_file(unsigned_int_1,long_1,char_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3;
	double_3 = asin ( double_1 ) ;
	double_2 = atan2 ( double_1 , double_4 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_4 = 0;
		long long_2 = 0;
		int int_3 = 0;
		int int_4 = 0;
		float float_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		short short_1 = 0;
		int int_5 = 0;
		float float_2 = 0;
		double double_6 = 0;
		double double_7 = 0;
		unsigned int unsigned_int_4 = 0;
		char char_4 = 0;
		short short_2 = 0;
		int int_6 = 0;
		double double_5 = 0;
		int int_2 = 0;
		double_1 = sinh ( double_5 ) ;
		bmfs_entry_init();

		bmfs_entry_copy(long_2,long_1);

		int_2 = int_3;
		int_4 = bmfs_open_dir(double_2,float_1,char_2,756);

		char_3 = create_entry(unsigned_int_2,int_1,int_4);

		double_4 = atan2 ( double_3 , double_5 ) ;
		if(1)
		{
			return int_3;
		}
		int_1 = bmfs_entry_save(short_1,int_5);

		double_1 = fmod ( double_1 , double_3 ) ;
	}
	char controller_3[3];
	scanf("%3s", controller_3);
	if( strcmp( controller_3, "ZW,") < 0)
	{
		return int_1;
	}
	else
	{
		bmfs_file_init(float_2);

		double_6 = pow ( double_7 , double_2 ) ;
	}
	int_5 = int_1;
	double_6 = log10 ( double_3 ) ;
	bmfs_dir_init(short_1);

	double_6 = double_7 / double_3;
	char_1 = char_2 / char_1;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		return int_1;
	}
	bmfs_entry_set_deleted(char_4);

	short_2 = short_1 / short_1;
	char controller_5[1];
	scanf("%1s", controller_5);
	if( strcmp( controller_5, "~") > 0)
	{
		return int_6;
	}
	return int_1;
}
char cmd_mv( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	char char_2 = 0;
	double double_4 = 0;
	int int_3 = 0;
	char char_3 = 0;
	short short_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double_1 = ceil ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		looper_1 += 1;
		if(1)
		{
		}
		else
		{
			double_3 = atan ( double_3 ) ;
			return char_1;
		}
	}
	double_1 = exp ( double_2 ) ;
	int_1 = int_2;
	int looper_2 = 0;
	while(looper_2 < 8)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		char char_2 = 0;
		double double_4 = 0;
		int int_3 = 0;
		char char_3 = 0;
		short short_1 = 0;
		float float_1 = 0;
		float float_2 = 0;
		looper_2 += 1;
		if(1)
		{
			double_1 = tan ( double_1 ) ;
			return char_2;
		}
		if(1)
		{
			double_3 = double_3;
		}
		if(1)
		{
			double_1 = log10 ( double_1 ) ;
		}
		else
		{
			double_2 = double_2 + double_2;
			return char_2;
		}
		float_2 = float_1 - float_2;
	}
	double_2 = ceil ( double_4 ) ;
	if(1)
	{
		double_1 = bmfs_strerror(int_3);

		double_4 = ceil ( double_2 ) ;
		double_2 = atan ( double_4 ) ;
		return char_2;
	}
	return char_3;
	int_2 = bmfs_rename(double_2,short_1,char_3);

}
int bmfs_create_dir( int parameter_1,int parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_3 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_3 = 0;
	double double_4 = 0;
	char char_3 = 0;
	char char_4 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_get_current_time();

	char_1 = char_1 * char_2;
	unsigned_int_1 = new_get_block_size(double_1);

	double_1 = log ( double_2 ) ;
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "qiU}#") < 0)
	{
		return int_1;
	}
	int_1 = bmfs_allocate(unsigned_int_1,long_1,char_2);

	unsigned_int_2 = unsigned_int_1 - unsigned_int_1;
	bmfs_entry_set_type(short_1,int_1);

	char_1 = create_entry(unsigned_int_3,int_1,int_2);

	unsigned_int_2 = unsigned_int_1;
	long_3 = long_1 / long_2;
	double_2 = ldexp ( double_3 , int_1 ) ;
	bmfs_entry_init();

	double_1 = ceil ( double_1 ) ;
	double_1 = log10 ( double_4 ) ;
	char_4 = char_3 / char_2;
	if(1)
	{
		return int_1;
	}
	return int_1;
}
int cmd_mkdir( unsigned int parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 0;
	char char_2 = 0;
	int int_1 = 0;
	double double_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_3 = 0;
	char char_4 = 0;
	double double_4 = 0;
	char_2 = char_1 * char_2;
	int looper_1 = 0;
	while(looper_1 < 9)
	{
		char char_1 = 0;
		char char_2 = 0;
		int int_1 = 0;
		double double_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_3 = 0;
		char char_4 = 0;
		double double_4 = 0;
		looper_1 += 1;
		if(1)
		{
			double_1 = tan ( double_1 ) ;
			return int_1;
		}
		double_1 = ceil ( double_2 ) ;
		char_3 = char_4;
		if(1)
		{
			char char_1 = 0;
			char char_2 = 0;
			int int_1 = 0;
			double double_3 = 0;
			double double_1 = 0;
			double double_2 = 0;
			char char_3 = 0;
			char char_4 = 0;
			double double_4 = 0;
			double_1 = exp ( double_3 ) ;
			double_4 = cosh ( double_2 ) ;
			return int_1;
		}
		int_1 = bmfs_create_dir(int_1,int_1);

		double_3 = bmfs_strerror(int_1);

		double_1 = tan ( double_2 ) ;
	}
	return int_1;
}
float time_print()
{
	long long_1 = 0;
	long long_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	double double_1 = 0;
	long_1 = long_1 - long_2;
	int_2 = int_1 / int_2;
	long_2 = long_2 / long_2;
	char_1 = char_1 + char_1;
	double_1 = ldexp ( double_1 , int_1 ) ;
}
long next_without_skipping( char parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_2 = 0;
	double double_4 = 0;
	double_1 = double_2;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_2);

	short_2 = short_1 * short_1;
	double_3 = double_1 * double_1;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	int_1 = bmfs_entry_read(int_2,unsigned_int_2,543);

	double_1 = double_2;
	if(1)
	{
		return long_1;
	}
	int_2 = int_1;
	if(1)
	{
		return long_2;
	}
	double_2 = floor ( double_4 ) ;
	return long_2;
}
float bmfs_dir_next( short parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_1 = 0;
	char char_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<3;looper_1++)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		long long_1 = 0;
		char char_1 = 0;
		float float_1 = 0;
		float float_2 = 0;
		short short_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		long_1 = next_without_skipping(char_1);

		int_2 = int_1 + int_1;
		if(1)
		{
			return float_1;
		}
		if(1)
		{
			return float_1;
		}
		if(1)
		{
			return float_1;
		}
	}
	return float_2;
	short_1 = bmfs_entry_is_deleted(short_1);

}
long find_dir( short parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5)
{
	int int_1 = 0;
	short short_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_2 = 0;
	float float_3 = 0;
	char char_2 = 0;
	long long_3 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_2 = 0;
	int_1 = int_1 + int_1;
	bmfs_dir_set_disk(short_1,short_1);

	int_2 = bmfs_dir_import(float_1);

	long_1 = long_1 - long_2;
	double_1 = is_entry(int_2,long_2,int_2);

	double_1 = double_2;
	float_3 = float_2 + float_2;
	int looper_1 = 0;
	while(looper_1 < 4)
	{
		int int_1 = 0;
		short short_1 = 0;
		int int_2 = 0;
		float float_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		float float_2 = 0;
		float float_3 = 0;
		char char_2 = 0;
		long long_3 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_2 = 0;
		looper_1 += 1;
		bmfs_dir_init(short_1);

		char_1 = char_1 / char_2;
		double_1 = sqrt ( double_2 ) ;
		float_1 = float_1;
		double_1 = fabs ( double_2 ) ;
		if(1)
		{
			return long_1;
		}
		unsigned_int_1 = unsigned_int_2;
		char controller_2[4];
		scanf("%4s", controller_2);
		if( strcmp( controller_2, "YKcn") > 0)
		{
			return long_3;
		}
		if(1)
		{
			return long_3;
		}
		char controller_4[2];
		scanf("%2s", controller_4);
		if( strcmp( controller_4, "}B") > 0)
		{
			return long_3;
		}
		short_2 = short_2;
	}
	return long_1;
	int_3 = bmfs_disk_seek(unsigned_int_3,char_2,int_1);

}
int bmfs_entry_is_directory( char parameter_1)
{
	int int_1 = 0;
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
int bmfs_dir_import( float parameter_1)
{
	char char_1 = 0;
	char char_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_3 = 0;
	unsigned int unsigned_int_3 = 0;
	char_2 = char_1 - char_1;
	int_1 = bmfs_entry_read(int_1,unsigned_int_1,814);

	int_2 = bmfs_entry_is_directory(char_2);

	short_2 = short_1 + short_1;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "1NF") > 0)
	{
		return int_2;
	}
	double_1 = ceil ( double_1 ) ;
	double_2 = pow ( double_1 , double_3 ) ;
	double_4 = floor ( double_3 ) ;
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_3;
	}
	double_1 = exp ( double_2 ) ;
	int_2 = bmfs_disk_tell(unsigned_int_2,char_3,733);

	double_1 = fabs ( double_1 ) ;
	unsigned_int_1 = unsigned_int_3;
	return int_1;
	bmfs_entry_init();

}
void bmfs_dir_set_disk( short parameter_1,short parameter_2)
{
	if(1)
	{
		double double_1 = 0;
		double_1 = double_1 + double_1;
	}
}
long open_dir( unsigned int parameter_1,short parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_5 = 0;
	double double_6 = 0;
	float float_1 = 0;
	double double_7 = 0;
	double double_8 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_10 = 0;
	float float_2 = 0;
	char char_3 = 0;
	long long_3 = 0;
	long long_4 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_9 = 0;
	short short_3 = 0;
	double_1 = fmod ( double_1 , double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 7)
	{
		looper_1 += 1;
		double_3 = atan ( double_4 ) ;
	}
	char_2 = char_1 / char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	double_4 = cos ( double_2 ) ;
	short_1 = short_2;
	double_5 = sqrt ( double_3 ) ;
	if(1)
	{
		double_1 = asin ( double_4 ) ;
	}
	double_1 = fmod ( double_4 , double_6 ) ;
	if(1)
	{
		double_4 = sinh ( double_6 ) ;
	}
	float_1 = float_1;
	double_7 = cosh ( double_4 ) ;
	double_6 = cos ( double_8 ) ;
	if(1)
	{
		char_1 = char_2 * char_2;
	}
	double_3 = cosh ( double_6 ) ;
	long_1 = long_1 - long_2;
	double_7 = pow ( double_4 , double_8 ) ;
	int_1 = int_1 + int_2;
	double_2 = ldexp ( double_5 , int_3 ) ;
	int looper_2 = 0;
	while(looper_2 < 7)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		float float_1 = 0;
		double double_7 = 0;
		double double_8 = 0;
		long long_1 = 0;
		long long_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_10 = 0;
		float float_2 = 0;
		char char_3 = 0;
		long long_3 = 0;
		long long_4 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_9 = 0;
		short short_3 = 0;
		looper_2 += 1;
		int_3 = int_4;
		if(1)
		{
		}
		double_6 = exp ( double_4 ) ;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			double_8 = ceil ( double_3 ) ;
		}
		double_7 = ldexp ( double_9 , int_1 ) ;
		if(1)
		{
			double_9 = log10 ( double_7 ) ;
		}
	}
	double_10 = asin ( double_4 ) ;
	if(1)
	{
		double_2 = asin ( double_7 ) ;
	}
	char controller4vul_6[5];
	scanf("%5s", controller4vul_6);
	if( strcmp( controller4vul_6, ")^4N=") > 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		float float_1 = 0;
		double double_7 = 0;
		double double_8 = 0;
		long long_1 = 0;
		long long_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_10 = 0;
		float float_2 = 0;
		char char_3 = 0;
		long long_3 = 0;
		long long_4 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_9 = 0;
		short short_3 = 0;
		double_7 = atan2 ( double_8 , double_6 ) ;
		double_1 = log ( double_4 ) ;
		short_1 = short_3;
		char controller4vul_7[2];
		scanf("%2s", controller4vul_7);
		if( strcmp( controller4vul_7, "&m") < 0)
		{
			double_5 = find_entry(int_3,short_2,float_2,float_1,char_3,uni_para);

			return long_3;
		}
		return long_1;
	}
	double_5 = tanh ( double_4 ) ;
	double_8 = double_2;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "YO") > 0)
	{
		return long_4;
	}
	return long_2;
}
int bmfs_open_dir( double parameter_1,float parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	char controller4vul_5[3];
	scanf("%3s", controller4vul_5);
	if( strcmp( controller4vul_5, "r?G") < 0)
	{
		long_1 = open_dir(unsigned_int_1,short_1,short_2,uni_para);

		return int_1;
	}
	int_2 = int_3;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, ".jUc-") > 0)
	{
		return int_3;
	}
	return int_3;
}
void bmfs_dir_init( short parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_4 = 0;
	double_1 = sinh ( double_2 ) ;
	double_2 = tan ( double_3 ) ;
	bmfs_entry_init();

	char_1 = char_2;
	int_1 = int_1 + int_1;
	long_3 = long_1 * long_2;
	double_3 = double_4;
}
float cmd_ls( double parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	int int_3 = 0;
	double double_8 = 0;
	int int_4 = 0;
	float float_1 = 0;
	char char_1 = 0;
	double double_9 = 0;
	float float_2 = 0;
	unsigned int unsigned_int_2 = 0;
	float float_3 = 0;
	float float_4 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_5 = 0;
	int int_6 = 0;
	char char_2 = 0;
	double_1 = acos ( double_1 ) ;
	double_2 = log ( double_2 ) ;
	double_3 = double_1 - double_1;
	double_3 = asin ( double_4 ) ;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_4 = log ( double_5 ) ;
	double_6 = acos ( double_7 ) ;
	int_1 = int_1;
	int_2 = int_2 * int_3;
	double_6 = atan2 ( double_4 , double_7 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
			double_8 = sinh ( double_7 ) ;
		}
		char controller4vul_3[3];
		scanf("%3s", controller4vul_3);
		if( strcmp( controller4vul_3, "@S=") > 0)
		{
			char controller4vul_4[3];
			scanf("%3s", controller4vul_4);
			if( strcmp( controller4vul_4, "FN]") < 0)
			{
				int_4 = bmfs_open_dir(double_8,float_1,char_1,uni_para);

				double_8 = tan ( double_8 ) ;
				return float_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 - unsigned_int_1;
			}
			if(1)
			{
				double_2 = sqrt ( double_9 ) ;
			}
			if(1)
			{
				double_8 = sinh ( double_9 ) ;
				return float_2;
			}
			else
			{
				double double_1 = 0;
				double double_2 = 0;
				double double_3 = 0;
				double double_4 = 0;
				int int_1 = 0;
				int int_2 = 0;
				unsigned int unsigned_int_1 = 0;
				double double_5 = 0;
				double double_6 = 0;
				double double_7 = 0;
				int int_3 = 0;
				double double_8 = 0;
				int int_4 = 0;
				float float_1 = 0;
				char char_1 = 0;
				double double_9 = 0;
				float float_2 = 0;
				unsigned int unsigned_int_2 = 0;
				float float_3 = 0;
				float float_4 = 0;
				short short_1 = 0;
				short short_2 = 0;
				int int_5 = 0;
				int int_6 = 0;
				char char_2 = 0;
				short_2 = short_1 * short_2;
				return float_1;
			}
			unsigned_int_2 = unsigned_int_2 - unsigned_int_1;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			double double_4 = 0;
			int int_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_1 = 0;
			double double_5 = 0;
			double double_6 = 0;
			double double_7 = 0;
			int int_3 = 0;
			double double_8 = 0;
			int int_4 = 0;
			float float_1 = 0;
			char char_1 = 0;
			double double_9 = 0;
			float float_2 = 0;
			unsigned int unsigned_int_2 = 0;
			float float_3 = 0;
			float float_4 = 0;
			short short_1 = 0;
			short short_2 = 0;
			int int_5 = 0;
			int int_6 = 0;
			char char_2 = 0;
			int_5 = int_3;
			return float_3;
		}
		double_6 = double_6 * double_7;
	}
	double_5 = ceil ( double_2 ) ;
	if(1)
	{
		double_2 = sqrt ( double_9 ) ;
	}
	double_5 = fmod ( double_7 , double_3 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		int int_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		int int_3 = 0;
		double double_8 = 0;
		int int_4 = 0;
		float float_1 = 0;
		char char_1 = 0;
		double double_9 = 0;
		float float_2 = 0;
		unsigned int unsigned_int_2 = 0;
		float float_3 = 0;
		float float_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		int int_5 = 0;
		int int_6 = 0;
		char char_2 = 0;
		double_6 = ldexp ( double_1 , int_6 ) ;
		char_2 = char_1;
		return float_4;
	}
	for(int looper_2=0; looper_2<10;looper_2++)
	{
		double_9 = double_2;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		char controller_8[2];
		scanf("%2s", controller_8);
		if( strcmp( controller_8, "[t") > 0)
		{
			double_2 = floor ( double_9 ) ;
		}
		if(1)
		{
			double_1 = acos ( double_4 ) ;
		}
		else
		{
			double_9 = double_1;
		}
	}
	return float_3;
}
void bmfs_table_entry_set_deleted()
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double_3 = double_1 / double_2;
}
int bmfs_table_free( short parameter_1,long parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	float float_1 = 0;
	int int_2 = 0;
	float float_3 = 0;
	int int_3 = 0;
	long long_1 = 0;
	double double_4 = 0;
	float float_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double_1 = log10 ( double_2 ) ;
	for(int looper_1=0; looper_1<4;looper_1++)
	{
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		float float_1 = 0;
		int int_2 = 0;
		float float_3 = 0;
		int int_3 = 0;
		long long_1 = 0;
		double double_4 = 0;
		float float_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int_1 = bmfs_table_save(float_1);

		float_2 = float_1;
		if(1)
		{
			return int_2;
		}
		if(1)
		{
		}
		double_3 = sinh ( double_2 ) ;
		bmfs_table_begin(float_3);

		bmfs_table_entry_set_deleted();

		unsigned_int_2 = unsigned_int_1 - unsigned_int_2;
		if(1)
		{
			return int_1;
		}
		return int_3;
	}
	return int_1;
	long_1 = bmfs_table_next(double_4);

}
void bmfs_host_free( int parameter_1,short parameter_2)
{
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "c") < 0)
	{
		long long_1 = 0;
		long long_2 = 0;
		long_1 = long_2;
	}
}
float table_free( double parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_1 = 0;
	int int_1 = 0;
	short short_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	unsigned_int_3 = unsigned_int_1 / unsigned_int_2;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "3g") < 0)
	{
		return float_1;
	}
	bmfs_host_free(int_1,short_1);

	float_1 = float_2 + float_2;
	table_host_init(double_1);

}
unsigned int bmfs_host_malloc( int parameter_1,long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	if(1)
	{
		return unsigned_int_1;
	}
	else
	{
		return unsigned_int_2;
	}
}
int bmfs_host_init( float parameter_1)
{
	int int_1 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "^") > 0)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
void table_host_init( double parameter_1)
{
	int int_1 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 0;
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double_1 = cosh ( double_2 ) ;
		if(1)
		{
		}
	}
	int_1 = bmfs_host_init(float_1);

}
int table_malloc( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	int int_2 = 0;
	double double_2 = 0;
	unsigned_int_1 = bmfs_host_malloc(int_1,long_1,unsigned_int_1);

	double_1 = tan ( double_1 ) ;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, " :prE") > 0)
	{
		return int_1;
	}
	return int_2;
	table_host_init(double_2);

}
int copy_over_data( int parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	short short_1 = 0;
	float float_1 = 0;
	int int_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double double_4 = 0;
	int int_5 = 0;
	float float_2 = 0;
	double double_6 = 0;
	int int_6 = 0;
	double double_5 = 0;
	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		double_1 = ceil ( double_2 ) ;
	}
	double_2 = atan2 ( double_1 , double_2 ) ;
	char controller_2[3];
	scanf("%3s", controller_2);
	if( strcmp( controller_2, "S<[") > 0)
	{
		return int_1;
	}
	char_2 = char_1 - char_2;
	int looper_1 = 0;
	while(looper_1 < 5)
	{
		looper_1 += 1;
		if(1)
		{
			double_2 = ceil ( double_2 ) ;
		}
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 / long_2;
		if(1)
		{
			int_1 = table_malloc(short_1,float_1);

			int_1 = int_2;
			return int_2;
		}
		int_2 = bmfs_disk_write(double_3,long_2,int_3,int_4);

		double_4 = double_2 * double_3;
		if(1)
		{
			double_4 = ldexp ( double_2 , int_3 ) ;
			return int_2;
		}
		if(1)
		{
			int_4 = bmfs_disk_seek(unsigned_int_1,char_1,int_5);

			long_1 = long_2 / long_1;
			return int_5;
		}
		double_2 = double_1 - double_1;
		char controller_7[1];
		scanf("%1s", controller_7);
		if( strcmp( controller_7, ".") < 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			unsigned int unsigned_int_1 = 0;
			long long_1 = 0;
			long long_2 = 0;
			short short_1 = 0;
			float float_1 = 0;
			int int_2 = 0;
			double double_3 = 0;
			int int_3 = 0;
			int int_4 = 0;
			double double_4 = 0;
			int int_5 = 0;
			float float_2 = 0;
			double double_6 = 0;
			int int_6 = 0;
			double double_5 = 0;
			double_4 = sqrt ( double_5 ) ;
			return int_5;
		}
		double_3 = fabs ( double_4 ) ;
		float_2 = table_free(double_6);

		int_2 = int_5;
		if(1)
		{
			int_4 = bmfs_disk_read(short_1,double_4,long_2);

			double_1 = sinh ( double_3 ) ;
			return int_6;
		}
		if(1)
		{
			int_5 = int_3;
			return int_5;
		}
		int_4 = int_3;
	}
	long_2 = long_1;
	return int_2;
}
int bmfs_table_realloc( double parameter_1,short parameter_2,char parameter_3)
{
	int int_1 = 0;
	char char_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	short short_2 = 0;
	double double_6 = 0;
	double double_7 = 0;
	double double_8 = 0;
	float float_1 = 0;
	if(1)
	{
		return int_1;
	}
	bmfs_table_hide_deleted(char_1);

	double_1 = pow ( double_1 , double_2 ) ;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_2;
	}
	long_1 = long_1 - long_2;
	long_3 = bmfs_table_previous(char_1);

	double_1 = sqrt ( double_3 ) ;
	long_3 = bmfs_table_find(double_1,char_1);

	double_3 = cos ( double_1 ) ;
	double_1 = asin ( double_3 ) ;
	double_3 = cos ( double_3 ) ;
	if(1)
	{
		return int_1;
	}
	int_3 = copy_over_data(int_4,short_1,unsigned_int_1,unsigned_int_1);

	double_2 = exp ( double_3 ) ;
	double_4 = pow ( double_1 , double_5 ) ;
	long_1 = get_block_size(short_1);

	int_4 = bmfs_table_push(int_2,long_3);

	int_2 = bmfs_table_free(short_2,long_2);

	double_5 = cos ( double_6 ) ;
	bmfs_table_entry_init(unsigned_int_1);

	short_2 = short_1 + short_1;
	double_7 = log10 ( double_7 ) ;
	double_6 = exp ( double_2 ) ;
	if(1)
	{
		return int_4;
	}
	double_6 = sinh ( double_1 ) ;
	char controller_6[3];
	scanf("%3s", controller_6);
	if( strcmp( controller_6, "`wJ") > 0)
	{
		return int_2;
	}
	double_8 = cos ( double_8 ) ;
	if(1)
	{
		return int_2;
	}
	bmfs_table_end(int_1);

	float_1 = float_1;
	return int_3;
}
unsigned int file_resize( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	double double_1 = 0;
	short short_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_2 = 0;
	int int_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_3 = 0;
	if(1)
	{
		return unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1;
	int_1 = bmfs_table_realloc(double_1,short_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	char controller_2[4];
	scanf("%4s", controller_2);
	if( strcmp( controller_2, "tKB9") > 0)
	{
		return unsigned_int_2;
	}
	double_2 = double_1;
	int_3 = int_2 * int_2;
	return unsigned_int_3;
}
int bmfs_file_write( int parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	int int_6 = 0;
	long long_2 = 0;
	int int_7 = 0;
	long long_3 = 0;
	float float_1 = 0;
	if(1)
	{
		return int_1;
	}
	double_1 = atan2 ( double_2 , double_1 ) ;
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "QA&f.") < 0)
	{
		unsigned_int_1 = file_resize(unsigned_int_1,long_1);

		double_4 = double_3 * double_2;
		if(1)
		{
			return int_2;
		}
	}
	int_3 = int_4;
	if(1)
	{
		return int_5;
	}
	int_6 = bmfs_disk_write(double_4,long_2,int_2,int_4);

	long_2 = long_2 / long_2;
	double_1 = floor ( double_4 ) ;
	if(1)
	{
		return int_1;
	}
	double_3 = pow ( double_3 , double_2 ) ;
	char controller_6[2];
	scanf("%2s", controller_6);
	if( strcmp( controller_6, "jk") < 0)
	{
		int_6 = int_7 - int_2;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		long long_1 = 0;
		double double_3 = 0;
		double double_4 = 0;
		int int_2 = 0;
		int int_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		int int_6 = 0;
		long long_2 = 0;
		int int_7 = 0;
		long long_3 = 0;
		float float_1 = 0;
		float_1 = float_1;
	}
	return int_7;
	int_1 = bmfs_file_seek(long_2,long_3,int_2);

}
void bmfs_file_set_mode( long parameter_1,short parameter_2)
{
	if(1)
	{
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		int_3 = int_1 - int_2;
	}
}
long bmfs_table_find( double parameter_1,char parameter_2)
{
	char char_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	float float_1 = 0;
	double double_4 = 0;
	bmfs_table_hide_deleted(char_1);

	double_1 = pow ( double_2 , double_3 ) ;
	double_1 = log ( double_2 ) ;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		char char_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		long long_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		float float_1 = 0;
		double double_4 = 0;
		long_1 = bmfs_table_next(double_1);

		double_3 = ceil ( double_4 ) ;
		char controller_1[5];
		scanf("%5s", controller_1);
		if( strcmp( controller_1, "?:Mrp") > 0)
		{
		}
		char controller_2[5];
		scanf("%5s", controller_2);
		if( strcmp( controller_2, "Nw%3o") > 0)
		{
			return long_2;
		}
	}
	return long_3;
	bmfs_table_begin(float_1);

}
long can_fit_entry( float parameter_1,float parameter_2)
{
	double double_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_2 = 0;
	char char_1 = 0;
	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		return long_2;
	}
	return long_3;
	long_2 = bmfs_table_find(double_2,char_1);

}
float add_entry( short parameter_1,float parameter_2,short parameter_3)
{
	float float_1 = 0;
	double double_1 = 0;
	long long_1 = 0;
	double double_2 = 0;
	float float_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return float_1;
	}
	double_1 = floor ( double_1 ) ;
	long_1 = can_fit_entry(float_1,float_1);

	double_2 = pow ( double_1 , double_2 ) ;
	if(1)
	{
		return float_2;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		return float_1;
	}
	double_3 = exp ( double_3 ) ;
	char controller_4[2];
	scanf("%2s", controller_4);
	if( strcmp( controller_4, "2E") > 0)
	{
		return float_1;
	}
	double_2 = sqrt ( double_3 ) ;
	int_1 = bmfs_entry_write(unsigned_int_1,unsigned_int_1);

	double_3 = log10 ( double_3 ) ;
	if(1)
	{
		return float_2;
	}
	return float_1;
	int_1 = bmfs_disk_seek(unsigned_int_2,char_1,int_2);

}
short entry_exists( char parameter_1,long parameter_2,float parameter_3,char parameter_4)
{
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	char char_1 = 0;
	double_1 = sqrt ( double_1 ) ;
	bmfs_entry_init();

	int_1 = int_2;
	double_2 = exp ( double_2 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "t:") == 0)
	{
		return short_1;
	}
	else
	{
		return short_2;
	}
	double_1 = find_entry(int_3,short_1,float_1,float_2,char_1,596);

}
char create_entry( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	int int_1 = 0;
	short short_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	char char_1 = 0;
	double double_2 = 0;
	short short_2 = 0;
	short short_3 = 0;
	int int_2 = 0;
	int int_3 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_4 = 0;
	short short_4 = 0;
	long long_2 = 0;
	short short_5 = 0;
	double double_5 = 0;
	int int_5 = 0;
	double double_6 = 0;
	float float_3 = 0;
	short short_6 = 0;
	int int_6 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_3 = 0;
	char char_4 = 0;
	double_1 = find_entry(int_1,short_1,float_1,float_2,char_1,952);

	double_2 = cosh ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		short_3 = short_2 + short_1;
	}
	int_1 = int_2 + int_3;
	if(1)
	{
		return char_2;
	}
	double_2 = atan2 ( double_2 , double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		return char_1;
	}
	int_3 = bmfs_header_read(int_2,long_1);

	double_3 = tan ( double_4 ) ;
	if(1)
	{
		return char_1;
	}
	int_4 = bmfs_path_split_root(char_1,short_4);

	long_1 = long_2 * long_1;
	bmfs_path_init(char_2);

	bmfs_path_set(unsigned_int_1,float_2,int_3);

	short_5 = entry_exists(char_1,long_1,float_2,char_2);

	double_5 = cosh ( double_5 ) ;
	int_5 = bmfs_entry_read(int_5,unsigned_int_1,56);

	double_3 = asin ( double_5 ) ;
	if(1)
	{
		return char_1;
	}
	double_6 = asin ( double_2 ) ;
	double_5 = ldexp ( double_3 , int_3 ) ;
	bmfs_header_init();

	long_1 = long_2;
	double_3 = asin ( double_3 ) ;
	bmfs_entry_init();

	float_3 = add_entry(short_3,float_3,short_6);

	int_6 = int_6 + int_1;
	int looper_2 = 0;
	while(looper_2 < 10)
	{
		looper_2 += 1;
		long_1 = long_1 / long_2;
		if(1)
		{
		}
		double_4 = sqrt ( double_5 ) ;
		double_3 = double_1;
		if(1)
		{
			return char_2;
		}
		int_2 = bmfs_disk_seek(unsigned_int_2,char_2,int_6);

		double_6 = tan ( double_1 ) ;
		char controller_7[4];
		scanf("%4s", controller_7);
		if( strcmp( controller_7, "^E=s") > 0)
		{
			return char_3;
		}
	}
	short_1 = short_4;
	if(1)
	{
		return char_3;
	}
	float_3 = float_2;
	for(int looper_3=0; looper_3<2;looper_3++)
	{
		char_4 = char_1 / char_3;
	}
	int_6 = int_5 - int_3;
	if(1)
	{
		return char_1;
	}
	short_3 = short_2;
	if(1)
	{
		return char_4;
	}
	return char_3;
}
unsigned int new_get_block_size( double parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "^") < 0)
	{
		return unsigned_int_1;
	}
	else
	{
		return unsigned_int_1;
	}
}
int bmfs_create_file( char parameter_1,short parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_2 = 0;
	long long_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_get_current_time();

	char_1 = create_entry(unsigned_int_1,int_2,int_3);

	double_1 = floor ( double_2 ) ;
	double_3 = double_1;
	if(1)
	{
		return int_3;
	}
	double_2 = log ( double_1 ) ;
	char_1 = char_2 * char_2;
	int_2 = int_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = new_get_block_size(double_3);

	bmfs_entry_init();

	double_3 = tanh ( double_4 ) ;
	double_5 = double_1;
	double_6 = tan ( double_1 ) ;
	if(1)
	{
		return int_3;
	}
	return int_1;
	int_3 = bmfs_allocate(unsigned_int_2,long_1,char_2);

	bmfs_entry_set_type(short_1,int_2);

}
unsigned int cmd_cp( float parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float float_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	short short_3 = 0;
	double double_4 = 0;
	int int_2 = 0;
	float float_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	char char_2 = 0;
	char char_3 = 0;
	long long_2 = 0;
	double double_8 = 0;
	double double_9 = 0;
	short short_4 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_5 = 0;
	float float_1 = 0;
	double double_10 = 0;
	float float_4 = 0;
	if(1)
	{
		double_1 = fmod ( double_2 , double_3 ) ;
		return unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		float float_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		short short_3 = 0;
		double double_4 = 0;
		int int_2 = 0;
		float float_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		char char_2 = 0;
		char char_3 = 0;
		long long_2 = 0;
		double double_8 = 0;
		double double_9 = 0;
		short short_4 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_5 = 0;
		float float_1 = 0;
		double double_10 = 0;
		float float_4 = 0;
		float_1 = float_1 + float_1;
		return unsigned_int_2;
	}
	if(1)
	{
		bmfs_file_init(float_2);

		short_2 = short_1 * short_2;
		return unsigned_int_3;
	}
	double_3 = cos ( double_2 ) ;
	int_1 = bmfs_open_file(unsigned_int_3,long_1,char_1);

	double_1 = atan2 ( double_1 , double_1 ) ;
	if(1)
	{
		short_3 = short_1 + short_1;
		double_4 = tan ( double_3 ) ;
		int_1 = bmfs_file_write(int_2,short_2,float_3,unsigned_int_2);

		double_4 = tan ( double_2 ) ;
		return unsigned_int_4;
	}
	double_1 = tanh ( double_5 ) ;
	float_2 = float_3;
	double_5 = asin ( double_4 ) ;
	double_5 = fmod ( double_3 , double_6 ) ;
	if(1)
	{
		double_6 = log ( double_7 ) ;
		double_6 = atan ( double_5 ) ;
		char_2 = char_3;
		return unsigned_int_2;
	}
	long_1 = long_2;
	if(1)
	{
		double_2 = atan2 ( double_7 , double_8 ) ;
		double_8 = asin ( double_6 ) ;
		double_9 = asin ( double_6 ) ;
		return unsigned_int_1;
	}
	double_9 = double_1 + double_1;
	int_1 = bmfs_create_file(char_2,short_4);

	long_3 = long_1 / long_3;
	double_3 = atan2 ( double_7 , double_1 ) ;
	if(1)
	{
		double_4 = ldexp ( double_3 , int_1 ) ;
		double_4 = asin ( double_6 ) ;
		short_3 = short_4 * short_3;
		return unsigned_int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		float float_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		short short_3 = 0;
		double double_4 = 0;
		int int_2 = 0;
		float float_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		char char_2 = 0;
		char char_3 = 0;
		long long_2 = 0;
		double double_8 = 0;
		double double_9 = 0;
		short short_4 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_5 = 0;
		float float_1 = 0;
		double double_10 = 0;
		float float_4 = 0;
		looper_1 += 1;
		double_10 = ceil ( double_7 ) ;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
			double_2 = double_6;
			bmfs_file_close(char_1);

			double_9 = tan ( double_10 ) ;
			unsigned_int_4 = unsigned_int_5;
			double_3 = ceil ( double_1 ) ;
			double_5 = bmfs_strerror(int_2);

			short_1 = short_3;
			return unsigned_int_1;
		}
		double_3 = fmod ( double_7 , double_5 ) ;
		float_3 = float_4;
		if(1)
		{
			if(1)
			{
				double_5 = cos ( double_8 ) ;
			}
			double_7 = exp ( double_5 ) ;
			double_10 = tan ( double_6 ) ;
			double_3 = log ( double_10 ) ;
			char_2 = char_3 + char_3;
			long_1 = long_2 - long_1;
			return unsigned_int_5;
		}
	}
	double_8 = ldexp ( double_2 , int_2 ) ;
	unsigned_int_4 = unsigned_int_3 / unsigned_int_3;
	double_3 = double_3 * double_9;
	return unsigned_int_2;
	bmfs_file_set_mode(long_2,short_3);

}
int bmfs_file_seek( long parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_2 = 0;
	int int_4 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_5 = 0;
	long long_3 = 0;
	double double_1 = 0;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_1);

	long_1 = long_2;
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_2 = 0;
		int int_4 = 0;
		double double_3 = 0;
		double double_4 = 0;
		int int_5 = 0;
		long long_3 = 0;
		double double_1 = 0;
		if(1)
		{
			return int_2;
		}
		long_1 = long_1 - long_3;
	}
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_2 = 0;
		int int_4 = 0;
		double double_3 = 0;
		double double_4 = 0;
		int int_5 = 0;
		long long_3 = 0;
		double double_1 = 0;
		if(1)
		{
			return int_3;
		}
		double_1 = pow ( double_1 , double_2 ) ;
	}
	else
	{
		return int_4;
	}
	double_2 = double_2 / double_3;
	double_4 = double_3 / double_2;
	if(1)
	{
		return int_5;
	}
	return int_5;
}
int bmfs_file_read( char parameter_1,unsigned int parameter_3,short parameter_4)
{
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_file_seek(long_1,long_2,int_2);

	double_1 = atan2 ( double_1 , double_2 ) ;
	char controller_2[4];
	scanf("%4s", controller_2);
	if( strcmp( controller_2, "N44e") < 0)
	{
		return int_2;
	}
	char controller_3[3];
	scanf("%3s", controller_3);
	if( strcmp( controller_3, "$,V") > 0)
	{
		double_3 = sinh ( double_3 ) ;
	}
	double_3 = pow ( double_2 , double_3 ) ;
	float_2 = float_1 - float_1;
	if(1)
	{
		return int_1;
	}
	int_1 = bmfs_disk_read(short_1,double_4,long_2);

	double_5 = atan2 ( double_3 , double_1 ) ;
	if(1)
	{
		double_2 = log10 ( double_4 ) ;
	}
	return int_1;
}
int bmfs_file_eof()
{
	int int_1 = 0;
	int int_2 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "0en") > 0)
	{
		return int_1;
	}
	else
	{
		return int_2;
	}
}
int bmfs_get_current_time()
{
	int int_1 = 0;
	int int_2 = 0;
	int_1 = int_2;
	return int_2;
}
int bmfs_entry_save( short parameter_1,int parameter_2)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_2 = 0;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_2);

	double_1 = double_1;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "`C") < 0)
	{
		return int_2;
	}
	int_1 = bmfs_get_current_time();

	double_2 = double_2 - double_1;
	if(1)
	{
		return int_2;
	}
	char_1 = char_2;
	if(1)
	{
		return int_1;
	}
	return int_1;
	int_2 = bmfs_entry_write(unsigned_int_1,unsigned_int_1);

}
long file_can_write( float parameter_1)
{
	long long_1 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "^1j") > 0)
	{
		return long_1;
	}
	return long_1;
}
void bmfs_file_close( char parameter_1)
{
	int int_1 = 0;
	short short_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	long long_1 = 0;
	float float_1 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "-@.") > 0)
	{
	}
	int_1 = bmfs_entry_save(short_1,int_2);

	double_1 = double_1;
	long_1 = file_can_write(float_1);

}
int bmfs_file_import( float parameter_1)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int_1 = bmfs_entry_read(int_1,unsigned_int_1,544);

	int_1 = int_2;
	if(1)
	{
		return int_2;
	}
	long_2 = long_1 / long_2;
	return int_2;
}
int find_file( double parameter_1,double parameter_2,double parameter_3,short parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_1 = 0;
	int int_4 = 0;
	float float_1 = 0;
	int int_5 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_2 = 0;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = sinh ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 7)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		long long_1 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_1 = 0;
		int int_4 = 0;
		float float_1 = 0;
		int int_5 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_2 = 0;
		looper_1 += 1;
		double_1 = cos ( double_1 ) ;
		double_1 = sinh ( double_1 ) ;
		short_2 = short_1 + short_1;
		int_1 = int_2;
		char controller_1[1];
		scanf("%1s", controller_1);
		if( strcmp( controller_1, "^") > 0)
		{
			return int_3;
		}
		double_1 = is_entry(int_2,long_1,int_1);

		double_1 = log10 ( double_1 ) ;
		char controller_2[5];
		scanf("%5s", controller_2);
		if( strcmp( controller_2, "lj.+R") > 0)
		{
			if(1)
			{
				return int_3;
			}
		}
		if(1)
		{
			return int_1;
		}
		int_3 = bmfs_disk_seek(unsigned_int_3,char_1,int_4);

		int_3 = bmfs_file_import(float_1);

		double_2 = sqrt ( double_2 ) ;
	}
	return int_5;
}
short bmfs_entry_is_deleted( short parameter_1)
{
	double double_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return short_1;
	}
	return short_2;
}
double is_entry( int parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	double double_3 = 0;
	short short_1 = 0;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		return double_2;
	}
	float_1 = float_1;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		looper_1 += 1;
		if(1)
		{
			return double_2;
		}
		double_1 = tan ( double_2 ) ;
	}
	if(1)
	{
		return double_2;
	}
	return double_3;
	short_1 = bmfs_entry_is_deleted(short_1);

}
double find_entry( int parameter_1,short parameter_2,float parameter_3,float parameter_4,char parameter_5,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double_1 = cos ( double_2 ) ;
	char controller4vul_8[2];
	scanf("%2s", controller4vul_8);
	if( strcmp( controller4vul_8, "g,") == 0)
	{
		int_1 = bmfs_entry_read(int_1,unsigned_int_1,uni_para);

		return double_3;
	}
	float_1 = float_2;
	double_3 = cosh ( double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 3)
	{
		looper_1 += 1;
		double_1 = fmod ( double_3 , double_5 ) ;
		unsigned_int_1 = unsigned_int_1;
		char controller_1[1];
		scanf("%1s", controller_1);
		if( strcmp( controller_1, "L") > 0)
		{
			return double_3;
		}
		char controller_2[1];
		scanf("%1s", controller_2);
		if( strcmp( controller_2, "/") > 0)
		{
			return double_5;
		}
		double_1 = fabs ( double_4 ) ;
	}
	return double_3;
}
int is_separator( char parameter_1)
{
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "d3XHO") < 0)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
int bmfs_path_split_root( char parameter_1,short parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	char char_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_4 = 0;
	int int_2 = 0;
	long long_1 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_4 = 0;
	short short_3 = 0;
	double_1 = double_1;
	double_2 = log ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1;
	double_3 = log10 ( double_3 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		char char_1 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_2 = 0;
		long long_1 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_4 = 0;
		short short_3 = 0;
		double_3 = acos ( double_2 ) ;
		unsigned_int_3 = unsigned_int_1 - unsigned_int_2;
	}
	double_2 = floor ( double_3 ) ;
	int_1 = is_separator(char_1);

	short_2 = short_1 - short_2;
	double_1 = asin ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 6)
	{
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		char char_1 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_2 = 0;
		long long_1 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_4 = 0;
		short short_3 = 0;
		looper_1 += 1;
		char controller_2[1];
		scanf("%1s", controller_2);
		if( strcmp( controller_2, "t") < 0)
		{
			char controller_3[3];
			scanf("%3s", controller_3);
			if( strcmp( controller_3, "k#A") < 0)
			{
				double_2 = log10 ( double_3 ) ;
				unsigned_int_4 = unsigned_int_4 - unsigned_int_1;
			}
			else
			{
				double_4 = double_3;
				double_2 = double_4;
				return int_2;
			}
		}
		else
		{
			double_4 = fmod ( double_1 , double_2 ) ;
		}
		short_1 = short_2 / short_3;
	}
	unsigned_int_1 = unsigned_int_4;
	long_1 = long_1;
	return int_3;
}
void bmfs_path_set( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	double_1 = double_2;
	char_1 = char_1;
}
void bmfs_path_init( char parameter_1)
{
	double double_1 = 0;
	double_1 = double_1 * double_1;
	double_1 = sqrt ( double_1 ) ;
}
int bmfs_entry_read( int parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	int int_3 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_8 = 0;
	int int_4 = 0;
	double double_9 = 0;
	int int_5 = 0;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_2 = sqrt ( double_1 ) ;
	double_1 = atan ( double_2 ) ;
	char controller4vul_9[4];
	scanf("%4s", controller4vul_9);
	if( strcmp( controller4vul_9, "HA1[") < 0)
	{
		int_2 = bmfs_disk_tell(unsigned_int_1,char_1,uni_para);

		return int_3;
	}
	short_2 = short_1 / short_1;
	double_1 = double_3 * double_4;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	double_2 = pow ( double_5 , double_6 ) ;
	double_1 = tanh ( double_7 ) ;
	float_1 = float_2;
	float_2 = float_1 / float_2;
	double_3 = double_5;
	double_1 = double_8 / double_4;
	int_4 = int_1;
	double_5 = ceil ( double_5 ) ;
	short_2 = short_2 / short_1;
	double_9 = atan2 ( double_8 , double_3 ) ;
	double_9 = log ( double_8 ) ;
	char controller_3[2];
	scanf("%2s", controller_3);
	if( strcmp( controller_3, "F<") > 0)
	{
		return int_4;
	}
	double_8 = double_1 * double_1;
	return int_5;
}
void bmfs_file_set_disk( int parameter_1,double parameter_2)
{
	if(1)
	{
		double double_1 = 0;
		double_1 = sqrt ( double_1 ) ;
	}
}
long open_file( short parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_2 = 0;
	char char_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	long long_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	long long_2 = 0;
	short short_2 = 0;
	short short_3 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_4 = 0;
	float float_1 = 0;
	long long_4 = 0;
	float float_2 = 0;
	char char_2 = 0;
	long long_5 = 0;
	double double_5 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double double_6 = 0;
	float float_3 = 0;
	char char_3 = 0;
	long long_6 = 0;
	long long_7 = 0;
	char char_4 = 0;
	unsigned int unsigned_int_5 = 0;
	double double_7 = 0;
	unsigned_int_2 = unsigned_int_1 / unsigned_int_2;
	int_1 = int_1 - int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	int_2 = bmfs_path_split_root(char_1,short_1);

	double_1 = acos ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	double_2 = double_2 + double_1;
	double_3 = log ( double_4 ) ;
	int_1 = bmfs_header_read(int_2,long_2);

	double_1 = log ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	short_2 = short_3;
	if(1)
	{
		return long_3;
	}
	bmfs_path_set(unsigned_int_4,float_1,int_1);

	double_1 = exp ( double_1 ) ;
	long_4 = long_4;
	double_3 = find_entry(int_2,short_1,float_2,float_2,char_2,731);

	int_1 = int_2 * int_2;
	if(1)
	{
		return long_5;
	}
	bmfs_header_init();

	double_5 = double_3 * double_3;
	int_3 = bmfs_entry_read(int_4,unsigned_int_4,289);

	double_5 = exp ( double_4 ) ;
	double_5 = atan ( double_6 ) ;
	bmfs_entry_init();

	bmfs_path_init(char_2);

	float_3 = float_3;
	char_1 = char_3;
	int looper_2 = 0;
	while(looper_2 < 2)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_2 = 0;
		char char_1 = 0;
		short short_1 = 0;
		double double_1 = 0;
		long long_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		long long_2 = 0;
		short short_2 = 0;
		short short_3 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_4 = 0;
		float float_1 = 0;
		long long_4 = 0;
		float float_2 = 0;
		char char_2 = 0;
		long long_5 = 0;
		double double_5 = 0;
		int int_3 = 0;
		int int_4 = 0;
		double double_6 = 0;
		float float_3 = 0;
		char char_3 = 0;
		long long_6 = 0;
		long long_7 = 0;
		char char_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_7 = 0;
		looper_2 += 1;
		double_6 = atan ( double_5 ) ;
		if(1)
		{
		}
		int_2 = bmfs_disk_seek(unsigned_int_3,char_3,int_2);

		double_3 = asin ( double_5 ) ;
		long_6 = long_7;
		if(1)
		{
			return long_6;
		}
		int_1 = find_file(double_1,double_6,double_2,short_1,float_3);

		double_7 = ldexp ( double_5 , int_2 ) ;
		char controller_7[4];
		scanf("%4s", controller_7);
		if( strcmp( controller_7, "~ *O") > 0)
		{
			return long_2;
		}
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		return long_2;
	}
	bmfs_file_set_disk(int_1,double_1);

	double_4 = fmod ( double_4 , double_4 ) ;
	char_4 = char_2 + char_3;
	char controller_10[3];
	scanf("%3s", controller_10);
	if( strcmp( controller_10, "19@") > 0)
	{
		return long_3;
	}
	unsigned_int_1 = unsigned_int_1 / unsigned_int_5;
	return long_7;
}
int bmfs_open_file( unsigned int parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 0;
	long long_1 = 0;
	short short_1 = 0;
	long long_2 = 0;
	int int_2 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "(9k") > 0)
	{
		return int_1;
	}
	return int_1;
	long_1 = open_file(short_1,long_2,int_2);

}
void bmfs_file_init( float parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	float float_2 = 0;
	double_1 = ceil ( double_2 ) ;
	int_1 = int_1;
	bmfs_entry_init();

	float_1 = float_1 / float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_3;
	float_2 = float_2 * float_2;
}
int cmd_cat( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 0;
	double double_1 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	int int_3 = 0;
	long long_1 = 0;
	char char_2 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	long long_2 = 0;
	short_1 = short_1;
	double_1 = double_1 / double_1;
	int looper_1 = 0;
	while(looper_1 < 9)
	{
		short short_1 = 0;
		double double_1 = 0;
		float float_1 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		int int_1 = 0;
		int int_2 = 0;
		char char_1 = 0;
		int int_3 = 0;
		long long_1 = 0;
		char char_2 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_4 = 0;
		double double_5 = 0;
		long long_2 = 0;
		looper_1 += 1;
		bmfs_file_init(float_1);

		double_1 = tanh ( double_2 ) ;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_2;
		char controller_1[3];
		scanf("%3s", controller_1);
		if( strcmp( controller_1, "&j,") < 0)
		{
			double_3 = double_2;
			int_1 = int_1;
			double_4 = fabs ( double_1 ) ;
			return int_2;
		}
		int looper_2 = 0;
		while(looper_2 < 4)
		{
			looper_2 += 1;
			double_1 = exp ( double_3 ) ;
			double_5 = log ( double_2 ) ;
			if(1)
			{
				int_1 = bmfs_file_read(char_1,unsigned_int_1,short_1);

				double_5 = atan2 ( double_1 , double_1 ) ;
				double_3 = tan ( double_2 ) ;
				double_3 = bmfs_strerror(int_2);

				int_2 = bmfs_file_eof();

				int_3 = int_1;
				return int_2;
			}
			double_4 = double_2;
			char controller_3[1];
			scanf("%1s", controller_3);
			if( strcmp( controller_3, "K") > 0)
			{
				int_2 = bmfs_open_file(unsigned_int_1,long_1,char_1);

				bmfs_file_close(char_2);

				double_4 = floor ( double_4 ) ;
				double_5 = cosh ( double_1 ) ;
				return int_2;
			}
		}
		double_5 = tan ( double_1 ) ;
		long_1 = long_2;
	}
	return int_3;
}
void bmfs_table_set_count( float parameter_1,int parameter_2)
{
	double double_1 = 0;
	int int_1 = 0;
	double_1 = ldexp ( double_1 , int_1 ) ;
}
int bmfs_header_check( unsigned int parameter_1)
{
	int int_1 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "kpg)") > 0)
	{
		return int_1;
	}
	return int_1;
}
int bmfs_import( long parameter_1)
{
	int int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_2 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double double_3 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	int int_5 = 0;
	float float_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_6 = 0;
	unsigned int unsigned_int_4 = 0;
	short short_2 = 0;
	double double_5 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "/^Ah") < 0)
	{
		return int_1;
	}
	long_2 = long_1 / long_2;
	if(1)
	{
		return int_2;
	}
	bmfs_table_set_count(float_1,int_1);

	double_1 = asin ( double_2 ) ;
	char controller_3[2];
	scanf("%2s", controller_3);
	if( strcmp( controller_3, ")L") > 0)
	{
		return int_3;
	}
	long_1 = long_2 - long_1;
	if(1)
	{
		return int_4;
	}
	double_1 = cosh ( double_3 ) ;
	short_1 = short_1;
	int_4 = bmfs_disk_seek(unsigned_int_1,char_1,int_5);

	float_2 = float_2;
	double_2 = sinh ( double_4 ) ;
	int_5 = bmfs_header_check(unsigned_int_2);

	unsigned_int_1 = unsigned_int_3 / unsigned_int_1;
	int_6 = bmfs_header_read(int_1,long_2);

	bmfs_table_set_offset(double_3,long_2);

	bmfs_table_set_max_offset(unsigned_int_4,short_1);

	double_2 = log10 ( double_1 ) ;
	short_2 = short_1 * short_1;
	double_4 = atan ( double_5 ) ;
	return int_3;
	bmfs_table_set_min_offset(short_2,double_3);

}
int bmfs_export( unsigned int parameter_1)
{
	int int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_4 = 0;
	double double_4 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "dy]s") > 0)
	{
		return int_1;
	}
	int_1 = bmfs_table_save_all(long_1);

	double_1 = double_1;
	int_2 = bmfs_disk_seek(unsigned_int_1,char_1,int_1);

	double_1 = sqrt ( double_2 ) ;
	if(1)
	{
		return int_2;
	}
	double_3 = floor ( double_1 ) ;
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "aiaCv") < 0)
	{
		return int_3;
	}
	short_1 = short_2;
	char controller_4[4];
	scanf("%4s", controller_4);
	if( strcmp( controller_4, "h+oi") > 0)
	{
		return int_2;
	}
	return int_3;
	int_4 = bmfs_header_write(double_4,int_4);

}
void bmfs_filedisk_done( short parameter_1)
{
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "H.T") < 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		double_1 = atan2 ( double_2 , double_2 ) ;
		double_1 = ceil ( double_2 ) ;
	}
}
int bmfs_header_write( double parameter_1,int parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_3 = 0;
	double double_1 = 0;
	long long_3 = 0;
	int int_4 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_3 = 0;
	long long_4 = 0;
	double double_5 = 0;
	char char_4 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_6 = 0;
	double double_7 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_5 = 0;
	int_1 = int_1 * int_2;
	short_1 = short_2;
	long_2 = long_1 - long_2;
	int_3 = bmfs_disk_write(double_1,long_3,int_1,int_4);

	double_2 = floor ( double_3 ) ;
	char_2 = char_1 - char_2;
	double_4 = cos ( double_1 ) ;
	unsigned_int_1 = bmfs_crc32(double_1,double_4,char_3);

	long_1 = long_2 / long_4;
	double_5 = floor ( double_2 ) ;
	double_5 = cos ( double_1 ) ;
	double_1 = atan2 ( double_3 , double_1 ) ;
	bmfs_encode_uint64(char_4);

	double_3 = ceil ( double_1 ) ;
	bmfs_encode_uint32(int_1);

	unsigned_int_2 = unsigned_int_2 / unsigned_int_1;
	double_5 = double_1 / double_5;
	double_6 = tanh ( double_7 ) ;
	unsigned_int_3 = unsigned_int_2;
	short_2 = short_1;
	short_1 = short_1;
	double_2 = atan ( double_7 ) ;
	double_1 = exp ( double_6 ) ;
	int_2 = int_4 * int_2;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_5;
	}
	return int_4;
}
float next_entry( double parameter_1)
{
	float float_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int int_2 = 0;
	int int_3 = 0;
	short short_1 = 0;
	double double_6 = 0;
	short short_2 = 0;
	short short_3 = 0;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	double_3 = double_1 - double_2;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_1);

	double_4 = double_3;
	double_3 = sqrt ( double_4 ) ;
	double_3 = double_5;
	if(1)
	{
		return float_2;
	}
	int_2 = bmfs_table_entry_read(int_3,short_1);

	double_6 = double_4 * double_3;
	if(1)
	{
		return float_1;
	}
	short_3 = short_2 - short_2;
	return float_2;
}
long bmfs_table_next( double parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	float float_1 = 0;
	double double_3 = 0;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		double double_1 = 0;
		double double_2 = 0;
		long long_1 = 0;
		float float_1 = 0;
		double double_3 = 0;
		double_1 = bmfs_table_entry_is_deleted(double_2);

		double_3 = double_3;
		char controller_1[2];
		scanf("%2s", controller_1);
		if( strcmp( controller_1, "/)") < 0)
		{
			return long_1;
		}
		if(1)
		{
			return long_1;
		}
	}
	return long_1;
	float_1 = next_entry(double_2);

}
void bmfs_table_view_deleted( double parameter_1)
{
	double double_1 = 0;
	double_1 = log ( double_1 ) ;
}
void bmfs_table_begin( float parameter_1)
{
	double double_1 = 0;
	double_1 = fabs ( double_1 ) ;
}
int bmfs_table_save_all( long parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	long long_1 = 0;
	int int_4 = 0;
	char char_1 = 0;
	float float_3 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = int_2;
	double_3 = double_1 / double_2;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		float float_1 = 0;
		float float_2 = 0;
		long long_1 = 0;
		int int_4 = 0;
		char char_1 = 0;
		float float_3 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int_2 = bmfs_table_save(float_1);

		int_2 = int_1 + int_3;
		if(1)
		{
		}
		bmfs_table_begin(float_2);

		long_1 = bmfs_table_next(double_3);

		double_3 = fmod ( double_2 , double_1 ) ;
		bmfs_table_view_deleted(double_2);

		int_4 = int_2 * int_2;
		if(1)
		{
			int int_1 = 0;
			int int_2 = 0;
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			long long_1 = 0;
			int int_4 = 0;
			char char_1 = 0;
			float float_3 = 0;
			int int_3 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned_int_1 = unsigned_int_1;
			return int_4;
		}
		bmfs_table_hide_deleted(char_1);

		float_3 = float_3 / float_2;
	}
	float_1 = float_3;
	return int_2;
}
int bmfs_disk_tell( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_1 = 0;
	char * vul_var;
	if(1)
	{
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_1 = 0;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 776)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_1 = pow ( double_1 , double_2 ) ;
	}
	double_3 = fmod ( double_4 , double_2 ) ;
}
void bmfs_memcpy(unsigned int parameter_2,short parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double_1 = cos ( double_2 ) ;
	double_1 = cosh ( double_3 ) ;
	for(int looper_1=0; looper_1<2;looper_1++)
	{
		double_2 = floor ( double_2 ) ;
	}
}
int bmfs_entry_write( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	char char_2 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_1 = 0;
	long long_4 = 0;
	double double_4 = 0;
	float float_2 = 0;
	int int_2 = 0;
	int_1 = bmfs_disk_tell(unsigned_int_1,char_1,733);

	unsigned_int_2 = unsigned_int_1;
	long_1 = long_2;
	double_2 = double_1 - double_2;
	double_1 = double_1 - double_3;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	bmfs_encode_uint64(char_2);

	long_3 = long_2 + long_2;
	bmfs_memcpy(unsigned_int_3,short_1);

	bmfs_encode_uint32(int_1);

	double_2 = double_1 - double_2;
	double_3 = atan ( double_2 ) ;
	float_1 = float_1;
	int_1 = bmfs_disk_write(double_3,long_2,int_1,int_1);

	double_2 = tan ( double_2 ) ;
	long_4 = long_1;
	double_3 = tanh ( double_4 ) ;
	unsigned_int_2 = bmfs_crc32(double_3,double_1,char_2);

	double_3 = tanh ( double_2 ) ;
	double_2 = fmod ( double_1 , double_2 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "W~") < 0)
	{
		return int_1;
	}
	int_1 = int_1 + int_1;
	float_2 = float_1;
	char controller_2[3];
	scanf("%3s", controller_2);
	if( strcmp( controller_2, ",6Z") < 0)
	{
		return int_2;
	}
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "v") > 0)
	{
		return int_1;
	}
	int_2 = int_2 - int_2;
	return int_1;
}
int bmfs_table_entry_write( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	int int_3 = 0;
	short short_1 = 0;
	double double_4 = 0;
	short short_2 = 0;
	short short_3 = 0;
	int int_4 = 0;
	bmfs_encode_uint32(int_1);

	double_3 = double_1 * double_2;
	int_1 = bmfs_disk_write(double_2,long_1,int_1,int_2);

	double_2 = sinh ( double_1 ) ;
	char_3 = char_1 / char_2;
	char_2 = char_2;
	int_3 = bmfs_table_entry_checksum(short_1);

	double_1 = log ( double_4 ) ;
	bmfs_encode_uint64(char_1);

	double_4 = exp ( double_3 ) ;
	short_3 = short_2 * short_1;
	if(1)
	{
		return int_4;
	}
	char controller_2[3];
	scanf("%3s", controller_2);
	if( strcmp( controller_2, "{n7") > 0)
	{
		return int_3;
	}
	return int_2;
}
int bmfs_table_save( float parameter_1)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_3 = 0;
	float float_1 = 0;
	int int_4 = 0;
	int int_5 = 0;
	char char_3 = 0;
	if(1)
	{
		return int_1;
	}
	double_1 = ldexp ( double_2 , int_1 ) ;
	char_1 = char_2;
	int_1 = int_1 * int_1;
	int_2 = bmfs_table_entry_write(unsigned_int_1,char_2);

	double_2 = atan ( double_1 ) ;
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "*P") < 0)
	{
		return int_3;
	}
	float_1 = float_1;
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "j") < 0)
	{
		return int_4;
	}
	return int_5;
	int_2 = bmfs_disk_seek(unsigned_int_1,char_3,int_4);

}
void bmfs_table_entry_copy( float parameter_1,double parameter_2)
{
	short short_1 = 0;
	short short_2 = 0;
	short short_3 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	short_2 = short_1 / short_2;
	short_3 = short_3 + short_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = exp ( double_1 ) ;
}
int bmfs_table_push( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	bmfs_table_end(int_1);

	double_1 = tanh ( double_2 ) ;
	int_1 = bmfs_table_save(float_1);

	double_1 = tan ( double_1 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, ":c") > 0)
	{
		return int_1;
	}
	double_3 = sinh ( double_4 ) ;
	return int_1;
	bmfs_table_entry_copy(float_1,double_1);

}
double bmfs_table_entry_is_deleted( double parameter_1)
{
	double double_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "T}W#7") < 0)
	{
		return double_1;
	}
	return double_1;
}
void bmfs_encode_uint32( int parameter_1)
{
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_3 = 0;
	char_3 = char_1 + char_2;
	double_1 = atan ( double_2 ) ;
	float_1 = float_1 * float_2;
	int_1 = int_2;
	double_3 = cosh ( double_3 ) ;
}
void bmfs_encode_uint64( char parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float float_1 = 0;
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	float float_2 = 0;
	double double_5 = 0;
	unsigned_int_1 = unsigned_int_1 / unsigned_int_2;
	float_1 = float_1;
	int_1 = int_1;
	double_1 = exp ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	double_1 = log ( double_2 ) ;
	double_4 = atan ( double_3 ) ;
	float_2 = float_2;
	double_1 = exp ( double_5 ) ;
}
int bmfs_table_entry_checksum( short parameter_1)
{
	double double_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_5 = 0;
	int int_3 = 0;
	double_1 = tanh ( double_1 ) ;
	bmfs_encode_uint64(char_1);

	double_2 = ldexp ( double_1 , int_1 ) ;
	bmfs_encode_uint32(int_2);

	double_2 = fmod ( double_3 , double_4 ) ;
	unsigned_int_1 = bmfs_crc32(double_1,double_1,char_1);

	int_1 = int_2;
	double_3 = cosh ( double_5 ) ;
	return int_3;
}
int bmfs_table_entry_read( int parameter_1,short parameter_2)
{
	float float_1 = 0;
	long long_1 = 0;
	int int_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	short short_2 = 0;
	int int_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float_1 = bmfs_decode_uint32(long_1);

	int_1 = bmfs_table_entry_checksum(short_1);

	double_1 = acos ( double_1 ) ;
	double_1 = fabs ( double_2 ) ;
	int_1 = bmfs_disk_read(short_2,double_2,long_1);

	double_2 = atan2 ( double_2 , double_1 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "YL") < 0)
	{
		return int_2;
	}
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "(tzOE") < 0)
	{
		return int_2;
	}
	double_2 = ldexp ( double_3 , int_3 ) ;
	long_2 = bmfs_decode_uint64(double_3);

	double_1 = fabs ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_3 = tanh ( double_3 ) ;
	if(1)
	{
		return int_2;
	}
	return int_2;
}
double prev_entry( short parameter_1)
{
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_2 = 0;
	int int_4 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	long long_1 = 0;
	short short_1 = 0;
	if(1)
	{
		return double_1;
	}
	int_3 = int_1 - int_2;
	double_2 = fabs ( double_2 ) ;
	int_4 = int_2 / int_4;
	char_2 = char_1 * char_1;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_3);

	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return double_3;
	}
	long_1 = long_1 - long_1;
	if(1)
	{
		return double_3;
	}
	return double_3;
	int_3 = bmfs_table_entry_read(int_4,short_1);

}
long bmfs_table_previous( char parameter_1)
{
	double double_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_3 = 0;
	double double_2 = 0;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 0;
		short short_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_3 = 0;
		double double_2 = 0;
		double_1 = prev_entry(short_1);

		double_1 = atan ( double_2 ) ;
		char controller_1[3];
		scanf("%3s", controller_1);
		if( strcmp( controller_1, "$op") > 0)
		{
			return long_1;
		}
		char controller_2[3];
		scanf("%3s", controller_2);
		if( strcmp( controller_2, "Ksp") > 0)
		{
			return long_2;
		}
	}
	return long_1;
	double_3 = bmfs_table_entry_is_deleted(double_1);

}
void bmfs_table_hide_deleted( char parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	int_1 = int_2;
}
void bmfs_table_end( int parameter_1)
{
	short short_1 = 0;
	short short_2 = 0;
	short_2 = short_1 + short_2;
}
long get_block_size( short parameter_1)
{
	long long_1 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "c E&") > 0)
	{
		return long_1;
	}
	else
	{
		return long_1;
	}
}
double to_block_size( double parameter_1,short parameter_2)
{
	long long_1 = 0;
	long long_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	long_1 = long_2;
	double_1 = cosh ( double_1 ) ;
	return double_2;
	long_2 = get_block_size(short_1);

}
int bmfs_table_alloc( unsigned int parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_4 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_3 = 0;
	float float_2 = 0;
	float float_3 = 0;
	float float_4 = 0;
	long long_3 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "M") > 0)
	{
		return int_1;
	}
	bmfs_table_hide_deleted(char_1);

	char_2 = char_1 + char_1;
	float_1 = float_1;
	double_1 = fmod ( double_2 , double_3 ) ;
	double_2 = to_block_size(double_3,short_1);

	int_1 = bmfs_table_push(int_1,long_1);

	double_3 = tan ( double_1 ) ;
	double_3 = floor ( double_2 ) ;
	long_2 = bmfs_table_previous(char_1);

	double_3 = log10 ( double_4 ) ;
	bmfs_table_end(int_2);

	double_1 = acos ( double_1 ) ;
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, ",#R`A") > 0)
	{
		int int_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_4 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_3 = 0;
		float float_2 = 0;
		float float_3 = 0;
		float float_4 = 0;
		long long_3 = 0;
		long_3 = long_1 + long_2;
	}
	char controller_3[4];
	scanf("%4s", controller_3);
	if( strcmp( controller_3, "V.$U") < 0)
	{
		return int_1;
	}
	bmfs_table_entry_init(unsigned_int_1);

	int_2 = int_2 * int_3;
	char controller_4[4];
	scanf("%4s", controller_4);
	if( strcmp( controller_4, "(n}w") > 0)
	{
		return int_2;
	}
	float_4 = float_2 + float_3;
	return int_2;
}
int bmfs_allocate( unsigned int parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_2 = 0;
	return int_1;
	int_1 = bmfs_table_alloc(unsigned_int_1,short_1,unsigned_int_2);

}
void bmfs_entry_set_type( short parameter_1,int parameter_2)
{
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	long_1 = long_1;
	{
		long long_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_1 = 0;
		unsigned_int_1 = unsigned_int_2;
		double_1 = pow ( double_1 , double_1 ) ;
	}
}
void bmfs_entry_init()
{
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	for(int looper_1=0; looper_1<2;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = log10 ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = cos ( double_1 ) ;
	double_3 = tanh ( double_3 ) ;
	char_2 = char_1 / char_1;
	double_4 = log10 ( double_5 ) ;
	double_5 = cos ( double_1 ) ;
	double_6 = double_5;
}
void bmfs_table_set_max_offset( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 0;
	int_1 = int_1;
}
void bmfs_table_set_min_offset( short parameter_1,double parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = sinh ( double_2 ) ;
}
void bmfs_table_set_offset( double parameter_1,long parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = double_2;
}
int bmfs_format( char parameter_1,long parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	double double_3 = 0;
	short short_1 = 0;
	int int_3 = 0;
	double double_4 = 0;
	long long_2 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_2 = 0;
	short short_3 = 0;
	double double_5 = 0;
	char char_2 = 0;
	short short_4 = 0;
	int_2 = int_1 + int_1;
	bmfs_entry_init();

	double_1 = double_2;
	int_2 = bmfs_allocate(unsigned_int_1,long_1,char_1);

	double_2 = cos ( double_1 ) ;
	double_3 = sqrt ( double_3 ) ;
	double_2 = atan ( double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	bmfs_table_set_offset(double_1,long_1);

	bmfs_table_set_max_offset(unsigned_int_1,short_1);

	int_3 = int_2 + int_1;
	double_4 = cosh ( double_3 ) ;
	long_2 = long_3;
	double_3 = fmod ( double_3 , double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return int_2;
	}
	double_1 = acos ( double_2 ) ;
	if(1)
	{
		return int_3;
	}
	double_2 = tanh ( double_3 ) ;
	if(1)
	{
		return int_3;
	}
	bmfs_table_set_min_offset(short_2,double_3);

	short_1 = short_1 / short_3;
	char controller_4[5];
	scanf("%5s", controller_4);
	if( strcmp( controller_4, ">f_2%") > 0)
	{
		return int_3;
	}
	double_3 = cos ( double_3 ) ;
	double_5 = double_2;
	int_3 = bmfs_table_save_all(long_2);

	int_1 = bmfs_header_write(double_2,int_3);

	char_1 = char_1;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_disk_seek(unsigned_int_2,char_2,int_3);

	double_3 = double_3 * double_3;
	if(1)
	{
		return int_3;
	}
	return int_3;
	bmfs_entry_set_type(short_4,int_3);

	int_3 = bmfs_entry_write(unsigned_int_2,unsigned_int_2);

}
void bmfs_table_set_block_size( long parameter_1,double parameter_2)
{
	if(1)
	{
		int int_1 = 0;
		int_1 = int_1 / int_1;
	}
}
void bmfs_set_block_size( short parameter_1,long parameter_2)
{
	double double_2 = 0;
	long long_1 = 0;
	double double_1 = 0;
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "#gwby") > 0)
	{
		double double_2 = 0;
		long long_1 = 0;
		double double_1 = 0;
		int int_1 = 0;
		double_1 = atan ( double_2 ) ;
		bmfs_table_set_block_size(long_1,double_2);

		int_1 = int_1 - int_1;
	}
}
int bmfs_disk_write( double parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return int_1;
	}
	return int_2;
}
unsigned int bmfs_crc32( double parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	double_2 = double_1 * double_1;
	char_1 = char_1 / char_1;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		double double_1 = 0;
		double double_2 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		looper_1 += 1;
		double_2 = atan2 ( double_3 , double_2 ) ;
	}
	return unsigned_int_1;
}
float bmfs_decode_uint32( long parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	float float_1 = 0;
	unsigned_int_1 = unsigned_int_1;
	double_1 = tan ( double_2 ) ;
	long_1 = long_1 * long_2;
	double_3 = cosh ( double_3 ) ;
	double_1 = ceil ( double_4 ) ;
	double_5 = atan ( double_2 ) ;
	return float_1;
}
long bmfs_decode_uint64( double parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	long long_1 = 0;
	unsigned_int_1 = unsigned_int_1 / unsigned_int_2;
	double_2 = double_1 / double_1;
	double_2 = double_2;
	unsigned_int_3 = unsigned_int_1 - unsigned_int_3;
	int_1 = int_1 - int_1;
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_2;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_1 = exp ( double_2 ) ;
	double_1 = asin ( double_1 ) ;
	return long_1;
}
int bmfs_disk_read( short parameter_1,double parameter_3,long parameter_4)
{
	int int_1 = 0;
	int int_2 = 0;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "FO") < 0)
	{
		return int_1;
	}
	return int_2;
}
int bmfs_header_read( int parameter_1,long parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_6 = 0;
	double double_7 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_3 = 0;
	char char_2 = 0;
	char char_3 = 0;
	double double_8 = 0;
	int int_2 = 0;
	short short_1 = 0;
	double_1 = atan2 ( double_2 , double_1 ) ;
	long_1 = bmfs_decode_uint64(double_2);

	unsigned_int_1 = bmfs_crc32(double_2,double_1,char_1);

	double_3 = double_1 * double_1;
	double_4 = atan ( double_5 ) ;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_1;
	}
	int_1 = int_1;
	float_1 = float_2;
	double_6 = double_1 + double_4;
	double_1 = exp ( double_6 ) ;
	double_6 = tanh ( double_7 ) ;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_2 - unsigned_int_1;
	double_2 = sqrt ( double_3 ) ;
	unsigned_int_3 = unsigned_int_1;
	double_3 = fabs ( double_7 ) ;
	double_4 = tan ( double_7 ) ;
	float_3 = bmfs_decode_uint32(long_1);

	char_2 = char_1;
	double_1 = ceil ( double_6 ) ;
	char_3 = char_1 * char_3;
	double_6 = double_4;
	double_2 = asin ( double_5 ) ;
	double_7 = acos ( double_5 ) ;
	double_3 = log10 ( double_4 ) ;
	double_2 = fmod ( double_8 , double_3 ) ;
	double_6 = ceil ( double_2 ) ;
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "?") > 0)
	{
		return int_1;
	}
	return int_2;
	int_1 = bmfs_disk_read(short_1,double_8,long_1);

}
int bmfs_disk_seek( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "c}c<.") < 0)
	{
		return int_1;
	}
	return int_1;
}
int bmfs_check_signature( int parameter_1)
{
	int int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	int int_2 = 0;
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_3 = 0;
	if(1)
	{
		return int_1;
	}
	bmfs_header_init();

	float_1 = float_2;
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "Qe") > 0)
	{
		return int_1;
	}
	int_1 = bmfs_header_read(int_2,long_1);

	double_1 = ceil ( double_2 ) ;
	int_2 = bmfs_disk_seek(unsigned_int_1,char_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_3;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_2;
	}
	return int_1;
}
float cmd_format( char parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_1 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_2 = 0;
	double double_3 = 0;
	short short_2 = 0;
	float float_3 = 0;
	int int_4 = 0;
	double double_4 = 0;
	long long_2 = 0;
	float float_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	char char_2 = 0;
	double double_7 = 0;
	float float_5 = 0;
	float float_6 = 0;
	short short_4 = 0;
	short short_5 = 0;
	long long_3 = 0;
	long long_1 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	short short_3 = 0;
	int_1 = bmfs_disk_seek(unsigned_int_1,char_1,int_2);

	unsigned_int_3 = unsigned_int_2 / unsigned_int_2;
	short_1 = short_1;
	int_1 = bmfs_size_parse(float_1,double_1);

	double_1 = acos ( double_1 ) ;
	double_2 = floor ( double_1 ) ;
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		float float_2 = 0;
		double double_3 = 0;
		short short_2 = 0;
		float float_3 = 0;
		int int_4 = 0;
		double double_4 = 0;
		long long_2 = 0;
		float float_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		char char_2 = 0;
		double double_7 = 0;
		float float_5 = 0;
		float float_6 = 0;
		short short_4 = 0;
		short short_5 = 0;
		long long_3 = 0;
		long long_1 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		short short_3 = 0;
		long_1 = long_1;
		return float_2;
	}
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		float float_2 = 0;
		double double_3 = 0;
		short short_2 = 0;
		float float_3 = 0;
		int int_4 = 0;
		double double_4 = 0;
		long long_2 = 0;
		float float_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		char char_2 = 0;
		double double_7 = 0;
		float float_5 = 0;
		float float_6 = 0;
		short short_4 = 0;
		short short_5 = 0;
		long long_3 = 0;
		long long_1 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		short short_3 = 0;
		double_1 = ldexp ( double_2 , int_3 ) ;
		return float_1;
	}
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		float float_2 = 0;
		double double_3 = 0;
		short short_2 = 0;
		float float_3 = 0;
		int int_4 = 0;
		double double_4 = 0;
		long long_2 = 0;
		float float_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		char char_2 = 0;
		double double_7 = 0;
		float float_5 = 0;
		float float_6 = 0;
		short short_4 = 0;
		short short_5 = 0;
		long long_3 = 0;
		long long_1 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		short short_3 = 0;
		looper_1 += 1;
		if(1)
		{
			double_1 = floor ( double_3 ) ;
		}
		if(1)
		{
			if(1)
			{
				int int_1 = 0;
				unsigned int unsigned_int_1 = 0;
				char char_1 = 0;
				int int_2 = 0;
				unsigned int unsigned_int_2 = 0;
				unsigned int unsigned_int_3 = 0;
				short short_1 = 0;
				float float_1 = 0;
				double double_1 = 0;
				double double_2 = 0;
				float float_2 = 0;
				double double_3 = 0;
				short short_2 = 0;
				float float_3 = 0;
				int int_4 = 0;
				double double_4 = 0;
				long long_2 = 0;
				float float_4 = 0;
				double double_5 = 0;
				double double_6 = 0;
				char char_2 = 0;
				double double_7 = 0;
				float float_5 = 0;
				float float_6 = 0;
				short short_4 = 0;
				short short_5 = 0;
				long long_3 = 0;
				long long_1 = 0;
				int int_3 = 0;
				unsigned int unsigned_int_4 = 0;
				short short_3 = 0;
				short_2 = short_3;
				return float_1;
			}
			if(1)
			{
				double_1 = cosh ( double_1 ) ;
				return float_1;
			}
			double_1 = exp ( double_2 ) ;
		}
		if(1)
		{
			if(1)
			{
				int_2 = bmfs_size_bytes(float_1,float_3);

				double_2 = cosh ( double_3 ) ;
				return float_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
				return float_3;
			}
			double_1 = log ( double_3 ) ;
		}
		if(1)
		{
			int_1 = int_1;
		}
		else
		{
			int_4 = bmfs_check_signature(int_4);

			double_3 = acos ( double_4 ) ;
			return float_2;
		}
		unsigned_int_3 = unsigned_int_2 / unsigned_int_4;
	}
	int_4 = bmfs_format(char_1,long_2);

	double_4 = acos ( double_1 ) ;
	if(1)
	{
		long_2 = long_2;
		return float_4;
	}
	if(1)
	{
		double_2 = double_5 / double_2;
		return float_1;
	}
	double_6 = exp ( double_5 ) ;
	if(1)
	{
		double_4 = atan ( double_6 ) ;
		return float_3;
	}
	if(1)
	{
		char_2 = char_2 - char_1;
		return float_2;
	}
	if(1)
	{
		double_3 = log10 ( double_5 ) ;
		return float_3;
	}
	double_7 = tan ( double_7 ) ;
	if(1)
	{
		double_3 = pow ( double_5 , double_2 ) ;
		char_2 = is_opt(char_2,char_1,float_4);

		double_2 = sqrt ( double_1 ) ;
		return float_2;
	}
	int_2 = bmfs_disk_write(double_3,long_2,int_2,int_1);

	float_3 = float_5 * float_6;
	if(1)
	{
		return float_2;
	}
	double_5 = acos ( double_2 ) ;
	if(1)
	{
		return float_5;
	}
	short_5 = short_2 * short_4;
	bmfs_set_block_size(short_1,long_3);

	double_6 = double_5;
	if(1)
	{
		return float_2;
	}
	return float_2;
}
void bmfs_table_set_disk( int parameter_1,int parameter_2)
{
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "+") > 0)
	{
		char char_1 = 0;
		char_1 = char_1;
	}
}
void bmfs_set_disk( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double_1 = double_1;
		bmfs_table_set_disk(int_1,int_1);

		long_2 = long_1 / long_2;
	}
}
void bmfs_table_set_host( char parameter_1,double parameter_2)
{
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_4 = 0;
	double double_1 = 0;
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "+prhg") > 0)
	{
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_4 = 0;
		double double_1 = 0;
		int int_1 = 0;
		double_1 = ldexp ( double_1 , int_1 ) ;
	}
	double_2 = tanh ( double_3 ) ;
	char_2 = char_1 / char_1;
	bmfs_host_done(unsigned_int_1,double_4);

}
void bmfs_host_done( unsigned int parameter_1,double parameter_2)
{
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "J9b") > 0)
	{
	}
}
void bmfs_set_host( double parameter_1,char parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "gPB") > 0)
	{
		double_2 = double_1 * double_2;
	}
	bmfs_table_set_host(char_1,double_2);

	double_1 = sinh ( double_2 ) ;
	float_2 = float_1 - float_2;
	bmfs_host_done(unsigned_int_1,double_3);

	double_3 = sqrt ( double_4 ) ;
}
void bmfs_table_entry_init( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_2;
	double_2 = sqrt ( double_1 ) ;
	double_2 = log10 ( double_3 ) ;
}
void bmfs_table_init()
{
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	float_1 = float_1 / float_1;
	double_1 = double_1;
	double_1 = double_2;
	bmfs_table_entry_init(unsigned_int_1);

	double_3 = acos ( double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	short_1 = short_1;
	long_2 = long_1 * long_1;
	double_2 = exp ( double_1 ) ;
	double_2 = atan ( double_4 ) ;
	double_1 = sinh ( double_5 ) ;
}
void bmfs_header_init()
{
	float float_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	float float_3 = 0;
	float float_4 = 0;
	short short_1 = 0;
	short short_2 = 0;
	int int_3 = 0;
	float_1 = float_1 / float_2;
	double_1 = log10 ( double_1 ) ;
	int_1 = int_1 - int_2;
	double_1 = pow ( double_1 , double_2 ) ;
	double_3 = fabs ( double_1 ) ;
	double_2 = ceil ( double_1 ) ;
	float_2 = float_2;
	double_1 = double_3;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = tan ( double_3 ) ;
	double_1 = tan ( double_2 ) ;
	float_4 = float_3 * float_3;
	short_1 = short_1 / short_2;
	double_1 = cosh ( double_1 ) ;
	int_3 = int_2 / int_1;
	long_3 = long_1 - long_1;
}
void bmfs_init( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	double_1 = double_2;
	double_3 = sinh ( double_3 ) ;
	int_1 = int_1 + int_1;
	double_3 = double_4 / double_4;
	double_2 = atan2 ( double_2 , double_3 ) ;
	double_3 = double_2;
	bmfs_header_init();

	unsigned_int_1 = unsigned_int_1;
	bmfs_table_init();

}
void bmfs_filedisk_set_offset( char parameter_1,short parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	int_2 = int_1 + int_2;
}
double bmfs_strerror( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	{
		return double_1;
		return double_1;
		return double_2;
		return double_3;
		return double_4;
		return double_3;
		return double_5;
		return double_5;
		return double_1;
		return double_6;
		return double_6;
		return double_2;
	}
	return double_4;
}
int bmfs_filedisk_open( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int_1 = to_bmfs_errno(int_1);

	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	double_3 = log10 ( double_2 ) ;
	return int_1;
}
float bmfs_filedisk_write(int parameter_2,int parameter_3,long parameter_4)
{
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	float float_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "AW") < 0)
	{
		return float_1;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		return float_1;
	}
	double_3 = log ( double_2 ) ;
	if(1)
	{
		float float_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		float float_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char_1 = char_2;
	}
	return float_2;
}
long bmfs_filedisk_read(short parameter_3,float parameter_4)
{
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_2 = 0;
	double double_4 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "XOA") < 0)
	{
		return long_1;
	}
	double_1 = tan ( double_2 ) ;
	if(1)
	{
		return long_1;
	}
	double_2 = fmod ( double_1 , double_3 ) ;
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "Q") < 0)
	{
		long long_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		long long_2 = 0;
		double double_4 = 0;
		double_4 = tanh ( double_1 ) ;
	}
	return long_2;
}
unsigned int bmfs_filedisk_tell(char parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float float_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_1 = 0;
	long long_1 = 0;
	if(1)
	{
		return unsigned_int_1;
	}
	int_1 = int_1 / int_1;
	if(1)
	{
		return unsigned_int_2;
	}
	float_1 = float_1;
	if(1)
	{
		int_3 = int_1 / int_2;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	int_4 = int_5;
	if(1)
	{
		return unsigned_int_3;
	}
	else
	{
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		float float_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_1 = 0;
		long long_1 = 0;
		int_3 = to_bmfs_errno(int_2);

		long_1 = long_1;
	}
	if(1)
	{
		return unsigned_int_3;
	}
	double_1 = acos ( double_1 ) ;
	if(1)
	{
		double_1 = log ( double_1 ) ;
	}
	return unsigned_int_3;
}
int to_bmfs_errno( int parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	{
		return int_1;
		return int_1;
		return int_1;
		return int_2;
		return int_2;
		return int_2;
		return int_1;
		return int_1;
		return int_1;
		return int_1;
		return int_3;
	}
}
double bmfs_filedisk_seek(char parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	double double_4 = 0;
	char char_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return double_1;
	}
	double_2 = cos ( double_1 ) ;
	if(1)
	{
		return double_3;
	}
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		double double_4 = 0;
		char char_1 = 0;
		int int_2 = 0;
		double_3 = log10 ( double_3 ) ;
		int_1 = to_bmfs_errno(int_1);

		char_1 = char_1;
	}
	char controller_4[4];
	scanf("%4s", controller_4);
	if( strcmp( controller_4, "8@<@") > 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		double double_4 = 0;
		char char_1 = 0;
		int int_2 = 0;
		int_1 = int_2 + int_1;
	}
	else
	{
		return double_2;
	}
	if(1)
	{
		if(1)
		{
			return double_3;
		}
	}
	if(1)
	{
		return double_4;
	}
	else
	{
		if(1)
		{
			return double_1;
		}
	}
	return double_3;
}
void bmfs_disk_init()
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_3 = 0;
	double_1 = acos ( double_2 ) ;
	double_1 = ceil ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	double_2 = double_3;
}
void bmfs_filedisk_init()
{
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	short short_1 = 0;
	float float_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	char char_2 = 0;
	short short_2 = 0;
	int int_4 = 0;
	double_1 = bmfs_filedisk_seek(char_1,int_1);

	long_1 = bmfs_filedisk_read(short_1,float_1);

	float_1 = bmfs_filedisk_write(int_2,int_3,long_2);

	unsigned_int_3 = unsigned_int_1 - unsigned_int_2;
	double_2 = tan ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_3 = floor ( double_2 ) ;
	double_1 = double_4;
	bmfs_disk_init();

	unsigned_int_1 = bmfs_filedisk_tell(char_2);

	short_2 = short_1 / short_2;
	double_2 = fmod ( double_4 , double_2 ) ;
	int_4 = int_4;
}
unsigned int file_exists( char parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double_1 = cosh ( double_2 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	else
	{
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double_3 = tan ( double_4 ) ;
		return unsigned_int_2;
	}
}
char print_version()
{
	char char_1 = 0;
	char_1 = char_1 / char_1;
}
long print_usage( char parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	short short_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	short short_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_1 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_7 = 0;
	double_1 = double_1;
	double_1 = fabs ( double_2 ) ;
	double_1 = atan ( double_1 ) ;
	double_1 = cos ( double_3 ) ;
	double_2 = fabs ( double_4 ) ;
	double_2 = ceil ( double_5 ) ;
	short_1 = short_1;
	float_1 = float_2;
	double_1 = sinh ( double_4 ) ;
	short_1 = short_2;
	double_3 = fmod ( double_5 , double_3 ) ;
	double_3 = sinh ( double_3 ) ;
	double_1 = cos ( double_4 ) ;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	double_5 = double_1 / double_1;
	double_2 = atan ( double_6 ) ;
	double_6 = log ( double_2 ) ;
	double_2 = acos ( double_6 ) ;
	unsigned_int_2 = unsigned_int_1 / unsigned_int_1;
	double_1 = fmod ( double_5 , double_6 ) ;
	double_1 = asin ( double_1 ) ;
	double_5 = double_7;
	double_2 = sinh ( double_2 ) ;
}
int print_help( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_3 = 0;
	float float_2 = 0;
	long long_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	int int_2 = 0;
	float float_1 = 0;
	int int_4 = 0;
	double double_7 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_1 = 0;
	double double_8 = 0;
	double double_9 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_4 = 0;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "Z=") > 0)
	{
		double_1 = fmod ( double_2 , double_3 ) ;
		return int_1;
	}
	double_2 = floor ( double_3 ) ;
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		int int_1 = 0;
		int int_3 = 0;
		float float_2 = 0;
		long long_1 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		int int_2 = 0;
		float float_1 = 0;
		int int_4 = 0;
		double double_7 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		double double_8 = 0;
		double double_9 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_4 = 0;
		unsigned_int_1 = unsigned_int_1;
		double_2 = ldexp ( double_4 , int_1 ) ;
		double_1 = acos ( double_1 ) ;
		double_1 = double_4;
		double_3 = ceil ( double_2 ) ;
		double_1 = ldexp ( double_1 , int_1 ) ;
		double_3 = double_5 * double_3;
		double_6 = ldexp ( double_2 , int_2 ) ;
		float_1 = float_1;
		int_3 = command_parse(float_2);

		double_2 = ldexp ( double_1 , int_4 ) ;
		double_6 = fmod ( double_4 , double_6 ) ;
		double_4 = double_4 * double_6;
		long_1 = print_usage(char_1);

		double_7 = atan ( double_3 ) ;
		double_5 = log10 ( double_5 ) ;
		double_3 = tan ( double_7 ) ;
		double_5 = fabs ( double_2 ) ;
		long_2 = long_2 + long_1;
		unsigned_int_2 = unsigned_int_3;
		double_7 = pow ( double_1 , double_3 ) ;
		short_1 = short_1 + short_1;
		double_5 = floor ( double_7 ) ;
		double_6 = asin ( double_5 ) ;
		double_3 = double_8;
		double_3 = log ( double_9 ) ;
		short_2 = short_1 / short_1;
		double_8 = log10 ( double_8 ) ;
		double_2 = double_6;
		unsigned_int_4 = unsigned_int_1;
	}
}
int command_parse( float parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	int int_6 = 0;
	int int_7 = 0;
	int int_8 = 0;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_4;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_5;
	}
	if(1)
	{
		return int_6;
	}
	if(1)
	{
		return int_4;
	}
	if(1)
	{
		return int_7;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_6;
	}
	return int_8;
}
int bmfs_size_bytes( float parameter_1,float parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	float float_1 = 0;
	double double_5 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, ";cqQB") < 0)
	{
		return int_1;
	}
	if(1)
	{
		double_1 = exp ( double_1 ) ;
	}
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "v+&-?") < 0)
	{
		double_2 = acos ( double_3 ) ;
	}
	if(1)
	{
		double_3 = sinh ( double_2 ) ;
	}
	if(1)
	{
		double_3 = cosh ( double_3 ) ;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		float float_1 = 0;
		double double_5 = 0;
		float_1 = float_1 / float_1;
	}
	if(1)
	{
		double_4 = fmod ( double_2 , double_3 ) ;
	}
	if(1)
	{
		double_3 = asin ( double_4 ) ;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		float float_1 = 0;
		double double_5 = 0;
		double_4 = fmod ( double_1 , double_5 ) ;
	}
	if(1)
	{
		int_1 = int_1;
	}
	return int_1;
}
int to_type( long parameter_1,short parameter_2)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	short short_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	short short_2 = 0;
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		short short_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		short short_2 = 0;
		short_1 = short_1 - short_1;
		return int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		return int_2;
	}
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
		return int_1;
	}
	if(1)
	{
		double_1 = cosh ( double_1 ) ;
		return int_2;
	}
	if(1)
	{
		double_2 = pow ( double_1 , double_1 ) ;
		return int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 / unsigned_int_1;
		return int_1;
	}
	if(1)
	{
		double_3 = log ( double_2 ) ;
		return int_2;
	}
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		short short_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		short short_2 = 0;
		double_3 = exp ( double_4 ) ;
		return int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		return int_1;
	}
	if(1)
	{
		double_3 = asin ( double_2 ) ;
		return int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 - unsigned_int_1;
		return int_5;
	}
	if(1)
	{
		int_1 = int_4;
		return int_2;
	}
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		short short_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		short short_2 = 0;
		double_1 = double_5 + double_2;
		return int_3;
	}
	if(1)
	{
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		short short_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		short short_2 = 0;
		short_2 = short_2;
		return int_5;
	}
	return int_3;
}
int bmfs_size_parse( float parameter_1,double parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	short short_2 = 0;
	short short_3 = 0;
	int int_3 = 0;
	double double_4 = 0;
	double double_3 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = to_type(long_1,short_1);

	double_1 = ceil ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 7)
	{
		int int_1 = 0;
		int int_2 = 0;
		long long_1 = 0;
		short short_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		short short_2 = 0;
		short short_3 = 0;
		int int_3 = 0;
		double double_4 = 0;
		double double_3 = 0;
		looper_1 += 1;
		double_3 = pow ( double_3 , double_2 ) ;
		if(1)
		{
		}
		double_2 = atan2 ( double_1 , double_2 ) ;
		int_1 = int_2 / int_1;
		double_3 = fmod ( double_2 , double_2 ) ;
	}
	short_3 = short_1 - short_2;
	if(1)
	{
		return int_3;
	}
	double_2 = sinh ( double_4 ) ;
	return int_3;
}
char is_opt( char parameter_1,char parameter_2,float parameter_3)
{
	char char_1 = 0;
	char char_2 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "pz..E") > 0)
	{
		return char_1;
	}
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "F?") > 0)
	{
		return char_1;
	}
	char controller_3[2];
	scanf("%2s", controller_3);
	if( strcmp( controller_3, "Rt") < 0)
	{
		return char_1;
	}
	return char_2;
}
int main(int argc, const char **argv)
{
	int uni_para =776;
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_1 = 0;
	float float_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	int int_3 = 0;
	double double_5 = 0;
	int int_4 = 0;
	int int_5 = 0;
	int int_6 = 0;
	long long_4 = 0;
	double double_6 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_7 = 0;
	double double_8 = 0;
	double double_9 = 0;
	double double_10 = 0;
	double double_12 = 0;
	long long_1 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_7 = 0;
	int int_8 = 0;
	double double_11 = 0;
	double double_13 = 0;
	short short_3 = 0;
	short short_4 = 0;
	double_1 = log ( double_1 ) ;
	double_2 = acos ( double_2 ) ;
	double_1 = exp ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		char controller4vul_1[1];
		scanf("%1s", controller4vul_1);
		if( strcmp( controller4vul_1, "t") > 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			float float_1 = 0;
			int int_1 = 0;
			int int_2 = 0;
			long long_2 = 0;
			unsigned int unsigned_int_1 = 0;
			float float_2 = 0;
			double double_3 = 0;
			double double_4 = 0;
			char char_1 = 0;
			char char_2 = 0;
			char char_3 = 0;
			int int_3 = 0;
			double double_5 = 0;
			int int_4 = 0;
			int int_5 = 0;
			int int_6 = 0;
			long long_4 = 0;
			double double_6 = 0;
			short short_1 = 0;
			short short_2 = 0;
			unsigned int unsigned_int_3 = 0;
			unsigned int unsigned_int_4 = 0;
			double double_7 = 0;
			double double_8 = 0;
			double double_9 = 0;
			double double_10 = 0;
			double double_12 = 0;
			long long_1 = 0;
			long long_3 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_7 = 0;
			int int_8 = 0;
			double double_11 = 0;
			double double_13 = 0;
			short short_3 = 0;
			short short_4 = 0;
			char controller4vul_2[4];
			scanf("%4s", controller4vul_2);
			if( strcmp( controller4vul_2, "W/yU") > 0)
			{
				float_1 = cmd_ls(double_1,int_1,int_2,uni_para);

				double_1 = sqrt ( double_2 ) ;
				return int_2;
			}
			long_3 = long_1 * long_2;
		}
		char controller_1[3];
		scanf("%3s", controller_1);
		if( strcmp( controller_1, "@}X") > 0)
		{
			if(1)
			{
				int_2 = int_1;
				return int_1;
			}
			float_1 = float_1;
		}
		else
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = pow ( double_1 , double_1 ) ;
			return int_2;
		}
	}
	float_2 = float_1 / float_2;
	if(1)
	{
		double_2 = log10 ( double_3 ) ;
		return int_1;
	}
	double_4 = floor ( double_2 ) ;
	if(1)
	{
		char_3 = char_1 / char_2;
		return int_3;
	}
	double_5 = exp ( double_1 ) ;
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		float float_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_3 = 0;
		double double_5 = 0;
		int int_4 = 0;
		int int_5 = 0;
		int int_6 = 0;
		long long_4 = 0;
		double double_6 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		double double_12 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_7 = 0;
		int int_8 = 0;
		double double_11 = 0;
		double double_13 = 0;
		short short_3 = 0;
		short short_4 = 0;
		int_4 = int_4;
		char_2 = char_1;
		return int_5;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		return int_4;
		return int_6;
		return int_4;
	}
	long_2 = long_4;
	double_2 = acos ( double_4 ) ;
	if(1)
	{
		double_6 = cosh ( double_5 ) ;
	}
	short_2 = short_1 - short_1;
	double_2 = double_6 - double_3;
	double_4 = sqrt ( double_4 ) ;
	if(1)
	{
		double_3 = fabs ( double_1 ) ;
		char_3 = char_3;
		return int_2;
	}
	unsigned_int_3 = unsigned_int_4;
	double_3 = atan ( double_6 ) ;
	double_6 = tan ( double_5 ) ;
	int_5 = int_2 + int_6;
	double_6 = double_3 / double_4;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		float float_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_3 = 0;
		double double_5 = 0;
		int int_4 = 0;
		int int_5 = 0;
		int int_6 = 0;
		long long_4 = 0;
		double double_6 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		double double_12 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_7 = 0;
		int int_8 = 0;
		double double_11 = 0;
		double double_13 = 0;
		short short_3 = 0;
		short short_4 = 0;
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			double_7 = fmod ( double_4 , double_3 ) ;
			return int_6;
		}
		double_5 = double_6 / double_8;
		int_1 = int_7 + int_8;
		if(1)
		{
			return int_5;
		}
		return int_6;
	}
	double_6 = cosh ( double_7 ) ;
	if(1)
	{
		double_2 = cos ( double_6 ) ;
		double_3 = double_6 / double_9;
		return int_4;
	}
	double_3 = fabs ( double_2 ) ;
	if(1)
	{
		long_2 = long_2;
		double_10 = sqrt ( double_6 ) ;
		double_3 = double_3;
		return int_4;
	}
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		float float_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_3 = 0;
		double double_5 = 0;
		int int_4 = 0;
		int int_5 = 0;
		int int_6 = 0;
		long long_4 = 0;
		double double_6 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		double double_12 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_7 = 0;
		int int_8 = 0;
		double double_11 = 0;
		double double_13 = 0;
		short short_3 = 0;
		short short_4 = 0;
		double_4 = tanh ( double_6 ) ;
		double_11 = atan ( double_6 ) ;
		long_4 = long_2;
		double_11 = fmod ( double_8 , double_2 ) ;
		char_3 = char_2;
		short_1 = short_1 / short_1;
		double_8 = exp ( double_4 ) ;
		double_5 = log ( double_12 ) ;
		double_1 = atan2 ( double_10 , double_1 ) ;
		double_3 = tan ( double_2 ) ;
		unsigned_int_4 = unsigned_int_1;
		double_6 = tan ( double_13 ) ;
		return int_6;
	}
	double_9 = cos ( double_1 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		float float_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_3 = 0;
		double double_5 = 0;
		int int_4 = 0;
		int int_5 = 0;
		int int_6 = 0;
		long long_4 = 0;
		double double_6 = 0;
		short short_1 = 0;
		short short_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		double double_12 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_7 = 0;
		int int_8 = 0;
		double double_11 = 0;
		double double_13 = 0;
		short short_3 = 0;
		short short_4 = 0;
		double_3 = fabs ( double_6 ) ;
		double_12 = ldexp ( double_10 , int_3 ) ;
		short_2 = short_3 + short_4;
		return int_5;
	}
	double_12 = double_2;
	if(1)
	{
		return int_4;
	}
	return int_2;
}

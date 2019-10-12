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

void v_optdb_destroy();
void v_work_task();
int v_scan_fuse_new_args( float parameter_1);
int v_release_stdio();
float v_block_stdio();
float v_rar2_eperm();
double v_rar2_releasedir2( float parameter_1,double parameter_2);
int v_rar2_readdir2( float parameter_1,float parameter_3,float parameter_4,int parameter_5);
long v_rar2_opendir2( int parameter_1,unsigned int parameter_2);
char v_syncrar( float parameter_1);
void v_rar2_getattr2( char parameter_1,long parameter_2);
char v_rar2_symlink( char parameter_1,short parameter_2);
void v_rar2_chown( double parameter_1,int parameter_2,short parameter_3);
double v_rar2_chmod( double parameter_1,float parameter_2);
int v_rar2_truncate( short parameter_1,double parameter_2);
short v_rar2_write( short parameter_1,char parameter_2,double parameter_3,long parameter_4,long parameter_5);
char v_rar2_rmdir( double parameter_1);
void v_rar2_mkdir( short parameter_1,unsigned int parameter_2);
int v_rar2_unlink( long parameter_1);
short v_rar2_mknod( char parameter_1,double parameter_2,int parameter_3);
long v_rar2_rename( short parameter_1,float parameter_2);
void v___dircache_invalidate_for_file( char parameter_1);
char v_access_chk( long parameter_1,int parameter_2);
int v_rar2_create( short parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_rar2_releasedir( double parameter_1,unsigned int parameter_2);
int v_dump_dir_list( long parameter_1,long parameter_3,double parameter_4);
unsigned int v_swap( unsigned int parameter_1,long parameter_2);
void v_dir_list_close( short parameter_1);
int v_dir_list_append( long parameter_1,short parameter_2);
long v_convert_fake_iso( char parameter_1);
short v_f0( long parameter_1);
void v_readdir_scan( unsigned int parameter_1,int parameter_2,char parameter_3,double parameter_4);
long v_dir_list_dup( int parameter_1);
char v_rar2_readdir( int parameter_1,short parameter_3,char parameter_4,int parameter_5);
void v_rar2_opendir( double parameter_1,float parameter_2);
char v_dircache_alloc( double parameter_1);
void v_dir_list_free( char parameter_1);
void v___add_filler( char parameter_1,float parameter_2,short parameter_3);
double v_get_save_eof( char parameter_1);
char v___listrar_tocache( char parameter_1,double parameter_2,double parameter_3,char parameter_4,float parameter_5);
void v_filecache_copy( short parameter_1,unsigned int parameter_2);
int v_lookup_filecopy( long parameter_1,long parameter_2,long parameter_3,int parameter_4);
int v___listrar_incache( char parameter_1,unsigned int parameter_2,int uni_para);
float v_get_ext_len( char parameter_1);
int v_optdb_find( int parameter_1,char parameter_2);
double v_rarconfig_getalias( char parameter_1,double parameter_2);
unsigned int v_get_alias( char parameter_1,float parameter_2);
void v_wide_to_utf8( char parameter_1,char parameter_2,double parameter_3,int uni_para);
unsigned int v_wide_to_char( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para);
float v_set_rarstats( long parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
unsigned int v___listrar_tocache_forcedir( long parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4,long parameter_5);
unsigned int v_RARFreeListEx( int parameter_1);
void v_RARListArchiveEx( double parameter_1,int parameter_2,int parameter_3);
short v_listrar( short parameter_1,int parameter_2,float parameter_3,char parameter_4,int parameter_5,int uni_para);
long v_get_seek_length( char parameter_1);
int v_f2( short parameter_1);
double v_f1( long parameter_1);
double v_syncdir_scan( int parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
unsigned int v_dircache_get( double parameter_1);
long v_syncdir( float parameter_1,int uni_para);
void v_dircache_invalidate();
void v_hashtable_entry_alloc(char parameter_2);
double v_filecache_alloc( short parameter_1);
double v_path_lookup_miss( char parameter_1,double parameter_2);
void v_hashtable_entry_delete(char parameter_2);
void v_filecache_invalidate( unsigned int parameter_1);
double v_hashtable_entry_get(double parameter_2);
int v_filecache_get( float parameter_1);
int v_path_lookup( double parameter_1,char parameter_2);
unsigned int v_rar2_getattr( double parameter_1,double parameter_2,int uni_para);
int v_work( unsigned int parameter_1,int uni_para);
float v_check_libfuse( int parameter_1);
short v_check_libunrar( int parameter_1);
double v_check_iob( char parameter_1,int parameter_2);
void v_RARNextVolumeName( char parameter_1,long parameter_2);
short v_get_hash( short parameter_1,int parameter_2);
long v_dir_entry_add( unsigned int parameter_1,long parameter_2,double parameter_3,int parameter_4);
float v_list_callback( double parameter_1,short parameter_2,char parameter_3,short parameter_4);
short v___check_vol_header();
short v_RARVolNameToFirstName( char parameter_1,int parameter_2);
unsigned int v___RARVolNameToFirstName( char parameter_1,int parameter_2);
double v_get_vformat( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v_get_password( int parameter_1,char parameter_2,float parameter_3);
void v_list_callback_noswitch( unsigned int parameter_1,long parameter_2,short parameter_3,char parameter_4);
double v_collect_files( short parameter_1,unsigned int parameter_2);
void v_get_blkdev_size( int parameter_1);
void v_dir_list_open( float parameter_1);
double v_check_paths( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6);
float v_print_version();
double v_print_help();
void v_usage( char parameter_1);
int v_optdb_save( int parameter_1,int parameter_2);
short v_rar2fs_opt_proc(short parameter_2,int parameter_3,unsigned int parameter_4);
short v_reset_opt( int parameter_1,int parameter_2);
void v_optdb_init();
void v_optdb_destroy()
{
	short short_1 = 1;
	int int_1 = 1;
	short_1 = v_reset_opt(int_1,int_1);

	int_1 = int_1;
}
void v_work_task()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1 * char_2;
	short_1 = short_1 * short_2;
	long_1 = long_1 * long_2;
}
int v_scan_fuse_new_args( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			if(1)
			{
				double double_2 = 1;
				double_2 = double_1 * double_1;
				if(1)
				{
					double double_3 = 1;
					double_1 = double_1 + double_3;
				}
			}
			if(1)
			{
				short short_1 = 1;
				double double_4 = 1;
				short_1 = short_1 * short_1;
				double_4 = double_4 + double_4;
			}
		}
	}
	return int_1;
}
int v_release_stdio()
{
	int int_3 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "$/") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		long_1 = long_2;
		int_1 = int_1 * int_1;
		double_3 = double_1 + double_2;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		float_2 = float_1 + float_2;
		double_1 = double_3;
		int_3 = int_2 * int_1;
	}
	return int_3;
}
float v_block_stdio()
{
	float float_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			int_3 = int_1 * int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			long_1 = long_1 + long_1;
			double_3 = double_1 * double_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_4 = int_4 * int_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	return float_1;
}
float v_rar2_eperm()
{
	float float_1 = 1;
	return float_1;
}
double v_rar2_releasedir2( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	double_5 = double_4 * double_1;
	char_2 = char_1 * char_2;
	return double_2;
}
int v_rar2_readdir2( float parameter_1,float parameter_3,float parameter_4,int parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = v_dir_list_dup(int_1);

	v_dir_list_close(short_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = v_dircache_alloc(double_1);

	v_dir_list_free(char_1);

	char_2 = char_2 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		long_2 = v_get_seek_length(char_3);

		short_2 = v_listrar(short_2,int_2,float_1,char_4,int_3,-1 );

		int_2 = v_dump_dir_list(long_2,long_3,double_2);

		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	return int_4;
	unsigned_int_5 = v_dircache_get(double_2);

	v_dir_list_open(float_1);

}
long v_rar2_opendir2( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1;
	float_2 = float_1 * float_1;
	return long_2;
}
char v_syncrar( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	char_1 = v_dircache_alloc(double_1);

	int_2 = int_1 + int_1;
	unsigned_int_1 = v_dircache_get(double_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		float float_2 = 1;
		char_1 = char_2;
		v_dir_list_open(float_1);

		float_2 = float_1 * float_1;
	}
	short_1 = v_listrar(short_1,int_1,float_3,char_3,int_3,-1 );

	char_1 = char_3 + char_4;
	unsigned_int_1 = unsigned_int_5;
	return char_2;
	long_1 = v_get_seek_length(char_1);

}
void v_rar2_getattr2( char parameter_1,long parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") < 0)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_1 = v_filecache_get(float_1);

		int_2 = int_2 + int_2;
		int_3 = int_3 * int_3;
		int_2 = v_path_lookup(double_1,char_1);

		short_2 = short_1 + short_1;
	}
	int_3 = int_1 + int_2;
	char_2 = v_syncrar(float_1);

}
char v_rar2_symlink( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	if(1)
	{
		short short_1 = 1;
		int_1 = int_1;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
	}
	return char_1;
	char_1 = v_access_chk(long_1,int_2);

}
void v_rar2_chown( double parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "J") < 0)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		char_1 = v_access_chk(long_1,int_1);

		double_1 = double_1 + double_1;
		if(1)
		{
		}
	}
}
double v_rar2_chmod( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		int int_1 = 1;
		char_3 = char_1 * char_2;
		int_1 = int_2;
		if(1)
		{
		}
	}
	return double_3;
	char_2 = v_access_chk(long_1,int_2);

}
int v_rar2_truncate( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 * int_1;
		char_1 = v_access_chk(long_1,int_1);

		long_3 = long_2 * long_3;
		if(1)
		{
		}
	}
	return int_1;
}
short v_rar2_write( short parameter_1,char parameter_2,double parameter_3,long parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_1;
	return short_1;
}
char v_rar2_rmdir( double parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char_1 = v_access_chk(long_1,int_1);

	short_2 = short_1 * short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			float float_1 = 1;
			v_dircache_invalidate();

			float_1 = float_1 * float_1;
		}
	}
	return char_2;
}
void v_rar2_mkdir( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char_1 = v_access_chk(long_1,int_1);

		float_1 = float_1;
		float_1 = float_1 + float_2;
		if(1)
		{
		}
	}
}
int v_rar2_unlink( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char_1 = char_1 * char_1;
		char_2 = v_access_chk(long_1,int_1);

		double_1 = double_1 + double_2;
		if(1)
		{
			double double_3 = 1;
			v___dircache_invalidate_for_file(char_1);

			double_2 = double_1 + double_3;
		}
	}
	return int_1;
}
short v_rar2_mknod( char parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_1 = v_access_chk(long_1,int_1);

		double_2 = double_1 + double_2;
		long_3 = long_2 * long_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "]2") < 0)
		{
		}
	}
	return short_1;
}
long v_rar2_rename( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_4 = 1;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "xl") > 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char_1 = v_access_chk(long_1,int_1);

		long_1 = long_2 + long_3;
		v___dircache_invalidate_for_file(char_1);

		int_2 = int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_1 * double_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return long_4;
}
void v___dircache_invalidate_for_file( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1;
	char_1 = char_2;
	float_2 = float_1 * float_2;
	char_1 = char_3;
	v_dircache_invalidate();

}
char v_access_chk( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "=") > 0)
		{
		}
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_4 = 1;
		int_1 = v_filecache_get(float_3);

		double_2 = double_1;
		double_2 = double_1 + double_4;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1 * int_2;
		long_1 = long_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return char_1;
}
int v_rar2_create( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long_1 = long_1;
			int_1 = int_1 + int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				int int_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int_1 = int_2 + int_3;
				if(1)
				{
				}
				char_1 = v_access_chk(long_1,int_2);

				double_2 = double_1 + double_1;
				v___dircache_invalidate_for_file(char_2);

				float_1 = float_1;
				float_2 = float_2 + float_2;
			}
			int_5 = int_4 * int_1;
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_4;
			}
			char_3 = char_3 * char_2;
		}
	}
	return int_5;
}
unsigned int v_rar2_releasedir( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "7") > 0)
	{
	}
	short_3 = short_1 + short_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "R") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_3 + int_3;
	return unsigned_int_1;
}
int v_dump_dir_list( long parameter_1,long parameter_3,double parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	return int_1;
	v_filecache_invalidate(unsigned_int_1);

}
unsigned int v_swap( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	char_2 = char_1 + char_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 * long_1;
		double_2 = double_1 + double_2;
	}
	return unsigned_int_1;
}
void v_dir_list_close( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = v_swap(unsigned_int_1,long_1);

}
int v_dir_list_append( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_3 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			int_2 = int_1 + int_1;
			short_3 = short_1 + short_1;
		}
		if(1)
		{
			double double_2 = 1;
			double_2 = double_2;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		long_1 = long_1 * long_1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_2 * long_2;
		}
	}
	return int_3;
}
long v_convert_fake_iso( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_3 = float_1 + float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		char char_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		char_1 = char_1 * char_2;
		if(1)
		{
		}
		long_1 = long_1 + long_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
		int_1 = v_optdb_find(int_1,char_1);

		short_1 = short_1;
	}
	return long_1;
}
short v_f0( long parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
void v_readdir_scan( unsigned int parameter_1,int parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short_1 = v_f0(long_1);

		double_1 = v_f1(long_2);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_2 = v_dir_entry_add(unsigned_int_2,long_3,double_1,int_1);

		double_2 = v_get_vformat(long_4,int_2,int_3,int_3);

		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	int_2 = v_f2(short_2);

	long_2 = v_convert_fake_iso(char_1);

	long_3 = v_get_seek_length(char_2);

	short_3 = v_listrar(short_3,int_4,float_1,char_1,int_4,-1 );

}
long v_dir_list_dup( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	char_3 = char_1 + char_2;
	char_3 = char_4 + char_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		short_1 = short_2;
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_2 + double_1;
		}
		int_1 = int_1 + int_2;
		int_1 = int_2 * int_1;
		if(1)
		{
			long long_2 = 1;
			double_3 = double_2 + double_3;
			long_2 = long_1 * long_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char_3 = char_2 * char_3;
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_4;
			double_1 = double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_2 = double_3 + double_3;
			}
			float_1 = float_1 * float_1;
		}
		double_1 = double_2 + double_2;
		int_2 = int_3 * int_3;
	}
	v_dir_list_open(float_1);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	char_5 = char_1 * char_5;
	int_1 = int_3;
	int_2 = int_2 * int_2;
	float_1 = float_2 * float_1;
	double_1 = double_1;
	int_4 = int_5 * int_4;
	return long_1;
}
char v_rar2_readdir( int parameter_1,short parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char char_2 = 1;
	long long_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_dircache_get(double_1);

	int_1 = int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "RH") > 0)
	{
		long_1 = v_dir_list_dup(int_1);

		int_1 = v_dir_list_append(long_2,short_1);

		int_3 = int_1 + int_2;
	}
	v_dir_list_open(float_1);

	v_readdir_scan(unsigned_int_1,int_2,char_1,double_1);

	v_dircache_invalidate();

	int_4 = v_filecache_get(float_1);

	v_RARNextVolumeName(char_1,long_3);

	v_dir_list_free(char_2);

	int_1 = v_dump_dir_list(long_3,long_4,double_2);

	int_4 = int_5 + int_3;
	short_1 = v_listrar(short_2,int_2,float_2,char_1,int_5,-1 );

	char_3 = v_dircache_alloc(double_2);

	char_4 = char_3 * char_1;
	return char_4;
	long_4 = v_get_seek_length(char_2);

	v_dir_list_close(short_3);

}
void v_rar2_opendir( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_2;
	double_1 = double_1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			int_1 = v_filecache_get(float_3);

			long_1 = long_1 + long_2;
			short_1 = short_1 + short_2;
		}
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_3 = long_1 * long_2;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_2;
		}
	}
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		char controller_7[2];
		fgets(controller_7 ,2 ,stdin);
		if( strcmp( controller_7, ">") < 0)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
	}
	long_1 = long_3;
	double_2 = double_1 * double_2;
	double_3 = double_1 + double_2;
	double_4 = double_2 + double_2;
}
char v_dircache_alloc( double parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	v_hashtable_entry_alloc(char_1);

	float_2 = float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "J6") < 0)
	{
	}
	return char_2;
}
void v_dir_list_free( char parameter_1)
{
	long long_1 = 1;
	long_1 = long_1;
}
void v___add_filler( char parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
		}
		char_2 = char_1 + char_1;
	}
	int_3 = int_2;
	short_1 = short_1 + short_2;
	double_2 = double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	long_1 = v_dir_entry_add(unsigned_int_4,long_2,double_2,int_2);

	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_4;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		char_1 = char_1 * char_2;
	}
	char_3 = char_1;
	int_1 = v_filecache_get(float_1);

}
double v_get_save_eof( char parameter_1)
{
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float_1 = float_1 + float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		int_1 = int_1 + int_2;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "k") < 0)
		{
		}
		long_2 = long_1 * long_1;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "0") > 0)
		{
		}
	}
	long_3 = long_3 + long_2;
	return double_1;
}
char v___listrar_tocache( char parameter_1,double parameter_2,double parameter_3,char parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_2 + double_2;
	if(1)
	{
		if(1)
		{
		}
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1;
	char_1 = char_3 + char_1;
	float_2 = float_2 * float_1;
	char_1 = char_4 + char_4;
	if(1)
	{
		long long_2 = 1;
		double_3 = v_get_save_eof(char_4);

		float_2 = float_2 + float_1;
		if(1)
		{
			int int_1 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_6 = 1;
			float_1 = float_1;
			int_2 = int_1 * int_2;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			long_1 = long_1 * long_2;
			short_1 = short_2 * short_3;
			if(1)
			{
				long_2 = long_2 * long_2;
				int_3 = int_3;
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					float_3 = float_1 * float_2;
					double_1 = v_filecache_alloc(short_3);

					unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
					unsigned_int_4 = unsigned_int_5;
					if(1)
					{
						char char_5 = 1;
						char_5 = char_5 + char_2;
					}
				}
			}
			if(1)
			{
				int_2 = int_1 + int_4;
				unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
			}
		}
		if(1)
		{
			long_2 = long_1;
			double_4 = v_get_vformat(long_1,int_2,int_2,int_4);

			float_3 = v_set_rarstats(long_1,unsigned_int_7,int_3,-1 );

			float_2 = float_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_4;
		if(1)
		{
			long long_3 = 1;
			int int_5 = 1;
			long_1 = long_3;
			int_2 = int_3 + int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			char_4 = char_2 + char_4;
			if(1)
			{
				int int_6 = 1;
				int_6 = int_4 * int_3;
			}
		}
	}
	unsigned_int_9 = unsigned_int_3 + unsigned_int_3;
	double_4 = double_1;
	return char_3;
}
void v_filecache_copy( short parameter_1,unsigned int parameter_2)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_2;
		if(1)
		{
			int_2 = int_3 * int_3;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		short_2 = short_1 * short_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			int_5 = int_4 * int_5;
		}
		if(1)
		{
			int_5 = int_4 + int_5;
		}
		int_2 = int_4 + int_3;
		long_1 = long_2;
		char_1 = char_1 * char_1;
		long_3 = long_1 * long_3;
		int_5 = int_1;
		long_2 = long_1 + long_2;
		long_3 = long_4 + long_3;
		short_1 = short_3 + short_1;
		long_3 = long_2 + long_3;
		long_4 = long_1 + long_1;
		double_2 = double_1 * double_1;
	}
}
int v_lookup_filecopy( long parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			double_3 = double_2 * double_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_1;
				double_2 = double_1 + double_1;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
			}
			int_1 = int_1;
		}
		unsigned_int_2 = v_wide_to_char(char_1,unsigned_int_1,unsigned_int_5,-1 );

		double_1 = double_2 + double_1;
	}
	return int_2;
	int_2 = v_filecache_get(float_1);

}
int v___listrar_incache( char parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_5 = 1;
	char controller4vul_2271[3];
	fgets(controller4vul_2271 ,3 ,stdin);
	if( strcmp( controller4vul_2271, "_i") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			int_1 = int_2;
		}
		int_2 = int_2 + int_1;
		char controller4vul_2272[2];
		fgets(controller4vul_2272 ,2 ,stdin);
		if( strcmp( controller4vul_2272, "{") < 0)
		{
			char controller4vul_2273[2];
			fgets(controller4vul_2273 ,2 ,stdin);
			if( strcmp( controller4vul_2273, "9") < 0)
			{
				char controller4vul_2274[2];
				fgets(controller4vul_2274 ,2 ,stdin);
				if( strcmp( controller4vul_2274, "U") > 0)
				{
					short short_1 = 1;
					short short_2 = 1;
					float_1 = v_set_rarstats(long_1,unsigned_int_2,int_1,uni_para);

					short_1 = short_2;
				}
			}
		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "J!") > 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_2 = int_1 + int_2;
		int_3 = int_4;
	}
	return int_5;
}
float v_get_ext_len( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			int_3 = int_4;
		}
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "I") < 0)
		{
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		int_2 = int_3 + int_3;
	}
	return float_1;
}
int v_optdb_find( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char_1 = char_2;
	int_2 = int_1 + int_2;
	float_1 = v_get_ext_len(char_1);

	double_2 = double_1 + double_2;
	return int_3;
}
double v_rarconfig_getalias( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_1 + int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_1 = v_hashtable_entry_get(double_1);

				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return double_2;
}
unsigned int v_get_alias( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_1 = long_1;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_2 * long_3;
		double_1 = v_rarconfig_getalias(char_1,double_1);

		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		int_1 = int_1 * int_1;
		if(1)
		{
		}
		float_2 = float_1 + float_2;
		char_1 = char_1 * char_1;
		int_3 = int_2 * int_3;
		if(1)
		{
		}
	}
	return unsigned_int_3;
}
void v_wide_to_utf8( char parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	char * vul_var;
	char controller4vul_2279[3];
	fgets(controller4vul_2279 ,3 ,stdin);
	if( strcmp( controller4vul_2279, "e<") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 149)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
}
unsigned int v_wide_to_char( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double_3 = double_3 * double_2;
	}
	float_2 = float_1 * float_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	double_1 = double_4 * double_5;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 + char_1;
			double_1 = double_4 * double_1;
		}
	}
	if(1)
	{
	}
	char controller4vul_2276[3];
	fgets(controller4vul_2276 ,3 ,stdin);
	if( strcmp( controller4vul_2276, "Gy") < 0)
	{
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		char controller4vul_2277[2];
		fgets(controller4vul_2277 ,2 ,stdin);
		if( strcmp( controller4vul_2277, "+") < 0)
		{
			char controller4vul_2278[2];
			fgets(controller4vul_2278 ,2 ,stdin);
			if( strcmp( controller4vul_2278, "E") > 0)
			{
				v_wide_to_utf8(char_2,char_3,double_3,uni_para);

			}
		}
	}
	return unsigned_int_1;
}
float v_set_rarstats( long parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_2;
	short_2 = short_1 * short_2;
	int_2 = int_2 + int_3;
	short_4 = short_2 * short_3;
	double_1 = double_1 * double_2;
	char controller4vul_2275[3];
	fgets(controller4vul_2275 ,3 ,stdin);
	if( strcmp( controller4vul_2275, "Hq") < 0)
	{
		unsigned_int_1 = v_wide_to_char(char_1,unsigned_int_2,unsigned_int_3,uni_para);

	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_1 * float_1;
	int_4 = int_5;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	double_1 = double_1 + double_3;
	double_2 = double_4;
	return float_1;
}
unsigned int v___listrar_tocache_forcedir( long parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_2;
	float_1 = v_set_rarstats(long_1,unsigned_int_1,int_1,-1 );

	char_1 = char_2 + char_2;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_1;
	}
	return unsigned_int_1;
}
unsigned int v_RARFreeListEx( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "0b") < 0)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return unsigned_int_1;
}
void v_RARListArchiveEx( double parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = v_RARFreeListEx(int_1);

}
short v_listrar( short parameter_1,int parameter_2,float parameter_3,char parameter_4,int parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_5 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1 * char_2;
	float_1 = float_1 * float_1;
	double_2 = double_1 * double_2;
	float_2 = float_3;
	char_3 = char_1 + char_1;
	char_1 = char_2;
	double_1 = double_2 * double_2;
	short_1 = short_1 + short_2;
	char controller4vul_2270[3];
	fgets(controller4vul_2270 ,3 ,stdin);
	if( strcmp( controller4vul_2270, "7t") < 0)
	{
		int_3 = v___listrar_incache(char_4,unsigned_int_1,uni_para);

		int_4 = int_1;
		long_2 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1;
	int_5 = int_1 + int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	char_1 = char_5 + char_3;
	int_1 = int_1 * int_6;
	double_1 = double_3 + double_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int int_7 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_6;
		int_5 = int_7 + int_7;
	}
	long_3 = long_2 + long_3;
	double_4 = double_5 * double_1;
	long_4 = long_1 * long_1;
	double_1 = double_1 + double_2;
	short_3 = short_1 + short_3;
	long_1 = long_1 + long_2;
	float_4 = float_3 * float_1;
	float_1 = float_1 + float_5;
	short_2 = short_3;
	double_4 = double_1;
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_4 + double_6;
		int_2 = int_2 * int_6;
		long_3 = long_1 + long_1;
	}
	long_5 = long_2;
	char_1 = char_4 + char_2;
	return short_2;
}
long v_get_seek_length( char parameter_1)
{
	long long_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_1 + double_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "L/") > 0)
		{
			long long_1 = 1;
			long_2 = long_1 * long_1;
		}
		long_2 = long_3 * long_3;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "d") > 0)
		{
		}
		double_2 = double_2 + double_3;
		if(1)
		{
		}
	}
	return long_3;
}
int v_f2( short parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
double v_f1( long parameter_1)
{
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ";>") < 0)
	{
	}
	return double_1;
}
double v_syncdir_scan( int parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	char controller4vul_2269[3];
	fgets(controller4vul_2269 ,3 ,stdin);
	if( strcmp( controller4vul_2269, "B9") < 0)
	{
		short_1 = v_listrar(short_2,int_1,float_1,char_1,int_2,uni_para);

	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 + long_2;
	int_1 = int_3 * int_2;
	long_3 = long_1 * long_1;
	return double_2;
}
unsigned int v_dircache_get( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_2;
	double_1 = v_hashtable_entry_get(double_1);

	int_1 = int_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
long v_syncdir( float parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_2;
	float_4 = float_2 * float_3;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_4 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_1;
	char controller4vul_2267[2];
	fgets(controller4vul_2267 ,2 ,stdin);
	if( strcmp( controller4vul_2267, "V") < 0)
	{
		double double_6 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		double_6 = double_4 + double_6;
		int_3 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_2268[2];
		fgets(controller4vul_2268 ,2 ,stdin);
		if( strcmp( controller4vul_2268, "b") > 0)
		{
			double_7 = v_syncdir_scan(int_1,long_1,unsigned_int_1,uni_para);

		}
		short_1 = short_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		double_6 = double_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_3;
			float_1 = float_4 * float_1;
		}
		double_3 = double_2 * double_5;
		double_8 = double_4 * double_6;
		if(1)
		{
			short_1 = short_3 + short_2;
		}
		long_1 = long_1 * long_1;
	}
	return long_2;
}
void v_dircache_invalidate()
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_hashtable_entry_delete(char_1);

	long_1 = long_1 * long_2;
}
void v_hashtable_entry_alloc(char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short_1 = v_get_hash(short_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
}
double v_filecache_alloc( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	v_hashtable_entry_alloc(char_1);

	short_1 = short_1 + short_3;
	if(1)
	{
	}
	return double_1;
}
double v_path_lookup_miss( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			if(1)
			{
			}
		}
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
			short_2 = short_3 * short_1;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_1 = float_1 * float_1;
			short_2 = short_3 + short_1;
			float_3 = float_2 * float_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_1 = 1;
				double double_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_5 = 1;
				char_2 = char_1 * char_1;
				short_4 = short_2 * short_2;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
				if(1)
				{
					int_1 = int_1 + int_1;
				}
				double_1 = double_3 * double_1;
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
					unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
				}
				double_5 = double_2 * double_4;
				double_5 = double_5;
				long_2 = long_2 * long_2;
				if(1)
				{
					int int_2 = 1;
					int_2 = int_1 + int_1;
				}
				unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
				long_2 = long_2;
				short_3 = short_3 + short_5;
				if(1)
				{
					long long_3 = 1;
					long_2 = long_3 + long_1;
				}
				double_4 = v_filecache_alloc(short_4);

				char_2 = char_2;
			}
		}
	}
	return double_4;
}
void v_hashtable_entry_delete(char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = v_get_hash(short_2,int_1);

}
void v_filecache_invalidate( unsigned int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_hashtable_entry_delete(char_1);

	float_2 = float_1 * float_2;
}
double v_hashtable_entry_get(double parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double_1 = double_1 * double_1;
	short_1 = v_get_hash(short_2,int_1);

	float_3 = float_1 + float_2;
	float_1 = float_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	double_1 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		int_1 = int_2 * int_2;
		short_1 = short_3;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "U") == 0)
		{
			double_2 = double_2 + double_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 * double_3;
			double_4 = double_4;
			int_2 = int_3 * int_1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_4 = int_2 * int_3;
		int_4 = int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long long_2 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long_3 = long_2 * long_2;
				if(1)
				{
					int_2 = int_5 + int_3;
				}
				unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			}
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 + float_3;
		}
		int_1 = int_5 * int_4;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_4 = double_5 + double_1;
	}
	return double_5;
}
int v_filecache_get( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_1 = double_1;
	double_1 = v_hashtable_entry_get(double_1);

	long_2 = long_1 + long_1;
	if(1)
	{
	}
	return int_1;
}
int v_path_lookup( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_4 = 1;
	long_2 = long_1 + long_2;
	double_3 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "EW") < 0)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	v_filecache_invalidate(unsigned_int_1);

	v_dircache_invalidate();

	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double_2 = double_3;
			char_1 = char_1 + char_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			char_3 = char_2 + char_2;
			if(1)
			{
				double_1 = double_1 + double_1;
			}
		}
	}
	return int_2;
	int_4 = v_filecache_get(float_1);

	double_3 = v_path_lookup_miss(char_4,double_1);

}
unsigned int v_rar2_getattr( double parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_syncdir(float_1,uni_para);

	return unsigned_int_1;
}
int v_work( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_rar2_getattr(double_1,double_2,uni_para);

	return int_1;
}
float v_check_libfuse( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	return float_1;
}
short v_check_libunrar( int parameter_1)
{
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_2 = double_1 * double_1;
			}
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 + float_1;
			}
		}
	}
	return short_1;
}
double v_check_iob( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long_3 = long_1 * long_2;
	long_2 = long_3 * long_4;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
	}
	return double_1;
	v_usage(char_1);

}
void v_RARNextVolumeName( char parameter_1,long parameter_2)
{
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 + long_2;
	}
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	double_2 = double_2 * double_2;
}
short v_get_hash( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	return short_1;
}
long v_dir_entry_add( unsigned int parameter_1,long parameter_2,double parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_1;
		float_1 = float_1;
		short_1 = short_1 + short_1;
		short_1 = v_get_hash(short_1,int_1);

		int_1 = int_2 + int_2;
	}
	return long_1;
}
float v_list_callback( double parameter_1,short parameter_2,char parameter_3,short parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "W7") > 0)
		{
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "0") > 0)
			{
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
		}
	}
	return float_1;
	unsigned_int_1 = v_get_password(int_1,char_1,float_1);

}
short v___check_vol_header()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 * int_2;
	v_list_callback_noswitch(unsigned_int_1,long_1,short_1,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 * double_2;
	int_3 = int_2 + int_4;
	float_3 = float_1 * float_2;
	double_4 = double_3 * double_2;
	short_1 = short_2 * short_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		if(1)
		{
			float_4 = v_list_callback(double_2,short_3,char_1,short_1);

			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		short_3 = short_1 + short_1;
		short_4 = short_1;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_1;
		}
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	double_3 = double_1 * double_1;
	return short_3;
}
short v_RARVolNameToFirstName( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") < 0)
	{
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	double_2 = double_1 + double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, ".") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	char_3 = char_2 + char_1;
	return short_1;
}
unsigned int v___RARVolNameToFirstName( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = v___check_vol_header();

	char_1 = char_1 * char_1;
	double_3 = double_1 * double_2;
	double_4 = double_3 * double_1;
	short_2 = v_RARVolNameToFirstName(char_2,int_1);

	float_1 = float_1 * float_1;
	long_2 = long_1 + long_2;
	return unsigned_int_1;
	double_5 = v_get_vformat(long_2,int_2,int_1,int_3);

}
double v_get_vformat( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1;
	float_1 = float_2;
	long_1 = long_1;
	long_1 = long_2 + long_3;
	return double_1;
}
unsigned int v_get_password( int parameter_1,char parameter_2,float parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_get_vformat(long_1,int_1,int_2,int_1);

	double_1 = double_2;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
}
void v_list_callback_noswitch( unsigned int parameter_1,long parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
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
	unsigned_int_1 = v_get_password(int_1,char_1,float_1);

}
double v_collect_files( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	return double_1;
	v_list_callback_noswitch(unsigned_int_1,long_1,short_1,char_1);

	unsigned_int_2 = v___RARVolNameToFirstName(char_2,int_1);

	long_1 = v_dir_entry_add(unsigned_int_2,long_2,double_1,int_1);

	v_RARNextVolumeName(char_2,long_1);

}
void v_get_blkdev_size( int parameter_1)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "zD") < 0)
	{
	}
}
void v_dir_list_open( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1 * int_1;
	long_1 = long_2 + long_3;
}
double v_check_paths( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_2;
	double_1 = v_collect_files(short_1,unsigned_int_1);

	char_2 = char_1 + char_1;
	char_2 = char_1 * char_1;
	v_get_blkdev_size(int_1);

	double_2 = double_1 + double_1;
	double_1 = double_1 + double_2;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return double_2;
	v_dir_list_open(float_1);

}
float v_print_version()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	return float_1;
}
double v_print_help()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	long_3 = long_2 + long_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	double_5 = double_3 + double_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int_3 = int_1 + int_1;
	}
	int_3 = int_4 + int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "qP") < 0)
	{
		char char_3 = 1;
		char_2 = char_2 + char_3;
	}
	float_2 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	return double_4;
}
void v_usage( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_2;
}
int v_optdb_save( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
short v_rar2fs_opt_proc(short parameter_2,int parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	long_3 = long_1 + long_2;
	short_2 = short_1 * short_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	float_1 = v_print_version();

	char_3 = char_1 * char_2;
	long_3 = long_1 + long_3;
	double_1 = v_print_help();

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_2 + double_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	int_1 = v_optdb_save(int_2,int_4);

	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_2;
	v_usage(char_1);

	double_1 = double_2 + double_2;
	float_3 = float_2 + float_2;
	int_1 = int_5 * int_2;
	short_2 = short_2 * short_2;
	unsigned_int_3 = unsigned_int_5;
	char_1 = char_1;
	double_2 = double_1 * double_2;
	return short_3;
}
short v_reset_opt( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "o") > 0)
	{
	}
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_2;
		double_1 = double_3 * double_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_3 = short_3 + short_1;
		char_1 = char_1 * char_2;
	}
	return short_3;
}
void v_optdb_init()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "G") == 0)
	{
		int int_2 = 1;
		int_2 = int_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
	char_2 = char_1 * char_2;
	short_1 = v_reset_opt(int_1,int_3);

	int_4 = int_4 + int_1;
}
int main()
{
	int uni_para =149;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	double_2 = double_1 + double_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	char controller4vul_2265[2];
	fgets(controller4vul_2265 ,2 ,stdin);
	if( strcmp( controller4vul_2265, "H") > 0)
	{
		char controller4vul_2266[2];
		fgets(controller4vul_2266 ,2 ,stdin);
		if( strcmp( controller4vul_2266, "A") < 0)
		{
			int_1 = v_work(unsigned_int_2,uni_para);

			int_1 = int_3 * int_1;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_3 * float_4;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 * int_1;
	}
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_2;
		char_1 = char_1 * char_2;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
		double_2 = double_3;
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
	int_2 = int_1;
	if(1)
	{
		int_1 = int_5 * int_5;
	}
	float_3 = float_1 * float_2;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	short_2 = short_1 * short_1;
	if(1)
	{
		int_3 = int_5 + int_2;
	}
	if(1)
	{
		double double_5 = 1;
		short short_3 = 1;
		double_5 = double_2 + double_4;
		short_2 = short_2 * short_3;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4 * double_3;
	}
	long_1 = long_4;
	return int_5;
}

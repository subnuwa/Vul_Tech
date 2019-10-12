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

void v_proc_map_free( double parameter_1);
int v_ksceKernelDeleteHeap( char parameter_1);
int v_ksceKernelDeleteMutex( double parameter_1);
void v_patches_deinit();
int v_test_scenario_3( double parameter_1,int parameter_2,int uni_para);
int v_tai_inject_release( unsigned int parameter_1);
int v_taiInjectReleaseForKernel( unsigned int parameter_1);
int v_substitute_free_hooks( float parameter_1,int parameter_2);
void v_do_unhooking();
double v_tai_unhook_function();
short v_hooks_remove_hook( short parameter_1,double parameter_2);
int v_ksceKernelGetObjForUid( char parameter_1,char parameter_2,long parameter_3);
int v_tai_hook_release( unsigned int parameter_1,double parameter_2);
int v_taiHookReleaseForKernel( int parameter_1,char parameter_2);
int v_start_test( char parameter_1);
int v_ksceKernelRxMemcpyKernelToUserForPid( unsigned int parameter_1,char parameter_2,int parameter_3,long parameter_4);
int v_ksceKernelCpuUnrestrictedMemcpy(float parameter_2,long parameter_3);
long v_tai_force_memcpy( int parameter_1,float parameter_3,double parameter_4);
float v_tai_inject_abs( int parameter_1,double parameter_3,char parameter_4);
char v_taiInjectAbsForKernel( double parameter_1,int parameter_3,int parameter_4);
short v_taiInjectDataForKernel( float parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5,char parameter_6);
int v_test_scenario_2( float parameter_1,int parameter_2);
int v_module_get_offset( char parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
char v_taiHookFunctionOffsetForKernel( int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7);
int v_tai_memcpy_to_kernel( unsigned int parameter_1,char parameter_3,float parameter_4);
int v_module_get_import_func( unsigned int parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4,float parameter_5);
void v_taiHookFunctionImportForKernel( short parameter_1,short parameter_2,double parameter_3,double parameter_4,int parameter_5,unsigned int parameter_6);
void v_slab_destroy( char parameter_1);
int v_proc_map_remove( char parameter_1,int parameter_2);
float v_sce_exe_free( char parameter_1,long parameter_2);
void v_slab_free( double parameter_1,char parameter_2);
double v_slab_getmirror( float parameter_1,double parameter_2);
void v_cache_flush( long parameter_1,short parameter_2,short parameter_3);
int v_substitute_strerror( int parameter_1);
int v_substitute_hook_functions( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4);
float v_do_hooking();
short v_tai_hook_function( short parameter_1,float parameter_3,int uni_para);
void v_hooks_add_hook( unsigned int parameter_1,double parameter_2,int uni_para);
int v_ksceKernelFreeMemBlock( double parameter_1);
int v_ksceKernelGetMemBlockBase( short parameter_1);
long v_ksceKernelAllocMemBlock( float parameter_1,long parameter_2,int parameter_3,float parameter_4);
unsigned int v_sce_exe_alloc( long parameter_1,int parameter_3,double parameter_4,unsigned int parameter_5,unsigned int parameter_6);
double v_slab_alloc( float parameter_1,double parameter_2);
void v_ksceKernelFreeHeapMemory( double parameter_1);
void v_free();
int v_ksceKernelDeleteUid( long parameter_1);
int v_ksceKernelUnlockMutex( double parameter_1,int parameter_2);
short v_next_pow_2( short parameter_1);
void v_slab_init( long parameter_1,float parameter_2,float parameter_3);
int v_proc_map_try_insert( int parameter_1,long parameter_2,unsigned int parameter_3);
int v_ksceKernelLockMutex( int parameter_1,int parameter_2,char parameter_3);
void v_ksceKernelCreateUidObj( double parameter_1,double parameter_2,int parameter_3,short parameter_4);
unsigned int v_tai_hook_func_abs( unsigned int parameter_1,short parameter_2,int parameter_4,int uni_para);
long v_taiHookFunctionAbs( int parameter_1,unsigned int parameter_2,double parameter_4,int uni_para);
void v_find_int_for_user( double parameter_1,char parameter_2,char parameter_3,long parameter_4);
int v_ksceKernelMemcpyUserToKernelForPid( long parameter_1,int parameter_3,long parameter_4);
int v_module_get_export_func( short parameter_1,int parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5);
long v_taiHookFunctionExportForKernel( long parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,char parameter_5,short parameter_6,int uni_para);
int v_sce_to_tai_module_info( char parameter_1,long parameter_3);
int v_module_get_by_name_nid( double parameter_1,char parameter_2,short parameter_3,long parameter_4);
int v_taiGetModuleInfoForKernel( int parameter_1,float parameter_2,int parameter_3);
unsigned int v_permute_index( int parameter_1,int parameter_2,int parameter_3);
int v_test_scenario_1( char parameter_1,int parameter_2,int uni_para);
void v_free_patch();
double v_init_patch();
short v_ksceKernelGetUidClass();
int v_ksceKernelCreateClass( float parameter_1,char parameter_2,char parameter_4,short parameter_5,double parameter_6);
double v_ksceKernelCreateMutex( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4);
char v_malloc();
int v_ksceKernelAllocHeapMemory( float parameter_1,double parameter_2);
long v_proc_map_alloc( int parameter_1);
short v_ksceKernelCreateHeap( unsigned int parameter_1,unsigned int parameter_2,float parameter_3);
int v_patches_init();
void v_proc_map_free( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_ksceKernelDeleteMutex(double_1);

	char_1 = char_1 + char_1;
	int_4 = int_2 * int_3;
	v_ksceKernelFreeHeapMemory(double_1);

}
int v_ksceKernelDeleteHeap( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_ksceKernelDeleteMutex( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Wh") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_2;
		char_1 = char_1 + char_2;
	}
	float_2 = float_1 + float_1;
	float_2 = float_2 * float_3;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	return int_1;
}
void v_patches_deinit()
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_ksceKernelDeleteHeap(char_1);

	int_1 = int_1 * int_1;
	v_proc_map_free(double_1);

	double_2 = double_1 * double_1;
	double_3 = double_3 * double_2;
	long_1 = long_1 + long_2;
	long_3 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = v_ksceKernelDeleteMutex(double_1);

}
int v_test_scenario_3( double parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_2[3];
	fgets(controller4vul_2 ,3 ,stdin);
	if( strcmp( controller4vul_2, "@H") < 0)
	{
		int_1 = v_test_scenario_1(char_1,int_2,uni_para);

	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "B") > 0)
	{
	}
	return int_3;
}
int v_tai_inject_release( unsigned int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long_1 = v_tai_force_memcpy(int_1,float_1,double_1);

	double_2 = double_2 + double_3;
	int_1 = v_ksceKernelGetObjForUid(char_1,char_1,long_2);

	float_1 = float_2 * float_3;
	double_2 = double_2 * double_2;
	float_4 = float_4 + float_1;
	char_2 = char_1 * char_2;
	short_3 = short_1 * short_2;
	int_1 = v_ksceKernelDeleteUid(long_1);

	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	short_1 = short_3 + short_2;
	v_ksceKernelFreeHeapMemory(double_2);

	int_1 = int_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	long_3 = long_1 * long_3;
	int_2 = int_3 * int_2;
	int_2 = v_ksceKernelUnlockMutex(double_2,int_4);

	char_2 = char_3 + char_4;
	double_1 = double_2 * double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "=") < 0)
	{
		int_1 = v_proc_map_remove(char_4,int_4);

		int_4 = int_5 + int_4;
		short_3 = short_1;
		int_5 = v_ksceKernelLockMutex(int_5,int_3,char_4);

		short_2 = short_1;
	}
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int_1 = int_3;
		long_3 = long_4 + long_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
	}
	int_1 = int_5 * int_5;
	return int_6;
}
int v_taiInjectReleaseForKernel( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	int_1 = v_tai_inject_release(unsigned_int_1);

}
int v_substitute_free_hooks( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	return int_1;
}
void v_do_unhooking()
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int_1 = v_substitute_free_hooks(float_1,int_2);

}
double v_tai_unhook_function()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_3 + double_1;
	float_1 = float_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_1 = v_substitute_strerror(int_1);

		int_4 = int_2 * int_3;
	}
	return double_4;
	v_do_unhooking();

}
short v_hooks_remove_hook( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int_1 = v_ksceKernelLockMutex(int_2,int_1,char_1);

	short_1 = v_tai_hook_function(short_1,float_1,-1 );

	long_3 = long_1 + long_2;
	return short_1;
	double_1 = v_tai_unhook_function();

	v_cache_flush(long_3,short_1,short_1);

	int_2 = v_ksceKernelUnlockMutex(double_1,int_1);

}
int v_ksceKernelGetObjForUid( char parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
int v_tai_hook_release( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	short short_1 = 1;
	char char_5 = 1;
	double_1 = double_1;
	long_1 = long_1 + long_2;
	v_slab_free(double_2,char_1);

	int_1 = int_1 * int_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = v_ksceKernelGetObjForUid(char_2,char_3,long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			float float_2 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			double_3 = v_slab_getmirror(float_1,double_3);

			int_2 = int_3 + int_2;
			double_1 = double_1 + double_2;
			char_2 = char_3 * char_3;
			double_1 = double_4 + double_1;
			int_4 = v_ksceKernelUnlockMutex(double_3,int_5);

			int_2 = int_3 + int_3;
			if(1)
			{
				long long_3 = 1;
				float float_3 = 1;
				char_4 = char_1;
				unsigned_int_1 = unsigned_int_4;
				int_5 = v_ksceKernelLockMutex(int_1,int_5,char_1);

				long_3 = long_3 + long_3;
				float_2 = float_2 + float_3;
			}
			double_3 = double_1 * double_4;
			int_4 = v_proc_map_remove(char_3,int_6);

			float_2 = float_2;
		}
	}
	double_3 = double_1;
	short_1 = v_hooks_remove_hook(short_1,double_3);

	char_4 = char_1 * char_5;
	int_2 = int_1;
	int_3 = int_6 * int_3;
	return int_2;
	int_2 = v_ksceKernelDeleteUid(long_2);

}
int v_taiHookReleaseForKernel( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	return int_1;
	int_1 = v_tai_hook_release(unsigned_int_1,double_1);

}
int v_start_test( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	int_1 = int_1;
	long_1 = long_1 * long_2;
	short_1 = v_taiInjectDataForKernel(float_1,char_1,int_2,double_3,int_3,char_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_3 + double_2;
	long_2 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_3 + long_4;
	char_2 = char_2 + char_2;
	int_1 = int_4;
	short_2 = short_2 * short_2;
	int_5 = v_ksceKernelLockMutex(int_6,int_7,char_3);

	int_6 = v_taiInjectReleaseForKernel(unsigned_int_2);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		double double_7 = 1;
		if(1)
		{
			double_5 = double_4 + double_2;
			double_1 = double_6 + double_7;
			int_6 = int_1 + int_1;
		}
		float_1 = float_1 * float_2;
		if(1)
		{
			double_7 = double_1 * double_4;
			short_1 = short_2 * short_2;
			double_7 = double_7;
		}
		if(1)
		{
			double_1 = double_5 + double_1;
		}
	}
	if(1)
	{
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
			long_5 = v_taiHookFunctionExportForKernel(long_5,long_6,short_1,unsigned_int_1,char_3,short_2,-1 );

			double_1 = double_3 + double_5;
			int_3 = int_2 * int_3;
		}
		int_3 = v_taiGetModuleInfoForKernel(int_5,float_3,int_1);

		short_3 = short_1 + short_3;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 * float_2;
			char controller_8[3];
			fgets(controller_8 ,3 ,stdin);
			if( strcmp( controller_8, "yx") > 0)
			{
				unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
				float_3 = float_1 * float_2;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
			}
		}
	}
	if(1)
	{
		int_7 = int_5 * int_1;
	}
	unsigned_int_5 = unsigned_int_8 + unsigned_int_4;
	double_6 = double_4 * double_8;
	int_5 = v_ksceKernelUnlockMutex(double_6,int_7);

	char_4 = char_3 + char_2;
	unsigned_int_10 = unsigned_int_2 + unsigned_int_9;
	int_6 = int_2 + int_6;
	char_2 = char_1 * char_3;
	int_4 = v_taiHookReleaseForKernel(int_4,char_4);

	short_4 = short_2 * short_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_7;
			}
		}
		if(1)
		{
			if(1)
			{
				double_6 = double_4 * double_1;
			}
		}
		if(1)
		{
			double_5 = double_1;
		}
	}
	return int_2;
}
int v_ksceKernelRxMemcpyKernelToUserForPid( unsigned int parameter_1,char parameter_2,int parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_ksceKernelCpuUnrestrictedMemcpy(float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	char_1 = char_1 + char_2;
	return int_1;
}
long v_tai_force_memcpy( int parameter_1,float parameter_3,double parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float_2 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Y") < 0)
	{
		float_1 = float_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		short_2 = short_1 * short_1;
		int_2 = int_1 * int_2;
	}
	v_cache_flush(long_1,short_2,short_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	return long_2;
	int_2 = v_ksceKernelCpuUnrestrictedMemcpy(float_3,long_1);

	int_3 = v_ksceKernelRxMemcpyKernelToUserForPid(unsigned_int_1,char_1,int_3,long_3);

}
float v_tai_inject_abs( int parameter_1,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_1 = v_ksceKernelUnlockMutex(double_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	int_2 = v_tai_memcpy_to_kernel(unsigned_int_1,char_1,float_1);

	double_3 = double_2 * double_2;
	double_1 = double_4 * double_4;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_2;
	long_2 = long_3 * long_2;
	if(1)
	{
	}
	v_ksceKernelCreateUidObj(double_5,double_5,int_3,short_1);

	int_3 = int_1 + int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double_6 = double_5 + double_1;
		int_2 = v_ksceKernelDeleteUid(long_4);

		v_ksceKernelFreeHeapMemory(double_2);

		char_1 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	int_2 = v_proc_map_try_insert(int_4,long_2,unsigned_int_2);

	int_1 = int_5 * int_3;
	long_1 = long_5 * long_5;
	int_5 = v_ksceKernelAllocHeapMemory(float_1,double_4);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_2 + char_1;
	char_3 = char_1 + char_1;
	long_2 = v_tai_force_memcpy(int_6,float_2,double_7);

	double_6 = double_3 + double_8;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	long_5 = long_5 + long_3;
	double_1 = double_3 * double_4;
	int_3 = v_ksceKernelLockMutex(int_1,int_5,char_1);

	float_4 = float_2 * float_3;
	if(1)
	{
		long long_6 = 1;
		long_6 = long_4;
	}
	if(1)
	{
		int_1 = int_3 * int_5;
	}
	if(1)
	{
		char char_4 = 1;
		float float_6 = 1;
		char_4 = char_2 + char_2;
		float_5 = float_6;
	}
	if(1)
	{
		int_6 = int_3 + int_5;
	}
	long_2 = long_1 * long_3;
	return float_5;
}
char v_taiInjectAbsForKernel( double parameter_1,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	return char_1;
	float_1 = v_tai_inject_abs(int_1,double_1,char_2);

}
short v_taiInjectDataForKernel( float parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_taiInjectAbsForKernel(double_1,int_1,int_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") > 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	return short_1;
	int_3 = v_module_get_offset(char_1,unsigned_int_3,int_1,unsigned_int_1,char_1);

}
int v_test_scenario_2( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = v_permute_index(int_1,int_1,int_1);

	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1 + long_1;
	float_2 = float_2 + float_2;
	int_2 = v_taiGetModuleInfoForKernel(int_1,float_2,int_3);

	char_2 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_3 = int_4 * int_2;
		if(1)
		{
			short_4 = short_2 + short_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		char_3 = char_3;
		short_3 = v_taiInjectDataForKernel(float_2,char_2,int_4,double_1,int_5,char_4);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			if(1)
			{
				short_2 = short_1 + short_4;
				short_1 = short_1 + short_1;
			}
			if(1)
			{
			}
		}
	}
	return int_2;
}
int v_module_get_offset( char parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	short_2 = short_1 * short_1;
	unsigned_int_5 = unsigned_int_5;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	float_1 = float_1;
	int_1 = int_3;
	return int_2;
}
char v_taiHookFunctionOffsetForKernel( int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short_2 = short_1 + short_1;
	float_2 = float_1 * float_1;
	int_1 = v_module_get_offset(char_1,unsigned_int_1,int_1,unsigned_int_2,char_1);

	long_1 = v_taiHookFunctionAbs(int_2,unsigned_int_1,double_1,-1 );

	short_2 = short_1 * short_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "(") == 0)
	{
		float float_3 = 1;
		float_3 = float_3 * float_3;
	}
	return char_2;
}
int v_tai_memcpy_to_kernel( unsigned int parameter_1,char parameter_3,float parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "r") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = v_ksceKernelMemcpyUserToKernelForPid(long_1,int_2,long_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		char_2 = char_1 + char_1;
	}
	return int_3;
}
int v_module_get_import_func( unsigned int parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4,float parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	char char_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int_1 = v_ksceKernelMemcpyUserToKernelForPid(long_1,int_1,long_2);

	char_3 = char_1 + char_2;
	short_1 = short_1 * short_2;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 + double_1;
	char_3 = char_1;
	int_2 = int_2;
	if(1)
	{
		long_3 = long_2 * long_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		if(1)
		{
			int_2 = int_2 + int_2;
		}
		if(1)
		{
			if(1)
			{
				char_1 = char_1 + char_4;
			}
			if(1)
			{
				if(1)
				{
					int_1 = v_module_get_by_name_nid(double_3,char_5,short_3,long_3);

					unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
				}
			}
			float_4 = float_3 * float_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					for(int looper_2=0; looper_2<1;looper_2++)
					{
						if(1)
						{
							char char_6 = 1;
							char_5 = char_1 * char_6;
							unsigned_int_2 = unsigned_int_2;
						}
					}
				}
				if(1)
				{
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double_6 = double_4 + double_5;
					if(1)
					{
						if(1)
						{
							unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
						}
						char_4 = char_3 + char_5;
					}
				}
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					for(int looper_3=0; looper_3<1;looper_3++)
					{
						if(1)
						{
							unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
							unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
						}
					}
				}
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
					if(1)
					{
						if(1)
						{
							float_1 = float_4 * float_4;
						}
						v_find_int_for_user(double_7,char_3,char_4,long_3);

						unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
					}
				}
			}
		}
		if(1)
		{
			double double_8 = 1;
			double_3 = double_2 * double_8;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	}
	return int_1;
}
void v_taiHookFunctionImportForKernel( short parameter_1,short parameter_2,double parameter_3,double parameter_4,int parameter_5,unsigned int parameter_6)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int_1 = v_module_get_import_func(unsigned_int_1,int_2,float_1,unsigned_int_1,float_1);

	double_1 = double_1 * double_1;
	char_2 = char_1 + char_2;
	char_2 = char_1;
	short_1 = short_2;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 + char_2;
	}
	long_1 = v_taiHookFunctionAbs(int_2,unsigned_int_1,double_1,-1 );

	int_1 = int_3 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 * double_1;
	}
	int_2 = v_tai_memcpy_to_kernel(unsigned_int_1,char_2,float_2);

}
void v_slab_destroy( char parameter_1)
{
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "0") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	float_3 = v_sce_exe_free(char_1,long_1);

}
int v_proc_map_remove( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") < 0)
	{
		v_ksceKernelFreeHeapMemory(double_1);

		int_2 = int_1 + int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		int_2 = int_2 + int_1;
	}
	int_2 = v_ksceKernelLockMutex(int_3,int_2,char_1);

	v_slab_destroy(char_2);

	int_3 = v_ksceKernelUnlockMutex(double_1,int_2);

	double_2 = double_1 + double_2;
	return int_3;
}
float v_sce_exe_free( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int_1 = v_ksceKernelFreeMemBlock(double_1);

	double_1 = double_2 + double_1;
	int_2 = int_1;
	short_3 = short_1 + short_2;
	return float_1;
}
void v_slab_free( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	long long_1 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_2;
	double_2 = double_1 * double_3;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		short short_1 = 1;
		int_4 = int_3 + int_3;
		if(1)
		{
			if(1)
			{
				char char_3 = 1;
				char_3 = char_1 + char_2;
			}
			float_2 = float_3;
		}
		if(1)
		{
			float_3 = float_3 + float_1;
		}
		float_1 = float_4 + float_4;
		if(1)
		{
			float_3 = float_3 + float_1;
		}
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				char controller_9[3];
				fgets(controller_9 ,3 ,stdin);
				if( strcmp( controller_9, "(L") > 0)
				{
					short short_3 = 1;
					short short_4 = 1;
					short_4 = short_3 + short_2;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			double_1 = double_4 * double_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_1 + int_3;
			char_1 = char_2;
			int_1 = int_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					float_4 = float_5;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
				}
				if(1)
				{
					double_1 = double_1;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			}
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			float_5 = v_sce_exe_free(char_2,long_1);

			unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
			char controller_16[3];
			fgets(controller_16 ,3 ,stdin);
			if( strcmp( controller_16, "&d") < 0)
			{
				if(1)
				{
					double_5 = double_1;
				}
				int_1 = int_2;
			}
			if(1)
			{
				double_3 = double_5;
			}
			int_3 = int_4 + int_4;
			char controller_19[3];
			fgets(controller_19 ,3 ,stdin);
			if( strcmp( controller_19, "1E") > 0)
			{
				short short_5 = 1;
				short_5 = short_2 + short_5;
			}
			int_2 = int_5;
			int_1 = int_1 * int_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_6;
	}
}
double v_slab_getmirror( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = short_2;
	int_1 = int_1 + int_1;
	short_3 = short_3;
	int_1 = int_1 + int_2;
	return double_1;
}
void v_cache_flush( long parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
}
int v_substitute_strerror( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short_1 = short_2;
	char_2 = char_1 + char_1;
	return int_1;
}
int v_substitute_hook_functions( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_2;
	return int_1;
}
float v_do_hooking()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_1;
	long_1 = long_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		int_1 = int_1 * int_1;
		double_3 = double_3 + double_1;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			int int_2 = 1;
			int int_5 = 1;
			double_4 = double_2 * double_1;
			short_4 = short_1 * short_3;
			int_2 = int_1 * int_1;
			int_2 = int_2 * int_2;
			int_3 = v_substitute_hook_functions(double_1,unsigned_int_2,long_2,int_4);

			int_5 = int_3 * int_1;
		}
		double_1 = double_1 * double_1;
		double_4 = double_1;
	}
	return float_2;
}
short v_tai_hook_function( short parameter_1,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_2;
	float_1 = float_1 * float_2;
	char controller4vul_10[2];
	fgets(controller4vul_10 ,2 ,stdin);
	if( strcmp( controller4vul_10, "6") > 0)
	{
		int int_4 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 997)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		int_4 = int_3 * int_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_5;
	int_3 = int_3 + int_5;
	long_2 = long_1 + long_3;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_4;
	short_2 = short_1 + short_2;
	char_2 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") < 0)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	short_2 = short_2 + short_2;
}
void v_hooks_add_hook( unsigned int parameter_1,double parameter_2,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	float_2 = float_2;
	char controller4vul_8[2];
	fgets(controller4vul_8 ,2 ,stdin);
	if( strcmp( controller4vul_8, "3") < 0)
	{
		float_4 = float_1 + float_3;
		char controller4vul_9[3];
		fgets(controller4vul_9 ,3 ,stdin);
		if( strcmp( controller4vul_9, "${") < 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			short_1 = v_tai_hook_function(short_1,float_3,uni_para);

			int_1 = int_2;
			short_2 = short_2 + short_2;
			int_2 = int_3 * int_4;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			short_1 = short_2 + short_1;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "Z") < 0)
		{
			long long_1 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "wj") > 0)
	{
		char char_4 = 1;
		char char_5 = 1;
		float float_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char_5 = char_4 + char_1;
		double_1 = double_1 * double_1;
		float_5 = float_3 + float_3;
		long_2 = long_2 * long_2;
		char_6 = char_1 * char_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		double_1 = double_1 + double_2;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		float_2 = float_4 + float_4;
		double_1 = double_1 + double_1;
	}
	float_4 = float_3 * float_4;
}
int v_ksceKernelFreeMemBlock( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "dN") > 0)
	{
		int_1 = int_1 * int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "+)") == 0)
	{
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_1 * int_1;
		long_1 = long_1 * long_1;
		v_free();

		float_1 = float_2;
	}
	short_2 = short_1 * short_2;
	return int_1;
}
int v_ksceKernelGetMemBlockBase( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	double_1 = double_1;
	return int_1;
}
long v_ksceKernelAllocMemBlock( float parameter_1,long parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	short short_2 = 1;
	float float_6 = 1;
	double double_3 = 1;
	short_1 = short_1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_2;
	float_1 = float_3 + float_4;
	long_2 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			float_4 = float_2 * float_1;
		}
	}
	int_3 = int_1 * int_2;
	float_5 = float_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	float_5 = float_5 * float_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_4 = 1;
			short short_3 = 1;
			short_2 = short_1 * short_1;
			char_1 = char_2 * char_4;
			short_2 = short_3;
		}
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "Dh") > 0)
	{
		float float_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_2 * float_7;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	double_2 = double_3 * double_1;
	return long_1;
}
unsigned int v_sce_exe_alloc( long parameter_1,int parameter_3,double parameter_4,unsigned int parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	short short_3 = 1;
	int int_7 = 1;
	double double_6 = 1;
	short short_4 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	float_1 = float_2;
	long_1 = v_ksceKernelAllocMemBlock(float_1,long_2,int_1,float_2);

	int_3 = int_4 + int_2;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
		double_2 = double_2 * double_2;
		int_2 = int_5;
	}
	int_3 = int_3 * int_3;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	double_1 = double_2 + double_4;
	int_5 = int_1 * int_5;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		double_3 = double_1 * double_5;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "&") < 0)
		{
			long_1 = long_3 * long_4;
		}
	}
	if(1)
	{
	}
	char_1 = char_1;
	int_6 = v_ksceKernelGetMemBlockBase(short_3);

	long_4 = long_1;
	int_5 = int_7;
	int_1 = int_5 * int_1;
	short_3 = short_2;
	long_1 = long_3;
	if(1)
	{
		long long_5 = 1;
		long_5 = long_1 + long_3;
	}
	double_3 = double_5 + double_6;
	int_4 = v_ksceKernelFreeMemBlock(double_5);

	short_4 = short_4 + short_1;
	int_6 = int_7 + int_7;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 + float_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_1 * char_2;
	return unsigned_int_3;
}
double v_slab_alloc( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_3 = double_1 + double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_4;
		}
		double_6 = double_5 + double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = v_sce_exe_alloc(long_1,int_3,double_6,unsigned_int_1,unsigned_int_3);

		char_2 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	double_4 = double_5 + double_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_6;
	return double_7;
}
void v_ksceKernelFreeHeapMemory( double parameter_1)
{
	v_free();

}
void v_free()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_ksceKernelFreeHeapMemory(double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
int v_ksceKernelDeleteUid( long parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	float_1 = float_2;
	v_free();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
int v_ksceKernelUnlockMutex( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return int_1;
}
short v_next_pow_2( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	double_3 = double_1 * double_2;
	long_2 = long_1 * long_1;
	float_1 = float_1 + float_1;
	long_2 = long_3 * long_3;
	double_2 = double_3 + double_3;
	double_2 = double_3;
	return short_1;
}
void v_slab_init( long parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	short_1 = short_1 + short_1;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	double_1 = double_1 + double_1;
	int_2 = int_2;
	char_2 = char_2 + char_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "0") > 0)
		{
			float float_1 = 1;
			float_1 = float_2;
			unsigned_int_1 = unsigned_int_4;
		}
	}
	short_1 = v_next_pow_2(short_1);

	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	float_4 = float_2 + float_3;
	short_1 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_5;
	double_4 = double_2 * double_3;
}
int v_proc_map_try_insert( int parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int_1 = v_ksceKernelLockMutex(int_1,int_2,char_1);

	int_2 = v_ksceKernelAllocHeapMemory(float_1,double_1);

	v_slab_init(long_1,float_2,float_3);

	double_4 = double_2 + double_3;
	return int_1;
	int_3 = v_ksceKernelUnlockMutex(double_1,int_3);

}
int v_ksceKernelLockMutex( int parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "(") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	return int_1;
}
void v_ksceKernelCreateUidObj( double parameter_1,double parameter_2,int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	float_1 = float_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	long_1 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_2 = long_2 + long_2;
			char_2 = v_malloc();

			int_1 = int_2;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
		long_2 = long_2 * long_1;
	}
	double_2 = double_1 + double_2;
	int_1 = int_3 + int_4;
}
unsigned int v_tai_hook_func_abs( unsigned int parameter_1,short parameter_2,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_2 + double_2;
	int_1 = int_1 + int_2;
	char_1 = char_1 + char_1;
	short_3 = short_1 * short_2;
	char_3 = char_2 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_6[2];
	fgets(controller4vul_6 ,2 ,stdin);
	if( strcmp( controller4vul_6, "B") > 0)
	{
		char controller4vul_7[3];
		fgets(controller4vul_7 ,3 ,stdin);
		if( strcmp( controller4vul_7, "3*") < 0)
		{
			v_hooks_add_hook(unsigned_int_3,double_2,uni_para);

		}
		if(1)
		{
		}
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		long long_2 = 1;
		int_1 = int_1 + int_2;
		long_3 = long_1 * long_2;
		char_3 = char_3;
		short_3 = short_4;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
	}
	short_3 = short_2 + short_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_3 = int_1 + int_1;
	int_1 = int_1 + int_4;
	short_5 = short_6;
	int_4 = int_5 + int_1;
	int_6 = int_3 + int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_6 = short_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6;
		float_2 = float_1 + float_3;
		if(1)
		{
			long long_5 = 1;
			long_3 = long_4 + long_4;
			long_5 = long_1 * long_1;
			unsigned_int_4 = unsigned_int_6;
		}
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			char_4 = char_2;
			char_3 = char_5 + char_6;
		}
	}
	short_1 = short_5 + short_5;
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "[l") > 0)
	{
		long long_6 = 1;
		long_3 = long_4 * long_6;
		float_4 = float_2 + float_3;
	}
	float_2 = float_4;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, "E") > 0)
	{
		float float_5 = 1;
		float float_6 = 1;
		int_7 = int_2;
		int_7 = int_7 * int_2;
		double_1 = double_2;
		float_6 = float_2 + float_5;
		int_7 = int_5 * int_2;
		int_4 = int_1 * int_4;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 * unsigned_int_7;
		char_3 = char_1 + char_6;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		int_3 = int_7 * int_1;
		double_4 = double_3 + double_2;
	}
	int_1 = int_4 * int_4;
	return unsigned_int_6;
}
long v_taiHookFunctionAbs( int parameter_1,unsigned int parameter_2,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_tai_hook_func_abs(unsigned_int_2,short_1,int_1,uni_para);

	return long_1;
}
void v_find_int_for_user( double parameter_1,char parameter_2,char parameter_3,long parameter_4)
{
}
int v_ksceKernelMemcpyUserToKernelForPid( long parameter_1,int parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	return int_1;
}
int v_module_get_export_func( short parameter_1,int parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	long_3 = long_1 + long_2;
	long_3 = long_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_3 = int_2 + int_1;
	int_2 = int_3 + int_1;
	int_4 = int_2 + int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		v_find_int_for_user(double_3,char_1,char_1,long_2);

		int_3 = int_2 * int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			int int_5 = 1;
			if(1)
			{
				double_3 = double_3 + double_3;
			}
			int_5 = int_2 + int_5;
		}
		if(1)
		{
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						long long_4 = 1;
						unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
						long_4 = long_2;
					}
				}
			}
			if(1)
			{
				int int_6 = 1;
				int_6 = int_3 * int_4;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					if(1)
					{
						float float_1 = 1;
						float_1 = float_1 + float_1;
					}
					int_1 = v_module_get_by_name_nid(double_4,char_2,short_1,long_3);

					int_3 = v_ksceKernelMemcpyUserToKernelForPid(long_2,int_7,long_3);

					unsigned_int_6 = unsigned_int_2;
				}
			}
		}
		double_5 = double_5;
	}
	return int_2;
}
long v_taiHookFunctionExportForKernel( long parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,char parameter_5,short parameter_6,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float_3 = float_1 + float_2;
	long_1 = long_1 * long_2;
	char_2 = char_1 + char_1;
	char controller4vul_5[3];
	fgets(controller4vul_5 ,3 ,stdin);
	if( strcmp( controller4vul_5, "`K") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		long_1 = v_taiHookFunctionAbs(int_1,unsigned_int_1,double_1,uni_para);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	return long_3;
}
int v_sce_to_tai_module_info( char parameter_1,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			float_1 = float_1;
		}
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_1 = int_2 * int_2;
	if(1)
	{
		int int_3 = 1;
		char char_1 = 1;
		int int_4 = 1;
		if(1)
		{
			float_2 = float_1;
		}
		if(1)
		{
			int_3 = int_2 * int_3;
		}
		char_2 = char_1 * char_1;
		double_1 = double_3;
		int_3 = int_1 + int_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_1 * int_4;
		short_1 = short_2;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			float_3 = float_1 * float_3;
		}
		char_2 = char_3 * char_3;
		short_3 = short_1 + short_2;
		short_3 = short_2 + short_3;
		double_2 = double_2;
		short_1 = short_3;
		short_1 = short_4 * short_3;
		int_2 = int_2 + int_5;
	}
	if(1)
	{
		float_2 = float_2 + float_3;
	}
	return int_1;
}
int v_module_get_by_name_nid( double parameter_1,char parameter_2,short parameter_3,long parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double_1 = double_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = v_sce_to_tai_module_info(char_1,long_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	long_4 = long_1 + long_3;
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_4;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		if(1)
		{
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_2 = float_3;
		}
		if(1)
		{
			if(1)
			{
				char char_3 = 1;
				char_2 = char_3;
			}
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_1;
		}
	}
	return int_5;
}
int v_taiGetModuleInfoForKernel( int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return int_1;
	int_1 = v_module_get_by_name_nid(double_1,char_1,short_1,long_1);

}
unsigned int v_permute_index( int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	return unsigned_int_1;
}
int v_test_scenario_1( char parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	double_2 = double_2 * double_1;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	float_3 = float_3 * float_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double_2 = double_3 * double_1;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_2 = int_1 * int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_1 * int_1;
		double_1 = double_3 * double_2;
		int_1 = int_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		char controller4vul_3[2];
		fgets(controller4vul_3 ,2 ,stdin);
		if( strcmp( controller4vul_3, "w") < 0)
		{
			char controller4vul_4[2];
			fgets(controller4vul_4 ,2 ,stdin);
			if( strcmp( controller4vul_4, "S") > 0)
			{
				unsigned int unsigned_int_5 = 1;
				long_3 = v_taiHookFunctionExportForKernel(long_2,long_2,short_1,unsigned_int_2,char_3,short_2,uni_para);

				unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
				double_2 = double_3;
			}
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, " w") > 0)
			{
			}
		}
		unsigned_int_4 = unsigned_int_6 * unsigned_int_4;
	}
	return int_3;
}
void v_free_patch()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
}
double v_init_patch()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_2;
	return double_1;
}
short v_ksceKernelGetUidClass()
{
	short short_1 = 1;
	return short_1;
}
int v_ksceKernelCreateClass( float parameter_1,char parameter_2,char parameter_4,short parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double_2 = double_1 * double_2;
	double_4 = double_2 + double_3;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_1 + double_1;
	return int_1;
}
double v_ksceKernelCreateMutex( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	double_2 = double_2;
	double_2 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		float_2 = float_1 + float_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_1 = float_1 * float_1;
			int_1 = int_1 + int_1;
			unsigned_int_5 = unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	}
	if(1)
	{
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_1 * short_1;
		long_1 = long_1 + long_2;
	}
	int_1 = int_2 * int_3;
	return double_1;
}
char v_malloc()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	int_1 = v_ksceKernelAllocHeapMemory(float_1,double_1);

	short_1 = short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "J(") > 0)
	{
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_1 + int_3;
		double_2 = double_2 * double_3;
	}
	return char_1;
}
int v_ksceKernelAllocHeapMemory( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	return int_1;
	char_1 = v_malloc();

}
long v_proc_map_alloc( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "p") < 0)
	{
	}
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double_3 = v_ksceKernelCreateMutex(unsigned_int_3,unsigned_int_1,int_1,float_3);

		int_2 = int_1 * int_1;
	}
	return long_1;
	int_1 = v_ksceKernelAllocHeapMemory(float_4,double_3);

}
short v_ksceKernelCreateHeap( unsigned int parameter_1,unsigned int parameter_2,float parameter_3)
{
	short short_1 = 1;
	return short_1;
}
int v_patches_init()
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = v_proc_map_alloc(int_1);

	double_2 = double_1 * double_2;
	double_1 = v_init_patch();

	char_1 = char_1;
	double_3 = v_ksceKernelCreateMutex(unsigned_int_1,unsigned_int_2,int_2,float_1);

	short_1 = v_ksceKernelGetUidClass();

	double_5 = double_4 + double_2;
	int_2 = int_3 + int_4;
	double_1 = double_2;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ",") > 0)
	{
		int_3 = v_ksceKernelCreateClass(float_1,char_2,char_2,short_1,double_6);

		v_free_patch();

		short_1 = short_2 * short_2;
	}
	long_1 = long_4;
	short_2 = v_ksceKernelCreateHeap(unsigned_int_5,unsigned_int_5,float_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	long_3 = long_3 + long_1;
	if(1)
	{
	}
	return int_3;
}
int main()
{
	int uni_para =997;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_7 = 1;
	long long_8 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_4 + int_4;
	int_4 = int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1[2];
	fgets(controller4vul_1 ,2 ,stdin);
	if( strcmp( controller4vul_1, "+") > 0)
	{
		int_6 = v_test_scenario_3(double_1,int_6,uni_para);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_1 = short_1 * short_2;
	}
	int_5 = int_5 + int_3;
	float_1 = float_1 * float_1;
	short_3 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_3;
	char_2 = char_1 + char_2;
	double_1 = double_1;
	int_5 = int_3 + int_4;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_7 = 1;
		double_1 = double_3 + double_1;
		char_3 = char_1 * char_1;
		short_4 = short_2;
		int_7 = int_3 + int_5;
	}
	char_2 = char_2 + char_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_2 + double_3;
	}
	short_4 = short_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_4 = 1;
		long_2 = long_1 + long_1;
		long_3 = long_4;
		unsigned_int_2 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	long_5 = long_2 + long_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_4 = double_2 + double_1;
	}
	double_5 = double_5 + double_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char char_4 = 1;
		long long_6 = 1;
		float_1 = float_1 * float_1;
		char_4 = char_2 * char_2;
		short_1 = short_4 + short_1;
		long_4 = long_6 + long_4;
	}
	long_7 = long_1 + long_5;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	int_4 = int_1;
	long_5 = long_3 * long_8;
	return int_5;
}

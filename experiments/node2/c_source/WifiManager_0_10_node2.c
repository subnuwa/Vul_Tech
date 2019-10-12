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

void v_pp2d_free_texture( short parameter_1);
void v_pp2d_exit();
void v_save_from_selected();
void v_write_to_selected();
void v_next_slot_left();
void v_next_slot_right();
void v_pp2d_end_draw();
void v_draw_list();
float v_pp2d_get_text_height( int parameter_1,float parameter_2,float parameter_3);
unsigned int v_draw_single_slot( int parameter_1,float parameter_2);
void v_draw_top();
void v_pp2d_draw_textf( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,char parameter_6,float parameter_7);
void v_draw_info( int parameter_1,long parameter_2);
void v_draw_interface();
long v_pp2d_set_text_color( unsigned int parameter_1);
void v_pp2d_draw_text_wrap( float parameter_1,float parameter_2,float parameter_3,float parameter_4,double parameter_5,float parameter_6,short parameter_7);
void v_pp2d_draw_text( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,int parameter_6);
char v_pp2d_get_text_size_internal( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,int parameter_6);
float v_pp2d_get_text_width( short parameter_1,float parameter_2,float parameter_3);
void v_pp2d_draw_text_center( int parameter_1,float parameter_2,float parameter_3,float parameter_4,short parameter_5,short parameter_6);
float v_pp2d_add_text_vertex( float parameter_1,float parameter_2,float parameter_3,float parameter_4,float parameter_5);
long v_pp2d_fast_draw_vbo( int parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5,float parameter_6,float parameter_7,float parameter_8,float parameter_9);
void v_pp2d_draw_rectangle( int parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5);
void v_draw();
void v_draw_instructions();
void v_pp2d_draw_on( char parameter_1,float parameter_2);
void v_pp2d_begin_draw( float parameter_1,unsigned int parameter_2);
void v_next_backup_down();
void v_go_down();
long v_can_go_down_159();
int v_can_go_down();
void v_delete_selected_backup_157();
void v_delete_selected_backup();
void v_toggle_password_visibility_155();
void v_toggle_password_visibility();
float v_always_true();
void v_next_backup_up();
void v_go_up();
double v_selected_new_backup();
int v_selected_other_backup();
void v_save_from_slot_3();
void v_save_from_slot_2();
void v_cleanPath( char parameter_1);
unsigned int v_get_input( char parameter_1,double parameter_2);
void v_save_from( int parameter_1);
void v_save_from_slot_1();
void v_write_to_slot_3();
void v_write_to_slot_2();
unsigned int v_read_slot();
char v_deleteFile( int parameter_1,double parameter_2);
float v_createFolderRecursively( int parameter_1,short parameter_2);
void v_openFile( short parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4);
unsigned int v_init_crc16_tab();
short v_crc_16( int parameter_1,long parameter_2);
void v_fix_slot_crc();
float v_write_slot();
float v_get_data();
void v_copy_slot( long parameter_1);
void v_write_to( int parameter_1);
void v_write_to_slot_1();
void v_select_slot_3();
void v_select_slot_2();
void v_select_slot( int parameter_1);
void v_select_slot_1();
short v_exists_slot_3();
short v_exists_slot_2();
unsigned int v_slot_exists( int parameter_1);
long v_exists_slot_1();
void v_init_buttons();
int v_pp2d_get_next_pow2( double parameter_1);
void v_pp2d_load_texture_memory( short parameter_1,unsigned int parameter_3,long parameter_4);
void v_lodepng_state_cleanup();
short v_color_tree_cleanup( short parameter_1);
double v_color_tree_get( long parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,float parameter_5);
unsigned int v_addColorBits( float parameter_1,double parameter_2,int parameter_3,short parameter_4);
short v_rgba8ToPixel( short parameter_1,short parameter_2,short parameter_3,int parameter_4,short parameter_5,char parameter_6,long parameter_7,float parameter_8);
char v_getPixelColorRGBA8( long parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,short parameter_6,short parameter_7);
long v_readBitsFromReversedStream( char parameter_1,short parameter_2,unsigned int parameter_3);
double v_getPixelColorsRGBA8( int parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5);
double v_rgba16ToPixel( short parameter_1,unsigned int parameter_2,short parameter_3,unsigned int parameter_4,short parameter_5,short parameter_6,short parameter_7);
char v_getPixelColorRGBA16( int parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,char parameter_7);
long v_color_tree_add( double parameter_1,double parameter_2,double parameter_3,double parameter_4,long parameter_5,char parameter_6);
unsigned int v_color_tree_init( double parameter_1);
double v_lodepng_convert( double parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5,unsigned int parameter_6);
unsigned int v_lodepng_color_mode_copy( float parameter_1,float parameter_2);
void v_lodepng_color_mode_equal( float parameter_1,char parameter_2);
unsigned int v_setBitOfReversedStream0( unsigned int parameter_1,short parameter_2,float parameter_3);
float v_Adam7_deinterlace( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,long parameter_5);
void v_Adam7_getpassvalues( char parameter_1,float parameter_2,float parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,float parameter_8);
unsigned int v_setBitOfReversedStream( float parameter_1,float parameter_2,float parameter_3);
void v_readBitFromReversedStream( unsigned int parameter_1,double parameter_2);
long v_removePaddingBits( long parameter_1,float parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5);
long v_paethPredictor( short parameter_1,short parameter_2,short parameter_3);
float v_unfilterScanline( int parameter_1,long parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5,long parameter_6);
float v_unfilter( float parameter_1,long parameter_2,int parameter_3,double parameter_4,int parameter_5);
float v_postProcessScanlines( float parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5);
float v_ucvector_resizev( char parameter_1,unsigned int parameter_2,short parameter_3);
long v_lodepng_get_raw_size( unsigned int parameter_1,short parameter_2,long parameter_3);
int v_getNumColorChannels( unsigned int parameter_1);
long v_lodepng_get_bpp_lct( float parameter_1,int parameter_2);
void v_lodepng_get_bpp( double parameter_1);
int v_lodepng_get_raw_size_idat( short parameter_1,float parameter_2,long parameter_3);
double v_lodepng_chunk_next_const( double parameter_1);
double v_lodepng_chunk_check_crc( double parameter_1);
float v_lodepng_chunk_append( unsigned int parameter_1,short parameter_2,int parameter_3);
short v_lodepng_chunk_ancillary();
unsigned int v_readChunk_pHYs( long parameter_1,int parameter_2,int parameter_3);
unsigned int v_readChunk_tIME( long parameter_1,char parameter_2,long parameter_3);
double v_lodepng_add_itext( double parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
float v_readChunk_iTXt( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,int uni_para);
long v_ucvector_cleanup();
int v_ucvector_push_back( long parameter_1,char parameter_2);
short v_update_adler32( char parameter_1,double parameter_2,long parameter_3);
void v_adler32( unsigned int parameter_1,double parameter_2);
float v_HuffmanTree_cleanup( short parameter_1);
unsigned int v_huffmanDecodeSymbol( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4);
double v_readBitsFromStream( short parameter_1,int parameter_2,int parameter_3);
int v_getTreeInflateDynamic( float parameter_1,int parameter_2,long parameter_3,char parameter_4,char parameter_5);
long v_generateFixedDistanceTree( char parameter_1);
short v_HuffmanTree_make2DTree( int parameter_1);
char v_uivector_cleanup();
char v_uivector_reserve( short parameter_1,short parameter_2);
int v_uivector_resize( long parameter_1,char parameter_2);
void v_uivector_resizev( float parameter_1,float parameter_2,char parameter_3);
float v_uivector_init( int parameter_1);
long v_HuffmanTree_makeFromLengths2( unsigned int parameter_1);
double v_HuffmanTree_makeFromLengths( int parameter_1,long parameter_2,double parameter_3,float parameter_4);
short v_generateFixedLitLenTree( char parameter_1);
char v_getTreeInflateFixed( int parameter_1,unsigned int parameter_2);
double v_HuffmanTree_init( int parameter_1);
double v_inflateHuffmanBlock( long parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5,long parameter_6);
short v_inflateNoCompression( int parameter_1,char parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5);
unsigned int v_readBitFromStream( short parameter_1,double parameter_2);
void v_lodepng_inflatev( short parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4);
int v_ucvector_init_buffer( char parameter_1,double parameter_2,int parameter_3);
int v_lodepng_inflate( short parameter_1,long parameter_2,short parameter_3,float parameter_4,unsigned int parameter_5);
long v_inflate( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5);
short v_lodepng_zlib_decompress( long parameter_1,float parameter_2,long parameter_3,int parameter_4,long parameter_5);
char v_zlib_decompress( int parameter_1,char parameter_2,int parameter_3,short parameter_4,short parameter_5);
unsigned int v_readChunk_zTXt( unsigned int parameter_1,float parameter_2,char parameter_3,int parameter_4);
int v_string_set( char parameter_1,unsigned int parameter_2);
short v_string_resize( char parameter_1,short parameter_2);
float v_string_init( char parameter_1);
void v_lodepng_add_text( long parameter_1,float parameter_2,short parameter_3);
unsigned int v_readChunk_tEXt( short parameter_1,char parameter_2,int parameter_3);
float v_readChunk_bKGD( int parameter_1,int parameter_2,double parameter_3);
short v_readChunk_tRNS( long parameter_1,long parameter_2,char parameter_3);
int v_readChunk_PLTE( long parameter_1,unsigned int parameter_2,unsigned int parameter_3);
double v_lodepng_realloc(unsigned int parameter_2);
short v_ucvector_reserve( long parameter_1,unsigned int parameter_2,int uni_para);
void v_ucvector_resize( int parameter_1,short parameter_2,int uni_para);
double v_lodepng_chunk_type_equals( short parameter_1,double parameter_2);
int v_lodepng_chunk_data_const( unsigned int parameter_1);
char v_lodepng_chunk_length( double parameter_1);
float v_ucvector_init( long parameter_1);
unsigned int v_checkColorValidity( float parameter_1,long parameter_2);
unsigned int v_lodepng_crc32( short parameter_1,long parameter_2);
float v_lodepng_read32bitInt( int parameter_1);
short v_LodePNGUnknownChunks_cleanup( unsigned int parameter_1);
char v_LodePNGIText_cleanup();
double v_string_cleanup( char parameter_1);
double v_LodePNGText_cleanup();
long v_lodepng_free();
void v_lodepng_palette_clear( double parameter_1);
void v_lodepng_color_mode_cleanup( char parameter_1);
void v_lodepng_info_cleanup( float parameter_1);
long v_lodepng_inspect( float parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5);
int v_decodeGeneric( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,int uni_para);
long v_lodepng_decode( int parameter_1,char parameter_2,short parameter_3,double parameter_4,float parameter_5,short parameter_6,int uni_para);
int v_LodePNGUnknownChunks_init( long parameter_1);
long v_LodePNGIText_init( int parameter_1);
int v_LodePNGText_init( long parameter_1);
void v_lodepng_info_init( unsigned int parameter_1);
void v_lodepng_color_mode_init();
void v_lodepng_compress_settings_init( long parameter_1);
void v_lodepng_encoder_settings_init( int parameter_1);
void v_lodepng_decompress_settings_init( float parameter_1);
void v_lodepng_decoder_settings_init( long parameter_1);
void v_lodepng_state_init( int parameter_1);
long v_lodepng_decode_memory( short parameter_1,short parameter_2,long parameter_3,double parameter_4,char parameter_5,double parameter_6,long parameter_7,int uni_para);
long v_lodepng_malloc( double parameter_1);
unsigned int v_lodepng_load_file( char parameter_1,int parameter_2,unsigned int parameter_3);
void v_lodepng_decode_file( long parameter_1,short parameter_2,float parameter_3,short parameter_4,short parameter_5,char parameter_6,int uni_para);
double v_lodepng_decode32_file( char parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,int uni_para);
void v_pp2d_load_texture_png( long parameter_1,short parameter_2,int uni_para);
void v_pp2d_set_screen_color( int parameter_1,int parameter_2);
void v_pp2d_set_texture_filter( double parameter_1,unsigned int parameter_2);
void v_pp2d_init();
void v_pp2d_free_texture( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	long_2 = long_1 * long_2;
	float_1 = float_1 * float_1;
	long_1 = long_3 + long_2;
}
void v_pp2d_exit()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_pp2d_free_texture(short_1);

		int_2 = int_1 * int_1;
	}
	double_2 = double_1 * double_1;
	double_5 = double_3 * double_4;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_3;
	float_3 = float_1 + float_2;
}
void v_save_from_selected()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_save_from(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
void v_write_to_selected()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_write_to(int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_next_slot_left()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	short_3 = short_1;
}
void v_next_slot_right()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_2;
	long_2 = long_1 + long_1;
}
void v_pp2d_end_draw()
{
	long long_1 = 1;
	long_1 = long_1;
}
void v_draw_list()
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	v_pp2d_draw_on(char_1,float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_6;
	v_pp2d_draw_text(float_2,float_2,float_1,float_2,int_1,int_1);

	int_1 = int_2;
	float_2 = float_1;
	int_3 = int_3;
	long_3 = long_1 + long_2;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_3;
	int_3 = int_1 * int_2;
	float_2 = float_2 * float_3;
	short_2 = short_4 * short_4;
	if(1)
	{
		if(1)
		{
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			if(1)
			{
				float_3 = float_3 * float_4;
			}
		}
	}
	char_3 = char_2 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			float_2 = v_pp2d_get_text_height(int_1,float_4,float_4);

			long_3 = long_1;
		}
		long_1 = long_1;
		int_1 = int_2 * int_3;
		if(1)
		{
			v_pp2d_draw_rectangle(int_2,int_4,int_4,int_3,long_2);

			int_1 = int_3 + int_4;
		}
		if(1)
		{
			int int_5 = 1;
			int_3 = int_5;
		}
		if(1)
		{
			short short_5 = 1;
			short_1 = short_2 * short_5;
		}
		unsigned_int_3 = unsigned_int_7;
	}
	v_draw();

}
float v_pp2d_get_text_height( int parameter_1,float parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	return float_1;
	char_2 = v_pp2d_get_text_size_internal(float_2,float_3,float_3,float_4,int_1,int_2);

}
unsigned int v_draw_single_slot( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	char char_6 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_2;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_1;
	v_pp2d_draw_textf(float_1,float_2,float_3,float_3,int_1,char_3,float_1);

	float_2 = float_4 + float_1;
	int_1 = int_2 + int_1;
	int_2 = int_2 + int_3;
	float_1 = v_pp2d_get_text_height(int_1,float_5,float_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_3 = v_pp2d_get_text_width(short_1,float_3,float_3);

	char_5 = char_4 + char_3;
	v_pp2d_draw_text(float_5,float_3,float_4,float_4,int_4,int_3);

	char_6 = char_1 * char_4;
	short_1 = short_2 * short_2;
	char_5 = char_3 + char_6;
	int_4 = int_2;
	return unsigned_int_2;
}
void v_draw_top()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	v_pp2d_draw_on(char_1,float_1);

	unsigned_int_1 = v_draw_single_slot(int_1,float_2);

}
void v_pp2d_draw_textf( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,char parameter_6,float parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	v_pp2d_draw_text(float_1,float_2,float_2,float_1,int_1,int_1);

	unsigned_int_3 = unsigned_int_3;
	char_1 = char_1 + char_1;
	float_4 = float_3 + float_1;
	int_2 = int_1 + int_2;
	float_3 = float_4 + float_1;
}
void v_draw_info( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1;
	double_1 = double_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_2 + int_1;
	float_2 = float_1 * float_1;
	double_1 = double_3 * double_3;
	v_pp2d_draw_textf(float_2,float_2,float_3,float_1,int_1,char_3,float_2);

	long_2 = long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 * long_3;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	double_2 = double_3 + double_4;
	if(1)
	{
		float_2 = float_3 * float_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_3 * double_1;
	char_1 = char_4 * char_4;
	v_pp2d_draw_on(char_2,float_2);

	int_1 = int_3 * int_4;
	double_4 = double_4 + double_1;
	v_pp2d_draw_text(float_4,float_3,float_1,float_4,int_1,int_5);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_4 * int_1;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_4 + double_5;
	}
	if(1)
	{
		long long_5 = 1;
		long_1 = long_2 * long_5;
	}
	v_draw();

}
void v_draw_interface()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	v_draw_top();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "dA") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		v_draw_list();

		double_3 = double_1 * double_2;
	}
	unsigned_int_2 = unsigned_int_2;
	long_1 = long_1 + long_1;
	v_draw_info(int_1,long_2);

}
long v_pp2d_set_text_color( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_1;
	double_1 = double_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
void v_pp2d_draw_text_wrap( float parameter_1,float parameter_2,float parameter_3,float parameter_4,double parameter_5,float parameter_6,short parameter_7)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = v_pp2d_set_text_color(unsigned_int_1);

	long_1 = long_1 * long_1;
	short_2 = short_1 * short_2;
	int_1 = int_1 * int_1;
	float_1 = v_pp2d_add_text_vertex(float_2,float_3,float_1,float_3,float_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
}
void v_pp2d_draw_text( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_pp2d_draw_text_wrap(float_1,float_2,float_3,float_3,double_1,float_3,short_1);

	int_1 = int_2;
}
char v_pp2d_get_text_size_internal( float parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5,int parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 + char_2;
	double_1 = double_1 * double_1;
	char_1 = char_3 * char_4;
	return char_3;
}
float v_pp2d_get_text_width( short parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	long_3 = long_1 * long_2;
	int_1 = int_1 * int_1;
	return float_1;
	char_1 = v_pp2d_get_text_size_internal(float_2,float_3,float_1,float_1,int_1,int_2);

}
void v_pp2d_draw_text_center( int parameter_1,float parameter_2,float parameter_3,float parameter_4,short parameter_5,short parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	v_pp2d_draw_text(float_1,float_1,float_2,float_1,int_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 * char_1;
	float_3 = v_pp2d_get_text_width(short_1,float_3,float_4);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
}
float v_pp2d_add_text_vertex( float parameter_1,float parameter_2,float parameter_3,float parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_2;
	short_3 = short_3;
	return float_2;
}
long v_pp2d_fast_draw_vbo( int parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5,float parameter_6,float parameter_7,float parameter_8,float parameter_9)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^M") > 0)
	{
	}
	int_1 = int_1 * int_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
	int_2 = int_1 * int_2;
	return long_1;
	float_2 = v_pp2d_add_text_vertex(float_4,float_1,float_1,float_5,float_1);

}
void v_pp2d_draw_rectangle( int parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	short_2 = short_1 * short_2;
	double_2 = double_1 + double_1;
	double_3 = double_3 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	long_1 = v_pp2d_fast_draw_vbo(int_2,int_2,int_3,int_1,float_1,float_1,float_2,float_2,float_1);

}
void v_draw()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_1;
	v_pp2d_draw_rectangle(int_1,int_1,int_2,int_3,long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
void v_draw_instructions()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	v_draw();

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_pp2d_draw_text_center(int_1,float_2,float_3,float_1,short_1,short_1);

	double_2 = double_1 * double_1;
	int_3 = int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	char_1 = char_1 + char_2;
	int_2 = int_1 + int_3;
	short_2 = short_2 * short_2;
	double_1 = double_2 * double_1;
	long_1 = long_1;
}
void v_pp2d_draw_on( char parameter_1,float parameter_2)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9l") > 0)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double_2 = double_1 * double_1;
		long_1 = long_1;
	}
}
void v_pp2d_begin_draw( float parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long_2 = long_1 + long_1;
	long_3 = long_1 * long_3;
	v_pp2d_draw_on(char_1,float_1);

	long_3 = long_1 + long_4;
}
void v_next_backup_down()
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "aK") == 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
void v_go_down()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_next_backup_down();

	float_3 = float_1 * float_2;
}
long v_can_go_down_159()
{
	long long_1 = 1;
	return long_1;
}
int v_can_go_down()
{
	int int_1 = 1;
	long long_1 = 1;
	return int_1;
	long_1 = v_can_go_down_159();

}
void v_delete_selected_backup_157()
{
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_1 * double_1;
		long_2 = long_1 + long_2;
	}
}
void v_delete_selected_backup()
{
	double double_1 = 1;
	v_delete_selected_backup_157();

	double_1 = double_1;
}
void v_toggle_password_visibility_155()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_toggle_password_visibility()
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
	v_toggle_password_visibility_155();

}
float v_always_true()
{
	float float_1 = 1;
	return float_1;
}
void v_next_backup_up()
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
void v_go_up()
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_2;
	v_next_backup_up();

}
double v_selected_new_backup()
{
	double double_1 = 1;
	return double_1;
}
int v_selected_other_backup()
{
	int int_1 = 1;
	double double_1 = 1;
	return int_1;
	double_1 = v_selected_new_backup();

}
void v_save_from_slot_3()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_save_from(int_1);

	int_4 = int_2 + int_3;
}
void v_save_from_slot_2()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_save_from(int_1);

}
void v_cleanPath( char parameter_1)
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
unsigned int v_get_input( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_2;
		short_1 = short_1 * short_1;
		if(1)
		{
			char char_4 = 1;
			v_cleanPath(char_2);

			char_3 = char_4 * char_5;
		}
		char_1 = char_5 * char_6;
		char_3 = char_6 + char_5;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			char char_7 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char_7 = char_3 * char_5;
			int_1 = int_2;
		}
	}
	return unsigned_int_3;
}
void v_save_from( int parameter_1)
{
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_3 = 1;
			double_2 = double_1 * double_1;
			unsigned_int_1 = v_get_input(char_1,double_2);

			long_2 = long_1 + long_2;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			long_2 = long_2 + long_1;
			v_copy_slot(long_2);

			float_2 = float_1 + float_1;
			int_1 = int_1 * int_2;
			short_2 = short_1 * short_1;
			if(1)
			{
				long long_4 = 1;
				char char_2 = 1;
				char char_3 = 1;
				long_3 = long_3 * long_4;
				double_1 = double_2 * double_2;
				char_2 = char_2 + char_3;
				if(1)
				{
					float float_3 = 1;
					float float_4 = 1;
					float float_5 = 1;
					float float_6 = 1;
					float_4 = float_3 + float_1;
					short_2 = short_1 * short_2;
					float_6 = float_5 * float_2;
				}
			}
			long_2 = long_3 + long_2;
		}
		if(1)
		{
			double_1 = double_2 + double_1;
		}
	}
}
void v_save_from_slot_1()
{
	long long_1 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	v_save_from(int_1);

}
void v_write_to_slot_3()
{
	int int_1 = 1;
	int int_2 = 1;
	v_write_to(int_1);

	int_1 = int_2 + int_2;
}
void v_write_to_slot_2()
{
	int int_1 = 1;
	long long_1 = 1;
	v_write_to(int_1);

	long_1 = long_1;
}
unsigned int v_read_slot()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_3;
	if(1)
	{
		long long_1 = 1;
		char char_3 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
		}
		long_1 = long_1;
		int_1 = int_1 + int_3;
		char_3 = char_2 + char_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	double_3 = double_2 * double_3;
	char_1 = char_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short_1 = short_2;
		float_4 = float_3 * float_1;
		v_openFile(short_2,unsigned_int_1,int_3,char_1);

		float_3 = float_4 + float_4;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			float_2 = float_4 * float_4;
			int_1 = int_2 * int_4;
		}
		if(1)
		{
			int_4 = int_1 + int_1;
		}
		char controller_7[3];
		fgets(controller_7 ,3 ,stdin);
		if( strcmp( controller_7, "H;") < 0)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return unsigned_int_2;
}
char v_deleteFile( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	return char_1;
}
float v_createFolderRecursively( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_3 = 1;
	char_2 = char_1 + char_1;
	long_1 = long_1 + long_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		int_1 = int_1 * int_1;
		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_1 + int_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			int_2 = int_1 * int_3;
		}
	}
	long_1 = long_3 + long_2;
	return float_3;
}
void v_openFile( short parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_createFolderRecursively(int_1,short_1);

	long_2 = long_1 * long_1;
	char_1 = v_deleteFile(int_1,double_1);

	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ".H") < 0)
	{
		long_1 = long_1 + long_1;
	}
}
unsigned int v_init_crc16_tab()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		double_1 = double_1 + double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
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
				double_2 = double_2 + double_2;
			}
			int_3 = int_2 + int_1;
		}
		char_2 = char_1 * char_2;
	}
	short_3 = short_2 * short_2;
	return unsigned_int_4;
}
short v_crc_16( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = v_init_crc16_tab();

	unsigned_int_2 = unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "3O") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			short short_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float_1 = float_1 * float_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			short_3 = short_4 + short_2;
			double_1 = double_1 + double_2;
		}
	}
	return short_1;
}
void v_fix_slot_crc()
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_crc_16(int_1,long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
float v_write_slot()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		int_2 = int_1 + int_2;
		double_1 = double_1 * double_2;
		v_fix_slot_crc();

		double_2 = double_3 + double_3;
		v_openFile(short_1,unsigned_int_2,int_3,char_1);

		int_4 = int_4;
	}
	if(1)
	{
	}
	return float_1;
}
float v_get_data()
{
	float float_1 = 1;
	return float_1;
}
void v_copy_slot( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = v_read_slot();

	double_2 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float_1 = v_get_data();

		float_2 = v_write_slot();

		short_2 = short_1 + short_1;
	}
}
void v_write_to( int parameter_1)
{
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_copy_slot(long_1);

		int_1 = int_1 + int_2;
	}
}
void v_write_to_slot_1()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_write_to(int_1);

	int_4 = int_2 * int_3;
}
void v_select_slot_3()
{
	int int_1 = 1;
	v_select_slot(int_1);

	int_1 = int_1 * int_1;
}
void v_select_slot_2()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_select_slot(int_1);

	double_1 = double_1 * double_2;
}
void v_select_slot( int parameter_1)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
void v_select_slot_1()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_select_slot(int_1);

	long_2 = long_1 + long_1;
}
short v_exists_slot_3()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return short_1;
	unsigned_int_1 = v_slot_exists(int_1);

}
short v_exists_slot_2()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return short_1;
	unsigned_int_1 = v_slot_exists(int_1);

}
unsigned int v_slot_exists( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_exists_slot_1()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return long_1;
	unsigned_int_1 = v_slot_exists(int_1);

}
void v_init_buttons()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	v_select_slot_3();

	long_2 = long_1 + long_2;
	v_save_from_slot_2();

	int_1 = v_selected_other_backup();

	double_2 = double_1 * double_1;
	v_toggle_password_visibility_155();

	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	v_delete_selected_backup_157();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_always_true();

	double_3 = double_1 + double_2;
	int_2 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		float float_2 = 1;
		v_select_slot_2();

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_1 = v_exists_slot_3();

		int_2 = int_2 * int_4;
		v_select_slot_1();

		int_3 = int_4;
		float_1 = float_2 * float_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_1 * char_1;
	v_go_up();

	float_1 = float_3;
	int_2 = v_can_go_down();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_2 * double_2;
	int_2 = int_3;
	double_2 = double_4;
	long_2 = v_exists_slot_1();

	unsigned_int_2 = unsigned_int_1;
	short_2 = v_exists_slot_2();

	v_save_from_slot_3();

	double_3 = double_3 * double_3;
	v_save_from_slot_1();

	v_go_down();

	double_2 = double_5;
	v_write_to_slot_1();

	v_write_to_slot_2();

	v_write_to_slot_3();

	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
}
int v_pp2d_get_next_pow2( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	double_1 = double_2;
	char_3 = char_4 * char_3;
	double_1 = double_1;
	double_2 = double_3 + double_4;
	return int_3;
}
void v_pp2d_load_texture_memory( short parameter_1,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_1;
	double_2 = double_3 + double_4;
	int_4 = int_2 * int_1;
	int_1 = v_pp2d_get_next_pow2(double_1);

	double_2 = double_3 + double_5;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			int int_5 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			int_5 = int_2 * int_5;
			int_3 = int_1 * int_3;
		}
	}
	unsigned_int_2 = unsigned_int_2;
}
void v_lodepng_state_cleanup()
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_2;
	float_1 = float_2;
	v_lodepng_color_mode_cleanup(char_2);

	v_lodepng_info_cleanup(float_2);

}
short v_color_tree_cleanup( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if(remainder_check(controller_1,100,1))
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			long_1 = long_1 * long_1;
		}
	}
	return short_1;
	long_2 = v_lodepng_free();

}
double v_color_tree_get( long parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "M") > 0)
		{
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "do") < 0)
		{
			int int_3 = 1;
			int_3 = int_2 + int_3;
		}
	}
	short_1 = short_1 + short_3;
	return double_1;
}
unsigned int v_addColorBits( float parameter_1,double parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "V") < 0)
	{
		int int_3 = 1;
		int_3 = int_3 + int_3;
	}
	return unsigned_int_1;
}
short v_rgba8ToPixel( short parameter_1,short parameter_2,short parameter_3,int parameter_4,short parameter_5,char parameter_6,long parameter_7,float parameter_8)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_8 = 1;
	short short_2 = 1;
	long long_8 = 1;
	if(1)
	{
		float_1 = float_1 + float_1;
		int_1 = int_1 + int_2;
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			long_1 = long_1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			double_5 = double_4 + double_2;
			double_2 = double_3 + double_4;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
			int_2 = int_1 * int_3;
			long_3 = long_2 * long_3;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_2 * float_2;
		if(1)
		{
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_4 * int_4;
		}
		if(1)
		{
			float_2 = float_2 * float_2;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_5 = double_6 * double_5;
		int_2 = int_3 + int_1;
		if(1)
		{
			long long_5 = 1;
			long_3 = long_4;
			long_3 = long_5 + long_3;
		}
		if(1)
		{
			double double_7 = 1;
			long long_6 = 1;
			double_7 = double_1;
			long_3 = long_3 * long_6;
		}
	}
	if(1)
	{
		float float_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = v_addColorBits(float_3,double_8,int_3,short_1);

			float_4 = float_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			char_1 = char_2 * char_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			long long_7 = 1;
			float_4 = float_4;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
			long_7 = long_4 * long_3;
			double_4 = v_color_tree_get(long_1,unsigned_int_2,short_2,long_8,float_1);

			long_2 = long_1 * long_3;
		}
	}
	return short_1;
}
char v_getPixelColorRGBA8( long parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,short parameter_6,short parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	int int_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int int_8 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			float_2 = float_1 + float_1;
			if(1)
			{
				long_2 = long_1 + long_2;
			}
			if(1)
			{
				float_1 = float_2;
			}
		}
		if(1)
		{
			char_1 = char_1;
			if(1)
			{
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
		if(1)
		{
			int_5 = int_3 * int_4;
			long_3 = long_3 * long_2;
			int_6 = int_4 * int_1;
			char_1 = char_1;
			if(1)
			{
				long long_4 = 1;
				long_4 = long_3;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 + short_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int int_7 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			int_7 = int_5 * int_3;
			int_4 = int_1 * int_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			}
			if(1)
			{
				double_1 = double_1 + double_1;
			}
		}
		if(1)
		{
			short short_3 = 1;
			float_3 = float_1 + float_3;
			int_2 = int_1 * int_8;
			short_1 = short_1 + short_3;
			if(1)
			{
				double_3 = double_2 + double_2;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			}
		}
	}
	if(1)
	{
		int_8 = int_5 + int_5;
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		if(1)
		{
			float float_4 = 1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
			float_3 = float_4 + float_2;
		}
		if(1)
		{
			double_4 = double_4 + double_2;
			float_2 = float_2 + float_2;
		}
		if(1)
		{
			long long_5 = 1;
			short short_4 = 1;
			long_5 = long_3 + long_1;
			float_3 = float_3;
			double_3 = double_4 + double_3;
			short_4 = short_5;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			short short_7 = 1;
			long_1 = v_readBitsFromReversedStream(char_1,short_6,unsigned_int_6);

			short_7 = short_5 + short_7;
			unsigned_int_7 = unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_8 * unsigned_int_7;
			double_4 = double_2 * double_4;
		}
	}
	if(1)
	{
		int int_10 = 1;
		if(1)
		{
			int int_9 = 1;
			double double_5 = 1;
			int_9 = int_10;
			float_1 = float_1 * float_2;
			double_5 = double_2 * double_2;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_8;
			unsigned_int_9 = unsigned_int_4 + unsigned_int_9;
			int_4 = int_10 * int_6;
			float_3 = float_2;
		}
	}
	return char_1;
}
long v_readBitsFromReversedStream( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_readBitFromReversedStream(unsigned_int_1,double_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return long_1;
}
double v_getPixelColorsRGBA8( int parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	double double_6 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_3 = int_2 * int_2;
				if(1)
				{
					int_5 = int_1 * int_4;
				}
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				long_1 = v_readBitsFromReversedStream(char_1,short_1,unsigned_int_1);

				char_2 = char_2 + char_2;
				if(1)
				{
					int_3 = int_3 + int_3;
				}
			}
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			short_3 = short_2 * short_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short_1 = short_2 + short_1;
				long_2 = long_1;
				if(1)
				{
					int_4 = int_3 * int_6;
				}
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double double_4 = 1;
				double_2 = double_1 + double_1;
				double_4 = double_3 * double_2;
				int_3 = int_2 + int_3;
				if(1)
				{
					unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
				}
			}
		}
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
				unsigned_int_1 = unsigned_int_6;
				if(1)
				{
					double_2 = double_3 + double_3;
				}
			}
		}
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
		int_8 = int_2 + int_7;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long long_3 = 1;
			double double_5 = 1;
			if(1)
			{
				long long_4 = 1;
				long long_5 = 1;
				long_5 = long_3 + long_4;
			}
			if(1)
			{
				long_2 = long_1 + long_2;
			}
			if(1)
			{
				int_8 = int_8 + int_9;
				if(1)
				{
					double_5 = double_3 + double_3;
				}
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_4;
				double_6 = double_2 + double_5;
				int_9 = int_8 + int_8;
				if(1)
				{
					long_2 = long_3 + long_3;
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double_1 = double_2 + double_1;
				if(1)
				{
					int int_10 = 1;
					int_10 = int_2;
				}
			}
		}
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				float float_1 = 1;
				float_2 = float_1 * float_1;
				if(1)
				{
					char_1 = char_2;
				}
			}
		}
	}
	if(1)
	{
		int int_11 = 1;
		if(1)
		{
			for(int looper_9=0; looper_9<1;looper_9++)
			{
				double double_7 = 1;
				double_6 = double_2;
				double_6 = double_7 + double_7;
				int_11 = int_2 * int_3;
				if(1)
				{
					int_2 = int_5;
				}
			}
		}
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				char_1 = char_1 + char_2;
				int_4 = int_1 + int_6;
				int_3 = int_11 + int_9;
				if(1)
				{
					float float_3 = 1;
					float_2 = float_3 * float_2;
				}
			}
		}
	}
	return double_1;
}
double v_rgba16ToPixel( short parameter_1,unsigned int parameter_2,short parameter_3,unsigned int parameter_4,short parameter_5,short parameter_6,short parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		int_2 = int_1 + int_1;
		long_2 = long_1 + long_1;
		int_2 = int_2 + int_2;
		short_1 = short_1;
	}
	if(1)
	{
		float float_1 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_1;
		int_1 = int_2 * int_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1;
		float_2 = float_2 + float_2;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		int_2 = int_2 + int_2;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		double_1 = double_1 * double_3;
		int_1 = int_3 + int_1;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		char_4 = char_2;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		float_3 = float_2 + float_3;
		int_1 = int_4 * int_5;
		float_3 = float_3 * float_4;
		double_1 = double_3 * double_3;
		float_5 = float_4 + float_3;
	}
	return double_4;
}
char v_getPixelColorRGBA16( int parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,char parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") > 0)
	{
		short_2 = short_1 * short_1;
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 * long_1;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "M") > 0)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_1 = short_3 + short_4;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 + double_1;
		double_3 = double_2 * double_1;
		long_2 = long_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		long long_3 = 1;
		double_2 = double_1;
		long_3 = long_3;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_2 * double_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_2 = char_1 * char_2;
		int_1 = int_1 + int_2;
	}
	return char_3;
}
long v_color_tree_add( double parameter_1,double parameter_2,double parameter_3,double parameter_4,long parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
			long_1 = v_lodepng_malloc(double_1);

			int_1 = int_1 + int_1;
		}
		unsigned_int_1 = v_color_tree_init(double_1);

		int_1 = int_1;
	}
	long_2 = long_1 + long_1;
	return long_1;
}
unsigned int v_color_tree_init( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	double_2 = double_3;
	return unsigned_int_1;
}
double v_lodepng_convert( double parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_6 = 1;
	double double_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = v_color_tree_init(double_1);

	long_1 = v_color_tree_add(double_1,double_2,double_2,double_2,long_1,char_1);

	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_4 = unsigned_int_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		int int_2 = 1;
		double double_4 = 1;
		short_1 = v_color_tree_cleanup(short_2);

		float_4 = float_1 + float_3;
		double_3 = double_2 + double_2;
		int_2 = int_1 + int_1;
		if(1)
		{
			double_4 = double_3;
			double_4 = double_1;
		}
		if(1)
		{
			long_1 = v_lodepng_get_raw_size(unsigned_int_5,short_2,long_1);

			int_3 = int_2;
		}
		v_lodepng_color_mode_equal(float_3,char_1);

		unsigned_int_4 = unsigned_int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_5 = 1;
			float_4 = float_5 * float_6;
			double_5 = double_4 * double_5;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_3 = 1;
			short_1 = short_1 * short_3;
			char_1 = v_getPixelColorRGBA16(int_3,short_3,double_1,short_1,long_1,unsigned_int_4,char_1);

			char_1 = v_getPixelColorRGBA8(long_2,float_6,unsigned_int_2,int_3,long_2,short_1,short_1);

			long_1 = long_1;
			long_1 = long_3;
		}
	}
	if(1)
	{
		double_1 = double_1 * double_5;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_4 * long_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_6 = 1;
			unsigned_int_2 = unsigned_int_2;
			short_1 = v_rgba8ToPixel(short_4,short_1,short_5,int_4,short_3,char_2,long_1,float_1);

			double_6 = double_2 * double_6;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_3 * char_4;
	}
	return double_3;
	double_2 = v_rgba16ToPixel(short_4,unsigned_int_6,short_4,unsigned_int_2,short_5,short_4,short_6);

	double_7 = v_getPixelColorsRGBA8(int_4,long_5,int_1,int_4,float_1);

}
unsigned int v_lodepng_color_mode_copy( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_lodepng_color_mode_cleanup(char_1);

	int_1 = int_1 * int_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_2;
	if(1)
	{
		int_1 = int_1 + int_1;
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			long_2 = v_lodepng_malloc(double_1);

			float_1 = float_1 * float_2;
		}
	}
	return unsigned_int_1;
}
void v_lodepng_color_mode_equal( float parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") < 0)
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
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
			}
		}
	}
}
unsigned int v_setBitOfReversedStream0( unsigned int parameter_1,short parameter_2,float parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	int_1 = int_1 * int_1;
	return unsigned_int_1;
}
float v_Adam7_deinterlace( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,long parameter_5)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	v_Adam7_getpassvalues(char_1,float_1,float_1,long_1,float_2,unsigned_int_1,unsigned_int_1,float_1);

	v_readBitFromReversedStream(unsigned_int_2,double_1);

	unsigned_int_3 = v_setBitOfReversedStream0(unsigned_int_2,short_1,float_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return float_3;
}
void v_Adam7_getpassvalues( char parameter_1,float parameter_2,float parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,float parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short_1 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
	}
	int_1 = int_2 + int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int_3 = int_3 * int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		int_3 = int_3 * int_3;
	}
}
unsigned int v_setBitOfReversedStream( float parameter_1,float parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
void v_readBitFromReversedStream( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
}
long v_removePaddingBits( long parameter_1,float parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_setBitOfReversedStream(float_1,float_2,float_3);

	float_4 = float_2 + float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int_2 = int_1 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			v_readBitFromReversedStream(unsigned_int_1,double_1);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		unsigned_int_4 = unsigned_int_1;
	}
	return long_1;
}
long v_paethPredictor( short parameter_1,short parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 + char_1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "{&") < 0)
	{
	}
	if(1)
	{
	}
	return long_2;
}
float v_unfilterScanline( int parameter_1,long parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5,long parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	float float_3 = 1;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_2;
	}
	long_1 = v_paethPredictor(short_1,short_1,short_2);

	double_2 = double_1 * double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_2 = double_3 + double_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_1 = short_1 * short_2;
	}
	float_1 = float_2;
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_2 = int_1 * int_2;
		}
	}
	int_1 = int_2 + int_1;
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long long_4 = 1;
			long_4 = long_3 * long_2;
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_3 * int_2;
		}
	}
	if(1)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			short short_3 = 1;
			short_2 = short_1 + short_3;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1;
		}
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			long_1 = long_3;
		}
	}
	double_4 = double_5 + double_1;
	return float_3;
}
float v_unfilter( float parameter_1,long parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float_1 = v_unfilterScanline(int_1,long_1,short_1,short_1,unsigned_int_1,long_2);

	double_1 = double_2;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_3 = 1;
		char char_3 = 1;
		int_1 = int_2 + int_1;
		char_2 = char_1 + char_1;
		long_3 = long_3 + long_1;
		char_2 = char_1 + char_1;
		char_3 = char_1 * char_2;
	}
	return float_2;
}
float v_postProcessScanlines( float parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			v_lodepng_get_bpp(double_1);

			long_1 = long_2;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			short short_1 = 1;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long_2 = long_3 + long_4;
		v_Adam7_getpassvalues(char_3,float_1,float_1,long_2,float_2,unsigned_int_1,unsigned_int_2,float_3);

		int_1 = int_1 * int_2;
		int_3 = int_3 + int_1;
		double_2 = double_2 + double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_1 = v_unfilter(float_1,long_3,int_2,double_1,int_4);

			float_3 = float_4 + float_3;
			if(1)
			{
				short short_4 = 1;
				long_4 = v_removePaddingBits(long_3,float_2,char_2,short_2,unsigned_int_1);

				short_4 = short_2;
			}
		}
		float_4 = v_Adam7_deinterlace(unsigned_int_2,unsigned_int_3,short_3,long_2,long_4);

		char_1 = char_1 * char_2;
	}
	return float_3;
}
float v_ucvector_resizev( char parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		v_ucvector_resize(int_1,short_1,-1 );

		int_2 = int_1 + int_2;
	}
	return float_1;
}
long v_lodepng_get_raw_size( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	return long_1;
	v_lodepng_get_bpp(double_1);

}
int v_getNumColorChannels( unsigned int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
long v_lodepng_get_bpp_lct( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return long_1;
	int_1 = v_getNumColorChannels(unsigned_int_1);

}
void v_lodepng_get_bpp( double parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long_1 = v_lodepng_get_bpp_lct(float_1,int_1);

}
int v_lodepng_get_raw_size_idat( short parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	return int_1;
	v_lodepng_get_bpp(double_1);

}
double v_lodepng_chunk_next_const( double parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_lodepng_chunk_length(double_1);

	float_1 = float_2;
	return double_1;
}
double v_lodepng_chunk_check_crc( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float_1 = v_lodepng_read32bitInt(int_1);

	int_4 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_lodepng_chunk_length(double_1);

	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	unsigned_int_1 = v_lodepng_crc32(short_1,long_1);

}
float v_lodepng_chunk_append( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short_3 = short_1 * short_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_lodepng_chunk_length(double_1);

	double_2 = v_lodepng_realloc(unsigned_int_2);

	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	int_1 = int_2;
	float_1 = float_1 + float_1;
	long_4 = long_3 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_4;
	}
	return float_1;
}
short v_lodepng_chunk_ancillary()
{
	short short_1 = 1;
	return short_1;
}
unsigned int v_readChunk_pHYs( long parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "a-") == 0)
	{
	}
	float_1 = float_1 * float_1;
	short_3 = short_1 * short_2;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
unsigned int v_readChunk_tIME( long parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_1 * float_2;
	int_1 = int_4 * int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_3 + double_4;
	return unsigned_int_1;
}
double v_lodepng_add_itext( double parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 * short_2;
	short_2 = short_1 + short_1;
	float_1 = float_1 + float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ".!") < 0)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 * char_1;
	}
	double_1 = v_lodepng_realloc(unsigned_int_1);

	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_3 * double_1;
	long_3 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_1 * double_2;
	int_2 = int_2 + int_2;
	float_3 = v_string_init(char_1);

	short_3 = short_2 * short_3;
	long_3 = v_lodepng_free();

	char_3 = char_2 * char_3;
	short_2 = short_3 * short_3;
	int_1 = v_string_set(char_3,unsigned_int_4);

	float_4 = float_3 * float_3;
	short_4 = short_1 + short_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_3 * double_1;
	return double_2;
}
float v_readChunk_iTXt( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_262[3];
			fgets(controller4vul_262 ,3 ,stdin);
			if( strcmp( controller4vul_262, "$l") < 0)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				v_ucvector_resize(int_1,short_1,uni_para);

				long_2 = long_1 * long_1;
				long_3 = long_3 * long_2;
			}
		}
	}
	return float_1;
}
long v_ucvector_cleanup()
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long_1 = v_lodepng_free();

	char_3 = char_1 + char_2;
	float_3 = float_1 * float_2;
	double_2 = double_1 + double_1;
	return long_2;
}
int v_ucvector_push_back( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&Z") > 0)
	{
	}
	v_ucvector_resize(int_1,short_1,-1 );

	short_1 = short_2 * short_1;
	return int_1;
}
short v_update_adler32( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_1 * char_2;
	int_4 = int_3 + int_2;
	return short_1;
}
void v_adler32( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = v_update_adler32(char_1,double_1,long_1);

}
float v_HuffmanTree_cleanup( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	double_2 = double_1 * double_1;
	long_1 = v_lodepng_free();

	short_2 = short_1 + short_1;
	return float_1;
}
unsigned int v_huffmanDecodeSymbol( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
		}
		char_1 = char_1 + char_2;
		double_1 = double_1 * double_2;
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_readBitsFromStream( short parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_2;
		long_1 = long_2;
	}
	return double_1;
}
int v_getTreeInflateDynamic( float parameter_1,int parameter_2,long parameter_3,char parameter_4,char parameter_5)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float_1 = v_HuffmanTree_cleanup(short_1);

	long_1 = long_1 + long_2;
	double_1 = v_HuffmanTree_init(int_1);

	long_1 = v_lodepng_malloc(double_1);

	double_2 = v_HuffmanTree_makeFromLengths(int_2,long_2,double_1,float_2);

	long_1 = v_lodepng_free();

	float_2 = float_2;
	if(1)
	{
	}
	unsigned_int_1 = v_huffmanDecodeSymbol(char_1,unsigned_int_1,unsigned_int_1,long_1);

	double_2 = double_2 + double_3;
	double_3 = double_1 * double_1;
	return int_1;
	double_4 = v_readBitsFromStream(short_2,int_2,int_3);

}
long v_generateFixedDistanceTree( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short_1 = short_2;
	long_1 = v_lodepng_malloc(double_1);

	double_1 = v_HuffmanTree_makeFromLengths(int_1,long_2,double_1,float_1);

	int_2 = int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	long_1 = v_lodepng_free();

	double_2 = double_3;
	int_1 = int_3 + int_3;
	return long_3;
}
short v_HuffmanTree_make2DTree( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_5 = char_3 + char_4;
			if(1)
			{
			}
			if(1)
			{
				int int_3 = 1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_3;
					int_1 = int_3 * int_2;
				}
				if(1)
				{
					int int_4 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_5 = 1;
					int_4 = int_2 * int_3;
					long_1 = v_lodepng_malloc(double_1);

					double_1 = double_2 * double_3;
					int_4 = int_5 + int_3;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2 * float_1;
		}
	}
	return short_1;
}
char v_uivector_cleanup()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	short_2 = short_1 * short_1;
	long_1 = v_lodepng_free();

	long_1 = long_1;
	return char_1;
}
char v_uivector_reserve( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_1 + int_1;
		double_1 = v_lodepng_realloc(unsigned_int_1);

		short_2 = short_1 * short_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_2 = 1;
			long_3 = long_1 * long_2;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
		}
	}
	return char_1;
}
int v_uivector_resize( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") < 0)
	{
	}
	char_1 = v_uivector_reserve(short_1,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v_uivector_resizev( float parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = v_uivector_resize(long_1,char_1);

		char_1 = char_1;
	}
}
float v_uivector_init( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_2;
	return float_1;
}
long v_HuffmanTree_makeFromLengths2( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	char_1 = char_2;
	unsigned_int_4 = unsigned_int_4;
	double_3 = double_1 + double_2;
	v_uivector_resizev(float_1,float_1,char_2);

	int_2 = int_1 + int_1;
	short_1 = v_HuffmanTree_make2DTree(int_3);

	long_1 = long_2;
	if(1)
	{
		char_1 = v_uivector_cleanup();

		char_2 = char_1;
	}
	if(1)
	{
		float_1 = v_uivector_init(int_2);

		int_1 = int_3 + int_4;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_3 = v_lodepng_malloc(double_1);

			int_4 = int_3 + int_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2 + char_2;
			}
		}
	}
	double_3 = double_4;
	long_1 = long_2 + long_3;
	if(1)
	{
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "d") < 0)
	{
	}
	return long_3;
}
double v_HuffmanTree_makeFromLengths( int parameter_1,long parameter_2,double parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = v_lodepng_malloc(double_1);

		long_1 = long_1 * long_1;
	}
	short_3 = short_1 + short_2;
	long_1 = v_HuffmanTree_makeFromLengths2(unsigned_int_1);

	double_1 = double_1;
	return double_2;
}
short v_generateFixedLitLenTree( char parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_1;
	long_1 = v_lodepng_malloc(double_1);

	long_1 = long_1 + long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		long_1 = v_lodepng_free();

		short_1 = short_1 * short_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_4 = 1;
		double_2 = v_HuffmanTree_makeFromLengths(int_1,long_2,double_3,float_1);

		double_4 = double_3;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_3 = 1;
		long_2 = long_3 + long_1;
	}
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 * char_1;
	return short_2;
}
char v_getTreeInflateFixed( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_1 = v_generateFixedLitLenTree(char_1);

	double_2 = double_1 + double_1;
	short_1 = short_1 * short_1;
	return char_1;
	long_1 = v_generateFixedDistanceTree(char_1);

}
double v_HuffmanTree_init( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return double_1;
}
double v_inflateHuffmanBlock( long parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5,long parameter_6)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_ucvector_resize(int_1,short_1,-1 );

	int_2 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = v_getTreeInflateFixed(int_3,unsigned_int_1);

	int_4 = v_getTreeInflateDynamic(float_1,int_4,long_1,char_2,char_2);

	unsigned_int_1 = v_huffmanDecodeSymbol(char_3,unsigned_int_1,unsigned_int_2,long_2);

	double_1 = v_readBitsFromStream(short_1,int_2,int_4);

	float_1 = v_HuffmanTree_cleanup(short_2);

	double_1 = double_2;
	return double_3;
	double_2 = v_HuffmanTree_init(int_2);

}
short v_inflateNoCompression( int parameter_1,char parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	char char_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_5 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_1;
	short_1 = short_2;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	v_ucvector_resize(int_1,short_2,-1 );

	short_2 = short_3;
	float_1 = float_1 * float_1;
	long_2 = long_1 + long_2;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	long_3 = long_4;
	char_2 = char_1 * char_1;
	double_3 = double_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	float_2 = float_2;
	long_4 = long_4 + long_4;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_2 * double_4;
	double_4 = double_4 + double_5;
	long_1 = long_1 * long_5;
	char_1 = char_2 * char_2;
	char_2 = char_3;
	unsigned_int_1 = unsigned_int_2;
	double_6 = double_3;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_7;
	long_5 = long_2 * long_2;
	double_7 = double_1 * double_2;
	float_2 = float_3;
	unsigned_int_7 = unsigned_int_8 * unsigned_int_6;
	double_5 = double_8 + double_3;
	double_6 = double_6;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	int_1 = int_2 + int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") < 0)
	{
	}
	float_3 = float_1 * float_4;
	unsigned_int_5 = unsigned_int_9 + unsigned_int_8;
	int_1 = int_3 * int_1;
	int_2 = int_3;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_8;
	char_3 = char_2 * char_4;
	char_3 = char_5 * char_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	int_3 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_9;
	double_1 = double_8 + double_2;
	float_5 = float_5 * float_2;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_2;
	char_6 = char_6 + char_6;
	int_4 = int_2;
	unsigned_int_10 = unsigned_int_6 + unsigned_int_10;
	int_3 = int_5 + int_1;
	short_2 = short_3 * short_2;
	long_3 = long_2 + long_2;
	return short_2;
}
unsigned int v_readBitFromStream( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1;
	return unsigned_int_1;
}
void v_lodepng_inflatev( short parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	double double_8 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = v_readBitFromStream(short_1,double_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int_2 = int_1 * int_1;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
				if(1)
				{
					long_1 = long_1 + long_1;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
				}
				unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
				long_2 = long_2 + long_1;
				int_2 = int_3 + int_1;
			}
			if(1)
			{
				double_3 = double_4;
			}
			int_2 = int_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned_int_5 = unsigned_int_5;
				float_2 = float_1 * float_2;
				if(1)
				{
					long_3 = long_1;
				}
				if(1)
				{
					float_1 = float_3;
				}
				double_1 = double_3 * double_1;
				float_4 = float_3 + float_4;
				int_1 = int_1 * int_1;
			}
			if(1)
			{
				char_1 = char_2;
			}
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			char_3 = char_3;
			unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
			double_6 = double_5 + double_5;
			double_2 = double_5;
			if(1)
			{
				if(1)
				{
					int_3 = int_3 + int_4;
				}
				if(1)
				{
					double_6 = double_5 + double_5;
					double_1 = double_6;
					int_4 = int_1;
				}
				int_1 = int_3;
				short_1 = v_inflateNoCompression(int_4,char_2,int_1,long_1,unsigned_int_2);

				int_1 = int_1 * int_3;
				char_1 = char_3 + char_3;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			if(1)
			{
				if(1)
				{
					char_2 = char_1 * char_3;
				}
				if(1)
				{
					double double_7 = 1;
					double_8 = double_4 * double_7;
					float_4 = float_3;
				}
			}
			if(1)
			{
				if(1)
				{
					int_2 = int_1 + int_4;
				}
				if(1)
				{
					short short_3 = 1;
					short_1 = short_2 + short_3;
					long_3 = long_1 * long_1;
					int_5 = int_2 + int_4;
				}
			}
			if(1)
			{
				if(1)
				{
					int_2 = int_5 * int_3;
					double_3 = double_2 * double_3;
					char_1 = char_1 + char_2;
				}
				if(1)
				{
					double_8 = v_inflateHuffmanBlock(long_2,char_3,unsigned_int_7,unsigned_int_2,unsigned_int_6,long_3);

					int_5 = int_2 + int_4;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
			}
		}
	}
}
int v_ucvector_init_buffer( char parameter_1,double parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float_1 = float_2;
	long_1 = long_1 + long_2;
	return int_1;
}
int v_lodepng_inflate( short parameter_1,long parameter_2,short parameter_3,float parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int_1 = v_ucvector_init_buffer(char_1,double_1,int_1);

	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	v_lodepng_inflatev(short_1,char_1,double_1,unsigned_int_1);

	float_2 = float_1 + float_1;
	char_2 = char_1 * char_2;
	return int_2;
}
long v_inflate( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
	int_1 = v_lodepng_inflate(short_1,long_2,short_1,float_1,unsigned_int_1);

}
short v_lodepng_zlib_decompress( long parameter_1,float parameter_2,long parameter_3,int parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_adler32(unsigned_int_1,double_1);

	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		float_1 = v_lodepng_read32bitInt(int_1);

		char_2 = char_1 * char_3;
		int_1 = int_2;
		if(1)
		{
		}
	}
	return short_1;
	long_3 = v_inflate(long_1,int_2,int_2,unsigned_int_1,short_2);

}
char v_zlib_decompress( int parameter_1,char parameter_2,int parameter_3,short parameter_4,short parameter_5)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	short_1 = v_lodepng_zlib_decompress(long_1,float_1,long_1,int_1,long_1);

}
unsigned int v_readChunk_zTXt( unsigned int parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_8 = 1;
	long_2 = long_1 * long_1;
	long_3 = long_3 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_6 = 1;
			int_1 = v_ucvector_push_back(long_4,char_1);

			double_2 = double_1 * double_1;
			float_2 = float_1 * float_1;
			double_2 = double_1 * double_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float_2 = float_1 * float_2;
				int_1 = int_1 + int_2;
				if(1)
				{
					double double_3 = 1;
					long_4 = v_lodepng_malloc(double_1);

					long_5 = v_lodepng_free();

					char_1 = char_2;
					v_lodepng_add_text(long_1,float_2,short_1);

					double_3 = double_3 + double_2;
				}
			}
			long_1 = v_ucvector_cleanup();

			float_3 = float_2 * float_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short_2 = short_1 + short_2;
				if(1)
				{
					char_3 = v_zlib_decompress(int_2,char_2,int_1,short_2,short_3);

					short_1 = short_3 * short_2;
				}
			}
			if(1)
			{
				if(1)
				{
					float_3 = v_ucvector_init(long_3);

					unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
				}
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double double_4 = 1;
				unsigned int unsigned_int_7 = 1;
				double_2 = double_4;
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
					}
					if(1)
					{
						long_2 = long_6 + long_4;
					}
					if(1)
					{
						long long_7 = 1;
						long_6 = long_7 * long_2;
					}
					if(1)
					{
						char_3 = char_1 * char_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_6 = 1;
						float float_4 = 1;
						unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
						float_1 = float_4 + float_3;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
						unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
					}
				}
				unsigned_int_1 = unsigned_int_3 + unsigned_int_7;
			}
			long_1 = long_6 + long_6;
		}
	}
	long_8 = long_4 * long_1;
	return unsigned_int_2;
}
int v_string_set( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short_1 = v_string_resize(char_1,short_2);

	char_2 = char_2 * char_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	return int_1;
}
short v_string_resize( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double_1 = v_lodepng_realloc(unsigned_int_1);

	double_2 = double_2 + double_3;
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_2 = short_1 * short_1;
		char_2 = char_1 * char_1;
	}
	return short_2;
}
float v_string_init( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_1;
	short_1 = v_string_resize(char_1,short_2);

	short_3 = short_3 * short_1;
	return float_1;
}
void v_lodepng_add_text( long parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_3 = v_lodepng_realloc(unsigned_int_1);

		double_4 = double_1 + double_3;
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	double_5 = double_3 + double_1;
	float_1 = v_string_init(char_1);

	long_1 = long_2;
	long_1 = v_lodepng_free();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_5;
	int_3 = v_string_set(char_2,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_1 * short_2;
}
unsigned int v_readChunk_tEXt( short parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	v_lodepng_add_text(long_1,float_1,short_1);

	int_1 = int_1 + int_1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		long_1 = v_lodepng_free();

		short_3 = short_1 + short_2;
	}
	return unsigned_int_1;
	long_1 = v_lodepng_malloc(double_3);

}
float v_readChunk_bKGD( int parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		double_3 = double_1 * double_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
		float_2 = float_1 * float_2;
	}
	return float_1;
}
short v_readChunk_tRNS( long parameter_1,long parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int_1 = int_1 + int_2;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		long_1 = long_1 + long_2;
		int_3 = int_2;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "C&") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		double_3 = double_1 + double_2;
		double_4 = double_4 + double_3;
	}
	if(1)
	{
	}
	return short_1;
}
int v_readChunk_PLTE( long parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_1 = v_lodepng_free();

		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_1;
	long_2 = v_lodepng_malloc(double_1);

	double_2 = double_1 + double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "oy") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "?") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		long_1 = long_1 + long_3;
		double_2 = double_1;
	}
	return int_4;
}
double v_lodepng_realloc(unsigned int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
short v_ucvector_reserve( long parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char * vul_var;
	char controller4vul_264[3];
	fgets(controller4vul_264 ,3 ,stdin);
	if( strcmp( controller4vul_264, "VK") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_2 = int_1 * int_1;
		float_3 = float_1 + float_2;
		char controller4vul_265[3];
		fgets(controller4vul_265 ,3 ,stdin);
		if( strcmp( controller4vul_265, "my") < 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 480)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			float_2 = float_3 + float_2;
			short_1 = short_1 * short_2;
		}
		if(1)
		{
		}
	}
	double_3 = double_1 * double_2;
}
void v_ucvector_resize( int parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char controller4vul_263[2];
	fgets(controller4vul_263 ,2 ,stdin);
	if( strcmp( controller4vul_263, ";") > 0)
	{
		short_1 = v_ucvector_reserve(long_1,unsigned_int_1,uni_para);

	}
	int_3 = int_1 + int_2;
}
double v_lodepng_chunk_type_equals( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") < 0)
	{
	}
	return double_1;
}
int v_lodepng_chunk_data_const( unsigned int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_lodepng_chunk_length( double parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	return char_1;
	float_1 = v_lodepng_read32bitInt(int_1);

}
float v_ucvector_init( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1 + double_1;
	return float_1;
}
unsigned int v_checkColorValidity( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	return unsigned_int_1;
}
unsigned int v_lodepng_crc32( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return unsigned_int_1;
}
float v_lodepng_read32bitInt( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
short v_LodePNGUnknownChunks_cleanup( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return short_1;
	long_1 = v_lodepng_free();

}
char v_LodePNGIText_cleanup()
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_1 = v_lodepng_free();

	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_2 = long_1;
		char_1 = char_1 * char_1;
		int_3 = int_1 * int_3;
		short_3 = short_1 + short_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	int_3 = int_1 * int_3;
	double_1 = v_string_cleanup(char_2);

	long_1 = long_1;
	return char_3;
}
double v_string_cleanup( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_lodepng_free();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
double v_LodePNGText_cleanup()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_1 = long_1 * long_1;
		char_2 = char_1 * char_1;
	}
	double_1 = v_string_cleanup(char_3);

	long_2 = v_lodepng_free();

	char_4 = char_4;
	int_1 = int_1 * int_2;
	return double_2;
}
long v_lodepng_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
void v_lodepng_palette_clear( double parameter_1)
{
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	if(1)
	{
		double double_1 = 1;
		long_1 = v_lodepng_free();

		double_2 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_2;
}
void v_lodepng_color_mode_cleanup( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long_3 = long_1 * long_2;
	v_lodepng_palette_clear(double_1);

}
void v_lodepng_info_cleanup( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_2;
	v_lodepng_color_mode_cleanup(char_1);

	char_2 = v_LodePNGIText_cleanup();

	short_1 = v_LodePNGUnknownChunks_cleanup(unsigned_int_1);

	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_LodePNGText_cleanup();

}
long v_lodepng_inspect( float parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = v_lodepng_crc32(short_1,long_1);

		char_1 = char_1 * char_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	v_lodepng_info_cleanup(float_1);

	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_3 = double_4;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	double_2 = double_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_5 = double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	int_2 = int_1 * int_2;
	double_2 = double_2 + double_4;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		short short_2 = 1;
		float_1 = v_lodepng_read32bitInt(int_2);

		unsigned_int_2 = v_checkColorValidity(float_1,long_1);

		short_2 = short_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			short_3 = short_1 * short_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		short short_4 = 1;
		short_3 = short_4 * short_4;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	v_lodepng_info_init(unsigned_int_3);

	double_1 = double_3 + double_3;
	return long_1;
}
int v_decodeGeneric( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	char controller4vul_260[2];
	fgets(controller4vul_260 ,2 ,stdin);
	if( strcmp( controller4vul_260, "g") > 0)
	{
		char controller4vul_261[2];
		fgets(controller4vul_261 ,2 ,stdin);
		if( strcmp( controller4vul_261, "V") > 0)
		{
			float_1 = v_readChunk_iTXt(unsigned_int_1,unsigned_int_1,unsigned_int_2,long_1,uni_para);

			float_2 = float_2 * float_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 + float_2;
	}
	double_2 = double_2 * double_2;
	float_5 = float_1 * float_4;
	return int_1;
}
long v_lodepng_decode( int parameter_1,char parameter_2,short parameter_3,double parameter_4,float parameter_5,short parameter_6,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	char controller4vul_258[2];
	fgets(controller4vul_258 ,2 ,stdin);
	if( strcmp( controller4vul_258, "}") < 0)
	{
		char controller4vul_259[2];
		fgets(controller4vul_259 ,2 ,stdin);
		if( strcmp( controller4vul_259, "?") < 0)
		{
			int_1 = v_decodeGeneric(short_1,unsigned_int_1,int_2,short_1,long_1,unsigned_int_2,uni_para);

			double_1 = double_1 + double_1;
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, "L2") < 0)
			{
			}
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_2;
		double_3 = double_3 * double_3;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		char_1 = char_1 + char_1;
		if(1)
		{
			long_2 = long_1 + long_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_3 * int_2;
		}
		char_3 = char_1 + char_2;
	}
	return long_2;
}
int v_LodePNGUnknownChunks_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	return int_1;
}
long v_LodePNGIText_init( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1;
	long_3 = long_1 + long_2;
	short_2 = short_1 * short_1;
	long_3 = long_2;
	long_2 = long_2 * long_2;
	return long_3;
}
int v_LodePNGText_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_1;
	long_3 = long_1 * long_2;
	return int_3;
}
void v_lodepng_info_init( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_3 = float_1 * float_2;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_2;
	short_1 = short_1 * short_1;
	char_3 = char_2 * char_1;
	short_2 = short_2 + short_3;
	long_1 = v_LodePNGIText_init(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_lodepng_color_mode_init();

	int_2 = v_LodePNGUnknownChunks_init(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2 + long_1;
	long_2 = long_1 + long_3;
	int_2 = v_LodePNGText_init(long_3);

	int_1 = int_1 * int_2;
}
void v_lodepng_color_mode_init()
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_1;
	long_2 = long_1 + long_1;
	char_3 = char_1 + char_2;
	short_2 = short_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_lodepng_compress_settings_init( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_2;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 * int_2;
	int_5 = int_3 + int_4;
	int_6 = int_4 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_3 = char_1 * char_2;
}
void v_lodepng_encoder_settings_init( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_1;
	char_1 = char_1 * char_2;
	v_lodepng_compress_settings_init(long_1);

	short_1 = short_1 + short_1;
	char_2 = char_1;
	long_1 = long_2 + long_1;
	short_1 = short_2 + short_1;
}
void v_lodepng_decompress_settings_init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_1;
	float_2 = float_1 + float_1;
	int_1 = int_1 * int_2;
}
void v_lodepng_decoder_settings_init( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_lodepng_decompress_settings_init(float_1);

	int_1 = int_2;
	double_1 = double_1 * double_2;
	double_3 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1;
}
void v_lodepng_state_init( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	v_lodepng_encoder_settings_init(int_3);

	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_lodepng_info_init(unsigned_int_2);

	int_3 = int_3;
	v_lodepng_decoder_settings_init(long_3);

	char_1 = char_2;
	v_lodepng_color_mode_init();

}
long v_lodepng_decode_memory( short parameter_1,short parameter_2,long parameter_3,double parameter_4,char parameter_5,double parameter_6,long parameter_7,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long_1 = v_lodepng_decode(int_1,char_1,short_1,double_1,float_1,short_1,uni_para);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_1;
	return long_1;
}
long v_lodepng_malloc( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_lodepng_load_file( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	long_1 = v_lodepng_malloc(double_2);

	short_2 = short_1 + short_1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_2;
	float_1 = float_2 * float_2;
	int_1 = int_3 + int_1;
	short_2 = short_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_3 * double_4;
	}
	int_1 = int_3 + int_4;
	if(1)
	{
	}
	return unsigned_int_3;
}
void v_lodepng_decode_file( long parameter_1,short parameter_2,float parameter_3,short parameter_4,short parameter_5,char parameter_6,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	int_1 = int_3;
	char controller4vul_257[2];
	fgets(controller4vul_257 ,2 ,stdin);
	if( strcmp( controller4vul_257, "r") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		long_1 = v_lodepng_decode_memory(short_1,short_2,long_2,double_1,char_2,double_2,long_1,uni_para);

		unsigned_int_3 = unsigned_int_2;
	}
	float_3 = float_1 + float_2;
}
double v_lodepng_decode32_file( char parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	v_lodepng_decode_file(long_1,short_1,float_1,short_1,short_2,char_1,uni_para);

	return double_1;
}
void v_pp2d_load_texture_png( long parameter_1,short parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char controller4vul_256[3];
	fgets(controller4vul_256 ,3 ,stdin);
	if( strcmp( controller4vul_256, "B`") < 0)
	{
		double_1 = v_lodepng_decode32_file(char_1,double_2,int_1,unsigned_int_1,uni_para);

	}
	int_1 = int_1 * int_1;
	int_3 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			char_3 = char_1 * char_2;
			long_1 = long_1 + long_1;
			double_1 = double_1 * double_1;
			int_2 = int_3 + int_4;
			float_1 = float_1 * float_2;
			char_1 = char_1 + char_1;
			double_3 = double_2 + double_3;
			char_1 = char_1 * char_2;
			double_3 = double_3 * double_2;
		}
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_4 = int_1 + int_4;
}
void v_pp2d_set_screen_color( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
}
void v_pp2d_set_texture_filter( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_2;
}
void v_pp2d_init()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_pp2d_set_texture_filter(double_1,unsigned_int_1);

	long_1 = long_1 + long_1;
	float_1 = float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "H") > 0)
	{
	}
	short_2 = short_1 + short_1;
}
int main()
{
	int uni_para =480;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_pp2d_load_texture_png(long_1,short_1,uni_para);

	int_1 = int_2;
	char_1 = char_1;
	int_4 = int_3 * int_1;
	return int_4;
}

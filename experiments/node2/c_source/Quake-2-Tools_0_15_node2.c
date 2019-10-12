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

void v_EmitPlanes();
void v_EmitBrushes();
void v_EndBSPFile();
void v_EndModel();
void v_ProcessSubModel();
void v_SaveClusters_r( int parameter_1);
void v_WriteFloat( short parameter_1,int parameter_2);
void v_WindingPlane( int parameter_1,int parameter_2,int parameter_3);
void v_WritePortalFile_r( unsigned int parameter_1);
int v_ClusterContents( unsigned int parameter_1);
void v_Portal_VisFlood();
void v_FillLeafNumbers_r( char parameter_1,int parameter_2);
void v_NumberLeafs_r( char parameter_1);
void v_CreateVisPortals_r( int parameter_1);
void v_WritePortalFile( long parameter_1);
void v_EmitAreaPortals( char parameter_1);
int v_GetEdge2( int parameter_1,int parameter_2,float parameter_3);
void v_EmitFace( short parameter_1);
void v_EmitMarkFace( char parameter_1,float parameter_2);
void v_EmitLeaf( unsigned int parameter_1);
int v_EmitDrawNode_r( short parameter_1);
void v_WriteBSP();
void v_PruneNodes_r( unsigned int parameter_1);
void v_PruneNodes( unsigned int parameter_1);
void v_TestEdge( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v_FindEdgeVerts( float parameter_1,short parameter_2);
void v_FixFaceEdges( unsigned int parameter_1,unsigned int parameter_2);
void v_FixEdges_r();
void v_FaceFromSuperverts( int parameter_1,char parameter_2,int parameter_3);
long v_HashVec( short parameter_1);
int v_GetVertexnum( char parameter_1);
void v_EmitFaceVertexes( char parameter_1,long parameter_2);
void v_EmitVertexes_r();
void v_FixTjuncs();
unsigned int v_FaceFromPortal( int parameter_1,int parameter_2);
void v_SubdivideFace( float parameter_1,double parameter_2);
void v_SubdivideNodeFaces( unsigned int parameter_1);
int v_AllocFace();
long v_NewFaceFromFace( double parameter_1);
short v_TryMergeWinding( int parameter_1,double parameter_2,short parameter_3);
char v_TryMerge( long parameter_1,float parameter_2,char parameter_3);
void v_MergeNodeFaces();
void v_MakeFaces_r( unsigned int parameter_1);
void v_MakeFaces();
void v_ReverseWinding( char parameter_1);
int v_PortalVisibleSides( float parameter_1);
void v_OutputPortal( float parameter_1,long parameter_2);
void v_WriteGLView_r( float parameter_1,char parameter_2);
void v_WriteGLView( short parameter_1,char parameter_2);
void v_SetAreaPortalAreas_r();
void v_FloodAreas_r( short parameter_1);
void v_FindAreas_r( float parameter_1);
void v_FloodAreas( double parameter_1);
void v_FreeFace( int parameter_1);
void v_FreeTree_r( long parameter_1);
void v_FreePortal( char parameter_1);
void v_FreeTreePortals_r( int parameter_1);
void v_FreeTree( long parameter_1);
int v_VisibleContents( int parameter_1);
void v_FindPortalSide( short parameter_1);
void v_MarkVisibleSides_r( double parameter_1);
void v_MarkVisibleSides( float parameter_1,int parameter_2,int parameter_3);
void v_WindingCenter( short parameter_1,short parameter_2);
void v_LeakFile( unsigned int parameter_1);
void v_FillOutside_r( char parameter_1);
void v_FillOutside( unsigned int parameter_1);
long v_Portal_EntityFlood( float parameter_1,int parameter_2);
void v_FloodPortals_r( unsigned int parameter_1,int parameter_2);
void v_PlaceOccupant( unsigned int parameter_1,float parameter_2,short parameter_3);
short v_VectorCompare( long parameter_1,int parameter_2);
unsigned int v_FloodEntities( char parameter_1);
void v_RemovePortalFromNode( int parameter_1,int parameter_2);
void v_SplitNodePortals( long parameter_1);
long v_BaseWindingForNode( int parameter_1);
void v_MakeNodePortal( double parameter_1);
void v_CalcNodeBounds( double parameter_1);
void v_MakeTreePortals_r( int parameter_1);
void v_AddPortalToNodes( short parameter_1,long parameter_2,double parameter_3);
long v_AllocPortal();
void v_MakeHeadnodePortals( char parameter_1);
void v_MakeTreePortals( int parameter_1);
unsigned int v_BlockTree( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_PointInLeaf( unsigned int parameter_1,unsigned int parameter_2);
void v_SplitBrushList( char parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4);
void v_LeafNode( double parameter_1,char parameter_2);
int v_BoxOnPlaneSide( short parameter_1,long parameter_2,unsigned int parameter_3);
int v_TestBrushToPlanenum( float parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5);
long v_CheckPlaneAgainstVolume( int parameter_1,char parameter_2);
void v_CheckPlaneAgainstParents( int parameter_1,unsigned int parameter_2);
int v_SelectSplitSide( int parameter_1,float parameter_2);
void v_GLS_EndScene();
void v_GLS_Winding( unsigned int parameter_1,int parameter_2);
void v_GLS_BeginScene();
void v_DrawBrushList( char parameter_1,float parameter_2);
int v_BuildTree_r( long parameter_1,float parameter_2);
void v_CreateBrushWindings( char parameter_1);
char v_BrushFromBounds( char parameter_1,float parameter_2);
float v_AllocTree();
void v_BrushBSP( int parameter_1,double parameter_2,char parameter_3);
void v_WriteBrushMap( char parameter_1,short parameter_2);
int v_AddBrushListToTail( double parameter_1,unsigned int parameter_2);
long v_CullList( char parameter_1,double parameter_2);
void v_FreeBrushList( char parameter_1);
void v_SplitBrush2( unsigned int parameter_1,int parameter_2,float parameter_3,long parameter_4,int uni_para);
char v_SubtractBrush( double parameter_1,double parameter_2,int uni_para);
void v_BrushGE( char parameter_1,long parameter_2);
long v_BrushesDisjoint( char parameter_1,unsigned int parameter_2);
void v_OutputWinding( float parameter_1,int parameter_2);
void v_WriteBrushList( char parameter_1,short parameter_2,short parameter_3);
int v_CountBrushList( short parameter_1);
short v_ChopBrushes( double parameter_1,int uni_para);
int v_AllocNode();
short v_BrushVolume( short parameter_1);
void v_FreeBrush( short parameter_1);
void v_BoundBrush();
void v_ClipWindingEpsilon( short parameter_1,double parameter_2,char parameter_3,int parameter_4,double parameter_5,char parameter_6);
void v_WindingIsHuge( int parameter_1);
int v_BrushMostlyOnSide( int parameter_1,int parameter_2);
long v_WindingArea( float parameter_1);
float v_WindingIsTiny( long parameter_1);
int v_CopyBrush( int parameter_1);
void v_SplitBrush( double parameter_1,int parameter_2,int parameter_3,long parameter_4,int uni_para);
short v_ClipBrushToBox( float parameter_1,long parameter_2,float parameter_3);
long v_CopyWinding( unsigned int parameter_1);
char v_AllocBrush( int parameter_1);
float v_MakeBspBrushList( int parameter_1,int parameter_2,double parameter_3,long parameter_4);
void v_ProcessBlock_Thread( int parameter_1,int uni_para);
void v_ThreadUnlock();
void v_ThreadLock();
int v_GetThreadWork();
void v_ThreadWorkerFunction( int parameter_1);
void v_RunThreadsOn( int parameter_1,long parameter_2,char parameter_3);
void v_RunThreadsOnIndividual( int parameter_1,int parameter_2,char parameter_3);
void v_ProcessWorldModel(int uni_para);
void v_BeginModel();
void v_BeginBSPFile();
void v_ProcessModels(int uni_para);
void v_AddLump( int parameter_1,int parameter_3);
void v_SafeWrite( long parameter_1,int parameter_3);
unsigned int v_SafeOpenWrite( char parameter_1);
void v_WriteBSPFile( char parameter_1);
void v_StripTrailing( char parameter_1);
void v_UnparseEntities();
void v_SetLightStyles();
void v_SetModelNumbers();
void v_MoveBrushesToWorld( float parameter_1);
void v_ValueForKey( short parameter_1,char parameter_2);
void v_GetVectorForKey( short parameter_1,char parameter_2,long parameter_3);
char v_ParseEpair();
void v_AddBrushBevels( short parameter_1);
void v_SetKeyValue( double parameter_1,char parameter_2,char parameter_3);
void v_AddPointToBounds( float parameter_1,unsigned int parameter_2,double parameter_3);
void v_FreeWinding( long parameter_1);
void v_ChopWindingInPlace( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4,int uni_para);
char v_AllocWinding( int parameter_1,int uni_para);
void v_VectorMA( unsigned int parameter_1,double parameter_2,long parameter_3,char parameter_4);
unsigned int v_BaseWindingForPlane( unsigned int parameter_1,short parameter_2);
void v_ClearBounds( long parameter_1,int parameter_2);
void v_MakeBrushWindings( double parameter_1);
int v_BrushContents( unsigned int parameter_1);
void v_TextureAxisFromPlane( unsigned int parameter_1,float parameter_2,float parameter_3);
int v_TexinfoForBrushTexture( double parameter_1,unsigned int parameter_2,int parameter_3);
void v_AddPlaneToHash( short parameter_1);
int v_PlaneTypeForNormal( short parameter_1);
double v_VectorLength( char parameter_1);
int v_CreateNewFloatPlane( char parameter_1,unsigned int parameter_2);
double v_PlaneEqual( double parameter_1,double parameter_2,float parameter_3);
float v_Q_rint( float parameter_1);
void v_SnapVector( char parameter_1);
void v_SnapPlane( char parameter_1,float parameter_2);
int v_FindFloatPlane( long parameter_1,char parameter_2);
char v_VectorNormalize( long parameter_1,unsigned int parameter_2);
void v_CrossProduct( short parameter_1,short parameter_2,char parameter_3);
int v_PlaneFromPoints( int parameter_1,int parameter_2,int parameter_3);
void v_TokenAvailable();
void v_SafeRead( double parameter_1,int parameter_3);
int v_Q_filelength( double parameter_1);
int v_TryLoadFile( char parameter_1);
int v_FindMiptex( char parameter_1);
void v_ParseBrush( double parameter_1);
double v_GetToken( double parameter_1);
double v_ParseMapEntity();
float v_ExpandPath( char parameter_1);
void v_AddScriptToStack( char parameter_1);
void v_LoadScriptFile( char parameter_1);
void v_LoadMapFile( char parameter_1);
short v_LittleShort( short parameter_1);
float v_LittleFloat( float parameter_1);
void v_SwapBSPFile();
int v_CopyLump( int parameter_1,int parameter_3);
int v_LittleLong( int parameter_1);
int v_LoadFile( char parameter_1);
void v_LoadBSPFile( char parameter_1);
void v_DefaultExtension( char parameter_1,char parameter_2);
void v_StripExtension( char parameter_1);
char v_ExpandArg( char parameter_1);
void v_qprintf( char parameter_1,char parameter_2);
int v_Q_strncasecmp( char parameter_1,char parameter_2,int parameter_3);
void v_Q_getwd( char parameter_1);
void v_SetQdirFromPath( char parameter_1);
void v_ThreadSetDefault();
double v_I_FloatTime();
void v_Error( char parameter_1,int parameter_2);
void v_EmitPlanes()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_3 = double_4;
	long_1 = long_2;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_1 = long_1 * long_2;
		short_2 = short_1;
		short_1 = short_3 * short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_3 = float_1 + float_2;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
}
void v_EmitBrushes()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	double_1 = double_1 + double_2;
	int_2 = int_1 + int_2;
	int_3 = v_FindFloatPlane(long_1,char_1);

	double_2 = double_2 * double_3;
	v_Error(char_2,int_3);

	double_4 = double_3 * double_4;
	float_1 = float_2;
	double_4 = double_2;
}
void v_EndBSPFile()
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_1;
	v_WriteBSPFile(char_1);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1;
	v_EmitPlanes();

	float_1 = float_1 + float_1;
	v_EmitBrushes();

	int_1 = v_LoadFile(char_1);

	int_3 = int_2 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	short_2 = short_1 * short_2;
	v_UnparseEntities();

	int_1 = int_1 + int_4;
	double_2 = double_1;
	long_1 = long_1 * long_1;
	float_2 = float_2 * float_1;
	short_1 = short_3;
}
void v_EndModel()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_3 * int_3;
	int_3 = int_2 * int_4;
	int_2 = int_3 + int_3;
}
void v_ProcessSubModel()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double_1 = double_2;
	int_1 = int_2;
	short_1 = v_ChopBrushes(double_2,-1 );

	char_1 = char_1 + char_2;
	v_BrushBSP(int_3,double_2,char_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_2 * short_1;
	int_2 = int_2 * int_2;
	v_MakeFaces();

	int_1 = int_3 + int_1;
	int_3 = int_3 + int_3;
	double_1 = double_2;
	v_MakeTreePortals(int_2);

	float_2 = float_1 + float_2;
	double_1 = double_2 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7O") > 0)
	{
		int_3 = int_2;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char_2 = char_2 + char_1;
	short_3 = short_1 + short_3;
	char_5 = char_4 * char_5;
	v_MarkVisibleSides(float_3,int_4,int_5);

	float_4 = float_4 + float_3;
	v_WriteBSP();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	float_3 = v_MakeBspBrushList(int_5,int_2,double_3,long_1);

	v_FixTjuncs();

	double_4 = double_3;
	v_FreeTree(long_1);

}
void v_SaveClusters_r( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	short_2 = short_1 + short_1;
	float_1 = float_1 + float_2;
}
void v_WriteFloat( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	float_1 = v_Q_rint(float_1);

}
void v_WindingPlane( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	char_1 = v_VectorNormalize(long_1,unsigned_int_2);

	char_3 = char_1 * char_2;
	char_1 = char_3 * char_2;
	int_2 = int_1;
	v_CrossProduct(short_1,short_2,char_2);

}
void v_WritePortalFile_r( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_6 = 1;
	double_1 = double_1 + double_2;
	float_3 = float_1 + float_2;
	double_3 = double_2 * double_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_4 = 1;
		short short_4 = 1;
		v_WindingPlane(int_1,int_1,int_2);

		float_1 = float_4 * float_3;
		short_4 = short_3 + short_3;
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_2 + float_3;
		float_2 = float_3;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			if(1)
			{
				short short_5 = 1;
				short_5 = short_5 + short_1;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				short_1 = short_3;
			}
			if(1)
			{
				int_2 = int_1 + int_2;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_5 = 1;
				float float_6 = 1;
				float float_7 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_1 = 1;
				float_1 = float_5 * float_6;
				float_7 = float_3;
				double_2 = double_3 * double_2;
				v_Portal_VisFlood();

				v_WriteFloat(short_6,int_1);

				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				char_1 = char_1 + char_1;
			}
			unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
		}
	}
}
int v_ClusterContents( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_4;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 * char_1;
	}
	return int_1;
}
void v_Portal_VisFlood()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_VisibleContents(int_2);

	int_2 = int_2 * int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
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
	int_1 = v_ClusterContents(unsigned_int_1);

}
void v_FillLeafNumbers_r( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "n`") > 0)
		{
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			char_2 = char_1 + char_3;
		}
	}
	double_1 = double_1;
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_1;
}
void v_NumberLeafs_r( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_4;
		v_FillLeafNumbers_r(char_1,int_1);

		double_3 = double_3 * double_4;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 * float_3;
	}
	short_1 = short_1 + short_1;
	short_4 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			if(1)
			{
				int int_2 = 1;
				int_2 = int_1 + int_1;
			}
			long_3 = long_1 * long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			v_Portal_VisFlood();

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
}
void v_CreateVisPortals_r( int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	v_SplitNodePortals(long_1);

	double_3 = double_1 * double_2;
	long_1 = long_2 + long_3;
	short_1 = short_2;
	v_MakeNodePortal(double_1);

	int_1 = int_1 * int_2;
}
void v_WritePortalFile( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_9 = 1;
	char char_10 = 1;
	char char_11 = 1;
	double double_4 = 1;
	char_3 = char_1 * char_2;
	float_3 = float_1 * float_2;
	short_1 = short_1;
	int_3 = int_1 + int_2;
	char_5 = char_2 * char_4;
	v_FreeTreePortals_r(int_1);

	double_1 = double_1 * double_1;
	v_qprintf(char_3,char_5);

	long_2 = long_1 * long_1;
	v_SaveClusters_r(int_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_CreateVisPortals_r(int_4);

	double_1 = double_1;
	int_1 = int_1 * int_4;
	v_Error(char_3,int_5);

	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	v_MakeHeadnodePortals(char_6);

	v_NumberLeafs_r(char_6);

	char_2 = char_7 + char_8;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8d") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	float_4 = float_2 + float_3;
	double_2 = double_1 + double_2;
	char_1 = char_4 + char_7;
	double_1 = double_1 + double_3;
	v_WritePortalFile_r(unsigned_int_1);

	char_11 = char_9 + char_10;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_2 + short_2;
	char_11 = char_3 * char_7;
	double_3 = double_4;
}
void v_EmitAreaPortals( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	v_Error(char_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_2 * char_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		int_1 = int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			unsigned int unsigned_int_5 = 1;
			float_1 = float_1 * float_1;
			if(1)
			{
				char_1 = char_1;
			}
			v_qprintf(char_1,char_1);

			unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char_5 = char_3 * char_4;
				unsigned_int_3 = unsigned_int_1;
				short_2 = short_1 * short_1;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
				double_1 = double_1 * double_2;
			}
		}
		float_2 = float_2 + float_3;
	}
	int_1 = int_1 * int_1;
	short_2 = short_1;
}
int v_GetEdge2( int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				}
				char_1 = char_2;
			}
			if(1)
			{
				if(1)
				{
					int int_3 = 1;
					int_1 = int_2 + int_3;
				}
			}
		}
		if(1)
		{
			int_2 = int_4 * int_2;
		}
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	char_4 = char_3 + char_3;
	v_Error(char_4,int_1);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	float_2 = float_1 * float_2;
	int_4 = int_1 * int_4;
	return int_1;
}
void v_EmitFace( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	int_3 = int_2 * int_2;
	double_2 = double_1 + double_2;
	float_1 = float_1;
	int_2 = int_3 * int_3;
	short_1 = short_2;
	double_3 = double_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		float float_3 = 1;
		int_3 = v_GetEdge2(int_3,int_4,float_2);

		int_3 = int_2 * int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
		v_Error(char_4,int_1);

		int_4 = int_1 + int_5;
		float_3 = float_3 * float_2;
	}
}
void v_EmitMarkFace( char parameter_1,float parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1;
	v_Error(char_1,int_1);

	double_3 = double_1 + double_2;
}
void v_EmitLeaf( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	int_1 = int_1 + int_2;
	v_EmitMarkFace(char_1,float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_3;
	double_2 = double_1 + double_1;
	double_4 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		char_2 = char_2;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	float_1 = float_1 + float_1;
	double_5 = double_2 * double_4;
	long_2 = long_1 * long_1;
	char_1 = char_1 * char_1;
	char_3 = char_2;
	double_1 = double_3 + double_3;
	double_3 = double_5 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 + long_1;
		}
		v_Error(char_3,int_4);

		short_3 = short_1 * short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_4 = int_3 * int_3;
			}
		}
		if(1)
		{
			float float_2 = 1;
			float float_4 = 1;
			float_4 = float_2 + float_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
		}
	}
	float_3 = float_1 * float_1;
	if(1)
	{
	}
	double_6 = double_1 * double_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_5 = 1;
		int int_6 = 1;
		unsigned_int_7 = unsigned_int_3;
		int_3 = int_5 + int_6;
		if(1)
		{
			int_5 = int_1 + int_1;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_2;
}
int v_EmitDrawNode_r( short parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		long long_2 = 1;
		v_EmitFace(short_1);

		long_2 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_2;
	char_1 = char_1 * char_1;
	long_3 = long_1 + long_1;
	char_3 = char_1 * char_2;
	v_Error(char_2,int_1);

	int_1 = int_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	int_3 = int_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 + double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	}
	int_1 = int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			int int_4 = 1;
			v_EmitLeaf(unsigned_int_4);

			short_2 = short_2 * short_3;
			int_5 = int_4 + int_3;
		}
		if(1)
		{
			float float_1 = 1;
			int_5 = int_1 * int_2;
			float_1 = float_1 + float_1;
		}
	}
	return int_2;
}
void v_WriteBSP()
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	long_3 = long_1 + long_2;
	short_2 = short_1 * short_2;
	double_1 = double_1;
	v_qprintf(char_1,char_1);

	int_3 = int_1 * int_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1;
	int_4 = v_EmitDrawNode_r(short_1);

	v_EmitAreaPortals(char_2);

	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2;
}
void v_PruneNodes_r( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	double_4 = double_3 + double_4;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			v_PruneNodes_r(unsigned_int_1);

			int_1 = int_2 * int_2;
		}
		if(1)
		{
			double_5 = double_1 + double_3;
		}
		int_3 = int_2 + int_1;
		v_Error(char_1,int_3);

		double_6 = double_2 * double_3;
		int_2 = int_2 * int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			short_1 = short_1 * short_1;
			double_1 = double_1 * double_5;
		}
		double_5 = double_2 * double_3;
	}
}
void v_PruneNodes( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_3 = short_1 * short_2;
	v_PruneNodes_r(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 * short_1;
	v_qprintf(char_1,char_2);

	double_3 = double_1 * double_2;
}
void v_TestEdge( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = v_VectorLength(char_1);

	int_2 = int_1 + int_1;
	long_1 = long_1 + long_1;
	v_Error(char_1,int_2);

	int_2 = int_2 + int_1;
	double_1 = double_2 * double_1;
	char_1 = char_2 * char_3;
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 * float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float float_5 = 1;
		int int_3 = 1;
		float float_6 = 1;
		float float_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float_5 = float_3 + float_4;
		if(1)
		{
			int_3 = int_2 + int_2;
		}
		float_6 = float_1 * float_5;
		float_7 = float_6 + float_5;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			int_3 = int_1 + int_2;
		}
		v_VectorMA(unsigned_int_4,double_2,long_2,char_4);

		int_1 = int_3;
		double_4 = double_3 * double_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double_4 = double_3 * double_4;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		double_3 = double_1 + double_3;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		char char_5 = 1;
		char_2 = char_5 + char_1;
	}
	double_4 = double_5 + double_5;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
}
void v_FindEdgeVerts( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		short_3 = short_1 + short_2;
		short_3 = short_3 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_2 = double_3;
		}
	}
	char_1 = char_2;
	int_1 = int_3 * int_1;
	double_2 = double_2 * double_1;
	int_3 = int_1;
	if(1)
	{
		double double_4 = 1;
		short short_4 = 1;
		double_3 = double_3 + double_3;
		double_3 = double_3 * double_4;
		short_4 = short_1 * short_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		float_1 = float_2;
		char_1 = char_2 * char_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_3 * double_2;
	}
	short_1 = short_3 * short_1;
	double_1 = double_6 * double_7;
	float_2 = float_1;
	if(1)
	{
		double_3 = double_6;
	}
	if(1)
	{
		double_6 = double_7 * double_3;
	}
	if(1)
	{
		short short_5 = 1;
		short_2 = short_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	}
	int_4 = int_1 * int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int int_5 = 1;
				int_2 = int_5 + int_4;
			}
		}
	}
}
void v_FixFaceEdges( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	v_TestEdge(unsigned_int_1,int_1,int_1,int_1,int_1);

	int_1 = int_1 * int_1;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	char_1 = v_VectorNormalize(long_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_2 * char_3;
	long_2 = long_2 * long_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float_1 = float_1 * float_3;
		int_1 = int_1 * int_1;
		double_4 = double_3 * double_3;
		short_1 = short_2;
		double_4 = double_4 * double_3;
		int_1 = int_1 + int_2;
		short_3 = short_1 * short_3;
		long_1 = long_1;
		short_4 = short_3;
		short_3 = short_2 + short_4;
	}
	if(1)
	{
		double_1 = double_2 * double_3;
		int_2 = int_1 * int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_1 = double_2 * double_3;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		float_2 = float_1 * float_1;
		int_3 = int_2 * int_2;
		int_1 = int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_FindEdgeVerts(float_4,short_1);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	v_FaceFromSuperverts(int_2,char_3,int_2);

	int_2 = int_2 + int_1;
}
void v_FixEdges_r()
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") < 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_2 = int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_1;
	}
	v_FixFaceEdges(unsigned_int_1,unsigned_int_1);

}
void v_FaceFromSuperverts( int parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = v_NewFaceFromFace(double_1);

	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	int_2 = int_1 + int_1;
}
long v_HashVec( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	v_Error(char_1,int_1);

	double_3 = double_2 + double_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return long_1;
}
int v_GetVertexnum( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2;
	long_1 = long_1 + long_1;
	long_4 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_4 = 1;
			short_4 = short_3 * short_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	float_3 = v_Q_rint(float_4);

	double_3 = double_3;
	long_1 = long_4 * long_1;
	double_4 = double_1;
	v_Error(char_1,int_1);

	long_1 = long_4 * long_1;
	double_1 = double_3;
	long_5 = v_HashVec(short_3);

	short_1 = short_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return int_2;
}
void v_EmitFaceVertexes( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	v_FaceFromSuperverts(int_1,char_1,int_2);

	long_2 = long_1 * long_1;
	long_3 = long_3 * long_1;
	if(1)
	{
	}
	v_Error(char_2,int_2);

	int_2 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			short short_2 = 1;
			double double_2 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			int_3 = int_4 * int_2;
			long_5 = long_4 * long_5;
			short_1 = short_1 * short_2;
			double_1 = double_1 * double_2;
			short_1 = short_3 + short_2;
		}
		if(1)
		{
			double double_3 = 1;
			int_4 = v_GetVertexnum(char_3);

			double_3 = double_1 + double_3;
		}
	}
	short_3 = short_1 * short_1;
	int_3 = int_3 * int_4;
}
void v_EmitVertexes_r()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_EmitFaceVertexes(char_1,long_1);

	int_2 = int_1 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_1 = char_2 + char_3;
	}
}
void v_FixTjuncs()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 + float_2;
	v_EmitVertexes_r();

	v_FixEdges_r();

	short_3 = short_2 * short_1;
	float_3 = float_2 * float_1;
	int_1 = int_1;
	short_2 = short_3 * short_2;
	v_qprintf(char_1,char_2);

	float_3 = float_3 * float_4;
	double_3 = double_2 + double_1;
	int_2 = int_2 * int_1;
	short_3 = short_2 + short_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	float_3 = float_1 + float_5;
	double_4 = double_4 * double_5;
	short_2 = short_2;
	long_1 = long_1 + long_2;
	double_1 = double_5 + double_1;
}
unsigned int v_FaceFromPortal( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_AllocFace();

	int_2 = int_2 + int_2;
	long_1 = v_CopyWinding(unsigned_int_1);

	double_1 = double_1 + double_1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_2;
	int_4 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v_VisibleContents(int_1);

		long_1 = long_2 * long_2;
		double_2 = double_2 + double_3;
	}
	return unsigned_int_4;
	v_ReverseWinding(char_1);

}
void v_SubdivideFace( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_1 = v_VectorNormalize(long_1,unsigned_int_1);

		v_ClipWindingEpsilon(short_1,double_1,char_2,int_1,double_2,char_1);

		long_3 = long_2 * long_1;
		long_2 = long_2;
		if(1)
		{
			double_2 = double_1 + double_1;
			if(1)
			{
				long long_5 = 1;
				int_1 = int_1 + int_1;
				v_Error(char_1,int_1);

				long_5 = long_4 + long_3;
			}
		}
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	float_4 = float_1 * float_3;
	if(1)
	{
		double double_3 = 1;
		long_1 = v_NewFaceFromFace(double_1);

		double_3 = double_2;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_2 * short_2;
			}
			if(1)
			{
				double double_5 = 1;
				double_5 = double_1 + double_2;
				long_2 = long_4 + long_3;
			}
		}
	}
	float_3 = float_4 + float_4;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
}
void v_SubdivideNodeFaces( unsigned int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	v_SubdivideFace(float_1,double_1);

	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_2;
	}
}
int v_AllocFace()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	return int_2;
}
long v_NewFaceFromFace( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int_1 = v_AllocFace();

	int_2 = int_1 + int_1;
	char_1 = char_1;
	long_1 = long_1 + long_2;
	int_3 = int_2 + int_3;
	long_1 = long_1 + long_2;
	char_1 = char_1 * char_2;
	return long_1;
}
short v_TryMergeWinding( int parameter_1,double parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	long long_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long_2 = long_1 * long_1;
	short_1 = short_1;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	long_2 = long_2 * long_1;
	long_2 = long_3;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_1 = int_3 * int_2;
		int_2 = int_3 + int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_1 = char_2;
			char_2 = v_VectorNormalize(long_2,unsigned_int_1);

			double_4 = double_2 + double_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					double_6 = double_5 * double_1;
				}
				if(1)
				{
					float_2 = float_1 + float_2;
				}
			}
			if(1)
			{
				v_CrossProduct(short_1,short_1,char_1);

				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
		}
		if(1)
		{
			int_4 = int_5 * int_2;
		}
	}
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	short_3 = short_1 + short_3;
	int_3 = int_6 * int_6;
	long_4 = long_1 + long_2;
	int_6 = int_1 * int_3;
	float_2 = float_1 * float_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1;
	double_5 = double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_5;
	double_6 = double_4 + double_1;
	double_5 = double_5 + double_1;
	if(1)
	{
	}
	long_6 = long_4 + long_5;
	double_2 = double_6 + double_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			long_6 = long_1;
		}
		double_5 = double_1;
		char_1 = v_AllocWinding(int_5,-1 );

		int_2 = int_5;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_4 = 1;
		if(1)
		{
			int int_7 = 1;
			int_2 = int_1 + int_7;
		}
		short_2 = short_4 + short_1;
		int_2 = int_3 * int_1;
	}
	return short_2;
}
char v_TryMerge( long parameter_1,float parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
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
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	long_3 = v_NewFaceFromFace(double_1);

	double_3 = double_2 * double_1;
	float_1 = float_2;
	int_1 = int_2 * int_1;
	short_1 = v_TryMergeWinding(int_1,double_3,short_2);

	long_3 = long_1 + long_1;
	long_3 = long_2 * long_4;
	return char_1;
}
void v_MergeNodeFaces()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	long long_4 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				int_2 = int_1 * int_1;
			}
			long_3 = long_1 * long_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int int_3 = 1;
				int int_4 = 1;
				int_4 = int_3 * int_3;
			}
			char_4 = v_TryMerge(long_4,float_2,char_3);

			double_2 = double_3;
			double_2 = double_4 * double_1;
			unsigned_int_2 = unsigned_int_3;
		}
	}
}
void v_MakeFaces_r( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_SubdivideNodeFaces(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		v_MergeNodeFaces();

		int_1 = int_1 * int_2;
		double_2 = double_2 * double_2;
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			unsigned_int_2 = v_FaceFromPortal(int_3,int_2);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
		int_3 = int_3 * int_2;
		if(1)
		{
			double double_3 = 1;
			long long_1 = 1;
			int int_4 = 1;
			double_1 = double_3;
			long_1 = long_1 + long_1;
			int_3 = int_4 * int_2;
		}
	}
}
void v_MakeFaces()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_1;
	short_1 = short_1 + short_2;
	double_1 = double_3 * double_1;
	v_MakeFaces_r(unsigned_int_1);

	short_1 = short_2 * short_3;
	short_3 = short_2 + short_4;
	v_qprintf(char_1,char_3);

	unsigned_int_1 = unsigned_int_2;
}
void v_ReverseWinding( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	double_2 = double_1 + double_1;
	char_1 = v_AllocWinding(int_3,-1 );

}
int v_PortalVisibleSides( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
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
void v_OutputPortal( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	v_ReverseWinding(char_1);

	float_1 = float_1;
	float_2 = float_2 * float_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	double_4 = double_2 * double_2;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	int_2 = int_3 * int_2;
	if(1)
	{
		int int_4 = 1;
		int_1 = v_PortalVisibleSides(float_3);

		int_1 = int_4;
	}
	v_OutputWinding(float_2,int_5);

	v_FreeWinding(long_1);

}
void v_WriteGLView_r( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_2;
	if(1)
	{
		float float_1 = 1;
		short_1 = short_1 + short_1;
		float_2 = float_1 + float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "O") < 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			v_OutputPortal(float_2,long_1);

			int_2 = int_1 * int_1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
	}
}
void v_WriteGLView( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	v_WriteGLView_r(float_1,char_1);

	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	int_4 = int_3 + int_4;
	short_1 = short_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "@S") > 0)
	{
		int int_5 = 1;
		int_5 = int_2 + int_4;
	}
	double_1 = double_1 + double_1;
	long_1 = long_3 * long_3;
	unsigned_int_1 = unsigned_int_1;
	v_Error(char_1,int_4);

}
void v_SetAreaPortalAreas_r()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_3;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
	}
}
void v_FloodAreas_r( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		long_1 = v_Portal_EntityFlood(float_1,int_1);

		int_2 = int_1;
		if(1)
		{
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if(remainder_check(controller_3,100,1))
		{
			long long_3 = 1;
			long_3 = long_1 * long_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			double_4 = double_2 + double_3;
		}
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_2 = int_2 + int_3;
		if(1)
		{
			if(1)
			{
				double_4 = double_2 + double_3;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
		char_2 = char_2 + char_2;
	}
}
void v_FindAreas_r( float parameter_1)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = long_2;
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
	unsigned_int_3 = unsigned_int_2;
	v_FloodAreas_r(short_1);

	int_1 = int_1 * int_2;
}
void v_FloodAreas( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	v_qprintf(char_1,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_FindAreas_r(float_1);

	float_1 = float_2;
	v_SetAreaPortalAreas_r();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
}
void v_FreeFace( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		v_FreeWinding(long_1);

		int_1 = int_2;
	}
	double_2 = double_1 + double_1;
	int_2 = int_2 * int_1;
}
void v_FreeTree_r( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_2;
	}
	int_1 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		v_FreeBrushList(char_1);

		v_FreeFace(int_3);

		float_2 = float_1 * float_1;
		v_FreeBrush(short_1);

		int_3 = int_2 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	float_4 = float_3 * float_2;
	v_FreeTree_r(long_4);

}
void v_FreePortal( char parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		v_FreeWinding(long_1);

		short_1 = short_1;
	}
	char_1 = char_1 + char_1;
}
void v_FreeTreePortals_r( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	v_FreeTreePortals_r(int_1);

	long_2 = long_1 * long_1;
	long_2 = long_2 * long_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
		int_1 = int_1 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_2 * int_3;
		v_RemovePortalFromNode(int_2,int_2);

		long_3 = long_3 + long_4;
		int_3 = int_4;
		double_1 = double_1 * double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_FreePortal(char_1);

}
void v_FreeTree( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_2;
	v_FreeTree_r(long_1);

	char_2 = char_1 + char_1;
	v_FreeTreePortals_r(int_1);

}
int v_VisibleContents( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
}
void v_FindPortalSide( short parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_2 + long_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	char_2 = char_1 * char_1;
	double_2 = double_2 * double_3;
	int_1 = int_2 + int_2;
	if(1)
	{
	}
	int_2 = v_VisibleContents(int_2);

	double_3 = double_2 + double_3;
	long_3 = long_1 * long_2;
	int_3 = int_3 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char_1 = char_2 + char_1;
		char_1 = char_3 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_4 = 1;
			double_1 = double_4 * double_4;
			if(1)
			{
				short_1 = short_2 * short_2;
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int int_5 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_2 = 1;
				v_qprintf(char_4,char_1);

				long_1 = long_2;
				if(1)
				{
					double_2 = double_4 + double_3;
				}
				if(1)
				{
					int_1 = int_3 * int_4;
				}
				if(1)
				{
					char char_5 = 1;
					int int_6 = 1;
					char_5 = char_3 * char_1;
					int_6 = int_1 + int_5;
				}
				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
				float_1 = float_1 + float_2;
				if(1)
				{
					int int_7 = 1;
					int_7 = int_1 + int_1;
					int_5 = int_2 * int_4;
				}
			}
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_8 = int_4 * int_3;
	}
	long_1 = long_1 + long_4;
	double_1 = double_3 + double_3;
}
void v_MarkVisibleSides_r( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
		v_FindPortalSide(short_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
		}
	}
}
void v_MarkVisibleSides( float parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short_1 = short_1 + short_2;
	v_qprintf(char_1,char_1);

	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		v_MarkVisibleSides_r(double_2);

		float_2 = float_1 + float_2;
		long_1 = long_1 + long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_3 = 1;
			short_1 = short_3;
		}
	}
	double_4 = double_4 * double_5;
}
void v_WindingCenter( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	double_1 = double_1 * double_2;
	double_2 = double_3 * double_4;
}
void v_LeakFile( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3;
	}
	long_3 = long_1 + long_2;
	if(1)
	{
		v_qprintf(char_1,char_1);

		double_2 = double_1 + double_1;
		v_Error(char_3,int_1);

		double_2 = double_3 * double_3;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_2 + double_2;
		}
		char_1 = char_1 * char_3;
		double_1 = double_2 * double_3;
	}
	if(1)
	{
	}
	v_WindingCenter(short_1,short_1);

	short_2 = short_2 * short_3;
	if(1)
	{
	}
	int_3 = int_3 * int_1;
	if(1)
	{
	}
	double_5 = double_3 + double_4;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	short_3 = short_4 + short_3;
	if(1)
	{
	}
	double_6 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	v_GetVectorForKey(short_5,char_2,long_1);

	char_3 = char_3 * char_2;
	long_1 = long_2 * long_4;
	if(1)
	{
		short short_6 = 1;
		short_6 = short_4 + short_5;
	}
	if(1)
	{
		double_4 = double_6 * double_6;
	}
}
void v_FillOutside_r( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1 * int_2;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			double_1 = double_1 + double_1;
			int_3 = int_3 + int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
}
void v_FillOutside( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short_1 = short_1 * short_2;
	char_3 = char_1 + char_2;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	short_3 = short_4;
	v_qprintf(char_4,char_4);

	char_5 = char_5 * char_5;
	v_FillOutside_r(char_5);

}
long v_Portal_EntityFlood( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
	}
	return long_1;
	v_Error(char_1,int_1);

}
void v_FloodPortals_r( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double_1 = double_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		}
		long_1 = v_Portal_EntityFlood(float_1,int_2);

		double_2 = double_1 + double_2;
	}
}
void v_PlaceOccupant( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	double_3 = double_1 * double_2;
	double_2 = double_3 * double_4;
	if(1)
	{
	}
	double_5 = double_3 + double_3;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		double double_7 = 1;
		char char_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_1 = double_1 * double_6;
		double_1 = double_4 + double_7;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			long long_4 = 1;
			char char_3 = 1;
			long_4 = long_2 * long_3;
			long_1 = long_2 * long_2;
			if(1)
			{
				char_3 = char_2 + char_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			}
			if(1)
			{
				char_3 = char_1 + char_1;
			}
		}
		unsigned_int_1 = unsigned_int_1;
		char_2 = char_4 + char_5;
		short_2 = short_1 + short_2;
		double_4 = double_5 * double_6;
		int_2 = int_1 + int_4;
		int_6 = int_5 * int_3;
		v_FloodPortals_r(unsigned_int_3,int_6);

		int_2 = int_3;
		double_6 = double_5;
		unsigned_int_3 = unsigned_int_1;
		char_2 = char_4 + char_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
}
short v_VectorCompare( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return short_1;
}
unsigned int v_FloodEntities( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_2;
	v_ValueForKey(short_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_qprintf(char_2,char_3);

	short_2 = short_3;
	v_GetVectorForKey(short_2,char_2,long_1);

	int_3 = int_3 * int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_2 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		long_2 = long_1 * long_1;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2 * long_1;
		}
		double_1 = double_1 + double_2;
		int_3 = int_3 * int_1;
		if(1)
		{
			long long_4 = 1;
			int int_5 = 1;
			long_1 = long_1 * long_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					double double_3 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_5 = 1;
					double_2 = double_3 * double_1;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
					if(1)
					{
						short short_4 = 1;
						short_1 = v_VectorCompare(long_5,int_4);

						float_2 = float_1 * float_2;
						short_4 = short_3;
					}
					unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
					v_PlaceOccupant(unsigned_int_4,float_4,short_3);

					double_1 = double_4;
				}
			}
			int_5 = int_4 * int_3;
		}
		if(1)
		{
			if(1)
			{
				double_5 = double_4 + double_5;
			}
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 + double_5;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_2 * char_2;
	}
	return unsigned_int_2;
}
void v_RemovePortalFromNode( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 * float_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_2;
	}
	char_1 = char_1 + char_1;
	v_Error(char_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_SplitNodePortals( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_FreeWinding(long_1);

	char_1 = char_1 + char_3;
	v_RemovePortalFromNode(int_1,int_1);

	float_1 = float_2;
	v_Error(char_3,int_1);

	long_1 = long_1 * long_1;
	int_3 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		if(1)
		{
			char_4 = char_1 + char_4;
		}
		if(1)
		{
			int_3 = int_4 + int_5;
		}
		if(1)
		{
			double_3 = double_2 + double_3;
		}
		int_2 = int_5 + int_4;
		short_1 = short_1 * short_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_3 + double_1;
		short_2 = short_2 * short_2;
		if(1)
		{
			double_4 = double_5;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		}
		if(1)
		{
			short_2 = short_2;
			long_1 = long_1 * long_1;
			double_2 = double_5;
		}
		if(1)
		{
			double_2 = double_1 * double_5;
		}
		if(1)
		{
			long long_3 = 1;
			float_1 = v_WindingIsTiny(long_1);

			long_3 = long_1 + long_2;
			if(1)
			{
				double_5 = double_5 + double_2;
			}
			if(1)
			{
				double_4 = double_5 + double_2;
			}
			double_1 = double_4 + double_1;
		}
		if(1)
		{
			char char_5 = 1;
			int_1 = int_4 + int_4;
			if(1)
			{
				float float_3 = 1;
				float_2 = float_3 * float_2;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			}
			char_1 = char_1 + char_5;
		}
		v_ClipWindingEpsilon(short_1,double_2,char_2,int_1,double_3,char_1);

		unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
		float_4 = float_5;
		char_1 = char_4 + char_2;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
		v_AddPortalToNodes(short_3,long_4,double_4);

		double_6 = double_3;
		if(1)
		{
			char_2 = char_2 * char_4;
			int_2 = int_1;
		}
		char controller_14[3];
		fgets(controller_14 ,3 ,stdin);
		if( strcmp( controller_14, "3b") > 0)
		{
			long_2 = v_AllocPortal();

			unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
			double_5 = double_5 + double_6;
		}
	}
	short_4 = short_1 + short_2;
}
long v_BaseWindingForNode( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		v_ChopWindingInPlace(unsigned_int_2,float_1,int_4,double_2,-1 );

		double_3 = double_2 + double_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double_1 = double_4;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
			float_2 = float_2 * float_2;
		}
		double_1 = double_1 + double_4;
		unsigned_int_5 = v_BaseWindingForPlane(unsigned_int_1,short_1);

		int_2 = int_1 + int_3;
	}
	return long_1;
}
void v_MakeNodePortal( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	float float_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char_3 = char_1 * char_2;
	float_1 = float_1;
	long_1 = long_1;
	v_Error(char_4,int_1);

	int_2 = int_3;
	int_2 = int_4 * int_2;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			v_AddPortalToNodes(short_1,long_3,double_1);

			double_1 = double_1 * double_1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			double_3 = double_2 + double_2;
			long_4 = v_BaseWindingForNode(int_1);

			float_2 = v_WindingIsTiny(long_5);

			int_2 = int_5 + int_6;
			char_2 = char_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		short_1 = short_1 + short_2;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		v_FreeWinding(long_5);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	}
	v_ChopWindingInPlace(unsigned_int_4,float_2,int_1,double_4,-1 );

	char_4 = char_4 * char_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_7 = unsigned_int_2;
	int_1 = int_7;
	long_5 = v_AllocPortal();

	unsigned_int_8 = unsigned_int_4 * unsigned_int_1;
}
void v_CalcNodeBounds( double parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char_1 = char_1;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		v_AddPointToBounds(float_1,unsigned_int_1,double_1);

		int_3 = int_3 * int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long_2 = long_1 + long_1;
		}
	}
	v_ClearBounds(long_2,int_4);

}
void v_MakeTreePortals_r( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_MakeNodePortal(double_1);

	v_SplitNodePortals(long_1);

	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			v_CalcNodeBounds(double_2);

			int_1 = int_1 * int_1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "tX") == 0)
	{
	}
	long_1 = long_1;
	double_4 = double_2 + double_3;
	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_AddPortalToNodes( short parameter_1,long parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	float_2 = float_1 + float_1;
	char_2 = char_1 * char_1;
	v_Error(char_3,int_1);

	double_1 = double_2;
	int_2 = int_1 * int_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
long v_AllocPortal()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	return long_2;
}
void v_MakeHeadnodePortals( char parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	v_AddPortalToNodes(short_1,long_1,double_1);

	v_ChopWindingInPlace(unsigned_int_1,float_1,int_1,double_2,-1 );

	unsigned_int_2 = unsigned_int_2;
	long_1 = v_AllocPortal();

	unsigned_int_2 = v_BaseWindingForPlane(unsigned_int_1,short_2);

}
void v_MakeTreePortals( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	v_MakeTreePortals_r(int_1);

	char_1 = char_1 * char_1;
	v_MakeHeadnodePortals(char_1);

}
unsigned int v_BlockTree( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
			double_1 = double_1 + double_1;
			char_1 = char_1 + char_1;
		}
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_3 = int_2 + int_3;
		long_2 = long_1 * long_2;
		double_1 = double_2;
		double_3 = double_4 * double_1;
		int_4 = v_FindFloatPlane(long_3,char_1);

		char_2 = char_1 + char_3;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		double_6 = double_5 * double_6;
		int_4 = int_1 * int_2;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		float float_1 = 1;
		char_4 = char_3 + char_4;
		int_4 = v_AllocNode();

		char_5 = char_4 + char_1;
		char_4 = char_1 * char_1;
		int_5 = int_4 + int_5;
		char_2 = char_1 * char_4;
		int_3 = int_1;
		float_1 = float_1 * float_1;
		int_4 = int_2 * int_2;
	}
	return unsigned_int_4;
}
float v_PointInLeaf( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_2;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_3;
	double_5 = double_2 * double_4;
	double_4 = double_3 * double_2;
	int_3 = int_2 + int_2;
	return float_2;
}
void v_SplitBrushList( char parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_2;
	long_2 = long_1 + long_2;
	short_2 = short_1 + short_2;
	int_2 = int_2 + int_1;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_1 = double_1 + double_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				int int_3 = 1;
				char_2 = char_1 + char_1;
				int_4 = int_2 + int_3;
			}
			unsigned_int_3 = unsigned_int_4;
		}
		short_1 = short_3 * short_2;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_4 = v_CopyBrush(int_4);

				long_3 = long_3 * long_2;
				if(1)
				{
					long long_4 = 1;
					long_1 = long_4 + long_4;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			double_1 = double_2 + double_2;
			unsigned_int_3 = unsigned_int_1;
			v_SplitBrush(double_1,int_2,int_4,long_3,-1 );

			float_3 = float_2 * float_1;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			double_4 = double_1 * double_3;
			short_4 = short_5;
			double_1 = double_2 + double_3;
		}
	}
}
void v_LeafNode( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_2;
	int_2 = int_3 + int_4;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int int_5 = 1;
					int_3 = int_5 * int_3;
				}
			}
			if(1)
			{
				char char_1 = 1;
				double double_2 = 1;
				char_1 = char_1 * char_1;
				double_2 = double_2 * double_2;
			}
		}
		double_4 = double_3 * double_3;
	}
	long_3 = long_1 * long_2;
}
int v_BoxOnPlaneSide( short parameter_1,long parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_2;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_2;
	float_1 = float_2;
	if(1)
	{
		short_2 = short_1 * short_1;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			double_1 = double_3 + double_2;
			int_1 = int_4 + int_5;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "if") < 0)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_5 = double_4 * double_5;
			double_1 = double_5;
		}
	}
	short_3 = short_3 + short_4;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	return int_1;
}
int v_TestBrushToPlanenum( float parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_2;
	int_1 = int_1;
	long_2 = long_1 * long_2;
	double_1 = double_3 * double_2;
	float_1 = float_1;
	double_1 = double_1 * double_2;
	int_2 = v_BoxOnPlaneSide(short_1,long_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_5 = double_1 + double_4;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_5 * double_2;
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	short_2 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	short_3 = short_1 * short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
			char_4 = char_3 * char_3;
		}
		float_1 = float_2 * float_2;
		if(1)
		{
			double_3 = double_2;
		}
		short_1 = short_1 * short_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_5 = 1;
			char_5 = char_2;
			if(1)
			{
				long_1 = long_1;
			}
			if(1)
			{
				long_2 = long_1 * long_1;
			}
			if(1)
			{
				int int_3 = 1;
				int_1 = int_3 * int_4;
			}
			if(1)
			{
				char_1 = char_2 + char_3;
			}
		}
		if(1)
		{
			if(1)
			{
				char_3 = char_4 + char_2;
				if(1)
				{
					char_2 = char_1;
				}
			}
		}
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_1 = double_5 * double_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
			}
			if(1)
			{
				double double_7 = 1;
				double_7 = double_7;
			}
		}
	}
	return int_4;
	v_Error(char_1,int_4);

}
long v_CheckPlaneAgainstVolume( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_FreeBrush(short_1);

	short_1 = short_1 + short_1;
	long_3 = long_1 + long_2;
	v_SplitBrush(double_1,int_1,int_1,long_4,-1 );

	long_2 = long_1 * long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	return long_1;
}
void v_CheckPlaneAgainstParents( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	v_Error(char_1,int_1);

}
int v_SelectSplitSide( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	double double_7 = 1;
	int int_9 = 1;
	float_2 = float_1 * float_1;
	long_1 = v_CheckPlaneAgainstVolume(int_1,char_1);

	v_Error(char_1,int_2);

	double_1 = double_2;
	short_1 = short_1;
	int_1 = int_1 + int_1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	float_3 = float_2 + float_2;
	double_2 = double_2 * double_2;
	v_CheckPlaneAgainstParents(int_3,unsigned_int_1);

	int_3 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_2 + short_1;
	int_1 = int_4;
	int_2 = int_5 + int_5;
	double_2 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_8 = 1;
		unsigned int unsigned_int_7 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long long_2 = 1;
				long_1 = long_2 * long_1;
			}
			if(1)
			{
				int_1 = int_3 + int_1;
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_5 = 1;
				int int_6 = 1;
				long long_3 = 1;
				long long_4 = 1;
				char char_3 = 1;
				double double_4 = 1;
				double double_6 = 1;
				float float_5 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_3 = 1;
				float_4 = float_1 * float_1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_5;
				}
				if(1)
				{
					int_3 = int_6 + int_3;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_1;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
				}
				if(1)
				{
					short_1 = short_2 + short_2;
				}
				double_2 = double_3 + double_1;
				long_4 = long_3 * long_4;
				char_3 = char_3;
				if(1)
				{
					double_6 = double_4 * double_5;
				}
				unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
				int_1 = int_6 * int_3;
				int_5 = int_2 * int_7;
				int_7 = int_6 * int_1;
				unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
				int_5 = int_8;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
					float_5 = float_5 * float_2;
					if(1)
					{
						int_7 = v_TestBrushToPlanenum(float_4,int_3,int_1,double_7,int_7);

						unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
					}
					double_6 = double_3;
					if(1)
					{
						int_5 = int_6 + int_6;
						for(int looper_5=0; looper_5<1;looper_5++)
						{
							if(1)
							{
								int_1 = int_7 + int_7;
							}
						}
					}
					if(1)
					{
						int_3 = int_6 * int_5;
					}
					if(1)
					{
						int_4 = int_6;
					}
					if(1)
					{
						long long_5 = 1;
						long_1 = long_5 + long_3;
					}
				}
				short_2 = short_1 * short_3;
				if(1)
				{
					int_9 = int_2 + int_1;
				}
				int_6 = int_7 * int_1;
				if(1)
				{
					float float_6 = 1;
					float float_7 = 1;
					float_7 = float_6 + float_7;
				}
				if(1)
				{
					float_1 = float_1 + float_5;
					double_7 = double_7 * double_7;
					double_5 = double_4;
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
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
					int_9 = int_8;
				}
			}
			if(1)
			{
				short short_4 = 1;
				short_4 = short_4;
			}
			unsigned_int_1 = unsigned_int_7 * unsigned_int_1;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			double double_8 = 1;
			double_8 = double_3 * double_5;
		}
	}
	return int_9;
}
void v_GLS_EndScene()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_1;
	long_3 = long_2 + long_2;
}
void v_GLS_Winding( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 + short_2;
		}
	}
	float_2 = float_1 * float_2;
}
void v_GLS_BeginScene()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_1 * double_2;
		long_1 = long_1 * long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		long_2 = long_3;
	}
	double_3 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	double_4 = double_2 + double_3;
	short_1 = short_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
		long_1 = long_3 * long_2;
	}
}
void v_DrawBrushList( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_2 = 1;
			int int_1 = 1;
			int int_3 = 1;
			long_2 = long_1 + long_1;
			if(1)
			{
				int_1 = int_2;
			}
			if(1)
			{
				int_2 = int_1 * int_3;
			}
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "F") > 0)
			{
				long long_3 = 1;
				long_3 = long_3;
			}
			if(1)
			{
				int int_4 = 1;
				v_GLS_BeginScene();

				v_GLS_Winding(unsigned_int_3,int_2);

				int_3 = int_3 * int_4;
			}
		}
	}
	v_GLS_EndScene();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
}
int v_BuildTree_r( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = char_1 + char_1;
	v_SplitBrush(double_1,int_1,int_1,long_1,-1 );

	char_2 = char_1 + char_1;
	int_1 = int_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		int_3 = v_SelectSplitSide(int_4,float_1);

		char_3 = char_1;
	}
	if(1)
	{
		v_LeafNode(double_1,char_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		v_SplitBrushList(char_4,long_1,unsigned_int_3,short_1);

		int_1 = int_1 + int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_5;
	}
	char_4 = char_5 + char_5;
	int_4 = int_2 * int_5;
	double_1 = double_1 * double_1;
	float_3 = float_2 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_6 = 1;
		long long_3 = 1;
		double_1 = double_2 * double_3;
		int_5 = v_AllocNode();

		int_1 = int_1 * int_6;
		long_3 = long_2 + long_2;
	}
	v_DrawBrushList(char_4,float_1);

	char_3 = char_1 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	}
	return int_1;
	v_FreeBrushList(char_5);

}
void v_CreateBrushWindings( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_ChopWindingInPlace(unsigned_int_3,float_1,int_1,double_1,-1 );

	int_3 = int_1 * int_2;
	int_2 = int_4 + int_1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int int_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_7 = 1;
		int_6 = int_1 * int_5;
		long_2 = long_1 + long_2;
		int_6 = int_7 * int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_8 = 1;
			if(1)
			{
				int_3 = int_4 + int_8;
			}
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "@") < 0)
			{
				unsigned_int_1 = v_BaseWindingForPlane(unsigned_int_1,short_1);

				int_4 = int_8 + int_3;
			}
			int_8 = int_4 * int_5;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_2;
	}
	char_1 = char_1;
	v_BoundBrush();

}
char v_BrushFromBounds( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	short_2 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_1 * double_2;
	v_CreateBrushWindings(char_1);

	double_3 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		short short_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		double_2 = double_2 * double_4;
		char_2 = v_AllocBrush(int_1);

		short_3 = short_2 * short_2;
		float_1 = float_1 * float_1;
		int_2 = int_2 * int_2;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		char_3 = char_4;
		float_1 = float_1;
	}
	int_2 = v_FindFloatPlane(long_1,char_4);

	int_2 = int_1 + int_1;
	return char_5;
}
float v_AllocTree()
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	v_ClearBounds(long_1,int_1);

	double_1 = double_1 + double_2;
	int_2 = int_1 + int_2;
	int_3 = int_2 + int_1;
	short_1 = short_1 + short_2;
	return float_1;
}
void v_BrushBSP( int parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	float float_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_8 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_2;
	short_1 = short_1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_1 + int_2;
	int_3 = int_3 + int_4;
	int_5 = int_6;
	int_2 = int_5 + int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	float_5 = float_3 * float_4;
	int_6 = v_AllocNode();

	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		short_2 = short_1 + short_1;
		double_1 = double_3 + double_3;
		if(1)
		{
			double_1 = double_3 * double_4;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double_1 = double_3 + double_4;
			}
			if(1)
			{
				long_1 = long_1 * long_1;
			}
			if(1)
			{
				int_3 = v_BuildTree_r(long_2,float_6);

				int_4 = int_3 + int_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				long_1 = long_2 + long_1;
			}
		}
		v_qprintf(char_1,char_2);

		long_1 = long_3 + long_2;
		char_3 = v_BrushFromBounds(char_3,float_1);

		long_2 = long_2;
	}
	double_2 = double_1 * double_2;
	char_2 = char_2 + char_1;
	long_2 = long_1 * long_1;
	float_3 = v_AllocTree();

	char_4 = char_2 + char_3;
	short_1 = short_1 + short_1;
	int_4 = int_7;
	float_7 = v_PointInLeaf(unsigned_int_2,unsigned_int_2);

	double_1 = double_4 + double_3;
	int_2 = int_6 * int_4;
	double_2 = double_2;
	int_1 = int_2 * int_1;
	long_1 = long_4;
	double_4 = double_3 * double_1;
	if(1)
	{
		short short_3 = 1;
		int_6 = int_7;
		float_6 = float_1 + float_3;
		int_7 = int_1 * int_6;
		double_3 = double_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_2 * short_3;
		v_AddPointToBounds(float_8,unsigned_int_4,double_5);

		int_5 = int_5 * int_3;
		char_1 = char_2 + char_3;
	}
	short_4 = v_BrushVolume(short_4);

}
void v_WriteBrushMap( char parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	v_Error(char_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	char_3 = char_1 + char_2;
	int_2 = int_2;
	int_1 = int_2 * int_2;
	int_1 = int_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 * char_4;
	}
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long_1 = long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			long long_3 = 1;
			v_FreeWinding(long_2);

			float_1 = float_1 + float_2;
			int_1 = int_1 + int_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			int_1 = int_3 * int_4;
			unsigned_int_3 = v_BaseWindingForPlane(unsigned_int_2,short_2);

			float_3 = float_2 + float_1;
			long_3 = long_3;
		}
		int_4 = int_5;
	}
	float_2 = float_2 * float_1;
	float_3 = float_2 + float_4;
}
int v_AddBrushListToTail( double parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 + short_2;
		char_3 = char_2 + char_2;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
}
long v_CullList( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_2;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		double double_1 = 1;
		v_FreeBrush(short_1);

		short_2 = short_1 * short_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "Z") > 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		long_1 = long_1 + long_1;
		double_1 = double_1 + double_1;
	}
	return long_1;
}
void v_FreeBrushList( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	v_FreeBrush(short_3);

}
void v_SplitBrush2( unsigned int parameter_1,int parameter_2,float parameter_3,long parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	char controller4vul_274[2];
	fgets(controller4vul_274 ,2 ,stdin);
	if( strcmp( controller4vul_274, "q") > 0)
	{
		char controller4vul_275[3];
		fgets(controller4vul_275 ,3 ,stdin);
		if( strcmp( controller4vul_275, "5&") > 0)
		{
			long long_2 = 1;
			v_SplitBrush(double_1,int_1,int_1,long_1,uni_para);

			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		int_1 = int_1;
	}
}
char v_SubtractBrush( double parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_2;
	float_2 = float_1 + float_2;
	int_4 = int_3 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_273[2];
		fgets(controller4vul_273 ,2 ,stdin);
		if( strcmp( controller4vul_273, "=") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			v_SplitBrush2(unsigned_int_1,int_2,float_1,long_3,uni_para);

			double_3 = double_1 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_2 * int_4;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		int_1 = int_2 * int_5;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	return char_1;
}
void v_BrushGE( char parameter_1,long parameter_2)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
long v_BrushesDisjoint( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
			}
		}
	}
	return long_1;
}
void v_OutputWinding( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_1;
	char_1 = char_1 * char_2;
	int_3 = int_1 + int_2;
	double_1 = double_2 * double_1;
	char_3 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 * double_2;
	}
	double_4 = double_3 * double_1;
}
void v_WriteBrushList( char parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_3 = int_1 * int_2;
	v_qprintf(char_1,char_2);

	double_2 = double_1 * double_1;
	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_3 = int_3 + int_4;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_1 = v_SafeOpenWrite(char_2);

				unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			}
			if(1)
			{
				int_1 = int_4 + int_1;
			}
			v_OutputWinding(float_1,int_5);

			unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
		}
	}
	int_5 = int_1 + int_6;
}
int v_CountBrushList( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return int_4;
}
short v_ChopBrushes( double parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	char_3 = char_3 + char_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	char controller4vul_271[2];
	fgets(controller4vul_271 ,2 ,stdin);
	if( strcmp( controller4vul_271, "q") < 0)
	{
		char controller4vul_272[3];
		fgets(controller4vul_272 ,3 ,stdin);
		if( strcmp( controller4vul_272, "aP") > 0)
		{
			char_4 = v_SubtractBrush(double_2,double_3,uni_para);

			float_1 = float_1 * float_1;
		}
	}
	double_3 = double_2 + double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_2 + double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 + int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_1 = 1;
			long long_2 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_5 = 1;
			float float_3 = 1;
			float float_4 = 1;
			if(1)
			{
				short_2 = short_1 + short_1;
			}
			long_3 = long_1 + long_2;
			float_1 = float_1 * float_2;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
			int_1 = int_2 * int_2;
			if(1)
			{
				char_5 = char_2;
				if(1)
				{
					float_2 = float_1 + float_3;
				}
				if(1)
				{
					int_1 = int_2 * int_2;
					char_2 = char_2 * char_5;
				}
				float_4 = float_4;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
				if(1)
				{
					int_3 = int_1 + int_2;
				}
				if(1)
				{
					long long_4 = 1;
					char_1 = char_5 + char_4;
					long_4 = long_4 + long_4;
					int_2 = int_2 + int_3;
				}
				short_1 = short_2 * short_2;
			}
			if(1)
			{
				char_4 = char_2 + char_2;
			}
			if(1)
			{
				if(1)
				{
					float float_5 = 1;
					float_5 = float_5 * float_3;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_3;
				}
				float_4 = float_4 * float_4;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				if(1)
				{
					short short_3 = 1;
					short_3 = short_3 * short_3;
				}
				long_1 = long_3 * long_5;
				unsigned_int_7 = unsigned_int_1;
				short_4 = short_2 * short_2;
			}
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				char char_6 = 1;
				if(1)
				{
					float float_6 = 1;
					float float_7 = 1;
					float float_8 = 1;
					float_8 = float_6 + float_7;
				}
				unsigned_int_2 = unsigned_int_8;
				char_6 = char_1 + char_4;
				float_3 = float_1;
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			int_1 = int_3 + int_3;
		}
	}
	double_4 = double_2 * double_4;
	if(1)
	{
		long_5 = long_3;
		short_1 = short_4 + short_1;
	}
	return short_5;
}
int v_AllocNode()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_2;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_2;
}
short v_BrushVolume( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	int_2 = int_3 * int_3;
	int_3 = int_3 * int_4;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int_1 = int_1 * int_3;
		}
	}
	if(1)
	{
	}
	int_4 = int_2 * int_5;
	double_1 = double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_2 = char_3 + char_2;
		if(1)
		{
			short_2 = short_2 + short_1;
		}
		char_1 = char_1 * char_1;
		short_3 = short_3 * short_2;
		long_2 = long_1 * long_2;
		long_3 = v_WindingArea(float_1);

		float_1 = float_1 * float_1;
	}
	char_4 = char_2 * char_3;
	return short_4;
}
void v_FreeBrush( short parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	v_FreeWinding(long_1);

	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_1 + double_1;
		}
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 + double_3;
	}
}
void v_BoundBrush()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_1;
	v_AddPointToBounds(float_1,unsigned_int_1,double_1);

	double_1 = double_2 + double_2;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_1;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			v_ClearBounds(long_1,int_1);

			int_1 = int_2;
		}
	}
}
void v_ClipWindingEpsilon( short parameter_1,double parameter_2,char parameter_3,int parameter_4,double parameter_5,char parameter_6)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_8 = 1;
	short short_5 = 1;
	int_1 = int_1;
	long_3 = long_1 * long_2;
	short_1 = short_1 * short_1;
	int_1 = int_2 + int_1;
	v_Error(char_1,int_3);

	double_2 = double_1 + double_2;
	long_1 = long_1;
	int_4 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_4 * long_1;
	short_1 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		long long_7 = 1;
		float_2 = float_1 + float_2;
		double_2 = double_3 + double_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			double_1 = double_4 + double_2;
		}
		if(1)
		{
			long_6 = long_2 * long_5;
		}
		if(1)
		{
			double_1 = double_5;
		}
		long_7 = long_1 + long_5;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_1 * int_5;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1;
	}
	long_1 = v_CopyWinding(unsigned_int_1);

	char_1 = v_AllocWinding(int_5,-1 );

	short_1 = short_1;
	short_2 = short_2 + short_3;
	long_1 = long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_6 = 1;
		int int_7 = 1;
		char char_3 = 1;
		unsigned_int_5 = unsigned_int_2;
		if(1)
		{
			char char_2 = 1;
			long_4 = long_1 * long_3;
			double_1 = double_5 * double_1;
			int_2 = int_4 * int_5;
			double_4 = double_1 + double_5;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			long_8 = long_6;
		}
		if(1)
		{
			int_6 = int_3 + int_1;
			int_2 = int_1 + int_6;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		int_5 = int_7 + int_7;
		int_2 = int_1 + int_6;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short short_4 = 1;
			if(1)
			{
				double_5 = double_1 + double_5;
			}
			if(1)
			{
				short_3 = short_3 + short_4;
			}
			if(1)
			{
				short_4 = short_3 + short_3;
			}
		}
		double_5 = double_4 * double_1;
		short_5 = short_1 * short_2;
		char_1 = char_3 + char_1;
		int_4 = int_6;
	}
	if(1)
	{
		long_2 = long_1 + long_8;
	}
	if(1)
	{
		short_5 = short_2 * short_1;
	}
}
void v_WindingIsHuge( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
			}
		}
	}
}
int v_BrushMostlyOnSide( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	char_1 = char_1 * char_2;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_1 = double_4 * double_4;
		if(1)
		{
			double double_5 = 1;
			double_3 = double_4 + double_5;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				int int_3 = 1;
				int_3 = int_1;
				int_1 = int_2 + int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				float float_1 = 1;
				unsigned_int_1 = unsigned_int_3;
				float_1 = float_1 + float_1;
			}
		}
	}
	return int_2;
}
long v_WindingArea( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1 + short_1;
	double_1 = v_VectorLength(char_1);

	long_1 = long_1 * long_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_2 * int_1;
		char_2 = char_2 * char_1;
		char_3 = char_3;
	}
	return long_1;
	v_CrossProduct(short_2,short_3,char_1);

}
float v_WindingIsTiny( long parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short_1 = short_1;
	long_1 = v_WindingArea(float_1);

	double_1 = v_VectorLength(char_1);

	char_2 = char_1 + char_2;
	return float_2;
}
int v_CopyBrush( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_1;
	char_1 = v_AllocBrush(int_1);

	long_1 = v_CopyWinding(unsigned_int_1);

	int_1 = int_1 + int_1;
	float_3 = float_2 * float_2;
	double_1 = double_1 * double_2;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "<:") > 0)
		{
			unsigned_int_2 = unsigned_int_2;
		}
	}
	return int_2;
}
void v_SplitBrush( double parameter_1,int parameter_2,int parameter_3,long parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float float_5 = 1;
	int int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	long long_6 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_2 + double_2;
	float_3 = float_2 * float_3;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_2 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_3 = long_1 + long_2;
			if(1)
			{
				char_1 = char_1 + char_1;
			}
			if(1)
			{
				double_4 = double_4 + double_3;
			}
		}
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		short_3 = short_2;
	}
	int_2 = int_1 * int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		short_3 = short_3 + short_2;
	}
	char controller4vul_276[2];
	fgets(controller4vul_276 ,2 ,stdin);
	if( strcmp( controller4vul_276, "{") > 0)
	{
		int_3 = int_3 + int_2;
		short_3 = short_4;
		char controller4vul_277[3];
		fgets(controller4vul_277 ,3 ,stdin);
		if( strcmp( controller4vul_277, "9P") < 0)
		{
			v_ChopWindingInPlace(unsigned_int_3,float_4,int_4,double_5,uni_para);

			char_3 = char_3 * char_1;
		}
		if(1)
		{
			float_4 = float_2 + float_5;
		}
	}
	if(1)
	{
		int_3 = int_5 + int_5;
	}
	long_4 = long_2 + long_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char_1 = char_2 * char_1;
		char_3 = char_2 + char_1;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_6 = 1;
		long_4 = long_4 + long_2;
		int_4 = int_6;
		if(1)
		{
			long_1 = long_5 + long_4;
		}
		short_3 = short_5 * short_1;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			char char_4 = 1;
			if(1)
			{
				char_1 = char_4 + char_2;
			}
			if(1)
			{
				if(1)
				{
					double_4 = double_2 * double_4;
					float_5 = float_5 + float_1;
				}
				int_5 = int_5 * int_4;
			}
			char_2 = char_4 + char_3;
			int_5 = int_6 * int_5;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
			int_6 = int_4 * int_6;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double_2 = double_3;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			if(1)
			{
				int_5 = int_4 + int_5;
				short_6 = short_3 + short_6;
			}
		}
		if(1)
		{
			double_1 = double_1 + double_5;
			int_1 = int_4 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_7 = 1;
			int_2 = int_3 * int_7;
		}
		if(1)
		{
			double_1 = double_3 + double_2;
		}
		if(1)
		{
			double double_6 = 1;
			double double_7 = 1;
			double_7 = double_5 * double_6;
			int_3 = int_5 * int_4;
		}
		if(1)
		{
			short_5 = short_2;
			short_2 = short_2 * short_4;
		}
	}
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_7 = 1;
		short short_8 = 1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_2;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_5;
		short_5 = short_7 * short_8;
		long_6 = long_1 + long_2;
		short_5 = short_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
		}
		if(1)
		{
			short_6 = short_4;
		}
	}
	int_5 = int_3;
	int_1 = int_4 * int_4;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		long_5 = long_6 + long_4;
		if(1)
		{
			int_5 = int_2 + int_5;
			char_2 = char_2;
		}
	}
	long_6 = long_2 * long_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
}
short v_ClipBrushToBox( float parameter_1,long parameter_2,float parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			int_3 = int_1 + int_2;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 * long_2;
			}
			unsigned_int_1 = unsigned_int_3;
			if(1)
			{
			}
		}
		if(1)
		{
			float float_1 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
				int_3 = int_2 * int_3;
			}
			v_SplitBrush(double_1,int_2,int_1,long_4,-1 );

			float_1 = float_1 + float_1;
			if(1)
			{
			}
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_5 = 1;
		long long_6 = 1;
		v_FreeBrush(short_1);

		long_1 = long_5 * long_6;
		if(1)
		{
			long long_7 = 1;
			long_4 = long_5 + long_7;
			int_3 = int_2 + int_2;
		}
	}
	return short_1;
}
long v_CopyWinding( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_3 + double_2;
	double_1 = double_2 * double_2;
	float_2 = float_1 + float_2;
	return long_1;
}
char v_AllocBrush( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_1;
	float_2 = float_2;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_2;
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	return char_1;
}
float v_MakeBspBrushList( int parameter_1,int parameter_2,double parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_9 = 1;
	double_2 = double_1 + double_1;
	float_3 = float_1 + float_2;
	float_1 = float_1;
	double_4 = double_3 + double_2;
	int_1 = int_1 * int_2;
	int_3 = int_4;
	char_2 = char_1 * char_1;
	double_2 = double_3;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = long_1 + long_1;
		int_5 = int_3;
		double_5 = double_1 * double_5;
		unsigned_int_1 = unsigned_int_1;
		int_2 = int_3 + int_5;
	}
	int_8 = int_6 * int_7;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_8 = int_7 + int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		float float_5 = 1;
		int int_10 = 1;
		int int_11 = 1;
		float float_6 = 1;
		double double_6 = 1;
		double_3 = double_5;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			long_2 = v_CopyWinding(unsigned_int_3);

			double_1 = double_3 * double_1;
		}
		short_3 = v_ClipBrushToBox(float_2,long_3,float_4);

		int_4 = int_6 * int_5;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int_7 = int_6 + int_7;
			}
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "!o") > 0)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				double_1 = double_4 * double_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		}
		unsigned_int_8 = unsigned_int_9;
		int_8 = v_FindFloatPlane(long_3,char_2);

		unsigned_int_10 = unsigned_int_8 * unsigned_int_7;
		float_5 = float_4 + float_2;
		long_2 = long_2 * long_2;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			if(1)
			{
				long_1 = long_2 * long_3;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_9 + unsigned_int_1;
			}
		}
		long_1 = long_3 + long_3;
		char_2 = v_AllocBrush(int_9);

		int_3 = int_2 + int_10;
		int_11 = int_8 * int_8;
		if(1)
		{
			int_5 = int_7;
		}
		float_1 = float_6 * float_6;
		double_3 = double_4;
		int_2 = int_7 * int_2;
		double_6 = double_2 + double_4;
	}
	return float_3;
}
void v_ProcessBlock_Thread( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_3 * double_1;
	int_2 = int_1 + int_1;
	short_3 = short_1 + short_2;
	double_4 = double_3 * double_4;
	double_2 = double_1 * double_4;
	int_1 = int_1;
	double_2 = double_2 + double_1;
	double_5 = double_2 + double_1;
	char_1 = char_1 + char_1;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_1;
	char_1 = char_2 + char_2;
	int_4 = int_3 + int_1;
	float_2 = float_2;
	char controller4vul_270[3];
	fgets(controller4vul_270 ,3 ,stdin);
	if( strcmp( controller4vul_270, "]2") < 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		short_2 = v_ChopBrushes(double_2,uni_para);

		float_2 = float_3 + float_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_4 * float_1;
		double_2 = double_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_4;
}
void v_ThreadUnlock()
{
}
void v_ThreadLock()
{
}
int v_GetThreadWork()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	v_ThreadLock();

	double_1 = double_2;
	if(1)
	{
		double_3 = double_3 + double_3;
		if(1)
		{
			double_3 = double_1;
		}
	}
	double_2 = double_3 + double_1;
	int_4 = int_1 * int_3;
	double_1 = double_4 * double_5;
	return int_5;
	v_ThreadUnlock();

}
void v_ThreadWorkerFunction( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_1 * short_1;
	int_4 = v_GetThreadWork();

}
void v_RunThreadsOn( int parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = v_I_FloatTime();

	double_2 = double_2 + double_3;
	int_2 = int_1 * int_2;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	short_4 = short_1 + short_3;
	float_2 = float_3 + float_3;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 * float_3;
	}
	char_1 = char_2;
	double_2 = double_2;
	if(1)
	{
		double_3 = double_2;
	}
}
void v_RunThreadsOnIndividual( int parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		v_ThreadWorkerFunction(int_1);

		int_1 = int_1;
	}
	double_1 = double_2;
	v_RunThreadsOn(int_2,long_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_ThreadSetDefault();

}
void v_ProcessWorldModel(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	short_4 = short_1 * short_3;
	long_1 = long_1 + long_1;
	long_1 = long_1;
	double_1 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	if(1)
	{
		double_2 = double_2 + double_4;
	}
	if(1)
	{
		short short_5 = 1;
		short_1 = short_2 * short_5;
	}
	if(1)
	{
		short_4 = short_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_3;
	}
	if(1)
	{
		double_4 = double_4 + double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		int int_5 = 1;
		float float_3 = 1;
		char char_1 = 1;
		short short_6 = 1;
		double double_5 = 1;
		int_2 = int_2 + int_3;
		float_1 = float_1 * float_1;
		int_5 = int_3 * int_4;
		float_3 = float_1 + float_2;
		long_2 = long_2 + long_1;
		char_2 = char_1 + char_2;
		double_1 = double_3 * double_4;
		short_2 = short_4 * short_4;
		char_1 = char_3 * char_2;
		short_4 = short_4 * short_6;
		int_1 = int_5;
		double_3 = double_2 + double_3;
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		char controller4vul_268[3];
		fgets(controller4vul_268 ,3 ,stdin);
		if( strcmp( controller4vul_268, "uW") < 0)
		{
			double_6 = double_5 + double_5;
			int_6 = int_2 * int_1;
			double_6 = double_6 * double_1;
			char controller4vul_269[3];
			fgets(controller4vul_269 ,3 ,stdin);
			if( strcmp( controller4vul_269, "UK") > 0)
			{
				v_ProcessBlock_Thread(int_7,uni_para);

				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
				float_4 = float_1 + float_4;
			}
		}
		char_2 = char_2 * char_2;
		if(1)
		{
			int_1 = int_3 + int_1;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "Q") == 0)
		{
			double_3 = double_5 * double_2;
		}
	}
	char_2 = char_3 + char_4;
	if(1)
	{
		int_4 = int_1 * int_6;
	}
	float_5 = float_2 * float_4;
	short_2 = short_3 + short_4;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 + long_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_8 = 1;
		int int_9 = 1;
		int_3 = int_8 + int_9;
	}
	double_1 = double_6 + double_2;
}
void v_BeginModel()
{
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
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	int_2 = int_3 * int_3;
	v_AddPointToBounds(float_4,unsigned_int_4,double_1);

	char_1 = char_1 * char_2;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	char_2 = char_3 * char_3;
	int_1 = int_2 + int_1;
	long_1 = long_1 + long_1;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_4 + int_1;
		if(1)
		{
			int_2 = int_4 + int_4;
		}
		unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
		v_Error(char_4,int_4);

		double_1 = double_2 + double_1;
	}
	v_ClearBounds(long_2,int_4);

	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
}
void v_BeginBSPFile()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	double_3 = double_1;
	double_4 = double_3 + double_2;
	double_3 = double_1 + double_5;
	long_2 = long_1 * long_1;
	long_3 = long_1 * long_1;
	double_6 = double_3 * double_5;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_5;
	int_1 = int_1 * int_1;
	int_2 = int_1 + int_1;
}
void v_ProcessModels(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		char controller4vul_267[3];
		fgets(controller4vul_267 ,3 ,stdin);
		if( strcmp( controller4vul_267, "wz") < 0)
		{
			float float_1 = 1;
			v_ProcessWorldModel(uni_para);

			float_1 = float_1;
		}
		short_3 = short_1 * short_2;
		int_2 = int_2;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		double_2 = double_1 * double_2;
		if(1)
		{
			double_2 = double_3;
		}
	}
	double_2 = double_4 * double_3;
}
void v_AddLump( int parameter_1,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	v_SafeWrite(long_1,int_1);

	double_1 = double_2;
	double_3 = double_2;
	int_1 = v_LittleLong(int_1);

	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
}
void v_SafeWrite( long parameter_1,int parameter_3)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "k+") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
unsigned int v_SafeOpenWrite( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	int_2 = int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	return unsigned_int_1;
}
void v_WriteBSPFile( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_2;
	int_1 = int_2 + int_1;
	int_2 = int_3 * int_2;
	long_1 = long_1 + long_1;
	float_1 = float_2;
	v_SafeWrite(long_2,int_4);

	long_2 = long_3 + long_4;
	int_4 = int_1 * int_5;
	unsigned_int_3 = v_SafeOpenWrite(char_1);

	long_2 = long_3;
	char_3 = char_2 + char_1;
	double_2 = double_1 * double_2;
	double_1 = double_2 * double_2;
	double_2 = double_2 * double_3;
	int_2 = v_LittleLong(int_5);

	int_3 = int_1 + int_4;
	v_AddLump(int_6,int_4);

	float_3 = float_1 * float_1;
	double_3 = double_2 + double_4;
	int_6 = int_1 * int_6;
	v_SwapBSPFile();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	int_1 = int_2 * int_3;
	char_5 = char_4 + char_5;
	int_3 = int_6 * int_6;
	long_3 = long_1 + long_1;
	char_6 = char_4;
	int_4 = int_5 + int_4;
	double_3 = double_3 * double_5;
	char_7 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
}
void v_StripTrailing( char parameter_1)
{
}
void v_UnparseEntities()
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_1;
	int_3 = int_3 + int_4;
	short_3 = short_1 * short_2;
	double_1 = double_1 + double_1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_5 = 1;
		char_3 = char_2 + char_2;
		if(1)
		{
			double_1 = double_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
			char_4 = char_1 * char_2;
			char_4 = char_5 * char_3;
			float_1 = float_1 + float_1;
			long_2 = long_1 * long_1;
			double_3 = double_2 + double_1;
			char_3 = char_2 * char_2;
		}
		short_1 = short_3;
		char_6 = char_5 + char_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "{(") > 0)
		{
			v_StripTrailing(char_2);

			char_6 = char_1 + char_5;
		}
	}
	char_1 = char_4 + char_7;
	v_Error(char_6,int_5);

}
void v_SetLightStyles()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	long_1 = long_3 * long_3;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int_1 = int_1 + int_1;
		double_2 = double_1;
		if(1)
		{
			v_SetKeyValue(double_3,char_1,char_2);

			int_1 = int_2;
		}
		float_2 = float_3;
		if(1)
		{
			long_2 = long_1 * long_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_3 = int_4;
			}
		}
		if(1)
		{
			if(1)
			{
				int_4 = v_Q_strncasecmp(char_2,char_2,int_5);

				int_3 = int_2;
			}
			v_Error(char_2,int_1);

			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			double_3 = double_3 * double_3;
		}
		short_1 = short_2;
		v_ValueForKey(short_3,char_1);

		double_5 = double_4 * double_1;
	}
}
void v_SetModelNumbers()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	v_SetKeyValue(double_3,char_1,char_1);

	long_4 = long_2 + long_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char_2 = char_3;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
	}
}
void v_MoveBrushesToWorld( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	long_3 = long_2 + long_3;
	long_3 = long_4 * long_5;
	char_2 = char_1 + char_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_2 = 1;
			double_1 = double_2 + double_2;
		}
	}
	double_4 = double_3 * double_4;
	int_1 = int_1 + int_2;
	long_3 = long_2 + long_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1;
}
void v_ValueForKey( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "H") < 0)
		{
		}
	}
}
void v_GetVectorForKey( short parameter_1,char parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_2;
	short_1 = short_2 + short_1;
	short_4 = short_2 + short_3;
	int_1 = int_3 * int_1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
char v_ParseEpair()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	short_1 = short_1 * short_2;
	long_3 = long_1 + long_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		short_1 = short_1;
	}
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	char_1 = char_2;
	short_3 = short_2 * short_2;
	char_2 = char_2 * char_2;
	return char_3;
}
void v_AddBrushBevels( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_7 = 1;
	short short_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_3 = 1;
	double_3 = double_1 + double_2;
	v_Error(char_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1 + short_2;
	char_2 = v_VectorNormalize(long_1,unsigned_int_1);

	unsigned_int_4 = unsigned_int_2;
	char_3 = char_3 * char_1;
	char_3 = char_4;
	double_1 = double_3 + double_3;
	int_2 = int_2 * int_3;
	int_3 = int_2 * int_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					short_3 = short_3 + short_3;
				}
			}
			if(1)
			{
				int int_5 = 1;
				if(1)
				{
					double_3 = double_3 + double_2;
				}
				double_1 = double_3 * double_3;
				long_1 = long_1 + long_1;
				long_1 = long_1 + long_1;
				double_4 = double_4;
				char controller_4[3];
				fgets(controller_4 ,3 ,stdin);
				if( strcmp( controller_4, "3#") > 0)
				{
					short_3 = short_4 * short_2;
				}
				if(1)
				{
					int_4 = v_FindFloatPlane(long_1,char_3);

					double_5 = double_4 * double_1;
				}
				short_4 = short_1 + short_1;
				unsigned_int_2 = unsigned_int_3;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
				int_1 = int_5;
				long_3 = long_1 * long_2;
			}
			if(1)
			{
				double double_6 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_6 = 1;
				double_6 = double_7;
				v_CrossProduct(short_5,short_3,char_5);

				unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
				v_SnapVector(char_4);

				float_2 = float_1 * float_1;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
				unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
				unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
				long_2 = long_3 + long_2;
			}
		}
	}
	if(1)
	{
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		char char_6 = 1;
		int int_7 = 1;
		unsigned_int_10 = unsigned_int_8 + unsigned_int_9;
		char_6 = char_1 * char_5;
		if(1)
		{
			int int_6 = 1;
			int_6 = int_7;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char char_7 = 1;
			char char_8 = 1;
			double_4 = double_8 + double_1;
			unsigned_int_10 = unsigned_int_4 + unsigned_int_1;
			if(1)
			{
				int int_8 = 1;
				int_8 = int_2 * int_3;
			}
			unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					char_7 = char_8;
				}
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_4;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					int int_9 = 1;
					int int_10 = 1;
					char char_9 = 1;
					float float_4 = 1;
					float float_5 = 1;
					char char_10 = 1;
					double_8 = v_PlaneEqual(double_8,double_9,float_3);

					double_2 = double_9 * double_3;
					int_10 = int_4 + int_9;
					double_2 = double_4 * double_4;
					if(1)
					{
						unsigned_int_8 = unsigned_int_9 + unsigned_int_9;
					}
					double_7 = double_4 + double_7;
					for(int looper_9=0; looper_9<1;looper_9++)
					{
						int int_11 = 1;
						if(1)
						{
							char_5 = char_3;
						}
						int_10 = int_11 + int_1;
						if(1)
						{
							unsigned_int_3 = unsigned_int_1 * unsigned_int_10;
						}
						for(int looper_10=0; looper_10<1;looper_10++)
						{
							unsigned_int_2 = unsigned_int_1 + unsigned_int_8;
							if(1)
							{
								int_11 = int_7 + int_4;
							}
						}
						if(1)
						{
							char_4 = char_5;
						}
					}
					if(1)
					{
						long long_4 = 1;
						long_4 = long_1 * long_4;
					}
					if(1)
					{
						char_3 = char_9 + char_8;
					}
					double_1 = double_2;
					double_8 = double_3;
					long_1 = long_2 * long_1;
					float_5 = float_4 + float_5;
					double_1 = double_4 * double_5;
					char_10 = char_9 * char_2;
					short_4 = short_1 + short_2;
					char_2 = char_6 + char_7;
				}
			}
		}
	}
}
void v_SetKeyValue( double parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_3 = 1;
			int_2 = int_1 + int_2;
			int_3 = int_2 * int_1;
		}
		float_1 = float_1 * float_1;
	}
	int_2 = int_4 * int_5;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_3 * long_2;
}
void v_AddPointToBounds( float parameter_1,unsigned int parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_2;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 + long_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
	}
}
void v_FreeWinding( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
}
void v_ChopWindingInPlace( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_2;
	int_5 = int_3 + int_5;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	float_2 = float_3 * float_1;
	long_1 = long_2;
	int_1 = int_1;
	int_5 = int_6;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
		short_4 = short_3 * short_3;
		char controller4vul_278[2];
		fgets(controller4vul_278 ,2 ,stdin);
		if( strcmp( controller4vul_278, "0") < 0)
		{
			char_1 = v_AllocWinding(int_5,uni_para);

			double_3 = double_1 * double_2;
		}
		if(1)
		{
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			long_2 = long_2 * long_3;
		}
		char_3 = char_3 + char_4;
	}
	double_3 = double_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
		int_1 = int_5 + int_2;
	}
	if(1)
	{
	}
	float_4 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		double double_5 = 1;
		float float_5 = 1;
		int int_7 = 1;
		int_1 = int_1 * int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			char_4 = char_1;
			double_5 = double_3 + double_4;
		}
		if(1)
		{
			long_4 = long_4 + long_3;
			double_2 = double_2 + double_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		char_3 = char_3 + char_2;
		float_5 = float_4 + float_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				long_1 = long_1 + long_4;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
			}
			if(1)
			{
				double double_6 = 1;
				double_6 = double_4 * double_1;
			}
		}
		int_2 = int_1 + int_7;
		double_4 = double_2 * double_5;
	}
	if(1)
	{
		int_6 = int_3 * int_4;
	}
	char controller_12[3];
	fgets(controller_12 ,3 ,stdin);
	if( strcmp( controller_12, "69") > 0)
	{
		long_2 = long_3 * long_3;
	}
	long_4 = long_3 + long_3;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
}
char v_AllocWinding( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char controller4vul_279[2];
	fgets(controller4vul_279 ,2 ,stdin);
	if( strcmp( controller4vul_279, "?") < 0)
	{
		short short_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		strcpy(vul_var, "CWE-761");
		short_1 = short_1 + short_1;
		long_1 = long_1;
		float_2 = float_1 + float_1;
		char controller4vul_280[2];
		fgets(controller4vul_280 ,2 ,stdin);
		if( strcmp( controller4vul_280, "Y") > 0)
		{
			short short_2 = 1;
			if(uni_para == 480)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			short_2 = short_1 + short_2;
		}
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	long_4 = long_2 + long_3;
}
void v_VectorMA( unsigned int parameter_1,double parameter_2,long parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_2;
	char_1 = char_2;
}
unsigned int v_BaseWindingForPlane( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_1;
	v_CrossProduct(short_1,short_2,char_1);

	char_2 = char_2 * char_1;
	double_1 = double_1 * double_1;
	int_4 = int_2 * int_3;
	double_1 = double_1 + double_2;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char_1 = char_3;
		if(1)
		{
			char_3 = char_2 + char_2;
			char_4 = v_VectorNormalize(long_1,unsigned_int_1);

			char_1 = char_3 * char_2;
		}
	}
	if(1)
	{
		v_Error(char_4,int_3);

		float_2 = float_1 + float_3;
	}
	int_3 = int_2 * int_3;
	long_2 = long_3;
	double_2 = double_3;
	int_4 = int_5 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_2 + short_2;
	v_VectorMA(unsigned_int_3,double_4,long_3,char_2);

	double_4 = double_2;
	char_4 = char_1 + char_2;
	int_5 = int_3;
	float_2 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	float_4 = float_1;
	short_2 = short_3 + short_4;
	short_1 = short_5;
	long_2 = long_2 + long_3;
	double_6 = double_5 + double_6;
	float_4 = float_4 * float_1;
	int_6 = int_4 * int_6;
	long_5 = long_1 * long_4;
	char_4 = v_AllocWinding(int_1,-1 );

	double_6 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	return unsigned_int_4;
}
void v_ClearBounds( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_3 = long_1 + long_2;
	short_3 = short_1 + short_2;
}
void v_MakeBrushWindings( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = v_BaseWindingForPlane(unsigned_int_1,short_1);

	double_2 = double_1 + double_2;
	double_5 = double_3 * double_4;
	v_ChopWindingInPlace(unsigned_int_1,float_1,int_1,double_5,-1 );

	unsigned_int_2 = unsigned_int_3;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_6 = 1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			}
			if(1)
			{
				double_4 = double_3;
			}
			double_5 = double_2;
			double_6 = double_6;
		}
		int_1 = int_2;
		char_4 = char_1 + char_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_2 = int_1 * int_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			float_1 = float_1 * float_2;
		}
		if(1)
		{
			v_ClearBounds(long_1,int_2);

			double_4 = double_4 + double_4;
		}
	}
	v_AddPointToBounds(float_2,unsigned_int_6,double_7);

}
int v_BrushContents( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	short_1 = short_2;
	float_4 = float_3 + float_4;
	short_3 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_3;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		float float_5 = 1;
		long_3 = long_4;
		float_4 = float_5 + float_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "M") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			long_2 = long_2 * long_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_1;
			char_1 = char_1 * char_2;
		}
	}
	return int_1;
}
void v_TextureAxisFromPlane( unsigned int parameter_1,float parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_5 = 1;
	short_2 = short_1 + short_2;
	long_2 = long_1 + long_1;
	long_2 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 + long_2;
		if(1)
		{
			long long_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long_4 = long_2 * long_3;
			double_3 = double_1 * double_2;
		}
	}
	float_3 = float_1 + float_2;
	long_5 = long_4 * long_2;
}
int v_TexinfoForBrushTexture( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	long long_3 = 1;
	int int_7 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short_1 = short_1 + short_1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 * int_2;
	int_4 = v_FindMiptex(char_1);

	long_2 = long_1 + long_2;
	double_2 = double_1 * double_1;
	float_3 = float_1 * float_2;
	int_4 = int_2;
	v_TextureAxisFromPlane(unsigned_int_3,float_3,float_2);

	double_2 = double_3 * double_4;
	if(1)
	{
	}
	short_4 = short_1 + short_1;
	short_3 = short_5 + short_3;
	double_5 = double_3;
	char_4 = char_2 + char_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		float_3 = float_3 * float_2;
	}
	if(1)
	{
		float_3 = float_1 * float_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		int_5 = v_TexinfoForBrushTexture(double_1,unsigned_int_3,int_6);

		double_2 = double_5 + double_2;
	}
	if(1)
	{
		double_6 = double_5;
		int_1 = int_3;
	}
	if(1)
	{
		long_3 = long_1 + long_2;
		double_1 = double_6;
	}
	if(1)
	{
		double_3 = double_5 + double_6;
		int_7 = int_7 + int_7;
	}
	if(1)
	{
		int_3 = int_3;
		double_1 = double_2 + double_1;
		float_4 = float_4 * float_2;
	}
	if(1)
	{
		int_4 = int_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		short_3 = short_5 + short_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_4 = double_3 * double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		long_4 = long_1 * long_4;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float float_5 = 1;
			float_6 = float_5 * float_6;
		}
	}
	int_3 = int_3 + int_1;
	unsigned_int_7 = unsigned_int_7;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	char_5 = char_4 * char_1;
	float_1 = float_4 * float_6;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_6 = 1;
		if(1)
		{
			char_1 = char_6 * char_6;
		}
		if(1)
		{
			double_2 = double_2 * double_3;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			if(1)
			{
				char char_7 = 1;
				char_6 = char_7 * char_5;
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					long_1 = long_1 * long_3;
				}
			}
		}
		int_2 = int_7 * int_7;
	}
	int_8 = int_6 + int_5;
	float_1 = float_6;
	int_4 = int_2 * int_1;
	if(1)
	{
		float float_7 = 1;
		short short_6 = 1;
		float_1 = float_7;
		int_3 = int_4 * int_2;
		short_6 = short_4 + short_2;
	}
	if(1)
	{
		int_5 = int_9 * int_3;
	}
	return int_9;
}
void v_AddPlaneToHash( short parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
	float_1 = float_1 + float_1;
	short_3 = short_3 + short_3;
	char_3 = char_1 + char_2;
}
int v_PlaneTypeForNormal( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	int_1 = int_1 + int_3;
	int_1 = int_3 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
double v_VectorLength( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char_3 = char_1 + char_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	int_4 = int_2;
	return double_1;
}
int v_CreateNewFloatPlane( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 * int_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	short_1 = short_2;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	double_1 = v_VectorLength(char_1);

	v_Error(char_1,int_1);

	double_2 = double_2 + double_3;
	float_1 = float_2;
	char_3 = char_2 + char_1;
	double_2 = double_4 + double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "`") < 0)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			v_AddPlaneToHash(short_3);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			long_2 = long_1 + long_1;
			int_2 = v_PlaneTypeForNormal(short_4);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			float_3 = float_3;
			double_1 = double_2 + double_1;
		}
	}
	double_5 = double_3 + double_1;
	double_6 = double_1;
	return int_5;
}
double v_PlaneEqual( double parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
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
	return double_1;
}
float v_Q_rint( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_SnapVector( char parameter_1)
{
	char char_1 = 1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_3 = 1;
		if(1)
		{
			long long_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long_1 = long_1 * long_1;
			short_3 = short_1 + short_2;
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_1;
			short_1 = short_3 + short_1;
		}
	}
}
void v_SnapPlane( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float_1 = v_Q_rint(float_2);

	int_1 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	v_SnapVector(char_3);

}
int v_FindFloatPlane( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long_3 = long_1 * long_2;
	double_1 = v_PlaneEqual(double_1,double_1,float_1);

	int_3 = int_1 + int_2;
	int_4 = int_2 + int_3;
	int_3 = v_CreateNewFloatPlane(char_1,unsigned_int_1);

	char_1 = char_1;
	short_2 = short_1 + short_1;
	int_4 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		v_SnapPlane(char_1,float_2);

		double_1 = double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, "{R") < 0)
			{
			}
		}
	}
	return int_4;
}
char v_VectorNormalize( long parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_1;
	return char_1;
}
void v_CrossProduct( short parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
}
int v_PlaneFromPoints( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_5 = 1;
	long long_3 = 1;
	v_CrossProduct(short_1,short_2,char_1);

	int_1 = v_FindFloatPlane(long_1,char_1);

	char_4 = char_2 + char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_2;
	double_2 = double_1 + double_1;
	return int_1;
	char_5 = v_VectorNormalize(long_3,unsigned_int_2);

}
void v_TokenAvailable()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	int_2 = int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double_3 = double_1 * double_2;
			double_2 = double_2 + double_4;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "lz") < 0)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				int_1 = int_2 * int_3;
			}
			int_2 = int_1 * int_3;
		}
		long_2 = long_1 + long_1;
		short_1 = short_1 * short_1;
	}
}
void v_SafeRead( double parameter_1,int parameter_3)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
}
int v_Q_filelength( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	double_3 = double_1 * double_2;
	long_1 = long_1 + long_2;
	char_1 = char_1;
	char_2 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
int v_TryLoadFile( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_SafeRead(double_1,int_1);

	char_1 = char_1;
	long_1 = long_1 + long_1;
	float_1 = float_1;
	long_2 = long_2 * long_2;
	float_2 = float_2 + float_1;
	if(1)
	{
	}
	double_4 = double_2 * double_3;
	int_2 = v_Q_filelength(double_4);

	long_1 = long_3 * long_4;
	short_2 = short_1 * short_2;
	long_4 = long_2 * long_3;
	double_1 = double_3 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_2;
}
int v_FindMiptex( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = short_1 + short_2;
	short_2 = short_1 * short_1;
	v_Error(char_1,int_1);

	int_1 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	int_1 = v_LittleLong(int_3);

	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		short_1 = short_1 + short_1;
		double_1 = double_1 + double_2;
		int_1 = int_1 + int_4;
	}
	int_5 = v_FindMiptex(char_2);

	int_1 = int_1 + int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return int_3;
	int_3 = v_TryLoadFile(char_3);

}
void v_ParseBrush( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double_1 = v_GetToken(double_1);

	v_MakeBrushWindings(double_2);

	int_1 = int_1 + int_2;
	int_2 = v_BrushContents(unsigned_int_1);

	short_1 = short_2;
	int_2 = int_3 + int_3;
	float_3 = float_1 + float_2;
	float_2 = float_4 + float_4;
	int_4 = v_PlaneFromPoints(int_3,int_4,int_4);

	int_2 = v_TexinfoForBrushTexture(double_3,unsigned_int_2,int_1);

	int_3 = int_5 + int_6;
	v_Error(char_1,int_2);

	int_4 = v_FindMiptex(char_1);

	v_TokenAvailable();

	v_SetKeyValue(double_3,char_1,char_2);

	v_AddBrushBevels(short_3);

}
double v_GetToken( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	return double_4;
}
double v_ParseMapEntity()
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	v_ParseBrush(double_1);

	v_GetVectorForKey(short_1,char_1,long_1);

	v_MakeBrushWindings(double_1);

	v_SetKeyValue(double_2,char_1,char_2);

	char_3 = char_1 * char_2;
	char_2 = v_ParseEpair();

	long_1 = long_1 * long_2;
	v_MoveBrushesToWorld(float_1);

	short_3 = short_2 + short_2;
	if(1)
	{
		v_Error(char_3,int_1);

		double_2 = double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "Q") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = v_GetToken(double_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return double_1;
	int_1 = v_FindFloatPlane(long_1,char_4);

	int_1 = v_TexinfoForBrushTexture(double_3,unsigned_int_1,int_2);

	v_ValueForKey(short_2,char_2);

}
float v_ExpandPath( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") < 0)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
	}
	v_Error(char_1,int_2);

	int_1 = int_2 + int_2;
	return float_1;
}
void v_AddScriptToStack( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	double_1 = double_1 * double_2;
	v_Error(char_1,int_1);

	short_3 = short_1 + short_2;
	float_1 = v_ExpandPath(char_2);

	double_3 = double_4;
	int_1 = int_1 * int_2;
	int_2 = v_LoadFile(char_2);

	float_2 = float_1 * float_2;
	double_1 = double_4;
}
void v_LoadScriptFile( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_3 = long_1 + long_2;
	v_AddScriptToStack(char_1);

	int_2 = int_1 + int_2;
	short_2 = short_1 + short_2;
	float_1 = float_1 * float_1;
}
void v_LoadMapFile( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_qprintf(char_1,char_2);

		v_AddPointToBounds(float_1,unsigned_int_1,double_1);

		double_3 = double_1 + double_2;
		short_3 = short_1 + short_2;
	}
	v_LoadScriptFile(char_3);

	double_4 = v_ParseMapEntity();

	v_ClearBounds(long_1,int_2);

}
short v_LittleShort( short parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float v_LittleFloat( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_SwapBSPFile()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	short short_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 + short_2;
		short_2 = v_LittleShort(short_3);

		double_3 = double_2 * double_1;
		char_2 = char_1 + char_2;
		int_3 = int_1 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_2 = double_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			long_1 = long_1 * long_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_2 = float_1 + float_2;
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_3 = int_1;
		}
		float_1 = v_LittleFloat(float_3);

		int_4 = int_4;
		double_1 = double_4 + double_4;
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_4;
		float_1 = float_1 * float_3;
	}
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		long_1 = long_2 * long_2;
		int_3 = int_4 * int_2;
		long_1 = long_2 + long_3;
		unsigned_int_4 = unsigned_int_5;
		int_1 = v_LittleLong(int_2);

		double_2 = double_5 + double_1;
		float_3 = float_2;
	}
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		float_1 = float_3;
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			double_2 = double_1 * double_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
		short_3 = short_2 + short_3;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		char_1 = char_3 + char_1;
		double_4 = double_2 + double_3;
	}
	for(int looper_12=0; looper_12<1;looper_12++)
	{
		short short_5 = 1;
		int int_5 = 1;
		double_4 = double_5 + double_4;
		double_6 = double_6 * double_1;
		short_3 = short_4 + short_5;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			int_5 = int_1 + int_2;
			char_3 = char_2;
		}
		int_3 = int_5 + int_2;
		double_1 = double_5;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
		int_4 = int_5 * int_4;
	}
	for(int looper_14=0; looper_14<1;looper_14++)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	}
	for(int looper_15=0; looper_15<1;looper_15++)
	{
		short_1 = short_4 + short_1;
	}
	for(int looper_16=0; looper_16<1;looper_16++)
	{
		char char_4 = 1;
		char_2 = char_2 + char_4;
	}
	for(int looper_17=0; looper_17<1;looper_17++)
	{
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
		double_6 = double_2 * double_1;
	}
	for(int looper_18=0; looper_18<1;looper_18++)
	{
		int int_6 = 1;
		int_3 = int_6;
		double_1 = double_2 + double_3;
		long_2 = long_2 + long_3;
	}
	for(int looper_19=0; looper_19<1;looper_19++)
	{
		char char_5 = 1;
		char_2 = char_3 * char_5;
		double_4 = double_4 + double_2;
	}
	for(int looper_20=0; looper_20<1;looper_20++)
	{
		double double_7 = 1;
		double_7 = double_5 * double_1;
		short_4 = short_2;
	}
	for(int looper_21=0; looper_21<1;looper_21++)
	{
		long long_4 = 1;
		long_4 = long_3 * long_4;
		int_4 = int_4 * int_2;
	}
	if(1)
	{
		float_2 = float_3 + float_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	double_8 = double_8 + double_9;
	for(int looper_22=0; looper_22<1;looper_22++)
	{
		char char_6 = 1;
		short short_6 = 1;
		char_6 = char_3;
		short_2 = short_6;
	}
}
int v_CopyLump( int parameter_1,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int_1 = int_1;
	int_3 = int_1 + int_2;
	int_3 = int_3 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Jz") < 0)
	{
		int int_4 = 1;
		int_2 = int_4 + int_4;
	}
	v_Error(char_1,int_2);

	char_4 = char_2 + char_3;
	return int_2;
}
int v_LittleLong( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_LoadFile( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_2 = double_1 + double_1;
	double_1 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_2;
	int_2 = int_1 + int_1;
	double_2 = double_2 * double_3;
	double_5 = double_1 * double_4;
	double_6 = double_4;
	int_1 = int_1 + int_1;
	return int_2;
}
void v_LoadBSPFile( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	v_Error(char_1,int_1);

	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	int_4 = int_2 * int_4;
	int_5 = v_LittleLong(int_3);

	long_1 = long_1 * long_2;
	int_1 = int_4 * int_1;
	double_1 = double_2 * double_1;
	int_1 = int_5 + int_5;
	double_3 = double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	short_3 = short_1 + short_2;
	long_2 = long_2 + long_3;
	int_2 = v_LoadFile(char_2);

	float_1 = float_1 + float_2;
	short_1 = short_4 * short_1;
	double_2 = double_4 * double_4;
	double_4 = double_5 * double_3;
	char_2 = char_2 * char_1;
	int_4 = int_5 * int_1;
	int_6 = int_1 + int_6;
	double_4 = double_2 + double_4;
	int_5 = int_5 * int_6;
	int_2 = v_CopyLump(int_3,int_1);

	v_SwapBSPFile();

}
void v_DefaultExtension( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_3 = int_2 + int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_4 = 1;
		int_4 = int_2 * int_4;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_3 * int_3;
		}
	}
	double_4 = double_2 * double_3;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
			int int_6 = 1;
			int_2 = int_6 + int_3;
		}
	}
	unsigned_int_1 = unsigned_int_1;
}
void v_StripExtension( char parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
}
char v_ExpandArg( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		v_Q_getwd(char_2);

		int_2 = int_1 + int_2;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return char_1;
}
void v_qprintf( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Xm") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	float_2 = float_1 * float_1;
}
int v_Q_strncasecmp( char parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
void v_Q_getwd( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		if(1)
		{
			if(1)
			{
				int_3 = int_2;
			}
			float_1 = float_1;
		}
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				int_3 = int_2 + int_3;
			}
			long_1 = long_1 + long_2;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			char_4 = char_3 + char_3;
		}
		if(1)
		{
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float_2 = float_1 * float_2;
			double_2 = double_3 + double_4;
		}
		char_3 = char_3 * char_5;
		char_4 = char_3 + char_4;
	}
	double_1 = double_5 + double_1;
}
void v_SetQdirFromPath( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
		if(1)
		{
			char char_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_1 = v_Q_strncasecmp(char_1,char_2,int_1);

			char_1 = char_3;
			v_qprintf(char_1,char_4);

			char_4 = char_4 * char_1;
			int_2 = int_2 + int_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
			int_1 = int_3 + int_4;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 + double_2;
		float_3 = float_3 * float_3;
		short_2 = short_1 + short_1;
		float_4 = float_3 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_2 = float_4 + float_2;
		v_Error(char_1,int_5);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "ji") < 0)
	{
		float_2 = float_1 * float_3;
	}
	v_Q_getwd(char_5);

	short_4 = short_3 + short_1;
	short_5 = short_2 + short_5;
	long_2 = long_1 * long_2;
}
void v_ThreadSetDefault()
{
	char char_1 = 1;
	char_1 = char_1;
}
double v_I_FloatTime()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	unsigned_int_2 = unsigned_int_3;
	long_1 = long_1 + long_1;
	long_1 = long_2 * long_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return double_1;
}
void v_Error( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_2 * double_2;
}
int main()
{
	int uni_para =480;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	long long_5 = 1;
	short short_5 = 1;
	float float_5 = 1;
	int int_5 = 1;
	char char_7 = 1;
	double double_8 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	double double_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_2;
	float_2 = float_1 + float_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_5 = 1;
		char controller4vul_266[3];
		fgets(controller4vul_266 ,3 ,stdin);
		if( strcmp( controller4vul_266, "<W") < 0)
		{
			v_ProcessModels(uni_para);

			double_1 = double_1 + double_2;
			char_1 = char_2 + char_2;
		}
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			long_2 = long_1 * long_1;
			char_1 = char_2 + char_2;
		}
		if(1)
		{
			int_4 = int_4 * int_1;
			double_4 = double_2 * double_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			long_1 = long_2 * long_3;
		}
		if(1)
		{
			short_1 = short_1 + short_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			char_3 = char_1;
			float_4 = float_2 + float_3;
		}
		if(1)
		{
			double_5 = double_2 + double_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float_1 = float_1 * float_3;
			double_4 = double_5 * double_3;
		}
		if(1)
		{
			int_3 = int_4 + int_2;
			char_2 = char_4;
		}
		if(1)
		{
			short_1 = short_2 * short_2;
			long_1 = long_1 * long_4;
		}
		if(1)
		{
			char_1 = char_1 * char_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			short_3 = short_1 * short_2;
			double_1 = double_1 * double_6;
		}
		if(1)
		{
			float_4 = float_3 * float_2;
			float_3 = float_3 * float_1;
		}
		if(1)
		{
			short_3 = short_2 + short_1;
			short_1 = short_3 + short_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
			long_2 = long_1 + long_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
			short_4 = short_1 + short_4;
		}
		if(1)
		{
			long_5 = long_2 + long_1;
			short_5 = short_1 + short_5;
			unsigned_int_5 = unsigned_int_4;
		}
		if(1)
		{
			double_4 = double_6 + double_7;
			float_3 = float_5 + float_1;
		}
		if(1)
		{
			float_4 = float_2;
			char_1 = char_4 * char_5;
		}
		if(1)
		{
			int_1 = int_1 + int_4;
			long_3 = long_1 + long_2;
			int_4 = int_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
			char_5 = char_5 * char_4;
			int_4 = int_5 * int_4;
			long_3 = long_1 + long_5;
		}
		if(1)
		{
			char char_6 = 1;
			int_3 = int_2;
			long_5 = long_5 + long_2;
			char_7 = char_6 + char_4;
			double_3 = double_6;
			double_7 = double_5;
			double_5 = double_2 + double_3;
		}
		if(1)
		{
			float_5 = float_5 + float_5;
		}
		if(1)
		{
			double_4 = double_2;
		}
		if(1)
		{
			double_8 = double_2 * double_8;
		}
	}
	if(1)
	{
		double_4 = double_4 * double_8;
	}
	short_5 = short_6 * short_4;
	char_3 = char_1 * char_1;
	float_3 = float_2 * float_3;
	unsigned_int_6 = unsigned_int_6;
	int_3 = int_4 + int_5;
	short_2 = short_3 * short_5;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_4;
	float_5 = float_6 + float_3;
	float_1 = float_5 * float_2;
	int_3 = int_4 * int_6;
	float_2 = float_5;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_8;
	if(1)
	{
		int int_7 = 1;
		char char_8 = 1;
		float_5 = float_3 + float_4;
		double_3 = double_1 * double_3;
		float_6 = float_1;
		short_4 = short_1 + short_5;
		unsigned_int_7 = unsigned_int_6;
		long_4 = long_6 + long_6;
		int_2 = int_2 + int_7;
		double_8 = double_4;
		char_2 = char_8 * char_7;
	}
	if(1)
	{
		long_2 = long_5 + long_5;
		double_3 = double_1 + double_5;
		int_3 = int_6 + int_4;
		float_5 = float_4 * float_1;
	}
	double_9 = double_5 + double_2;
	long_3 = long_4 * long_6;
	return int_1;
}

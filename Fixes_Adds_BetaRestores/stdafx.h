// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>



// reference additional headers your program requires here

// C includes (C++ namespace)
#include <cmath>
#include <cstdio>
#include <cstdlib>

// C++ includes
#include <string>

// SADXModLoader and related
#include "SADXModLoader.h"
#include "IniFile.hpp"

#include "SADXModelsNew.h"
#include "SADXMotionsNew.h"



// Trampoline macros
#define TARGET_DYNAMIC(name) ((decltype(name##_r)*)name##_t->Target())
#define TARGET_STATIC(name) ((decltype(name##_r)*)name##_t.Target())



// Common variables
extern const HelperFunctions* helperFunctionsGlobal;
extern bool IsCameraUnderwater;

// File replacement functions and macros
#define ReplacePVM(a) helperFunctionsGlobal->ReplaceFile("system\\" a ".PVM", "system\\" a "_DC.PVM")
#define ReplacePVR(a) helperFunctionsGlobal->ReplaceFile("system\\" a ".PVR", "system\\" a "_DC.PVR")
void ReplaceSET(std::string src);
void ReplaceCAM(std::string src);
void ReplaceGeneric(std::string src, std::string dest);

// Level functions
void LevelLoader(unsigned __int16 levelact, const char* filename, NJS_TEXLIST* landTableTexlist = NULL, _OBJ_LANDTABLE* landtablePointer = NULL);
bool IsLevelLoaded(unsigned __int16 levelact);
bool IsLevelLoaded(unsigned __int8 level, unsigned __int8 act);
_OBJ_LANDTABLE* GetLevelLandtable(unsigned __int16 levelact);
_OBJ_LANDTABLE* GetLevelLandtable(unsigned __int8 level, unsigned __int8 act);
bool CheckSADXWater(LevelIDs level);
void AddLateDrawLandtable(_OBJ_LANDTABLE* landtable);
void RemoveLateDrawLandtable();
void AddTextureAnimation(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3 = -1, int frame4 = -1, int frame5 = -1, int frame6 = -1, int frame7 = -1, int frame8 = -1, int frame9 = -1, int frame10 = -1, int frame11 = -1, int frame12 = -1, int frame13 = -1, int frame14 = -1, int frame15 = -1, int frame16 = -1);
void AddTextureAnimation_Permanent(int level, int act, NJS_MATERIAL* material, bool nonsequential, int speed, int frame1, int frame2, int frame3 = -1, int frame4 = -1, int frame5 = -1, int frame6 = -1, int frame7 = -1, int frame8 = -1, int frame9 = -1, int frame10 = -1, int frame11 = -1, int frame12 = -1, int frame13 = -1, int frame14 = -1, int frame15 = -1, int frame16 = -1);
void AddUVAnimation(int level, int act, NJS_MESHSET_SADX* meshset, int timer, int u_speed, int v_speed);
void AddUVAnimation_Permanent(int level, int act, NJS_MESHSET_SADX* meshset, int timer, int u_speed, int v_speed);

// Model functions and macros
#define HideMesh_Object(...) HideMesh_Object_Wrapper(__VA_ARGS__, -1)
#define HideMesh_Model(...) HideMesh_Model_Wrapper(__VA_ARGS__, -1)
void LoadModel_ReplaceMeshes(NJS_OBJECT* object, const char* ModelName);
void SwapModel(NJS_OBJECT* object1, NJS_OBJECT* object2);
void AddAlphaRejectMaterial(const NJS_MATERIAL* material);
void AddWhiteDiffuseMaterial(const NJS_MATERIAL* material);
void HideMesh_Object_Wrapper(NJS_OBJECT* object, int arg, ...);
void HideMesh_Model_Wrapper(NJS_MODEL_SADX* object, int arg, ...);
void CorrectSpecular(NJS_MODEL_SADX* mdl);
void CorrectSpecular(NJS_OBJECT* obj);
void ForceLevelSpecular_Object(NJS_OBJECT* obj, bool recursive);
void ForceObjectSpecular_Object(NJS_OBJECT* obj, bool recursive);
void SwapMeshsets(NJS_OBJECT* object, int mesh1, int mesh2);
NJS_OBJECT* CloneObject(NJS_OBJECT* obj);
NJS_MODEL_SADX* CloneAttach(NJS_MODEL_SADX* att);

// COL flags
enum SurfaceFlags
{
	SurfaceFlags_Solid = 0x00000001,
	SurfaceFlags_Water = 0x00000002, // Water with transparency sorting
	SurfaceFlags_NoFriction = 0x00000004,
	SurfaceFlags_NoAccel = 0x00000008,

	SurfaceFlags_LowAccel = 0x00000010,
	SurfaceFlags_UseSkyDrawDist = 0x00000020,
	SurfaceFlags_NoLandingA = 0x00000040, // ??? Used, unknown
	SurfaceFlags_IncAccel = 0x00000080,

	SurfaceFlags_Dig = 0x00000100,
	SurfaceFlags_Unknown5 = 0x00000200, // ???
	SurfaceFlags_Waterfall = 0x00000400, // Force alpha sorting; Disable Z Write when used together with Water; Force disable Z write in all levels except Lost World 2
	SurfaceFlags_Unknown7 = 0x00000800, // ??? Unused?

	SurfaceFlags_NoClimb = 0x00001000,
	SurfaceFlags_Chaos0Land = 0x00002000, // Makes COL items invisible when Chaos jumps up pole
	SurfaceFlags_Stairs = 0x00004000,
	SurfaceFlags_Unknown10 = 0x00008000, // ???

	SurfaceFlags_Hurt = 0x00010000,
	SurfaceFlags_Accelerate = 0x00020000,
	SurfaceFlags_LowDepth = 0x00040000, // Set lowest depth (-37952)
	SurfaceFlags_Unknown13 = 0x00080000, // ???

	SurfaceFlags_Footprints = 0x00100000,
	SurfaceFlags_NoLandingB = 0x00200000, // ???
	SurfaceFlags_WaterNoAlpha = 0x00400000, // Water (physics only)
	SurfaceFlags_RotateGravity = 0x00800000, // Calls the function "RotateByGravity"

	SurfaceFlags_NoZWrite = 0x01000000, // Sets LATE_LIG when enabled, LATE_WZ otherwise
	SurfaceFlags_DrawByMesh = 0x02000000,
	SurfaceFlags_UvManipulation = 0x04000000,
	SurfaceFlags_DynamicCollision = 0x08000000, // Something for dynamic collision

	SurfaceFlags_UseRotation = 0x10000000,
	SurfaceFlags_Unknown22 = 0x20000000, // ??? Something related to scale
	SurfaceFlags_Unknown23 = 0x40000000, // ??? Something related to scale
	SurfaceFlags_Visible = 0x80000000,
};

// Custom material flags
#define NJD_CUSTOMFLAG_UVANIM1		(BIT_2)
#define NJD_CUSTOMFLAG_UVANIM2		(BIT_3)
#define NJD_CUSTOMFLAG_WHITE		(BIT_4)
#define NJD_CUSTOMFLAG_NIGHT		(BIT_5)
#define NJD_CUSTOMFLAG_RESERVED		(BIT_6) // 0x40 thing
#define NJD_CUSTOMFLAG_NO_REJECT	(BIT_7) // NJD_FLAG_PICK
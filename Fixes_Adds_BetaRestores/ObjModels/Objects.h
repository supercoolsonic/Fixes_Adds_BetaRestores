#pragma once
#include "SADXModLoader.h"

NJS_MATERIAL matlist_001763C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001763FC[] = {
	6, 6, 2, 1, 3, 0, 14,
	3, 1, 7, 6,
	0x8000u | 7, 14, 15, 3, 10, 2, 11, 6
};

Sint16 poly_00176422[] = {
	3, 6, 7, 16,
	3, 17, 14, 15
};

Sint16 poly_00176432[] = {
	0x8000u | 7, 9, 8, 11, 5, 6, 4, 16,
	0x8000u | 7, 11, 10, 9, 15, 12, 17, 13
};

NJS_TEX uv_00176454[] = {
	{ 51, -280 },
	{ 382, -280 },
	{ 382, 255 },
	{ 1147, -280 },
	{ 1147, 254 },
	{ 1530, 254 },
	{ 382, 255 },
	{ 0, 255 },
	{ 51, -280 },
	{ 1530, 254 },
	{ 1477, -280 },
	{ 1147, -280 },
	{ 1147, -510 },
	{ 382, -280 },
	{ 382, -508 },
	{ 51, -280 }
};

NJS_TEX uv_00176494[] = {
	{ 247, 28 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 247, 28 }
};

NJS_TEX uv_001764AC[] = {
	{ 2057, 255 },
	{ 1000, 255 },
	{ 1001, 7 },
	{ 496, 255 },
	{ 496, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 1001, 7 },
	{ 2056, 7 },
	{ 2057, 255 },
	{ 2562, 7 },
	{ 2562, 255 },
	{ 3060, 7 },
	{ 3060, 255 }
};

NJS_MESHSET_SADX meshlist_001764E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001763FC, NULL, NULL, NULL, uv_00176454, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00176422, NULL, NULL, NULL, uv_00176494, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00176432, NULL, NULL, NULL, uv_001764AC, NULL }
};

NJS_VECTOR vertex_0017652C[] = {
	{ 0, 0, -15.5f },
	{ 0, 0, 14.5f },
	{ 14, -5, 14.5f },
	{ 14, -5, -15.5f },
	{ 0, -9, 29.5f },
	{ 14, -9, 27.5f },
	{ 14, -5, 27.5f },
	{ 0, 0, 29.5f },
	{ 20, -9, 14.5f },
	{ 20, -9, -15.5f },
	{ 20, -6, -15.5f },
	{ 20, -6, 14.5f },
	{ 14, -9, -28.5f },
	{ 0, -9, -30.5f },
	{ 0, 0, -30.5f },
	{ 14, -5, -28.5f },
	{ 0, -5, 29.5f },
	{ 0, -5, -30.5f }
};

NJS_VECTOR normal_00176604[] = {
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.141421f, 0, 0.989949f },
	{ 0.5973099f, 0, 0.80201f },
	{ 0.575139f, 0.514191f, 0.636257f },
	{ 0.33955f, 0.698985f, 0.629385f },
	{ 0.976719f, 0, 0.214523f },
	{ 0.976719f, 0, -0.214523f },
	{ 0.786262f, 0.598337f, -0.154225f },
	{ 0.786262f, 0.598337f, 0.154225f },
	{ 0.5973099f, 0, -0.80201f },
	{ 0.141421f, 0, -0.989949f },
	{ 0.33955f, 0.698985f, -0.629385f },
	{ 0.575139f, 0.514191f, -0.636257f },
	{ 0.141421f, 0, 0.989949f },
	{ 0.141421f, 0, -0.989949f }
};

NJS_MODEL_SADX attach_001766DC = { vertex_0017652C, normal_00176604, LengthOfArray<Sint32>(vertex_0017652C), meshlist_001764E4, matlist_001763C0, LengthOfArray<Uint16>(meshlist_001764E4), LengthOfArray<Uint16>(matlist_001763C0),{ 10, -4.5f, -0.5f }, 31.62277f, NULL };

NJS_OBJECT object_00176704 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001766DC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Awning

NJS_MATERIAL matlist_0012CD40[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_0012CD54[] = {
	4, 2, 3, 8, 5,
	0x8000u | 5, 6, 2, 7, 3, 5,
	7, 7, 6, 0, 1, 8, 4, 2,
	3, 7, 0, 5,
	3, 8, 5, 0
};

NJS_TEX uv_0012CD8C[] = {
	{ 0, 254 },
	{ 0, 4 },
	{ 250, 4 },
	{ 129, 32 },
	{ 0, 254 },
	{ 250, 254 },
	{ 0, 4 },
	{ 250, 4 },
	{ 129, 32 },
	{ 250, 4 },
	{ 250, 254 },
	{ 0, 4 },
	{ 0, 254 },
	{ 250, 4 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 4 },
	{ 0, 4 },
	{ 129, 32 },
	{ 0, 4 },
	{ 129, 32 },
	{ 250, 4 }
};

NJS_MESHSET_SADX meshlist_0012CDE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0012CD54, NULL, NULL, NULL, uv_0012CD8C, NULL }
};

NJS_VECTOR vertex_0012CDFC[] = {
	{ -21.56675f, 0.000128f, 21.56675f },
	{ -54.5285f, -237.9999f, 54.5285f },
	{ 54.5285f, -237.9999f, -54.5285f },
	{ 21.56675f, 0.000128f, -21.56675f },
	{ 54.5285f, -237.9999f, 54.5285f },
	{ 0, 21.3001f, 0 },
	{ -54.5285f, -237.9999f, -54.5285f },
	{ -21.56675f, 0.000128f, -21.56675f },
	{ 21.56675f, 0.000128f, 21.56675f }
};

NJS_VECTOR normal_0012CE68[] = {
	{ -0.620533f, 0.479456f, 0.620533f },
	{ -0.693922f, 0.192209f, 0.693922f },
	{ 0.693922f, 0.192209f, -0.693922f },
	{ 0.620533f, 0.479456f, -0.620533f },
	{ 0.693922f, 0.192209f, 0.693922f },
	{ 0, 1, 0 },
	{ -0.693922f, 0.192209f, -0.693922f },
	{ -0.620533f, 0.479456f, -0.620533f },
	{ 0.620533f, 0.479456f, 0.620533f }
};

NJS_MODEL_SADX attach_0012CED4 = { vertex_0012CDFC, normal_0012CE68, LengthOfArray<Sint32>(vertex_0012CDFC), meshlist_0012CDE4, matlist_0012CD40, LengthOfArray<Uint16>(meshlist_0012CDE4), LengthOfArray<Uint16>(matlist_0012CD40),{ 0, -108.3499f, 0 }, 98.45513f, NULL };
//Lost World fog Light

NJS_MATERIAL matlistSTG07_00151660[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE | 0x40 }

};

Sint16 polySTG07_001516C4[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 polySTG07_001516EC[] = {
	0x8000u | 16, 25, 26, 28, 29, 31, 32, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23,
	0x8000u | 16, 24, 25, 27, 28, 30, 31, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22,
	6, 26, 23, 25, 22, 24, 21
};

Sint16 polySTG07_0015173E[] = {
	8, 48, 45, 46, 42, 43, 41, 44, 47
};

Sint16 polySTG07_00151750[] = {
	5, 37, 38, 33, 39, 40,
	4, 35, 36, 33, 37,
	0x8000u | 5, 35, 34, 33, 8, 40
};

Sint16 polySTG07_00151772[] = {
	0x8000u | 16, 11, 48, 14, 45, 17, 42, 20, 41, 23, 47, 26, 44, 29, 43, 32, 46,
	4, 48, 46, 11, 32
};

NJS_TEX uvSTG07_001517A0[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uvSTG07_001517E0[] = {
	{ 1785, 132 },
	{ 1785, 3 },
	{ 1530, 131 },
	{ 1530, 3 },
	{ 1275, 132 },
	{ 1276, 3 },
	{ 1020, 132 },
	{ 1020, 3 },
	{ 765, 132 },
	{ 764, 3 },
	{ 510, 131 },
	{ 510, 3 },
	{ 255, 132 },
	{ 255, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 1785, 255 },
	{ 1785, 132 },
	{ 1530, 255 },
	{ 1530, 131 },
	{ 1275, 255 },
	{ 1275, 132 },
	{ 1020, 255 },
	{ 1020, 132 },
	{ 765, 255 },
	{ 765, 132 },
	{ 510, 255 },
	{ 510, 131 },
	{ 255, 255 },
	{ 255, 132 },
	{ 0, 255 },
	{ 0, 132 },
	{ 1530, 3 },
	{ 1785, 3 },
	{ 1530, 131 },
	{ 1785, 132 },
	{ 1530, 255 },
	{ 1785, 255 }
};

NJS_TEX uvSTG07_00151878[] = {
	{ 474, 0 },
	{ 410, 155 },
	{ 410, -155 },
	{ 254, 219 },
	{ 255, -219 },
	{ 99, 155 },
	{ 99, -155 },
	{ 35, 0 }
};

NJS_TEX uvSTG07_00151898[] = {
	{ 44, 210 },
	{ 12, 131 },
	{ 123, 131 },
	{ 44, 52 },
	{ 123, 20 },
	{ 202, 210 },
	{ 123, 242 },
	{ 123, 131 },
	{ 44, 210 },
	{ 202, 210 },
	{ 234, 131 },
	{ 123, 131 },
	{ 202, 52 },
	{ 123, 20 }
};

NJS_TEX uvSTG07_001518D0[] = {
	{ 0, -1530 },
	{ 247, -1530 },
	{ 0, -1274 },
	{ 247, -1274 },
	{ 0, -1019 },
	{ 247, -1019 },
	{ 0, -765 },
	{ 247, -765 },
	{ 0, -509 },
	{ 247, -509 },
	{ 0, -253 },
	{ 247, -253 },
	{ 0 },
	{ 247, 0 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 247, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlistSTG07_00151920[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG07_001516C4, NULL, NULL, NULL, uvSTG07_001517A0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, polySTG07_001516EC, NULL, NULL, NULL, uvSTG07_001517E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polySTG07_0015173E, NULL, NULL, NULL, uvSTG07_00151878, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, polySTG07_00151750, NULL, NULL, NULL, uvSTG07_00151898, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polySTG07_00151772, NULL, NULL, NULL, uvSTG07_001518D0, NULL }
};

NJS_VECTOR vertexSTG07_00151998[] = {
	{ -0.8073f, 0.3f, -0.8073f },
	{ -0.8073f, 0.3f, 0.8073f },
	{ -0.8073f, 1.6f, -0.8073f },
	{ -0.8073f, 1.6f, 0.8073f },
	{ 0.8073f, 0.3f, -0.8073f },
	{ 0.8073f, 0.3f, 0.8073f },
	{ 0.8073f, 1.6f, -0.8073f },
	{ 0.8073f, 1.6f, 0.8073f },
	{ 3.024275f, 3.310485f, 3.044988f },
	{ 6.041788f, 1.518754f, 0 },
	{ 5.412877f, 2.61436f, 0 },
	{ 4.276935f, 3.310499f, 0 },
	{ 4.272185f, 1.518754f, -4.272185f },
	{ 3.827488f, 2.61436f, -3.827488f },
	{ 3.02427f, 3.310499f, -3.044991f },
	{ 0, 1.518754f, -6.041788f },
	{ 0, 2.61436f, -5.412877f },
	{ 0, 3.310499f, -4.306256f },
	{ -4.272185f, 1.518754f, -4.272185f },
	{ -3.827488f, 2.61436f, -3.827488f },
	{ -3.02427f, 3.310499f, -3.044991f },
	{ -6.041788f, 1.518754f, 0 },
	{ -5.412878f, 2.61436f, 0 },
	{ -4.276935f, 3.310499f, 0 },
	{ -4.272185f, 1.518754f, 4.272185f },
	{ -3.827488f, 2.61436f, 3.827488f },
	{ -3.02427f, 3.310499f, 3.044991f },
	{ 0, 1.518754f, 6.041788f },
	{ 0, 2.61436f, 5.412877f },
	{ 0, 3.310499f, 4.306256f },
	{ 4.272185f, 1.518754f, 4.272185f },
	{ 3.827488f, 2.61436f, 3.827488f },
	{ 3.02427f, 3.310499f, 3.044991f },
	{ 0, 4.019815f, 0 },
	{ 4.276966f, 3.310485f, 0 },
	{ 3.024275f, 3.310485f, -3.044988f },
	{ 0, 3.310485f, -4.306261f },
	{ -3.024275f, 3.310485f, -3.044988f },
	{ -4.276965f, 3.310485f, 0 },
	{ -3.024275f, 3.310485f, 3.044988f },
	{ 0, 3.310485f, 4.306261f },
	{ -2.366793f, 2.6105f, -2.38301f },
	{ 0, 2.6105f, -3.370076f },
	{ 0, 2.6105f, 3.370076f },
	{ -2.366793f, 2.6105f, 2.38301f },
	{ 2.366793f, 2.6105f, -2.38301f },
	{ 2.366793f, 2.6105f, 2.38301f },
	{ -3.34713f, 2.6105f, 0 },
	{ 3.34713f, 2.6105f, 0 }
};

NJS_VECTOR normalSTG07_00151BE4[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.115467f, 0.986614f, 0.11515f },
	{ 0.867272f, 0.497835f, -0.00001f },
	{ 0.744913f, 0.667161f, -0.000277f },
	{ 0.092182f, 0.995742f, -0.000459f },
	{ 0.613254f, 0.497835f, -0.613253f },
	{ 0.528186f, 0.66539f, -0.527518f },
	{ 0.06744599f, 0.995267f, -0.06996f },
	{ -0.00001f, 0.497835f, -0.867272f },
	{ 0.000283f, 0.664813f, -0.74701f },
	{ 0.000472f, 0.995015f, -0.099727f },
	{ -0.613253f, 0.497835f, -0.613254f },
	{ -0.527416f, 0.666608f, -0.526751f },
	{ -0.065771f, 0.995497f, -0.068266f },
	{ -0.867272f, 0.497835f, 0.000001f },
	{ -0.744913f, 0.667161f, 0.000277f },
	{ -0.092182f, 0.995742f, 0.000459f },
	{ -0.613254f, 0.497835f, 0.613253f },
	{ -0.528186f, 0.66539f, 0.527518f },
	{ -0.06744599f, 0.995267f, 0.06996f },
	{ 0.000001f, 0.497835f, 0.867272f },
	{ -0.000283f, 0.664813f, 0.74701f },
	{ -0.000472f, 0.995015f, 0.099727f },
	{ 0.613253f, 0.497835f, 0.613254f },
	{ 0.527416f, 0.666608f, 0.526751f },
	{ 0.065771f, 0.995497f, 0.068266f },
	{ 0, 1, 0 },
	{ 0.163614f, 0.986524f, 0 },
	{ 0.115467f, 0.986614f, -0.11515f },
	{ 0, 0.986704f, -0.16253f },
	{ -0.115467f, 0.986614f, -0.11515f },
	{ -0.163614f, 0.986524f, 0 },
	{ -0.115467f, 0.986614f, 0.11515f },
	{ 0, 0.986704f, 0.16253f },
	{ 0.272312f, 0.923512f, 0.270133f },
	{ 0, 0.923722f, 0.383064f },
	{ 0, 0.923722f, -0.383064f },
	{ 0.272311f, 0.923512f, -0.270133f },
	{ -0.272311f, 0.923512f, 0.270133f },
	{ -0.272312f, 0.923512f, -0.270133f },
	{ 0.384068f, 0.923305f, 0 },
	{ -0.384068f, 0.923305f, 0 }
};

NJS_MODEL_SADX attachSTG07_00151E30 = { vertexSTG07_00151998, normalSTG07_00151BE4, LengthOfArray<Sint32>(vertexSTG07_00151998), meshlistSTG07_00151920, matlistSTG07_00151660, LengthOfArray<Uint16>(meshlistSTG07_00151920), LengthOfArray<Uint16>(matlistSTG07_00151660),{ 0, 2.159907f, 0 }, 8.544377f, NULL };
//aoki switch (Lost world)

NJS_MATERIAL matlist_019CF0D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 124, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 123, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 117, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 69, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 119, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_019CF148[] = {
	3, 7, 4, 0,
	3, 9, 1, 2
};

Sint16 poly_019CF158[] = {
	4, 7, 2, 4, 1
};

Sint16 poly_019CF164[] = {
	3, 4, 6, 0,
	3, 9, 8, 1
};

Sint16 poly_019CF174[] = {
	3, 0, 6, 3,
	3, 5, 8, 9
};

Sint16 poly_019CF184[] = {
	4, 5, 3, 8, 6
};

Sint16 poly_019CF190[] = {
	4, 4, 1, 6, 8
};

NJS_TEX uv_019CF19C[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1B4[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1C4[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1DC[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1F4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_019CF204[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_019CF218[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_019CF148, NULL, NULL, NULL, uv_019CF19C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_019CF158, NULL, NULL, NULL, uv_019CF1B4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_019CF164, NULL, NULL, NULL, uv_019CF1C4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_019CF174, NULL, NULL, NULL, uv_019CF1DC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_019CF184, NULL, NULL, NULL, uv_019CF1F4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_019CF190, NULL, NULL, NULL, uv_019CF204, NULL }
};

NJS_VECTOR vertex_019CF2C0[] = {
	{ 14, 0, 0 },
	{ -5.466669f, 0, -5.333333f },
	{ -5.466669f, 0, -10 },
	{ 5.466669f, 0, 10 },
	{ 5.466669f, 0, -5.333333f },
	{ -5.466669f, 0, 10 },
	{ 5.466669f, 0, 5.333333f },
	{ 5.466669f, 0, -10 },
	{ -5.466669f, 0, 5.333333f },
	{ -14, 0, 0 }
};

NJS_VECTOR normal_019CF338[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_019CF3B0 = { vertex_019CF2C0, normal_019CF338, LengthOfArray<Sint32>(vertex_019CF2C0), meshlist_019CF218, matlist_019CF0D0, LengthOfArray<Uint16>(meshlist_019CF218), LengthOfArray<Uint16>(matlist_019CF0D0),{ 0 }, 17.20465f, NULL }; //Rank Crystal

NJS_MATERIAL matlist_0198E218[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0198E22C[] = {
	0, 1, 2,
	0, 2, 3,
	3, 2, 4,
	3, 4, 5,
	5, 4, 6,
	5, 6, 7,
	7, 6, 8,
	7, 8, 9,
	9, 8, 10,
	9, 10, 11,
	11, 10, 12,
	11, 12, 13,
	13, 12, 14,
	13, 14, 15,
	15, 14, 1,
	15, 1, 0
};

NJS_TEX uv_0198E258[] = {
	{ -2548, 0 },
	{ -2550, 253 },
	{ -2618, 255 },
	{ -2548, 0 },
	{ -2618, 255 },
	{ -2679, 0 },
	{ -2679, 0 },
	{ -2618, 255 },
	{ -2652, 255 },
	{ -2679, 0 },
	{ -2652, 255 },
	{ -2830, 0 },
	{ -2830, 0 },
	{ -2652, 255 },
	{ -5065, 255 },
	{ -2830, 0 },
	{ -5065, 255 },
	{ -4970, 0 },
	{ -4970, 0 },
	{ -5065, 255 },
	{ 0, 255 },
	{ -4970, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -68, 253 },
	{ 0 },
	{ -68, 253 },
	{ -122, 0 },
	{ -122, 0 },
	{ -68, 253 },
	{ -103, 255 },
	{ -122, 0 },
	{ -103, 255 },
	{ -248, 0 },
	{ -248, 0 },
	{ -103, 255 },
	{ -2515, 255 },
	{ -248, 0 },
	{ -2515, 255 },
	{ -2420, 0 },
	{ -2420, 0 },
	{ -2515, 255 },
	{ -2550, 253 },
	{ -2420, 0 },
	{ -2550, 253 },
	{ -2548, 0 }
};

NJS_MESHSET_SADX meshlist_0198E2A0[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_0198E22C, NULL, NULL, NULL, uv_0198E258, NULL }
};

NJS_VECTOR vertex_0198E2C0[] = {
	{ -20.30439f, 0.5f, 1.067062f },
	{ -17.77453f, 0.5f, 0.5128174f },
	{ -17.74709f, 0.5f, -0.5175934f },
	{ -20.27586f, 0.5f, -1.221832f },
	{ -17.3639f, 0.5f, -0.8795929f },
	{ -18.3601f, 0.5f, -2.94265f },
	{ 17.94971f, 0.5f, -1.329948f },
	{ 18.58712f, 0.5f, -2.855568f },
	{ 18.17098f, 0.5f, -0.8953552f },
	{ 20.24552f, 0.5f, -1.355667f },
	{ 18.14353f, 0.5f, 0.1350632f },
	{ 20.16009f, 0.5f, 0.7511444f },
	{ 17.71643f, 0.5f, 0.6877365f },
	{ 18.69073f, 0.5f, 2.363564f },
	{ -17.60597f, 0.5f, 1.041573f },
	{ -18.81476f, 0.5f, 2.723152f }
};

NJS_VECTOR normal_0198E380[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0198E440 = { vertex_0198E2C0, normal_0198E380, LengthOfArray<Sint32>(vertex_0198E2C0), meshlist_0198E2A0, matlist_0198E218, LengthOfArray<Uint16>(meshlist_0198E2A0), LengthOfArray<Uint16>(matlist_0198E218),{ 95.29581f, 0.5f, -6.758543f }, 21.1915f, NULL };

NJS_MATERIAL matlist_0198E4A0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0198E4B4[] = {
	0, 1, 2,
	0, 2, 3,
	3, 2, 4,
	3, 4, 5,
	5, 4, 6,
	5, 6, 7,
	7, 6, 8,
	7, 8, 9,
	9, 8, 10,
	9, 10, 11,
	11, 10, 12,
	11, 12, 13,
	13, 12, 14,
	13, 14, 15,
	15, 14, 1,
	15, 1, 0
};

NJS_TEX uv_0198E4E0[] = {
	{ -2548, 0 },
	{ -2550, 253 },
	{ -2618, 255 },
	{ -2548, 0 },
	{ -2618, 255 },
	{ -2679, 0 },
	{ -2679, 0 },
	{ -2618, 255 },
	{ -2652, 255 },
	{ -2679, 0 },
	{ -2652, 255 },
	{ -2830, 0 },
	{ -2830, 0 },
	{ -2652, 255 },
	{ -5065, 255 },
	{ -2830, 0 },
	{ -5065, 255 },
	{ -4970, 0 },
	{ -4970, 0 },
	{ -5065, 255 },
	{ 0, 255 },
	{ -4970, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -68, 253 },
	{ 0 },
	{ -68, 253 },
	{ -122, 0 },
	{ -122, 0 },
	{ -68, 253 },
	{ -103, 255 },
	{ -122, 0 },
	{ -103, 255 },
	{ -248, 0 },
	{ -248, 0 },
	{ -103, 255 },
	{ -2515, 255 },
	{ -248, 0 },
	{ -2515, 255 },
	{ -2420, 0 },
	{ -2420, 0 },
	{ -2515, 255 },
	{ -2550, 253 },
	{ -2420, 0 },
	{ -2550, 253 },
	{ -2548, 0 }
};

NJS_MESHSET_SADX meshlist_0198E528[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_0198E4B4, NULL, NULL, NULL, uv_0198E4E0, NULL }
};

NJS_VECTOR vertex_0198E548[] = {
	{ -20.30439f, 0.5f, 1.067062f },
	{ -17.77453f, 0.5f, 0.5128174f },
	{ -17.74709f, 0.5f, -0.5175934f },
	{ -20.27586f, 0.5f, -1.221832f },
	{ -17.3639f, 0.5f, -0.8795929f },
	{ -18.3601f, 0.5f, -2.94265f },
	{ 17.94971f, 0.5f, -1.329948f },
	{ 18.58712f, 0.5f, -2.855568f },
	{ 18.17098f, 0.5f, -0.8953552f },
	{ 20.24552f, 0.5f, -1.355667f },
	{ 18.14353f, 0.5f, 0.1350632f },
	{ 20.16009f, 0.5f, 0.7511444f },
	{ 17.71643f, 0.5f, 0.6877365f },
	{ 18.69073f, 0.5f, 2.363564f },
	{ -17.60597f, 0.5f, 1.041573f },
	{ -18.81476f, 0.5f, 2.723152f }
};

NJS_VECTOR normal_0198E608[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0198E6C8 = { vertex_0198E548, normal_0198E608, LengthOfArray<Sint32>(vertex_0198E548), meshlist_0198E528, matlist_0198E4A0, LengthOfArray<Uint16>(meshlist_0198E528), LengthOfArray<Uint16>(matlist_0198E4A0),{ 95.29581f, 0.5f, -6.758543f }, 21.1915f, NULL };

NJS_OBJECT object_0198E6F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0198E6C8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//dtarget rings (fixed)

NJS_MATERIAL matlist_00014484[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00014498[] = {
	0x8000u | 10, 9, 4, 8, 3, 7, 2, 6, 1, 5, 0,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10,
	0x8000u | 10, 29, 24, 28, 23, 27, 22, 26, 21, 25, 20,
	0x8000u | 10, 39, 34, 38, 33, 37, 32, 36, 31, 35, 30
};

NJS_TEX uv_000144F0[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00014590[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00014498, NULL, NULL, NULL, uv_000144F0, NULL }
};

NJS_VECTOR vertex_000145A8[] = {
	{ 1, 0, -1 },
	{ 2, 2.5f, -3 },
	{ 3, 3, -6 },
	{ 4, 0.5f, -10 },
	{ 5, -7.5f, -13 },
	{ -1, 0, -1 },
	{ -2, 2.5f, -3 },
	{ -3, 3, -5.999992f },
	{ -4, 0.5f, -10 },
	{ -5, -7.5f, -13 },
	{ -1, 0, -1 },
	{ -3, 2.5f, -2 },
	{ -6, 3, -3 },
	{ -10, 0.5f, -4 },
	{ -13, -7.5f, -5 },
	{ -1, 0, 1 },
	{ -3, 2.5f, 2 },
	{ -6, 3, 3 },
	{ -10, 0.5f, 4 },
	{ -13, -7.5f, 5 },
	{ 1, 0, 1 },
	{ 3, 2.5f, 2 },
	{ 6, 3, 3 },
	{ 10, 0.5f, 4 },
	{ 13, -7.5f, 5 },
	{ 1, 0, -1 },
	{ 3, 2.5f, -2 },
	{ 6, 3, -3 },
	{ 10, 0.5f, -4 },
	{ 13, -7.5f, -5 },
	{ -1, 0, 1 },
	{ -2, 2.5f, 3 },
	{ -3, 3, 6 },
	{ -4, 0.5f, 10 },
	{ -5, -7.5f, 13 },
	{ 1, 0, 1 },
	{ 2, 2.5f, 3 },
	{ 3, 3, 6 },
	{ 4, 0.5f, 10 },
	{ 5, -7.5f, 13 }
};

NJS_VECTOR normal_00014788[] = {
	{ 0, 0.6246949f, 0.7808689f },
	{ 0, 0.898026f, 0.439943f },
	{ 0, 0.965782f, -0.259355f },
	{ 0, 0.6046579f, -0.7964849f },
	{ 0, 0.351123f, -0.9363289f },
	{ 0, 0.6246949f, 0.7808689f },
	{ 0, 0.898026f, 0.439943f },
	{ 0, 0.965782f, -0.259355f },
	{ 0, 0.6046579f, -0.7964849f },
	{ 0, 0.351123f, -0.9363289f },
	{ 0.7808689f, 0.6246949f, 0 },
	{ 0.439943f, 0.898026f, 0 },
	{ -0.259356f, 0.965782f, 0 },
	{ -0.7964849f, 0.6046579f, 0 },
	{ -0.9363289f, 0.351123f, 0 },
	{ 0.7808689f, 0.6246949f, 0 },
	{ 0.439943f, 0.898026f, 0 },
	{ -0.259356f, 0.965782f, 0 },
	{ -0.7964849f, 0.6046579f, 0 },
	{ -0.9363289f, 0.351123f, 0 },
	{ -0.7808689f, 0.6246949f, 0 },
	{ -0.439943f, 0.898026f, 0 },
	{ 0.259356f, 0.965782f, 0 },
	{ 0.7964849f, 0.6046579f, 0 },
	{ 0.9363289f, 0.351123f, 0 },
	{ -0.7808689f, 0.6246949f, 0 },
	{ -0.439943f, 0.898026f, 0 },
	{ 0.259356f, 0.965782f, 0 },
	{ 0.7964849f, 0.6046579f, 0 },
	{ 0.9363289f, 0.351123f, 0 },
	{ 0, 0.6246949f, -0.7808689f },
	{ 0, 0.898026f, -0.439943f },
	{ 0, 0.965782f, 0.259356f },
	{ 0, 0.6046579f, 0.7964849f },
	{ 0, 0.351123f, 0.9363289f },
	{ 0, 0.6246949f, -0.7808689f },
	{ 0, 0.898026f, -0.439943f },
	{ 0, 0.965782f, 0.259356f },
	{ 0, 0.6046579f, 0.7964849f },
	{ 0, 0.351123f, 0.9363289f }
};

NJS_MODEL_SADX attach_00014968 = { vertex_000145A8, normal_00014788, LengthOfArray<Sint32>(vertex_000145A8), meshlist_00014590, matlist_00014484, LengthOfArray<Uint16>(meshlist_00014590), LengthOfArray<Uint16>(matlist_00014484),{ 0, -2.25f, 0 }, 18.38478f, NULL };

NJS_OBJECT Object_Fountain = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014968, 0, 9, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Unused Chao Garden Fountain

NJS_MATERIAL matlist_02FAC3C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02FAC3F0[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	6, 5, 4, 7, 6, 3, 2,
	4, 2, 6, 0, 4
};

NJS_TEX uv_02FAC420[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 253, 0 },
	{ 0, 1 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 1 },
	{ 253, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_02FAC468[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_02FAC3F0, NULL, NULL, NULL, uv_02FAC420, NULL }
};

NJS_VECTOR vertex_02FAC488[] = {
	{ -4.999988f, -0.040001f, -4.838194f },
	{ -4.999988f, -0.040001f, 4.838194f },
	{ -3.049988f, 9.960005f, -4.838194f },
	{ -3.049988f, 9.960005f, 4.838194f },
	{ 5.000012f, -0.040001f, -4.838194f },
	{ 5.000012f, -0.040001f, 4.838194f },
	{ 3.050013f, 9.960005f, -4.838194f },
	{ 3.050013f, 9.960005f, 4.838194f }
};

NJS_VECTOR normal_02FAC4E8[] = {
	{ -0.737787f, 0.143868f, -0.659525f },
	{ -0.737787f, 0.143868f, 0.659525f },
	{ -0.514239f, 0.624201f, -0.588159f },
	{ -0.514239f, 0.624201f, 0.588159f },
	{ 0.737787f, 0.143868f, -0.659525f },
	{ 0.737787f, 0.143868f, 0.659525f },
	{ 0.514239f, 0.624201f, -0.588159f },
	{ 0.514239f, 0.624201f, 0.588159f }
};

NJS_MODEL_SADX attach_02FAC548 = { vertex_02FAC488, normal_02FAC4E8, LengthOfArray<Sint32>(vertex_02FAC488), meshlist_02FAC468, matlist_02FAC3C8, LengthOfArray<Uint16>(meshlist_02FAC468), LengthOfArray<Uint16>(matlist_02FAC3C8),{ 0.000012f, 4.960002f, 0 }, 6.957597f, NULL };

NJS_OBJECT Object_SmallScreen = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02FAC548, 0, 0.036183f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Unused Chao Race SmallScreen

NJS_MATERIAL matlist_001542C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_001542D4[] = {
	4, 1, 4, 3, 2,
	3, 4, 0, 2
};

NJS_TEX uv_001542E8[] = {
	{ 3, 51 },
	{ 3, 3 },
	{ 51, 51 },
	{ 51, 3 },
	{ 51, 3 },
	{ 51, 51 },
	{ 3, 51 }
};

NJS_MESHSET_SADX meshlist_00154304[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001542D4, NULL, NULL, NULL, uv_001542E8, NULL }
};

NJS_VECTOR vertex_0015431C[] = {
	{ 4.615001f, 4.040002f, -2.669f },
	{ 2.237001f, 0.007001f, -1.316002f },
	{ 1.259f, 2.334002f, -0.963001f },
	{ -0.08699799f, 0.007001f, 0.044998f },
	{ 4.176001f, 2.023501f, -2.442501f }
};

NJS_VECTOR normal_00154358[] = {
	{ 0.452482f, 0.001659f, 0.891772f },
	{ 0.504906f, 0.041825f, 0.862161f },
	{ 0.494673f, 0.033841f, 0.8684199f },
	{ 0.504906f, 0.041825f, 0.862161f },
	{ 0.469822f, 0.014746f, 0.882638f }
};

NJS_MODEL_SADX attach_00154394 = { vertex_0015431C, normal_00154358, LengthOfArray<Sint32>(vertex_0015431C), meshlist_00154304, matlist_001542C0, LengthOfArray<Uint16>(meshlist_00154304), LengthOfArray<Uint16>(matlist_001542C0),{ 2.264001f, 2.023501f, -1.312001f }, 2.714524f, NULL };

NJS_OBJECT object_001543BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154394, 0.4f, 0.7f, -1.2f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001543F0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154418[] = {
	3, 4, 1, 0,
	3, 3, 5, 1,
	3, 0, 5, 2,
	3, 2, 4, 0,
	3, 0, 1, 5,
	3, 2, 3, 4,
	3, 1, 4, 3
};

Sint16 poly_00154450[] = {
	4, 11, 10, 6, 8,
	3, 11, 6, 7,
	4, 8, 9, 6, 7,
	4, 9, 10, 7, 11
};

NJS_TEX uv_00154478[] = {
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 }
};

NJS_TEX uv_001544CC[] = {
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 51, 203 },
	{ 51, 251 },
	{ 3, 251 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 }
};

NJS_MESHSET_SADX meshlist_00154508[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00154418, NULL, NULL, NULL, uv_00154478, NULL },
{ NJD_MESHSET_TRIMESH | 1, 4, poly_00154450, NULL, NULL, NULL, uv_001544CC, NULL }
};

NJS_VECTOR vertex_00154538[] = {
	{ 1.902799f, -2.156959f, -0.508f },
	{ 1.902799f, -2.156959f, 0.492f },
	{ 1.702799f, -1.242745f, -0.208f },
	{ 1.702799f, -1.242745f, 0.192f },
	{ 2.109906f, -1.549852f, -0.007999999f },
	{ 0.995692f, -1.249852f, -0.007999999f },
	{ 1.042951f, -1.349746f, -0.776f },
	{ 2.28289f, -1.349521f, 0 },
	{ -0.048775f, 0.046641f, -0.466f },
	{ -0.08289f, 0.356958f, -0.0009999999f },
	{ -0.047378f, 0.046862f, 0.465f },
	{ 1.042142f, -1.349158f, 0.776f }
};

NJS_VECTOR normal_001545C8[] = {
	{ 0.18933f, -0.642756f, -0.742306f },
	{ 0.18933f, -0.642756f, 0.742306f },
	{ 0.269034f, 0.571305f, -0.775391f },
	{ 0.269033f, 0.571305f, 0.775391f },
	{ 0.9406739f, 0.339312f, 0 },
	{ -0.987128f, -0.159929f, 0 },
	{ -0.032748f, -0.505184f, -0.86239f },
	{ 0.9831589f, -0.178995f, -0.036876f },
	{ -0.141302f, 0.108573f, -0.983995f },
	{ 0.636416f, 0.770945f, -0.024878f },
	{ -0.236928f, 0.247522f, 0.939467f },
	{ -0.125548f, -0.425843f, 0.896044f }
};

NJS_MODEL_SADX attach_00154658 = { vertex_00154538, normal_001545C8, LengthOfArray<Sint32>(vertex_00154538), meshlist_00154508, matlist_001543F0, LengthOfArray<Uint16>(meshlist_00154508), LengthOfArray<Uint16>(matlist_001543F0),{ 1.1f, -0.9f, 0 }, 1.843693f, NULL };

NJS_OBJECT object_00154680 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154658, 1.297201f, 0.349852f, 0.508f, 0xFFFFD556, 0xFFFFE38F, 0, 1, 1, 1, NULL, &object_001543BC };

NJS_MATERIAL matlist_001546B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001546C8[] = {
	4, 4, 8, 2, 6,
	4, 2, 6, 5, 7,
	3, 1, 0, 3,
	4, 5, 7, 4, 8,
	4, 0, 7, 3, 6,
	4, 3, 6, 1, 8,
	4, 1, 8, 0, 7
};

NJS_TEX uv_0015470C[] = {
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 }
};

NJS_MESHSET_SADX meshlist_00154778[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_001546C8, NULL, NULL, NULL, uv_0015470C, NULL }
};

NJS_VECTOR vertex_00154790[] = {
	{ 1.049373f, -1.718921f, -0.9119059f },
	{ -0.348952f, -1.820226f, -0.910056f },
	{ -0.08111899f, 0.178705f, -0.302122f },
	{ 0.6021f, -2.367542f, 0.7848639f },
	{ -0.260757f, -0.051628f, -0.612418f },
	{ 0.338685f, 0.108692f, -0.612446f },
	{ 0.26049f, -1.394418f, 0.241371f },
	{ 0.944029f, -1.305114f, -0.6121759f },
	{ -0.304855f, -1.385926f, -0.611237f }
};

NJS_VECTOR normal_001547FC[] = {
	{ 0.700452f, 0.020189f, -0.713414f },
	{ -0.7365f, -0.233276f, -0.634941f },
	{ -0.172202f, 0.258624f, 0.950505f },
	{ 0.280746f, -0.732658f, 0.619995f },
	{ -0.9211839f, 0.004487f, -0.389102f },
	{ 0.867786f, 0.468855f, -0.16469f },
	{ -0.155059f, 0.248486f, 0.956144f },
	{ 0.744009f, 0.621421f, -0.245531f },
	{ -0.924244f, 0.214683f, -0.315729f }
};

NJS_MODEL_SADX attach_00154868 = { vertex_00154790, normal_001547FC, LengthOfArray<Sint32>(vertex_00154790), meshlist_00154778, matlist_001546B4, LengthOfArray<Uint16>(meshlist_00154778), LengthOfArray<Uint16>(matlist_001546B4),{ 0.350211f, -1.094419f, -0.063521f }, 1.649018f, NULL };

NJS_OBJECT object_00154890 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154868, 0.7f, -1.8f, 0.5f, 0x1C71, 0, 0, 1, 1, 1, NULL, &object_00154680 };

NJS_MATERIAL matlist_001548C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001548EC[] = {
	3, 0, 1, 4,
	3, 1, 5, 3,
	3, 2, 5, 0,
	3, 0, 4, 2,
	3, 5, 1, 0,
	3, 4, 3, 2,
	3, 3, 4, 1
};

Sint16 poly_00154924[] = {
	4, 6, 8, 11, 10,
	3, 7, 6, 11,
	4, 6, 7, 8, 9,
	4, 7, 11, 9, 10
};

NJS_TEX uv_0015494C[] = {
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 }
};

NJS_TEX uv_001549A0[] = {
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 51, 203 },
	{ 51, 251 },
	{ 3, 251 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 }
};

NJS_MESHSET_SADX meshlist_001549DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_001548EC, NULL, NULL, NULL, uv_0015494C, NULL },
{ NJD_MESHSET_TRIMESH | 1, 4, poly_00154924, NULL, NULL, NULL, uv_001549A0, NULL }
};

NJS_VECTOR vertex_00154A0C[] = {
	{ -1.902799f, -2.156959f, -0.508f },
	{ -1.902799f, -2.156959f, 0.492f },
	{ -1.702799f, -1.242745f, -0.208f },
	{ -1.702799f, -1.242745f, 0.192f },
	{ -2.109906f, -1.549852f, -0.007999999f },
	{ -0.995692f, -1.249852f, -0.007999999f },
	{ -1.042951f, -1.349746f, -0.776f },
	{ -2.28289f, -1.349521f, 0 },
	{ 0.048775f, 0.046641f, -0.466f },
	{ 0.08289f, 0.356958f, -0.0009999999f },
	{ 0.047378f, 0.046862f, 0.465f },
	{ -1.042142f, -1.349158f, 0.776f }
};

NJS_VECTOR normal_00154A9C[] = {
	{ -0.18933f, -0.642756f, -0.742306f },
	{ -0.18933f, -0.642756f, 0.742306f },
	{ -0.269034f, 0.571305f, -0.775391f },
	{ -0.269034f, 0.571305f, 0.775391f },
	{ -0.9406739f, 0.339312f, 0 },
	{ 0.987128f, -0.159929f, 0 },
	{ 0.032748f, -0.505184f, -0.86239f },
	{ -0.9831589f, -0.178994f, -0.036876f },
	{ 0.141302f, 0.108573f, -0.983995f },
	{ -0.636416f, 0.770945f, -0.024878f },
	{ 0.236928f, 0.247522f, 0.939467f },
	{ 0.125548f, -0.425843f, 0.896044f }
};

NJS_MODEL_SADX attach_00154B2C = { vertex_00154A0C, normal_00154A9C, LengthOfArray<Sint32>(vertex_00154A0C), meshlist_001549DC, matlist_001548C4, LengthOfArray<Uint16>(meshlist_001549DC), LengthOfArray<Uint16>(matlist_001548C4),{ -1.1f, -0.9f, 0 }, 1.843693f, NULL };

NJS_OBJECT object_00154B54 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154B2C, -1.297201f, 0.349852f, 0.508f, 0xFFFFD556, 0x1C71, 0, 1, 1, 1, NULL, &object_00154890 };

NJS_MATERIAL matlist_00154B88[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154B9C[] = {
	4, 2, 6, 4, 8,
	4, 5, 7, 2, 6,
	3, 3, 0, 1,
	4, 4, 8, 5, 7,
	4, 3, 6, 0, 7,
	4, 1, 8, 3, 6,
	4, 0, 7, 1, 8
};

NJS_TEX uv_00154BE0[] = {
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 }
};

NJS_MESHSET_SADX meshlist_00154C4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00154B9C, NULL, NULL, NULL, uv_00154BE0, NULL }
};

NJS_VECTOR vertex_00154C64[] = {
	{ -1.049373f, -1.718921f, -0.9119059f },
	{ 0.348952f, -1.820226f, -0.910056f },
	{ 0.08111899f, 0.178705f, -0.302122f },
	{ -0.6021f, -2.367542f, 0.7848639f },
	{ 0.260758f, -0.051628f, -0.612418f },
	{ -0.338685f, 0.108692f, -0.612446f },
	{ -0.26049f, -1.394418f, 0.241371f },
	{ -0.944029f, -1.305114f, -0.6121759f },
	{ 0.304855f, -1.385926f, -0.611237f }
};

NJS_VECTOR normal_00154CD0[] = {
	{ -0.700452f, 0.020188f, -0.713414f },
	{ 0.7365f, -0.233276f, -0.634941f },
	{ 0.172202f, 0.258624f, 0.950505f },
	{ -0.280746f, -0.732658f, 0.619995f },
	{ 0.9211839f, 0.004487f, -0.389102f },
	{ -0.867786f, 0.468855f, -0.16469f },
	{ 0.155059f, 0.248486f, 0.956144f },
	{ -0.744009f, 0.621421f, -0.245531f },
	{ 0.924244f, 0.214683f, -0.315729f }
};

NJS_MODEL_SADX attach_00154D3C = { vertex_00154C64, normal_00154CD0, LengthOfArray<Sint32>(vertex_00154C64), meshlist_00154C4C, matlist_00154B88, LengthOfArray<Uint16>(meshlist_00154C4C), LengthOfArray<Uint16>(matlist_00154B88),{ -0.350211f, -1.094419f, -0.063521f }, 1.631158f, NULL };

NJS_OBJECT object_00154D64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154D3C, -0.7f, -1.8f, 0.5f, 0x25B0, 0, 0, 1, 1, 1, NULL, &object_00154B54 };

NJS_MATERIAL matlist_00154D98[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00154DAC[] = {
	4, 3, 2, 1, 4,
	3, 2, 0, 4
};

NJS_TEX uv_00154DC0[] = {
	{ 51, 51 },
	{ 51, 3 },
	{ 3, 51 },
	{ 3, 3 },
	{ 3, 3 },
	{ 3, 51 },
	{ 51, 51 }
};

NJS_MESHSET_SADX meshlist_00154DDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00154DAC, NULL, NULL, NULL, uv_00154DC0, NULL }
};

NJS_VECTOR vertex_00154DF4[] = {
	{ -4.615f, 4.040002f, -2.669001f },
	{ -2.237001f, 0.007001f, -1.316002f },
	{ -1.259f, 2.334002f, -0.963001f },
	{ 0.08699799f, 0.007001f, 0.044998f },
	{ -4.176f, 2.023501f, -2.442501f }
};

NJS_VECTOR normal_00154E30[] = {
	{ -0.452482f, 0.001659f, 0.891772f },
	{ -0.504906f, 0.041825f, 0.862161f },
	{ -0.494673f, 0.033841f, 0.8684199f },
	{ -0.504906f, 0.041825f, 0.862161f },
	{ -0.469822f, 0.014746f, 0.882638f }
};

NJS_MODEL_SADX attach_00154E6C = { vertex_00154DF4, normal_00154E30, LengthOfArray<Sint32>(vertex_00154DF4), meshlist_00154DDC, matlist_00154D98, LengthOfArray<Uint16>(meshlist_00154DDC), LengthOfArray<Uint16>(matlist_00154D98),{ -2.264001f, 2.023501f, -1.312001f }, 2.714524f, NULL };

NJS_OBJECT object_00154E94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154E6C, -0.4f, 0.7f, -1.2f, 0, 0, 0, 1, 1, 1, NULL, &object_00154D64 };

NJS_MATERIAL matlist_00154EC8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 129, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154F04[] = {
	4, 1, 0, 2, 3,
	4, 51, 52, 50, 49
};

Sint16 poly_00154F18[] = {
	4, 22, 46, 14, 47,
	4, 23, 27, 16, 33,
	0x8000u | 10, 24, 13, 42, 43, 21, 15, 36, 37, 22, 14,
	3, 6, 30, 40,
	3, 6, 31, 39,
	4, 11, 48, 16, 47,
	4, 10, 38, 14, 37,
	4, 30, 34, 7, 35,
	4, 29, 44, 5, 45,
	4, 12, 25, 13, 33,
	4, 9, 28, 15, 43,
	0x8000u | 10, 22, 5, 36, 35, 21, 7, 42, 41, 24, 4,
	4, 24, 27, 4, 26,
	4, 23, 46, 8, 45,
	4, 31, 40, 4, 41,
	4, 32, 39, 8, 26,
	3, 6, 32, 44,
	3, 6, 29, 34,
	3, 34, 30, 6,
	4, 5, 35, 29, 34,
	4, 15, 37, 9, 38,
	3, 40, 31, 6,
	4, 7, 41, 30, 40,
	4, 13, 43, 12, 28,
	3, 39, 32, 6,
	4, 4, 26, 31, 39,
	4, 8, 26, 23, 27,
	4, 13, 33, 24, 27,
	4, 16, 33, 11, 25,
	3, 44, 29, 6,
	4, 8, 45, 32, 44,
	4, 5, 45, 22, 46,
	4, 16, 47, 23, 46,
	4, 14, 47, 10, 48
};

Sint16 poly_00155074[] = {
	4, 20, 19, 18, 17
};

NJS_TEX uv_00155080[] = {
	{ 107, 251 },
	{ 251, 251 },
	{ 107, 3 },
	{ 251, 3 },
	{ 107, 3 },
	{ 251, 3 },
	{ 107, 251 },
	{ 251, 251 }
};

NJS_TEX uv_001550A0[] = {
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 147 },
	{ 3, 251 },
	{ 139, 155 },
	{ 139, 251 },
	{ 251, 147 },
	{ 251, 251 },
	{ 139, 155 },
	{ 139, 251 },
	{ 3, 147 },
	{ 3, 251 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 147 },
	{ 3, 3 },
	{ 139, 155 },
	{ 139, 3 },
	{ 251, 147 },
	{ 251, 3 },
	{ 139, 155 },
	{ 139, 3 },
	{ 3, 147 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 }
};

NJS_TEX uv_001552D0[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -254 }
};

NJS_MESHSET_SADX meshlist_001552E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00154F04, NULL, NULL, NULL, uv_00155080, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 34, poly_00154F18, NULL, NULL, NULL, uv_001550A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00155074, NULL, NULL, NULL, uv_001552D0, NULL }
};

NJS_VECTOR vertex_00155328[] = {
	{ 2.619f, 0.193708f, -0.719501f },
	{ 1.619f, 0.193708f, -0.019501f },
	{ 1.619f, 1.593709f, -0.019501f },
	{ 2.619f, 1.593709f, -0.719501f },
	{ 1.747f, 1.708709f, 0.0055f },
	{ -1.734f, 1.708709f, 0.0055f },
	{ 0.005f, 4.275708f, -1.496499f },
	{ 0.007f, 2.057708f, 1.3405f },
	{ 0.007f, 1.601709f, -1.9445f },
	{ 0.005f, -0.404292f, 0.739499f },
	{ -0.6149999f, -0.388291f, 0.267499f },
	{ 0.003f, 0.043709f, -0.964501f },
	{ 0.626f, -0.388291f, 0.267499f },
	{ 1.851f, 0.159708f, 0.132499f },
	{ -1.838f, 0.159708f, 0.132499f },
	{ 0.007f, 0.07170799f, 1.457499f },
	{ 0.007f, 0.345709f, -1.6215f },
	{ 4.137999f, 2.120708f, 0.0005f },
	{ 0, 1.37071f, -4.0285f },
	{ 0, 2.870707f, 4.0285f },
	{ -4.137999f, 2.120708f, 0.0005f },
	{ 0.0088f, 0.964708f, 1.226224f },
	{ -1.61525f, 0.934209f, 0.055724f },
	{ 0.007f, 0.873709f, -1.883f },
	{ 1.632f, 0.934209f, 0.055725f },
	{ 0.340504f, -0.072501f, -0.695052f },
	{ 1.209653f, 1.642217f, -1.284405f },
	{ 1.270038f, 0.898459f, -1.127813f },
	{ 0.3155f, -0.446291f, 0.503499f },
	{ -1.510169f, 2.650458f, -0.426079f },
	{ 0.0045f, 3.012208f, 0.78337f },
	{ 1.518299f, 2.650458f, -0.426079f },
	{ 0.0045f, 2.420208f, -1.848579f },
	{ 1.209079f, 0.389899f, -1.025899f },
	{ -0.852834f, 2.831333f, 0.478645f },
	{ -0.9635f, 1.883209f, 0.973f },
	{ -0.9032249f, 0.8994589f, 0.890974f },
	{ -1.0155f, 0.115708f, 1.094999f },
	{ -0.305f, -0.446291f, 0.503499f },
	{ 1.02673f, 2.390993f, -1.453297f },
	{ 0.8613999f, 2.831333f, 0.378645f },
	{ 0.977f, 1.883209f, 0.873f },
	{ 0.9204f, 0.8994589f, 0.790974f },
	{ 1.029f, 0.115708f, 0.994999f },
	{ -1.020755f, 2.390993f, -1.453297f },
	{ -1.197628f, 1.642217f, -1.284405f },
	{ -1.155449f, 0.898459f, -1.327813f },
	{ -1.197735f, 0.389899f, -1.025899f },
	{ -0.334599f, -0.072501f, -0.695052f },
	{ -2.581f, 0.193708f, -0.719501f },
	{ -1.581f, 0.193708f, -0.019502f },
	{ -1.581f, 1.593709f, -0.019502f },
	{ -2.581f, 1.593709f, -0.719501f }
};

NJS_VECTOR normal_001555A4[] = {
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.977945f, 0.075559f, 0.194718f },
	{ -0.98361f, 0.067291f, 0.16728f },
	{ 0.002276f, 0.9066319f, -0.421917f },
	{ 0.04037f, 0.223865f, 0.973784f },
	{ 0.012387f, 0.015241f, -0.9998069f },
	{ 0.018764f, -0.833354f, 0.552421f },
	{ -0.413552f, -0.908622f, 0.058143f },
	{ -0.000836f, -0.908604f, -0.417659f },
	{ 0.41414f, -0.907028f, 0.076075f },
	{ 0.9257219f, -0.36011f, 0.115587f },
	{ -0.928284f, -0.36052f, 0.09118f },
	{ 0.032847f, -0.331553f, 0.942865f },
	{ 0.0139f, -0.678171f, -0.734773f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ 0.047333f, 0.07076599f, 0.9963689f },
	{ -0.982004f, 0.077241f, 0.17234f },
	{ 0.020842f, -0.25783f, -0.965966f },
	{ 0.975069f, 0.07964499f, 0.207118f },
	{ 0.264434f, -0.880778f, -0.392817f },
	{ 0.749468f, -0.025677f, -0.661543f },
	{ 0.7661f, -0.120541f, -0.631317f },
	{ 0.336487f, -0.822167f, 0.459149f },
	{ -0.898664f, 0.438415f, -0.013946f },
	{ 0.031517f, 0.700146f, 0.713304f },
	{ 0.8958549f, 0.444338f, 0.002646f },
	{ -0.00025f, 0.151408f, -0.988471f },
	{ 0.633136f, -0.492484f, -0.597159f },
	{ -0.551789f, 0.620603f, 0.557119f },
	{ -0.590481f, 0.178112f, 0.787152f },
	{ -0.568891f, 0.09563f, 0.816834f },
	{ -0.554337f, -0.330268f, 0.763959f },
	{ -0.320778f, -0.834669f, 0.447694f },
	{ 0.670132f, 0.193112f, -0.71668f },
	{ 0.564061f, 0.616314f, 0.549539f },
	{ 0.607193f, 0.181775f, 0.773482f },
	{ 0.5821379f, 0.092386f, 0.807825f },
	{ 0.5653329f, -0.335714f, 0.753456f },
	{ -0.67094f, 0.191903f, -0.716249f },
	{ -0.761501f, -0.034034f, -0.64727f },
	{ -0.694627f, -0.158385f, -0.701718f },
	{ -0.669812f, -0.454861f, -0.586902f },
	{ -0.265353f, -0.880265f, -0.393346f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f }
};

NJS_MODEL_SADX attach_00155820 = { vertex_00155328, normal_001555A4, LengthOfArray<Sint32>(vertex_00155328), meshlist_001552E0, matlist_00154EC8, LengthOfArray<Uint16>(meshlist_001552E0), LengthOfArray<Uint16>(matlist_00154EC8),{ 0, 1.914708f, 0 }, 5.775105f, NULL };

NJS_OBJECT object_00155848 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00155820, -0.019f, 1.377709f, 0.519502f, 0, 0, 0, 1, 1, 1, NULL, &object_00154E94 };

NJS_MATERIAL matlist_0015587C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00155890[] = {
	3, 21, 20, 0,
	4, 15, 14, 4, 2,
	3, 13, 3, 1,
	4, 5, 3, 15, 14,
	3, 3, 5, 1,
	3, 22, 21, 0,
	4, 16, 15, 6, 4,
	4, 3, 13, 14, 19,
	4, 7, 5, 16, 15,
	3, 5, 7, 1,
	3, 23, 22, 0,
	4, 17, 16, 8, 6,
	4, 14, 19, 2, 12,
	4, 9, 7, 17, 16,
	3, 7, 9, 1,
	3, 24, 23, 0,
	4, 18, 17, 10, 8,
	3, 20, 25, 0,
	4, 11, 9, 18, 17,
	3, 9, 11, 1,
	3, 25, 24, 0,
	4, 19, 18, 12, 10,
	3, 11, 13, 1,
	4, 13, 11, 19, 18,
	4, 20, 21, 2, 4,
	4, 21, 22, 4, 6,
	4, 22, 23, 6, 8,
	4, 25, 20, 12, 2,
	4, 23, 24, 8, 10,
	4, 24, 25, 10, 12
};

NJS_TEX uv_001559A4[] = {
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 }
};

NJS_MESHSET_SADX meshlist_00155B54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 30, poly_00155890, NULL, NULL, NULL, uv_001559A4, NULL }
};

NJS_VECTOR vertex_00155B6C[] = {
	{ 0, -2.210901f, -0.633966f },
	{ 0, 0.8824379f, 0.248074f },
	{ 1.558846f, 0.536452f, -0.7824439f },
	{ 1.948556f, 1.73411f, -0.72309f },
	{ 0, 0.5845259f, -1.247579f },
	{ 0, 1.87887f, -1.404509f },
	{ -1.558846f, 0.536452f, -0.7824439f },
	{ -1.948556f, 1.590927f, -0.72309f },
	{ -1.558846f, 0.040305f, 0.947827f },
	{ -1.948556f, 1.178757f, 1.439748f },
	{ 0, -0.207769f, 1.812962f },
	{ 0.000001f, 0.7897159f, 2.521167f },
	{ 1.558846f, 0.040305f, 0.947826f },
	{ 1.948557f, 1.284845f, 1.439748f },
	{ 2.75448f, 1.399608f, -1.253057f },
	{ 0, 1.637954f, -2.381752f },
	{ -2.754481f, 1.399608f, -1.253056f },
	{ -2.75448f, 0.522916f, 1.804332f },
	{ 0.000001f, 0.084569f, 3.333026f },
	{ 2.754481f, 0.522916f, 1.804331f },
	{ 2.455181f, -1.339555f, -1.858735f },
	{ 0, -1.148839f, -2.821323f },
	{ -2.455181f, -1.339555f, -1.858734f },
	{ -2.455181f, -2.120986f, 0.866441f },
	{ 0.000001f, -2.511702f, 2.229028f },
	{ 2.455181f, -2.120986f, 0.86644f }
};

NJS_VECTOR normal_00155CA4[] = {
	{ 0, -0.961426f, -0.275062f },
	{ -0.028654f, 0.9661199f, 0.256497f },
	{ 0.719871f, -0.307224f, -0.622414f },
	{ 0.163896f, 0.981174f, 0.102154f },
	{ -0.00093f, -0.077378f, -0.997001f },
	{ -0.008866f, 0.994471f, 0.104637f },
	{ -0.730132f, -0.270176f, -0.627625f },
	{ -0.204905f, 0.96886f, 0.13901f },
	{ -0.788837f, -0.522241f, 0.324039f },
	{ -0.202789f, 0.918625f, 0.339123f },
	{ 0, -0.6477759f, 0.761831f },
	{ 0.009536999f, 0.8610139f, 0.508492f },
	{ 0.788837f, -0.522241f, 0.324039f },
	{ 0.173906f, 0.909697f, 0.377105f },
	{ 0.843215f, 0.159149f, -0.513479f },
	{ -0.00116f, 0.285947f, -0.958245f },
	{ -0.866248f, 0.131269f, -0.48206f },
	{ -0.877256f, -0.132794f, 0.461289f },
	{ 0.027142f, -0.299688f, 0.953651f },
	{ 0.843251f, -0.151037f, 0.515865f },
	{ 0.7672769f, -0.210418f, -0.605814f },
	{ 0.005911f, -0.151424f, -0.9884509f },
	{ -0.781477f, -0.181857f, -0.5968429f },
	{ -0.8033929f, -0.486767f, 0.342954f },
	{ 0, -0.614619f, 0.788824f },
	{ 0.8033929f, -0.486767f, 0.342953f }
};

NJS_MODEL_SADX attach_00155DDC = { vertex_00155B6C, normal_00155CA4, LengthOfArray<Sint32>(vertex_00155B6C), meshlist_00155B54, matlist_0015587C, LengthOfArray<Uint16>(meshlist_00155B54), LengthOfArray<Uint16>(matlist_0015587C),{ 0, -0.316416f, 0.255852f }, 4.129911f, NULL };

NJS_OBJECT object_00155E04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00155DDC, 0, 0, -0.5f, 0, 0, 0, 1, 1, 1, &object_00155848, NULL }; //Egg Nightopian

NJS_MATERIAL matlist_00153C00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00153C14[] = {
	0x8000u | 13, 1, 16, 17, 14, 15, 12, 0, 9, 6, 8, 5, 7, 4,
	0x8000u | 7, 1, 17, 2, 18, 3, 0, 6,
	6, 6, 3, 5, 2, 4, 1,
	4, 17, 18, 15, 0,
	3, 13, 16, 14,
	0x8000u | 5, 12, 14, 11, 13, 10,
	6, 12, 9, 11, 8, 10, 7
};

NJS_TEX uv_00153C7C[] = {
	{ 1275, -416 },
	{ 1061, -416 },
	{ 1061, -752 },
	{ 849, -752 },
	{ 849, -929 },
	{ 637, -929 },
	{ 0, -1020 },
	{ 424, -929 },
	{ 212, -929 },
	{ 424, -752 },
	{ 212, -752 },
	{ 424, -416 },
	{ 212, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1275, -752 },
	{ 1061, -929 },
	{ 1275, -929 },
	{ 1275, -1020 },
	{ 1487, -929 },
	{ 1487, -929 },
	{ 1275, -929 },
	{ 1487, -752 },
	{ 1275, -752 },
	{ 1487, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1061, -929 },
	{ 849, -929 },
	{ 1275, -1020 },
	{ 849, -416 },
	{ 1061, -416 },
	{ 849, -752 },
	{ 637, -929 },
	{ 849, -752 },
	{ 637, -752 },
	{ 849, -416 },
	{ 637, -416 },
	{ 637, -929 },
	{ 424, -929 },
	{ 637, -752 },
	{ 424, -752 },
	{ 637, -416 },
	{ 424, -416 }
};

NJS_MESHSET_SADX meshlist_00153D2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00153C14, NULL, NULL, NULL, uv_00153C7C, NULL }
};

NJS_VECTOR vertex_00153D44[] = {
	{ 0, 3.350007f, 0 },
	{ 4.45f, -2.000001f, 0 },
	{ 3.352819f, 0.974999f, 0 },
	{ 1.819605f, 2.552856f, 0 },
	{ 2.225f, -2.000001f, -3.853815f },
	{ 1.676409f, 0.974999f, -2.903625f },
	{ 0.909803f, 2.552856f, -1.575825f },
	{ -2.225001f, -2.000001f, -3.853814f },
	{ -1.67641f, 0.974999f, -2.903625f },
	{ -0.909803f, 2.552856f, -1.575825f },
	{ -4.45f, -2.000001f, 0.000001f },
	{ -3.352819f, 0.974999f, 0 },
	{ -1.819605f, 2.552856f, 0 },
	{ -2.225f, -2.000001f, 3.853815f },
	{ -1.676409f, 0.974999f, 2.903626f },
	{ -0.909803f, 2.552856f, 1.575825f },
	{ 2.225001f, -2.000001f, 3.853814f },
	{ 1.67641f, 0.974999f, 2.903625f },
	{ 0.909803f, 2.552856f, 1.575825f }
};

NJS_VECTOR normal_00153E28[] = {
	{ 0, 1, 0 },
	{ 0.938228f, 0.346019f, 0 },
	{ 0.863131f, 0.50498f, 0 },
	{ 0.6094469f, 0.792827f, 0 },
	{ 0.469114f, 0.346019f, -0.812529f },
	{ 0.431566f, 0.50498f, -0.747493f },
	{ 0.304724f, 0.792827f, -0.527797f },
	{ -0.469114f, 0.346019f, -0.812529f },
	{ -0.431566f, 0.50498f, -0.747493f },
	{ -0.304723f, 0.792827f, -0.527797f },
	{ -0.938228f, 0.346019f, 0 },
	{ -0.863131f, 0.50498f, 0 },
	{ -0.6094469f, 0.792827f, 0 },
	{ -0.469113f, 0.346019f, 0.812529f },
	{ -0.431565f, 0.50498f, 0.747493f },
	{ -0.304723f, 0.792827f, 0.527797f },
	{ 0.469114f, 0.346019f, 0.812529f },
	{ 0.431566f, 0.50498f, 0.747493f },
	{ 0.304724f, 0.792827f, 0.527797f }
};

NJS_MODEL_SADX attach_00153F0C = { vertex_00153D44, normal_00153E28, LengthOfArray<Sint32>(vertex_00153D44), meshlist_00153D2C, matlist_00153C00, LengthOfArray<Uint16>(meshlist_00153D2C), LengthOfArray<Uint16>(matlist_00153C00),{ 0, 0.675003f, 0 }, 5.886798f, NULL };

NJS_OBJECT object_00153F34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00153F0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Piantama Egg Top

NJS_MATERIAL matlist_00153F68[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00153F7C[] = {
	9, 5, 2, 4, 1, 0, 16, 13, 14, 11,
	0x8000u | 5, 2, 1, 17, 16, 14,
	4, 8, 5, 7, 4,
	0x8000u | 14, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 2, 3, 5, 6,
	6, 11, 8, 10, 7, 0, 4,
	4, 11, 10, 13, 0
};

NJS_TEX uv_00153FDC[] = {
	{ 1485, -80 },
	{ 1275, -80 },
	{ 1487, 165 },
	{ 1275, 165 },
	{ 1275, 255 },
	{ 1061, 165 },
	{ 849, 165 },
	{ 848, -80 },
	{ 637, -80 },
	{ 1275, -80 },
	{ 1275, 165 },
	{ 1062, -80 },
	{ 1061, 165 },
	{ 848, -80 },
	{ 424, -80 },
	{ 211, -80 },
	{ 424, 165 },
	{ 212, 165 },
	{ 211, -80 },
	{ 212, -416 },
	{ 424, -80 },
	{ 424, -416 },
	{ 637, -80 },
	{ 637, -416 },
	{ 848, -80 },
	{ 849, -416 },
	{ 1062, -80 },
	{ 1061, -416 },
	{ 1275, -80 },
	{ 1275, -416 },
	{ 1485, -80 },
	{ 1487, -416 },
	{ 637, -80 },
	{ 424, -80 },
	{ 637, 165 },
	{ 424, 165 },
	{ 0, 255 },
	{ 212, 165 },
	{ 637, -80 },
	{ 637, 165 },
	{ 849, 165 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00154084[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00153F7C, NULL, NULL, NULL, uv_00153FDC, NULL }
};

NJS_VECTOR vertex_0015409C[] = {
	{ 0, 0.050001f, 0 },
	{ 2.8f, 0.847151f, 0 },
	{ 4.41673f, 3.025002f, 0 },
	{ 4.45f, 5.999998f, 0 },
	{ 1.4f, 0.847151f, -2.424871f },
	{ 2.208365f, 3.025002f, -3.7875f },
	{ 2.225f, 5.999998f, -3.853815f },
	{ -1.4f, 0.847151f, -2.424871f },
	{ -2.208366f, 3.025002f, -3.7875f },
	{ -2.225001f, 5.999998f, -3.853814f },
	{ -2.8f, 0.847151f, 0 },
	{ -4.416731f, 3.025002f, 0.000001f },
	{ -4.45f, 5.999998f, 0.000001f },
	{ -1.399999f, 0.847151f, 2.424871f },
	{ -2.208364f, 3.025002f, 3.787501f },
	{ -2.225f, 5.999998f, 3.853815f },
	{ 1.400001f, 0.847151f, 2.424871f },
	{ 2.208367f, 3.025002f, 3.7875f },
	{ 2.225001f, 5.999998f, 3.853814f }
};

NJS_VECTOR normal_00154180[] = {
	{ 0, -1, 0 },
	{ 0.63291f, -0.774225f, -0.000462f },
	{ 0.955997f, -0.293378f, -0.000328f },
	{ 0.99989f, -0.014852f, 0.000024f },
	{ 0.316069f, -0.771505f, -0.552161f },
	{ 0.478606f, -0.294262f, -0.827252f },
	{ 0.497242f, -0.022114f, -0.86733f },
	{ -0.315086f, -0.772473f, -0.551368f },
	{ -0.478444f, -0.293487f, -0.827621f },
	{ -0.497299f, -0.018464f, -0.8673829f },
	{ -0.63291f, -0.774225f, 0.000462f },
	{ -0.955997f, -0.293377f, 0.000328f },
	{ -0.99989f, -0.014852f, -0.00024f },
	{ -0.316069f, -0.771505f, 0.552161f },
	{ -0.478606f, -0.294262f, 0.827252f },
	{ -0.497242f, -0.022114f, 0.86733f },
	{ 0.315086f, -0.772473f, 0.551367f },
	{ 0.478444f, -0.293487f, 0.827621f },
	{ 0.497299f, -0.018464f, 0.8673829f }
};

NJS_MODEL_SADX attach_00154264 = { vertex_0015409C, normal_00154180, LengthOfArray<Sint32>(vertex_0015409C), meshlist_00154084, matlist_00153F68, LengthOfArray<Uint16>(meshlist_00154084), LengthOfArray<Uint16>(matlist_00153F68),{ 0, 3.024999f, 0 }, 5.886798f, NULL };

NJS_OBJECT object_0015428C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154264, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Piantama Egg Bottom

NJS_MATERIAL matlist_001536BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001536D0[] = {
	11, 11, 6, 10, 5, 9, 4, 8, 3, 7, 2, 0,
	14, 7, 0, 12, 17, 13, 18, 14, 19, 15, 20, 16, 21, 1, 26,
	0x8000u | 11, 1, 16, 11, 15, 10, 14, 9, 13, 8, 12, 7,
	0x8000u | 11, 0, 17, 22, 18, 23, 19, 24, 20, 25, 21, 26,
	14, 22, 0, 27, 2, 28, 3, 29, 4, 30, 5, 31, 6, 1, 11,
	11, 22, 27, 23, 28, 24, 29, 25, 30, 26, 31, 1
};

NJS_TEX uv_0015376C[] = {
	{ 1487, -929 },
	{ 1275, -929 },
	{ 1487, -752 },
	{ 1275, -752 },
	{ 1487, -416 },
	{ 1275, -416 },
	{ 1485, -80 },
	{ 1275, -80 },
	{ 1487, 165 },
	{ 1275, 165 },
	{ 1275, 255 },
	{ 212, 165 },
	{ 0, 255 },
	{ 424, 165 },
	{ 637, 165 },
	{ 424, -80 },
	{ 637, -80 },
	{ 424, -416 },
	{ 637, -416 },
	{ 424, -752 },
	{ 637, -752 },
	{ 424, -929 },
	{ 637, -929 },
	{ 0, -1020 },
	{ 849, -929 },
	{ 0, -1020 },
	{ 424, -929 },
	{ 212, -929 },
	{ 424, -752 },
	{ 212, -752 },
	{ 424, -416 },
	{ 212, -416 },
	{ 424, -80 },
	{ 211, -80 },
	{ 424, 165 },
	{ 212, 165 },
	{ 0, 255 },
	{ 637, 165 },
	{ 849, 165 },
	{ 637, -80 },
	{ 848, -80 },
	{ 637, -416 },
	{ 849, -416 },
	{ 637, -752 },
	{ 849, -752 },
	{ 637, -929 },
	{ 849, -929 },
	{ 849, 165 },
	{ 1275, 255 },
	{ 1061, 165 },
	{ 1275, 165 },
	{ 1062, -80 },
	{ 1275, -80 },
	{ 1061, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1275, -752 },
	{ 1061, -929 },
	{ 1275, -929 },
	{ 1275, -1020 },
	{ 1487, -929 },
	{ 849, 165 },
	{ 1061, 165 },
	{ 848, -80 },
	{ 1062, -80 },
	{ 849, -416 },
	{ 1061, -416 },
	{ 849, -752 },
	{ 1061, -752 },
	{ 849, -929 },
	{ 1061, -929 },
	{ 1275, -1020 }
};

NJS_MESHSET_SADX meshlist_0015388C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_001536D0, NULL, NULL, NULL, uv_0015376C, NULL }
};

NJS_VECTOR vertex_001538A4[] = {
	{ 0, 0.050001f, 0 },
	{ 0, 11.35f, 0 },
	{ 2.8f, 0.847151f, 0 },
	{ 4.41673f, 3.025002f, 0 },
	{ 4.45f, 5.999998f, 0 },
	{ 3.352819f, 8.974998f, 0 },
	{ 1.819605f, 10.55285f, 0 },
	{ 1.4f, 0.847151f, -2.424871f },
	{ 2.208365f, 3.025002f, -3.7875f },
	{ 2.225f, 5.999998f, -3.853815f },
	{ 1.676409f, 8.974998f, -2.903625f },
	{ 0.909803f, 10.55285f, -1.575825f },
	{ -1.4f, 0.847151f, -2.424871f },
	{ -2.208366f, 3.025002f, -3.7875f },
	{ -2.225001f, 5.999998f, -3.853814f },
	{ -1.67641f, 8.974998f, -2.903625f },
	{ -0.909803f, 10.55285f, -1.575825f },
	{ -2.8f, 0.847151f, 0 },
	{ -4.416731f, 3.025002f, 0.000001f },
	{ -4.45f, 5.999998f, 0.000001f },
	{ -3.352819f, 8.974998f, 0 },
	{ -1.819605f, 10.55285f, 0 },
	{ -1.399999f, 0.847151f, 2.424871f },
	{ -2.208364f, 3.025002f, 3.787501f },
	{ -2.225f, 5.999998f, 3.853815f },
	{ -1.676409f, 8.974998f, 2.903626f },
	{ -0.909803f, 10.55285f, 1.575825f },
	{ 1.400001f, 0.847151f, 2.424871f },
	{ 2.208367f, 3.025002f, 3.7875f },
	{ 2.225001f, 5.999998f, 3.853814f },
	{ 1.67641f, 8.974998f, 2.903625f },
	{ 0.909803f, 10.55285f, 1.575825f }
};

NJS_VECTOR normal_00153A24[] = {
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.63291f, -0.774225f, -0.000462f },
	{ 0.955997f, -0.293378f, -0.000328f },
	{ 0.9871989f, 0.159496f, 0.000013f },
	{ 0.863131f, 0.50498f, 0 },
	{ 0.6094469f, 0.792827f, 0 },
	{ 0.316069f, -0.771505f, -0.552161f },
	{ 0.478606f, -0.294262f, -0.827252f },
	{ 0.492483f, 0.155881f, -0.856249f },
	{ 0.431566f, 0.50498f, -0.747493f },
	{ 0.304724f, 0.792827f, -0.527797f },
	{ -0.315086f, -0.772473f, -0.551368f },
	{ -0.478444f, -0.293487f, -0.827621f },
	{ -0.492344f, 0.157776f, -0.8559819f },
	{ -0.431566f, 0.50498f, -0.747493f },
	{ -0.304723f, 0.792827f, -0.527797f },
	{ -0.63291f, -0.774225f, 0.000462f },
	{ -0.955997f, -0.293378f, 0.000328f },
	{ -0.9871989f, 0.159496f, -0.00012f },
	{ -0.863131f, 0.50498f, 0 },
	{ -0.6094469f, 0.792827f, 0 },
	{ -0.316069f, -0.771505f, 0.552161f },
	{ -0.478606f, -0.294262f, 0.827252f },
	{ -0.492483f, 0.155881f, 0.856249f },
	{ -0.431565f, 0.50498f, 0.747493f },
	{ -0.304723f, 0.792827f, 0.527797f },
	{ 0.315086f, -0.772473f, 0.551368f },
	{ 0.478444f, -0.293487f, 0.827621f },
	{ 0.492344f, 0.157776f, 0.8559819f },
	{ 0.431566f, 0.50498f, 0.747493f },
	{ 0.304724f, 0.792827f, 0.527797f }
};

NJS_MODEL_SADX attach_00153BA4 = { vertex_001538A4, normal_00153A24, LengthOfArray<Sint32>(vertex_001538A4), meshlist_0015388C, matlist_001536BC, LengthOfArray<Uint16>(meshlist_0015388C), LengthOfArray<Uint16>(matlist_001536BC),{ 0, 5.700003f, 0 }, 6.826108f, NULL };

NJS_OBJECT object_00153BCC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00153BA4, 0, 0, 0, 0xFFFFFCCD, 0, 0xFFFFFAAB, 1, 1, 1, NULL, NULL }; //Piantama Full Egg


//Egg Carrier Stuff
NJS_MATERIAL matlist_0013150C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 95, NJD_D_025 | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | 0x1 },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 3, NJD_D_025 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | 0x1 }
};

Sint16 poly_00131534[] = {
	4, 1, 4, 0, 5,
	4, 7, 3, 6, 4,
	4, 2, 5, 8, 3
};

Sint16 poly_00131552[] = {
	3, 11, 13, 14,
	3, 9, 10, 12,
	8, 10, 14, 12, 13, 9, 11, 10, 14
};

NJS_TEX uv_00131574[] = {
	{ 241, -3554 },
	{ 145, 246 },
	{ 12, -3554 },
	{ 110, 243 },
	{ 3, 176 },
	{ 96, -3564 },
	{ 228, 176 },
	{ 129, -3560 },
	{ 247, -3570 },
	{ 138, 255 },
	{ 0, -3570 },
	{ 101, 255 }
};

NJS_TEX uv_001315A4[] = {
	{ 194, 67 },
	{ 194, 67 },
	{ 118, 195 },
	{ 52, 67 },
	{ 118, 195 },
	{ 52, 67 },
	{ 118, 195 },
	{ 118, 195 },
	{ 52, 67 },
	{ 194, 67 },
	{ 52, 67 },
	{ 194, 67 },
	{ 118, 195 },
	{ 118, 195 }
};

NJS_MESHSET_SADX meshlist_001315DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00131534, NULL, NULL, NULL, uv_00131574, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00131552, NULL, NULL, NULL, uv_001315A4, NULL }
};

NJS_VECTOR vertex_0013160C[] = {
	{ 50.33138f, 1.200006f, -23.16988f },
	{ 45.33138f, 1.200006f, -31.83013f },
	{ 5.199986f, 1.200002f, 54.99999f },
	{ -0.700012f, 1.200002f, 0.499994f },
	{ -0.00012f, 1.200002f, -0.800006f },
	{ 0.799988f, 1.200002f, 0.499994f },
	{ -44.93141f, 1.199998f, -31.83013f },
	{ -49.93141f, 1.199996f, -23.16987f },
	{ -4.800014f, 1.200002f, 54.99999f },
	{ -0.700012f, 1.80001f, 0.499994f },
	{ -0.00012f, 1.80001f, -0.800006f },
	{ 0.799988f, 1.80001f, 0.499994f },
	{ -0.700012f, 0.00001f, 0.499994f },
	{ 0.799988f, 0.00001f, 0.499994f },
	{ -0.00012f, 0.00001f, -0.800006f }
};

NJS_VECTOR normal_001316C0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.71374f, 0.555728f, 0.426313f },
	{ -0.024008f, 0.554646f, -0.83174f },
	{ 0.726891f, 0.553756f, 0.406183f },
	{ -0.71374f, -0.555728f, 0.426313f },
	{ 0.726891f, -0.553756f, 0.406183f },
	{ -0.024008f, -0.554646f, -0.83174f }
};

NJS_MODEL_SADX attach_00131774 = { vertex_0013160C, normal_001316C0, LengthOfArray<Sint32>(vertex_0013160C), meshlist_001315DC, matlist_0013150C, LengthOfArray<Uint16>(meshlist_001315DC), LengthOfArray<Uint16>(matlist_0013150C),{ 0.199986f, 0.90001f, 11.58493f }, 66.31761f, NULL };

NJS_OBJECT Patrol_Prop = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00131774, 0, 14.5f, 0, 0, 0x10000, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001317D0[] = {
	//{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 135, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 97, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 111, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 110, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 109, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 102, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 135, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00131870[] = {
	4, 9, 7, 8, 6,
	4, 3, 1, 2, 0,
	4, 11, 9, 10, 8,
	4, 1, 11, 0, 10,
	4, 5, 3, 4, 2,
	4, 7, 5, 6, 4
};

Sint16 poly_001318AC[] = {
	4, 15, 14, 13, 12,
	4, 19, 15, 17, 13,
	4, 18, 19, 16, 17,
	4, 14, 18, 12, 16
};

Sint16 poly_001318D4[] = {
	4, 40, 48, 42, 31,
	4, 42, 31, 32, 44,
	3, 26, 24, 20,
	5, 23, 22, 20, 28, 26,
	5, 24, 25, 20, 21, 23,
	4, 32, 44, 34, 45,
	4, 34, 45, 36, 46,
	4, 36, 46, 38, 47,
	4, 38, 47, 40, 48
};

Sint16 poly_00131930[] = {
	0x8000u | 5, 23, 29, 21, 27, 25,
	0x8000u | 8, 24, 25, 26, 27, 28, 29, 22, 23
};

Sint16 poly_0013194E[] = {
	3, 44, 30, 45,
	3, 45, 30, 46,
	3, 46, 30, 47,
	3, 47, 30, 48,
	3, 48, 30, 31,
	3, 31, 30, 44
};

Sint16 poly_0013197E[] = {
	4, 35, 33, 34, 32,
	4, 39, 37, 38, 36
};

Sint16 poly_00131992[] = {
	4, 33, 35, 39, 37,
	4, 43, 33, 41, 39,
	0x8000u | 8, 33, 32, 43, 42, 41, 40, 39, 38
};

Sint16 poly_001319B8[] = {
	4, 37, 35, 36, 34
};

NJS_TEX uv_001319C4[] = {
	{ 3, 251 },
	{ 243, 251 },
	{ 3, 11 },
	{ 243, 11 },
	{ 3, 251 },
	{ 243, 251 },
	{ 3, 11 },
	{ 243, 11 },
	{ 186, 190 },
	{ 183, 190 },
	{ 308, 82 },
	{ 308, 82 },
	{ 3, 251 },
	{ 243, 251 },
	{ 3, 11 },
	{ 243, 11 },
	{ 184, 169 },
	{ 186, 169 },
	{ 308, 79 },
	{ 308, 79 },
	{ 3, 251 },
	{ 243, 251 },
	{ 3, 11 },
	{ 243, 11 }
};

NJS_TEX uv_00131A24[] = {
	{ 220, 44 },
	{ 32, 44 },
	{ 246, 182 },
	{ 6, 182 },
	{ 220, 44 },
	{ 32, 44 },
	{ 246, 182 },
	{ 6, 182 },
	{ 220, 44 },
	{ 32, 44 },
	{ 246, 182 },
	{ 6, 182 },
	{ 220, 44 },
	{ 32, 44 },
	{ 246, 182 },
	{ 6, 182 }
};

NJS_TEX uv_00131A64[] = {
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 50, 251 },
	{ 3, 251 },
	{ 127, 135 },
	{ 243, 11 },
	{ 243, 251 },
	{ 127, 135 },
	{ 196, 251 },
	{ 50, 251 },
	{ 3, 251 },
	{ 3, 11 },
	{ 127, 135 },
	{ 127, 11 },
	{ 243, 11 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 }
};

NJS_TEX uv_00131AF8[] = {
	{ 247, 7 },
	{ 186, 7 },
	{ 123, 7 },
	{ 60, 7 },
	{ 0, 7 },
	{ 3, 251 },
	{ 3, 11 },
	{ 50, 251 },
	{ 50, 11 },
	{ 189, 251 },
	{ 189, 11 },
	{ 243, 251 },
	{ 243, 11 }
};

NJS_TEX uv_00131B2C[] = {
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 },
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 },
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 },
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 },
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 },
	{ 13, 213 },
	{ 209, 45 },
	{ 41, 241 }
};

NJS_TEX uv_00131B74[] = {
	{ 194, 41 },
	{ 249, 5 },
	{ 194, 221 },
	{ 249, 221 },
	{ 1, 5 },
	{ 56, 41 },
	{ 1, 221 },
	{ 56, 221 }
};

NJS_TEX uv_00131B94[] = {
	{ 249, 194 },
	{ 194, 9 },
	{ 1, 194 },
	{ 52, 9 },
	{ 190, 143 },
	{ 245, 9 },
	{ 60, 143 },
	{ 5, 9 },
	{ 245, 9 },
	{ 245, 253 },
	{ 190, 143 },
	{ 190, 253 },
	{ 60, 143 },
	{ 60, 253 },
	{ 5, 9 },
	{ 5, 253 }
};

NJS_TEX uv_00131BD4[] = {
	{ 1, 5 },
	{ 249, 5 },
	{ 1, 253 },
	{ 249, 253 }
};

NJS_MESHSET_SADX meshlist_00131BE4[] = {
	//{ NJD_MESHSET_TRIMESH | 0, 6, poly_00131870, NULL, NULL, NULL, uv_001319C4, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001318AC, NULL, NULL, NULL, uv_00131A24, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 9, poly_001318D4, NULL, NULL, NULL, uv_00131A64, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00131930, NULL, NULL, NULL, uv_00131AF8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_0013194E, NULL, NULL, NULL, uv_00131B2C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0013197E, NULL, NULL, NULL, uv_00131B74, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00131992, NULL, NULL, NULL, uv_00131B94, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_001319B8, NULL, NULL, NULL, uv_00131BD4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, poly_00131870, NULL, NULL, NULL, uv_001319C4, NULL }
};

NJS_VECTOR vertex_00131CA4[] = {
	{ 4.5f, -8.200001f, 5.3f },
	{ 10.10002f, -230.7f, 311.2f },
	{ 2.3f, -5.5f, 7.5f },
	{ 5.100025f, -210.7f, 326.2f },
	{ -2.1f, -5.5f, 7.5f },
	{ -4.899975f, -210.7f, 326.2f },
	{ -4.2f, -8.2f, 5.3f },
	{ -9.899975f, -230.7f, 311.2f },
	{ -2.1f, -11.3f, 2.7f },
	{ -4.899975f, -250.7f, 296.2f },
	{ 2.3f, -11.3f, 2.7f },
	{ 5.100025f, -250.7f, 296.2f },
	{ -1.300015f, -1.399999f, -1.900005f },
	{ -1.300015f, -1.399999f, 0.829625f },
	{ -0.9000109f, 2.100002f, -1.500005f },
	{ -0.9000109f, 2.100002f, 0.429625f },
	{ 1.399982f, -1.399999f, -1.900005f },
	{ 1.399982f, -1.399999f, 0.829625f },
	{ 0.999984f, 2.100002f, -1.500005f },
	{ 0.999984f, 2.100002f, 0.429625f },
	{ 0.258472f, -4.3845f, 4.371207f },
	{ 0.099985f, -5.571214f, 1.981374f },
	{ 5.349988f, -8.223218f, 5.238176f },
	{ 5.349988f, -5.571208f, 1.981364f },
	{ -5.150014f, -8.223218f, 5.238176f },
	{ -5.150014f, -5.571208f, 1.981364f },
	{ -2.975018f, -5.835687f, 9.890512f },
	{ -2.575016f, -2.090293f, 4.815857f },
	{ 3.174987f, -5.835687f, 9.890512f },
	{ 2.774986f, -2.090293f, 4.815857f },
	{ 0.099989f, -8.694021f, 5.499623f },
	{ 2.287488f, -5.47742f, 7.474088f },
	{ 5.099992f, -7.746877f, 4.336475f },
	{ 4.49999f, -1.4f, -3.400005f },
	{ 2.599988f, -11.15877f, 1.558178f },
	{ 2.599988f, -5.981044f, -4.800359f },
	{ -2.400013f, -11.15877f, 1.558178f },
	{ -2.400013f, -5.981044f, -4.800359f },
	{ -4.90001f, -7.746877f, 4.336475f },
	{ -4.300014f, -1.4f, -3.400005f },
	{ -2.400013f, -4.412521f, 7.051628f },
	{ -2.400017f, -1.4f, 3.399995f },
	{ 2.599988f, -4.412521f, 7.051628f },
	{ 2.599985f, -1.4f, 3.399995f },
	{ 4.474992f, -8.378305f, 5.111908f },
	{ 2.287488f, -11.34666f, 2.694788f },
	{ -2.087509f, -11.34666f, 2.694788f },
	{ -4.275004f, -8.378305f, 5.111908f },
	{ -2.087509f, -5.47742f, 7.474088f }
};

NJS_VECTOR normal_00131EF0[] = {
	{ 0.999818f, 0.006039f, -0.018088f },
	{ 0.99982f, 0.014763f, -0.011927f },
	{ 0.629477f, 0.655818f, 0.416728f },
	{ 0.601542f, 0.674055f, 0.428716f },
	{ -0.631265f, 0.652389f, 0.419396f },
	{ -0.603016f, 0.6710089f, 0.431414f },
	{ -0.99982f, 0.006013f, -0.018006f },
	{ -0.999827f, 0.014528f, -0.011657f },
	{ -0.612775f, -0.609505f, -0.503002f },
	{ -0.611086f, -0.610525f, -0.503819f },
	{ 0.611596f, -0.612669f, -0.500587f },
	{ 0.609911f, -0.613677f, -0.501407f },
	{ -0.698048f, 0.159554f, -0.698048f },
	{ -0.698048f, 0.159554f, 0.698048f },
	{ -0.698048f, 0.159554f, -0.698048f },
	{ -0.698048f, 0.159554f, 0.698048f },
	{ 0.698048f, 0.159553f, -0.698048f },
	{ 0.698048f, 0.159553f, 0.698048f },
	{ 0.698048f, 0.159553f, -0.698048f },
	{ 0.698048f, 0.159553f, 0.698048f },
	{ 0.07744399f, -0.962588f, -0.259667f },
	{ 0.14045f, -0.126158f, -0.982017f },
	{ 0.636117f, -0.7711419f, 0.026353f },
	{ 0.61615f, 0.01916f, -0.787396f },
	{ -0.420776f, -0.8492309f, 0.318989f },
	{ -0.555748f, 0.038204f, -0.830472f },
	{ -0.313674f, -0.210343f, 0.92594f },
	{ -0.388487f, 0.918131f, -0.07819299f },
	{ 0.306555f, -0.261762f, 0.915153f },
	{ 0.402451f, 0.91371f, -0.056272f },
	{ 0, -0.630498f, 0.776191f },
	{ 0.309478f, -0.082615f, 0.947311f },
	{ 0.970291f, -0.143381f, 0.194877f },
	{ 0.662483f, 0.572356f, -0.483244f },
	{ 0.497195f, -0.807556f, -0.317253f },
	{ 0.428251f, -0.326178f, -0.842739f },
	{ -0.496907f, -0.80093f, -0.334059f },
	{ -0.419584f, -0.308353f, -0.853737f },
	{ -0.970637f, -0.150956f, 0.187286f },
	{ -0.659323f, 0.566248f, -0.494628f },
	{ -0.49444f, 0.476056f, 0.727254f },
	{ -0.450474f, 0.818697f, 0.356103f },
	{ 0.489569f, 0.493533f, 0.718851f },
	{ 0.436617f, 0.833648f, 0.338226f },
	{ 0.619287f, -0.492932f, 0.611148f },
	{ 0.312068f, -0.908422f, 0.278179f },
	{ -0.312067f, -0.908422f, 0.278179f },
	{ -0.619285f, -0.492933f, 0.611149f },
	{ -0.309477f, -0.08261599f, 0.947311f }
};

NJS_MODEL_SADX attach_0013213C = { vertex_00131CA4, normal_00131EF0, LengthOfArray<Sint32>(vertex_00131CA4), meshlist_00131BE4, matlist_001317D0, LengthOfArray<Uint16>(meshlist_00131BE4), LengthOfArray<Uint16>(matlist_001317D0),{ 0.100025f, -124.3f, 160.6998f }, 208.2481f, NULL };

NJS_OBJECT Patrol_Light = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013213C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &Patrol_Prop };

NJS_MATERIAL matlist_00132198[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 104, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 112, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 99, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 16, NJD_D_025 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | 0x1 },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 100, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 105, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 111, NJD_D_025 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | 0x1 },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 107, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 3, NJD_D_025 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | 0x1 },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 11, 13, NJD_D_025 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | 0x1 }
};

Sint16 poly_00132274[] = {
	4, 1, 7, 2, 6,
	4, 5, 9, 4, 8,
	4, 5, 4, 2, 1,
	4, 10, 13, 1, 7,
	4, 14, 12, 8, 4
};

Sint16 poly_001322A6[] = {
	3, 6, 7, 21,
	4, 20, 18, 19, 11,
	4, 20, 19, 21, 22,
	3, 18, 20, 21,
	3, 11, 22, 19,
	0x8000u | 7, 6, 0, 21, 3, 22, 9, 8
};

Sint16 poly_001322E2[] = {
	3, 10, 15, 12,
	3, 10, 1, 15,
	3, 21, 17, 18,
	3, 4, 12, 15,
	3, 21, 7, 17,
	3, 1, 4, 15,
	3, 8, 22, 16,
	3, 11, 14, 16,
	3, 14, 8, 16,
	4, 18, 17, 13, 7,
	3, 11, 16, 22,
	3, 32, 47, 34,
	3, 37, 36, 48,
	3, 65, 70, 72,
	3, 72, 68, 73,
	3, 83, 81, 76,
	3, 84, 79, 83
};

Sint16 poly_0013236C[] = {
	0x8000u | 6, 12, 10, 14, 13, 11, 18
};

Sint16 poly_0013237A[] = {
	4, 25, 24, 30, 23,
	4, 28, 25, 29, 30,
	4, 27, 28, 26, 29,
	4, 24, 27, 23, 26,
	4, 28, 27, 25, 24
};

Sint16 poly_001323AC[] = {
	3, 46, 33, 31,
	3, 45, 32, 33,
	3, 47, 32, 45,
	3, 48, 39, 37,
	3, 39, 40, 38,
	3, 38, 40, 31,
	4, 40, 44, 31, 46,
	3, 38, 37, 39,
	3, 33, 46, 45
};

Sint16 poly_001323F6[] = {
	3, 41, 48, 42,
	0x8000u | 6, 45, 47, 43, 41, 39, 48,
	3, 41, 42, 47,
	0x8000u | 6, 39, 40, 43, 44, 45, 46
};

Sint16 poly_00132422[] = {
	6, 48, 36, 42, 35, 47, 34,
	4, 35, 33, 34, 32,
	4, 38, 31, 35, 33,
	4, 36, 37, 35, 38,
	3, 64, 73, 67,
	3, 72, 63, 65,
	6, 72, 73, 63, 64, 65, 69,
	3, 67, 73, 68,
	3, 70, 65, 69,
	3, 75, 76, 80,
	0x8000u | 5, 76, 74, 75, 84, 78,
	3, 76, 74, 83,
	3, 83, 74, 84,
	3, 79, 84, 78,
	3, 80, 76, 81
};

Sint16 poly_001324B0[] = {
	3, 50, 56, 52,
	4, 57, 53, 56, 52,
	4, 54, 62, 59, 58,
	3, 51, 59, 58,
	0x8000u | 6, 56, 57, 60, 61, 58, 62,
	3, 51, 58, 60,
	4, 50, 55, 49, 51,
	4, 51, 55, 59, 54,
	4, 50, 52, 55, 53,
	0x8000u | 5, 51, 49, 60, 50, 56
};

Sint16 poly_00132514[] = {
	5, 66, 69, 71, 64, 67,
	3, 67, 66, 71,
	0x8000u | 5, 69, 70, 66, 68, 67,
	3, 80, 77, 82,
	5, 77, 78, 82, 75, 80,
	0x8000u | 5, 78, 79, 77, 81, 80
};

Sint16 poly_00132554[] = {
	3, 72, 70, 68,
	3, 79, 81, 83
};

NJS_TEX uv_00132564[] = {
	{ 249, 253 },
	{ 1, 253 },
	{ 249, 5 },
	{ 1, 5 },
	{ 1, 5 },
	{ 249, 5 },
	{ 1, 253 },
	{ 249, 253 },
	{ 249, 5 },
	{ 249, 253 },
	{ 1, 5 },
	{ 1, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 1, 253 },
	{ 249, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 1, 253 },
	{ 249, 253 }
};

NJS_TEX uv_001325B4[] = {
	{ 0, 1 },
	{ 0, 254 },
	{ 80, 254 },
	{ 159, 159 },
	{ 95, 159 },
	{ 159, 147 },
	{ 95, 147 },
	{ 159, 159 },
	{ 95, 159 },
	{ 159, 240 },
	{ 95, 240 },
	{ 95, 147 },
	{ 159, 147 },
	{ 159, 159 },
	{ 95, 147 },
	{ 159, 147 },
	{ 159, 159 },
	{ 0, 1 },
	{ 16, 2 },
	{ 80, 254 },
	{ 234, 2 },
	{ 165, 254 },
	{ 252, 2 },
	{ 252, 254 }
};

NJS_TEX uv_00132614[] = {
	{ 127, 253 },
	{ 249, 5 },
	{ 249, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 249, 5 },
	{ 127, 253 },
	{ 1, 5 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 249, 253 },
	{ 127, 253 },
	{ 249, 5 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 249, 253 },
	{ 127, 253 },
	{ 249, 5 },
	{ 1, 5 },
	{ 249, 5 },
	{ 127, 253 },
	{ 1, 5 },
	{ 249, 253 },
	{ 249, 17 },
	{ 131, 253 },
	{ 1, 253 },
	{ 119, 253 },
	{ 1, 17 },
	{ 115, 253 },
	{ 1, 253 },
	{ 1, 17 },
	{ 115, 253 },
	{ 1, 253 },
	{ 1, 17 },
	{ 1, 17 },
	{ 1, 253 },
	{ 115, 253 },
	{ 1, 17 },
	{ 1, 253 },
	{ 115, 253 }
};

NJS_TEX uv_001326E4[] = {
	{ 194, 5 },
	{ 56, 5 },
	{ 249, 194 },
	{ 1, 194 },
	{ 187, 254 },
	{ 62, 254 }
};

NJS_TEX uv_001326FC[] = {
	{ 194, 5 },
	{ 25, 5 },
	{ 249, 253 },
	{ 1, 253 },
	{ 221, 5 },
	{ 186, 5 },
	{ 249, 253 },
	{ 154, 253 },
	{ 194, 5 },
	{ 25, 5 },
	{ 249, 253 },
	{ 1, 253 },
	{ 221, 5 },
	{ 186, 5 },
	{ 249, 253 },
	{ 154, 253 },
	{ 249, 92 },
	{ 1, 92 },
	{ 249, 162 },
	{ 1, 162 }
};

NJS_TEX uv_0013274C[] = {
	{ 1, 127 },
	{ 151, 5 },
	{ 1, 5 },
	{ 154, 5 },
	{ 182, 5 },
	{ 135, 253 },
	{ 249, 33 },
	{ 135, 253 },
	{ 205, 33 },
	{ 249, 33 },
	{ 205, 33 },
	{ 135, 253 },
	{ 205, 33 },
	{ 182, 5 },
	{ 135, 253 },
	{ 151, 5 },
	{ 1, 127 },
	{ 1, 5 },
	{ 151, 5 },
	{ 249, 5 },
	{ 249, 166 },
	{ 151, 5 },
	{ 135, 253 },
	{ 154, 5 },
	{ 182, 5 },
	{ 135, 253 },
	{ 205, 33 },
	{ 182, 5 }
};

NJS_TEX uv_001327BC[] = {
	{ 119, 181 },
	{ 3, 251 },
	{ 3, 181 },
	{ 243, 104 },
	{ 243, 181 },
	{ 119, 104 },
	{ 119, 181 },
	{ 3, 104 },
	{ 3, 181 },
	{ 119, 181 },
	{ 243, 181 },
	{ 243, 251 },
	{ 3, 104 },
	{ 3, 11 },
	{ 119, 104 },
	{ 119, 11 },
	{ 243, 104 },
	{ 243, 11 }
};

NJS_TEX uv_00132804[] = {
	{ 0, 230 },
	{ 0, 78 },
	{ 125, 230 },
	{ 125, 78 },
	{ 0, 230 },
	{ 0, 78 },
	{ 34, 178 },
	{ 62, 220 },
	{ 62, 149 },
	{ 125, 220 },
	{ 125, 135 },
	{ 62, 149 },
	{ 190, 149 },
	{ 125, 220 },
	{ 190, 149 },
	{ 125, 220 },
	{ 216, 176 },
	{ 188, 220 },
	{ 54, 121 },
	{ 0, 230 },
	{ 0, 153 },
	{ 252, 121 },
	{ 54, 121 },
	{ 0, 230 },
	{ 54, 121 },
	{ 0, 230 },
	{ 252, 121 },
	{ 54, 121 },
	{ 0, 230 },
	{ 0, 155 },
	{ 0, 153 },
	{ 0, 121 },
	{ 54, 121 },
	{ 54, 121 },
	{ 0, 121 },
	{ 0, 153 },
	{ 54, 121 },
	{ 0, 230 },
	{ 0, 155 },
	{ 0, 230 },
	{ 252, 121 },
	{ 54, 121 },
	{ 0, 230 },
	{ 0, 153 },
	{ 0, 230 },
	{ 54, 121 },
	{ 252, 121 },
	{ 54, 121 },
	{ 252, 121 },
	{ 0, 230 },
	{ 54, 121 },
	{ 0, 121 },
	{ 0, 153 },
	{ 0, 153 },
	{ 0, 121 },
	{ 54, 121 }
};

NJS_TEX uv_001328E4[] = {
	{ 107, 198 },
	{ 123, 253 },
	{ 139, 198 },
	{ 96, 253 },
	{ 64, 253 },
	{ 96, 198 },
	{ 64, 198 },
	{ 96, 253 },
	{ 64, 253 },
	{ 96, 198 },
	{ 64, 198 },
	{ 107, 198 },
	{ 139, 198 },
	{ 123, 253 },
	{ 60, 198 },
	{ 60, 253 },
	{ 123, 198 },
	{ 123, 253 },
	{ 60, 198 },
	{ 60, 253 },
	{ 123, 253 },
	{ 1, 253 },
	{ 29, 198 },
	{ 76, 198 },
	{ 127, 84 },
	{ 127, 253 },
	{ 76, 198 },
	{ 75, 197 },
	{ 125, 83 },
	{ 0, 83 },
	{ 0, 3 },
	{ 75, 197 },
	{ 0, 83 },
	{ 125, 83 },
	{ 0, 3 },
	{ 123, 253 },
	{ 76, 198 },
	{ 29, 198 },
	{ 123, 253 },
	{ 1, 253 }
};

NJS_TEX uv_00132984[] = {
	{ 0, 131 },
	{ 171, 255 },
	{ 138, 131 },
	{ 247, 131 },
	{ 171, 7 },
	{ 171, 7 },
	{ 0, 131 },
	{ 138, 131 },
	{ 243, 251 },
	{ 173, 251 },
	{ 119, 11 },
	{ 81, 251 },
	{ 3, 251 },
	{ 171, 255 },
	{ 0, 131 },
	{ 138, 131 },
	{ 0, 131 },
	{ 171, 7 },
	{ 138, 131 },
	{ 247, 131 },
	{ 171, 255 },
	{ 3, 251 },
	{ 81, 251 },
	{ 119, 11 },
	{ 173, 251 },
	{ 243, 251 }
};

NJS_TEX uv_001329EC[] = {
	{ 1, 127 },
	{ 241, 253 },
	{ 241, 9 },
	{ 241, 9 },
	{ 241, 253 },
	{ 1, 127 }
};

NJS_MESHSET_SADX meshlist_00132A04[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00132274, NULL, NULL, NULL, uv_00132564, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_001322A6, NULL, NULL, NULL, uv_001325B4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 17, poly_001322E2, NULL, NULL, NULL, uv_00132614, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0013236C, NULL, NULL, NULL, uv_001326E4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_0013237A, NULL, NULL, NULL, uv_001326FC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 9, poly_001323AC, NULL, NULL, NULL, uv_0013274C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_001323F6, NULL, NULL, NULL, uv_001327BC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 15, poly_00132422, NULL, NULL, NULL, uv_00132804, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 10, poly_001324B0, NULL, NULL, NULL, uv_001328E4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 6, poly_00132514, NULL, NULL, NULL, uv_00132984, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 2, poly_00132554, NULL, NULL, NULL, uv_001329EC, NULL }
};

NJS_VECTOR vertex_00132B0C[] = {
	{ -2.999991f, 1.9f, 0.999999f },
	{ -0.999991f, 5.1f, -19.99999f },
	{ -1.999991f, 9.9f, 0.999999f },
	{ 3.000009f, 1.9f, 0.999999f },
	{ 1.000009f, 5.1f, -19.99999f },
	{ 2.000009f, 9.9f, 0.999999f },
	{ -4.999991f, 4.9f, 0.999999f },
	{ -1.999991f, 3.339904f, -19.99997f },
	{ 2.000009f, 3.339904f, -19.99997f },
	{ 5.000009f, 4.9f, 0.999999f },
	{ -0.999991f, 5.1f, -35.49998f },
	{ 1.000009f, 1.099999f, -35.49998f },
	{ 1.000009f, 5.1f, -35.49998f },
	{ -1.999991f, 2.1f, -37 },
	{ 2.025745f, 2.089352f, -36.99636f },
	{ 0.000008999999f, 13.6f, -45.50001f },
	{ 10.00001f, -2.900001f, -41.00001f },
	{ -9.99999f, -2.900001f, -41.00001f },
	{ -0.999991f, 1.099999f, -35.49998f },
	{ 1.000009f, 0.099998f, -35.49998f },
	{ -0.999991f, 0.099998f, -35.49998f },
	{ -0.999991f, 1.099999f, -25.49998f },
	{ 1.000009f, 1.099999f, -25.49998f },
	{ -1.500013f, 8.7f, -3.000003f },
	{ -0.500012f, 14.5f, -1.500003f },
	{ -0.500012f, 14.5f, 1.999997f },
	{ 1.499987f, 8.7f, -3.000003f },
	{ 0.499988f, 14.5f, -1.500003f },
	{ 0.499988f, 14.5f, 1.999997f },
	{ 1.499988f, 9.000475f, 1.999319f },
	{ -1.500012f, 9.000475f, 1.999319f },
	{ -0.00012f, 10.4f, 0.999995f },
	{ 5.999988f, 5.899999f, 0.999995f },
	{ 3.999988f, 9.4f, 0.999995f },
	{ 5.499988f, 2.399999f, 0.999995f },
	{ -0.00012f, 0.899999f, 0.999995f },
	{ -5.500012f, 2.399999f, 0.999995f },
	{ -6.000012f, 5.899999f, 0.999995f },
	{ -4.000012f, 9.4f, 0.999995f },
	{ -4.000012f, 6.899999f, 16.99999f },
	{ -2.500012f, 9.4f, 13.49999f },
	{ -0.00012f, 0.899999f, 25.99999f },
	{ -0.00012f, 0.899999f, 20.49999f },
	{ -0.00012f, 6.899999f, 21.99999f },
	{ -0.00012f, 9.4f, 15.49999f },
	{ 3.999988f, 6.899999f, 16.99999f },
	{ 2.499988f, 9.4f, 13.49999f },
	{ 4.499988f, 2.399999f, 20.49999f },
	{ -4.500012f, 2.399999f, 20.49999f },
	{ -0.00012f, -2.099999f, 9.999992f },
	{ 1.999988f, -1.099999f, 9.999992f },
	{ -2.000012f, -1.099999f, 9.999992f },
	{ 4.999988f, 0.900001f, 9.999992f },
	{ 4.999988f, 2.3f, 9.999992f },
	{ -5.000012f, 2.3f, 9.999992f },
	{ -0.00012f, 0.900001f, 19.99999f },
	{ 3.499621f, 0.7946489f, 3.867915f },
	{ 3.787964f, 1.900001f, 3.428594f },
	{ -3.499645f, 0.7946489f, 3.867916f },
	{ -5.000012f, 0.900001f, 9.999992f },
	{ -0.00012f, -0.205351f, 1.659297f },
	{ -0.00012f, 0.900001f, 1.038002f },
	{ -3.787988f, 1.900001f, 3.428594f },
	{ -4.700001f, 3.899999f, 18.5f },
	{ -7.5f, 3.899999f, 9 },
	{ -10, -2.100001f, -12.5f },
	{ -16.6f, 3.899999f, -12 },
	{ -9.000001f, 5.899999f, -1.5f },
	{ -9, 4.899999f, -1.5f },
	{ -9.000001f, 1.899999f, -1.5f },
	{ -9, 2.899999f, -1.5f },
	{ -12.5f, 3.899999f, 3 },
	{ -4.5f, 3.899999f, 2 },
	{ -10, 9.9f, -12.5f },
	{ 4.699996f, 3.899999f, 18.5f },
	{ 7.499997f, 3.899999f, 9.000002f },
	{ 10, -2.100001f, -12.5f },
	{ 16.6f, 3.899999f, -12 },
	{ 9, 5.899999f, -1.499997f },
	{ 8.999998f, 4.899999f, -1.499997f },
	{ 9, 1.899999f, -1.499997f },
	{ 8.999998f, 2.899999f, -1.499997f },
	{ 12.5f, 3.899999f, 3.000003f },
	{ 4.499999f, 3.899999f, 2.000001f },
	{ 10, 9.9f, -12.5f }
};

NJS_VECTOR normal_00132F08[] = {
	{ -0.492945f, -0.869992f, -0.010939f },
	{ -0.580802f, 0.813626f, -0.026126f },
	{ -0.466481f, 0.857209f, -0.218147f },
	{ 0.492945f, -0.869992f, -0.010939f },
	{ 0.578313f, 0.815111f, -0.033893f },
	{ 0.466481f, 0.857209f, -0.218147f },
	{ -0.9923469f, 0.007044f, -0.123283f },
	{ -0.984063f, 0.160276f, -0.077015f },
	{ 0.982987f, 0.163053f, -0.084562f },
	{ 0.9923469f, 0.007044f, -0.123283f },
	{ -0.84188f, 0.148843f, -0.518733f },
	{ 0.029041f, -0.766304f, -0.641821f },
	{ 0.835214f, 0.152662f, -0.5283099f },
	{ -0.226051f, 0.284023f, -0.93179f },
	{ 0.221557f, 0.288354f, -0.931539f },
	{ 0, 0.509663f, -0.860374f },
	{ 0.636558f, -0.355761f, -0.684272f },
	{ -0.6367649f, -0.355767f, -0.684076f },
	{ -0.027658f, -0.7666889f, -0.641423f },
	{ 0.572289f, -0.6080289f, -0.550259f },
	{ -0.572289f, -0.6080289f, -0.550259f },
	{ -0.10651f, -0.980962f, 0.162388f },
	{ 0.10651f, -0.980962f, 0.162388f },
	{ -0.641334f, 0.298363f, -0.706874f },
	{ -0.527981f, 0.687243f, -0.498932f },
	{ -0.5195529f, 0.622524f, 0.585259f },
	{ 0.642848f, 0.293788f, -0.707414f },
	{ 0.529991f, 0.684907f, -0.500012f },
	{ 0.521301f, 0.61982f, 0.5865729f },
	{ 0.7516699f, 0.130714f, 0.646457f },
	{ -0.750753f, 0.136433f, 0.64634f },
	{ 0, 0.765837f, -0.643035f },
	{ 0.774393f, 0.154409f, -0.613574f },
	{ 0.490013f, 0.627054f, -0.60555f },
	{ 0.611789f, -0.527578f, -0.589387f },
	{ 0, -0.7604899f, -0.64935f },
	{ -0.611789f, -0.527578f, -0.589387f },
	{ -0.774393f, 0.154409f, -0.613574f },
	{ -0.490013f, 0.627054f, -0.60555f },
	{ -0.758981f, 0.580046f, 0.295794f },
	{ -0.452434f, 0.879722f, 0.146263f },
	{ 0, -0.324285f, 0.945959f },
	{ 0, -0.999994f, 0.003526f },
	{ 0.011346f, 0.758634f, 0.651418f },
	{ 0.025527f, 0.953375f, 0.300705f },
	{ 0.772681f, 0.551755f, 0.313896f },
	{ 0.469558f, 0.86801f, 0.161471f },
	{ 0.858999f, -0.324697f, 0.395845f },
	{ -0.858999f, -0.324697f, 0.395845f },
	{ 0, -0.999494f, 0.031809f },
	{ 0.491723f, -0.86937f, 0.049042f },
	{ -0.491723f, -0.86937f, 0.049042f },
	{ 0.85027f, -0.5143459f, 0.111753f },
	{ 0.976007f, -0.172975f, 0.132247f },
	{ -0.9929309f, 0, 0.11869f },
	{ 0, -0.914062f, 0.405574f },
	{ 0.684007f, -0.626026f, -0.374468f },
	{ 0.78694f, -0.382198f, -0.484408f },
	{ -0.73378f, -0.551717f, -0.396453f },
	{ -0.89669f, -0.4292f, 0.108323f },
	{ 0.000555f, -0.773161f, -0.634209f },
	{ 0.000893f, -0.504017f, -0.863694f },
	{ -0.831812f, -0.23672f, -0.5020469f },
	{ 0.147235f, 0, 0.989101f },
	{ -0.951428f, 0, 0.307871f },
	{ -0.184866f, -0.321112f, -0.928823f },
	{ -0.484496f, 0, -0.8747939f },
	{ -0.810066f, 0.584415f, 0.047458f },
	{ 0.506616f, -0.413807f, -0.756376f },
	{ -0.810066f, -0.584415f, 0.047458f },
	{ 0.506616f, 0.413807f, -0.756376f },
	{ -0.86435f, 0, 0.50289f },
	{ 0.986204f, 0, -0.165533f },
	{ -0.184877f, 0.321108f, -0.928822f },
	{ -0.147239f, 0, 0.989101f },
	{ 0.951428f, 0, 0.307871f },
	{ 0.184882f, -0.321111f, -0.92882f },
	{ 0.484483f, -0.00001f, -0.874801f },
	{ 0.810066f, 0.584415f, 0.047458f },
	{ -0.506616f, -0.413807f, -0.756376f },
	{ 0.810066f, -0.584415f, 0.047458f },
	{ -0.506616f, 0.413807f, -0.756376f },
	{ 0.86435f, 0, 0.5028909f },
	{ -0.986204f, 0, -0.165533f },
	{ 0.18487f, 0.321115f, -0.928821f }
};

NJS_MODEL_SADX attach_00133304 = { vertex_00132B0C, normal_00132F08, LengthOfArray<Sint32>(vertex_00132B0C), meshlist_00132A04, matlist_00132198, LengthOfArray<Uint16>(meshlist_00132A04), LengthOfArray<Uint16>(matlist_00132198),{ 0.000001f, 5.800001f, -9.75001f }, 39.41602f, NULL };

NJS_OBJECT Patrol_Body = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00133304, 0, 0, 0, 0, 0, 0, 1, 1, 1, &Patrol_Light, NULL };



//animations

//Propellor's rotation
NJS_MKEY_A Action_PatrolROT1[] = {
	{ 0, 0, 0, 0 },
	{ 5, 0, 0x8000, 0 },
	{ 10, 0, 0, 0 },
	{ 15, 0, 0x8000, 0 },
	{ 20, 0, 0, 0 },
	{ 25, 0, 0x8000, 0 },
	{ 30, 0, 0, 0 },
	{ 35, 0, 0x8000, 0 },
	{ 40, 0, 0, 0 },
	{ 45, 0, 0x8000, 0 },
	{ 50, 0, 0, 0 },
	{ 55, 0, 0x8000, 0 },
	{ 60, 0, 0, 0 },
	{ 65, 0, 0x8000, 0 },
	{ 70, 0, 0, 0 },
	{ 75, 0, 0x8000, 0 },
	{ 80, 0, 0, 0 },
	{ 85, 0, 0x8000, 0 },
	{ 90, 0, 0, 0 },
	{ 95, 0, 0x8000, 0 },
	{ 100, 0, 0, 0 },
	{ 105, 0, 0x8000, 0 },
	{ 110, 0, 0, 0 },
	{ 115, 0, 0x8000, 0 },
	{ 120, 0, 0, 0 },
	{ 125, 0, 0x8000, 0 },
	{ 130, 0, 0, 0 },
	{ 135, 0, 0x8000, 0 },
	{ 140, 0, 0, 0 },
	{ 145, 0, 0x8000, 0 },
	{ 150, 0, 0, 0 },
	{ 155, 0, 0x8000, 0 },
	{ 160, 0, 0, 0 },
	{ 165, 0, 0x8000, 0 },
	{ 170, 0, 0, 0 },
	{ 175, 0, 0x8000, 0 },
	{ 180, 0, 0, 0 },
	{ 185, 0, 0x8000, 0 },
	{ 190, 0, 0, 0 },
	{ 195, 0, 0x8000, 0 },
	{ 200, 0, 0, 0 },
	{ 210, 0, 0x8000, 0 },
	{ 215, 0, 0, 0 },
	{ 220, 0, 0x8000, 0 },
	{ 225, 0, 0, 0 },
	{ 230, 0, 0x8000, 0 },
	{ 235, 0, 0, 0 },
	{ 240, 0, 0x8000, 0 },
	{ 245, 0, 0, 0 },
	{ 250, 0, 0x8000, 0 },
	{ 255, 0, 0, 0 },
	{ 260, 0, 0x8000, 0 },
	{ 265, 0, 0, 0 },
	{ 270, 0, 0x8000, 0 },
	{ 275, 0, 0, 0 },
	{ 280, 0, 0x8000, 0 },
	{ 285, 0, 0, 0 },
	{ 290, 0, 0x8000, 0 },
	{ 295, 0, 0, 0 },
	{ 300, 0, 0x8000, 0 },
	{ 305, 0, 0, 0 },
	{ 310, 0, 0x8000, 0 },
	{ 315, 0, 0, 0 },
	{ 320, 0, 0x8000, 0 },
	{ 325, 0, 0, 0 },
	{ 330, 0, 0x8000, 0 },
	{ 335, 0, 0, 0 },
	{ 340, 0, 0x8000, 0 },
	{ 345, 0, 0, 0 },
	{ 350, 0, 0x8000, 0 },
	{ 355, 0, 0, 0 },
	{ 360, 0, 0x8000, 0 },
	{ 365, 0, 0, 0 },
	{ 370, 0, 0x8000, 0 },
	{ 375, 0, 0, 0 },
	{ 380, 0, 0x8000, 0 },
	{ 385, 0, 0, 0 },
	{ 390, 0, 0x8000, 0 },
	{ 395, 0, 0, 0 },
	{ 400, 0, 0x8000, 0 },
	{ 405, 0, 0, 0 },
	{ 410, 0, 0x8000, 0 },
	{ 415, 0, 0, 0 },
	{ 420, 0, 0x8000, 0 },
	{ 425, 0, 0, 0 },
	{ 430, 0, 0x8000, 0 },
	{ 435, 0, 0, 0 },
	{ 440, 0, 0x8000, 0 }
};

//Turning around after moving far enough
NJS_MKEY_A Action_PatrolROT2[] = {
	{ 0, 0, 0, 0 },
	{ 180, 0, 0x1000, 0 },
	{ 190, 0, 0x4000, 0 },
	{ 200, 0, 0x8000, 0 },
	{ 400, 0, 0x8000, 0 },
	{ 410, 0, 0x4000, 0 },
	{ 420, 0, 0x1000, 0 },
	{ 440, 0, 0, 0 }
};

//Making the searchlight move back and forth
NJS_MKEY_A Action_PatrolROT3[] = {
	{ 0, 0, 0, 0 },
	{ 50, 0, -0x2000, 0 },
	{ 100, 0, 0, 0 },
	{ 150, 0, 0x2000, 0 },
	{ 200, 0, 0, 0 },
	{ 250, 0, -0x2000, 0 },
	{ 300, 0, 0, 0 },
	{ 350, 0, 0x2000, 0 },
	{ 400, 0, 0, 0 },
	{ 440, 0, 0, 0 }
};

//moving the whole thing
NJS_MKEY_F Action_PatrolMOV2[] = {
	{ 0, 0, 0, 0 },
	{ 5, 0, 0, 10 },
	{ 10, 0, 0, 30 },
	{ 20, 0, 0, 60 },
	{ 40, 0, 0, 100 },
	{ 60, 0, 0, 200 },
	{ 80, 0, 0, 300 },
	{ 100, 0, 0, 400 },
	{ 120, 0, 0, 500 },
	{ 140, 0, 0, 600 },
	{ 160, 0, 0, 700 },
	{ 180, 0, 0, 750 },
	{ 200, 0, 0, 800 },
	{ 220, 0, 0, 810 },
	{ 240, 0, 0, 800 },
	{ 260, 0, 0, 750 },
	{ 280, 0, 0, 700 },
	{ 300, 0, 0, 600 },
	{ 320, 0, 0, 500 },
	{ 340, 0, 0, 400 },
	{ 360, 0, 0, 300 },
	{ 380, 0, 0, 200 },
	{ 400, 0, 0, 100 },
	{ 420, 0, 0, 60 },
	{ 430, 0, 0, 30 },
	{ 435, 0, 0, 10 },
	{ 440, 0, 0, 0 },
};

NJS_MDATA2 Action_Patrol_mdat[] = {
	{ Action_PatrolMOV2, Action_PatrolROT2, LengthOfArray<Uint32>(Action_PatrolMOV2), LengthOfArray<Uint32>(Action_PatrolROT2) },
	{ NULL, Action_PatrolROT3, 0, LengthOfArray<Uint32>(Action_PatrolROT3) },
	{ NULL, Action_PatrolROT1, 0, LengthOfArray<Uint32>(Action_PatrolROT1) }
};

NJS_MOTION Action_Patrol = { Action_Patrol_mdat, 441, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_Patrol = { &Patrol_Body, &Action_Patrol }; //custom animation for partol copter, since it has no coding in the final



NJS_MATERIAL matlist_00112710[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00112724[] = {
	22, 2, 3, 1, 0, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 18, 19, 21, 20
};

NJS_TEX uv_00112758[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 229 },
	{ 255, 229 },
	{ 0, 204 },
	{ 255, 204 },
	{ 0, 178 },
	{ 255, 178 },
	{ 0, 153 },
	{ 255, 153 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0, 102 },
	{ 255, 102 },
	{ 0, 76 },
	{ 255, 76 },
	{ 0, 51 },
	{ 255, 51 },
	{ 0, 25 },
	{ 255, 25 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001127B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00112724, NULL, NULL, NULL, uv_00112758, NULL }
};

NJS_VECTOR vertex_001127D0[] = {
	{ 36.18997f, -15.76906f, -0.00001f },
	{ -36.18997f, -15.76906f, -0.00001f },
	{ -36.18997f, -19.71133f, -0.00001f },
	{ 36.18997f, -19.71133f, -0.00001f },
	{ 36.18997f, -11.8268f, -0.00001f },
	{ -36.18997f, -11.8268f, -0.00001f },
	{ 36.18997f, -7.884532f, 0 },
	{ -36.18997f, -7.884532f, 0 },
	{ 36.18997f, -3.942266f, 0 },
	{ -36.18997f, -3.942266f, 0 },
	{ 36.18997f, 0, 0 },
	{ -36.18997f, 0, 0 },
	{ 36.18997f, 3.942266f, 0 },
	{ -36.18997f, 3.942266f, 0 },
	{ 36.18997f, 7.884531f, 0 },
	{ -36.18997f, 7.884531f, 0 },
	{ 36.18997f, 11.8268f, 0.000001f },
	{ -36.18997f, 11.8268f, 0.000001f },
	{ -36.18997f, 15.76906f, 0.000001f },
	{ 36.18997f, 15.76906f, 0.000001f },
	{ 36.18997f, 19.71133f, 0.000001f },
	{ -36.18997f, 19.71133f, 0.000001f }
};

NJS_VECTOR normal_001128D8[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_001129E0 = { vertex_001127D0, normal_001128D8, LengthOfArray<Sint32>(vertex_001127D0), meshlist_001127B0, matlist_00112710, LengthOfArray<Uint16>(meshlist_001127B0), LengthOfArray<Uint16>(matlist_00112710), { 0 }, 36.18997f, NULL };

NJS_OBJECT object_GOODSign = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001129E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Unused GOOD! model

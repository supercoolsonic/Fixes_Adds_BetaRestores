// Fixes_Adds_BetaRestores : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>



//Objects
#include "ObjModels\Objects.h"


//Misc
#include "IniFile.hpp"

//Replacement Functions


//Config Variables

//Fixing Various Objects
static bool AnimTestThingie = true;
static bool JackleCard = true;
static bool DTargetRing = true;
static bool NightopianEggFix = true;
static bool NightRankCrystal = true;
static bool AokiSwitch = true;
static bool LostLight = true;
static bool AwningColor = true;
static bool WindyValleyLeaves = true;
static bool WindyValleyTornado = true;
static bool CutsceneFixes = true;
static bool BigBetaHotel = true;
static bool SkyDeckDrawDist = true;
static bool LevelClearPlus = true;
static bool StarJumpPanel = true;
static bool TGSModeActive = true;
static bool WaterBridge = true;
static bool AngelDoor = true;
static bool SPRActivate = true;
static bool LanderUse = true;
static bool AnimatePLUS = true;
static bool KnucklesAnimate = true;

//Voice Fixes and Additions
static bool FinalEggAnnouncer = true;
static bool PerfectChaos = true;
static bool SkyDeck3Announcer = true;
static bool BetaRematch = true;
static bool SkyDeck2Announcer = true;
static bool SkyDeck1Announcer = true;
static bool KnucklesNoRing = true;
static bool AmyNoRing = true;
static bool TailsNoRing = true;
static bool BigNoRing = true;
static bool BarrierLoss = true;
static bool WaterStuff = true;
static bool LightSpeed = true;
static bool TailsFlight = true;
static bool KnucklesHurt = true;
static bool AmyHurt = true;
static bool FishingFailed = true;
static bool FinalEggColorDoor = true;
static bool ItemVoices = true;
static bool BoatNoise = true;
static bool SkyChaseAlt = true;
static bool TailsTiredVoices = true;
static bool TailsRaceLines = true;
static bool HotShelterNoises = true;
static bool FinalEggAlarmer = true;
static bool TailsStoryPlus = true;
static bool LostWorldNoises = true;
static bool MysticRuinsJungleNightNoise = true;
static bool LostWorldPlantNoise = true;
static bool SnowmanSound = true;
static bool BigRanker = true;

//Chaos 0 objects
static bool Chaos0Plants = true;

//Egg Carrier Shit
static bool PatrolCopter = true;
static bool Lightning = true;
static bool GoodSign = true;


//Structs
struct ObjectThing
{
	ObjectFuncPtr func;
	int16_t list;
	int16_t field_A;
	Rotation3 Rotation;
	NJS_VECTOR Position;
	NJS_OBJECT* object;
};

//Additional SADX Variables
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);

FunctionPointer(void, SetStatus, (ObjectMaster *a1), 0x0049CD60);
FunctionPointer(void, DynCol_LoadObject, (ObjectMaster *a1), 0x0049E170);
FunctionPointer(void, sub_446AF0, (ObjectMaster *a1, int a2), 0x446AF0);

DataPointer(int, DroppedFrames, 0x03B1117C);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT *, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(int, rand1, (), 0x6443BF);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(float, CasinoCards, 0x07E5240);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
//3406088
FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);

//FunctionPointer(int, rand, (), 0x6443BF);
FunctionPointer(void, sub_4DDC10, (ObjectMaster *a1), 0x4DDC10);

FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);

FunctionPointer(void, sub_4B85C0, (ObjectMaster *a1), 0x4B85C0);

FunctionPointer(void, sub_5EA210, (int a1), 0x005EA210);


bool loadedPillar = false;
SETObjData MountainPillar = {};
SETObjData EmptyFiller = {};


FunctionPointer(void, j_DisableControl, (), 0x42F620);

FunctionPointer(void, sub_4303E0, (), 0x4303E0);
FunctionPointer(void, sub_42F630, (), 0x42F630);
FunctionPointer(void, sub_4314D0, (int a1), 0x4314D0);
FunctionPointer(void, sub_431780, (unsigned int index), 0x431780);
FunctionPointer(void, sub_42FC70, (ObjectMaster *a1, float a2, float a3, float a4), 0x42FC70);
FunctionPointer(void, sub_42FCD0, (ObjectMaster *a1, int a2, int a3, int a4), 0x42FCD0);
FunctionPointer(void, sub_42FE40, (ObjectMaster *a1), 0x42FE40);
FunctionPointer(void, sub_42FE00, (ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6), 0x42FE00);
FunctionPointer(void, sub_430D00, (char a1, int a2, float a3, float a4, float a5), 0x430D00); //Camera positionig subroutine for cutscenes.
FunctionPointer(void, sub_430C90, (char a1, int a2, int a3, int a4, int a5), 0x430C90);
FunctionPointer(void, sub_42FFD0, (int a1, int a2, int a3, int a4, int a5), 0x42FFD0);
FunctionPointer(void, sub_431670, (ObjectMaster **a1, float a2, float a3, float a4, int a5, int a6, int a7), 0x431670);
FunctionPointer(void, sub_42FD20, (ObjectMaster *a1, char a2), 0x42FD20);
FunctionPointer(void, sub_6ECA20, (int a1, int a2, int a3, int a4, int a5, int a6), 0x6ECA20);
FunctionPointer(void, sub_6F6380, (float a1, float a2, float a3, int a4, int a5, int a6, int a7), 0x6F6380);
FunctionPointer(void, sub_6F62D0, (float a1, float a2, float a3), 0x6F62D0);
FunctionPointer(void, sub_6F6320, (int a1, int a2, int a3), 0x6F6320);
FunctionPointer(void, sub_6F6290, (), 0x6F6290);
FunctionPointer(void, sub_6F6120, (int a1, int a2, int a3, int a4, int a5, int a6, signed int a7), 0x6F6120);
FunctionPointer(void, sub_6F5C80, (), 0x6F5C80);
FunctionPointer(void, sub_6F5C40, (int a1), 0x6F5C40);
FunctionPointer(void, sub_4310F0, (ObjectMaster *a1), 0x4310F0);
FunctionPointer(void, sub_4310D0, (ObjectMaster *a1, void *a2), 0x4310D0);
FunctionPointer(void, sub_431930, (int a1), 0x431930);
FunctionPointer(void, _ioterm_7, (), 0x6EBB00);
FunctionPointer(void, sub_6EC580, (int a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, signed int a14), 0x6EC580);
FunctionPointer(int, sub_431900, (), 0x431900);
FunctionPointer(int, sub_431810, (int a1), 0x431810);
FunctionPointer(EntityData1 *, sub_6F5C60, (int a1, int a2, int a3), 0x6F5C60);
FunctionPointer(EntityData1 *, sub_6F5C20, (), 0x6F5C20);
FunctionPointer(int, sub_430000, (int a1, int a2, int a3, int a4), 0x430000);
FunctionPointer(void, sub_42FBB0, (), 0x42FBB0);
FunctionPointer(void, sub_424240, (EntityData1 *a1), 0x424240);
FunctionPointer(void, sub_430E50, (), 0x430E50);
FunctionPointer(int, sub_430EE0, (char a1, int a2, ObjectMaster *a3, int a4, int a5, int a6, int a7), 0x430EE0);
FunctionPointer(void, sub_6EC2B0, (ObjectMaster *a1, float a2, float a3, float a4, float a5, float a6, float a7, signed int a8), 0x6EC2B0);
FunctionPointer(EntityData1 *, sub_6F5C00, (), 0x6F5C00);
FunctionPointer(Loop *, sub_6EDA20, (int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9), 0x6EDA20);
FunctionPointer(ObjectMaster *, sub_6EF480, (float a1, float a2, float a3, float a4, float a5), 0x6EF480);
FunctionPointer(void, sub_6ED9A0, (), 0x6ED9A0);
FunctionPointer(void, sub_6EF4C0, (ObjectMaster *a1, float a2), 0x6EF4C0);
FunctionPointer(void, sub_42FC50, (int *a1), 0x42FC50);
FunctionPointer(void, sub_6F5BE0, (), 0x6F5BE0);
FunctionPointer(int, sub_6F62A0, (), 0x6F62A0);
FunctionPointer(void, sub_6F62C0, (int a1), 0x6F62C0);
FunctionPointer(int, sub_6F62B0, (int a1), 0x6F62B0);
FunctionPointer(Sint32, sub_424FC0, (int a1, EntityData1 *a2, int a3, int a4, float x, float y, float z), 0x424FC0);
FunctionPointer(char, sub_4304B0, (), 0x4304B0);
FunctionPointer(void, sub_42FDE0, (unsigned __int8 a1), 0x42FDE0);
FunctionPointer(void, sub_6F6210, (), 0x6F6210);
FunctionPointer(signed int, sub_441A40, (unsigned __int8 playerNum, char a2, NJS_VECTOR *a3, NJS_VECTOR *a4), 0x441A40);
FunctionPointer(void, sub_43C550, (EntityData2 *a1, CharObj2 *a2), 0x43C550);

DataPointer(ObjectMaster *, dword_3C84044, 0x03C84044);
DataPointer(ObjectMaster *, dword_3C84048, 0x03C84048);
DataPointer(NJS_ACTION, dword_3C851B0, 0x03C851B0);
DataPointer(NJS_ACTION, off_2D0ADBC, 0x02D0ADBC);
DataPointer(NJS_ACTION, dword_3C851A8, 0x03C851A8);
DataPointer(NJS_ACTION, dword_3C85198, 0x03C85198);
DataPointer(void *, off_2BE0008, 0x02BE0008);
DataPointer(NJS_ACTION, dword_3C848F0, 0x03C848F0);
DataPointer(NJS_ACTION, off_2D06F6C, 0x02D06F6C);
DataPointer(NJS_ACTION, off_2D08DF4, 0x02D08DF4);
DataPointer(NJS_ACTION, off_8AC3F4, 0x08AC3F4);
DataPointer(NJS_ACTION, off_2D0AC0C, 0x02D0AC0C);
DataPointer(NJS_ACTION, off_2D23464, 0x02D23464);
DataPointer(NJS_ACTION, off_2D2356C, 0x02D2356C);
DataPointer(NJS_ACTION, stru_89E254, 0x089E254);
DataPointer(NJS_ACTION, dword_3C84F34, 0x03C84F34);
DataPointer(NJS_ACTION, dword_3C84898, 0x03C84898);

DataPointer(int, dword_3D0DB90, 0x03D0DB90);
DataPointer(int, dword_3D0DC00, 0x03D0DC00);
DataArray(_DWORD, dword_38E2020, 0x038E2020, 16);
DataPointer(int, dword_3D0DB94, 0x03D0DB94);
DataPointer(int, dword_3D0DB88, 0x03D0DB88);
DataArray(char, byte_3D0DBC0, 0x03D0DBC0, 0);
DataPointer(NJS_SPRITE, stru_3D0DB9C, 0x03D0DB9C);
DataPointer(D3DCOLORVALUE, stru_38E200C, 0x038E200C);

DataArray(ObjectListEntry, SkyDeckObjectList, 0x02230F20, 137);
DataArray(ObjectListEntry, EggCarrierExtObjectList, 0x010F3B80, 59);


struct SoundEntry
{
	int field_0;
	int field_4;
	void *PointerA;
	int field_C;
	int ID;
	int field_14;
	void *PointerB;
	int field_1C;
	int field_20;
	NJS_VECTOR origin;
	int field_30;
	int field_34;

};

struct LevelAndAct
{
	Uint8 Level;
	Uint8 Act;
};


DataArray(SoundEntry, SoundQueue, 0x3B292F8, 36);

DataArray(int, id_sounds, 0x111D480, 8);
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x0408530);
FunctionPointer(void, sub_780A50, (int a2, int a3, signed int a4), 0x0780A50);
FunctionPointer(void, sub_424920, (int a1, void *ptr, int a3, int a4, int a5, EntityData1 *a6), 0x0424920);

DataPointer(NJS_TEXLIST, CARDDISPSPRITEB_TEXLIST, 0x01D8B394, 10);

DataPointer(NJS_ACTION, UnusedEggNightopianACTION, 0x01DE18A4);

DataPointer(NJS_OBJECT, FinalEggDoorD, 0x01A033DC);
DataPointer(NJS_OBJECT, FinalEggDoorD2, 0x01A03A9C);
DataPointer(NJS_OBJECT, FinalEggDoorE, 0x01A04194);
DataPointer(NJS_OBJECT, FinalEggDoorE2, 0x01A04854);
DataPointer(NJS_OBJECT, FinalEggDoorF, 0x01A04F4C);
DataPointer(NJS_OBJECT, FinalEggDoorF2, 0x01A0560D);

DataArray(NJS_VECTOR, stru_217FF18, 0x217FF18, 74);
DataPointer(NJS_MODEL_SADX, stru_20304E4, 0x20304E4);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float scale), 0x407A00);
DataArray(char, byte_3C7ED8C, 0x3C7ED8C, 32);

FunctionPointer(void, sub_4145D0, (unsigned __int8 a1, unsigned __int8 a2), 0x04145D0);
FunctionPointer(void, PlaySoundEffectMaybe, (int ID, int a2, int a3, int a4, int duration, EntityData1 *source), 0x0424880);
FunctionPointer(void, sub_441DF0, (unsigned __int8 a1), 0x0441DF0);
DataPointer(float, SkyDeckHeight, 0x03C80610);
FunctionPointer(void, sub_5228A0, (ObjectMaster *a1), 0x005228A0);
DataArray(CollisionData, collision_JumpPanel, 0x97DF68, 4);

FunctionPointer(void, sub_53F0F0, (int a2), 0x53F0F0);
FunctionPointer(void, sub_53F200, (int a1), 0x53F200);

DataArray(AnimData, AmyAnimData, 0x3C54880, 102);
DataArray(AnimData, KnucklesAnimData, 0x3C532A0, 115);
DataArray(AnimData, E102AnimData, 0x3C53FA8, 91);

//TGS
DataArray(NJS_TEXLIST, TITLE_TEXLIST_S, 0x913BF8, 6);
DataPointer(NJS_TEXANIM, stru_9140E0, 0x09140E0);
DataArray(NJS_TEXLIST, LOADING_TEXLIST_S, 0x94A2B8, 3);
DataPointer(NJS_TEXANIM, stru_914568, 0x0914568);
DataArray(NJS_TEXLIST *, TGS_RULE_TEXLISTS_S, 0x914350, 6);
DataPointer(NJS_TEXANIM, stru_9143E0, 0x09143E0);
DataArray(float, dword_3B2C430, 0x03B2C430, 6);
DataArray(NJS_TEXLIST, TGS_CHRSEL_TEXLIST_1_S, 0x913D28, 12);
DataArray(NJS_TEXLIST, TGS_CHRSEL_TEXLIST_0_S, 0x913C90, 12);
DataPointer(NJS_TEXANIM, stru_914158, 0x0914158);
DataPointer(NJS_TEXANIM, stru_914368, 0x0914368);
DataPointer(float, dword_3B2C41C, 0x03B2C41C);
DataArray(NJS_TEXLIST, PRESSSTART_TEXLIST_S, 0x913A5C, 1);
DataPointer(NJS_TEXANIM, stru_914458, 0x0914458);
FunctionPointer(int, sub_503270, (), 0x503270);
FunctionPointer(void, sub_503450, (), 0x503450);
DataPointer(ObjectMaster *, dword_3C5E8D0, 0x03C5E8D0);
FunctionPointer(void, sub_40BF30, (), 0x40BF30);
DataArray(const char *, off_914338, 0x914338, 6);
DataPointer(int, TGS_CurrentMode, 0x03B2C428);
DataPointer(int, dword_3B2C404, 0x03B2C404);
FunctionPointer(void, sub_42E4E0, (), 0x42E4E0);
FunctionPointer(void, sub_42E480, (), 0x42E480);
FunctionPointer(void, sub_42DB40, (ObjectMaster *a1), 0x42DB40);
FunctionPointer(void, sub_42DC00, (ObjectMaster *a1), 0x42DC00);
FunctionPointer(char, sub_42DC10, (), 0x42DC10);
FunctionPointer(char, sub_414470, (unsigned __int16 a1), 0x414470);
FunctionPointer(void, sub_42DC90, (), 0x42DC90);
FunctionPointer(void, __setargv_0, (), 0x412AC0);
FunctionPointer(void, sub_413380, (__int16 a1), 0x413380);
FunctionPointer(void, sub_4133E0, (), 0x4133E0);
FunctionPointer(void, sub_42C820, (), 0x42C820);
FunctionPointer(void, sub_42DDE0, (), 0x42DDE0);
FunctionPointer(void, sub_42DE70, (), 0x42DE70);
FunctionPointer(void, sub_42E010, (), 0x42E010);
FunctionPointer(void, sub_42DF30, (), 0x42DF30);
FunctionPointer(void, sub_42DFE0, (), 0x42DFE0);
FunctionPointer(void, sub_412AD0, (), 0x412AD0);
DataPointer(int, dword_3B2C44C, 0x3B2C44C);
DataPointer(char, byte_3B2C451, 0x3B2C451);
DataPointer(int, dword_3B2C42C, 0x3B2C42C);
DataPointer(int, dword_9140C0, 0x9140C0);
DataPointer(int, dword_3B2C454, 0x3B2C454);
DataPointer(ObjectMaster *, dword_3B2C418, 0x3B2C418);
DataPointer(char, byte_3B2C424, 0x3B2C424);
DataPointer(char, byte_3B2C450, 0x3B2C450);
DataArray(int, dword_3B0E7E0, 0x3B0E7E0, 1000);
DataArray(__int16, word_9140D4, 0x9140D4, 6);
DataArray(__int16, word_91455C, 0x91455C, 1000);
DataArray(LevelAndAct, stru_914488, 0x914488, 76);
DataArray(int, HeldButtons_fix, 0x3B0E3A8, 9);
DataArray(int, advsongs_fix, 0x91446C, 7);
FunctionPointer(ObjectMaster *, InitializeSoundManager_fix, (), 0x4258B0);
DataArray(NJS_TEXLIST, stru_914708, 0x914708, 6);
DataPointer(char, byte_3B2C484, 0x3B2C484);
DataPointer(char, byte_3B2C485, 0x3B2C485);
FunctionPointer(void, sub_42F270, (ObjectMaster *a1), 0x42F270);
ThiscallFunctionPointer(void, sub_643EA7, (int a1), 0x643EA7);
DataArray(__int16, word_914698, 0x914698, 1000);
DataPointer(__int16, word_3B2C48C, 0x3B2C48C);
DataArray(char, byte_9145F9, 0x9145F9, 1000);
DataArray(char, byte_9145F8, 0x9145F8, 1000);
DataPointer(__int16, word_3B2C488, 0x3B2C488);


const char *const TGS_StageListRestore[] = { //from MainMemory
	"PRACTICE 1",
	"PRACTICE 2",
	"PRACTICE 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"BEACH 1",
	"BEACH 2",
	"BEACH 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"WINDY 1",
	"WINDY 2",
	"WINDY 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"TWINKLE 1",
	"TWINKLE 2",
	"TWINKLE 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"HIGHWAY",
	"BUILDING",
	"DOWN TOWN",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"MOUNTAIN 1",
	"MOUNTAIN 2",
	"MOUNTAIN 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"SKY DECK 1",
	"SKY DECK 2",
	"SKY DECK 3",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"RUIN 1",
	"RUIN 2",
	"RUIN 3",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"ICECAP 1",
	"ICECAP 2",
	"ICECAP 3",
	"ICECAP BIG",
	"NO",
	"NO",
	"NO",
	"NO",
	"CASINO 1",
	"CASINO 2",
	"CASINO 3",
	"CASINO 4",
	"NO",
	"NO",
	"NO",
	"NO",
	"FINAL 1",
	"FINAL 2",
	"FINAL 3",
	"FINAL 4",
	"FINAL 5",
	"FINAL 6",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"SHELTER 1",
	"SHELTER 2",
	"SHELTER 3",
	"SHELTER 4",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"CHAOS 0",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"CHAOS 2",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"CHAOS 4",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"CHAOS 6",
	"CHAOS 6 KN",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"CHAOS 7 1",
	"CHAOS 7 2",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"EGGMOBILE1",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"EGGMOBILE2",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"EGGMOBILE3",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"EGGMANROBO",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"E101",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"E101 R",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	NULL,
	NULL,
	NULL,
	"SD OFFICE",
	"SD CASINO",
	"SD GESUI",
	"SD STATION",
	"SD HOTEL",
	"SD TWINKLE",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"EC DECK FB",
	"EC DECK F",
	"EC DECK B",
	"EC CAPTAIN",
	"EC LIVING",
	"EC POOL",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"NO ENTRY",
	"EC BOOSTER",
	"EC HALL",
	"EC MOGURA",
	"EC PRISON",
	"EC TYOSUI",
	"EC KAKUSHI",
	"NO ENTRY",
	"NO ENTRY",
	"MR STATION",
	"MR ISLAND",
	"MR JUNGLE",
	"MR BASE",
	NULL,
	NULL,
	NULL,
	NULL,
	"PAST KNUCK",
	"PAST CHAOS",
	"PAST FIRE",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"CART",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"SHOOTING1",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"SHOOTING2",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"SUNABOARD",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"ALIFE SS",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"ALIFE EG",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"ALIFE MR",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"ALIFE RACE",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO",
	"NO"
};

const char *const TGS_StageListRestore2[] = {
	"PRACTICE 1",
	"BEACH 1",
	"BEACH 2",
	"BEACH 3",
	"WINDY 1",
	"WINDY 2",
	"WINDY 3",
	"TWINKLE 1",
	"TWINKLE 2",
	"TWINKLE 3",
	"HIGHWAY",
	"BUILDING",
	"DOWN TOWN",
	"MOUNTAIN 1",
	"MOUNTAIN 2",
	"MOUNTAIN 3",
	"SKY DECK 1",
	"SKY DECK 2",
	"SKY DECK 3",
	"RUIN 1",
	"RUIN 2",
	"RUIN 3",
	"ICECAP 1",
	"ICECAP 2",
	"ICECAP 3",
	"ICECAP BIG",
	"CASINO 1",
	"CASINO 2",
	"CASINO 3",
	"CASINO 4",
	"FINAL 1",
	"FINAL 2",
	"FINAL 3",
	"SHELTER 1",
	"SHELTER 2",
	"SHELTER 3",
	"SHELTER 4",
	"CHAOS 0",
	"CHAOS 2",
	"CHAOS 4",
	"CHAOS 6",
	"CHAOS 6 KN",
	"CHAOS 7 1",
	"EGGMOBILE1",
	"EGGMOBILE2",
	"EGGMOBILE3",
	"EGGMANROBO",
	"E101",
	"E101 R",
	"SD OFFICE",
	"SD CASINO",
	"SD GESUI",
	"SD STATION",
	"SD HOTEL",
	"SD TWINKLE",
	"EC DECK FB",
	"EC DECK F",
	"EC DECK B",
	"EC CAPTAIN",
	"EC LIVING",
	"EC POOL",
	"EC BOOSTER",
	"EC HALL",
	"EC MOGURA",
	"EC PRISON",
	"EC TYOSUI",
	"EC KAKUSHI",
	"MR STATION",
	"MR ISLAND",
	"MR JUNGLE",
	"MR BASE",
	"CART",
	"SHOOTING1",
	"SHOOTING2",
	"SUNABOARD",
	"ALIFE SS",
	"ALIFE EG",
	"ALIFE MR",
	"ALIFE RACE"
};






//Fixing Various
int LevelClearTimer = 0;
int ActionSwitchClearTimer = 0;
bool RestoredRedMountainAction = false;
int previousaction;
int currentaction = 0;
int currentactionmode = 0;
bool ActionAnimTestingActive = false;
int landingtimer = 0;

//Voice FixesAndAdds
bool HasBarrier = false;
bool Submerged = false;
bool PlayBubbly = false;
Sint32 UnderwaterSlot = 0;
int TailsflyingFrame = 0;
Sint32 TailsFlightSlot = 0;
bool knuckleshurt = false;
bool amyhurt = false;
bool playedBigFailureStuff = false;
int BigFailure2ndLineTimer = 0;
int FinalEggVoicePlayed = 80;
int FinalEggVoiceTimes = 0;
bool FinalEggVoiceDone = false;
bool FinalEgg1stPathTaken = false;
bool FinalEgg2ndPathTaken = false;
bool FinalEgg3rdPathTaken = false;
bool FinalEgg4thPathTaken = false;
bool FinalEgg5thPathTaken = false;
bool Taunt1Played = false;
bool Taunt2Played = false;
bool Taunt3Played = false;
Angle GravityX;
bool SkyDeckVoicePlayed = false;
bool SkyDeckAct2VoicePlayed = false;
bool SkyDeckAct2VoicePlayedOther = false;
bool startVoicing = false;
int SkyDeckAct1Played = 280;
int SkyDeckAct1Times = 0;
bool SkyDeckAct1VoiceDone = false;
int E101VoiceTimer = 0;
bool E101BetaVoicePlayed = false;
int PerfectChaosVoicePlayed = 0;
bool PChaos1stVoice = false;
bool PChaos2ndVoice = false;
bool PChaos3rdVoice = false;
bool PChaos4thVoice = false;
bool startcount = false;
bool playedKnucklesvoice = false;
bool playedAmyvoice = false;
bool playedTailsvoice = false;
int TailsVoiceDelay = 18;
bool playedBigvoice = false;
int SkyChaseVoiceDelay = 0;
int FinalEggAlarmDelay = 0;
bool LostWorld1AmbiencePlayed = false;
bool LostWorld1AmbienceAct2Played = false;
bool BoatUsed = false;
bool RaftUsed = false;
bool PlayedSnakeWaterNoise = false;
bool HotShelterBANoiseAct1 = false;
bool HotShelterBANoiseActOther = false;
bool HotShelterBANoiseCargo = false;

bool BigSmallFish = false;
bool BigMediumFish = false;
bool BigLargeFish = false;
bool BigOneMoreTry = false;



//Null Code (Used for debugging purposes)
void __cdecl NullFunction(ObjectMaster *a1)
{
	return;
}

//Standard Display
void __cdecl Basic_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0);
		njPopMatrix(1u);
	}
}

//Standard Main
void __cdecl Basic_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1

	v1 = a1->Data1;
	if (!ClipSetObject_Min(a1))
	{
		if (!ObjectSelectedDebug(a1))
		{
			AddToCollisionList(v1);
		}
		Basic_Display(a1);
	}
}

//Standard Delete Dynamic
void deleteSub_Global(ObjectMaster *a1) {
	if (a1->Data1->Object)
	{
		DynamicCOL_Remove(a1, a1->Data1->Object);
		ObjectArray_Remove(a1->Data1->Object);
	}
	DeleteObject_(a1);
}

void AddToCollision(ObjectMaster *a1, uint8_t col) {
	/*  0 is static
	1 is moving (refresh the colision every frame)
	2 is static, scalable
	3 is moving, scalable   */

	EntityData1 * original = a1->Data1;
	NJS_OBJECT *colobject;

	colobject = ObjectArray_GetFreeObject(); //The collision is a separate object, we add it to the list of object

	//if scalable
	if (col == 2 || col == 3) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = original->Scale.x;
		colobject->scl[1] = original->Scale.y;
		colobject->scl[2] = original->Scale.z;
	}
	else if (col == 4) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.x;
		colobject->scl[1] = 1.0f + original->Scale.x;
		colobject->scl[2] = 1.0f + original->Scale.x;
	}
	else if (col == 5) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.z;
		colobject->scl[1] = 1.0f + original->Scale.z;
		colobject->scl[2] = 1.0f + original->Scale.z;
	}
	else {
		colobject->evalflags = NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE; //ignore scale
		colobject->scl[0] = 1.0;
		colobject->scl[1] = 1.0;
		colobject->scl[2] = 1.0;
	}

	//add the rest
	if (col == 4 || col == 1 || col == 5)
	{
		colobject->ang[0] = 0;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = 0;
	}
	else {
		colobject->ang[0] = original->Rotation.x;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = original->Rotation.z;
	}
	colobject->pos[0] = original->Position.x;
	colobject->pos[1] = original->Position.y;
	colobject->pos[2] = original->Position.z;

	colobject->basicdxmodel = a1->Data1->Object->basicdxmodel; //object it will use as a collision
	a1->Data1->Object = colobject; //pointer to the collision object into our original object

	if (col == 0 || col == 2) DynamicCOL_Add((ColFlags)1, a1, colobject); //Solid
	else if (col == 1 || col == 3 || col == 4 || col == 5) DynamicCOL_Add((ColFlags)0x8000000, a1, colobject); //Dynamic, solid
}

//Basic drawing call
void DrawObjModel(ObjectMaster *a1, NJS_MODEL_SADX *m, bool scalable) {
	if (!MissedFrames) {
		njSetTexture((NJS_TEXLIST*)&BEACH01_TEXLIST); //Current heroes level texlist is always onto Emerald Coast
		njPushMatrix(0);
		njTranslateV(0, &a1->Data1->Position);
		njRotateXYZ(nullptr, a1->Data1->Rotation.x, a1->Data1->Rotation.y, a1->Data1->Rotation.z);
		if (scalable) njScale(nullptr, a1->Data1->Scale.x, a1->Data1->Scale.y, a1->Data1->Scale.z);
		else njScale(nullptr, 1, 1, 1);
		DrawQueueDepthBias = -6000.0f;
		DrawModel(m);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

// sign flag
Sint8 __cdecl __SETS__(int x)
{
	if (sizeof(int) == 1)
		return Sint8(x) < 0;
	if (sizeof(int) == 2)
		return Sint16(x) < 0;
	if (sizeof(int) == 4)
		return Sint32(x) < 0;
	//return Sint64(x) < 0;
}

Sint8 __cdecl __OFSUB__(int x, int y)
{
	int y2 = y;
	Sint8 sx = __SETS__(x);
	return (sx ^ __SETS__(y2)) & (sx ^ __SETS__(x - y2));
}


int __cdecl LeafFix(void)
{
	return 0;
}

const char *const KeyBlockENG[] = {
		"\aWhat's this?",
		NULL,
};

const char *const KeyBlockFRE[] = {
		"\aQu'est-ce que c'est ? ",
		NULL,
};

const char *const KeyBlockSPN[] = {
		"\a¿Qué es esto?",
		NULL,
};

const char *const KeyBlockGER[] = {
		"\aWas ist das?",
		NULL,
};

void __cdecl KeyBlockLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	case 1:
		DisplayHintText(KeyBlockENG, 240);
		break;
	case 2:
		DisplayHintText(KeyBlockFRE, 240);
		break;
	case 3:
		DisplayHintText(KeyBlockSPN, 240);
		break;
	case 4:
		DisplayHintText(KeyBlockGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	}
	//StopVoices();
	PlayVoice(1765);
}

const char *const ChaoCardENG[] = {
		"\aChao Card -\n Proof of Chao Stadium membership",
		NULL,
};

const char *const ChaoCardFRE[] = {
		"\aCarte Chao -\n Preuve d'adhésion au Stade Chao",
		NULL,
};

const char *const ChaoCardSPN[] = {
		"\a Tarjeta Chao -\n Prueba de membresía del estadio Chao",
		NULL,
};

const char *const ChaoCardGER[] = {
		"\a Chao Card -\n Nachweis der Mitgliedschaft im Chao-Stad", //missing 'ion' at the end because it doesn't fit!
		NULL,
};

void __cdecl ChaoCardLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF080);
		break;
	case 1:
		DisplayHintText(ChaoCardENG, 240);
		break;
	case 2:
		DisplayHintText(ChaoCardFRE, 240);
		break;
	case 3:
		DisplayHintText(ChaoCardSPN, 240);
		break;
	case 4:
		DisplayHintText(ChaoCardGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF080);
		break;
	}
}

void __cdecl SonicLevelClearPlus()
{
	auto SonicPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && (GetCharacterID(0) == 0 || GetCharacterID(0) == 9)) //Metal Sonic is seen as character 9?
	{
		if (SonicPlayer && GetCharObj2(0))
		{
			if (GetCharObj2(0)->Upgrades & Upgrades_SuperSonic)
			{
				if ((SonicPlayer->Action == 20 || SonicPlayer->Action == 19) && GetCharObj2(0)->AnimationThing.Index == 143)
				{
					if (LevelClearTimer < 380)
					{
						LevelClearTimer += (1 * FramerateSetting);
					}

					else if (GetCharObj2(0)->AnimationThing.Index != 144)
					{
						GetCharObj2(0)->AnimationThing.Index = 144; //Level Clear -> Idle Pose
					}
				}

				if (LevelClearTimer >= 380 && CurrentLevel == 5 && ActionSwitchClearTimer < 200)
				{
					ActionSwitchClearTimer += (1 * FramerateSetting);
				}

				else if (ActionSwitchClearTimer >= 200 && RestoredRedMountainAction == false)
				{
					SonicPlayer->Action = 75; //Restoring Control in Red Mountain to fix cutscene
					RestoredRedMountainAction = true;
				}
			}

			else
			{
				if ((SonicPlayer->Action == 20 || SonicPlayer->Action == 19) && GetCharObj2(0)->AnimationThing.Index == 75)
				{
					if (LevelClearTimer < 380)
					{
						LevelClearTimer += (1 * FramerateSetting);
					}

					else if (GetCharObj2(0)->AnimationThing.Index != 76)
					{
						GetCharObj2(0)->AnimationThing.Index = 76; //Level Clear -> Idle Pose
					}
				}

				if (LevelClearTimer >= 380 && CurrentLevel == 5 && ActionSwitchClearTimer < 200)
				{
					ActionSwitchClearTimer += (1 * FramerateSetting);
				}

				else if (ActionSwitchClearTimer >= 200 && RestoredRedMountainAction == false)
				{
					SonicPlayer->Action = 1; //Restoring Control in Red Mountain to fix cutscene
					RestoredRedMountainAction = true;
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
			RestoredRedMountainAction = false;
		}
	}
}

void __cdecl TailsLevelClearPlus()
{
	auto TailsPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && GetCharacterID(0) == 2)
	{
		if (TailsPlayer)
		{
			if ((TailsPlayer->Action == 18 || TailsPlayer->Action == 62) && GetCharObj2(0)->AnimationThing.Index == 54)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer += (1 * FramerateSetting);
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 55)
				{
					GetCharObj2(0)->AnimationThing.Index = 55; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

void __cdecl KnucklesLevelClearPlus()
{
	auto KnucklesPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && GetCharacterID(0) == 3)
	{
		if (KnucklesPlayer)
		{
			if ((KnucklesPlayer->Action == 16) && GetCharObj2(0)->AnimationThing.Index == 39)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer += (1 * FramerateSetting);
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 40)
				{
					GetCharObj2(0)->AnimationThing.Index = 40; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

void __cdecl GammaLevelClearPlus()
{
	auto GammaPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && GetCharacterID(0) == 6)
	{
		if (GammaPlayer)
		{
			if ((GammaPlayer->Action == 14) && GetCharObj2(0)->AnimationThing.Index == 67)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer += (1 * FramerateSetting);
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 68)
				{
					GetCharObj2(0)->AnimationThing.Index = 68; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

int __cdecl TornadoRandomGeneratorFix() //Activates unused function in the final windy valley's tornado, letting it suck up Rhino tanks! (Also happens in Beta Windy Valley if mod is being used.)
{
	int result = rand();
	int negative = rand();

	if (negative % 50 == 0)
	{
		result *= -1;
	}

	return result;
}

void __cdecl TornadoRandomLeafFix(ObjectMaster *a1) //The tornado is meant to suck up three kinds of leaves, not just one. This will randomize which of the three it picks.
{
	if (a1)
	{
		if (!MissedFrames)
		{
			int randomizer = rand();

			if (randomizer % 7 == 0)
			{
				a1->Data1->Scale.z = 0;
			}
			else if (randomizer % 5 == 0)
			{
				a1->Data1->Scale.z = 2;
			}
			else
			{
				a1->Data1->Scale.z = 3; //Changed this requirement in the replacement display function.
			}
			sub_4DDC10(a1);
		}
	}
}

void __cdecl TornadoLeafDisplay(ObjectMaster *a1) //Replacing display function for tornado leaves to fix stupid programming choice of restricting the leaves.
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax
	unsigned __int64 v5; // rax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = (unsigned __int64)v1->Scale.z;
		if ((_DWORD)v5)
		{
			if ((_DWORD)v5 == 3)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC15B00, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			else if ((_DWORD)v5 == 2)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC158B4, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			else if ((_DWORD)v5 == 0)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC158B4, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			njPopMatrix(1u);
		}
		else
		{
			DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC159D0, QueuedModelFlagsB_EnableZWrite, 1.0);
			njPopMatrix(1u);
		}
	}
}

//int animationswap = 0;

void __cdecl ActionTesting()
{
	auto entity = EntityData1Ptrs[0];
	int i = 0;
	//EntityData2 entitytwo = *(EntityData2 *)PlayerPtrs[0]->Data2;

	if (entity && GetCharObj2(0))
	{
		Rings = (int)GetCharObj2(0)->AnimationThing.Index;
		Lives = entity->Action;

			switch (GetCharacterID(0))
			{
			case 0:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == SONIC_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			case 2:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == MILES_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			case 3:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == KNUCKLES_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			case 5:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == AMY_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			case 6:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == E102_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			case 7:
				for (i = 0; i < 100; i++)
				{
					if (GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Animation == BIG_ACTIONS[i])
					{
						TimeMinutes = (char)i;
						break;
					}
				}
				break;
			default:
				i = 0;
				TimeMinutes = (char)i;
				break;
			}
			if (i >= 100)
			{
				TimeMinutes = 0;
			}
			if ((char)(GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].NextAnim) < 100)
			{
				TimeSeconds = (char)(GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].NextAnim);
			}
			TimeFrames = (char)(GetCharObj2(0)->AnimationThing.AnimData[GetCharObj2(0)->AnimationThing.Index].Property);

			if (GetCharacterID(0) == 6 && TimeSeconds <= 30)
			{
				TimeSeconds = (char)59; //making sure E102 doesn't suffer the timeout crap when using this. ....But this means giving up being able to see what the next Animation Index for the current Index is.
			}

		/*if ((ControllerPointers[0]->PressedButtons & Buttons_C) && GetDebugMode())
		{
			animationswap++;
		}
		if ((ControllerPointers[0]->PressedButtons & Buttons_Y) && GetDebugMode())
		{
			animationswap--;
		}
		if (animationswap < 0)
		{
			animationswap = 0;
		}*/
		//EntityData1Ptrs[0]->Position.y = 1000;
		//TailsAnimData[0].Animation = MILES_ACTIONS[animationswap];

		if ((ControllerPointers[0]->PressedButtons & Buttons_R) && (ControllerPointers[0]->HeldButtons & Buttons_Y))
		{
			currentactionmode++;
			entity->Action = currentactionmode;
		}
		else if ((ControllerPointers[0]->PressedButtons & Buttons_L) && (ControllerPointers[0]->HeldButtons & Buttons_Y))
		{
			currentactionmode--;
			if (currentactionmode < 0)
			{
				currentactionmode = 0;
			}
			entity->Action = currentactionmode;
		}
		else if (ControllerPointers[0]->PressedButtons & Buttons_R)
		{
			currentaction++;
			if (GetCharacterID(0) == 0)
			{
				if (currentaction > 146)
				{
					currentaction = 146;
				}
			}
			else if (GetCharacterID(0) == 2)
			{
				if (currentaction > 135)
				{
					currentaction = 135;
				}
			}
			else if (GetCharacterID(0) == 3)
			{
				if (currentaction > 114)
				{
					currentaction = 114;
				}
			}
			else if (GetCharacterID(0) == 5)
			{
				if (currentaction > 101)
				{
					currentaction = 101;
				}
			}
			else if (GetCharacterID(0) == 6)
			{
				if (currentaction > 90)
				{
					currentaction = 90;
				}
			}
			else if (GetCharacterID(0) == 7)
			{
				if (currentaction == 77)
				{
					currentaction = 78;
				}
				if (currentaction == 79)
				{
					currentaction = 80;
				}
				if (currentaction > 104)
				{
					currentaction = 104;
				}
			}
			GetCharObj2(0)->AnimationThing.Index = currentaction;
		}
		else if (ControllerPointers[0]->PressedButtons & Buttons_L)
		{
			currentaction--;
			if (currentaction < 0)
			{
				currentaction = 0;
			}
			if (currentaction == 85 && GetCharacterID(0) == 7)
			{
				currentaction = 80;
			}
			if (currentaction == 79 && GetCharacterID(0) == 7)
			{
				currentaction = 78;
			}
			if (currentaction == 77 && GetCharacterID(0) == 7)
			{
				currentaction = 76;
			}
			GetCharObj2(0)->AnimationThing.Index = currentaction;
		}
	}
}

//NOTE TO SELF: THIS IS HOW YOU LOAD SET FILES: LoadSetFile(0, "0100"); This will load Emerald Coast Act 1. Same thing for cam files: LoadCamFile(0, "0100");

void BigFishRankingSystem()
{
	if (EntityData1Ptrs[0] && GetCharObj2(0) && GetCharacterID(0) == 7)
	{
		if (GetCharObj2(0)->AnimationThing.Index == 60)
		{
			BigSmallFish = true;
		}
		else if (GetCharObj2(0)->AnimationThing.Index == 61)
		{
			BigMediumFish = true;
		}
		else if (GetCharObj2(0)->AnimationThing.Index == 62)
		{
			BigLargeFish = true;
		}
		else if (GetCharObj2(0)->AnimationThing.Index != 48 && (BigSmallFish == true || BigMediumFish == true || BigLargeFish == true))
		{
			if (BigSmallFish)
			{
				PlayVoice(1763);
				BigSmallFish = false;
			}
			else if (BigMediumFish)
			{
				PlayVoice(1761);
				BigMediumFish = false;
			}
			else if (BigLargeFish)
			{
				PlayVoice(1745);
				BigLargeFish = false;
			}
		}
	}
	else if (BigSmallFish || BigMediumFish || BigLargeFish)
	{
		BigSmallFish = false;
		BigMediumFish = false;
		BigLargeFish = false;
	}
}

void __cdecl KnucklesVSChaos2Fix(float a1, float a2, float a3)
{
	sub_6F62D0(a1, 1.0, a3);
}

void FinalEggAct1Announcer()
{
	if (FinalEggVoiceDone != true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
	{
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z > -900)
		{
			FinalEggVoicePlayed = 280;
			FinalEggVoiceTimes = 0;
		}
		else
		{
			FinalEggVoiceTimes = 3;
		}
	}

	if (!MissedFrames)
	{
		if (CurrentLevel != 10)
		{
			FinalEggVoicePlayed = 280;
			FinalEggVoiceTimes = 0;
			FinalEggVoiceDone = false;
		}

		if (CurrentLevel == 10 && CurrentAct == 0 && CurrentCharacter != 5 && FinalEggVoiceTimes < 3)
		{
			if (FinalEggVoicePlayed >= 332)
			{
				if (FramerateSetting >= 2)
				{
					PlayVoice(1707);
				}
				else
				{
					PlayVoice(1706);
				}
				FinalEggVoiceTimes++;
			}

			if (!IsGamePaused())
			{
				FinalEggVoicePlayed += (1 * FramerateSetting);
			}

			if (FinalEggVoicePlayed > 332)
			{
				FinalEggVoicePlayed = 0;
			}

			if (FinalEggVoiceTimes >= 3)
			{
				FinalEggVoiceDone = true;
			}
		}
	}
}

void PerfectChaosCheer()
{
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (PerfectChaosVoicePlayed != 0 || PChaos1stVoice == true || PChaos2ndVoice == true || PChaos3rdVoice == true || PChaos4thVoice == true)
		{
			PerfectChaosVoicePlayed = 0;
			PChaos1stVoice = false;
			PChaos2ndVoice = false;
			PChaos3rdVoice = false;
			PChaos4thVoice = false;
		}
	}

	if (!MissedFrames)
	{
		if (CurrentLevel != 19)
		{
			if (PerfectChaosVoicePlayed != 0 || PChaos1stVoice == true || PChaos2ndVoice == true || PChaos3rdVoice == true || PChaos4thVoice == true)
			{
				PerfectChaosVoicePlayed = 0;
				PChaos1stVoice = false;
				PChaos2ndVoice = false;
				PChaos3rdVoice = false;
				PChaos4thVoice = false;
			}

			if (startcount == true)
			{
				startcount = false;
			}
		}

		if (GetRings() == 50)
		{
			startcount = true;
		}

		if (CurrentLevel == 19 && startcount == true)
		{
			if (PChaos1stVoice != true && PerfectChaosVoicePlayed >= 559)
			{
				PlayVoice(1713); //Up to you
				PChaos1stVoice = true;
			}

			if (PChaos2ndVoice != true && PerfectChaosVoicePlayed >= 719)
			{
				PlayVoice(1714); //Be Brave
				PChaos2ndVoice = true;
			}

			if (PChaos3rdVoice != true && PerfectChaosVoicePlayed >= 899)
			{
				PlayVoice(388); //Show you
				PChaos3rdVoice = true;
			}

			if (PChaos4thVoice != true && PerfectChaosVoicePlayed >= 1099)
			{
				PlayVoice(1716); //Stay as Super Sonic
				PChaos4thVoice = true;
			}

			if (!IsGamePaused() && PerfectChaosVoicePlayed < 1102)
			{
				PerfectChaosVoicePlayed += (1 * FramerateSetting);
			}
		}
	}
}

void SkyDeck3Announcement()
{
	if (!MissedFrames)
	{
		if (CurrentLevel != 6 && SkyDeckVoicePlayed == true)
		{
			SkyDeckVoicePlayed = false;
		}

		if (CurrentLevel == 6 && CurrentAct == 2 && CurrentCharacter != 3)
		{
			if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
			{
				if (EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x < 0)
				{
					if (SkyDeckVoicePlayed == true)
					{
						SkyDeckVoicePlayed = false;
					}
				}
			}

			GravityX = Gravity.x;
			if (EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x > 0 && !IsGamePaused() && SkyDeckVoicePlayed == false)
			{
				if (Gravity.x != GravityX)
				{
					PlayVoice(1726);
					SkyDeckVoicePlayed = true;
				}
			}
			else if (EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x < -240 && !IsGamePaused())
			{
				if (Gravity.x != GravityX)
				{
					SkyDeckVoicePlayed = false;
				}
			}
		}
	}
}

void SkyDeck2OtherAnnouncements()
{
	if (!MissedFrames)
	{
		if (CurrentLevel != 6 && (SkyDeckAct2VoicePlayed == true || SkyDeckAct2VoicePlayedOther == true || startVoicing == true))
		{
			SkyDeckAct2VoicePlayed = false;
			SkyDeckAct2VoicePlayedOther = false;
			startVoicing = false;
		}

		if (CurrentLevel == 6 && CurrentAct == 1)
		{
			if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
			{
				if (EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.z > -2700)
				{
					if (SkyDeckAct2VoicePlayed == true || SkyDeckAct2VoicePlayedOther == true || startVoicing == true)
					{
						SkyDeckAct2VoicePlayed = false;
						SkyDeckAct2VoicePlayedOther = false;
						startVoicing = false;
					}
				}
			}
			//Rings = SkyDeckHeight; //Use this to check the altitude in real-time.
			if (EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.z < -2700 && !IsGamePaused())
			{
				if (SkyDeckHeight == 700.0f || SkyDeckHeight == 0.0f)
				{
					startVoicing = true;
				}

				if (startVoicing == true)
				{
					if (((SkyDeckHeight < 2.0f && SkyDeckHeight > 0.0f) || (SkyDeckHeight > 698.0f && SkyDeckHeight < 700.0f)) && SkyDeckAct2VoicePlayed == false && SkyDeckAct2VoicePlayedOther == true)
					{
						PlayVoice(1728); //Alert Cancelled
						SkyDeckAct2VoicePlayed = true;
						SkyDeckAct2VoicePlayedOther = false;
					}
					else if (((SkyDeckHeight < 697.0f && SkyDeckHeight > 690.0f) || (SkyDeckHeight < 10.0f && SkyDeckHeight > 3.0f)) && SkyDeckAct2VoicePlayedOther == false)
					{
						PlayVoice(1727); //Winds approaching
						SkyDeckAct2VoicePlayedOther = true;
						SkyDeckAct2VoicePlayed = false;
					}
				}
			}
		}
	}
}

void SkyDeckAct1Announcer()
{
	if (SkyDeckAct1VoiceDone != true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
	{
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z < 260)
		{
			SkyDeckAct1Played = 80;
			SkyDeckAct1Times = 0;
		}
		else
		{
			SkyDeckAct1Times = 3;
		}
	}

	if (!MissedFrames)
	{
		if (CurrentLevel != 6)
		{
			SkyDeckAct1Played = 80;
			SkyDeckAct1Times = 0;
			SkyDeckAct1VoiceDone = false;
		}

		if (CurrentLevel == 6 && CurrentAct == 0 && CurrentCharacter != 2 && SkyDeckAct1Times < 3)
		{
			if (SkyDeckAct1Played >= 332)
			{
				if (FramerateSetting >= 2)
				{
					PlayVoice(1704);
				}
				else
				{
					PlayVoice(1705);
				}
				SkyDeckAct1Times++;
			}

			if (!IsGamePaused())
			{
				SkyDeckAct1Played += (1 * FramerateSetting);
			}

			if (SkyDeckAct1Played > 332)
			{
				SkyDeckAct1Played = 0;
			}

			if (SkyDeckAct1Times >= 3)
			{
				SkyDeckAct1VoiceDone = true;
			}
		}
	}
}

void BetaRematchVoice()
{
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (E101VoiceTimer != 0 || E101BetaVoicePlayed == true)
		{
			E101VoiceTimer = 0;
			E101BetaVoicePlayed = false;
		}
	}

	if (!MissedFrames)
	{
		if (CurrentLevel != 25)
		{
			if (E101VoiceTimer != 0 || E101BetaVoicePlayed == true)
			{
				E101VoiceTimer = 0;
				E101BetaVoicePlayed = false;
			}
		}

		if (CurrentLevel == 25 && GetCharacterID(0) == 6 && E101BetaVoicePlayed == false)
		{
			if (E101BetaVoicePlayed != true && E101VoiceTimer == 460)
			{
				PlayVoice(1681);
				E101BetaVoicePlayed = true;
			}

			if (!IsGamePaused() && E101VoiceTimer < 461)
			{
				E101VoiceTimer += (1 * FramerateSetting);
			}
		}
	}
}

void KnucklesNoRingsVoice()
{
	if (EntityData1Ptrs[0])
	{
		if (GetCharacterID(0) == 3 && EntityData1Ptrs[0]->Action == 51 && playedKnucklesvoice == false)
		{
			PlayVoice(1796);
			playedKnucklesvoice = true;
		}

		if (playedKnucklesvoice == true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			playedKnucklesvoice = false;
		}
	}
}

void AmyNoRingsVoice()
{
	if (EntityData1Ptrs[0])
	{
		if (GetCharacterID(0) == 5 && EntityData1Ptrs[0]->Action == 47 && playedAmyvoice == false)
		{
			PlayVoice(1740);
			playedAmyvoice = true;
		}

		if (playedAmyvoice == true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			playedAmyvoice = false;
		}
	}
}

void TailsNoRingsVoice()
{
	if (EntityData1Ptrs[0])
	{
		if (GetCharacterID(0) == 2 && EntityData1Ptrs[0]->Action == 60 && playedTailsvoice == false)
		{
			if (TailsVoiceDelay == 0)
			{
				PlayVoice(1809);
				playedTailsvoice = true;
			}
			else
			{
				TailsVoiceDelay -= (1 * FramerateSetting);
			}
		}

		if (playedTailsvoice == true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			playedTailsvoice = false;
			TailsVoiceDelay = 18;
		}
	}
}

void BigNoRingsVoice()
{
	if (EntityData1Ptrs[0])
	{
		if (GetCharacterID(0) == 7 && EntityData1Ptrs[0]->Action == 58 && playedBigvoice == false)		//37 = caught fish
		{
			PlayVoice(1755);
			playedBigvoice = true;
		}

		if (playedBigvoice == true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			playedBigvoice = false;
		}
	}
}

void __cdecl BoatStartSound(unsigned __int8 a1, unsigned __int8 a2)
{
	sub_4145D0(a1, a2);

	if (EntityData1Ptrs[0])
	{
		if (CurrentLevel == 29 && CurrentAct < 2) //Egg Carrier
		{

			if (EntityData1Ptrs[0]->Position.x > 0 && EntityData1Ptrs[0]->Position.z < -530)
			{
				PlayVoice(163);
				BoatUsed = true;
			}
			else if (EntityData1Ptrs[0]->Position.x < 0 && EntityData1Ptrs[0]->Position.z < -530)
			{
				PlayVoice(1610);
				RaftUsed = true;
			}
		}
		else if (CurrentLevel == 33 && CurrentAct == 0 && EntityData1Ptrs[0]->Position.y < -370) //Mystic Ruins
		{
			PlayVoice(1610);
			RaftUsed = true;
		}
		else if (CurrentLevel == 26 && CurrentAct == 3 && EntityData1Ptrs[0]->Position.z > 1870) //Station Square
		{
			PlayVoice(163);
			BoatUsed = true;
		}
	}
}

void __cdecl BoatAndRaftStopNoises()
{
	NJS_VECTOR EggBoatArrive;
	EggBoatArrive.x = 306;
	EggBoatArrive.y = 570;
	EggBoatArrive.z = -722;

	NJS_VECTOR EggRaftArrive;
	EggRaftArrive.x = -306;
	EggRaftArrive.y = EggBoatArrive.y;
	EggRaftArrive.z = EggBoatArrive.z;

	NJS_VECTOR StationBoatArrive;
	StationBoatArrive.x = 156;
	StationBoatArrive.y = -10;
	StationBoatArrive.z = 1862;

	NJS_VECTOR MysticRaftArrive;
	MysticRaftArrive.x = -64;
	MysticRaftArrive.y = -400;
	MysticRaftArrive.z = 1256;

	if (CurrentLevel == 29) //Egg Carrier
	{
		if (BoatUsed == true && EntityData1Ptrs[0])
		{
			if (EntityData1Ptrs[0]->Position.x == EggBoatArrive.x && EntityData1Ptrs[0]->Position.y == EggBoatArrive.y && EntityData1Ptrs[0]->Position.z == EggBoatArrive.z)
			{
				PlayVoice(162);
				BoatUsed = false;
			}
		}
		else if (RaftUsed == true && EntityData1Ptrs[0])
		{
			if (EntityData1Ptrs[0]->Position.x == EggRaftArrive.x && EntityData1Ptrs[0]->Position.y == EggRaftArrive.y && EntityData1Ptrs[0]->Position.z == EggRaftArrive.z)
			{
				PlayVoice(1609);
				RaftUsed = false;
			}
		}
	}
	else if (CurrentLevel == 33) //Mystic Ruins
	{
		if (RaftUsed == true && EntityData1Ptrs[0])
		{
			if (EntityData1Ptrs[0]->Position.x == MysticRaftArrive.x && EntityData1Ptrs[0]->Position.y == MysticRaftArrive.y && EntityData1Ptrs[0]->Position.z == MysticRaftArrive.z)
			{
				PlayVoice(1609);
				RaftUsed = false;
			}
		}
	}
	else if (CurrentLevel == 26) //Station Square
	{
		if (BoatUsed == true && EntityData1Ptrs[0])
		{
			if (EntityData1Ptrs[0]->Position.x == StationBoatArrive.x && EntityData1Ptrs[0]->Position.y == StationBoatArrive.y && EntityData1Ptrs[0]->Position.z == StationBoatArrive.z)
			{
				PlayVoice(162);
				BoatUsed = false;
			}
		}
	}
}

void BarrierLossSound()
{
	if (CurrentLevel != 0 && CurrentLevel != 19 && CurrentLevel != 26 && CurrentLevel != 29 && CurrentLevel != 32 && CurrentLevel != 33 && CurrentLevel != 34 && CurrentLevel != 37 && CurrentLevel != 21 && CurrentLevel != 22 && CurrentLevel != 24)
	{
		if (GetCharObj2(0) && !IsGamePaused())
		{
			if ((GetCharObj2(0)->Powerups & Powerups_Barrier) || (GetCharObj2(0)->Powerups & Powerups_MagneticBarrier) && HasBarrier == false)
			{
				HasBarrier = true;
			}
			else if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
			{
				HasBarrier = false;
			}
			else if (!((GetCharObj2(0)->Powerups & Powerups_Barrier) && (GetCharObj2(0)->Powerups & Powerups_MagneticBarrier)) && HasBarrier == true)
			{
				if (!(GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
				{
					QueueSound_XYZ(23, EntityData1Ptrs[0], 1, 100, 30, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
					HasBarrier = false;
				}
			}
		}
	}
	else
	{
		if (HasBarrier == true)
		{
			HasBarrier = false;
		}
	}
}

signed int __cdecl PlaySound2Custom(int ID, void *ptr, int a3, void *a4, int playlength)
{
	Sint32 v4; // eax
	Sint32 v6; // eax

	v4 = SoundQueue_GetFreeIndex(a3);
	if (v4 < 0)
	{
		return -1;
	}
	v6 = v4;
	SoundQueue[v6].PointerA = ptr;
	SoundQueue[v6].field_0 = a3;
	SoundQueue[v6].ID = ID;
	SoundQueue[v6].field_4 = playlength; //set this to -1 to make it loop indefinitely. (If it can)
	SoundQueue[v6].field_C = 17;
	SoundQueue[v6].field_14 = 0;
	SoundQueue[v6].PointerB = a4;
	SoundQueue[v6].field_1C = 0;
	SoundQueue[v6].field_20 = 0;
	SoundQueue[v6].origin.x = 0.0;
	SoundQueue[v6].origin.y = 0.0;
	SoundQueue[v6].origin.z = 0.0;
	return 1;
}

Sint32 __cdecl QueueSound_XYZCustom(int id, EntityData1 *entity, int a3, int volume, int playlength, float x, float y, float z)
{
	double v8; // st7
	double v9; // st6
	double v10; // st5
	Sint32 _i; // eax
	int v16; // ecx
	Sint32 i; // eax

	v8 = x - Camera_Data1->Position.x;
	v9 = y - Camera_Data1->Position.y;
	v10 = z - Camera_Data1->Position.z;

	_i = SoundQueue_GetOtherThing(id, entity);
	if (_i < 0)
	{
		_i = SoundQueue_GetFreeIndex(a3);
		if (_i < 0)
		{
			return -1;
		}
		v16 = 4097;
	}
	else
	{
		v16 = SoundQueue[_i].field_C & 1;
	}

	if (id == 759) //Underwater sound
	{
		UnderwaterSlot = _i;
		SoundQueue[UnderwaterSlot].field_C = v16 | 0x130;
		SoundQueue[UnderwaterSlot].PointerB = (void *)volume;
		SoundQueue[UnderwaterSlot].field_1C = volume;
		SoundQueue[UnderwaterSlot].field_0 = a3;
		SoundQueue[UnderwaterSlot].field_4 = playlength + 1; //set this to -1 to make it loop indefinitely. (If it can)
		SoundQueue[UnderwaterSlot].origin.x = x;
		SoundQueue[UnderwaterSlot].PointerA = entity;
		SoundQueue[UnderwaterSlot].ID = id;
		SoundQueue[UnderwaterSlot].field_14 = 0;
		SoundQueue[UnderwaterSlot].field_20 = 0;
		SoundQueue[UnderwaterSlot].origin.y = y;
		SoundQueue[UnderwaterSlot].origin.z = z;
	}

	if (id == 770) //Tails flight sound
	{
		TailsFlightSlot = _i;
		SoundQueue[TailsFlightSlot].field_C = v16 | 0x130;
		SoundQueue[TailsFlightSlot].PointerB = (void *)volume;
		SoundQueue[TailsFlightSlot].field_1C = volume;
		SoundQueue[TailsFlightSlot].field_0 = a3;
		SoundQueue[TailsFlightSlot].field_4 = playlength + 1; //set this to -1 to make it loop indefinitely. (If it can)
		SoundQueue[TailsFlightSlot].origin.x = x;
		SoundQueue[TailsFlightSlot].PointerA = entity;
		SoundQueue[TailsFlightSlot].ID = id;
		SoundQueue[TailsFlightSlot].field_14 = 0;
		SoundQueue[TailsFlightSlot].field_20 = 0;
		SoundQueue[TailsFlightSlot].origin.y = y;
		SoundQueue[TailsFlightSlot].origin.z = z;
	}
	else
	{
		i = _i;
		SoundQueue[i].field_C = v16 | 0x130;
		SoundQueue[i].PointerB = (void *)volume;
		SoundQueue[i].field_1C = volume;
		SoundQueue[i].field_0 = a3;
		SoundQueue[i].field_4 = playlength + 1; //set this to -1 to make it loop indefinitely. (If it can)
		SoundQueue[i].origin.x = x;
		SoundQueue[i].PointerA = entity;
		SoundQueue[i].ID = id;
		SoundQueue[i].field_14 = 0;
		SoundQueue[i].field_20 = 0;
		SoundQueue[i].origin.y = y;
		SoundQueue[i].origin.z = z;
	}

	return 0;
}

void WaterEffects()
{
	auto PlayEntity = EntityData1Ptrs[0];

	if (CurrentLevel != 0 && CurrentLevel != 19)
	{
		if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			Submerged = false;
			PlayBubbly = false;
		}

		if (GetCharObj2(0) && !IsGamePaused())
		{
			if (GetCharObj2(0)->UnderwaterTime != 0 && Submerged == false)
			{
				Submerged = true;
			}
			else if (Submerged == true && PlayBubbly == false)
			{
				QueueSound_XYZCustom(759, EntityData1Ptrs[0], 1, 220, -2, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
				//PlaySound2(759, (void *)0xFFFFFFFF, 1, 0); //Loops the underwater sound indefinitely.
				//QueueSound_DualEntity(759, (EntityData1 *)0x41, 1, 0, 680);
				//PlaySound2(759, 0, 0, 0);
				PlayBubbly = true;
			}
			else if (GetCharObj2(0)->UnderwaterTime == 0 && (Submerged == true || PlayBubbly == true))
			{
				if (PlayEntity->Status & Status_Ground)
				{
					PlaySound(757, 0, 0, 0); //Drip drop variant.
					DoSoundQueueThing(759); //Stops the underwater ambient sound from playing.
				}
				else
				{
					PlaySound(758, 0, 0, 0); //Splash variant.
					DoSoundQueueThing(759);
				}
				Submerged = false;
				PlayBubbly = false;
			}

			if (PlayBubbly == true)
			{
				SoundQueue[UnderwaterSlot].origin.x = EntityData1Ptrs[0]->Position.x;
				SoundQueue[UnderwaterSlot].origin.y = EntityData1Ptrs[0]->Position.y;
				SoundQueue[UnderwaterSlot].origin.z = EntityData1Ptrs[0]->Position.z;
			}
		}
	}
	else
	{
		if (Submerged == true || PlayBubbly == true)
		{
			Submerged = false;
			PlayBubbly = false;
		}
	}
}

void __cdecl InvincibilityPowerupMORE(EntityData1 *entity)
{
	GiveInvincibility(0);

	switch (GetCurrentCharacterID())
	{
	case 0: //Sonic
		if (!MetalSonicFlag)
		{
			//PlaySound(1304, 0, 0, 0);
			QueueSound_XYZ(1304, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
			//PlayVoice(1849); //"Yes!"
		}
		break;
	case 1: //Eggman
		break;
	case 2: //Tails
		//PlaySound(1349, 0, 0, 0);
		QueueSound_XYZ(1349, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		//PlayVoice(1811); //"Alright!"
		break;
	case 3: //Knuckles
		break;
	case 4: //Tikal
		break;
	case 5: //Amy
		PlaySound(1309, 0, 0, 0); //"Cool!" Only available in her sound bank. Not a voice clip.
		break;
	case 6: //Gamma
		PlaySound(1306, 0, 0, 0);
		break;
	case 7: //Big
		PlayVoice(1760); //"Super!"
		break;
	default:
		break;
	}
	PlaySound(11, 0, 0, 0);
}

void __cdecl SpeedShoesPowerupMORE(EntityData1 *entity)
{
	sub_441DF0(entity->CollisionInfo->CollidingObject->Object->Data1->CharIndex); //This used to set the hibyte, like this: CollidingObject->Object->Data1.Entity->CharIndex.UByte[0]); Problems?
	switch (GetCurrentCharacterID())
	{
	case 0: //Sonic
		if (!MetalSonicFlag)
		{
			//PlaySound(1305, 0, 0, 0);
			QueueSound_XYZ(1305, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
			//PlayVoice(1850); //"Here we go!"
		}
		break;
	case 1: //Eggman
		break;
	case 2: //Tails
		//PlaySound(1350, 0, 0, 0);
		QueueSound_XYZ(1350, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		//PlayVoice(1812); //"Cool!"
		break;
	case 3: //Knuckles
		break;
	case 4: //Tikal
		break;
	case 5: //Amy
		//PlaySound(1323, 0, 0, 0); //"Here I come!" Only available in her sound bank. Not a voice clip.
		QueueSound_XYZ(1323, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		break;
	case 6: //Gamma
		PlaySound(1306, 0, 0, 0);
		break;
	case 7: //Big
		//PlayVoice(1760);
		break;
	default:
		break;
	}
	PlaySound(11, 0, 0, 0);
}

void __cdecl ExtraLifePowerupMORE(EntityData1 *entity)
{
	GiveLives(1);
	switch (GetCurrentCharacterID())
	{
	case 0: //Sonic
		if (!MetalSonicFlag)
		{
			QueueSound_XYZ(1304, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
			//PlaySound(1304, 0, 0, 0);
			//PlayVoice(1849); //"Yes!"
		}
		break;
	case 1: //Eggman
		break;
	case 2: //Tails
		//PlaySound(1350, 0, 0, 0);
		QueueSound_XYZ(1350, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		//PlayVoice(1811); //"Alright!"
		break;
	case 3: //Knuckles
		break;
	case 4: //Tikal
		break;
	case 5: //Amy
		QueueSound_XYZ(1309, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		//PlaySound(1309, 0, 0, 0); //"Cool!" Only available in her sound bank. Not a voice clip.
		break;
	case 6: //Gamma
		PlaySound(1306, 0, 0, 0);
		break;
	case 7: //Big
		//PlaySound(1413, 0, 0, 0); Testing something
		PlayVoice(1760); //"Super!"
		break;
	default:
		break;
	}
	PlaySound(11, 0, 0, 0);
}

void __cdecl LightSpeedChargeSound()
{
	if (GetCharacterID(0) == 0)
	{
		auto entity = EntityData1Ptrs[0];

		if (entity)
		{
			if (entity->Status & Status_LightDash)
			{
				QueueSound_DualEntity(766, entity, 1, 0, 150);
			}
		}
	}
}

void __cdecl TailsFlightSound()
{
	if (GetCharacterID(0) == 2)
	{
		auto entity = EntityData1Ptrs[0];

		if (GetCharObj2(0) && !IsGamePaused())
		{
			if (TailsflyingFrame == 0 && !(entity->Status & Status_Ground) && (GetCharObj2(0)->AnimationThing.Index == 37 || GetCharObj2(0)->AnimationThing.Index == 40) && entity->Action == 15 && entity->Action != 19) //15 = flying, 19 = exhausted
			{
				QueueSound_XYZCustom(770, EntityData1Ptrs[0], 1, 66, 235, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
				//QueueSound_DualEntity(770, entity, 1, 0, 30);
				TailsflyingFrame += (1 * FramerateSetting);
			}
			else if (TailsflyingFrame < 235 && !(entity->Status & Status_Ground) && (GetCharObj2(0)->AnimationThing.Index == 37 || GetCharObj2(0)->AnimationThing.Index == 40) && entity->Action == 15 && entity->Action != 19)
			{
				SoundQueue[TailsFlightSlot].origin.x = EntityData1Ptrs[0]->Position.x;
				SoundQueue[TailsFlightSlot].origin.y = EntityData1Ptrs[0]->Position.y;
				SoundQueue[TailsFlightSlot].origin.z = EntityData1Ptrs[0]->Position.z;
				TailsflyingFrame += (1 * FramerateSetting);
			}
			else if (TailsflyingFrame >= 235)
			{
				TailsflyingFrame = 0;
				DoSoundQueueThing(770);
			}
			else if (((entity->Status & Status_Ground) || entity->Action == 19 || !(GetCharObj2(0)->AnimationThing.Index == 37 || GetCharObj2(0)->AnimationThing.Index == 40)) && TailsflyingFrame > 0)
			{
				TailsflyingFrame = 0;
				DoSoundQueueThing(770);
			}
			//Rings = TailsflyingFrame;
		}
	}
}

void __cdecl KnucklesHurtSound()
{
	if (GetCharacterID(0) == 3)
	{
		auto entity = EntityData1Ptrs[0];

		if (entity)
		{
			if ((entity->Status & Status_Hurt) && knuckleshurt == false)
			{
				QueueSound_XYZ(1344, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z); //Making him say "Ouch!" instead, as this was likely more intended to be used for damage than "Hey!".
				//PlaySound(1309, 0, 0, 0); //"Hey!" Only available in his sound bank. Not a voice clip.
				knuckleshurt = true;
			}
			else if (!(entity->Status & Status_Hurt) && knuckleshurt == true && EntityData1Ptrs[0]->InvulnerableTime == 0)
			{
				knuckleshurt = false;
			}
		}
		else
		{
			knuckleshurt = false;
		}
	}
}

void __cdecl AmyHurtSound()
{
	if (GetCharacterID(0) == 5)
	{
		auto entity = EntityData1Ptrs[0];

		if (entity)
		{
			if ((entity->Status & Status_Hurt) && amyhurt == false)
			{
				QueueSound_XYZ(1295, EntityData1Ptrs[0], 1, 66, 70, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
				//PlaySound(1295, 0, 0, 0); //"Ow!" Only available in her sound bank. Not a voice clip.
				amyhurt = true;
			}

			else if (!(entity->Status & Status_Hurt) && amyhurt == true && EntityData1Ptrs[0]->InvulnerableTime == 0)
			{
				amyhurt = false;
			}
		}
		else
		{
			amyhurt = false;
		}
	}
}

void __cdecl BigFailedFishing()
{
	if (GetCharacterID(0) == 7)
	{
		auto entity = EntityData1Ptrs[0];

		if (entity && GetCharObj2(0) && !IsGamePaused())
		{
			if (entity->Action == 39 && playedBigFailureStuff == false) //39 = "Big's line snapped while fishing" Action for him.
			{
				PlayVoice(1752); //GASP!
				PlayMusic(MusicIDs_fishmiss);
				playedBigFailureStuff = true;

				if (Lives > 0 && BigOneMoreTry == false)
				{
					BigOneMoreTry = true;
				}
				BigFailure2ndLineTimer += (1 * FramerateSetting);
			}
			else if (BigFailure2ndLineTimer != 0 && BigFailure2ndLineTimer < 180)
			{
				BigFailure2ndLineTimer += (1 * FramerateSetting);
			}

			if (BigFailure2ndLineTimer == 110 || BigFailure2ndLineTimer == 111)
			{
				PlayVoice(1753); //Oh no!			
				BigFailure2ndLineTimer = 112;
			}
			else if (BigFailure2ndLineTimer >= 180)
			{
				if (BigOneMoreTry == true)
				{
					GetCharObj2(0)->AnimationThing.Index = 65;
				}
				else
				{
					PlayVoice(1756); //Oh no...
				}
				BigFailure2ndLineTimer = 0;
			}
			else if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21) && playedBigFailureStuff == true)
			{
				goto LABEL_2;
			}
		}
	}
	else if (playedBigFailureStuff == true && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
	{
		LABEL_2:
		playedBigFailureStuff = false;
		BigFailure2ndLineTimer = 0;
	}
}

void __cdecl BigTryAgain()
{
	if (GetCharacterID(0) == 7)
	{
		if (EntityData1Ptrs[0] && GetCharObj2(0) && BigOneMoreTry == true && playedBigFailureStuff == false)
		{
			if ((int)rand() % 2 == 0)
			{
				PlayVoice(1876);
			}
			else
			{
				PlayVoice(1877);
			}
			BigOneMoreTry = false;
		}
	}
	else if (BigOneMoreTry == true)
	{
		BigOneMoreTry = false;
	}
}

void __cdecl FinalEggTaunt()
{
	auto entity = EntityData1Ptrs[0];

	if (entity)
	{
		NJS_VECTOR AmyPos = entity->Position;

		if (CurrentCharacter == 5 && CurrentLevel == 10 && CurrentAct == 0)
		{
			if (AmyPos.z < -1800 && AmyPos.y < 400 && AmyPos.y > 200)
			{
				if (AmyPos.x > 2160 && AmyPos.z > -2000 && FinalEgg1stPathTaken == false)
				{
					if (!Taunt1Played)
					{
						PlayVoice(1984);
						Taunt1Played = true;
					}
					else if (!Taunt2Played)
					{
						PlayVoice(1985);
						Taunt2Played = true;
					}
					else if (!Taunt3Played)
					{
						PlayVoice(1986);
						Taunt3Played = true;
					}
					FinalEgg1stPathTaken = true;
				}
				else if (AmyPos.x < 1520 && AmyPos.z > -2000 && FinalEgg2ndPathTaken == false)
				{
					if (!Taunt1Played)
					{
						PlayVoice(1984);
						Taunt1Played = true;
					}
					else if (!Taunt2Played)
					{
						PlayVoice(1985);
						Taunt2Played = true;
					}
					else if (!Taunt3Played)
					{
						PlayVoice(1986);
						Taunt3Played = true;
					}
					FinalEgg2ndPathTaken = true;
				}
				else if (AmyPos.x > 1779 && AmyPos.x < 1841 && AmyPos.z < -2220 && FinalEgg3rdPathTaken == false)
				{
					if (!Taunt1Played)
					{
						PlayVoice(1984);
						Taunt1Played = true;
					}
					else if (!Taunt2Played)
					{
						PlayVoice(1985);
						Taunt2Played = true;
					}
					else if (!Taunt3Played)
					{
						PlayVoice(1986);
						Taunt3Played = true;
					}
					FinalEgg3rdPathTaken = true;
				}
				else if (AmyPos.z < -2150 && AmyPos.x < 1779 && AmyPos.x > 1590 && FinalEgg4thPathTaken == false)
				{
					if (!Taunt1Played)
					{
						PlayVoice(1984);
						Taunt1Played = true;
					}
					else if (!Taunt2Played)
					{
						PlayVoice(1985);
						Taunt2Played = true;
					}
					else if (!Taunt3Played)
					{
						PlayVoice(1986);
						Taunt3Played = true;
					}
					FinalEgg4thPathTaken = true;
				}
				else if (AmyPos.z < -2150 && AmyPos.x > 1841 && AmyPos.x < 2120 && FinalEgg5thPathTaken == false)
				{
					if (!Taunt1Played)
					{
						PlayVoice(1984);
						Taunt1Played = true;
					}
					else if (!Taunt2Played)
					{
						PlayVoice(1985);
						Taunt2Played = true;
					}
					else if (!Taunt3Played)
					{
						PlayVoice(1986);
						Taunt3Played = true;
					}
					FinalEgg5thPathTaken = true;
				}
			}

			if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
			{
				FinalEgg1stPathTaken = false; //Right-most path.
				FinalEgg2ndPathTaken = false; //Left-most path.
				FinalEgg3rdPathTaken = false; //Middle path.
				FinalEgg4thPathTaken = false; //Left-middle path.
				FinalEgg5thPathTaken = false; //Right-middle path.
				Taunt1Played = false;	//1984
				Taunt2Played = false;	//1985
				Taunt3Played = false;	//1986
			}
		}
	}
}

void __cdecl SkyChaseAlt1(int a1)
{
	if (CurrentCharacter == 2)
	{
		PlayVoice(a1);
	}
	else
	{
		PlayVoice(530);
	}
}

void __cdecl SkyChaseAlt2(int a1)
{
	if (CurrentCharacter == 2)
	{
		PlayVoice(a1);
	}
	else
	{
		PlayVoice(531);
	}
}

void __cdecl SkyChaseAlt3(int a1)
{
	if (CurrentCharacter == 2)
	{
		PlayVoice(a1);
	}
	else
	{
		PlayVoice(532);
	}
}

void __cdecl SkyChaseAlt4(int a1)
{
	if (CurrentCharacter == 2)
	{
		PlayVoice(a1);
	}
	else
	{
		PlayVoice(533);
		SkyChaseVoiceDelay = 510;
	}
}

void __cdecl OGras0_New(ObjectMaster *a1)
{
	a1->Data1->Object = BOSSCHAOS0LAND_OBJECTS[66];
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
}

void __cdecl OGras1_New(ObjectMaster *a1)
{
	a1->Data1->Object = BOSSCHAOS0LAND_OBJECTS[67];
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
}

void __cdecl OGras2_New(ObjectMaster *a1)
{
	a1->Data1->Object = BOSSCHAOS0LAND_OBJECTS[68];
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
}

void __cdecl OGras3_New(ObjectMaster *a1)
{
	a1->Data1->Object = BOSSCHAOS0LAND_OBJECTS[69];
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
}

//Egg Helicopter
void __cdecl O_Heli_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;


	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		njAction(&action_Action_Patrol, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
		if (!ObjectSelectedDebug(a2) && !IsGamePaused())
		{
			if (FramerateSetting >= 2)
			{
				*(float*)&v1->CharIndex = 2.0f + *(float*)&v1->CharIndex;
			}
			else
			{
				*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
			}
			if (*(float*)&v1->CharIndex >= 441.0)
			{
				*(float*)&v1->CharIndex = 0.0;
			}
		}
		/*sub_409E70((NJS_MODEL_SADX*)Patrol_Body.model, 0, 1.0);
		njPushMatrix(0);
		njTranslate(0, Patrol_Light.pos[0], (Patrol_Light.pos[1]), Patrol_Light.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Patrol_Light.model, 0, 1.0);
		njPushMatrix(0);
		njTranslate(0, Patrol_Prop.pos[0], (Patrol_Prop.pos[1]), Patrol_Prop.pos[2]);
		njRotateY(0, Patrol_Light.ang[1]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Patrol_Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
		njPopMatrix(1u);*/
	}
}

void __cdecl Load_O_Heli(ObjectMaster *a1)
{
	a1->MainSub = O_Heli_Display;
	a1->DisplaySub = O_Heli_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl HeliCheck(ObjectMaster *a1)
{
	switch (CurrentCharacter)
	{
	case 0:
		if (EventFlagArray[147] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	case 2:
		if (EventFlagArray[210] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	case 3:
		if (EventFlagArray[271] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	case 5:
		if (EventFlagArray[333] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	case 6:
		if (EventFlagArray[396] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	case 7:
		if (EventFlagArray[459] != 1)
		{
			Load_O_Heli(a1);
		}
		break;
	default:
		break;
	}
}

void __cdecl LightningCheck(ObjectMaster *a1)
{
	switch (CurrentCharacter)
	{
	case 0:
		if (EventFlagArray[147] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	case 2:
		if (EventFlagArray[210] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	case 3:
		if (EventFlagArray[271] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	case 5:
		if (EventFlagArray[333] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	case 6:
		if (EventFlagArray[396] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	case 7:
		if (EventFlagArray[459] != 1)
		{
			sub_5228A0(a1);
		}
		break;
	default:
		break;
	}
}

void LightningDrawChange(NJS_MODEL_SADX *model, float scale)
{
	DrawQueueDepthBias = 8000.0f;
	DrawModel_Queue(model, QueuedModelFlagsB_3);
	DrawQueueDepthBias = 0;
}

void __cdecl GOODModel_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&EC_TARAI_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, 0, 80.0f, -510.0f);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode(&object_GOODSign, (QueuedModelFlagsB)0, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl GOODModel_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;

	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1 && !(*(float *)&v1->CharIndex <= 0))
			{
				if (!(IsGamePaused()))
				{
					*(float *)&v1->CharIndex -= 1;
				}
				GOODModel_Display(a1);
			}
			else
			{
				DeleteObjectMaster(a1);
			}
		}
		else
		{
			v1->Action = 1;
			*(float *)&v1->CharIndex = 60.0f;
			a1->DisplaySub = GOODModel_Display;
		}
	}
}

void __cdecl GOODModelRestoration()
{
	ObjectMaster *a1;
	EntityData1 *sign;
	auto entity = EntityData1Ptrs[0];

	PlaySound(12, 0, 0, 0);
	a1 = LoadObject((LoadObj)2, 3, GOODModel_Main);
	EmptyFiller.Distance = 20000.0f;
	a1->SETData.SETData = &EmptyFiller;
	if (a1)
	{
		sign = a1->Data1;
		sign->Position.x = entity->Position.x;
		sign->Position.y = entity->Position.y + 5;
		sign->Position.z = entity->Position.z;
		sign->Rotation.x = 0;
		sign->Rotation.y = 0;
		sign->Rotation.z = 0;
		sign->Scale.x = 1.0f;
		sign->Scale.y = 1.0f;
		sign->Scale.z = 1.0f;
	}
}

void __cdecl JumpPanel_Display_new(ObjectMaster *a1)
{
	EntityData1 *entity; // esi
	double p_z; // st7
	double p_y; // st6
	double p_x; // st5
	float m; // ST14_4
	Angle r_z; // eax
	Angle r_x; // eax
	Angle r_y; // eax
	unsigned __int16 v9; // si

	entity = a1->Data1;
	if (!MissedFrames)
	{
		if (EntityData1Ptrs[0])
		{
			if (Camera_Data1)
			{
				p_z = Camera_Data1->Position.z - entity->Position.z;
				p_y = Camera_Data1->Position.y - entity->Position.y;
				p_x = Camera_Data1->Position.x - entity->Position.x;
				m = p_x * p_x + p_y * p_y + p_z * p_z;
				if (squareroot(m) < 500.0 || GetDebugMode())
				{
					njControl3D_Backup();
					njControl3D(NJD_CONTROL_3D_CONSTANT_MATERIAL);
					SetMaterialAndSpriteColor_Float(1.0, 1.0, 1.0, 1.0);
					njPushMatrix(0);
					njTranslateV(0, &entity->Position);
					r_z = entity->Rotation.z;
					if (r_z)
					{
						njRotateZ(0, (unsigned __int16)r_z);
					}
					r_x = entity->Rotation.x;
					if (r_x)
					{
						njRotateX(0, (unsigned __int16)r_x);
					}
					r_y = entity->Rotation.y;
					if (r_y)
					{
						njRotateY(0, (unsigned __int16)r_y);
					}

					v9 = entity->InvulnerableTime;
					if (v9)
					{
						njSetTexture(&JumpPanel_TEXLIST[v9]);
						ProcessModelNode_AB_Wrapper(&JumpPanelDigit_OBJECT, 1.0);
						SetTextureToCommon();
						ProcessModelNode_D_WrapperB(&JumpPanel_OBJECT, 0, 1.0);
					}
					else
					{
						SetTextureToCommon();
						ProcessModelNode_D_WrapperB((NJS_OBJECT *)0x8C5D88, 0, 1.0);
					}
					njPopMatrix(1u);
					ClampGlobalColorThing_Thing();
					njControl3D_Restore();
				}
			}
		}
	}
}

void __cdecl JumpPanel_StarCollisionFix(ObjectMaster *a1, CollisionData *collisionArray, int count, unsigned __int8 list)
{
	Collision_Init(a1, &collision_JumpPanel[2], 2, 4u);
}

int __cdecl TGSTesting()
{
	int v0; // esi
	_DWORD *v1; // eax

	Set_D3DCMPFUNC_Mode(3);
	v0 = sub_503270();
	if (!v0)
	{
		v1 = (_DWORD *)dword_3C5E8D0->UnknownB_ptr;
		v0 = -2;
		if (v1)
		{
			v0 = v1[5];
		}
	}
	sub_503450();

	if ((ControllerPointers[0]->HeldButtons & Buttons_L) && (ControllerPointers[0]->HeldButtons & Buttons_R)) //Able to activate TGS Menu on the fly
	{
		sub_40BF30();
		return -1;
	}

	return v0;
}

void sub_42D880_new()
{
	Int v0; // esi
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]

	_sp.tlist = TITLE_TEXLIST_S;
	_sp.tanim = &stru_9140E0;
	njSetTexture(TITLE_TEXLIST_S);
	_sp.sx = -HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 320.0 * HorizontalStretch;
	_sp.p.y = 0.0;
	v0 = 0;
	do
	{
		njDrawSprite2D_Queue(&_sp, v0++, 22047.0, 0, QueuedModelFlagsB_SomeTextureThing);
	} while (v0 < 6);
}

void sub_42E5F0_new()
{
	float r; // ST40_4
	Int v1; // esi
	int v2; // [esp+14h] [ebp-24h]
	NJS_SPRITE _sp; // [esp+18h] [ebp-20h]

	v2 = 255 - TGSCharSelThing;
	if (255 - TGSCharSelThing > 0)
	{
		if (255 - TGSCharSelThing >= 255)
		{
			v2 = 255;
		}
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		r = (double)v2 * 0.0039215689;
		SetMaterialAndSpriteColor_Float(r, 1.0, 1.0, 1.0);
		_sp.tlist = LOADING_TEXLIST_S;
		_sp.tanim = &stru_914568;
		_sp.sx = HorizontalStretch;
		_sp.sy = HorizontalStretch;
		_sp.p.x = 320.0 * HorizontalStretch;
		_sp.p.y = 240.0 * HorizontalStretch;
		v1 = 0;
		do
		{
			njDrawSprite2D_Queue(&_sp, v1++, 22047.0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		} while (v1 < 2);
		_sp.sx = 24.0 * HorizontalStretch;
		_sp.sy = 60.0 * HorizontalStretch;
		_sp.p.x = 192.0 * HorizontalStretch;
		_sp.p.y = 240.0 * HorizontalStretch;
		njDrawSprite2D_Queue(&_sp, 2, 22046.99, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		_sp.p.x = 448.0 * HorizontalStretch;
		_sp.p.y = 240.0 * HorizontalStretch;
		njDrawSprite2D_Queue(&_sp, 3, 22046.99, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		_sp.sx = 32.0 * HorizontalStretch;
		_sp.sy = 22.0 * HorizontalStretch;
		_sp.p.x = 320.0 * HorizontalStretch;
		_sp.p.y = 176.0 * HorizontalStretch;
		njDrawSprite2D_Queue(&_sp, 4, 22046.99, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		_sp.p.x = 320.0 * HorizontalStretch;
		_sp.p.y = 304.0 * HorizontalStretch;
		njDrawSprite2D_Queue(&_sp, 5, 22046.99, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		ClampGlobalColorThing_Thing();
	}
}

void __stdcall sub_42DAC0_new()
{
	Int v0; // esi
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]

	_sp.tlist = TGS_RULE_TEXLISTS_S[TGS_Char_Rule];
	_sp.tanim = &stru_9143E0;
	njSetTexture(_sp.tlist);
	_sp.sx = HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 320.0 * HorizontalStretch;
	_sp.p.y = 0.0;
	v0 = 0;
	do
	{
		njDrawSprite2D_Queue(&_sp, v0++, 22047.0, 0, QueuedModelFlagsB_SomeTextureThing);
	} while (v0 < 6);
}

void sub_42D8F0_new()
{
	signed int v0; // edi
	double v1; // st7
	NJS_TEXLIST *v2; // eax
	signed int v3; // esi
	double v4; // st7
	float pri; // [esp+8h] [ebp-24h]
	NJS_SPRITE _sp; // [esp+Ch] [ebp-20h]

	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	v0 = 0;
	do
	{
		if (TGS_Char_Rule == v0)
		{
			dword_3B2C430[v0] = 1.0;
		}
		else
		{
			v1 = dword_3B2C430[v0] - 0.2;
			dword_3B2C430[v0] = v1;
			if (v1 < 0.0)
			{
				dword_3B2C430[v0] = 0.0;
			}
		}
		if (!v0 || v0 == 1 || (v2 = TGS_CHRSEL_TEXLIST_1_S, v0 == 5))
		{
			v2 = TGS_CHRSEL_TEXLIST_0_S;
		}
		_sp.tlist = v2;
		_sp.tanim = &stru_914158;
		njSetTexture(v2);
		SetMaterialAndSpriteColor_Float(dword_3B2C430[v0], 1.0, 1.0, 1.0);
		v3 = 0;
		do
		{
			_sp.sx = 1.25 * HorizontalStretch;
			v4 = -10.0 - dword_3B2C430[v0];
			_sp.sy = HorizontalStretch;
			_sp.p.x = 320.0 * HorizontalStretch;
			_sp.p.y = 0.0;
			pri = v4;
			if (v4 >= -3.0 && pri < 12048.0)
			{
				pri = pri + 22048.0;
			}
			njDrawSprite2D_Queue(
				&_sp,
				v3++ + 4 * v0,
				pri,
				NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR,
				QueuedModelFlagsB_SomeTextureThing);
		} while (v3 < 4);
		++v0;
	} while (v0 < 6);
	ClampGlobalColorThing_Thing();
}

void __cdecl sub_42DA40_new()
{
	Int v0; // esi
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]

	_sp.tlist = TGS_RULE_TEXLISTS_S[TGS_Char_Rule];
	_sp.tanim = &stru_914368;
	njSetTexture(_sp.tlist);
	_sp.sx = HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 320.0 * HorizontalStretch;
	_sp.p.y = 0.0;
	v0 = 0;
	do
	{
		njDrawSprite2D_Queue(&_sp, v0++, 22047.0, 0, QueuedModelFlagsB_SomeTextureThing);
	} while (v0 < 6);
}

void sub_42DD50_new()
{
	float g; // ST18_4
	Int v1; // esi
	NJS_SPRITE _sp; // [esp+8h] [ebp-20h]

	//dword_3B2C41C = 1;

	g = dword_3B2C41C;
	_sp.tlist = TITLE_TEXLIST_S;
	_sp.tanim = &stru_9140E0;
	njSetTexture(TITLE_TEXLIST_S);
	SetMaterialAndSpriteColor_Float(1.0, g, g, g);
	_sp.sx = -HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 320.0 * HorizontalStretch;
	_sp.p.y = 0.0;
	v1 = 0;
	do
	{
		njDrawSprite2D_Queue(&_sp, v1++, 22047.0, NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	} while (v1 < 6);
	ClampGlobalColorThing_Thing();
}

void __cdecl sub_42DB40_new(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	NJS_ARGB a1a; // [esp+4h] [ebp-30h]
	NJS_SPRITE _sp; // [esp+14h] [ebp-20h]

	v1 = a1->Data1;
	_sp.tlist = PRESSSTART_TEXLIST_S;
	_sp.tanim = &stru_914458;
	_sp.sx = HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 512.0 * HorizontalStretch;
	_sp.p.y = 448.0 * HorizontalStretch;
	v1->InvulnerableTime += 2048;
	v1->Scale.z = (njSin((unsigned __int16)v1->InvulnerableTime) + 1.0) * 0.5;
	njSetTexture(&PRESSSTART_TEXLIST);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	a1a.a = v1->Scale.z;
	a1a.r = 1.0;
	a1a.g = 1.0;
	a1a.b = 1.0;
	SetMaterialAndSpriteColor(&a1a);
	njDrawSprite2D_Queue(&_sp, 0, 22047.0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	ClampGlobalColorThing_Thing();
}

void LoadLanguageTGSRules()
{
	switch (TextLanguage)
	{
	case 0:
		LoadPVM(off_914338[TGS_Char_Rule], TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
		break;
	case 1:
	default:
		switch (TGS_Char_Rule)
		{
		case 0:
			LoadPVM("USA_SOUSA_S", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		case 1:
			LoadPVM("USA_SOUSA_T", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		case 2:
			LoadPVM("USA_SOUSA_A", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		case 3:
			LoadPVM("USA_SOUSA_E", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		case 4:
			LoadPVM("USA_SOUSA_B", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		case 5:
			LoadPVM("USA_SOUSA_K", TGS_RULE_TEXLISTS_S[TGS_Char_Rule]);
			break;
		}
		break;
	}
}

void __cdecl EmeraldCoastWaterBridgeBoltDisplay(NJS_OBJECT *obj, float scale)
{
	ProcessModelNode_AB_Wrapper(obj, scale);
	njTranslate(0, 20, 0, 0);
	ProcessModelNode_AB_Wrapper((NJS_OBJECT *)0x1049BA4, scale);
}

void __cdecl MoreTailsTiredClips(int ID, void *a2, int a3, void *a4)
{
	int randomizer = rand();

	if (randomizer % 3 == 0)
	{
		PlaySound(1475, a2, a3, a4);
	}
	else if (randomizer % 2 == 0)
	{
		PlaySound(ID, a2, a3, a4);
	}
	else
	{
		PlaySound(1477, a2, a3, a4);
	}
}

void __cdecl TailsRaceMoreQuotes(int a1)
{
	int randomizer = rand();

	if (a1 == 205)
	{
		if (randomizer % 3 == 0)
		{
			PlayVoice(1831); //Let's get going!
		}
		else
		{
			PlayVoice(a1); //Come on, Tails! (Starting quote)
		}
		return;
	}

	if (CurrentLevel != 4)
	{
		if (a1 >= 206 && a1 <= 211)
		{
			if (Rings == 0 && randomizer % 6 == 0)
			{
				PlayVoice(215); //No rings, watch out!
				return;
			}
		}
		if (randomizer % 3 == 0)
		{
			switch (a1)
			{ 
			case 206: //Hey! Hey! Hey!

				randomizer = rand();

				if (randomizer % 5 == 0)
				{
					PlayVoice(1834); // ALT IS: Hold it!
				}
				else if (randomizer % 3 == 0)
				{
					PlayVoice(1833); //ALT IS: Wait! Wait Wait!
				}
				else
				{
					PlayVoice(1828);
				}
				break;
			case 207: //All right, Tails!
				PlayVoice(1827); //ALT IS: Good going!
				break;
			case 208: //Hey, Tails!
				PlayVoice(1824); //ALT IS: You got it!
				break;
			case 209: //You made it!
				PlayVoice(1823);
				break;
			case 210: //Come on!

				randomizer = rand();

				if (randomizer % 3 == 0)
				{
					PlayVoice(1836); //ALT IS: Okey dokey!
				}
				else
				{
					PlayVoice(1829);
				}
				break;
			case 212: //Hurry up, Tails!
				PlayVoice(1832); //ALT IS: Hang in there!
				break;
			case 213: //Hurray!
				PlayVoice(1835);
				break;
			default:
				PlayVoice(a1);
				break;
			}
		}
		else
		{
			PlayVoice(a1);
		}
	}
	else
	{
		PlayVoice(a1);
	}
}

void __cdecl TailsRaceMoreLoseQuotes(int a1)
{
	if (a1 == 214)
	{
		int randomizer = rand();

		if (randomizer % 7 == 0)
		{
			PlayVoice(1825); //I made it!
		}
		else if (randomizer % 5 == 0)
		{
			PlayVoice(1826); //I got it!
		}
		else if (randomizer % 4 == 0)
		{
			PlayVoice(1830); //I win!
		}
		else
		{
			PlayVoice(a1); //I got it (normal)
		}
	}
	else
	{
		PlayVoice(a1);
	}
}

//Voice number 822, blank in English, IS used in the cutscene after Tails beats the Egg Walker!!! What could this mean?! There's a voice for it in Japanese!!!
//Voice number 824, also blank in English, IS used in the cutscene!! There's a voice in it for Japanese! It's a girl saying "Amazing!", or something. WTF.
void __cdecl TailsPostFinalBossDialogue(int a1) //Adding in unused line for Tails post-final boss cutscene. It's not played in English nor Japanese.
{
	sub_431930(a1);
	sub_4314D0(30);
	sub_431930(823);
	sub_4314D0(1);
}

void __cdecl FinalEggAlarm()
{
	if (CurrentLevel == 10 && CurrentAct == 0 && CurrentCharacter == 0)
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			FinalEggAlarmDelay = -2;
			return;
		}

		if (FinalEggAlarmDelay == 0 && EntityData1Ptrs[0] && !IsGamePaused())
		{
			//PlaySound(298, 0, 0, 0);
			QueueSound_XYZ(298, EntityData1Ptrs[0], 1, 34, 142, 170, -40, 680);
			FinalEggAlarmDelay += (1 * FramerateSetting);
		}
		else
		{
			if (!IsGamePaused())
			{
				FinalEggAlarmDelay += (1 * FramerateSetting);
			}
		}

		if (FinalEggAlarmDelay >= 142)
		{
			FinalEggAlarmDelay = 0;
		}
	}
}

void __cdecl LostWorldPlantRustleSound(int a1)
{
	ObjectMaster *v1;

	v1 = (ObjectMaster *)a1;

	if (v1->Data1->Index == 15)
	{
		PlaySound(206, 0, 0, 0);
	}
	sub_5EA210(a1);
}

void __cdecl HotShelterAmbientSoundsMaster()
{
	int BubbleRandomizer;

	if (CurrentLevel != 12 || ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21) && !EntityData1Ptrs[0])) //Resets
	{
		if (HotShelterBANoiseActOther == true || HotShelterBANoiseAct1 == true || HotShelterBANoiseCargo == true)
		{
			HotShelterBANoiseActOther = false;
			HotShelterBANoiseAct1 = false;
			HotShelterBANoiseCargo = false;
		}
		return;
	}

	if (CurrentLevel == 12)
	{
		switch (CurrentAct)
		{
		case 0: //Act 1
			if (EntityData1Ptrs[0])
			{
				if (HotShelterBANoiseAct1 == false)
				{
					PlaySound2(965, (void *)0xFFFFFFFF, 8, 0); //EXTREMELY quiet background noise
					HotShelterBANoiseAct1 = true;
				}
				BubbleRandomizer = rand();

				if (BubbleRandomizer % 83 == 0)
				{
					if (EntityData1Ptrs[0]->Position.x < 540 && EntityData1Ptrs[0]->Position.y < 80 && EntityData1Ptrs[0]->Position.z < -300)
					{
						PlaySound(963, 0, 0, 0); //Bubble sound
					}
				}
			}
			break;
		case 1: //Amy Act 2
			if (EntityData1Ptrs[0])
			{
				if (EntityData1Ptrs[0]->Position.z < -1442)
				{
					if (EntityData1Ptrs[0]->Position.x > 380 && HotShelterBANoiseActOther == false)
					{
						PlaySound2(961, (void *)0xFFFFFFFF, 8, 0); //Machine noise
						HotShelterBANoiseActOther = true;
					}
					else if (EntityData1Ptrs[0]->Position.x < 370 && EntityData1Ptrs[0]->Position.z > -1870 && HotShelterBANoiseActOther == true)
					{
						DoSoundQueueThing(961);
						HotShelterBANoiseActOther = false;
					}
				}
				else if (EntityData1Ptrs[0]->Position.z > -1442)
				{
					if ((-320 > EntityData1Ptrs[0]->Position.z && EntityData1Ptrs[0]->Position.z > -1440) && EntityData1Ptrs[0]->Position.y < 230 && HotShelterBANoiseActOther == false)
					{
						PlaySound2(972, (void *)0xFFFFFFFF, 8, 0); //Gear noise
						HotShelterBANoiseActOther = true;
					}
					else if (EntityData1Ptrs[0]->Position.z < -1440 && HotShelterBANoiseActOther == true)
					{
						DoSoundQueueThing(972);
						HotShelterBANoiseActOther = false;
					}
				}
			}
			break;
		case 2: //Gamma Act "2" (Act 3)
			if (EntityData1Ptrs[0])
			{
				if (EntityData1Ptrs[0]->Position.y > 9990)
				{
					if (HotShelterBANoiseCargo == false)
					{
						if (HotShelterBANoiseActOther == true)
						{
							DoSoundQueueThing(961);
							HotShelterBANoiseActOther = false;
						}
						PlaySound2(974, (void *)0xFFFFFFFF, 8, 0); //Cargo noise
						HotShelterBANoiseCargo = true;
					}
					return;
				}
				else if (EntityData1Ptrs[0]->Position.y < 9990 && EntityData1Ptrs[0]->Position.z < -2900 && HotShelterBANoiseCargo == true)
				{
					DoSoundQueueThing(974);
					HotShelterBANoiseCargo = false;
				}

				else if (EntityData1Ptrs[0]->Position.z < -1442 && EntityData1Ptrs[0]->Position.y < 9990)
				{
					if (EntityData1Ptrs[0]->Position.x < -380 && HotShelterBANoiseActOther == false)
					{
						PlaySound2(961, (void *)0xFFFFFFFF, 8, 0); //Machine noise
						HotShelterBANoiseActOther = true;
					}
					else if (EntityData1Ptrs[0]->Position.x > -370 && EntityData1Ptrs[0]->Position.z > 1900 && HotShelterBANoiseActOther == true)
					{
						DoSoundQueueThing(961);
						HotShelterBANoiseActOther = false;
					}
				}
				else if (EntityData1Ptrs[0]->Position.z > -1442 && EntityData1Ptrs[0]->Position.y < 9990 && EntityData1Ptrs[0]->Position.x > -550)
				{
					if ((-320 > EntityData1Ptrs[0]->Position.z && EntityData1Ptrs[0]->Position.z > -1440) && EntityData1Ptrs[0]->Position.y < 230 && HotShelterBANoiseActOther == false)
					{
						PlaySound2(972, (void *)0xFFFFFFFF, 8, 0); //Gear noise
						HotShelterBANoiseActOther = true;
					}
					else if (EntityData1Ptrs[0]->Position.z < -1440 && HotShelterBANoiseActOther == true)
					{
						DoSoundQueueThing(972);
						HotShelterBANoiseActOther = false;
					}
				}
			}
			break;
		default:
			break;
		}
	}
}

void __cdecl OSe_Fixed(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // edi
	int v3; // ebx
	int v5; // edi

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (GetDebugMode())
		{
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
			SetMaterialAndSpriteColor_Float(0.02, 0.2, 0.2, 0.5);
			njScale(0, 1.0, 1.0, 1.0);
			sub_408530(&Sphere_Model);
			njPopMatrix(1u);
		}
		if (ObjectSelectedDebug(a1)) //lol useless debug shit
		{
			DisplayDebugString(0x110010, "-> TONE[MAX:");
			sub_780A50(0x1D0010, 8, 2);
			DisplayDebugString(0x1F0010, "]");
			DisplayDebugString(0x110013, "-> RADIUS");
			DisplayDebugString(0x110014, "-> VOLUME");
		}
		if (BossCharacter < 0)
		{
			v2 = v1->Rotation.x;
			v3 = (unsigned __int64)v1->Scale.y;
			if (v2 < 0)
			{
				v2 = 0;
				goto LABEL_19;
			}
			if ((unsigned int)v2 < 8)
			{
				if (id_sounds[v2] == 1102) //Checking the variable properly
				{
					if (GetTimeOfDay() == 2)
					{
						v5 = 1104; //using v5 instead of v2
						goto LABEL_20; //creating a new label and redirecting there, because whoever wrote this code originally was dumb
					}
				}
				if (v2 != 6 && v2 != 7)
				{
				LABEL_19:
					v5 = id_sounds[v2]; //Also got rid of that stupid check for the Final Egg Room sound beep thing ;)
					LABEL_20:
					QueueSound_XYZ(v5, v1, 1, v3, 30, v1->Position.x, v1->Position.y, v1->Position.z);
					return;
				}
			}
			else
			{
				v2 = 7;
			}
			if ((unsigned __int16)GetLevelAndAct() != 8449)
			{
				sub_424920(id_sounds[v2], v1, 1, v3, 30, v1);
			}
		}
	}
}

void __cdecl LostWorldAmbientSoundsMaster()
{
	if (CurrentLevel == 7 && CurrentAct == 0 && LostWorld1AmbiencePlayed == false && EntityData1Ptrs[0]) //Act 1
	{
		PlaySound2(961, (void *)0xFFFFFFFF, 8, 0);
		LostWorld1AmbiencePlayed = true;
	}

	if (CurrentLevel == 7 && CurrentAct == 0 && PlayedSnakeWaterNoise == false && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x > 5040)
	{
		//QueueSound_XYZ(195, a2->Data1, 1, 50, -2, 5595, a2->Data1->Position.y, 1355);
		//QueueSound_XYZ(195, EntityData1Ptrs[0], 1, 70, -2, EntityData1Ptrs[0]->Position.x, EntityData1Ptrs[0]->Position.y, EntityData1Ptrs[0]->Position.z);
		PlaySound2(195, (void *)0xFFFFFFFF, 2, 0);
		PlayedSnakeWaterNoise = true;
	}

	if (CurrentLevel == 7 && CurrentAct == 0 && PlayedSnakeWaterNoise == true && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x < 4940)
	{
		DoSoundQueueThing(195);
		PlayedSnakeWaterNoise = false;
	}

	if (CurrentLevel == 7 && CurrentAct == 1 && CurrentCharacter == 0 && LostWorld1AmbienceAct2Played == true && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x > 0 && EntityData1Ptrs[0]->Position.z > -160) //Act 2
	{
		DoSoundQueueThing(963); //This cancels all sound effects of this ID currently playing
		LostWorld1AmbienceAct2Played = false;
	}
	else if (CurrentLevel == 7 && CurrentAct == 1 && LostWorld1AmbienceAct2Played == false && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.x < -200 && EntityData1Ptrs[0]->Position.z > -100)
	{
		PlaySound2(963, (void *)0xFFFFFFFF, 8, 0);
		LostWorld1AmbienceAct2Played = true;
	}
	else if (CurrentLevel == 7 && CurrentAct == 1 && CurrentCharacter == 0 && LostWorld1AmbienceAct2Played == false && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.z < -1360 && EntityData1Ptrs[0]->Position.y > 60)
	{
		PlaySound2(963, (void *)0xFFFFFFFF, 8, 0);
		LostWorld1AmbienceAct2Played = true;
	}

	if (CurrentLevel != 7 || ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21) && !EntityData1Ptrs[0])) //Resets
	{
		if (LostWorld1AmbienceAct2Played == true || LostWorld1AmbiencePlayed == true || PlayedSnakeWaterNoise == true)
		{
			LostWorld1AmbiencePlayed = false;
			LostWorld1AmbienceAct2Played = false;
			PlayedSnakeWaterNoise = false;
		}
	}
}
/*
void __cdecl sub_5E66D0_new(int a2) //For Lost World Aoki Switch
{
	int v1; // esi
	int v2; // eax
	Uint8 v3; // al

	v1 = *(_DWORD *)(a2 + 32);
	if (IsPlayerInsideSphere((NJS_VECTOR *)(v1 + 32), 410.0) && !MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR *)(v1 + 32));
		v2 = *(_DWORD *)(v1 + 24);
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_407A00(&stru_20304E4, 1.0);
		if (byte_3C7ED8C[*(signed __int16 *)(*(_DWORD *)(a2 + 32) + 14)] & 1)
		{
			njTranslate(0, 0.0, 0.0, 0.0);
		}
		else
		{
			njTranslate(0, 0.0, 0.60000002, 0.0);
		}
		njControl3D(NJD_CONTROL_3D_MODEL_CLIP | NJD_CONTROL_3D_DEPTH_QUEUE | NJD_CONTROL_3D_OFFSET_MATERIAL | NJD_CONTROL_3D_ENABLE_ALPHA | NJD_CONTROL_3D_CONSTANT_ATTR);
		v3 = *(char *)(v1 + 9);
		matlistSTG07_00151660[4].attrflags |= (unsigned int)&stru_217FF18[19].y;
		matlistSTG07_00151660[4].diffuse.argb.r = v3;
		matlistSTG07_00151660[4].diffuse.argb.g = v3;
		matlistSTG07_00151660[4].diffuse.argb.b = v3;
		matlistSTG07_00151660[4].diffuse.argb.a = -56;
		matlistSTG07_00151660[3].attrflags |= (unsigned int)&stru_217FF18[19].y;
		matlistSTG07_00151660[3].diffuse.argb.r = v3;
		matlistSTG07_00151660[3].diffuse.argb.g = v3;
		matlistSTG07_00151660[3].diffuse.argb.b = v3;
		matlistSTG07_00151660[3].diffuse.argb.a = -56;
		DrawModel_ResetRenderFlags(&attachSTG07_00151E30);
		njControl3D(NJD_CONTROL_3D_CONSTANT_TEXTURE_MATERIAL | NJD_CONTROL_3D_MODEL_CLIP | NJD_CONTROL_3D_DEPTH_QUEUE | NJD_CONTROL_3D_OFFSET_MATERIAL | NJD_CONTROL_3D_ENABLE_ALPHA | NJD_CONTROL_3D_CONSTANT_ATTR);
		njPopMatrix(1u);
	}
}*/

void __cdecl IslandDoorCrapMod(int a2)
{
	ObjectMaster *a1;

	a1 = (ObjectMaster *)a2;

	if (!IsPlayerInsideSphere(&a1->Data1->Position, 150)) //Adding my own radius check, as the object's doesn't do anything with the check.
	{
		a1->Data1->NextAction = 2;
		a2 = (int)a1;
	}

	sub_53F0F0(a2);
}
/*
void __cdecl IslandDoorCrapMod2(int a2)
{
	int v1;

	v1 = *(_DWORD *)(a2 + 32);
	*(char *)(v1 + 1) = 2;
	sub_53F200(a2);
}*/

void __cdecl IceballSoundPlus(int ID, void *a2, int a3, void *a4) //Snowman enemy sound plus!
{
	if ((int)rand() % 2 == 0)
	{
		PlaySound(878, a2, a3, a4);
	}
	else
	{
		PlaySound(878, a2, a3, a4);
	}
}

void __cdecl IceballSoundPlus2(int a1, EntityData1 *a2, int a3, int a4, float x, float y, float z) //Snowman enemy sound plus...again!
{
	if ((int)rand() % 2 == 0)
	{
		sub_424FC0(878, 0, 0, 50, x, y, z);
	}
	else
	{
		sub_424FC0(a1, 0, 0, 50, x, y, z);
	}
}

void __cdecl sub_42DE70_new() //Thanks, MainMemory! :D
{
	signed int v0; // edi
	int v1; // ebp
	signed int v2; // esi
	signed int v3; // ebx
	int v4; // esi
	int v5; // ch
	int v6; // cl
	unsigned int v7; // [esp+10h] [ebp-4h]

	v0 = 10;
	if (TGS_CurrentMode == 10)
	{
		v7 = 0xFF00FF00u;
		v1 = 0xFFDFDFDFu;
	}
	else
	{
		v7 = 0xFF00BF00u;
		v1 = 0xFF7F7F7Fu;
	}
	SetDebugFontColor(v1);
	DisplayDebugString(0x100008u, "STAGE SELECT");
	v3 = byte_3B2C424 + 71;
	v2 = 13;
	do
	{
		v4 = v3 % 76;
		if (v4 == byte_3B2C424)
		{
			v6 = v7;
		}
		else
		{
			v6 = v1;
		}
		SetDebugFontColor(v6);
		v5 = (stru_914488[v4].Level << 3) | stru_914488[v4].Act;
		DisplayDebugString(v0 | 0x100000, TGS_StageListRestore[v5]);
		v3 = v4 + 1;
		++v0;
		--v2;
	} while (v2);
	SetDebugFontColor(-1);
}

int loc_42ED76()
{
	if ((ControllerPointers[0]->HeldButtons & Buttons_X) && (ControllerPointers[0]->HeldButtons & Buttons_L)) //Allows access to the other level select
	{
		TGS_CurrentMode = 0;
		dword_3B2C44C = 1;
		__asm pop esi
		return -1;
	}

	TGS_CurrentMode = 9; //grants access to the 3-menu level select. Thanks MainMemory!
	dword_3B2C44C = 1;
	__asm pop esi
	return 0;
}

void sub_42D880_add()
{
	Int v0; // esi
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]

	_sp.tlist = TITLE_TEXLIST_S;
	_sp.tanim = &stru_9140E0;
	njSetTexture(TITLE_TEXLIST_S);
	SetMaterialAndSpriteColor_Float(1.0, 0.4f, 0.4f, 0.4f);
	_sp.sx = -HorizontalStretch;
	_sp.sy = HorizontalStretch;
	_sp.p.x = 320.0 * HorizontalStretch;
	_sp.p.y = 0.0;
	v0 = 0;
	do
	{
		njDrawSprite2D_Queue(&_sp, v0++, 22047.0, NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
	} while (v0 < 6);
	ClampGlobalColorThing_Thing();
}

void __cdecl sub_42F2C0_new(ObjectMaster *a1)
{
	signed int v1; // ebx
	EntityData1 *v2; // esi
	__int16 v3; // ax
	__int16 v4; // ax
	Sint16 v5; // bp
	int v6; // eax
	char v7; // al
	char v8; // al
	char v9; // al
	char v10; // al
	char v11; // al
	_BOOL1 v12; // sf
	char v13; // al
	char v14; // dl
	char v15; // al
	int v16; // eax
	char v17; // dl
	Sint16 v18; // bp
	signed int v19; // ebp
	signed int v20; // edi
	char v21; // dh
	char v22; // dl
	unsigned int v23; // [esp+10h] [ebp-4h]
	unsigned int retaddr = 0; // [esp+14h] [ebp+0h]
	ObjectMaster *thisa; // [esp+18h] [ebp+4h]

	v2 = a1->Data1;
	v23 = retaddr ^ security_cookie;
	//PrintDebug("Reached main function...\n");
	v1 = 0;
	switch (v2->Action)
	{
	case 0:
		//PrintDebug("Action is 0\n");
		ScreenFade_Start();
		v2->Action = 1;
		//PrintDebug("Used LABEL_3\n");
		goto LABEL_3;
	case 1:
		//PrintDebug("Action is 1\n");
	LABEL_3:
		if (ScreenFade_Run())
		{
			//PrintDebug("Used LABEL_46\n");
			goto LABEL_46;
		}
		//njLoadTexture_Wrapper(stru_914708);
		//PrintDebug("Loaded Texlist\n");
		v3 = 0;
		v2->Action = 2;
		v3 = CurrentLevel;
		v4 = CurrentAct | v3;
		byte_3B2C484 = HIBYTE(v4);
		byte_3B2C485 = v4;
		SetGlobalPoint2Col_Colors(0xFF000040, 0xFF100060, 0xFF002078);
		//PrintDebug("Used LABEL_40\n");
		goto LABEL_40;
	case 2:
		//PrintDebug("Action is 2\n");
		v5 = ScreenFade_Run();
		RunObjectChildren(a1);
		sub_42F270(a1);
		if (v5)
		{
			v2->Action = 3;
			EnableControl();
		}
		//PrintDebug("Used LABEL_40\n");
		goto LABEL_40;
	case 3:
		//PrintDebug("Action is 3\n");
		if (HeldButtons_fix[9] & AcceptButtons)
		{
			v6 = v2->NextAction;
			v2->Action = 6;
			sub_414470(word_914698[v6]);
			SetLevelAndAct(byte_3B2C484, byte_3B2C485);
			ScreenFade_Start_CopyAlpha();
			//PrintDebug("Used LABEL_14\n");
			goto LABEL_14;
		}
		if (HeldButtons_fix[9] & 0x400) //& 0x400
		{
			v7 = v2->NextAction - 1;
		}
		else
		{
			if (!(HeldButtons_fix[9] & 2)) //& 2
			{
				//PrintDebug("Used LABEL_14\n");
				goto LABEL_14;
			}
			v7 = v2->NextAction + 1;
		}
		v2->NextAction = v7;
	LABEL_14:
		v8 = v2->NextAction;
		if (v8 < word_3B2C48C)
		{
			if (v8 < 0)
			{
				v2->NextAction = word_3B2C48C - 1;
			}
		}
		else
		{
			v2->NextAction = 0;
		}
		sub_42F270(a1);
		if (HeldButtons_fix[9] & 0x20) //& 0x20
		{
			v9 = v2->CharIndex + 1;
		LABEL_30:
			v2->CharIndex = v9;
			//PrintDebug("Used LABEL_31\n");
			goto LABEL_31;
		}
		if (HeldButtons_fix[9] & 0x10) //& 0x10
		{
			v9 = v2->CharIndex - 1;
			//PrintDebug("Used LABEL_30\n");
			goto LABEL_30;
		}
		if (HeldButtons_fix[9] & 0x40) //& 0x40
		{
			v11 = v2->CharIndex;
			v12 = (char)(v11 - 28) < 0;
			v10 = v11 - 28;
			v2->CharIndex = v10;
			if (v12)
			{
				v13 = v10 + 84;
				v2->CharIndex = v13;
				if (v13 >= 79)
				{
					v9 = v13 - 28;
					//PrintDebug("Used LABEL_30\n");
					goto LABEL_30;
				}
			}
		}
		else if (ControllerPointers[0]->HeldButtons < 0)
		{
			v14 = v2->CharIndex + 28;
			v12 = (char)(v2->CharIndex - 51) < 0;
			v2->CharIndex = v14;
			if (!((unsigned __int8)v12 ^ __OFSUB__(v14, 79)))
			{
				v2->CharIndex = v14 - 84;
				if ((char)(v14 - 84) < 0)
				{
					v9 = v14 - 84 + 28;
					//PrintDebug("Used LABEL_30\n");
					goto LABEL_30;
				}
			}
		}
	LABEL_31:
		v15 = v2->CharIndex;
		if (v15 < 79)
		{
			if (v15 < 0)
			{
				v2->CharIndex = 78;
			}
		}
		else
		{
			v2->CharIndex = 0;
		}
		v16 = 2 * v2->CharIndex;
		v17 = byte_9145F9[v16];
		byte_3B2C484 = byte_9145F8[v16];
		byte_3B2C485 = v17;
	LABEL_40:
		thisa = (ObjectMaster *)2;
		v20 = 1;
		v19 = 0x10000;
		do
		{
			if (v1 == v2->CharIndex)
			{
				SetDebugFontColor(-2080684);
				DisplayDebugString(v20 | v19, "@");
				SetDebugFontColor(-4144960);
			}
			v21 = byte_9145F8[2 * v1];
			v22 = byte_9145F9[2 * v1];
			DisplayDebugString((v20++ | ((_DWORD)thisa << 16)), TGS_StageListRestore2[v1]);
			if (v20 > 28)
			{
				v20 = 1;
				thisa = (ObjectMaster *)((char *)thisa + 12);
				v19 += 786432;
			}
			++v1;
		} while (v1 < 79);
	LABEL_46:
		sub_643EA7(retaddr ^ v23);
		return;
	case 6:
		//PrintDebug("Action is 6\n");
		v18 = ScreenFade_RunActive();
		DisableControl();
		if (!v18)
		{
			sub_42F270(a1);
			//PrintDebug("Used LABEL_40\n");
			goto LABEL_40;
		}
		v2->Action = 7;
	LABEL_38: 
		word_3B2C488 = 1;
		//njReleaseTexture(&stru_914708);
		DeleteAllObjects();
		sub_643EA7(retaddr ^ v23);
		return;
	case 7:
		//PrintDebug("Action is 7\n");
		//PrintDebug("Used LABEL_38\n");
		goto LABEL_38;
	default:
		//PrintDebug("Action defaulted\n");
		//PrintDebug("Used LABEL_40\n");
		goto LABEL_40;
	}
}

void __cdecl DontSetTexture(NJS_TEXLIST *texlist)
{
	return;
}


static const void *const Sonic_GroundAnimPtr = (void*)0x491660;
static inline Bool Sonic_GroundAnim(EntityData1 *a1, CharObj2 *a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Sonic_GroundAnimPtr
		mov result, eax
	}
	return result;
}

static const void *const Tails_GroundAnimPtr = (void*)0x459BF0;
static inline Bool Tails_GroundAnim(EntityData1 *a1, CharObj2 *a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Tails_GroundAnimPtr
		mov result, eax
	}
	return result;
}

void __cdecl SonicCall(EntityData1 *a1, CharObj2 *a2)
{
	Sonic_GroundAnim(a1, a2);
}

void __cdecl TailsCall(EntityData1 *a1, CharObj2 *a2)
{
	Tails_GroundAnim(a1, a2);
}

void __cdecl SonicLandingCheck(EntityData1 *a1, CharObj2 *a2)
{
	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		SonicCall(a1, a2);
	}
}

void __cdecl TailsLandingCheck(EntityData1 *a1, CharObj2 *a2)
{
	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		TailsCall(a1, a2);
	}
}


static const void *const Knuckles_Something_A_fixPtr = (void*)0x472D60;
static inline Bool Knuckles_Something_A_fix(EntityData1 *a1, int a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Knuckles_Something_A_fixPtr
		mov result, eax
	}
	return result;
}

void __cdecl KnucklesCall(EntityData1 *a1, int a2)
{
	Knuckles_Something_A_fix(a1, a2);
}

void __cdecl KnucklesLandingUse(EntityData1 *a1, int a2)
{
	CharObj2 *a3;

	a3 = (CharObj2 *)a2;

	if (a3->AnimationThing.Index == 20 && landingtimer == 0)
	{
		a3->AnimationThing.Index = 1;
		a2 = (int)a3;
	}

	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		KnucklesCall(a1, a2);
	}
	return;
}


static const void *const Amy_Something_GroundPtr = (void*)0x484520;
static inline Bool Amy_Something_Ground(int a1, int a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Amy_Something_GroundPtr
		mov result, eax
	}
	return result;
}

void __cdecl AmyCall(int a1, int a2)
{
	Amy_Something_Ground(a1, a2);
}

void __cdecl AmyLandingCheck(int a1, int a2)
{
	CharObj2 *a3;

	a3 = (CharObj2 *)a2;

	if (a3->AnimationThing.Index == 19 && landingtimer == 0)
	{
		a3->AnimationThing.Index = 1;
		a2 = (int)a3;
	}

	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		AmyCall(a1, a2);
	}
}


static const void *const Big_Something_GroundPtr = (void*)0x48BA80;
static inline Bool Big_Something_Ground(EntityData1 *a1, int a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Big_Something_GroundPtr
		mov result, eax
	}
	return result;
}

void __cdecl BigCall(EntityData1 *a1, int a2)
{
	Big_Something_Ground(a1, a2);
}

void __cdecl BigLandingCheck(EntityData1 *a1, int a2)
{
	CharObj2 *a3;

	a3 = (CharObj2 *)a2;

	if (a3->AnimationThing.Index == 6 && landingtimer == 0)
	{
		a3->AnimationThing.Index = 0;
		a2 = (int)a3;
	}

	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		BigCall(a1, a2);
	}
}



static const void *const Gamma_Something_GroundPtr = (void*)0x48BA80;
static inline Bool Gamma_Something_Ground(EntityData1 *a1, int a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call Gamma_Something_GroundPtr
		mov result, eax
	}
	return result;
}

void __cdecl GammaCall(EntityData1 *a1, int a2)
{
	Gamma_Something_Ground(a1, a2);
}

void __cdecl GammaLandingCheck(EntityData1 *a1, int a2)
{
	if (landingtimer > 0)
	{
		landingtimer -= (1 * FramerateSetting);
	}
	if (landingtimer <= 0)
	{
		GammaCall(a1, a2);
	}
}


PointerInfo pointers[] = {

	ptrdecl(0x42F00C, loc_42ED76) //For the 3-menu level select
};


void Init(const char *path, const HelperFunctions &helperFunctions)
{
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	//Fixing Various
	AnimTestThingie = config->getBool("Options", "AnimTestThingie", false);
	JackleCard = config->getBool("Options", "JackleCard", true);
	DTargetRing = config->getBool("Options", "DTargetRing", true);
	NightopianEggFix = config->getBool("Options", "NightopianEggFix", false);
	NightRankCrystal = config->getBool("Options", "NightRankCrystal", true);
	//AokiSwitch = config->getBool("Options", "AokiSwitch", false);
	LostLight = config->getBool("Options", "LostLight", true);
	AwningColor = config->getBool("Options", "AwningColor", false);
	WindyValleyLeaves = config->getBool("Options", "WindyValleyLeaves", true);
	WindyValleyTornado = config->getBool("Options", "WindyValleyTornado", true);
	CutsceneFixes = config->getBool("Options", "CutsceneFixes", true);
	BigBetaHotel = config->getBool("Options", "BigBetaHotel", false);
	SkyDeckDrawDist = config->getBool("Options", "SkyDeckDrawDist", true);
	LevelClearPlus = config->getBool("Options", "LevelClearPlus", true);
	StarJumpPanel = config->getBool("Options", "StarJumpPanel", true);
	TGSModeActive = config->getBool("Options", "TGSModeActive", true);
	WaterBridge = config->getBool("Options", "WaterBridge", true);
	AngelDoor = config->getBool("Options", "AngelDoor", true);
	SPRActivate = config->getBool("Options", "SPRActivate", false);
	LanderUse = config->getBool("Options", "LanderUse", true);
	AnimatePLUS = config->getBool("Options", "AnimatePLUS", true);
	KnucklesAnimate = config->getBool("Options", "KnucklesAnimate", false);

	//Chaos 0 Plants
	Chaos0Plants = config->getBool("Options", "Chaos0Plants", true);

	//Egg Carrier
	PatrolCopter = config->getBool("Options", "PatrolCopter", true);
	Lightning = config->getBool("Options", "Lightning", true);
	GoodSign = config->getBool("Options", "GoodSign", true);

	//Voices
	FinalEggAnnouncer = config->getBool("Options", "FinalEggAnnouncer", true);
	PerfectChaos = config->getBool("Options", "PerfectChaos", true);
	BetaRematch = config->getBool("Options", "BetaRematch", true);
	SkyDeck2Announcer = config->getBool("Options", "SkyDeck2Announcer", true);
	SkyDeck1Announcer = config->getBool("Options", "SkyDeck1Announcer", true);
	KnucklesNoRing = config->getBool("Options", "KnucklesNoRing", true);
	AmyNoRing = config->getBool("Options", "AmyNoRing", true);
	TailsNoRing = config->getBool("Options", "TailsNoRing", true);
	BigNoRing = config->getBool("Options", "BigNoRing", true);
	BarrierLoss = config->getBool("Options", "BarrierLoss", true);
	WaterStuff = config->getBool("Options", "WaterStuff", true);
	LightSpeed = config->getBool("Options", "LightSpeed", true);
	TailsFlight = config->getBool("Options", "TailsFlight", true);
	KnucklesHurt = config->getBool("Options", "KnucklesHurt", true);
	AmyHurt = config->getBool("Options", "AmyHurt", true);
	FishingFailed = config->getBool("Options", "FishingFailed", true);
	FinalEggColorDoor = config->getBool("Options", "FinalEggColorDoor", true);
	ItemVoices = config->getBool("Options", "ItemVoices", true);
	BoatNoise = config->getBool("Options", "BoatNoise", true);
	SkyChaseAlt = config->getBool("Options", "SkyChaseAlt", true);
	TailsTiredVoices = config->getBool("Options", "TailsTiredVoices", true);
	TailsRaceLines = config->getBool("Options", "TailsRaceLines", true);
	HotShelterNoises = config->getBool("Options", "HotShelterNoises", true);
	FinalEggAlarmer = config->getBool("Options", "FinalEggAlarmer", true);
	TailsStoryPlus = config->getBool("Options", "TailsStoryPlus", true);
	LostWorldNoises = config->getBool("Options", "LostWorldNoises", true);
	MysticRuinsJungleNightNoise = config->getBool("Options", "MysticRuinsJungleNightNoise", true);
	LostWorldPlantNoise = config->getBool("Options", "LostWorldPlantNoise", true);
	SnowmanSound = config->getBool("Options", "SnowmanSound", true);
	BigRanker = config->getBool("Options", "BigRanker", true);

	delete config;

	if (AwningColor)
	{
		*(NJS_OBJECT*)0x0267EF6C = object_00176704; //Speed Highway awning
	}
	if (LostLight)
	{
		*(NJS_MODEL_SADX*)0x020275AC = attach_0012CED4; //Lost World Light
	}
	//if (AokiSwitch)
	//{
	//	*(NJS_MODEL_SADX*)0x0202FF74 = attachSTG07_00151E30; //Aokiswitch.
	//}
	if (NightRankCrystal)
	{
		*(NJS_MODEL_SADX*)0x01DCF3B0 = attach_019CF3B0; //Casinopolis Rank Crystal (F)
	}
	if (DTargetRing)
	{
		*(NJS_MODEL_SADX*)0x01D8E440 = attach_0198E440; //Casinopolis DTarget Ring Bright Ver.
		*(NJS_MODEL_SADX*)0x01D8E6C8 = attach_0198E6C8; //Casinopolis DTarget Ring Dark Ver.
	}
	if (NightopianEggFix)
	{
		UnusedEggNightopianACTION.object = &object_00155E04; //Casinopolis Piantama
	}
	*(NJS_MODEL_SADX*)0x01DD2094 = attach_00153F0C; //Casinopolis Piantama Top
	*(NJS_MODEL_SADX*)0x01DD23FC = attach_00154264; //Casinopolis Piantama Bottom
	*(NJS_MODEL_SADX*)0x01DD1D18 = attach_00153BA4; //Casinopolis Piantama Full
}



extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer, &Init, NULL, 0, NULL, 0, NULL, 0, arrayptrandlength(pointers) };

	__declspec(dllexport) void cdecl Init()
	{
		//Fixing Various
		if (WindyValleyLeaves)
		{
			WriteCall((void *)0x4E379D, LeafFix); //Removing ClipSet check for the leaves of Pu Wind.
			WriteCall((void *)0x4E354B, LeafFix);
			WriteCall((void *)0x4E52AD, LeafFix); //Doing the same for BLeaf.
		}
		//if (AokiSwitch)
		//{
		//	WriteJump((void *)0x5E66D0, sub_5E66D0_new);
		//}

		if (BigBetaHotel)
		{
			WriteCall((void *)0x6368DE, KeyBlockLanguageAdds);
		}
		WriteJump((void *)0x636067, ChaoCardLanguageAdds);
		if (WindyValleyTornado)
		{
			WriteJump((void *)0x4DDC10, TornadoLeafDisplay);
			WriteCall((void *)0x4DEA9B, TornadoRandomGeneratorFix);
			WriteCall((void *)0x4DEB0A, TornadoRandomGeneratorFix);
			WriteCall((void *)0x4DDFB7, TornadoRandomLeafFix);
		}
		if (CutsceneFixes)
		{
			WriteCall((void *)0x693669, KnucklesVSChaos2Fix);
		}
		if (SkyDeckDrawDist)
		{
			SkyDeckObjectList[76].Distance = 3000000.0f; //Fixing the distance on the red light object and small wall light object in Sky Deck so that many of them in Act 1 can actually be seen.
			SkyDeckObjectList[77].Distance = 3000000.0f; //Above: red light, this one: small light
		}

		if (StarJumpPanel)
		{
			WriteJump((void *)0x4B8660, JumpPanel_Display_new); //Restoring Star Jump Panel
			WriteCall((void *)0x4B8E2D, JumpPanel_StarCollisionFix);
		}

		if (TGSModeActive)
		{
			WriteJump((void *)0x5033B0, TGSTesting); //Allowing the use of TGS Menus from ANY menu outside of the main game.
			WriteJump((void *)0x42D880, sub_42D880_new); //Fixing scaling the images, like the title screen, LOADING image, the character select, and the tutorial images.
			WriteJump((void *)0x42E5F0, sub_42E5F0_new);
			WriteJump((void *)0x42DAC0, sub_42DAC0_new);
			WriteJump((void *)0x42D8F0, sub_42D8F0_new);
			WriteJump((void *)0x42DA40, sub_42DA40_new);
			WriteJump((void *)0x42DD50, sub_42DD50_new);
			WriteJump((void *)0x42DB40, sub_42DB40_new);
			WriteJump((void *)0x42DE70, sub_42DE70_new);

			WriteCall((void *)0x42EB4B, LoadLanguageTGSRules);
			WriteCall((void *)0x42EC2F, LoadLanguageTGSRules);

			WriteJump((void *)0x42F2C0, sub_42F2C0_new); //For the blue-screen level select
			WriteCall((void *)0x42F276, DontSetTexture);

			if (!(FramerateSetting >= 2))
			{
				WriteData<1>((void*)0x042E8A8, 0x14u); //title screen music play frame fix
				WriteData<1>((void*)0x042E919, 0x2Cu); //Demo play title screen frame fix
				WriteData<1>((void*)0x042E91A, 0x1u); //same
				WriteData<1>((void*)0x042ECF8, 0xB0u); //Character Select back to title frame fix
				WriteData<1>((void*)0x042ECF9, 0x4u); //same
			}
			WriteData<1>((void*)0x042E0AB, 0x1u);
			WriteData<1>((void*)0x042E28F, 0x9u);
			WriteData<1>((void*)0x042E18D, 0xAu);
			WriteData<1>((void*)0x042E39F, 0xBu);
		}

		if (WaterBridge)
		{
			WriteCall((void *)0x501BAA, EmeraldCoastWaterBridgeBoltDisplay);
		}

		//Voices
		WriteData((short*)0x915C68, (short)371); //Idle line for Chaos 4 for Sonic fix
		if (BoatNoise)
		{
			WriteJump((void *)0x412D80, BoatStartSound);
		}

		if (ItemVoices)
		{
			WriteJump((void *)0x4D6D80, InvincibilityPowerupMORE);
			WriteJump((void *)0x4D6BF0, SpeedShoesPowerupMORE);
			WriteJump((void *)0x4D6D40, ExtraLifePowerupMORE);
		}

		if (SkyChaseAlt)
		{
			WriteCall((void *)0x62711C, SkyChaseAlt1);
			WriteCall((void *)0x627135, SkyChaseAlt2);
			WriteCall((void *)0x62714E, SkyChaseAlt3);
			WriteCall((void *)0x627167, SkyChaseAlt4);
			WriteCall((void *)0x6271F5, SkyChaseAlt4);
		}

		//Chaos 0 Plants
		if (Chaos0Plants)
		{
			WriteJump((void *)0x549A90, OGras0_New);
			WriteJump((void *)0x549AC0, OGras1_New);
			WriteJump((void *)0x549AF0, OGras2_New);
			WriteJump((void *)0x549B20, OGras3_New);
		}

		//Egg Carrier
		if (PatrolCopter)
		{
			EggCarrierExtObjectList[9].LoadSub = HeliCheck;
		}
		if (Lightning)
		{
			EggCarrierExtObjectList[18].LoadSub = LightningCheck;
			EggCarrierExtObjectList[18].UseDistance = 2;
			WriteCall((void *)0x521F91, LightningDrawChange);
			WriteCall((void *)0x521D91, LightningDrawChange);
			WriteCall((void *)0x521E70, LightningDrawChange);
		}
		if (GoodSign)
		{
			WriteCall((void *)0x52C877, GOODModelRestoration);
		}
		if (AngelDoor)
		{
			//WriteCall((void *)0x53F4C5, IslandDoorCrapMod2);
			//WriteCall((void *)0x53F533, IslandDoorCrapMod2);
			WriteCall((void *)0x53F504, IslandDoorCrapMod);
		}

		if (TailsTiredVoices)
		{
			WriteCall((void *)0x45D90D, MoreTailsTiredClips);
		}

		if (TailsRaceLines)
		{
			WriteCall((void *)0x47C1E4, TailsRaceMoreQuotes);
			WriteCall((void *)0x45BE57, TailsRaceMoreLoseQuotes);
		}

		if (TailsStoryPlus)
		{
			WriteCall((void *)0x6B167B, TailsPostFinalBossDialogue);
		}
		if (LostWorldPlantNoise)
		{
			WriteCall((void *)0x5EA5B7, LostWorldPlantRustleSound);
		}
		if (MysticRuinsJungleNightNoise)
		{
			WriteJump((void *)0x5386C0, OSe_Fixed);
		}
		if (SnowmanSound)
		{
			WriteCall((void *)0x4C7E0B, IceballSoundPlus);
			WriteCall((void *)0x4C87AB, IceballSoundPlus2);
		}

		if (LanderUse)
		{
			WriteCall((void *)0x49AD5C, SonicLandingCheck); //Sonic
			WriteData<1>((void*)0x049772C, 0x0Cu);
			WriteData<1>((void*)0x049772D, 0x08u);
			WriteData<1>((void*)0x049772E, 0x7Eu);
			WriteData<1>((void*)0x0497A6F, 0x0Cu);
			WriteData<1>((void*)0x0497A70, 0x08u);
			WriteData<1>((void*)0x0497A71, 0x7Eu);
			WriteData<1>((void*)0x0497C8B, 0x0Cu);
			WriteData<1>((void*)0x0497C8C, 0x08u);
			WriteData<1>((void*)0x0497C8D, 0x7Eu);
			WriteData<1>((void*)0x0498C51, 0x0Cu);
			WriteData<1>((void*)0x0498C52, 0x08u);
			WriteData<1>((void*)0x0498C53, 0x7Eu);
			WriteData<1>((void*)0x0498D72, 0x0Cu);
			WriteData<1>((void*)0x0498D73, 0x08u);
			WriteData<1>((void*)0x0498D74, 0x7Eu);
			WriteData<1>((void*)0x0499077, 0x0Cu);
			WriteData<1>((void*)0x0499078, 0x08u);
			WriteData<1>((void*)0x0499079, 0x7Eu);
			//WriteData<1>((void*)0x0499097, 0x3Au);
			//WriteData<1>((void*)0x0498D58, 0x3Au);	
			//WriteData<1>((void*)0x049773F, 0x13u);

			WriteData<1>((void*)0x045EADF, 0x0Cu); //Tails
			WriteData<1>((void*)0x045EAE0, 0x08u);
			WriteData<1>((void*)0x045EAE1, 0x7Eu);
			WriteData<1>((void*)0x045ED0F, 0x0Cu);
			WriteData<1>((void*)0x045ED10, 0x08u);
			WriteData<1>((void*)0x045ED11, 0x7Eu);
			WriteData<1>((void*)0x045EDC9, 0x0Cu);
			WriteData<1>((void*)0x045EDCA, 0x08u);
			WriteData<1>((void*)0x045EDCB, 0x7Eu);
			WriteData<1>((void*)0x045EF2B, 0x0Cu);
			WriteData<1>((void*)0x045EF2C, 0x08u);
			WriteData<1>((void*)0x045EF2D, 0x7Eu);
			WriteData<1>((void*)0x045FC0D, 0x0Cu);
			WriteData<1>((void*)0x045FC0E, 0x08u);
			WriteData<1>((void*)0x045FC0F, 0x7Eu);
			WriteData<1>((void*)0x045FD25, 0x0Cu);
			WriteData<1>((void*)0x045FD26, 0x08u);
			WriteData<1>((void*)0x045FD27, 0x7Eu);
			WriteData<1>((void*)0x045FF86, 0x0Cu);
			WriteData<1>((void*)0x045FF87, 0x08u);
			WriteData<1>((void*)0x045FF88, 0x7Eu);
			//WriteData<1>((void*)0x045EAF1, 0x14u);
			//WriteData<1>((void*)0x045FC23, 0x53u);
			WriteCall((void *)0x461A1E, TailsLandingCheck);

			//WriteData<1>((void*)0x0478020, 0x14u); //Knuckles
			//WriteData<1>((void*)0x047A299, 0x14u);
			//WriteData<1>((void*)0x047A2B6, 0x5Fu);
			WriteData<1>((void*)0x0479EF0, 0x0Cu);
			WriteData<1>((void*)0x0479EF1, 0x08u);
			WriteData<1>((void*)0x0479EF2, 0x7Eu);
			WriteData<1>((void*)0x0479FE4, 0x0Cu);
			WriteData<1>((void*)0x0479FE5, 0x08u);
			WriteData<1>((void*)0x0479FE6, 0x7Eu);
			WriteData<1>((void*)0x047A296, 0x0Cu);
			WriteData<1>((void*)0x047A297, 0x08u);
			WriteData<1>((void*)0x047A298, 0x7Eu);
			WriteCall((void *)0x47A9B2, KnucklesLandingUse);
			WriteData<1>((void*)0x04785F5, 0x14u);
			//WriteData<1>((void*)0x0488F26, 0x14u);
			//WriteData<1>((void*)0x04898C7, 0x14u);

			WriteData<1>((void*)0x048A436, 0xE4u); //Amy
			WriteData<1>((void*)0x048A336, 0xE4u);
			WriteData<1>((void*)0x048A6F9, 0xE4u);
			//WriteData<1>((void*)0x048A449, 0x42u);
			//WriteData<1>((void*)0x048A719, 0x42u);
			WriteData<1>((void*)0x0488DD8, 0x13u);
			WriteCall((void *)0x48ADFD, AmyLandingCheck);

			WriteData<1>((void*)0x0490252, 0x0Cu); //Big
			WriteData<1>((void*)0x0490253, 0x08u);
			WriteData<1>((void*)0x0490254, 0x7Eu);
			WriteData<1>((void*)0x04904C7, 0x0Cu);
			WriteData<1>((void*)0x04904C8, 0x08u);
			WriteData<1>((void*)0x04904C9, 0x7Eu);
			WriteCall((void *)0x490CD9, BigLandingCheck);

			WriteData<1>((void*)0x0482BD1, 0x0Cu); //Gamma
			WriteData<1>((void*)0x0482BD2, 0x08u);
			WriteData<1>((void*)0x0482BD3, 0x7Eu);
			WriteData<1>((void*)0x0482CDC, 0x0Cu);
			WriteData<1>((void*)0x0482CDD, 0x08u);
			WriteData<1>((void*)0x0482CDE, 0x7Eu);
			WriteData<1>((void*)0x0483020, 0x0Cu);
			WriteData<1>((void*)0x0483021, 0x08u);
			WriteData<1>((void*)0x0483022, 0x7Eu);
			WriteCall((void *)0x4837E5, GammaLandingCheck);
		}
	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		//Fixing Various
		if ((ControllerPointers[0]->HeldButtons & Buttons_Y) && (ControllerPointers[0]->HeldButtons & Buttons_B) && TGS_CurrentMode == 1)
		{
			TGS_CurrentMode = 13; //allowing normally unused chao garden warp in the TGS menu
		}
		if ((TGS_CurrentMode == 9 || TGS_CurrentMode == 10 || TGS_CurrentMode == 11) && dword_3B2C44C == 1)
		{
			sub_42DD50_new(); //Just displays a black background when using the debug menus. WHY? Oh well, this fixes it.
		}

		if (SPRActivate)
		{
			if (CurrentLevel != 0 && EntityData1Ptrs[0] && ControllerPointers[0] && (ControllerPointers[0]->PressedButtons & Buttons_C) && Display_SPR_TASK == 1) //SPR_TASK display. Uses the C button! Can only use with InputFix mod.
			{
				Display_SPR_TASK = 0;
			}
			else if (CurrentLevel != 0 && EntityData1Ptrs[0] && ControllerPointers[0] && (ControllerPointers[0]->PressedButtons & Buttons_C))
			{
				Display_SPR_TASK = 1;
			}
			else if (CurrentLevel == 0 && Display_SPR_TASK != 0)
			{
				Display_SPR_TASK = 0;
			}
		}

		if (LanderUse)
		{
			if (GetCharacterID(0) != 5)
			{
				if (EntityData2Ptrs[0] && EntityData2Ptrs[0]->VelocityDirection.y < -2.0999999)
				{
					landingtimer = 60;
				}
			}
			else if (GetCharacterID(0) == 5)
			{
				if (EntityData2Ptrs[0] && EntityData2Ptrs[0]->VelocityDirection.y < -0.5)
				{
					landingtimer = 60;
				}
			}

			if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21) && landingtimer > 0)
			{
				landingtimer = 0;
			}
		}

		if (AnimatePLUS)
		{
			if (TailsAnimData[80].Animation != MILES_ACTIONS[21])
			{
				TailsAnimData[80].Animation = MILES_ACTIONS[21]; //Tails jumping while holding something.
				TailsAnimData[81].Animation = MILES_ACTIONS[22]; //Tails transition jumping while holding something.
				TailsAnimData[82].Animation = MILES_ACTIONS[23]; //Tails falling while holding something.
				TailsAnimData[83].Animation = MILES_ACTIONS[24]; //Tails landing while holding something
				TailsAnimData[62].AnimationSpeed = 0.5f; //Making his idle 'holding something' animation animate. (Exact animation speed TBD)

				AmyAnimData[19].Animation = AMY_ACTIONS[49]; //Setting her landing animation slot to actually use the animation.
				AmyAnimData[47].AnimationSpeed = 0.3f; //Making her idle 'holding something' animation animate. (Exact animation speed TBD)
				AmyAnimData[24].Property = 5; //fixing the hurt animation from looping over and over.
				AmyAnimData[29].Animation = AMY_ACTIONS[71]; //This is Amy's wind gust animation index (29), which used the idle animation (69), so I gave it an unused one!

				KnucklesAnimData[74].AnimationSpeed = 1.0f; //Making his idle 'holding something' animation animate. (Exact animation speed TBD)
				KnucklesAnimData[25].Property = 5; //If you don't want an animation to loop over and over, set the property in its animation index slot to 5. (This fixes Knuckles' and Amy's hurt animations from looping over and over.)

				SonicAnimData[37].AnimationSpeed = 0.5f; //Making his idle 'holding something' animation animate. (Exact animation speed TBD)
			}

			if (GetCharacterID(0) == 2 && GetCharObj2(0) && GetCharObj2(0)->AnimationThing.Index == 62 && EntityData1Ptrs[0] && !(EntityData1Ptrs[0]->Status & Status_Ground) && EntityData2Ptrs[0]->VelocityDirection.y > 0 && (ControllerPointers[0]->PressedButtons & Buttons_A))
			{
				GetCharObj2(0)->AnimationThing.Index = 80; //Fixing Tails missing programming for switching to the 'jumping while holding something' animation.
			}
		}

		if (KnucklesAnimate)
		{
			if (GetCharacterID(0) == 3 && CurrentLevel > 14 && CurrentLevel < 26)
			{
				if (KnucklesAnimData[0].Animation != KNUCKLES_ACTIONS[81])
				{
					KnucklesAnimData[0].Animation = KNUCKLES_ACTIONS[81];
					KnucklesAnimData[1].Animation = KNUCKLES_ACTIONS[80];
					KnucklesAnimData[2].Animation = KNUCKLES_ACTIONS[81];
					KnucklesAnimData[0].AnimationSpeed = 0.5f;
					KnucklesAnimData[2].AnimationSpeed = 0.5f;

					KnucklesAnimData[4].Animation = KNUCKLES_ACTIONS[66];
					KnucklesAnimData[5].Animation = KNUCKLES_ACTIONS[67];
					KnucklesAnimData[6].Animation = KNUCKLES_ACTIONS[68];
					KnucklesAnimData[6].Property = 4;

				}
			}
			else if (GetCharacterID(0) == 3 && KnucklesAnimData[0].Animation != KNUCKLES_ACTIONS[82])
			{
				KnucklesAnimData[0].Animation = KNUCKLES_ACTIONS[82];
				KnucklesAnimData[1].Animation = KNUCKLES_ACTIONS[82];
				KnucklesAnimData[2].Animation = KNUCKLES_ACTIONS[82];
				KnucklesAnimData[0].AnimationSpeed = 1.0f;
				KnucklesAnimData[2].AnimationSpeed = 1.0f;

				KnucklesAnimData[4].Animation = KNUCKLES_ACTIONS[78];
				KnucklesAnimData[5].Animation = KNUCKLES_ACTIONS[79];
				KnucklesAnimData[6].Animation = KNUCKLES_ACTIONS[78];
				KnucklesAnimData[6].Property = 6;
			}
			//Notes to self about animation Properties: 5 = only loop once. 6 = play backwards. 4 = play once and then switch to NextAnim.
		}

		if (JackleCard)
		{
			if (CurrentLevel == 9 && CurrentAct == 3) //Only when inside the Nights pinball table will this be set to 10. Because other things in the game use this variable! This enables the Jackle card!
			{
				if (CasinoCards == 9)
				{
					CasinoCards = 10;
				}
			}
			else
			{
				CasinoCards = 9;
			}
		}

		if (BigBetaHotel)
		{
			if (CurrentLevel == 26 && CurrentAct != 4 && CurrentCharacter == 7) //The Eventflag that checks for the beta puzzle to be solved is set after the cutscene where you watch Froggy hop towards 
			{																	//the hotel. 454 is that flag. 469 is the flag for if Big has cleared Emerald Coast. By checking this, we can enable
				if (EventFlagArray[454] == 1 && EventFlagArray[469] == 0)		//the puzzle by always deactivating the flag when outside the hotel area as Big and Emerald Coast hasn't been cleared yet!
				{																//The only issue is that if you solve the puzzle and leave without clearing Emerald Coast, you'll have to solve it again.
					EventFlagArray[454] = 0;
				}
			}
		}

		if (LevelClearPlus)
		{
			SonicLevelClearPlus();
			TailsLevelClearPlus();
			KnucklesLevelClearPlus();
			GammaLevelClearPlus();
		}

		if (AnimTestThingie)
		{
			if (ActionAnimTestingActive == true)
			{
				ActionTesting();
			}
			else if (currentaction != 0 || currentactionmode != 0)
			{
				currentaction = 0;
				currentactionmode = 0;
			}

			if (CurrentLevel != 0)
			{
				if ((ControllerPointers[0]->HeldButtons & Buttons_Y) && (ControllerPointers[0]->PressedButtons & Buttons_B) && (ControllerPointers[0]->PressedButtons & Buttons_X))
				{
					if (ActionAnimTestingActive == false)
					{
						ActionAnimTestingActive = true;
					}
					else
					{
						ActionAnimTestingActive = false;
					}
				}

				if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
				{
					ActionAnimTestingActive = false;
				}
			}
		}

		//Voices
		if (FinalEggAnnouncer)
		{
			FinalEggAct1Announcer();
		}
		if (PerfectChaos)
		{
			PerfectChaosCheer();
		}
		if (SkyDeck3Announcer)
		{
			SkyDeck3Announcement();
		}
		if (BetaRematch)
		{
			BetaRematchVoice();
		}
		if (SkyDeck2Announcer)
		{
			SkyDeck2OtherAnnouncements();
		}
		if (SkyDeck1Announcer)
		{
			SkyDeckAct1Announcer();
		}
		if (KnucklesNoRing)
		{
			KnucklesNoRingsVoice();
		}
		if (AmyNoRing)
		{
			AmyNoRingsVoice();
		}
		if (TailsNoRing)
		{
			TailsNoRingsVoice();
		}
		if (BigNoRing)
		{
			BigNoRingsVoice();
		}
		if (BoatNoise)
		{
			BoatAndRaftStopNoises();
		}
		if (BarrierLoss)
		{
			BarrierLossSound();
		}
		if (WaterStuff)
		{
			WaterEffects();
		}
		if (LightSpeed)
		{
			LightSpeedChargeSound();
		}
		if (TailsFlight)
		{
			TailsFlightSound();
		}
		if (KnucklesHurt)
		{
			KnucklesHurtSound();
		}
		if (AmyHurt)
		{
			AmyHurtSound();
		}
		if (FishingFailed)
		{
			BigFailedFishing();
			BigTryAgain();
			if (BigAnimData[65].Property != 4)
			{
				BigAnimData[65].Property = 4; //Fixing unused animation to only play once
			}
		}
		if (FinalEggColorDoor)
		{
			FinalEggTaunt();
		}
		if (HotShelterNoises)
		{
			HotShelterAmbientSoundsMaster();
		}
		if (FinalEggAlarmer)
		{
			FinalEggAlarm();
		}
		if (LostWorldNoises)
		{
			LostWorldAmbientSoundsMaster();
		}

		BigFishRankingSystem();

		if (CurrentLevel == 37)
		{
			if (SkyChaseVoiceDelay > -1)
			{
				if (SkyChaseVoiceDelay == 290)
				{
					PlayVoice(534);
				}
				else if (SkyChaseVoiceDelay == 0)
				{
					PlayVoice(535);
				}

				SkyChaseVoiceDelay -= (1 * FramerateSetting);

				if (!EntityData1Ptrs[0])
				{
					SkyChaseVoiceDelay = 0;
				}
			}
		}
	}
}
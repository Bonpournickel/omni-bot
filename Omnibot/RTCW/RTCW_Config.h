////////////////////////////////////////////////////////////////////////////////
// 
// $LastChangedBy$
// $LastChangedDate$
// $LastChangedRevision$
//
// Title: RTCW Config
//
////////////////////////////////////////////////////////////////////////////////

#ifndef __RTCW_CONFIG_H__
#define __RTCW_CONFIG_H__

#include "Omni-Bot_Events.h"

typedef enum eRTCW_Version
{
	RTCW_VERSION_0_7_beta = 1,
	RTCW_VERSION_0_7,
	RTCW_VERSION_0_71,
	RTCW_VERSION_0_8,
	RTCW_VERSION_0_83,
	RTCW_VERSION_LAST,
	RTCW_VERSION_LATEST = RTCW_VERSION_LAST - 1
} RTCW_Version;

typedef enum eRTCW_Events
{
	RTCW_EVENT_BEGIN = EVENT_NUM_EVENTS,
	RTCW_EVENT_DROWNING,
	RTCW_EVENT_RECIEVEDAMMO,
	RTCW_EVENT_END
} RTCW_Event;

typedef enum eRTCW_Msgs
{
	RTCW_MSG_BEGIN = GEN_MSG_END,

	// actions
	RTCW_MSG_GOTOLIMBO,

	// misc query sutff
	RTCW_MSG_ISMEDICNEAR,
	RTCW_MSG_REINFORCETIME,

	RTCW_MSG_GETGUNHEALTH,
	RTCW_MSG_GETGUNHEAT,
	RTCW_MSG_ISGUNMOUNTED,
	RTCW_MSG_ISGUNREPAIRABLE,
	RTCW_MSG_MOUNTEDMG42INFO,
	
	// weapon query stuff
	RTCW_MSG_WPOVERHEATED,
	RTCW_MSG_PICKWEAPON,
	RTCW_MSG_PICKWEAPON2,
	RTCW_MSG_GETHINT,
	RTCW_MSG_CHANGESPAWNPOINT,

	// goal query stuff
	RTCW_MSG_GHASFLAG,
	RTCW_MSG_GDYNDESTROYABLE,		// check if goal can be destroyed by dynamite
	RTCW_MSG_GEXPLOSIVESTATE,		// check if state of an explosive
	RTCW_MSG_GCANBEGRABBED,		// check if an entity can be grabbed
	RTCW_MSG_SENDPM,
	RTCW_MSG_GETGAMETYPE,
	RTCW_MSG_SETCVAR,
	RTCW_MSG_GETCVAR,
	RTCW_MSG_GETSPAWNPOINT,
	RTCW_MSG_SETSUICIDE,
	RTCW_MSG_DISABLEBOTPUSH,
	RTCW_MSG_GETPLAYERCLASS,

	RTCW_MSG_END
} RTCW_Msg;

typedef enum eRTCW_Weapons
{
	RTCW_WP_UNKNOWN = INVALID_WEAPON,
	RTCW_WP_NONE = INVALID_WEAPON,

	RTCW_WP_KNIFE,				// 1
	RTCW_WP_LUGER,				// 2
	RTCW_WP_MP40,				// 3
	RTCW_WP_MAUSER,				// 4
	RTCW_WP_GREN_AXIS,			// 5	WP_GRENADE_LAUNCHER
	RTCW_WP_PANZERFAUST,		// 6
	RTCW_WP_VENOM,				// 7
	RTCW_WP_FLAMETHROWER,		// 8
	RTCW_WP_COLT,				// 9	equivalent american weapon to german luger
	RTCW_WP_THOMPSON,			// 10	equivalent american weapon to german mp40
	RTCW_WP_GARAND,				// 11	equivalent american weapon to german mauser
	RTCW_WP_GREN_ALLIES,		// 12	WP_GRENADE_PINEAPPLE
	RTCW_WP_ROCKET_LAUNCHER,	// 13	equivalent american weapon to german panzerfaust
	RTCW_WP_SNIPERRIFLE,		// 14
	RTCW_WP_STEN,				// 15	
	RTCW_WP_SYRINGE,			// 16	WP_MEDIC_SYRINGE
	RTCW_WP_AMMO_PACK,			// 17	WP_AMMO
	RTCW_WP_ARTY,				// 18
	RTCW_WP_DYNAMITE,			// 19
	RTCW_WP_SNIPER,				// 20
	RTCW_WP_MEDKIT,				// 21
	RTCW_WP_PLIERS,				// 22
	RTCW_WP_SMOKE_GRENADE,		// 23
	RTCW_WP_BINOCULARS,			// 24
	RTCW_WP_MOUNTABLE_MG42,		// 25
	RTCW_WP_FG42,				// 26
	RTCW_WP_FG42SCOPE,			// 27
	RTCW_WP_SHOTGUN,			// 28

	RTCW_WP_MAX
} RTCW_Weapon;

typedef enum eRTCW_PlayerClass
{
	RTCW_CLASS_UNKNOWN = 0,
	RTCW_CLASS_NULL = 0,
	RTCW_CLASS_SOLDIER,
	RTCW_CLASS_MEDIC,
	RTCW_CLASS_ENGINEER,
	RTCW_CLASS_LIEUTENANT,
	RTCW_CLASS_MAX,
	RTCW_CLASS_ANY = RTCW_CLASS_MAX,

	// Other values to identify the "class"
	RTCW_CLASSEX_MG42MOUNT,
	RTCW_CLASSEX_DYNAMITE,
	RTCW_CLASSEX_VEHICLE,
	RTCW_CLASSEX_BREAKABLE,
	RTCW_CLASSEX_INJUREDPLAYER,
	RTCW_CLASSEX_CORPSE,
	RTCW_CLASSEX_TREASURE,
	RTCW_CLASSEX_GRENADE,
	RTCW_CLASSEX_ROCKET,
	RTCW_CLASSEX_ARTY,
	RTCW_CLASSEX_AIRSTRIKE,
	RTCW_CLASSEX_FLAMECHUNK,
	RTCW_CLASSEX_BROKENCHAIR,
	RTCW_CLASSEX_MINE,

	RTCW_CLASSEX_WEAPON,
	RTCW_CLASSEX_WEAPON_LAST = RTCW_CLASSEX_WEAPON+RTCW_WP_MAX,

	RTCW_NUM_CLASSES
} RTCW_PlayerClass;

// typedef: RTCW_Team
//		The available teams for this gametype.
typedef enum eRTCW_Team
{
	RTCW_TEAM_NONE = OB_TEAM_NONE,
	RTCW_TEAM_AXIS,
	RTCW_TEAM_ALLIES,
	RTCW_TEAM_MAX
} RTCW_Team;

typedef enum eRTCW_EntityFlags
{
	// bit: RTCW_ENT_FLAG_MNT_MG42
	//		Currently mounted on an MG42
	RTCW_ENT_FLAG_MNT_MG42 = ENT_FLAG_FIRST_USER,
	// bit: RTCW_ENT_FLAG_ISMOUNTABLE
	//		This entity is mountable.
	RTCW_ENT_FLAG_ISMOUNTABLE,
	// bit: RTCW_ENT_FLAG_CARRYINGGOAL
	//		Currently carrying a goal
	RTCW_ENT_FLAG_CARRYINGGOAL,
	// bit: RTCW_ENT_FLAG_INLIMBO
	//		This entity is currently in limbo mode. Players only.
	RTCW_ENT_FLAG_INLIMBO,
	// bit: RTCW_ENT_FLAG_DISGUISED
	//		This entity is disguised
	RTCW_ENT_FLAG_DISGUISED,
	// bit: RTCW_ENT_FLAG_POISONED
	//		This entity is poisoned.
	RTCW_ENT_FLAG_POISONED,
	// bit: RTCW_ENT_FLAG_MOUNTED
	//		This entity is mounted
	RTCW_ENT_FLAG_MOUNTED,
	// bit: RTCW_ENT_FLAG_INJURED
	//		This entity is injured
	RTCW_ENT_FLAG_INJURED,
} RTCW_EntityFlags;

//////////////////////////////////////////////////////////////////////////

typedef enum eCursorHintType
{
	CURSOR_HINT_NONE,
	CURSOR_HINT_PLAYER,
	CURSOR_HINT_ACTIVATE,
	CURSOR_HINT_DOOR,
	CURSOR_HINT_DOOR_ROTATING,
	CURSOR_HINT_DOOR_LOCKED,
	CURSOR_HINT_DOOR_ROTATING_LOCKED,
	CURSOR_HINT_MG42,
	CURSOR_HINT_BREAKABLE,
	CURSOR_HINT_BREAKABLE_DYNAMITE,
	CURSOR_HINT_CHAIR,
	CURSOR_HINT_ALARM,
	CURSOR_HINT_HEALTH,
	CURSOR_HINT_TREASURE,
	CURSOR_HINT_KNIFE,
	CURSOR_HINT_LADDER,
	CURSOR_HINT_BUTTON,
	CURSOR_HINT_WATER,
	CURSOR_HINT_CAUTION,
	CURSOR_HINT_DANGER,
	CURSOR_HINT_SECRET,
	CURSOR_HINT_QUESTION,
	CURSOR_HINT_EXCLAMATION,
	CURSOR_HINT_CLIPBOARD,
	CURSOR_HINT_WEAPON,
	CURSOR_HINT_AMMO,
	CURSOR_HINT_ARMOR,
	CURSOR_HINT_POWERUP,
	CURSOR_HINT_HOLDABLE,
	CURSOR_HINT_INVENTORY,
	CURSOR_HINT_SCENARIC,
	CURSOR_HINT_EXIT,
	CURSOR_HINT_NOEXIT,
	CURSOR_HINT_PLYR_FRIEND,
	CURSOR_HINT_PLYR_NEUTRAL,
	CURSOR_HINT_PLYR_ENEMY,
	CURSOR_HINT_PLYR_UNKNOWN,
	CURSOR_HINT_BUILD,
	CURSOR_HINT_DISARM,
	CURSOR_HINT_REVIVE,
	CURSOR_HINT_DYNAMITE,
	CURSOR_HINT_CONSTRUCTIBLE,
	CURSOR_HINT_UNIFORM,
	CURSOR_HINT_LANDMINE,
	CURSOR_HINT_TANK,
	CURSOR_HINT_SATCHELCHARGE,
	CURSOR_HINT_LOCKPICK
} CursorHintType;

typedef enum eExplosiveTargetType
{
	XPLO_TYPE_DYNAMITE	= 1<<0,
	XPLO_TYPE_SATCHEL	= 1<<1
} ExplosiveTargetType;

typedef enum eExplosiveState
{
	XPLO_INVALID			= -1,
	XPLO_ARMED				= 0,
	XPLO_UNARMED			= 1,
} ExplosiveState;

typedef enum eConstructableState
{
	CONST_INVALID			= -1,

	CONST_BUILT				= 0,
	CONST_UNBUILT			= 1,

	CONST_NOTDESTROYABLE	= 0,
	CONST_DESTROYABLE		= 1,

	CONST_BROKEN			= 2,
} ConstructableState;

typedef enum eRTCW_Powerups
{
	RTCW_PWR_INVULNERABLE = PWR_FIRST_USER,
	RTCW_PWR_FIRE,				
	RTCW_PWR_ELECTRIC,			
	RTCW_PWR_BREATHER,		
	RTCW_PWR_NOFATIGUE,		
	RTCW_PWR_REDFLAG,
	RTCW_PWR_BLUEFLAG,
	RTCW_PWR_BALL,
} RTCW_Powerups;

#endif

// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Misc
		{
			// CBA_fnc_actionArgument (use _path)
			class actionArgument
			{
				description = "Used to call the code parsed in the addaction argument.";
				file = "\x\cba\addons\common\fnc_actionArgument.sqf";
			};
			// CBA_fnc_addMagazine
			class addMagazine
			{
				description = "Add magazine to a vehicle/unit.";
				file = "\x\cba\addons\common\fnc_addMagazine.sqf";
			};
			// CBA_fnc_addMagazineCargo
			class addMagazineCargo
			{
				description = "Add magazine to a vehicle cargo.";
				file = "\x\cba\addons\common\fnc_addMagazineCargo.sqf";
			};
			// CBA_fnc_addMagazineVerified
			class addMagazineVerified
			{
				description = "Add a magazine, but verify that it was successful without over-burdening the recipient.";
				file = "\x\cba\addons\common\fnc_addMagazineVerified.sqf";
			};
			// CBA_fnc_addPerFrameHandler
			class addPerFrameHandler
			{
				description = "Add a handler that will execute every frame, or every x number of seconds";
				file = "\x\cba\addons\common\fnc_addPerFrameHandler.sqf";
			};
			// CBA_fnc_addPlayerAction
			class addPlayerAction
			{
				description = "Adds persistent action to player (which will also be available in vehicles and after respawn or teamswitch).";
				file = "\x\cba\addons\common\fnc_addPlayerAction.sqf";
			};
			// CBA_fnc_addWeapon
			class addWeapon
			{
				description = "Add a weapon to a unit.";
				file = "\x\cba\addons\common\fnc_addWeapon.sqf";
			};
			// CBA_fnc_addWeaponCargo
			class addWeaponCargo
			{
				description = "Add weapon(s) to vehicle cargo.";
				file = "\x\cba\addons\common\fnc_addWeaponCargo.sqf";
			};
			// CBA_fnc_createCenter
			class createCenter
			{
				description = "Selects center if it already exists, creates it if it doesn't yet.";
				file = "\x\cba\addons\common\fnc_createCenter.sqf";
			};
			// CBA_fnc_createMarker
			class createMarker
			{
				description = "Creates a marker all at once.";
				file = "\x\cba\addons\common\fnc_createMarker.sqf";
			};
			// CBA_fnc_createTrigger
			class createTrigger
			{
				description = "Create a trigger all at once.";
				file = "\x\cba\addons\common\fnc_createTrigger.sqf";
			};
			// CBA_fnc_defaultParam
			class defaultParam
			{
				description = "Gets a value from parameters list (usually _this) with a default.";
				file = "\x\cba\addons\common\fnc_defaultParam.sqf";
			};
			// CBA_fnc_deleteEntity
			class deleteEntity
			{
				description = "A function used to delete entities Parameters: Array, Object, Group or Marker Example: [car1,car2,car3] call CBA_fnc_deleteEntity Returns: Nothing Author: Rommel";
				file = "\x\cba\addons\common\fnc_deleteEntity.sqf";
			};
			// CBA_fnc_determineMuzzles
			class determineMuzzles
			{
				description = "Gets the list of possible muzzles for a weapon.";
				file = "\x\cba\addons\common\fnc_determineMuzzles.sqf";
			};
			// CBA_fnc_dropMagazine
			class dropMagazine
			{
				description = "Drop a magazine.";
				file = "\x\cba\addons\common\fnc_dropMagazine.sqf";
			};
			// CBA_fnc_dropWeapon
			class dropWeapon
			{
				description = "Drops a weapon.";
				file = "\x\cba\addons\common\fnc_dropWeapon.sqf";
			};
			// CBA_fnc_findEntity
			class findEntity
			{
				description = "A function used to find out the first entity of parsed type in a nearEntitys call Parameters: - Type (Classname, Object) - Position (XYZ, Object, Location or Group) Optional: - Radius (Scalar) Example: _veh = [""LaserTarget"", player] call CBA_fnc_findEntity Returns: First entity; nil return if nothing Author: Rommel";
				file = "\x\cba\addons\common\fnc_findEntity.sqf";
			};
			// CBA_fnc_getAlive
			class getAlive
			{
				description = "A function used to find out who is alive in an array or a group. Parameters: Array, Group or Unit Example: _alive = (Units player) call CBA_fnc_getAlive Returns: Array Author: Rommel";
				file = "\x\cba\addons\common\fnc_getAlive.sqf";
			};
			// CBA_fnc_getAnimType
			class getAnimType
			{
				description = "Used to determine which weapon unit is currently holding and return proper animation type.";
				file = "\x\cba\addons\common\fnc_getAnimType.sqf";
			};
			// CBA_fnc_getArg
			class getArg
			{
				description = "Get default named argument from list.";
				file = "\x\cba\addons\common\fnc_getArg.sqf";
			};
			// CBA_fnc_getAspectRatio
			class getAspectRatio
			{
				description = "Used to determine the Aspect ratio of the screen.";
				file = "\x\cba\addons\common\fnc_getAspectRatio.sqf";
			};
			// CBA_fnc_getConfigEntry
			class getConfigEntry
			{
				description = "Gets a configuration entry.";
				file = "\x\cba\addons\common\fnc_getConfigEntry.sqf";
			};
			// CBA_fnc_getDistance
			class getDistance
			{
				description = "A function used to find out the distance between two positions. Parameters: Array containing two of [Marker, Object, Location, Group or Position] Example: _distance = [Player, [0,0,0]] call CBA_fnc_getDistance Returns: Number - Distance in meters Author: Rommel";
				file = "\x\cba\addons\common\fnc_getDistance.sqf";
			};
			// CBA_fnc_getFirer
			class getFirer
			{
				description = "A function used to find out which unit exactly fired (Replacement for gunner, on multi-turret vehicles). Parameters: Vehicle that fired Weapon that was used Example: _unit = player call CBA_fnc_getFirer Returns: Unit Turretpath Author: Rocko";
				file = "\x\cba\addons\common\fnc_getFirer.sqf";
			};
			// CBA_fnc_getFov
			class getFov
			{
				description = "Get current camera's field of view in radians and zoom. Fov is calculated in the same format as it is set up in configs and used by camSetFov and alike. Precision is about 95%.";
				file = "\x\cba\addons\common\fnc_getFov.sqf";
			};
			// CBA_fnc_getGroup
			class getGroup
			{
				description = "A function used to find out the group of an object. Parameters: Group or Unit Example: _group = player call CBA_fnc_getGroup Returns: Group Author: Rommel";
				file = "\x\cba\addons\common\fnc_getGroup.sqf";
			};
			// CBA_fnc_getGroupIndex
			class getGroupIndex
			{
				description = "Finds out the actual ID number of a person within his group as assigned by the game and used in the squad leader's command menu, not just the order within the units of his group (this order can change due to players joining and leaving the game, deaths or promotions).";
				file = "\x\cba\addons\common\fnc_getGroupIndex.sqf";
			};
			// CBA_fnc_getNearest
			class getNearest
			{
				description = "A function used to find out the nearest entity parsed in an array to a position. Compares the distance between entity's in the parsed array. Parameters: _position - Marker, Object, Location, Group or Position _array - Array of [Marker, Object, Location, Group and or Positions] _radius - Maximum distance from _position _code - Condition to meet (Code) Example: _nearestVeh = [player, vehicles] call CBA_fnc_getNearest _nearestGroup = [[0,0,0], allGroups, 50, {count (units _x) > 1}] call CBA_fnc_getNearest Returns: Nearest given entity or List of entities within given distance Author: Rommel";
				file = "\x\cba\addons\common\fnc_getNearest.sqf";
			};
			// CBA_fnc_getNearestBuilding
			class getNearestBuilding
			{
				description = "A function used to find out the nearest building and appropriate building positions available. Parameters: Object Example: _array = player call CBA_fnc_getNearestBuilding Returns: Array with [building object, building positions (count)] Author: Rommel ---------------------------------------------------------------------------- */";
				file = "\x\cba\addons\common\fnc_getNearestBuilding.sqf";
			};
			// CBA_fnc_getPistol
			class getPistol
			{
				description = "Returns name of pistol in unit's inventory, if any.";
				file = "\x\cba\addons\common\fnc_getPistol.sqf";
			};
			// CBA_fnc_getPos
			class getPos
			{
				description = "A function used to get the position of an entity. Parameters: Marker, Object, Location, Group or Position Example: _position = (group player) call CBA_fnc_getPos Returns: Position (AGL) - [X,Y,Z] Author: Rommel";
				file = "\x\cba\addons\common\fnc_getPos.sqf";
			};
			// CBA_fnc_getSharedGroup
			class getSharedGroup
			{
				description = "Returns existing group on side, or newly created group when not existent.";
				file = "\x\cba\addons\common\fnc_getSharedGroup.sqf";
			};
			// CBA_fnc_getTerrainProfile
			class getTerrainProfile
			{
				description = "A function used to find the terrain profile between two positions Parameters: - Position A [Object, Location, Position, Marker or Group] - Position B [Object, Location, Position, Marker or Group] Optional: - Resolution (in Metres) Returns: Array containing [2D Distance, Angle, Terrain Profile (in format [Relative Altitude, 2D Distance from, 3D Distance from]) Example: [[0,0,0], [0,0,1000], 10] call CBA_fnc_getTerrainProfile Author: Rommel && Noubernou";
				file = "\x\cba\addons\common\fnc_getTerrainProfile.sqf";
			};
			// CBA_fnc_getTurret
			class getTurret
			{
				description = "A function used to find out which config turret is turretpath. Parameters: Vehicle Turretpath Example: _config = [vehicle player, [0]] call CBA_fnc_getTurret Returns: Turret Config entry Author: Sickboy";
				file = "\x\cba\addons\common\fnc_getTurret.sqf";
			};
			// CBA_fnc_getUISize
			class getUISize
			{
				description = "Used to determine the UI size of the screen.";
				file = "\x\cba\addons\common\fnc_getUISize.sqf";
			};
			// CBA_fnc_getUnitAnim
			class getUnitAnim
			{
				description = "Get information about a unit's stance and speed.";
				file = "\x\cba\addons\common\fnc_getUnitAnim.sqf";
			};
			// CBA_fnc_getUnitDeathAnim
			class getUnitDeathAnim
			{
				description = "Get death animation for a unit.";
				file = "\x\cba\addons\common\fnc_getUnitDeathAnim.sqf";
			};
			// CBA_fnc_getVolume
			class getVolume
			{
				description = "Return the volume of an object";
				file = "\x\cba\addons\common\fnc_getVolume.sqf";
			};
			// CBA_fnc_headDir
			class headDir
			{
				description = "Get the direction of a unit's head.";
				file = "\x\cba\addons\common\fnc_headDir.sqf";
			};
			// CBA_fnc_inArea
			class inArea
			{
				description = "A function used to determine if a position is within a zone. Parameters: Marker, Object, Location, Group or Position, Zone (Marker, Trigger, Array) Example:";
				file = "\x\cba\addons\common\fnc_inArea.sqf";
			};
			// CBA_fnc_inheritsFrom
			class inheritsFrom
			{
				description = "Checks whether a config entry inherits, directly or indirectly, from another one.";
				file = "\x\cba\addons\common\fnc_inheritsFrom.sqf";
			};
			// CBA_fnc_isAlive
			class isAlive
			{
				description = "A function used to find out if the group or object is alive. Parameters: Array, Group or Unit Example: _alive = (Units player) call CBA_fnc_getAlive Returns: Boolean Author: Rommel";
				file = "\x\cba\addons\common\fnc_isAlive.sqf";
			};
			// CBA_fnc_isTurnedOut
			class isTurnedOut
			{
				description = "Checks whether a unit is turned out in a vehicle or not.";
				file = "\x\cba\addons\common\fnc_isTurnedOut.sqf";
			};
			// CBA_fnc_isUnitGetOutAnim
			class isUnitGetOutAnim
			{
				description = "Checks whether a unit is turned out in a vehicle or not.";
				file = "\x\cba\addons\common\fnc_isUnitGetOutAnim.sqf";
			};
			// CBA_fnc_mapDirTo
			class mapDirTo
			{
				description = "Gets the direction between two map grid references.";
				file = "\x\cba\addons\common\fnc_mapDirTo.sqf";
			};
			// CBA_fnc_mapGridToPos
			class mapGridToPos
			{
				description = "Converts a 2, 4, 6, 8, or 10 digit grid reference into a Position.";
				file = "\x\cba\addons\common\fnc_mapGridToPos.sqf";
			};
			// CBA_fnc_mapRelPos
			class mapRelPos
			{
				description = "Find a position relative to a known position on the map. Passing strings in for the Northing and Easting is the preferred way.";
				file = "\x\cba\addons\common\fnc_mapRelPos.sqf";
			};
			// CBA_fnc_nearPlayer
			class nearPlayer
			{
				description = "Check whether these are any players within a certain distance of a unit.";
				file = "\x\cba\addons\common\fnc_nearPlayer.sqf";
			};
			// CBA_fnc_northingReversed
			class northingReversed
			{
				description = "Checks if the maps northing is reversed (like Chernarus & Utes, or any map pre-OA)";
				file = "\x\cba\addons\common\fnc_northingReversed.sqf";
			};
			// CBA_fnc_objectRandom
			class objectRandom
			{
				description = "Creates a ""random"" number 0-9 based on an object's velocity";
				file = "\x\cba\addons\common\fnc_objectRandom.sqf";
			};
			// CBA_fnc_parseYAML
			class parseYAML
			{
				description = "Parses a YAML file into a nested array/Hash structure.";
				file = "\x\cba\addons\common\fnc_parseYAML.sqf";
			};
			// CBA_fnc_players
			class players
			{
				description = "Get a list of current player objects.";
				file = "\x\cba\addons\common\fnc_players.sqf";
			};
			// CBA_fnc_randPos
			class randPos
			{
				description = "A function used to randomize a position around a given center Parameters: Marker, Object, Location, Group or Position, Radius Example: _position =  [position, radius] call CBA_fnc_randPos Returns: Position - [X,Y,Z] Author: Rommel";
				file = "\x\cba\addons\common\fnc_randPos.sqf";
			};
			// CBA_fnc_realHeight
			class realHeight
			{
				description = "Real z coordinate of an object, for placing stuff on roofs, etc.";
				file = "\x\cba\addons\common\fnc_realHeight.sqf";
			};
			// CBA_fnc_removeMagazine
			class removeMagazine
			{
				description = "Remove a magazine.";
				file = "\x\cba\addons\common\fnc_removeMagazine.sqf";
			};
			// CBA_fnc_removePerFrameHandler
			class removePerFrameHandler
			{
				description = "Remove a handler that you have added using CBA_fnc_addPerFrameHandler";
				file = "\x\cba\addons\common\fnc_removePerFrameHandler.sqf";
			};
			// CBA_fnc_removePlayerAction
			class removePlayerAction
			{
				description = "Removes player action previously added with <CBA_fnc_addPlayerAction>.";
				file = "\x\cba\addons\common\fnc_removePlayerAction.sqf";
			};
			// CBA_fnc_removeWeapon
			class removeWeapon
			{
				description = "Remove a weapon.";
				file = "\x\cba\addons\common\fnc_removeWeapon.sqf";
			};
			// CBA_fnc_selectWeapon
			class selectWeapon
			{
				description = "Selects weapon, if the player has the weapon, including correctly selecting a muzzle, if any.";
				file = "\x\cba\addons\common\fnc_selectWeapon.sqf";
			};
			// CBA_fnc_setHeight
			class setHeight
			{
				description = "A function used to set the height of an object Parameters: _object - Object or Location _height - Height in metres _type - Optional parameter, 0 is getpos, 1 is getpos ASL, 2 is getposATL (Default: 1) Example: [this, 10] call CBA_fnc_setHeight Returns: Nothing Author: Rommel";
				file = "\x\cba\addons\common\fnc_setHeight.sqf";
			};
			// CBA_fnc_setPos
			class setPos
			{
				description = "A function used to set the position of an entity. Parameters: Marker, Object, Location, Group or Position Example: [player, ""respawn_west""] call CBA_fnc_setPos Returns: Nil Author: Rommel";
				file = "\x\cba\addons\common\fnc_setPos.sqf";
			};
			// CBA_fnc_switchPlayer
			class switchPlayer
			{
				description = "Switch player to another unit.";
				file = "\x\cba\addons\common\fnc_switchPlayer.sqf";
			};
		};
	};
	
	// Need to be manually maintained
	// Missing BIS functions
	class BIS {
		class variables {
			class undefCheck {
				file = "\x\cba\addons\common\dummy.sqf";
			};
		};
	};
	class BIS_PMC {
		class PMC_Campaign {
			class initIdentity {
				file = "\x\cba\addons\common\dummy.sqf";
			};
		};
	};
};

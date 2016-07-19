class CfgPatches
{
	class CorePatch_CIT_70470
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_AT3_AT : MissileBase
	{
		hit = 350;
		indirectHit = 10;
		manualControl = 1;
		maxControlRange = 3000;
		maxSpeed = 200;
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A28 : CannonCore
	{
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
	};
	class MissileLauncher;
	class AT3Launcher : MissileLauncher
	{
		canLock = 1;
		cursor = "Rocket";
		displayName = "$STR_DN_AT3LAUNCHER_CP";
		magazineReloadTime = 30;
		maxRange = 3000;
		minRange = 500;
		reloadTime = 90;
	};
};
class CfgVehicles
{
	class Tracked_APC;
	class BMP2_Base : Tracked_APC
	{
		class NewTurret;
	};
	class BVP1_BASE : BMP2_Base
	{
		delete extCameraPosition;
		delete weapons;

		driverForceOptics = 0;

		class Turrets
		{
			class CommanderOptics : NewTurret
			{
				delete magazines;
				delete turretInfoType;
				delete weapons;

				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};
				stabilizedInAxes = "StabilizedInAxesNone";

				class ViewGunner
				{
					initAngleX = 5;
					initFov = 0.69999999;
					maxFov = 0.85000002;
					minFov = 0.41999999;
				};
				class ViewOptics
				{
					initFov = 0.47499999;
				};
			};
			class MainTurret : NewTurret
			{
				delete startEngine;
				delete turretInfoType;

				maxElev = 33;
				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};
				stabilizedInAxes = "StabilizedInAxesNone";

				class ViewGunner
				{
					initAngleX = 5;
					initFov = 0.69999999;
					maxFov = 0.85000002;
					minFov = 0.41999999;
				};
				class ViewOptics
				{
					initFov = 0.47499999;
				};
			};
		};
		class ViewOptics
		{
			delete visionMode;
		};
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			initFov = 0.69999999;
			maxAngleX = 30;
			maxAngleY = 100;
			maxFov = 1.2;
			minAngleX = -30;
			minAngleY = -100;
			minFov = 0.41999999;
		};
	};
};
class CfgPatches
{
	class StackRepairKitsScriptEdit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools"
		};
	};
};
class CfgMods
{
	class StackRepairKits
	{
		dir="StackRepairKits";
		action="";
		hideName=1;			//DAC NA 0 Z OBRAZKAMI
		hidePicture=1; 		//DAC NA 0 Z OBRAZKAMI
		name="StackRepairKits";
		author="predek13";
		credits="";
		authorID="76561197962499282";
		version="1";
		extra=0;
		type="mod";
//		picture="StackRepairKits/x/logo_m.paa";
//		logo="StackRepairKits/x/logo_s.paa";
//		logoOver="StackRepairKits/x/logo_s.paa";
//		logoSmall="StackRepairKits/x/logo_ss.paa";
		tooltip="StackRepairKits";
		overview="StackRepairKits";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"StackRepairKits/Scripts/4_world"
				};
			};
		};
	};
};

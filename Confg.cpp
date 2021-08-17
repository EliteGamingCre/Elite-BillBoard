// Elite Gaming
class CfgPatches
{
	class eg_billboard_new
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
// Change these below if you change the p3d name or folder name
class CfgVehicles
{
	class HouseNoDestruct;
	class land_billboard_1_eg: HouseNoDestruct
	{
		scope=2;
		model="\eg_billboard_new\billboard_1_eg.p3d";
	};
	class land_billboard_2_eg: HouseNoDestruct
	{
		scope=2;
		model="\eg_billboard_new\billboard_2_eg.p3d";
	};
	class land_billboard_3_eg: HouseNoDestruct
	{
		scope=2;
		model="\eg_billboard_new\billboard_3_eg.p3d";
	};
	class land_billboard_4_eg: HouseNoDestruct
	{
		scope=2;
		model="\eg_billboard_new\billboard_4_eg.p3d";
	};
	class land_billboard_5_eg: HouseNoDestruct
	{
		scope=2;
		model="\eg_billboard_new\billboard_5_eg.p3d";
	};
};

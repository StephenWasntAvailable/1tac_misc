// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

// dependencies: RHS (all), HLC AKs + FALs + M60, CUP Weapons + Units, Bearskins

tooltip = "Author: Bear\n\nMimics my Takistani faction.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep2_olivedrab"};
    vest[] = {};
    backpack[] = {"rhs_sidor"};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {};
    faces[] = {"faceset:persian"};

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"bear_helmet_M1_tan", "bear_helmet_M1_tan", "bear_helmet_M1_tan_alt01"};
    vest[] = {"CUP_V_O_TK_Vest_2"};
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"CUP_arifle_FNFAL5061"};
    silencer[] = {};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
	primaryWeapon[] = {"CUP_SKS"};
    magazines[] =
    {
        LIST_13("CUP_10Rnd_762x39_SKS_M"),
        LIST_3("rhs_mag_rdg2_white")
    };
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    silencer[] = {"rhs_acc_pgs64_74u"};
    primaryWeapon[] = {"rhs_weap_aks74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_3("1Rnd_SmokeRed_Grenade_shell"),
        LIST_3("rhs_mag_nspd"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"B_Carryall_cbr"};
    primaryWeapon[] = {"hlc_lmg_M60E4"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("hlc_100Rnd_762x51_B_M60E4"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_5("hlc_100Rnd_762x51_B_M60E4")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"rhs_rpg"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    magazines[] += {"rhs_rpg7_PG7V_mag"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
    scope[] = {};
    bipod[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_12("CUP_10x_303_M"),
		LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"B_Carryall_cbr"};
    primaryWeapon[] = {"hlc_lmg_m60"};
    scope[] = {};
    magazines[] =
    {
        LIST_5("hlc_100Rnd_762x51_B_M60E4"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_4("hlc_100Rnd_762x51_B_M60E4")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_4("hlc_100Rnd_762x51_B_M60E4")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_OG7V_mag"
    };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backPack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        "rhs_fim92_mag"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backPack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    backpackItems[] =
    {
        "rhs_fim92_mag"
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"CUP_V_O_TK_Vest_1"};
    headgear[] = {"CUP_H_TKI_Lungee_05"};
    goggles[] = {};
    primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
    scope[] = {"cup_optic_no23mk2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_10("CUP_10x_303_M"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"CUP_V_O_TK_Vest_1"};
    headgear[] = {"CUP_H_TKI_Lungee_05"};
    scope[] = {};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"CUP_V_RUS_Smersh_1"};
    backpack[] = {"bear_rd54_sand"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_RUS_Smersh_1"};
    backpack[] = {"bear_rd54_sand"};
    headgear[] = {"rhs_tsh4"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"CUP_V_RUS_Smersh_2"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_mike_green"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"CUP_V_RUS_Smersh_2"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_mike_green"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_alt"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"bear_rd54_sand"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"bear_rd54_sand"};
    items[] +=
    {
        "APERSTripMine_Wire_Mag",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};
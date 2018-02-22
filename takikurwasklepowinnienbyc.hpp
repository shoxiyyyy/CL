       //Cop Shops
    class cop_pd {
        name = "Sklep Policyjny(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_pd";
        items[] = {
            { "Binocular", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemMap", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemCompass", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemWatch", "", 250, 0, "call life_coplevel >= 1" },
            { "tf_anprc152", "Radio", 250, 0, "call life_coplevel >= 1" },
            { "NTRYK_Headset_NV", "Noktowizor", 250, 0, "call life_coplevel >= 1" },
            { "CG_BATON", "Palka Policyjna", 250, 0, "call life_coplevel >= 1" },
            { "CG_TELBAT", "Palka Teleskopowa", 250, 0, "call life_coplevel >= 1" },
            { "CSW_M26C", "Paralizator", 250, 0, "call life_coplevel >= 1" },
            { "RH_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g19", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_cz75", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_p226", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_sw659", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_gsh18", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_uspm", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_fnp45", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_FN57", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_smg_MP5N", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_M4A1_ris", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_bull", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_M4_ris_m", "", 250, 0, "call life_coplevel >= 5" }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_17Rnd_9x19_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_M9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_9x19_CZ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_SIG", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_14Rnd_9x19_sw", "", 250, 0, "call life_coplevel >= 1" },
            { "nonlethal_swing", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_18Rnd_9x19_gsh", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_16Rnd_40cal_usp", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_15Rnd_45cal_fnp", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_20Rnd_57x28_FN", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_20Rnd_57x28_SS190", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_30Rnd_9x19_B_MP5", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870_8Rnd_buck", "", 250, 0, "call life_coplevel >= 4" },
            { "CSW_M870_8Rnd_slug", "", 250, 0, "call life_coplevel >= 4" },
            { "CSW_M870_8Rnd_stun", "Gumowe Kule", 250, 0, "call life_coplevel >= 4" },
            { "RH_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_60Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 5" }
        };
        accs[] = {
            { "RH_X300", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_flashlight_normal_2", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_compm4s", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_ta31rmr_2D", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_6Rnd_454_Mag", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_ta31rmr_2D", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_spr_mbs", "", 250, 0, "call life_coplevel >= 5" },
            { "optic_AMS", "", 250, 0, "call life_coplevel >= 5" }
        };
    };

    class cop_so {
        name = "Sklep Szeryfow(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_so";
        items[] = {
            { "Binocular", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemMap", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemCompass", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemWatch", "", 250, 0, "call life_coplevel >= 1" },
            { "tf_anprc152", "Radio", 250, 0, "call life_coplevel >= 1" },
            { "NTRYK_Headset_NV", "Noktowizor", 250, 0, "call life_coplevel >= 1" },
            { "CG_BATON", "Palka Policyjna", 250, 0, "call life_coplevel >= 1" },
            { "CG_TELBAT", "Palka Teleskopowa", 250, 0, "call life_coplevel >= 1" },
            { "CSW_M26C", "Paralizator", 250, 0, "call life_coplevel >= 1" },
            { "RH_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g19", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_cz75", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_p226", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_sw659", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_gsh18", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_uspm", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_fnp45", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_FN57", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_smg_MP5N", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_M4A1_ris", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_bull", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_M4_ris_m", "", 250, 0, "call life_coplevel >= 5" }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_17Rnd_9x19_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_M9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_9x19_CZ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_SIG", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_14Rnd_9x19_sw", "", 250, 0, "call life_coplevel >= 1" },
            { "nonlethal_swing", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_18Rnd_9x19_gsh", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_16Rnd_40cal_usp", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_15Rnd_45cal_fnp", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_20Rnd_57x28_FN", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_20Rnd_57x28_SS190", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_30Rnd_9x19_B_MP5", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870_8Rnd_buck", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870_8Rnd_slug", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_M870_8Rnd_stun", "Gumowe Kule", 250, 0, "call life_coplevel >= 3" },
            { "RH_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_60Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 5" }
        };
        accs[] = {
            { "RH_X300", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_flashlight_normal_2", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_compm4s", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_ta31rmr_2D", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_6Rnd_454_Mag", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_spr_mbs", "", 250, 0, "call life_coplevel >= 5" },
            { "SCAR_250_Inches_Barrel_Silencer", "", 250, 0, "call life_coplevel >= 5" },
            { "optic_AMS", "", 250, 0, "call life_coplevel >= 5" }
        };
    };

    class cop_swat {
        name = "Sklep SWAT(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_swat";
        items[] = {
            { "Binocular", "", 250, 0, "call life_coplevel >= 1" },
            { "Rangefinder", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemMap", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemCompass", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemWatch", "", 250, 0, "call life_coplevel >= 1" },
            { "tf_anprc152", "Radio", 250, 0, "call life_coplevel >= 1" },
            { "NTRYK_Headset_NV", "Noktowizor", 250, 0, "call life_coplevel >= 1" },
            { "CG_BATON", "Palka Policyjna", 250, 0, "call life_coplevel >= 1" },
            { "CG_TELBAT", "Palka Teleskopowa", 250, 0, "call life_coplevel >= 1" },
            { "CSW_M26C", "Paralizator", 250, 0, "call life_coplevel >= 1" },
            { "KA_M7290", "Granat Blyskowy", 2500, 0, "call life_coplevel >= 2" },
            { "KA_M7A30", "Gaz Lzawiacy", 2500, 0, "call life_coplevel >= 2" },
            { "KA_M814", "Granat EMP", 2500, 0, "call life_coplevel >= 2" },
            { "SmokeShellGreen", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShell", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShellRed", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShellYellow", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShellPurple", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShellBlue", "", 200, 0, "call life_coplevel >= 1" },
            { "SmokeShellOrange", "", 200, 0, "call life_coplevel >= 1" },
            { "RH_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g19", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_cz75", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_p226", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_sw659", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_gsh18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_uspm", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fnp45", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fnp45t", "", 250, 0, "call life_coplevel >= 1" },,
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_Ballistic_Shield", "FN57 Z Tarcza", 250, 0, "call life_coplevel >= 1" },
            { "hlc_rifle_bcmjack", "", 250, 0, "call life_coplevel >= 1" },
            { "SMA_M4MOE_SM", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_M4A6", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_M870", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_M16A6", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_M27IAR", "", 250, 0, "call life_coplevel >= 1" },
            { "arifle_SDAR_F", "SDAR", 250, 0, "call life_coplevel >= 1" },
            { "RH_Hk416c", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_Hk416s", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_Hk416", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m1250", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_SAMR", "", 250, 0, "call life_coplevel >= 2" },
            { "arifle_SPAR_03_blk_F", "", 250, 0, "call life_coplevel >= 3" },
            { "KA_CS5", "", 250, 0, "call life_coplevel >= 1" }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_17Rnd_9x19_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_M9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_9x19_CZ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_SIG", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_14Rnd_9x19_sw", "", 250, 0, "call life_coplevel >= 1" },
            { "nonlethal_swing", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_18Rnd_9x19_gsh", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_40cal_usp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_45cal_fnp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_20Rnd_57x28_FN", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_20Rnd_57x28_SS190", "", 250, 0, "call life_coplevel >= 1" },
            { "hlc_30rnd_556x45_EPR", "", 250, 0, "call life_coplevel >= 1" },
            { "SMA_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_30Rnd_68x43_FMJ", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_M870_8Rnd_buck", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_M870_8Rnd_slug", "", 250, 0, "call life_coplevel >= 2" },
            { "CSW_M870_8Rnd_stun", "Gumowe Kule", 250, 0, "call life_coplevel >= 1" },
            { "RH_30Rnd_68x43_FMJ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_60Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 2" },
            { "20Rnd_556x45_UW_mag", "Podwodny magazynek", 250, 0, "call life_coplevel >= 2" },
            { "RH_20Rnd_762x51_Mk316LR", "", 250, 0, "call life_coplevel >= 3" }
            { "20Rnd_762x51_Mag", "", 250, 0, "call life_coplevel >= 2" },
            { "KA_CS5_250rnd_Mk316_SPR_mag", "", 250, 0, "call life_coplevel >= 3" },
            { "KA_CS5_250rnd_M948_SLAP_mag", "", 250, 0, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "RH_suppr9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_X300", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_gemtech9", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Arco", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Arco_blk_F", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_AMS", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_LRPS", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_mrco", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_nightstalker", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_hamr", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_ta31rmr_2D", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_DMS", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Holosight", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_eotech553mag", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AIM", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_SFM952V", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fa556", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_gemtech45", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_docter", "", 2500, 0, "call life_coplevel >= 1" },
            { "RH_osprey", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_MRD", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_flashlight_normal_2", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_compm4s", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m1250sd_t", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_TD_ACB", "", 250, 0, "call life_coplevel >= 1" },
            { "bipod_02_F_blk", "", 250, 0, "call life_coplevel >= 1" },
            { "muzzle_snds_B", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_CS5_Flashlight", "", 250, 0, "call life_coplevel >= 3" },
            { "KA_CS5_Silencer", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_silencer2", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_flashlight_normal_1", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_Barska", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_Shield_P", "", 250, 0, "call life_coplevel >= 3" },
            { "SMA_supp2b_556", "", 250, 0, "call life_coplevel >= 3" }
        };
    };

    class cop_dtu {
        name = "Sklep DTU(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_dtu";
        items[] = {
            { "Binocular", "", 250, 0, "call life_coplevel >= 1" },
            { "Rangefinder", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemMap", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemCompass", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemWatch", "", 250, 0, "call life_coplevel >= 1" },
            { "tf_anprc152", "Radio", 250, 0, "call life_coplevel >= 1" },
            { "NTRYK_Headset_NV", "Noktowizor", 250, 0, "call life_coplevel >= 1" },
            { "CG_BATON", "Palka Policyjna", 250, 0, "call life_coplevel >= 1" },
            { "CG_TELBAT", "Palka Teleskopowa", 250, 0, "call life_coplevel >= 1" },
            { "CSW_M26C", "Paralizator", 250, 0, "call life_coplevel >= 1" },
            { "RH_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g19", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_cz75", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_p226", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_sw659", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_gsh18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_tec9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_uspm", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fnp45", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fnp45t", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_Mk23_black", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_bullb", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_Deaglem", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_python", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_MP7_Pistol_Black_40Rnd", "", 2500, 0, "call life_coplevel >= 3" },
            { "RH_python", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_FAMAS_F1", "", 250, 0, "call life_coplevel >= 3" },
            { "SMA_HK416vfg", "", 250, 0, "call life_coplevel >= 3" },
            { "A3L_sign", "JP", 250, 0, "call life_coplevel >= 3" }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_17Rnd_9x19_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_M9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_9x19_CZ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_SIG", "", 250, 0, "call life_coplevel >= 1" },
            { "nonlethal_swing", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_18Rnd_9x19_gsh", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_40cal_usp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_45cal_fnp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_20Rnd_57x28_FN", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_20Rnd_57x28_SS190", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_19Rnd_9x19_g18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_33Rnd_9x19_g18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_32Rnd_9x19_tec", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_12Rnd_45ACP_FMJ_Mag", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_7Rnd_50_AE", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_6Rnd_454_Mag", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_6Rnd_357_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_40Rnd_46x30_FMJ", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_FAMAS_25rnd_SS2509_FMJ_mag", "", 250, 0, "call life_coplevel >= 1" },
            { "SMA_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 1" }
        };
        accs[] = {
            { "RH_suppr9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_tecsd", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_x300", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_aacusp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_osprey", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_mrd", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_gemtech45", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_silencer2", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_flashlight_normal_1", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9qd", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 1" },
            { "KA_Mk23_Flashlight", "", 250, 0, "call life_coplevel >= 2" },
            { "KA_Mk23_Silencer", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_Yorris", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_demz", "", 250, 0, "call life_coplevel >= 2" },
            { "KA_MP7_Flashlight", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_compM2", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_mrco", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_hamr", "", 250, 0, "call life_coplevel >= 2" },
        };
    };
    
     class cop_aia {
        name = "Sklep AIA(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_aia";
        items[] = {
            { "Binocular", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemMap", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemCompass", "", 250, 0, "call life_coplevel >= 1" },
            { "ItemWatch", "", 250, 0, "call life_coplevel >= 1" },
            { "tf_anprc152", "Radio", 250, 0, "call life_coplevel >= 1" },
            { "NTRYK_Headset_NV", "Noktowizor", 250, 0, "call life_coplevel >= 1" },
            { "CG_BATON", "Palka Policyjna", 250, 0, "call life_coplevel >= 1" },
            { "CG_TELBAT", "Palka Teleskopowa", 250, 0, "call life_coplevel >= 1" },
            { "CSW_M26C", "Paralizator", 250, 0, "call life_coplevel >= 1" },
            { "RH_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_g18", "", 250, 0, "call life_coplevel >= 2" },
            { "RH_g19", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_m9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_cz75", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_p226", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_sw659", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_gsh18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_uspm", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_M4A1_ris", "", 250, 0, "call life_coplevel >= 3" },
            { "RH_M4_ris", "", 250, 0, "call life_coplevel >= 3" },
            { "SMA_MK18MOEBLKTAN", "", 250, 0, "call life_coplevel >= 3" }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_17Rnd_9x19_g17", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_19Rnd_9x19_g18", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_M9", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_9x19_CZ", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_9x19_SIG", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_14Rnd_9x19_sw", "", 250, 0, "call life_coplevel >= 1" },
            { "nonlethal_swing", "", 250, 0, "call life_coplevel >= 1" }
            { "RH_18Rnd_9x19_gsh", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_16Rnd_40cal_usp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_15Rnd_45cal_fnp", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_20Rnd_57x28_FN", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 3" },
            { "SMA_30Rnd_556x45_M855A1", "", 250, 0, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "RH_X300", "", 250, 0, "call life_coplevel >= 1" },
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_compm4s", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 250, 0, "call life_coplevel >= 4" },
            { "RH_ta31rmr_2D", "", 250, 0, "call life_coplevel >= 4" }
        };
    };   
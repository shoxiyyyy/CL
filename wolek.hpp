 class cop_sert {
        name = "Sklep SERT(Uzbrojenie)";
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
            { "RH_fnp45t", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_fn57", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_Ballistic_Shield", "FN57 Z Tarcza", 250, 0, "call life_coplevel >= 3" },
            { "hlc_rifle_bcmjack", "", 250, 0, "call life_coplevel >= 1" },
            { "hlc_rifle_bcmblackjack", "", 250, 0, "call life_coplevel >= 2" },
            { "hlc_rifle_RU5562", "", 250, 0, "call life_coplevel >= 1" },
            { "hlc_rifle_samr2", "", 250, 0, "call life_coplevel >= 2" },
            { "hlc_rifle_awmagnum_BL", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_rifle_awcovert_BL", "", 250, 0, "call life_coplevel >= 3" }
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
            { "29rnd_300BLK_STANAG", "", 250, 0, "call life_coplevel >= 2" },
            { "hlc_50rnd_300BLK_STANAG_EPR", "", 250, 0, "call life_coplevel >= 3" },
            { "150Rnd_556x45_Drum_Mag_F", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_5rnd_300WM_FMJ_AWMF", "", 250, 0, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "FHQ_optic_AC11704", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Arco", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Arco_blk_F", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_AMS", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_LRPS", "", 250, 0, "call life_coplevel >= 2" },
            { "optic_mrco", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_nightstalker", "", 250, 0, "call life_coplevel >= 3" },
            { "optic_hamr", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_DMS", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_Holosight", "", 250, 0, "call life_coplevel >= 1" },,
            { "FHQ_optic_AIM", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_gemtech45", "", 250, 0, "call life_coplevel >= 1" },
            { "RH_docter", "", 2500, 0, "call life_coplevel >= 1" },
            { "RH_osprey", "", 250, 0, "call life_coplevel >= 1" },
            { "optic_MRD", "", 250, 0, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_flashlight_normal_2", "", 250, 0, "call life_coplevel >= 1" },
            { "CSW_FN57_silencer2", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_flashlight_normal_1", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_Barska", "", 250, 0, "call life_coplevel >= 3" },
            { "CSW_FN57_Shield_P", "", 250, 0, "call life_coplevel >= 3" },
            { "hlc_muzzle_300blk_KAC", "", 250, 0, "call life_coplevel >= 2" },
            { "hlc_muzzle_556NATO_KAC", "", 250, 0, "call life_coplevel >= 2" }
        };
};

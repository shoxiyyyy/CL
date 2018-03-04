   
   class cop_so {
        title = "Ubrania Szeryfowskie";
        conditions = "license_cop_so";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "cl_SO_Sheriff", "Sheriff", 50, "call life_coplevel >= 1" },
            { "cl_SO_Deputy_Sheriff", "Undersheriff", 50, "call life_coplevel >= 1" },
            { "cl_SO_Assistant", "Assistant Sheriff", 50, "call life_coplevel >= 1" },
            { "cl_SO_Captain", "Captain", 50, "call life_coplevel >= 1" },
            { "cl_SO_Lieutenant", "Lieutenant", 50, "call life_coplevel >= 1" },
            here sergeant first class
            { "cl_SO_Staff_Sergeant", "Staff Sergeant", 50, "call life_coplevel >= 1" },
            { "cl_SO_Sergeant", "Sergeant", 50, "call life_coplevel >= 1" },
            { "cl_SO_Corporal", "Corporal", 50, "call life_coplevel >= 1" },
            { "cl_SO_Senior_Deputy", "Senior Deputy", 50, "call life_coplevel >= 1" },
            { "cl_SO_Deputy", "Deputy", 50, "call life_coplevel >= 1" },
            { "cl_SO_Probie", "Probie Deputy", 50, "call life_coplevel >= 1" },
            { "U_B_Wetsuit", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "sh_so_com", "", 50, "call life_coplevel >= 5" },
            { "sh_so_com1", "", 50, "call life_coplevel >= 5" },
            { "M_sheriffhat", "Kapelusz Szeryfowski", 50, "call life_coplevel >= 3" },
            { "sh_capblack1", "", 50, "call life_coplevel >= 1" },
            { "sh_capgray", "", 50, "call life_coplevel >= 1" },
            { "sh_caplightgray", "", 50, "call life_coplevel >= 1" }
        };
        glasses[] = {
            { "NONE", $STR_C_Remove_glasses, 0, "" },
            { "CPE_MK50", "Maska Gazowa", 50, "call life_coplevel >= 1" },
            { "G_Squares", "", 50, "" },
            { "G_Spectacles", "", 250, "" },
            { "G_Aviator", "", 250, "" },
            { "G_Spectacles_Tinted", "", 250, "" },
            { "G_Shades_Black", "", 250, "" },
            { "G_Shades_Blue", "", 250, "" },
            { "TRYK_Beard_BK", "", 250, "" },
            { "TRYK_Beard_BL", "", 250, "" },
            { "TRYK_Beard", "", 250, "" },
            { "TRYK_Beard_BW", "", 250, "" },
            { "TRYK_Beard_Gr", "", 250, "" },
            { "TRYK_Beard_BK2", "", 250, "" },
            { "TRYK_Beard_BL2", "", 250, "" },
            { "TRYK_Beard2", "", 250, "" },
            { "TRYK_Beard_BW2", "", 250, "" },
            { "TRYK_Beard_Gr2", "", 250, "" },
            { "TRYK_Beard_BK3", "", 250, "" },
            { "TRYK_Beard_BL3", "", 250, "" },
            { "TRYK_Beard3", "", 250, "" },
            { "TRYK_Beard_BW3", "", 250, "" },
            { "TRYK_Beard_Gr3", "", 250, "" },
            { "TRYK_Beard_BK4", "", 250, "" },
            { "TRYK_Beard_BL4", "", 250, "" },
            { "TRYK_Beard4", "", 250, "" },
            { "TRYK_Beard_BW4", "", 250, "" },
            { "TRYK_Beard_Gr4", "", 250, "" },
            { "TRYK_SBeard_BK", "", 250, "" },
            { "TRYK_SBeard_BL", "", 250, "" },
            { "TRYK_SBeard", "", 250, "" },
            { "TRYK_SBeard_BW", "", 250, "" },
            { "TRYK_SBeard_Gr", "", 250, "" },
            { "TRYK_SBeard_BK2", "", 250, "" },
            { "TRYK_SBeard_BL2", "", 250, "" },
            { "TRYK_SBeard2", "", 250, "" },
            { "TRYK_SBeard_BW2", "", 250, "" },
            { "TRYK_SBeard_Gr2", "", 250, "" },
            { "TRYK_SBeard_BK3", "", 250, "" },
            { "TRYK_SBeard_BL3", "", 250, "" },
            { "TRYK_SBeard3", "", 250, "" },
            { "TRYK_SBeard_BW3", "", 250, "" },
            { "TRYK_SBeard_Gr3", "", 250, "" },
            { "TRYK_SBeard_BK4", "", 250, "" },
            { "TRYK_SBeard_BL4", "", 250, "" },
            { "TRYK_SBeard4", "", 250, "" },
            { "TRYK_SBeard_BW4", "", 250, "" },
            { "TRYK_SBeard_Gr4", "", 250, "" },
            { "TRYK_SBeard_BK6", "", 250, "" },
            { "TRYK_SBeard_BL6", "", 250, "" },
            { "TRYK_SBeard6", "", 250, "" },
            { "TRYK_SBeard_BW6", "", 250, "" },
            { "TRYK_SBeard_Gr6", "", 250, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            trza zmienic classname na kamze bez imienia { "cl_vest_so_mcdonnel", "Jim McDonnel 201", 50, "call life_coplevel >= 5" },
            { "cl_vest_so_undersheriff", "Undersheriff", 50, "call life_coplevel >= 5" },
            { "cl_vest_so_assistant_sheriff", "Assistant Sheriff", 50, "call life_coplevel >= 5" },
            { "cl_vest_so", "Sheriff Vest", 50, "call life_coplevel >= 3" },
            { "TAC_V_tacv1LC_STF", "", 50, "call life_coplevel >= 3" },
            { "TAC_V_tacv1_SRF2", "", 50, "call life_coplevel >= 1" },
            { "EF_SHF_BK", "", 50, "call life_coplevel >= 1" },
            { "A3L_sheriffvest1_Fix", "", 50, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 50, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "D_EF_BLT_M1", "Pas Policyjny", 50, "call life_coplevel >= 1" }
        };
    };

    class cop_sert {
        title = "Ubrania sertowskie";
        conditions = "license_cop_sert";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            
            { "B_Fem_MUL", "Saper", 50, "call life_coplevel >= 3" },
            { "U_O_Wetsuit", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "sh_swat_com", "", 50, "call life_coplevel >= 3" },
            { "sh_swat_black", "", 50, "call life_coplevel >= 1" },
            { "sh_swat_green", "", 50, "call life_coplevel >= 1" },
            { "TAC_K6O", "", 50, "call life_coplevel >= 1" },
            { "UR_ShirtMask_11", "", 50, "call life_coplevel >= 1" },
            { "TAC_K6C", "Saper", 50, "call life_coplevel >= 3" },
            { "TRYK_R_CAP_BLK", "", 50, "" },
            { "TRYK_r_cap_blk_Glasses", "", 50, "" },
            { "UR_ShirtMask_11", "", 50, "call life_coplevel >= 1" },
            { "EF_wig_DHB", "", 250, "call life_coplevel >= 3" },
            { "EF_Long_wig_B", "", 250, "" },
            { "EF_Punk_wig_B", "", 250, "" },
            { "EF_Punk_wig_SB3", "", 250, "" },
            { "EF_Punk_wig_SB8", "", 250, "" },
            { "EF_Punk_wig_BLE", "", 250, "" },
            { "EF_Punk_wig_SBLE3", "", 250, "" },
            { "EF_Punk_wig_SBLE", "", 250, "" },
            { "EF_Punk_wig_GL", "", 250, "" },
            { "EF_Punk_wig_SGL3", "", 250, "" },
            { "EF_Punk_wig_SGL", "", 250, "" }
        };
        glasses[] = {
            { "NONE", $STR_C_Remove_glasses, 0, "" },
            { "CPE_MK50", "Maska Gazowa", 50, "call life_coplevel >= 1" },
            { "fow_g_glasses1", "", 50, "call life_coplevel >= 3" },
            { "fow_g_glasses2", "", 50, "call life_coplevel >= 3" },
            { "G_Bandanna_best", "", 50, "" },
            { "G_Bandanna_tan", "", 50, "" },
            { "G_Bandanna_blk", "", 50, "" },
            { "G_Bandanna_khk", "", 50, "" },
            { "G_Bandanna_aviator", "", 50, "" },
            { "G_Bandanna_shades", "", 50, "" },
            { "G_Bandanna_oli", "", 50, "" },
            { "G_Bandanna_sport", "", 50, "" },
            { "G_Balaclava_blk", "", 50, "" },
            { "G_Balaclava_oli", "", 50, "" },
            { "G_Squares", "", 50, "" },
            { "G_Spectacles", "", 50, "" },
            { "G_Aviator", "", 50, "" },
            { "G_Spectacles_Tinted", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" },
            { "TRYK_Beard_BK", "", 50, "" },
            { "TRYK_Beard_BL", "", 50, "" },
            { "TRYK_Beard", "", 50, "" },
            { "TRYK_Beard_BW", "", 50, "" },
            { "TRYK_Beard_Gr", "", 50, "" },
            { "TRYK_Beard_BK2", "", 50, "" },
            { "TRYK_Beard_BL2", "", 50, "" },
            { "TRYK_Beard2", "", 50, "" },
            { "TRYK_Beard_BW2", "", 50, "" },
            { "TRYK_Beard_Gr2", "", 50, "" },
            { "TRYK_Beard_BK3", "", 50, "" },
            { "TRYK_Beard_BL3", "", 50, "" },
            { "TRYK_Beard3", "", 50, "" },
            { "TRYK_Beard_BW3", "", 50, "" },
            { "TRYK_Beard_Gr3", "", 50, "" },
            { "TRYK_Beard_BK4", "", 50, "" },
            { "TRYK_Beard_BL4", "", 50, "" },
            { "TRYK_Beard4", "", 50, "" },
            { "TRYK_Beard_BW4", "", 50, "" },
            { "TRYK_Beard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK", "", 50, "" },
            { "TRYK_SBeard_BL", "", 50, "" },
            { "TRYK_SBeard", "", 50, "" },
            { "TRYK_SBeard_BW", "", 50, "" },
            { "TRYK_SBeard_Gr", "", 50, "" },
            { "TRYK_SBeard_BK2", "", 50, "" },
            { "TRYK_SBeard_BL2", "", 50, "" },
            { "TRYK_SBeard2", "", 50, "" },
            { "TRYK_SBeard_BW2", "", 50, "" },
            { "TRYK_SBeard_Gr2", "", 50, "" },
            { "TRYK_SBeard_BK3", "", 50, "" },
            { "TRYK_SBeard_BL3", "", 50, "" },
            { "TRYK_SBeard3", "", 50, "" },
            { "TRYK_SBeard_BW3", "", 50, "" },
            { "TRYK_SBeard_Gr3", "", 50, "" },
            { "TRYK_SBeard_BK4", "", 50, "" },
            { "TRYK_SBeard_BL4", "", 50, "" },
            { "TRYK_SBeard4", "", 50, "" },
            { "TRYK_SBeard_BW4", "", 50, "" },
            { "TRYK_SBeard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK6", "", 50, "" },
            { "TRYK_SBeard_BL6", "", 50, "" },
            { "TRYK_SBeard6", "", 50, "" },
            { "TRYK_SBeard_BW6", "", 50, "" },
            { "TRYK_SBeard_Gr6", "", 50, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "EF_SHF_BK", "", 50, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 50, "call life_coplevel >= 1" },
            { "V_PlateCarrierGL_mtp", "Saper", 50, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "D_EF_BLT_M1", "Pas Policyjny", 50, "call life_coplevel >= 1" }
        };
    };

    class cop_dtu {
        title = "Ubrania dtu";
        conditions = "license_cop_dtu";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "cl_DTU_Captain", "Captain", 50, "call life_coplevel >= 1" },
            { "cl_DTU_Lieutenant", "Lieutenant", 50, "call life_coplevel >= 1" },
            { "cl_DTU_Officer3", "Detective 3", 50, "call life_coplevel >= 1" },
            { "cl_DTU_Officer2", "Detective 2", 50, "call life_coplevel >= 1" },
            { "cl_DTU_Officer1", "Detective 1", 50, "call life_coplevel >= 1" },
            { "cl_DTU_Probie", "Probie Detective", 50, "call life_coplevel >= 1" }
            { "hoodie_dtu_1", "Bluza DTU 1", 50, "call life_coplevel >= 1" },
            { "hoodie_dtu_2", "Bluza DTU 2", 50, "call life_coplevel >= 1" },
            { "TRYK_dtu_1", "Bluza DTU 3", 50, "call life_coplevel >= 1" },
            { "hoodie_dtu_3", "Bluza DTU Blue", 50, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "d_dtu_command", "", 50, "call life_coplevel >= 3" },
            { "d_dtu", "", 50, "call life_coplevel >= 1" },
            { "sh_dtu_cap_2", "", 50, "call life_coplevel >= 1" },
            { "H_StrawHat", "", 50, "" },
            { "H_StrawHat_Dark", "", 50, "" },
            { "TRYK_R_CAP_BLK", "", 50, "" },
            { "TRYK_R_CAP_TAN", "", 50, "" },
            { "TRYK_R_CAP_OD_US", "", 50, "" },
            { "TRYK_r_cap_blk_Glasses", "", 50, "" },
            { "TRYK_r_cap_od_Glasses", "", 50, "" },
            { "TRYK_r_cap_tan_Glasses", "", 50, "" }
        };
        glasses[] = {
            { "NONE", $STR_C_Remove_glasses, 0, "" },
            { "CPE_MK50", "Maska Gazowa", 50, "call life_coplevel >= 1" },
            { "G_Bandanna_best", "", 50, "" },
            { "G_Bandanna_tan", "", 50, "" },
            { "G_Bandanna_blk", "", 50, "" },
            { "G_Bandanna_khk", "", 50, "" },
            { "G_Bandanna_aviator", "", 50, "" },
            { "G_Bandanna_shades", "", 50, "" },
            { "G_Bandanna_oli", "", 50, "" },
            { "G_Bandanna_sport", "", 50, "" },
            { "G_Balaclava_blk", "", 50, "" },
            { "G_Balaclava_oli", "", 50, "" },
            { "G_Squares", "", 50, "" },
            { "G_Spectacles", "", 50, "" },
            { "G_Aviator", "", 50, "" },
            { "G_Spectacles_Tinted", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" },
            { "TRYK_Beard_BK", "", 50, "" },
            { "TRYK_Beard_BL", "", 50, "" },
            { "TRYK_Beard", "", 50, "" },
            { "TRYK_Beard_BW", "", 50, "" },
            { "TRYK_Beard_Gr", "", 50, "" },
            { "TRYK_Beard_BK2", "", 50, "" },
            { "TRYK_Beard_BL2", "", 50, "" },
            { "TRYK_Beard2", "", 50, "" },
            { "TRYK_Beard_BW2", "", 50, "" },
            { "TRYK_Beard_Gr2", "", 50, "" },
            { "TRYK_Beard_BK3", "", 50, "" },
            { "TRYK_Beard_BL3", "", 50, "" },
            { "TRYK_Beard3", "", 50, "" },
            { "TRYK_Beard_BW3", "", 50, "" },
            { "TRYK_Beard_Gr3", "", 50, "" },
            { "TRYK_Beard_BK4", "", 50, "" },
            { "TRYK_Beard_BL4", "", 50, "" },
            { "TRYK_Beard4", "", 50, "" },
            { "TRYK_Beard_BW4", "", 50, "" },
            { "TRYK_Beard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK", "", 50, "" },
            { "TRYK_SBeard_BL", "", 50, "" },
            { "TRYK_SBeard", "", 50, "" },
            { "TRYK_SBeard_BW", "", 50, "" },
            { "TRYK_SBeard_Gr", "", 50, "" },
            { "TRYK_SBeard_BK2", "", 50, "" },
            { "TRYK_SBeard_BL2", "", 50, "" },
            { "TRYK_SBeard2", "", 50, "" },
            { "TRYK_SBeard_BW2", "", 50, "" },
            { "TRYK_SBeard_Gr2", "", 50, "" },
            { "TRYK_SBeard_BK3", "", 50, "" },
            { "TRYK_SBeard_BL3", "", 50, "" },
            { "TRYK_SBeard3", "", 50, "" },
            { "TRYK_SBeard_BW3", "", 50, "" },
            { "TRYK_SBeard_Gr3", "", 50, "" },
            { "TRYK_SBeard_BK4", "", 50, "" },
            { "TRYK_SBeard_BL4", "", 50, "" },
            { "TRYK_SBeard4", "", 50, "" },
            { "TRYK_SBeard_BW4", "", 50, "" },
            { "TRYK_SBeard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK6", "", 50, "" },
            { "TRYK_SBeard_BL6", "", 50, "" },
            { "TRYK_SBeard6", "", 50, "" },
            { "TRYK_SBeard_BW6", "", 50, "" },
            { "TRYK_SBeard_Gr6", "", 50, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "cl_vest_dtu_commander_ulany", "Filip Ulany 301", 50, "call life_coplevel >= 3" },
            { "cl_vest_dtu_commander", "Commander", 50, "call life_coplevel >= 3" },
            { "cl_vest_dtu_officer", "Detective", 50, "call life_coplevel >= 2" },
            { "cl_vest_dtu_proobie", "Probie Detective", 50, "call life_coplevel >= 1" },
            { "cl_tac_dtu", "Probie Detective Vest", 50, "call life_coplevel >= 1" },
            { "EF_BS", "Odznaka", 50, "call life_coplevel >= 1" },
            { "EF_SHF_BK", "", 50, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "D_EF_BLT_M1", "Pas Policyjny", 50, "call life_coplevel >= 1" },
            { "D_EF_BLT_M1B", "Pas Policyjny z odznaka", 50, "call life_coplevel >= 1" }
        };
    };
    
    class cop_aia {
        title = "Ubrania aia";
        conditions = "license_cop_aia";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "cl_AIA_Chief", "AIA Chief", 50, "call life_coplevel >= 1" },
            { "cl_AIA_Inspector", "AIA Inspector", 50, "call life_coplevel >= 1" },
            { "cl_AIA_Proobie", "AIA Probie Inspector", 50, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "d_aia_beret_chief", "", 50, "call life_coplevel >= 3" },
            { "d_aia_beret", "", 50, "call life_coplevel >= 1" },
            { "H_StrawHat", "", 50, "" },
            { "H_StrawHat_Dark", "", 50, "" },
            { "TRYK_R_CAP_BLK", "", 50, "" },
            { "TRYK_R_CAP_TAN", "", 50, "" },
            { "TRYK_R_CAP_OD_US", "", 50, "" },
            { "TRYK_r_cap_blk_Glasses", "", 50, "" },
            { "TRYK_r_cap_od_Glasses", "", 50, "" },
            { "TRYK_r_cap_tan_Glasses", "", 50, "" }
        };
        glasses[] = {
            { "NONE", $STR_C_Remove_glasses, 0, "" },
            { "CPE_MK50", "Maska Gazowa", 50, "call life_coplevel >= 1" },
            { "G_Bandanna_best", "", 50, "" },
            { "G_Bandanna_tan", "", 50, "" },
            { "G_Bandanna_blk", "", 50, "" },
            { "G_Bandanna_khk", "", 50, "" },
            { "G_Bandanna_aviator", "", 50, "" },
            { "G_Bandanna_shades", "", 50, "" },
            { "G_Bandanna_oli", "", 50, "" },
            { "G_Bandanna_sport", "", 50, "" },
            { "G_Balaclava_blk", "", 50, "" },
            { "G_Balaclava_oli", "", 50, "" },
            { "G_Squares", "", 50, "" },
            { "G_Spectacles", "", 50, "" },
            { "G_Aviator", "", 50, "" },
            { "G_Spectacles_Tinted", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" },
            { "TRYK_Beard_BK", "", 50, "" },
            { "TRYK_Beard_BL", "", 50, "" },
            { "TRYK_Beard", "", 50, "" },
            { "TRYK_Beard_BW", "", 50, "" },
            { "TRYK_Beard_Gr", "", 50, "" },
            { "TRYK_Beard_BK2", "", 50, "" },
            { "TRYK_Beard_BL2", "", 50, "" },
            { "TRYK_Beard2", "", 50, "" },
            { "TRYK_Beard_BW2", "", 50, "" },
            { "TRYK_Beard_Gr2", "", 50, "" },
            { "TRYK_Beard_BK3", "", 50, "" },
            { "TRYK_Beard_BL3", "", 50, "" },
            { "TRYK_Beard3", "", 50, "" },
            { "TRYK_Beard_BW3", "", 50, "" },
            { "TRYK_Beard_Gr3", "", 50, "" },
            { "TRYK_Beard_BK4", "", 50, "" },
            { "TRYK_Beard_BL4", "", 50, "" },
            { "TRYK_Beard4", "", 50, "" },
            { "TRYK_Beard_BW4", "", 50, "" },
            { "TRYK_Beard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK", "", 50, "" },
            { "TRYK_SBeard_BL", "", 50, "" },
            { "TRYK_SBeard", "", 50, "" },
            { "TRYK_SBeard_BW", "", 50, "" },
            { "TRYK_SBeard_Gr", "", 50, "" },
            { "TRYK_SBeard_BK2", "", 50, "" },
            { "TRYK_SBeard_BL2", "", 50, "" },
            { "TRYK_SBeard2", "", 50, "" },
            { "TRYK_SBeard_BW2", "", 50, "" },
            { "TRYK_SBeard_Gr2", "", 50, "" },
            { "TRYK_SBeard_BK3", "", 50, "" },
            { "TRYK_SBeard_BL3", "", 50, "" },
            { "TRYK_SBeard3", "", 50, "" },
            { "TRYK_SBeard_BW3", "", 50, "" },
            { "TRYK_SBeard_Gr3", "", 50, "" },
            { "TRYK_SBeard_BK4", "", 50, "" },
            { "TRYK_SBeard_BL4", "", 50, "" },
            { "TRYK_SBeard4", "", 50, "" },
            { "TRYK_SBeard_BW4", "", 50, "" },
            { "TRYK_SBeard_Gr4", "", 50, "" },
            { "TRYK_SBeard_BK6", "", 50, "" },
            { "TRYK_SBeard_BL6", "", 50, "" },
            { "TRYK_SBeard6", "", 50, "" },
            { "TRYK_SBeard_BW6", "", 50, "" },
            { "TRYK_SBeard_Gr6", "", 50, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "cl_vest_aia_krzysiek", "Krzysiek Wiewior 801", 50, "call life_coplevel >= 3" },
            { "cl_vest_aia_inspector", "Inspector", 50, "call life_coplevel >= 2" },
            { "D_AIA_V", "AIA Vest", 50, "call life_coplevel >= 2" },
            { "cl_vest_aia_probie", "Probie Inspector", 50, "call life_coplevel >= 1" },
            { "cl_tac_aia", "Probie Inspector Vest", 50, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "D_EF_BLT_M1", "Pas Policyjny", 50, "call life_coplevel >= 1" }
        };
    };
    

    class cop_swat {
        name = "Sklep Policyjny(Uzbrojenie)";
        side = "cop";
        conditions = "license_cop_swat";
        items[] = {
			{ "hlc_smg_MP5N", "", 2000, 0, "call life_coplevel >= 1" },
			{ "RH_Hk416s", "", 2000, 0, "call life_coplevel >= 2" },
			{ "RH_M4_ris_m", "", 2000, 0, "call life_coplevel >= 2" },
			{ "RH_Mk11", "", 2000, 0, "call life_coplevel >= 2" },
			{ "KA_M7290", "Granat Blyskowy", 2500, 0, "call life_coplevel >= 2" },
			{ "KA_M7A30", "Gaz Lzawiacy", 2500, 0, "call life_coplevel >= 2" },
			{ "KA_M814", "Granat EMP", 2500, 0, "call life_coplevel >= 2" },
			{ "SmokeShellGreen", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShell", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShellRed", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShellYellow", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShellPurple", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShellBlue", "", 200, 0, "call life_coplevel >= 1" },
			{ "SmokeShellOrange", "", 200, 0, "call life_coplevel >= 1" }

        };
        mags[] = {
			{ "hlc_30Rnd_9x19_B_MP5", "", 10, 0, "call life_coplevel >= 1" },
			{ "RH_30Rnd_556x45_M855A1", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_20Rnd_762x51_M80A1", "", 10, 0, "call life_coplevel >= 2" }
			


        };
        accs[] = {

			{ "RH_qdss_nt4", "", 10, 0, "call life_coplevel >= 1" },
			{ "SMA_SFFL_BLK", "", 10, 0, "call life_coplevel >= 1" },
			{ "RH_ta31rmr", "", 10, 0, "call life_coplevel >= 1" },
			{ "optic_aco", "", 10, 0, "call life_coplevel >= 1" }
			

        };
    };

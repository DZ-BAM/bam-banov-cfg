void BAM_SpawnObject(string objType, vector objPos, vector objOrientation)
{
	Object m_Building = Object.Cast(GetGame().CreateObject(objType, objPos));
	if (m_Building == null) return;
	m_Building.SetAffectPathgraph(true, false);
	GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, m_Building);
	m_Building.SetPosition(objPos);
	m_Building.SetOrientation(objOrientation);
}

void BAM_CreateTraderObjects()
{
	// General
	BAM_SpawnObject( "kaufland_sign", "7825.479980 246.000000 7235.200195", "57.001423 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7794.939941 237.300003 7252.790039", "-92.969528 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7791.259766 237.300003 7252.540039", "87.030457 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7787.629883 237.300003 7252.359863", "87.030457 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7784.009766 237.300003 7252.160156", "87.030457 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7780.370117 237.300003 7251.990234", "87.030457 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7777.959961 237.300003 7250.759766", "-2.998346 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7778.140137 237.300003 7247.140137", "-2.998346 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7778.339844 237.300003 7243.500000", "-2.998346 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7778.529785 237.300003 7239.870117", "-2.998346 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7778.750000 237.300003 7236.259766", "-2.998803 1.000209 0.012637" );

	// Tool trader
	BAM_SpawnObject( "land_chz_ekskavator", "7797.700195 239.600006 7269.560059", "14.998220 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_ytong_prx", "7809.180176 237.776001 7272.990234", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_ytong_prx", "7807.359863 237.776001 7272.669922", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_ytong_prx", "7805.520020 237.776001 7272.750000", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_pipe_big_prx", "7807.250000 237.776001 7274.229980", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_mine_heap", "7828.049805 236.000000 7275.459961", "92.001938 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_concretepipe", "7807.319824 239.000000 7282.490234", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_concretepipe", "7806.169922 241.000000 7282.600098", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_concretepipe", "7804.870117 238.990005 7282.339844", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_pipes353", "7794.879883 238.470001 7281.299805", "-50.000690 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_misc_gcontainer_big", "7838.459961 238.380005 7281.700195", "-50.000690 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_ytong_prx", "7806.350098 239.634995 7272.660156", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "land_chz_buldozer", "7818.589844 240.440002 7273.299805", "-104.011505 -26.999289 0.999031" );
	BAM_SpawnObject( "land_chz_katok_1", "7838.310059 239.500000 7267.819824", "-21.001869 0.000000 0.000000" );
	BAM_SpawnObject( "Land_Mil_GuardShed", "7806.819824 239.000000 7263.689941", "-1.000209 0.000000 0.000000" );
	BAM_SpawnObject( "SV_StationaryGenerator", "7811.819824 239.000000 7265.180176", "87.998047 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_oil_bottle", "7810.729980 237.776001 7267.620117", "0.000000 -1.000209 -1.000209" );
	BAM_SpawnObject( "vbldr_wheel_cart_dz", "7807.589844 237.776001 7265.700195", "18.999596 0.000000 -0.000000" );

	// Car trader

	// Food trader
	BAM_SpawnObject( "Land_Misc_Well_Pump_Yellow", "7800.009766 238.000000 7239.799805", "-108.001244 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_woodtable_outdoor", "7804.470215 237.699997 7244.990234", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_woodtable_outdoor", "7804.330078 237.699997 7249.720215", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_woodtable_indoor", "7798.569824 237.649994 7245.500000", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_woodtable_indoor", "7798.540039 237.649994 7249.569824", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "land_chz_traktor_1", "7768.310059 238.199997 7225.000000", "-41.999828 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_pultskasou", "7811.270020 238.000000 7244.330078", "89.104713 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_icebox", "7812.990234 236.000000 7241.160156", "175.999985 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_shelf_1side", "7815.200195 237.345001 7243.879883", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7813.089844 237.300003 7253.640137", "-92.001938 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7809.410156 237.300003 7253.439941", "87.998047 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7805.879883 237.300003 7253.359863", "-92.969528 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7797.600098 237.201004 7256.720215", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7802.229980 237.300003 7253.180176", "-92.969528 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_panels", "7798.580078 237.300003 7252.979980", "-92.969528 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_path_rock_10", "7801.200195 237.201004 7247.379883", "-4.000385 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_path_rock_10", "7800.910156 237.201004 7247.250000", "-94.986099 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_wall_gate_fen2_r", "7815.399902 238.500000 7241.430176", "88.998299 1.000210 179.982986" );
	BAM_SpawnObject( "vbldr_monument_wall", "7807.000000 238.389999 7240.950195", "178.999786 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_monument_wall", "7806.299805 238.380005 7236.399902", "-1.000209 0.000000 0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans_open", "7804.950195 238.222000 7245.299805", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans_open", "7804.000000 238.240005 7244.950195", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans", "7814.990234 238.000000 7243.879883", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans", "7814.910156 238.649994 7243.479980", "159.998718 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans", "7814.930176 238.649994 7243.339844", "128.998657 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bakedbeans", "7814.919922 238.649994 7243.209961", "124.999916 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bucket", "7799.750000 237.796005 7239.450195", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bucket", "7798.120117 237.201004 7240.310059", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bucket", "7798.160156 237.201004 7239.939941", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bucket", "7798.080078 237.201004 7239.430176", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_bucket", "7798.270020 237.300003 7239.589844", "24.996946 -79.000351 0.003081" );

	// Weapons trader
	BAM_SpawnObject( "Land_Wall_Gate_Fen2_L", "0.000000 -5000.000000 0.000000", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_misc_table_camp", "7796.430176 237.800003 7239.930176", "-2.000720 0.000000 0.000000" );
	BAM_SpawnObject( "Land_Wall_Gate_Fen2_L", "0.000000 -5000.000000 0.000000", "180.000000 0.000000 -180.000000" );
	BAM_SpawnObject( "vbldr_misc_gunrack", "7797.169922 237.699997 7236.629883", "87.998047 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_tent_gunrack_prx", "7796.020020 237.699997 7236.580078", "90.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_tent_gunrack_prx", "7794.879883 237.699997 7236.589844", "90.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_akm", "7797.080078 238.199005 7239.959961", "-150.770599 -89.104523 176.769455" );
	BAM_SpawnObject( "vbldr_magazine_akm_palm30", "7797.049805 238.199997 7240.009766", "90.000000 -89.013435 -36.999496" );
	BAM_SpawnObject( "vbldr_mosin_sawn", "7795.899902 238.199997 7239.959961", "-179.999985 -89.980209 -0.000000" );
	BAM_SpawnObject( "vbldr_winchester70", "7796.319824 237.800003 7236.669922", "94.006310 -2.000723 101.998703" );
	BAM_SpawnObject( "vbldr_svd", "7795.709961 237.800003 7236.479980", "89.104713 0.000000 110.001266" );
	BAM_SpawnObject( "vbldr_akm", "7797.029785 237.509995 7237.169922", "5.001576 16.999199 96.014221" );
	BAM_SpawnObject( "vbldr_mil_camonet_roof_east", "7793.000000 239.000000 7245.000000", "1.000209 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_roadblock_bags_long", "7793.220215 237.201004 7242.080078", "0.000000 0.000000 -0.000000" );
	BAM_SpawnObject( "vbldr_roadblock_bags_curve", "7800.189941 238.000000 7234.500000", "-93.003563 -1.000209 -0.448261" );
	BAM_SpawnObject( "vbldr_wall_gate_fen2_r", "7796.089844 237.699997 7240.600098", "177.998978 0.000000 -179.999985" );
	BAM_SpawnObject( "vbldr_metal_plates_up", "7795.399902 237.800003 7240.620117", "0.000000 0.000000 -0.000000" );
}
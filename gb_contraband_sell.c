#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<365> Local_118 = { 7200000, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0 } ;
	var uLocal_483 = 0;
	struct<10> Local_484 = { 0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1 } ;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = -1;
	var uLocal_503 = -1;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516[2] = { 0, 0 };
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	int iLocal_522 = 0;
	struct<2> Local_523[3];
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	struct<597> Local_538 = { 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 3, 0, 0, 0, -1082130432, 0, 12, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1 } ;
	struct<10> Local_1135[4];
	struct<3> Local_1176 = { 0, 0, 0 } ;
	struct<3> Local_1179 = { 0, 0, 0 } ;
	struct<3> Local_1182 = { 0, 0, 0 } ;
	struct<3> Local_1185 = { 0, 0, 0 } ;
	bool bLocal_1188 = 0;
	var uLocal_1189 = 16;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	bool bLocal_1354 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_116 = -1;
	iLocal_117 = -1;
	iLocal_536 = -1;
	iLocal_537 = -1;
	Local_1176 = { -5f, -5f, 0f };
	Local_1179 = { 5f, -5f, 0f };
	Local_1182 = { 5f, 5f, 0f };
	Local_1185 = { -5f, 5f, 0f };
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_2520(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_2445(ScriptParam_0))
			{
				func_2376(0, 1);
				func_2296(0);
			}
		}
		else
		{
			func_2296(0);
		}
	}
	else
	{
		func_2376(0, 1);
		func_2296(0);
	}
	bLocal_1354 = func_2295();
	while (true)
	{
		func_2294();
		if (func_2284(1))
		{
			func_2376(0, 1);
			func_2296(0);
		}
		if (func_2279())
		{
			func_2376(0, 1);
			func_2296(1);
		}
		func_2275();
		func_2263();
		switch (func_2262(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_2261() == 1)
				{
					if ((((func_2295() && !func_2260()) && !func_2259(2)) && !func_2258()) && func_2257() > 1)
					{
						func_2218(0);
						if (iLocal_534 == 2 || iLocal_534 == 3)
						{
							if (func_2216())
							{
								func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
								func_2214();
							}
						}
					}
					else if (func_2216())
					{
						func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
						func_2214();
					}
				}
				else if (func_2261() == 3)
				{
					func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 1:
				if (func_2261() == 1)
				{
					func_515();
				}
				else if (func_2261() == 3)
				{
					func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_2296(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_514())
			{
				func_513(3);
			}
			switch (func_2261())
			{
				case 0:
					if (func_472())
					{
						func_513(1);
					}
					break;
				
				case 1:
					func_43();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()//Position - 0x282
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4[3];
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11[3];
	bool bVar15;
	bool bVar16;
	int iVar17;
	
	bVar10 = true;
	bVar15 = true;
	bVar16 = false;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0))
		{
			iVar8 = bVar0;
			bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
			iVar9 = PLAYER::GET_PLAYER_PED(bVar3);
			bVar1 = bVar3;
			MISC::SET_BIT(&uLocal_520, bVar0);
			if (func_2520(bVar3, 0, 1))
			{
				if (Local_1135[bVar0 /*10*/] != 3)
				{
					bVar15 = false;
				}
				MISC::SET_BIT(&uLocal_519, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					MISC::SET_BIT(&uLocal_521, bVar1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[0]))
				{
					if (func_39(0, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[0] = bVar3;
						iVar11[0] = 1;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[0]))
				{
					if (func_39(1, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[1] = bVar3;
						iVar11[1] = 1;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[0]))
				{
					if (func_39(2, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[2] = bVar3;
						iVar11[2] = 1;
					}
				}
				if (!bVar16)
				{
					if (func_38(iVar8, 14))
					{
						if (!BitTest(Local_538.f_586, 0))
						{
							if (func_37(10) || !func_35())
							{
								bVar16 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_538.f_586), false);
							}
						}
					}
					else if (func_38(iVar8, 15))
					{
						if (!BitTest(Local_538.f_586, 1))
						{
							if (func_37(11) || !func_35())
							{
								bVar16 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_538.f_586), true);
							}
						}
					}
					else if (func_38(iVar8, 16))
					{
						if (!BitTest(Local_538.f_586, 2))
						{
							if (func_37(12) || !func_35())
							{
								bVar16 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_538.f_586), 2);
							}
						}
					}
				}
				if (!func_38(iVar8, 0))
				{
					bVar10 = false;
				}
				if (!func_37(6))
				{
					if (func_38(iVar8, 2))
					{
						func_34(6);
					}
				}
				if (!func_2259(5))
				{
					if (func_38(iVar8, 17) && Local_1135[bVar0 /*10*/].f_7 != func_33())
					{
						func_25(Local_1135[bVar0 /*10*/].f_7);
						func_24(5);
					}
				}
				if (!func_23(0))
				{
					if (func_38(iVar8, 8))
					{
						func_34(19);
						func_22(0);
					}
				}
				if (!func_23(1))
				{
					if (func_38(iVar8, 9))
					{
						func_34(20);
						func_22(1);
					}
				}
				if (!func_23(2))
				{
					if (func_38(iVar8, 10))
					{
						func_34(21);
						func_22(2);
					}
				}
				if (!func_37(9))
				{
					if (func_38(iVar8, 4))
					{
						func_34(9);
					}
				}
				if (!func_37(18))
				{
					if (func_38(iVar8, 7))
					{
						iVar17 = func_13();
						if (iVar17 > -1)
						{
							Local_538.f_591 = iVar17;
							func_34(18);
						}
					}
				}
				if (!func_37(22))
				{
					if (func_38(iVar8, 12))
					{
						func_34(22);
					}
				}
				if (!func_2259(0))
				{
					if (func_38(iVar8, 13))
					{
						func_24(0);
					}
				}
				if (!func_2259(6))
				{
					if (func_38(iVar8, 18))
					{
						func_24(6);
					}
				}
				if (func_12())
				{
					bVar2 = false;
					bVar2 = false;
					while (bVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar2 /*6*/]))
						{
							if (!BitTest(Local_538.f_549, bVar2))
							{
								if (BitTest(Local_1135[bVar0 /*10*/].f_8, bVar2))
								{
									MISC::SET_BIT(&(Local_538.f_549), bVar2);
								}
							}
						}
						bVar2++;
					}
				}
				if (func_11())
				{
					bVar2 = false;
					bVar2 = false;
					while (bVar2 < func_9())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar2 /*6*/]))
						{
							if (!BitTest(Local_538.f_550, bVar2))
							{
								if (func_8(bVar2) == 3)
								{
									if (BitTest(Local_1135[bVar0 /*10*/].f_9, bVar2))
									{
										MISC::SET_BIT(&(Local_538.f_550), bVar2);
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4[0] != Local_538.f_31[0])
	{
		Local_538.f_31[0] = bVar4[0];
	}
	if (bVar4[1] != Local_538.f_31[1])
	{
		Local_538.f_31[1] = bVar4[1];
	}
	if (bVar4[2] != Local_538.f_31[2])
	{
		Local_538.f_31[2] = bVar4[2];
	}
	if (iVar11[0])
	{
		if (!func_37(10))
		{
			func_3();
			func_34(10);
		}
		if (!func_37(13))
		{
			func_34(13);
		}
	}
	else if (func_37(13))
	{
		func_2(13);
	}
	if (iVar11[1])
	{
		if (!func_37(11))
		{
			func_3();
			func_34(11);
		}
		if (!func_37(14))
		{
			func_34(14);
		}
	}
	else if (func_37(14))
	{
		func_2(14);
	}
	if (iVar11[2])
	{
		if (!func_37(12))
		{
			func_3();
			func_34(12);
		}
		if (!func_37(15))
		{
			func_34(15);
		}
	}
	else if (func_37(15))
	{
		func_2(15);
	}
	if (bVar16)
	{
		func_34(17);
	}
	if (bVar15)
	{
		if (!func_37(16))
		{
			func_34(16);
		}
	}
	if (bVar10)
	{
		if (!func_37(0))
		{
			func_34(0);
		}
	}
	else if (func_37(0))
	{
		func_2(0);
	}
}

void func_2(bool bParam0)//Position - 0x7AE
{
	MISC::CLEAR_BIT(&(Local_538.f_1), bParam0);
}

void func_3()//Position - 0x7C1
{
	if (func_6())
	{
		if (!func_5(&(Local_538.f_584)))
		{
			func_4(&(Local_538.f_584), 0, 0);
		}
	}
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x7EA
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)//Position - 0x82F
{
	return uParam0->f_1;
}

int func_6()//Position - 0x83B
{
	int iVar0;
	
	iVar0 = func_7();
	if (func_2257() == 1 && !func_2258())
	{
		iVar0 = 3;
	}
	if (iVar0 == 2 || iVar0 == 3)
	{
		return 1;
	}
	else if (Global_262145.f_16760 > 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x887
{
	var uVar0;
	
	uVar0 = Local_538.f_593;
	return uVar0;
}

int func_8(bool bParam0)//Position - 0x899
{
	return Local_538.f_499[bParam0 /*6*/].f_5;
}

int func_9()//Position - 0x8AD
{
	int iVar0;
	
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		
		case 5:
		case 6:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_10()//Position - 0x8FC
{
	return Local_538.f_7;
}

bool func_11()//Position - 0x909
{
	return func_10() == 6;
}

bool func_12()//Position - 0x917
{
	return func_10() == 11;
}

int func_13()//Position - 0x926
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[bVar0]))
		{
			if (func_19(Local_538.f_35[bVar0]))
			{
				if (!func_15(NETWORK::NET_TO_VEH(Local_538.f_35[bVar0]), Local_538.f_54, 350f))
				{
					if (func_14(bVar0))
					{
						return bVar0;
					}
				}
			}
		}
		bVar0++;
	}
	return -1;
}

int func_14(bool bParam0)//Position - 0x991
{
	switch (bParam0)
	{
		case 0:
			return func_37(13);
		
		case 1:
			return func_37(14);
		
		case 2:
			return func_37(15);
		
		default:
	}
	return 0;
}

int func_15(int iParam0, int iParam1, float fParam2)//Position - 0x9CE
{
	struct<3> Var0;
	
	Var0 = { func_17(iParam1) };
	if (!func_16(Var0, 0f, 0f, 0f, 0))
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true) <= fParam2;
	}
	return 0;
}

bool func_16(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xA07
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_17(int iParam0)//Position - 0xA4E
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_18(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50,9205f, -2560,01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074,852f, -1257,452f, 5,6938f };
			break;
		
		case 3:
			Var0 = { 901,936f, -1019,425f, 34,9666f };
			break;
		
		case 4:
			Var0 = { 253,9006f, -1955,933f, 22,9477f };
			break;
		
		case 5:
			Var0 = { -426,279f, 180,9043f, 80,6855f };
			break;
		
		case 6:
			Var0 = { -1050,36f, -2023,939f, 12,1616f };
			break;
		
		case 7:
			Var0 = { -1275,378f, -815,4295f, 17,1148f };
			break;
		
		case 8:
			Var0 = { -883,2906f, -2730,542f, 12,8285f };
			break;
		
		case 9:
			Var0 = { 269,6765f, -3016,279f, 5,7176f };
			break;
		
		case 10:
			Var0 = { 1561,402f, -2138,697f, 77,5275f };
			break;
		
		case 11:
			Var0 = { -303,7892f, -2698,39f, 6,0003f };
			break;
		
		case 12:
			Var0 = { 507,2061f, -649,5859f, 24,7512f };
			break;
		
		case 13:
			Var0 = { -525,8206f, -1775,87f, 21,3501f };
			break;
		
		case 14:
			Var0 = { -291,6372f, -1352,556f, 31,3146f };
			break;
		
		case 15:
			Var0 = { 348,6436f, 324,428f, 104,3185f };
			break;
		
		case 16:
			Var0 = { 922,0838f, -1561,299f, 29,7475f };
			break;
		
		case 17:
			Var0 = { 763,7448f, -885,2086f, 25,0869f };
			break;
		
		case 18:
			Var0 = { 1043,884f, -2172,603f, 30,471f };
			break;
		
		case 19:
			Var0 = { 1001,659f, -2511,88f, 28,302f };
			break;
		
		case 20:
			Var0 = { -263,138f, 194,3424f, 85,184f };
			break;
		
		case 21:
			Var0 = { 547,8112f, -1942,514f, 23,9851f };
			break;
		
		case 22:
			Var0 = { 88,9678f, -2216,882f, 6,0613f };
			break;
	}
	return Var0;
}

int func_18(int iParam0)//Position - 0xCDD
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0)//Position - 0xCFC
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_20(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xD1C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xD55
{
	switch (Local_538.f_582)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 1:
		case 5:
			return 2;
		
		case 6:
		case 7:
			return 3;
		
		default:
	}
	return 1;
}

void func_22(bool bParam0)//Position - 0xDA5
{
	switch (bParam0)
	{
		case 0:
			if (!func_37(23))
			{
				func_34(23);
			}
			break;
		
		case 1:
			if (!func_37(24))
			{
				func_34(24);
			}
			break;
		
		case 2:
			if (!func_37(25))
			{
				func_34(25);
			}
			break;
	}
}

int func_23(bool bParam0)//Position - 0xDFF
{
	switch (bParam0)
	{
		case 0:
			return func_37(19);
		
		case 1:
			return func_37(20);
		
		case 2:
			return func_37(21);
		
		default:
	}
	return 0;
}

void func_24(bool bParam0)//Position - 0xE3C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_538.f_2), iParam0);
}

void func_25(var uParam0)//Position - 0xE5A
{
	func_26(func_29(1, 0), func_28(), uParam0);
}

void func_26(int iParam0, int iParam1, var uParam2)//Position - 0xE72
{
	struct<6> Var0;
	
	Var0.f_0 = -1925643489;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam2;
	func_27(&(Var0.f_4), &(Var0.f_5));
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, iParam0);
	}
}

void func_27(var uParam0, var uParam1)//Position - 0xEB6
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

int func_28()//Position - 0xED0
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

int func_29(int iParam0, bool bParam1)//Position - 0xEE7
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_2520(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_30(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_30(bool bParam0, int iParam1)//Position - 0xF4C
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_31(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_31(int iParam0, bool bParam1)//Position - 0xF97
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_32()//Position - 0xFD8
{
	return Global_1574918;
}

int func_33()//Position - 0xFE4
{
	return -1;
}

void func_34(bool bParam0)//Position - 0xFED
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_538.f_1), iParam0);
}

bool func_35()//Position - 0x100B
{
	return func_36(func_10());
}

int func_36(int iParam0)//Position - 0x101B
{
	if ((((((iParam0 == 2 || iParam0 == 0) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_37(int iParam0)//Position - 0x106B
{
	return BitTest(Local_538.f_1, iParam0);
}

bool func_38(int iParam0, int iParam1)//Position - 0x107B
{
	return BitTest(Local_1135[iParam0 /*10*/].f_2, iParam1);
}

int func_39(bool bParam0, int iParam1)//Position - 0x108F
{
	if (func_41(bParam0))
	{
		if (iParam1 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), -1, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(bool bParam0)//Position - 0x10B6
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_35[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_538.f_35[bParam0]);
	}
	return iVar0;
}

int func_41(bool bParam0)//Position - 0x10DF
{
	if (ENTITY::DOES_ENTITY_EXIST(func_42(bParam0)) && !ENTITY::IS_ENTITY_DEAD(func_42(bParam0), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bParam0), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(bool bParam0)//Position - 0x1118
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_35[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_538.f_35[bParam0]);
	}
	return iVar0;
}

void func_43()//Position - 0x1141
{
	bool bVar0;
	
	func_460();
	func_447();
	func_443();
	func_426();
	func_400();
	func_382();
	func_380();
	func_375();
	func_374();
	func_373();
	switch (func_372())
	{
		case 0:
			if (func_344())
			{
				if ((func_277() && func_213()) && func_192())
				{
					Local_538.f_596 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_191(1);
					STATS::_0x6DEE77AFF8C21BD1(&(Local_538.f_8), &(Local_538.f_9));
				}
			}
			break;
		
		case 1:
			if (func_190() == 0)
			{
				if (!func_5(&(Local_538.f_3)))
				{
					func_4(&(Local_538.f_3), 0, 0);
				}
				else if (func_187(&(Local_538.f_3), func_188(), 0))
				{
					func_186(1);
				}
				else if (func_187(&(Local_538.f_3), 600000, 0))
				{
					if (!func_37(3))
					{
						func_34(3);
					}
				}
				bVar0 = false;
				while (bVar0 < func_21())
				{
					if (func_37(1))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[bVar0]))
						{
							if (!func_41(bVar0) && !func_185(bVar0))
							{
								if (func_190() != 4)
								{
									func_186(4);
									if (Local_538.f_60 == -1)
									{
										Local_538.f_60 = bVar0;
									}
								}
							}
						}
					}
					bVar0++;
				}
				if (func_37(16) && func_190() == 0)
				{
					func_186(6);
				}
				if (func_37(17) && func_190() == 0)
				{
					func_186(5);
				}
			}
			else
			{
				func_191(2);
			}
			func_44();
			break;
		
		case 2:
			if (func_37(0))
			{
				func_191(3);
			}
			break;
		
		case 3:
			func_513(3);
			break;
	}
}

void func_44()//Position - 0x12E7
{
	bool bVar0;
	struct<31> Var1;
	struct<3> Var36;
	float fVar39;
	int iVar40;
	
	if (!func_35())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	Var1.f_30 = 1;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (BitTest(Local_538.f_586, bVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bVar0), false))
			{
				if (Local_538.f_590 == -1 || Local_538.f_590 == bVar0)
				{
					if (Local_538.f_590 == -1)
					{
						Local_538.f_590 = bVar0;
						Local_538.f_587 = { ENTITY::GET_ENTITY_COORDS(func_40(bVar0), true) };
					}
					Var1.f_0 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var36 = { 0f, 0f, 0f };
					fVar39 = 0f;
					iVar40 = ENTITY::GET_ENTITY_MODEL(func_40(bVar0));
					if (func_45(Local_538.f_587, 0f, 0f, 0f, iVar40, 0, &Var36, &fVar39, &Var1))
					{
						ENTITY::SET_ENTITY_COORDS(func_40(bVar0), Var36, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_40(bVar0), fVar39);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(func_40(bVar0), 5f);
						Local_538.f_590 = -1;
						MISC::CLEAR_BIT(&(Local_538.f_586), bVar0);
					}
				}
			}
		}
		bVar0++;
	}
}

int func_45(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, float fParam9, var uParam10)//Position - 0x1467
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var66;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_182())
	{
		return 0;
	}
	if (func_181() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			func_180();
			func_179();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < func_178(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > func_178(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_171(Param0))
		{
			if (func_170(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam6;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_169();
		func_180();
		if (!uParam10->f_27 || (((((((func_168(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			func_149(Param0, iParam6);
		}
		if (func_134(Param0))
		{
			func_149(Param0, iParam6);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_128(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_126(Param0, *fParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *fParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam10->f_30;
						Var5.f_29 = uParam10->f_31;
					}
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					Var5.f_59 = uParam10->f_33;
					Var5.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_72(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				func_70(Global_2667225.f_683, Global_2667225.f_686, iParam6, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_69(Global_2667225.f_683, Global_2667225.f_686, iParam6, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_67(Global_2667225.f_683, 0);
						func_66(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				func_66(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (func_65(Global_2667225.f_683, Global_2667225.f_686, iParam6, PLAYER::PLAYER_ID(), 0) || func_47(Global_2667225.f_683, Global_2667225.f_686, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_67(Global_2667225.f_683, 0);
									func_66(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_67(Global_2667225.f_683, 0);
								func_66(-1);
							}
						}
					}
					else
					{
						func_66(-1);
					}
				}
				else
				{
					func_66(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var66.f_6 = 1082130432;
			Var66.f_7 = 1176255488;
			Var66.f_8 = 1;
			Var66.f_10 = 1;
			Var66.f_13 = 1;
			Var66.f_15 = 1;
			Var66.f_16 = 1;
			Var66.f_31 = 1;
			Var66.f_34 = joaat("tailgater");
			Var66.f_38 = 2;
			Var66.f_45 = 2;
			Var66.f_49 = 1123024896;
			Var66.f_53 = 999;
			Var66.f_54 = 1176256410;
			Var66.f_55 = 1;
			Var66.f_56 = 1;
			Var66.f_57 = 1;
			Var66.f_9 = iParam7;
			Var66.f_3 = 3,5f;
			Var66.f_10 = uParam10->f_5;
			Var66.f_4 = *uParam10;
			Var66.f_12 = 1;
			Var66.f_13 = 0;
			Var66.f_15 = uParam10->f_6;
			Var66.f_11 = uParam10->f_7;
			Var66.f_6 = uParam10->f_8;
			Var66.f_7 = uParam10->f_9;
			Var66 = { Param3 };
			Var66.f_34 = iParam6;
			Var66.f_31 = uParam10->f_13;
			Var66.f_30 = 1;
			Var66.f_48 = uParam10->f_14;
			Var66.f_56 = uParam10->f_25;
			Var66.f_57 = uParam10->f_26;
			Var66.f_30 = uParam10->f_30;
			Var66.f_29 = uParam10->f_31;
			Var66.f_59 = uParam10->f_33;
			Var66.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var66.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var66.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var66.f_49 = uParam10->f_29;
			func_72(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var66);
			Global_2667225.f_676 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam6;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam8 = { Global_2667225.f_683 };
		*fParam9 = Global_2667225.f_686;
		func_46(1);
		return 1;
	}
	return 0;
}

void func_46(bool bParam0)//Position - 0x1D45
{
	Global_2667225.f_676 = 0;
	func_169();
	func_180();
	if (bParam0)
	{
		func_179();
	}
}

int func_47(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x1D66
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam9 == 0)
		{
			if (func_2520(bVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_64(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_59(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								fVar2 = 0,1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_58(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_48(func_57(bVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)//Position - 0x1ED9
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_56(iParam7, 1008981770))
	{
		func_49(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_49(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0x1F2C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_55(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_50(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_50(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1FF8
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_53(iParam0);
		if (iVar0 != 0)
		{
			func_51(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0,01f || SYSTEM::VMAG(*uParam2) <= 0,01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20,7f)
			{
				fParam4 = 20,7f;
			}
			if (fParam3 < 137,2f)
			{
				fParam3 = 137,2f;
			}
			if (fParam5 < 21,1f)
			{
				fParam5 = 21,1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_51(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x20F7
{
	int iVar0;
	
	func_52(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1577992[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1577996[iVar0 /*3*/]) <= 0,01f || SYSTEM::VMAG(Global_1578003[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0,5f);
	Global_1578024 = (Global_1578019 * 0,5f);
	Global_1578021.f_1 = ((((0,5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0,5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0,5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0,5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

void func_52(int iParam0, var uParam1)//Position - 0x2303
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_53(int iParam0)//Position - 0x2384
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_54(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x23B3
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_55(var uParam0, struct<3> Param1)//Position - 0x23C5
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_56(int iParam0, float fParam1)//Position - 0x249C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_50(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0,5f) * (Var6.f_0 * 0,5f)) + ((Var6.f_1 * 0,5f) * (Var6.f_1 * 0,5f))) + ((Var6.f_2 * 0,5f) * (Var6.f_2 * 0,5f)))) + fParam1);
	return fVar9;
}

Vector3 func_57(bool bParam0)//Position - 0x251C
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_58(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)//Position - 0x252F
{
	if (func_48(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_49(Param0, fParam3, iParam4, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	func_49(Param5, fParam8, iParam9, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (MISC::_0xA0AD167E4B39D9A2(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_59(bool bParam0)//Position - 0x25CD
{
	if (func_63(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_62(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_60(bool bParam0, bool bParam1)//Position - 0x2614
{
	int iVar0;
	
	iVar0 = func_61(bParam0);
	if (!iVar0 == func_33())
	{
		if (iVar0 == func_61(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(bool bParam0)//Position - 0x263F
{
	if (bParam0 != func_33())
	{
		return Global_1892703[bParam0 /*599*/].f_10;
	}
	return func_33();
}

struct<13> func_62(bool bParam0)//Position - 0x2662
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_63(bool bParam0, bool bParam1)//Position - 0x2679
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_62(bParam0) };
		Global_2787518 = { func_62(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_64(bool bParam0)//Position - 0x26E6
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

int func_65(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x2711
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam5 == iVar0 || iParam6 == 1)
		{
			bVar1 = iVar0;
			if (func_2520(bVar1, 0, 1) && func_2520(bParam5, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (func_48(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_48(func_57(bVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_48(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2520(bVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
				{
					if (func_48(func_57(bVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_66(int iParam0)//Position - 0x2820
{
	if (Global_2667225.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667225.f_682 < iParam0))
		{
			Global_2667225.f_676 = 2;
		}
		else
		{
			Global_2667225.f_676 = 5;
		}
	}
	else
	{
		Global_2667225.f_676 = 5;
	}
}

void func_67(struct<3> Param0, int iParam3)//Position - 0x288B
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_68(Param0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam3 /*3*/] };
		Global_2667225.f_2737[iParam3 /*3*/] = { Param0 };
		func_67(Var0, iParam3 + 1);
	}
}

int func_68(struct<3> Param0, float fParam3)//Position - 0x28F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2667225.f_2737[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_69(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)//Position - 0x292F
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_180();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2667225.f_687[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_49(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0,5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0,5f));
				}
				Global_2667225.f_687[iVar7] = NETWORK::_0x2B1C623823DB0D9D(Var0, Var3, fParam6);
				Global_2667225.f_691[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2667225.f_699 = Global_2667225.f_687[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0x2A00
{
	struct<8> Var0;
	
	*uParam5 = func_71(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 495813132;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_29(1, 1));
}

int func_71(var uParam0, var uParam1, var uParam2)//Position - 0x2A50
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_72(var uParam0, var uParam1, var uParam2)//Position - 0x2A9D
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_121(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_73(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_73(var uParam0, var uParam1, var uParam2)//Position - 0x2B0C
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_112(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2,75f;
			fVar14 = 7,5f;
			break;
		
		default:
			fVar13 = 2,5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2674786[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_53(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2674786.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_105(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_102(Var1))
									{
										Var1 = { func_97(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_96(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_92(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_112(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_91(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0,375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_90(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_128(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_128(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_82(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674786.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_81(Var1, fVar4, iVar16);
																													iVar16 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar4;
																									Global_2674786.f_162++;
																									if (func_92(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_79(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2674786[0 /*3*/] };
						uVar30 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar26 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar26];
						Global_2674786[iVar26 /*3*/] = { Var27 };
						Global_2674786.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_78(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_117(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_112(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_74(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar8;
	}
	return 0;
}

void func_74(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x353A
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_75(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_75(struct<3> Param0, float fParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x35BE
{
	if (func_77(Param0, fParam3, bParam4, iParam5, 0) || func_76(Param0, bParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_76(struct<3> Param0, bool bParam3, int iParam4)//Position - 0x35EF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_48(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_2520(bVar2, 0, 1) && func_2520(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(struct<3> Param0, float fParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x36B1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam4 == iVar0 || iParam5 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_2520(bVar1, 0, 1) && func_2520(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2520(bVar1, 0, 1) && func_2520(bParam4, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_57(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_2520(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_57(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x37CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_97(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_102(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1)//Position - 0x386B
{
	if (!func_92(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		func_80(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_79(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_79(iParam0 + 1, uParam1);
	}
}

void func_80(int iParam0)//Position - 0x38C6
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674786[iParam0 /*3*/] = { Global_2674786[iParam0 + 1 /*3*/] };
			Global_2674786.f_121[iParam0] = Global_2674786.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_81(struct<3> Param0, float fParam3, int iParam4)//Position - 0x3911
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2674786[iParam4 /*3*/] };
	uVar3 = Global_2674786.f_121[iParam4];
	Global_2674786[iParam4 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2674786.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_81(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_82(struct<3> Param0, float fParam3, float fParam4)//Position - 0x397E
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_83(bVar5))
		{
			Var1 = { func_57(bVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_83(bool bParam0)//Position - 0x39E6
{
	if (func_2520(bParam0, 0, 1))
	{
		if (!func_88(bParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_85(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_84(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_85(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_59(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x3A93
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3C3E
{
	if (bParam1)
	{
		if (func_86(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[bParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)//Position - 0x3C70
{
	return func_87(iParam0);
}

var func_87(int iParam0)//Position - 0x3C7E
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_88(bool bParam0)//Position - 0x3C95
{
	if (func_30(bParam0, 0))
	{
		return 1;
	}
	if (func_89())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_89()//Position - 0x3CD4
{
	return BitTest(Global_2621446, 3);
}

int func_90(struct<3> Param0, float fParam3, int iParam4)//Position - 0x3CE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_58(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_58(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x3DEE
{
	if (func_65(Param0, fParam3, iParam4, bParam5, iParam6) || func_126(Param0, fParam3, iParam4, bParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0, var uParam3)//Position - 0x3E24
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_95(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_93(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_93(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0x3EB5
{
	func_94(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_94(var uParam0, var uParam1)//Position - 0x3F60
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_95(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0x3FC2
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
}

int func_96(struct<3> Param0, float fParam3)//Position - 0x4076
{
	int iVar0;
	
	if (func_85(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_48(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
				{
					if (func_48(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_78574 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_78574)
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
				{
					if (func_48(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_233[iVar0], false))
				{
					if (func_48(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_119[iVar0], false))
				{
					if (func_48(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_119[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_97(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)//Position - 0x430A
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_100(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_99(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (SYSTEM::TO_FLOAT(iVar8) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (SYSTEM::TO_FLOAT(iVar9) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0,95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0,5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4,2f * -0,5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_98(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_98(iParam11, 1,5f);
				}
				if (fVar14 > 1,8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_100(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_98(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_98(iParam11, 1,5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0,5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_98(int iParam0, float fParam1)//Position - 0x4759
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_50(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_99(struct<3> Param0)//Position - 0x4790
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_100(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0x47C8
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_55(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_101(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_101(struct<3> Param0, struct<3> Param3)//Position - 0x4804
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_102(struct<3> Param0)//Position - 0x4825
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_104(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (func_103(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (func_103(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_103(struct<3> Param0, var uParam3)//Position - 0x48A0
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_104(struct<2> Param0, var uParam2)//Position - 0x48C0
{
	if (Param0.f_1 > Global_2673781[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673781[1])
	{
		if (Param0.f_0 < Global_2673785[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673781[2])
	{
		if (Param0.f_0 < Global_2673785[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673785[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673785[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_105(var uParam0, bool bParam1)//Position - 0x495B
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_111(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0,01f, 360f);
			func_110(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar4);
			if (func_106(Var1, &uVar0) || func_111(Var1))
			{
				Var1 = { *uParam0 };
				func_110(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_106(struct<3> Param0, var uParam3)//Position - 0x49F3
{
	int iVar0;
	int iVar1;
	
	if (func_109())
	{
		return 0;
	}
	iVar1 = func_108();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_107(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_107(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x4A57
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_95(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2667225.f_2735) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_93(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_108()//Position - 0x4BB8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_109()//Position - 0x4BEB
{
	return Global_1946250.f_519;
}

void func_110(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0x4BFA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_55(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_55(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_111(struct<3> Param0)//Position - 0x4CA2
{
	float fVar0;
	
	if (Global_2667225.f_596 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2667225.f_593);
		if (fVar0 < Global_2667225.f_596)
		{
			return 1;
		}
	}
	return 0;
}

bool func_112(var uParam0, bool bParam1)//Position - 0x4CDB
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (func_95(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_93(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_113(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_113(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x4DCD
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_110(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_116(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_114(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_95(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_93(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_114(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0x4ED0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_115(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_101(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_101(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0,5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_115(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0,5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_115(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_101(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_101(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0,5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_115(struct<3> Param0, struct<3> Param3)//Position - 0x519F
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_116(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x51D8
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_117(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0x52D7
{
	int iVar0;
	bool bVar1;
	
	if (func_171(Param0))
	{
		if (func_120(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_118(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_68(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_110(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1, bool bParam2)//Position - 0x5393
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_106(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_119(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_106(Var2, &uVar1) || func_111(Var2))
			{
				Var2 = { *uParam0 };
				func_119(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_119(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x5417
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_113(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_113(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_113(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_110(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_116(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_114(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x5521
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (func_107(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_119(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_120(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_119(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(var uParam0, var uParam1, var uParam2)//Position - 0x55FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_112(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2674786[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_124(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_123();
		}
		else
		{
			func_122();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar6 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_91(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0,375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0,375f);
												}
											}
										}
										bVar12 = false;
										if (!func_90(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_128(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_128(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_82(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2674786.f_162)
															{
																Global_2674786[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2674786.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_81(Var3, fVar6, iVar7);
																		iVar7 = Global_2674786.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar6;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_79(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var15 = { Global_2674786[0 /*3*/] };
				uVar18 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var15 };
				Global_2674786.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_122()//Position - 0x5C9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_123()//Position - 0x5CC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		uVar3 = Global_2667225.f_2160[iVar1];
		Global_2667225.f_2160[iVar1] = Global_2667225.f_2160[iVar2];
		Global_2667225.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_124(struct<3> Param0)//Position - 0x5D59
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = func_125(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_125(struct<3> Param0, float fParam3, float fParam4)//Position - 0x5D94
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667225.f_1754)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2667225.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_126(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x5DF6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam5 == iVar0 || iParam6 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_127(Param0, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_58(Param0, fParam3, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_2520(bVar2, 0, 1) && func_2520(bParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)//Position - 0x5ED0
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_56(iParam3, 1008981770);
	fVar1 = func_56(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_128(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x5F10
{
	Global_2667225.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam14 > 0f)
	{
		if (func_133(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_129(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_129(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x6022
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_2520(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_2520(bVar1, 1, 1))
		{
			if (!func_30(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_64(bVar1) || !bParam10) && !Global_2689235[bVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_130(bool bParam0)//Position - 0x61DA
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_132() && Global_1853348[iVar0 /*834*/].f_804) && !func_131(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_57(bParam0);
}

int func_131(struct<3> Param0)//Position - 0x622D
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_132()//Position - 0x6257
{
	return Global_2714762.f_19;
}

int func_133(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)//Position - 0x6265
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_2520(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_64(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_59(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_57(bVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(struct<3> Param0)//Position - 0x6369
{
	int iVar0;
	
	if (Global_2815059.f_924 && func_135(Param0, &iVar0))
	{
		return 1;
	}
	return 0;
}

int func_135(struct<3> Param0, int iParam3)//Position - 0x638F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_148(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_136(iVar1))
			{
				if (func_148(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x63F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_33())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_278 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	if (func_146(PLAYER::PLAYER_ID(), 0) || (func_143(PLAYER::PLAYER_ID()) && func_141(func_142(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_140(PLAYER::PLAYER_ID()) || (func_143(PLAYER::PLAYER_ID()) && func_141(func_142(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_139(PLAYER::PLAYER_ID()) || (func_143(PLAYER::PLAYER_ID()) && func_141(func_142(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_138(PLAYER::PLAYER_ID()) || (func_143(PLAYER::PLAYER_ID()) && func_141(func_142(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_137(PLAYER::PLAYER_ID()) || (func_143(PLAYER::PLAYER_ID()) && func_141(func_142(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_137(bool bParam0)//Position - 0x655B
{
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_138(bool bParam0)//Position - 0x65A1
{
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_139(bool bParam0)//Position - 0x65E8
{
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_33())
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_140(bool bParam0)//Position - 0x6647
{
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_33())
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x66A7
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_142(bool bParam0)//Position - 0x6B2E
{
	if (bParam0 != func_33() && func_2520(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_143(bool bParam0)//Position - 0x6B5F
{
	if (bParam0 != func_33() && func_2520(bParam0, 1, 1))
	{
		if (func_145(bParam0) && !func_144(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(bool bParam0)//Position - 0x6B98
{
	if (bParam0 != func_33() && func_2520(bParam0, 1, 1))
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_145(bool bParam0)//Position - 0x6BC9
{
	if (bParam0 != func_33() && func_2520(bParam0, 1, 1))
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1)//Position - 0x6BFA
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_33())
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x6C88
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_148(struct<3> Param0, int iParam3)//Position - 0x6CD9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_107(Param0, &(Global_2672169[iVar0 /*17*/]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_149(struct<3> Param0, int iParam3)//Position - 0x6D2D
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2667225.f_45.f_319)
	{
		return;
	}
	if (!func_167())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_166(Param0);
		if (iVar1 > -1)
		{
			func_179();
			switch (iVar1)
			{
				case 0:
					func_165(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_165(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_165(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_165(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_165(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_165(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_165(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_165(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_165(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_165(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_165(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_165(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_165(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_165(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_165(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_165(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_165(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_165(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_165(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_165(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_165(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_165(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_165(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_165(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_165(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_165(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_165(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_165(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_165(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_165(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_165(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_165(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_165(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_165(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_165(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_165(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_165(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_165(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_165(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_165(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_165(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_165(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_165(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_165(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_165(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_165(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_165(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_165(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_165(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_165(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_165(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_165(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_165(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_163(78);
					break;
				
				case 11:
					func_163(79);
					break;
				
				case 12:
					func_163(82);
					break;
				
				case 13:
					func_163(81);
					break;
				
				case 14:
					func_163(73);
					break;
				
				case 15:
					func_165(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_165(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_165(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_165(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_163(75);
					break;
				
				case 17:
					func_163(76);
					break;
				
				case 18:
					func_163(77);
					break;
				
				case 19:
					func_165(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_165(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_165(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_165(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_163(80);
					break;
				
				case 21:
				case 25:
					func_163(87);
					break;
				
				case 22:
				case 26:
					func_163(88);
					break;
				
				case 23:
				case 27:
					func_163(89);
					break;
				
				case 24:
				case 28:
					func_163(90);
					break;
				
				case 29:
				case 30:
					if (func_162(iParam3))
					{
						func_163(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32);
					}
					break;
				
				case 31:
					func_165(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_165(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_165(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_165(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_165(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_165(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_165(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_165(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_165(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_165(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_165(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_165(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_165(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_165(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_165(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_165(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_165(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_165(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_165(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_165(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_165(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_165(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_165(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_165(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_165(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_165(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_165(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_165(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_165(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_165(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_165(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_165(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_165(-194,254f, -2018,756f, 26,62f, 75f);
					func_165(-186,956f, -2031,369f, 26,62f, 338f);
					func_165(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_165(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_165(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_165(-233,372f, -2089,601f, 26,62f, 304f);
					func_165(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_165(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_165(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_165(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_165(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_165(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_165(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_165(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_165(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_165(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_165(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_165(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_165(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_165(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_165(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_165(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_159(Param0, &iVar2, &iVar6) || (func_135(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_179();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2667225.f_516 = 1;
				}
				if (!iVar6[iVar0] && func_158(iVar2[iVar0], -1))
				{
					if (func_162(iParam3))
					{
						func_163(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_157(PLAYER::PLAYER_PED_ID()) || func_156(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_155(iParam3))
						{
							func_154(iVar2[iVar0]);
						}
						else if (func_153(iParam3))
						{
							func_152(iVar2[iVar0]);
							func_154(iVar2[iVar0]);
						}
						else
						{
							func_152(iVar2[iVar0]);
							func_154(iVar2[iVar0]);
						}
					}
					else
					{
						func_150(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_163(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x7B25
{
	switch (iParam0)
	{
		case 23:
			func_165(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_165(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_165(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_165(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_165(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_165(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_165(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_165(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_165(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_165(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_165(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_165(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_165(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_165(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_165(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_165(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_165(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_165(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_165(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_165(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_165(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_165(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_165(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_165(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_165(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_165(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_165(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_165(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_165(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_165(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_165(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_165(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_165(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_165(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_165(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_165(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_165(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_165(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_165(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_165(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_165(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_165(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_165(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_165(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_165(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_165(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_165(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_165(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_165(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_165(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_165(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_165(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_165(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_165(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_165(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_165(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_165(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_165(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_165(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_165(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_165(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_165(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_165(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_165(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_165(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_165(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_165(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_165(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_165(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_165(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_165(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_165(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_165(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_165(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_165(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_165(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_165(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_165(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_165(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_165(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_165(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_165(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_165(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_165(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_165(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_165(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_165(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_165(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_165(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_165(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_165(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_165(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_165(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_165(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_165(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_165(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_165(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_165(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_165(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_165(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_165(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_165(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_165(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_165(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_165(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_165(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_165(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_165(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_165(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_165(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_165(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_165(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_165(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_165(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_165(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_165(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_165(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_165(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_165(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_165(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_165(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_165(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_165(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_165(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_165(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_165(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_165(142,7427f, -2536,147f, 5f, 205,0002f);
			func_165(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_165(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_165(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_165(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_165(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_165(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_165(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_165(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_165(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_165(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_165(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_165(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_165(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_165(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_165(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_165(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_165(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_165(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_165(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_165(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_165(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_165(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_165(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_165(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_165(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_165(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_165(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_165(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_165(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_165(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_165(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_165(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_165(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_165(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_165(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_165(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_165(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_165(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_165(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_165(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_165(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_165(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_165(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_165(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_165(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_165(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_165(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_165(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_165(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_165(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_165(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_165(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_165(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_165(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_165(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_165(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_165(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_165(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_165(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_165(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_165(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_165(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_165(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_165(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_165(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_165(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_165(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_165(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_165(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_165(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_165(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_165(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_165(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_165(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_165(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_165(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_165(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_165(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_165(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_165(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_165(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_165(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_165(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_165(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_165(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_165(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_165(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_165(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_165(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_165(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_165(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_165(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_165(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_165(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_165(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_165(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_165(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_165(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_165(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_165(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_165(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_165(-1823,414f, 3092,762f, 31,843f, 330f);
			func_165(-1819,045f, 3100,435f, 31,845f, 330f);
			func_165(-1833,313f, 3075,722f, 31,838f, 330f);
			func_165(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_165(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_165(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_165(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_165(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_165(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_165(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_165(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_165(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_165(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_165(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_165(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_165(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_165(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_165(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_165(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_165(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_165(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_165(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_165(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_165(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_165(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_165(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_165(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_165(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_165(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_165(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_165(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_165(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_165(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_165(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_165(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_165(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_165(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_165(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_165(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_165(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_165(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_165(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_165(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_165(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_165(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_165(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_165(1231,279f, 2910,881f, 43,3085f, 12f);
				func_165(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_165(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_165(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_165(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_165(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_165(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_165(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_165(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_165(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_165(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_165(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_165(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_165(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_165(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_165(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_165(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_165(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_165(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_165(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_165(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_165(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_165(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_165(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_165(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_165(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_165(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_165(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_165(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_165(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_165(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_165(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_165(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_165(3,855f, 2672,388f, 78,437f, 319,2f);
				func_165(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_165(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_165(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_165(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_165(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_165(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_165(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_165(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_165(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_165(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_165(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_165(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_165(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_165(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_165(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_165(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_165(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_165(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_165(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_165(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_165(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_165(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_165(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_165(102,851f, 2688,009f, 51,732f, 224f);
				func_165(109,815f, 2681,012f, 51,112f, 224f);
				func_165(116,355f, 2674,26f, 50,529f, 224f);
				func_165(125,138f, 2665,98f, 49,8f, 224f);
				func_165(132,228f, 2659,865f, 49,26f, 228,4f);
				func_165(139,354f, 2653,536f, 48,737f, 228,4f);
				func_165(88,512f, 2702,995f, 53,042f, 224,199f);
				func_165(81,565f, 2710,357f, 53,67f, 224,199f);
				func_165(75,156f, 2716,981f, 54,223f, 224,199f);
				func_165(68,442f, 2723,806f, 54,775f, 226,199f);
				func_165(61,449f, 2730,606f, 55,308f, 226,199f);
				func_165(53,702f, 2738,167f, 55,855f, 226,199f);
				func_165(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_165(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_165(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_165(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_165(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_165(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_165(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_165(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_165(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_165(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_165(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_165(2714,633f, 3918,283f, 42,938f, 16f);
				func_165(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_165(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_165(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_165(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_165(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_165(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_165(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_165(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_165(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_165(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_165(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_165(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_165(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_165(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_165(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_165(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_165(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_165(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_165(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_165(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_165(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_165(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_165(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_165(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_165(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_165(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_165(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_165(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_165(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_165(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_165(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_165(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_165(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_165(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_165(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_165(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_165(3374,923f, 5520,177f, 20,3207f, 86f);
				func_165(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_165(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_165(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_165(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_165(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_165(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_165(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_165(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_165(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_165(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_165(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_165(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_165(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_165(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_165(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_165(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_165(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_165(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_165(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_165(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_165(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_165(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_165(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_165(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_165(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_165(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(43,848f, 6845,657f, 13,379f, 247,2f);
				func_165(50,379f, 6861,146f, 15,105f, 247,2f);
				func_165(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_165(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_165(55,806f, 6875,081f, 14,824f, 247,2f);
				func_165(11,616f, 6877,079f, 11,466f, 247,2f);
				func_165(18,954f, 6891,633f, 11,37f, 247,2f);
				func_165(26,68f, 6907,587f, 11,869f, 247,2f);
				func_165(7,479f, 6907,895f, 12,024f, 247,2f);
				func_165(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_165(35,591f, 6836,608f, 13,288f, 274,4f);
				func_165(36,028f, 6830,135f, 13,801f, 270,8f);
				func_165(35,114f, 6823,884f, 14,527f, 260,8f);
				func_165(48,779f, 6838,693f, 14,337f, 273,6f);
				func_165(56,738f, 6821,8f, 15,244f, 244,8f);
				func_165(48,377f, 6825,895f, 14,656f, 249,8f);
				func_165(49,11f, 6831,439f, 13,991f, 274,8f);
				func_165(53,544f, 6818,275f, 16,342f, 243f);
				func_165(46,162f, 6821,945f, 15,483f, 249,8f);
				func_165(60,129f, 6836,8f, 15,605f, 269,6f);
				func_165(40,88f, 6802,952f, 20,113f, 242,6f);
				func_165(48,203f, 6799,134f, 20,897f, 244,4f);
				func_165(70,449f, 6809,271f, 16,846f, 243f);
				func_165(61,436f, 6814,266f, 16,71f, 244,2f);
				func_165(56,142f, 6793,458f, 19,806f, 242,6f);
				func_165(65,759f, 6791,12f, 18,433f, 276,4f);
				func_165(77,305f, 6805,391f, 18,558f, 245,6f);
				func_165(85,893f, 6800,243f, 18,535f, 249,8f);
				func_165(56,85f, 6780,582f, 18,822f, 297,999f);
				func_165(65,636f, 6784,669f, 18,789f, 293,799f);
				func_165(74,121f, 6788,498f, 18,739f, 293,799f);
				func_165(97,779f, 6796,32f, 19,02f, 276,799f);
				func_165(106,76f, 6796,983f, 18,914f, 272,599f);
				func_165(112,387f, 6802,858f, 18,994f, 210,599f);
				func_165(117,58f, 6802,644f, 18,663f, 209,399f);
				func_165(122,481f, 6802,693f, 18,468f, 209,399f);
				func_165(127,182f, 6802,686f, 18,218f, 209,399f);
				func_165(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_165(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_165(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_165(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_165(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_165(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_165(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_165(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_165(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_165(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_165(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_165(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_165(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_165(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_165(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_165(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_165(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_165(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_165(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_165(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_165(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_165(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_165(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_165(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_165(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_165(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_165(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_165(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_165(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_165(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_165(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_165(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_165(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_165(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_165(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_165(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_165(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_165(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_165(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_165(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_165(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_165(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_165(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_165(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_165(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_165(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_165(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_165(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_165(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_165(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_165(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_165(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_165(30,027f, 3292,351f, 38,604f, 140,199f);
				func_165(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_165(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_165(23,897f, 3283,152f, 39,381f, 145,399f);
				func_165(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_165(18,723f, 3274,025f, 40,054f, 155,799f);
				func_165(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_165(36,958f, 3298,847f, 38,001f, 127,799f);
				func_165(54,165f, 3311,582f, 36,517f, 303,799f);
				func_165(61,607f, 3317,105f, 35,916f, 306,999f);
				func_165(68,994f, 3323,129f, 35,364f, 308,199f);
				func_165(76,266f, 3329,467f, 34,805f, 311,399f);
				func_165(82,757f, 3335,915f, 34,344f, 316,598f);
				func_165(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_165(14,664f, 3263,688f, 40,931f, 160,398f);
				func_165(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_165(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_165(89,575f, 3343,311f, 33,932f, 318,398f);
				func_165(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_165(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_165(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_165(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_165(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_165(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_165(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_165(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_165(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_165(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_165(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_165(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_165(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_165(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_165(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_165(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_165(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_165(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_165(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_165(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_165(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_165(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_165(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_165(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_165(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_165(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_165(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_165(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_165(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_165(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_165(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_165(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_165(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_165(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_165(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_165(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_165(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_165(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_165(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_165(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_165(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_165(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_165(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_165(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_165(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_165(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_165(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_165(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_165(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_165(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_165(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_165(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_165(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_165(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_165(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_165(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_165(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_165(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_165(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_165(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_165(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_165(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_165(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_165(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_165(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_165(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_165(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_165(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_165(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_165(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_165(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_165(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_165(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_165(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_165(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_165(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_165(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_165(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_165(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_165(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_151(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_151(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_151(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_151(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_151(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_151(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_151(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_151(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_151(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_151(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_151(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_151(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_151(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_151(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_151(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_151(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_151(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_151(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_151(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_151(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_151(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_151(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_151(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_151(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_151(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_151(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_151(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_151(struct<3> Param0, float fParam3, int iParam4, bool bParam5)//Position - 0xBA01
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_50(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_165(Var10, fParam3);
	}
	else
	{
		func_165(Param0, fParam3);
	}
}

void func_152(int iParam0)//Position - 0xBA7B
{
	switch (iParam0)
	{
		case 83:
			func_165(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_165(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_165(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_165(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_165(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_165(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_165(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_165(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_165(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_165(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_165(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_165(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_165(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_165(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_165(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_165(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_165(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_165(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_165(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_165(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_165(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_165(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_165(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_165(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_165(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_165(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_165(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_165(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_165(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_165(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_165(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_165(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_165(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_165(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_165(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_165(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_165(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_165(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_165(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_165(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_165(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_165(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_165(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_165(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_165(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_165(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_165(-1356,991f, -3242,228f, 12,945f, 330f);
			func_165(-1369,313f, -3234,758f, 12,945f, 330f);
			func_165(-1381,751f, -3227,408f, 12,945f, 330f);
			func_165(-1394,302f, -3220,021f, 12,945f, 330f);
			func_165(-1354,339f, -3223,129f, 12,945f, 330f);
			func_165(-1366,302f, -3215,809f, 12,945f, 330f);
			func_165(-1378,492f, -3208,645f, 12,945f, 330f);
			func_165(-1350,322f, -3203,405f, 12,945f, 330f);
			func_165(-1362,684f, -3196,451f, 12,945f, 330f);
			func_165(-1347,089f, -3182,69f, 12,945f, 330f);
			func_165(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_165(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_165(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_165(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_165(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_165(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_165(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_165(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_165(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_165(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_165(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_165(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_165(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_165(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_165(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_165(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_165(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_165(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_165(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_165(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_165(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_165(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_165(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_165(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_165(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_165(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_165(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_165(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_165(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_165(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_165(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_165(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_165(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_165(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_165(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_165(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_165(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_165(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_165(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_165(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_165(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_165(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_165(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_165(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_165(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_165(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_165(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_165(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_165(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_165(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_165(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_165(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_165(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_165(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_165(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_165(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_165(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_165(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_165(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_165(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_165(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_165(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_165(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_165(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_165(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_165(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_165(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_165(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_165(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_165(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_165(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_165(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_165(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_165(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_165(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_165(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_165(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_165(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_165(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_165(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_165(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_165(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_165(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_165(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_165(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_165(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_165(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_165(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_165(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_165(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_165(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_165(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_165(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_165(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_165(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_165(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_165(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_165(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_165(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_165(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_165(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_165(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_165(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_165(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_165(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_165(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_165(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_165(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_165(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_165(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_165(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_165(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_165(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_165(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_165(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_165(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_165(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_165(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_165(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_165(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_165(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_165(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_165(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_165(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_165(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_165(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_165(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_165(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_165(-2484,323f, 3249,294f, 31,828f, 151f);
			func_165(-2495,313f, 3255,746f, 31,828f, 151f);
			func_165(-2472,644f, 3242,684f, 31,828f, 151f);
			func_165(-2506,313f, 3262,27f, 31,823f, 151f);
			func_165(-2461,494f, 3235,93f, 31,828f, 151f);
			func_165(-2505,602f, 3238,049f, 31,828f, 151f);
			func_165(-2481,937f, 3224,8f, 31,828f, 151f);
			func_165(-2516,813f, 3244,266f, 31,823f, 151f);
			func_165(-2470,03f, 3217,899f, 31,828f, 151f);
			func_165(-2493,933f, 3231,308f, 31,828f, 151f);
			func_165(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_165(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_165(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_165(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_165(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_165(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_165(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_165(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_165(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_165(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_165(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_165(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_165(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_165(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_165(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_165(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_165(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_165(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_165(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_165(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_165(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_165(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_165(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_165(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_165(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_165(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_165(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_165(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_165(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_165(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_165(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_165(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_165(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_165(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_165(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_165(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_153(int iParam0)//Position - 0xD04A
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case -477831899:
			return 1;
		
		default:
	}
	return 0;
}

void func_154(int iParam0)//Position - 0xD0F4
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_165(-947,712f, -3367,704f, 12,944f, 60f);
			func_165(-904,692f, -3293,072f, 12,944f, 60f);
			func_165(-863,71f, -3221,978f, 12,944f, 60f);
			func_165(-966,418f, -3162,773f, 12,944f, 60f);
			func_165(-1007,435f, -3233,93f, 12,944f, 60f);
			func_165(-1050,455f, -3308,559f, 12,944f, 60f);
			func_165(-1145,673f, -3253,456f, 12,944f, 60f);
			func_165(-1098,386f, -3181,428f, 12,944f, 60f);
			func_165(-1060,474f, -3108,903f, 12,944f, 60f);
			func_165(-1155,391f, -3053,632f, 12,944f, 60f);
			func_165(-1196,114f, -3125,146f, 12,948f, 60f);
			func_165(-1235,552f, -3201,86f, 12,944f, 60f);
			func_165(-1344,446f, -3139,177f, 12,944f, 60f);
			func_165(-1301,308f, -3064,341f, 12,944f, 60f);
			func_165(-1260,135f, -2992,912f, 12,944f, 60f);
			func_165(-1364,244f, -2932,9f, 12,98f, 60f);
			func_165(-1405,284f, -3004,108f, 12,96f, 60f);
			func_165(-1448,29f, -3078,72f, 12,95f, 60f);
			func_165(-1535,732f, -3028,318f, 12,945f, 60f);
			func_165(-1492,639f, -2953,558f, 12,945f, 60f);
			func_165(-1451,506f, -2882,2f, 12,944f, 60f);
			func_165(-1553,927f, -2823,12f, 13,002f, 60f);
			func_165(-1595,097f, -2894,571f, 12,944f, 60f);
			func_165(-1637,836f, -2968,714f, 12,945f, 60f);
			func_165(-1740,971f, -2911,484f, 12,944f, 330f);
			func_165(-1696,293f, -2833,978f, 12,944f, 330f);
			func_165(-1651,502f, -2756,273f, 12,945f, 330f);
			func_165(-1588,258f, -2647,575f, 12,944f, 330f);
			func_165(-1536,862f, -2681,378f, 12,945f, 330f);
			func_165(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_165(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_165(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_165(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_165(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_165(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_165(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_165(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_165(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_165(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_165(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_165(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_165(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_165(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_165(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_165(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_165(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_165(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_165(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_165(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_165(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_165(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_165(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_165(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_165(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_165(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_165(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_165(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_165(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_165(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_165(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_155(int iParam0)//Position - 0xD6CA
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_156(int iParam0)//Position - 0xD768
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0xD7A6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)//Position - 0xD7E4
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_159(struct<2> Param0, var uParam2, var uParam3, var uParam4)//Position - 0xD8C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_136(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_160(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)//Position - 0xDA27
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_33())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_285 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0xDA9B
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0xDB22
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0)//Position - 0xDB50
{
	switch (iParam0)
	{
		case 78:
			func_165(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_165(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_165(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_165(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_165(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_165(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_165(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_165(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_165(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_165(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_165(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_165(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_165(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_165(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_165(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_165(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_165(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_165(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_165(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_165(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_165(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_165(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_165(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_165(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_165(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_165(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_165(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_165(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_165(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_165(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_165(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_165(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_165(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_165(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_165(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_165(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_164())
			{
				func_165(-1608,297f, -556,875f, 33,406f, 310f);
				func_165(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_165(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_165(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_165(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_165(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_165(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_165(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_165(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_165(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_165(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_165(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_164())
			{
				func_165(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_165(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_165(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_165(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_165(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_165(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_165(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_165(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_165(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_165(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_165(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_165(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_164())
			{
				func_165(-102,737f, -597,379f, 35,053f, 160,999f);
				func_165(-97,793f, -589,568f, 35,082f, 134,799f);
				func_165(-110,357f, -619,402f, 35,055f, 160,599f);
				func_165(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_165(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_165(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_165(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_165(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_165(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_165(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_165(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_165(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_164())
			{
				func_165(-59,349f, -779,238f, 43,134f, 228,398f);
				func_165(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_165(-65,212f, -772,66f, 43,151f, 219,398f);
				func_165(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_165(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_165(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_165(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_165(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_165(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_165(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_165(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_165(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_165(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_165(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_165(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_165(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_165(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_165(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_165(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_165(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_165(-1464,5f, -927,9f, 9f, 296,7991f);
			func_165(-1466f, -926,1f, 9f, 296,7991f);
			func_165(-1467,9f, -924,7f, 9f, 296,7991f);
			func_165(-1469,7f, -923,7f, 9f, 296,7991f);
			func_165(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_165(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_165(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_165(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_165(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_165(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_165(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_165(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_165(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_165(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_165(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_165(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_165(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_165(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_165(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_165(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_165(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_165(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_165(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_165(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_165(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_165(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_165(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_165(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_165(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_165(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_165(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_165(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_165(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_165(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_165(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_165(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_165(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_165(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_165(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_165(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_165(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_165(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_165(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_165(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_165(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_165(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_165(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_165(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_165(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_165(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_165(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_165(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_165(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_165(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_165(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_165(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_165(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_165(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_165(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_165(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_165(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_165(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_165(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_165(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_165(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_165(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_165(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_165(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_165(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_165(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_165(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_165(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_165(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_165(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_165(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_165(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_165(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_165(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_165(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_165(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_165(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_165(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_165(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_165(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_165(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_165(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_165(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_165(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_164()//Position - 0xED4B
{
	return Global_2714762.f_17;
}

void func_165(struct<3> Param0, float fParam3)//Position - 0xED59
{
	if (Global_2667225.f_1754 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0,01f)
		{
			return;
		}
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/] = { Param0 };
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/].f_3 = fParam3;
		Global_2667225.f_1754++;
	}
}

int func_166(struct<3> Param0)//Position - 0xEDBE
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2667225.f_2904, Param0) < Global_2667225.f_2912)
	{
		return Global_2667225.f_2907;
	}
	Global_2667225.f_2904 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674547[iVar0 /*7*/].f_2 + Global_2674547[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_103(Param0, &(Global_2674547[iVar0 /*7*/])))
		{
			Global_2667225.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667225.f_2907 = -1;
	return -1;
}

int func_167()//Position - 0xEE60
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2715699.f_6415)
	{
		return 0;
	}
	return 0;
}

int func_168(struct<2> Param0, var uParam2, bool bParam3, float fParam4)//Position - 0xEE88
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_136(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_169()//Position - 0xEF0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667225.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_170(var uParam0, bool bParam1)//Position - 0xEF35
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674503[iVar0 /*7*/].f_2 + Global_2674503[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_103(Var1, &(Global_2674503[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_114(&Var1, Global_2674503[iVar0 /*7*/], Global_2674503[iVar0 /*7*/].f_3, Global_2674503[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(struct<3> Param0)//Position - 0xEFD2
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_175(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_174(Param0, 1008981770))
			{
				if (!func_120(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_120(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_173(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_172(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_120(&Var1, 0, 0, 0, 1))
					{
						if (!func_120(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_172(var uParam0)//Position - 0xF092
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_173(struct<3> Param0, float fParam3)//Position - 0xF0DB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_107(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_174(struct<3> Param0, float fParam3)//Position - 0xF123
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_107(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_175(bool bParam0, bool bParam1)//Position - 0xF16A
{
	if (func_177() != 0)
	{
		return func_176(bParam0) != 0;
	}
	return func_85(bParam0, bParam1, 0);
}

int func_176(bool bParam0)//Position - 0xF191
{
	if (func_2520(bParam0, 0, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_1;
	}
	return 0;
}

int func_177()//Position - 0xF1B3
{
	return Global_31959;
}

int func_178(bool bParam0)//Position - 0xF1BE
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_179()//Position - 0xF1E1
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667225.f_1755[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667225.f_1754 = 0;
}

void func_180()//Position - 0xF215
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_691[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_691[iVar0])
			{
				if (!Global_2667225.f_687[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_687[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2667225.f_687[iVar0]);
						Global_2667225.f_687[iVar0] = -1;
					}
					else
					{
						Global_2667225.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667225.f_687[iVar0] == -1)
		{
			Global_2667225.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_181()//Position - 0xF2C1
{
	if (!Global_2667225.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < func_178(0))
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0xF2F5
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2667225.f_517 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_184(PLAYER::PLAYER_ID()) && !func_183(0))
	{
		return 0;
	}
	return 1;
}

bool func_183(bool bParam0)//Position - 0xF34C
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_184(bool bParam0)//Position - 0xF35D
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, bParam0);
	}
	return 1;
}

int func_185(bool bParam0)//Position - 0xF37F
{
	switch (bParam0)
	{
		case 0:
			return func_37(23);
		
		case 1:
			return func_37(24);
		
		case 2:
			return func_37(25);
		
		default:
	}
	return 0;
}

void func_186(int iParam0)//Position - 0xF3BC
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_538.f_6 = iParam0;
}

int func_187(var uParam0, int iParam1, bool bParam2)//Position - 0xF3D6
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xF434
{
	return func_189();
}

var func_189()//Position - 0xF440
{
	return Global_262145.f_15622;
}

int func_190()//Position - 0xF44F
{
	return Local_538.f_6;
}

void func_191(int iParam0)//Position - 0xF45C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_538.f_5 = iParam0;
}

int func_192()//Position - 0xF476
{
	bool bVar0;
	
	if (!func_212())
	{
		return 1;
	}
	if (!func_211())
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (!func_193(bVar0, 1))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

int func_193(bool bParam0, bool bParam1)//Position - 0xF4BB
{
	int iVar0;
	int iVar1;
	
	if (func_208(func_209(bParam0)))
	{
		if (!func_207(bParam0))
		{
			if (func_206(bParam0))
			{
				iVar0 = func_205(bParam0);
				iVar1 = func_204(bParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (func_203(iVar0))
						{
							if (func_202(&(Local_538.f_400[bParam0 /*8*/]), iVar0, 26, func_209(bParam0), iVar1, 1, 1, 1))
							{
								MISC::CLEAR_BIT(&(Local_538.f_547), bParam0);
								Local_538.f_400[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
								Local_538.f_400[bParam0 /*8*/].f_4 = 0f;
								func_201(&(Local_538.f_400[bParam0 /*8*/].f_6));
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				if (func_198(&(Local_538.f_400[bParam0 /*8*/]), 26, func_209(bParam0), func_200(bParam0), func_199(bParam0), 1, 1, 1))
				{
					MISC::CLEAR_BIT(&(Local_538.f_547), bParam0);
					Local_538.f_400[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
					Local_538.f_400[bParam0 /*8*/].f_4 = 0f;
					func_201(&(Local_538.f_400[bParam0 /*8*/].f_6));
					func_194(func_197(bParam0), 75);
				}
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_209(bParam0));
			return 1;
		}
	}
	return 0;
}

void func_194(int iParam0, int iParam1)//Position - 0xF606
{
	int iVar0;
	int iVar1;
	
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = func_196(-1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, false, true);
	iVar1 = 3;
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_195(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
}

void func_195(int iParam0)//Position - 0xF684
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar2 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar2 = 3;
	}
	if (iVar2 == 2)
	{
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16763);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		fVar0 = Global_262145.f_16764;
	}
	else if (iVar2 == 3)
	{
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16767);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
		fVar0 = Global_262145.f_16768;
	}
	iVar1 = SYSTEM::ROUND((100f + (100f * fVar0)));
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

int func_196(int iParam0)//Position - 0xF727
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("weapon_pistol");
	if (func_10() == 12)
	{
		iVar0 = joaat("weapon_microsmg");
	}
	if (func_10() == 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
		if (iVar1 > 500)
		{
			iVar0 = joaat("weapon_microsmg");
		}
	}
	if (func_10() == 13)
	{
		iVar0 = joaat("weapon_microsmg");
	}
	else if (func_10() == 6)
	{
		switch (func_210())
		{
			case 4:
				iVar0 = joaat("weapon_pistol");
				break;
			
			case 6:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("weapon_pistol");
				}
				else
				{
					iVar0 = joaat("weapon_microsmg");
				}
				break;
			
			case 8:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("weapon_microsmg");
				}
				else
				{
					iVar0 = joaat("weapon_assaultrifle");
				}
				break;
			}
	}
	return iVar0;
}

int func_197(bool bParam0)//Position - 0xF7E2
{
	if (func_207(bParam0))
	{
		return NETWORK::NET_TO_PED(Local_538.f_400[bParam0 /*8*/]);
	}
	return 0;
}

int func_198(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xF805
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

float func_199(bool bParam0)//Position - 0xF864
{
	switch (func_10())
	{
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 173,599f;
						
						case 1:
							return 12,199f;
						
						case 2:
							return 130,399f;
						
						case 3:
							return 310,999f;
						
						case 4:
							return 228,598f;
						
						case 5:
							return 199,997f;
						
						case 6:
							return 173,398f;
						
						case 7:
							return 196,994f;
						
						case 8:
							return 162,399f;
						
						case 9:
							return 134,799f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return 259,599f;
						
						case 1:
							return 210,799f;
						
						case 2:
							return 264,798f;
						
						case 3:
							return 289,189f;
						
						case 4:
							return 30,994f;
						
						case 5:
							return 74,593f;
						
						case 6:
							return 332,592f;
						
						case 7:
							return 233,191f;
						
						case 8:
							return 177,588f;
						
						case 9:
							return 166,187f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return 221,9998f;
						
						case 1:
							return 286,398f;
						
						case 2:
							return 115,597f;
						
						case 3:
							return 64,9988f;
						
						case 4:
							return 56,797f;
						
						case 5:
							return 171,7995f;
						
						case 6:
							return 113,395f;
						
						case 7:
							return 1,4f;
						
						case 8:
							return 23,597f;
						
						case 9:
							return 34,2f;
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return 272,797f;
						
						case 1:
							return 270,4f;
						
						case 2:
							return 198,797f;
						
						case 3:
							return 26,597f;
						
						case 4:
							return 151,1986f;
						
						case 5:
							return 312,7979f;
						
						case 6:
							return 288,194f;
						
						case 7:
							return 338,594f;
						
						case 8:
							return 153,993f;
						
						case 9:
							return 288,593f;
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return 213,399f;
						
						case 1:
							return 43,798f;
						
						case 2:
							return 104,798f;
						
						case 3:
							return 149,397f;
						
						case 4:
							return 282,398f;
						
						case 5:
							return 192,393f;
						
						case 6:
							return 3,193f;
						
						case 7:
							return 173,199f;
						
						case 8:
							return 102,998f;
						
						case 9:
							return 160,998f;
						
						default:
					}
					break;
			}
			break;
		
		case 13:
			switch (Local_538.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 226,197f;
						
						case 1:
							return 69,999f;
						
						case 2:
							return 57,6f;
						
						case 3:
							return 325,999f;
						
						case 4:
							return 138,995f;
						
						case 5:
							return 26,994f;
						
						case 6:
							return 324,193f;
						
						case 7:
							return 112,592f;
						
						case 8:
							return 312,19f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return 183,597f;
						
						case 1:
							return 80,797f;
						
						case 2:
							return 216,796f;
						
						case 3:
							return 167,996f;
						
						case 4:
							return 152,395f;
						
						case 5:
							return 290,792f;
						
						case 6:
							return 314,794f;
						
						case 7:
							return 165,592f;
						
						case 8:
							return 71,392f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return 180,5975f;
						
						case 1:
							return 36,797f;
						
						case 2:
							return 259,5967f;
						
						case 3:
							return 130,3964f;
						
						case 4:
							return 182,4457f;
						
						case 5:
							return 59,8454f;
						
						case 6:
							return 66,0453f;
						
						case 7:
							return 64,0452f;
						
						case 8:
							return 319,8442f;
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return 123,3997f;
						
						case 1:
							return 142,1995f;
						
						case 2:
							return 136,5994f;
						
						case 3:
							return 99,396f;
						
						case 4:
							return 61,3977f;
						
						case 5:
							return 30,1976f;
						
						case 6:
							return 79,197f;
						
						case 7:
							return 180,7967f;
						
						case 8:
							return 38,5959f;
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return 234,4485f;
						
						case 1:
							return 312,6486f;
						
						case 2:
							return 330f;
						
						case 3:
							return 55,0465f;
						
						case 4:
							return 265,0478f;
						
						case 5:
							return 349,595f;
						
						case 6:
							return 23,395f;
						
						case 7:
							return 286,995f;
						
						case 8:
							return 359,8465f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_200(bool bParam0)//Position - 0xFE73
{
	switch (func_10())
	{
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 1686,565f, 3283,567f, 40,147f;
						
						case 1:
							return 1686,705f, 3282,48f, 40,146f;
						
						case 2:
							return 1707,38f, 3285,957f, 40,143f;
						
						case 3:
							return 1706,214f, 3284,945f, 40,132f;
						
						case 4:
							return 1705,706f, 3290,164f, 44,399f;
						
						case 5:
							return 1689,609f, 3277,303f, 40,076f;
						
						case 6:
							return 1700,036f, 3286,393f, 47,922f;
						
						case 7:
							return 1698,173f, 3288,865f, 40,147f;
						
						case 8:
							return 1720,138f, 3285,192f, 43,149f;
						
						case 9:
							return 1685,802f, 3278,66f, 40,056f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return -22,418f, 3038,632f, 39,986f;
						
						case 1:
							return 0,953f, 3048,67f, 39,686f;
						
						case 2:
							return -30,788f, 3049,856f, 39,595f;
						
						case 3:
							return -25,003f, 3034,537f, 43,501f;
						
						case 4:
							return 1,45f, 3047,88f, 39,67f;
						
						case 5:
							return -29,428f, 3049,529f, 39,711f;
						
						case 6:
							return -26,525f, 3041,971f, 39,986f;
						
						case 7:
							return -17,376f, 3034,479f, 39,974f;
						
						case 8:
							return -34,036f, 3030,758f, 40,036f;
						
						case 9:
							return -34,53f, 3017,445f, 39,653f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return -2119,472f, 2615,53f, -0,0022f;
						
						case 1:
							return -2077,927f, 2604,631f, 1,035f;
						
						case 2:
							return -2080,564f, 2603,516f, 1,035f;
						
						case 3:
							return -2086,792f, 2625,189f, 2,089f;
						
						case 4:
							return -2085,976f, 2616,372f, 0,2f;
						
						case 5:
							return -2097,881f, 2637,023f, 1,9161f;
						
						case 6:
							return -2082,671f, 2609,676f, 2,089f;
						
						case 7:
							return -2097,82f, 2635,863f, 1,8648f;
						
						case 8:
							return -2090,961f, 2638,719f, 2,089f;
						
						case 9:
							return -2118,675f, 2614,615f, 0,2f;
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return 201,773f, 2444,678f, 59,483f;
						
						case 1:
							return 201,069f, 2434,979f, 59,47f;
						
						case 2:
							return 194,641f, 2457,049f, 54,709f;
						
						case 3:
							return 195,564f, 2455,865f, 54,782f;
						
						case 4:
							return 225,521f, 2447,133f, 56,33f;
						
						case 5:
							return 225,092f, 2446,452f, 56,4106f;
						
						case 6:
							return 202,803f, 2444,631f, 62,421f;
						
						case 7:
							return 205,382f, 2477,153f, 54,631f;
						
						case 8:
							return 211,588f, 2463,634f, 54,958f;
						
						case 9:
							return 216,219f, 2470,21f, 54,765f;
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return 2108,241f, 2923,977f, 56,432f;
						
						case 1:
							return 2109,137f, 2922,911f, 56,43f;
						
						case 2:
							return 2137,334f, 2901,555f, 56,268f;
						
						case 3:
							return 2112,013f, 2923,713f, 49,932f;
						
						case 4:
							return 2130,445f, 2917,955f, 46,663f;
						
						case 5:
							return 2136,251f, 2897,009f, 46,331f;
						
						case 6:
							return 2136,553f, 2895,294f, 46,241f;
						
						case 7:
							return 2122,212f, 2887,214f, 46,196f;
						
						case 8:
							return 2108,959f, 2908,356f, 46,703f;
						
						case 9:
							return 2139,324f, 2899,315f, 56,267f;
						
						default:
					}
					break;
			}
			break;
		
		case 13:
			switch (Local_538.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return -106,011f, -2711,141f, 4,997f;
						
						case 1:
							return -104,058f, -2711,94f, 4,996f;
						
						case 2:
							return -92,315f, -2759,717f, 5,087f;
						
						case 3:
							return -93,367f, -2759,866f, 5,087f;
						
						case 4:
							return -77,449f, -2671,311f, 5,009f;
						
						case 5:
							return -78,053f, -2672,953f, 5,012f;
						
						case 6:
							return -100,601f, -2688,139f, 5,001f;
						
						case 7:
							return -93,626f, -2773,771f, 5,087f;
						
						case 8:
							return -96,429f, -2697,867f, 5,013f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return 884,089f, -2599,981f, 9,116f;
						
						case 1:
							return 892,923f, -2618,841f, 4,759f;
						
						case 2:
							return 891,161f, -2617,305f, 4,792f;
						
						case 3:
							return 885,512f, -2603,554f, 5,107f;
						
						case 4:
							return 892,079f, -2626,937f, 2,397f;
						
						case 5:
							return 898,665f, -2600,539f, 9,116f;
						
						case 6:
							return 891,064f, -2627,698f, 2,174f;
						
						case 7:
							return 876,353f, -2629,129f, 2,067f;
						
						case 8:
							return 900,892f, -2600,36f, 9,116f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return -501,2358f, -2811,832f, 5,0004f;
						
						case 1:
							return -517,3156f, -2820,241f, 5,0004f;
						
						case 2:
							return -518,6866f, -2819,406f, 5,0004f;
						
						case 3:
							return -522,037f, -2794,314f, 5,0004f;
						
						case 4:
							return -524,2614f, -2801,131f, 5,0004f;
						
						case 5:
							return -524,0466f, -2802,697f, 5,0004f;
						
						case 6:
							return -511,3055f, -2808,841f, 5,0004f;
						
						case 7:
							return -494,5088f, -2834,58f, 5,0004f;
						
						case 8:
							return -526,2589f, -2803,069f, 5,0004f;
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return -707,134f, -1311,777f, 8,5508f;
						
						case 1:
							return -696,8458f, -1318,922f, 7,2005f;
						
						case 2:
							return -700,508f, -1316,76f, 4,1019f;
						
						case 3:
							return -687,0558f, -1335,441f, 4,1019f;
						
						case 4:
							return -707,6573f, -1353,54f, 0,6002f;
						
						case 5:
							return -708,6399f, -1354,614f, 0,6002f;
						
						case 6:
							return -694,9748f, -1331,552f, 4,1019f;
						
						case 7:
							return -695,9897f, -1330,669f, 4,1019f;
						
						case 8:
							return -704,4351f, -1358,116f, 4,1022f;
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return -456,904f, -2269,351f, 7,5208f;
						
						case 1:
							return -457,1874f, -2271,031f, 7,5208f;
						
						case 2:
							return -451,85f, -2266,866f, 6,608f;
						
						case 3:
							return -426,7677f, -2265,777f, 6,6082f;
						
						case 4:
							return -454,2534f, -2268,414f, 6,6082f;
						
						case 5:
							return -460,84f, -2262,911f, 7,521f;
						
						case 6:
							return -430,938f, -2273,629f, 6,608f;
						
						case 7:
							return -432,033f, -2273,013f, 6,608f;
						
						case 8:
							return -442,2232f, -2264,978f, 6,6082f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0)//Position - 0x1083D
{
	uParam0->f_1 = 0;
}

int func_202(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1084A
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0x108D2
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_204(bool bParam0)//Position - 0x108F4
{
	switch (func_10())
	{
		case 13:
			switch (bParam0)
			{
				case 9:
					return -1;
				
				case 10:
					return 0;
				
				default:
			}
			break;
		
		case 12:
			if (!func_37(8))
			{
				switch (bParam0)
				{
					case 0:
					case 2:
						return -1;
					
					case 1:
					case 3:
						return 0;
					
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return -1;
					
					case 1:
						return 0;
					
					case 2:
						return 1;
					
					case 3:
						return 2;
					}
				
				default:
			}
			break;
		
		case 5:
			switch (bParam0)
			{
				case 0:
				case 2:
					return -1;
				
				case 1:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 2:
							return -1;
						
						case 1:
						case 3:
							return 0;
						
						default:
					}
					break;
				
				case 6:
					switch (bParam0)
					{
						case 0:
						case 3:
							return -1;
						
						case 1:
						case 4:
							return 0;
						
						case 2:
						case 5:
							return 1;
						
						default:
					}
					break;
				
				case 8:
					switch (bParam0)
					{
						case 0:
						case 4:
							return -1;
						
						case 1:
						case 5:
							return 0;
						
						case 2:
						case 6:
							return 1;
						
						case 3:
						case 7:
							return 2;
						
						default:
					}
					break;
			}
			break;
		
		case 11:
			switch (bParam0)
			{
				case 0:
				case 4:
				case 8:
					return -1;
				
				case 1:
				case 5:
				case 9:
					return 0;
				
				case 2:
				case 6:
				case 10:
					return 1;
				
				case 3:
				case 7:
				case 11:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_205(bool bParam0)//Position - 0x10B00
{
	switch (func_10())
	{
		case 12:
			if (!func_37(8))
			{
				switch (bParam0)
				{
					case 0:
					case 1:
						return Local_538.f_499[0 /*6*/];
					
					case 2:
					case 3:
						return Local_538.f_499[1 /*6*/];
					
					default:
				}
			}
			else
			{
				return Local_538.f_499[0 /*6*/];
			}
			break;
		
		case 5:
			switch (bParam0)
			{
				case 0:
				case 1:
					return Local_538.f_499[0 /*6*/];
				
				case 2:
				case 3:
					return Local_538.f_499[1 /*6*/];
				
				default:
			}
			break;
		
		case 11:
			switch (bParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return Local_538.f_499[0 /*6*/];
				
				case 4:
				case 5:
				case 6:
				case 7:
					return Local_538.f_499[1 /*6*/];
				
				case 8:
				case 9:
				case 10:
				case 11:
					return Local_538.f_499[2 /*6*/];
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 1:
							return Local_538.f_499[0 /*6*/];
						
						case 2:
						case 3:
							return Local_538.f_499[1 /*6*/];
							break;
					}
					break;
				
				case 6:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
							return Local_538.f_499[0 /*6*/];
						
						case 3:
						case 4:
						case 5:
							return Local_538.f_499[1 /*6*/];
							break;
					}
					break;
				
				case 8:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return Local_538.f_499[0 /*6*/];
						
						case 4:
						case 5:
						case 6:
						case 7:
							return Local_538.f_499[1 /*6*/];
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_206(bool bParam0)//Position - 0x10D26
{
	switch (func_10())
	{
		case 13:
			if (bParam0 == 9 || bParam0 == 10)
			{
				return 1;
			}
			break;
		
		case 12:
		case 5:
		case 11:
		case 6:
			return 1;
	}
	return 0;
}

bool func_207(bool bParam0)//Position - 0x10D74
{
	return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[bParam0 /*8*/]);
}

bool func_208(int iParam0)//Position - 0x10D8A
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_209(bool bParam0)//Position - 0x10DA8
{
	switch (func_10())
	{
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					if (bParam0 == 6)
					{
						return joaat("g_f_y_lost_01");
					}
					return joaat("g_m_y_lost_01");
				
				case 1:
					return joaat("g_m_y_azteca_01");
				
				case 2:
					return joaat("g_m_y_lost_01");
				
				case 3:
					return joaat("g_m_m_chigoon_02");
				
				case 4:
					return joaat("g_m_y_lost_01");
				
				default:
			}
			break;
		
		case 13:
			switch (Local_538.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_armgoon_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armgoon_01");
						
						case 3:
							return joaat("g_m_m_armgoon_01");
						
						case 4:
							return joaat("g_m_m_armgoon_01");
						
						case 5:
							return joaat("g_m_m_armgoon_01");
						
						case 6:
							return joaat("g_m_m_armgoon_01");
						
						case 7:
							return joaat("g_m_m_armgoon_01");
						
						case 8:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_y_mexgoon_02");
						
						case 1:
							return joaat("g_m_y_mexgoon_02");
						
						case 2:
							return joaat("g_m_y_mexgoon_02");
						
						case 3:
							return joaat("g_m_y_mexgoon_02");
						
						case 4:
							return joaat("g_m_y_mexgoon_02");
						
						case 5:
							return joaat("g_m_y_mexgoon_02");
						
						case 6:
							return joaat("g_m_y_mexgoon_02");
						
						case 7:
							return joaat("g_m_y_mexgoon_02");
						
						case 8:
							return joaat("g_m_y_mexgoon_02");
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_armgoon_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armboss_01");
						
						case 3:
							return joaat("g_m_m_armgoon_01");
						
						case 4:
							return joaat("g_m_m_armgoon_01");
						
						case 5:
							return joaat("g_m_m_armgoon_01");
						
						case 6:
							return joaat("g_m_m_armgoon_01");
						
						case 7:
							return joaat("g_m_m_armgoon_01");
						
						case 8:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_y_korean_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						case 3:
							return joaat("g_m_y_korean_01");
						
						case 4:
							return joaat("g_m_y_korean_01");
						
						case 5:
							return joaat("g_m_y_korean_01");
						
						case 6:
							return joaat("g_m_y_korean_01");
						
						case 7:
							return joaat("g_m_y_korean_01");
						
						case 8:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_y_korean_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						case 3:
							return joaat("g_m_y_korean_01");
						
						case 4:
							return joaat("g_m_y_korean_01");
						
						case 5:
							return joaat("g_m_y_korean_01");
						
						case 6:
							return joaat("g_m_y_korean_01");
						
						case 7:
							return joaat("g_m_y_korean_01");
						
						case 8:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
		case 6:
			return Local_538.f_546;
			break;
		
		case 11:
			return joaat("s_m_y_blackops_01");
			break;
	}
	return joaat("g_m_m_armgoon_01");
}

int func_210()//Position - 0x1112C
{
	switch (func_10())
	{
		case 13:
			return 9;
		
		case 12:
			return 4;
		
		case 5:
			return 4;
		
		case 9:
			return 10;
		
		case 11:
			return 12;
		
		case 6:
			switch (SYSTEM::ROUND(Local_538.f_544))
			{
				case 0:
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 8;
				
				default:
			}
			break;
	}
	return 0;
}

int func_211()//Position - 0x111C2
{
	switch (func_10())
	{
		case 13:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_212()//Position - 0x111E4
{
	if (((((func_10() == 13 || func_10() == 12) || func_10() == 5) || func_10() == 9) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0x1123A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (func_214(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_214(int iParam0)//Position - 0x1128B
{
	struct<3> Var0;
	float fVar3;
	
	if (func_272())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_42[iParam0]))
		{
			if (func_208(func_271(iParam0)))
			{
				Var0 = { func_270(iParam0) };
				fVar3 = func_268(iParam0);
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_219(168, -1, -1, -1) + 1))
				{
					if (func_217())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_39[0]))
						{
							if (func_202(&(Local_538.f_42[iParam0]), Local_538.f_39[0], 26, func_271(iParam0), func_216(iParam0), 1, 1, 1))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), false);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 3, false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 229, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 128, false);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 398, true);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 1);
								PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), 512, true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), Global_1837194);
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
								AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
								TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), -1);
								if (func_215())
								{
									PED::_0x2F3C3D9F50681DE4(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
								}
							}
						}
					}
					else if (func_198(&(Local_538.f_42[iParam0]), 26, func_271(iParam0), Var0, fVar3, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), false);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
						AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_538.f_42[iParam0]), true);
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_215()//Position - 0x114A7
{
	return func_10() == 12;
}

int func_216(int iParam0)//Position - 0x114B6
{
	if (iParam0 == 1)
	{
		return 0;
	}
	return -1;
}

int func_217()//Position - 0x114C9
{
	if (func_218())
	{
		return 0;
	}
	return 1;
}

bool func_218()//Position - 0x114DD
{
	return func_10() == 9;
}

int func_219(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x114EC
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_267(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_263(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_258(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_253(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_248(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_239(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_238();
		
		case 218:
			return func_237();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_236(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_235(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_230(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_225(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_220(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_220(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x117B4
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_224(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_221(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_221(int iParam0, var uParam1)//Position - 0x117F2
{
	if (func_224(iParam0, uParam1))
	{
		return (func_223(iParam0, uParam1) + func_222(iParam0, uParam1));
	}
	return 0;
}

int func_222(int iParam0, var uParam1)//Position - 0x1181A
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_223(int iParam0, int iParam1)//Position - 0x11834
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_224(int iParam0, int iParam1)//Position - 0x1184E
{
	return func_223(iParam0, iParam1) > 0;
}

int func_225(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x11860
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_229(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_226(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)//Position - 0x11BEE
{
	if (func_229(iParam0, iParam1))
	{
		return (func_228(iParam0, iParam1) + func_227(iParam0, iParam1));
	}
	return 0;
}

int func_227(int iParam0, int iParam1)//Position - 0x11C16
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_228(int iParam0, int iParam1)//Position - 0x11CA4
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_229(int iParam0, int iParam1)//Position - 0x11D2A
{
	return func_228(iParam0, iParam1) > 0;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x11D3C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_234(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_231(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1)//Position - 0x11F5F
{
	if (func_234(iParam0, iParam1))
	{
		return (func_233(iParam0, iParam1) + func_232(iParam0, iParam1));
	}
	return 0;
}

int func_232(int iParam0, int iParam1)//Position - 0x11F87
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_233(int iParam0, int iParam1)//Position - 0x11FBE
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_234(int iParam0, int iParam1)//Position - 0x11FF5
{
	return func_233(iParam0, iParam1) > 0;
}

int func_235(int iParam0, int iParam1)//Position - 0x12007
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)//Position - 0x12078
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_237()//Position - 0x12231
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_238()//Position - 0x1223F
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_239(int iParam0, int iParam1)//Position - 0x1224D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_240(iParam0, func_245() + 1));
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1)//Position - 0x1282A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_244(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_243(iParam0, iParam1);
			iVar2 = func_242(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_241(iParam0))
		{
			if (iVar0 > Global_262145.f_18431)
			{
				iVar0 = Global_262145.f_18431;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18430)
			{
				iVar0 = Global_262145.f_18430;
			}
			if (iVar0 > Global_262145.f_18429)
			{
				iVar0 = Global_262145.f_18429;
			}
		}
	}
	return iVar0;
}

int func_241(int iParam0)//Position - 0x128C3
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_242(int iParam0)//Position - 0x12919
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18468;
		
		case 10:
			return Global_262145.f_18493;
		
		default:
	}
	return 1;
}

int func_243(int iParam0, int iParam1)//Position - 0x12949
{
	if (func_241(iParam0))
	{
		if (iParam1 >= Global_262145.f_18432)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18469;
		
		case 10:
			return Global_262145.f_18494;
		
		default:
	}
	return 8;
}

int func_244(int iParam0)//Position - 0x12997
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_245()//Position - 0x129C9
{
	if (func_247() == func_33())
	{
		return 0;
	}
	return func_246(func_247());
}

int func_246(int iParam0)//Position - 0x129E8
{
	if (func_61(iParam0) == func_33())
	{
		return 0;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_19;
}

bool func_247()//Position - 0x12A0E
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_248(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x12A23
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_252(iParam0))
		{
			iVar0 = (iVar0 + func_249(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_249(int iParam0, var uParam1)//Position - 0x12B22
{
	if (func_252(iParam0))
	{
		return (func_251(iParam0) + func_250(iParam0, uParam1));
	}
	return 0;
}

int func_250(int iParam0, var uParam1)//Position - 0x12B46
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x12B8C
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_252(int iParam0)//Position - 0x12BD0
{
	return func_251(iParam0) > 0;
}

int func_253(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x12BE0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_257(iParam0))
		{
			iVar0 = (iVar0 + func_254(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1)//Position - 0x12D5A
{
	if (func_257(iParam0))
	{
		return (func_256(iParam0) + func_255(iParam0, iParam1));
	}
	return 0;
}

int func_255(int iParam0, int iParam1)//Position - 0x12D7E
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x12DF8
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_257(int iParam0)//Position - 0x12E6A
{
	return func_256(iParam0) > 0;
}

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x12E7A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_262(iParam0))
		{
			iVar0 = (iVar0 + func_259(iParam0));
		}
	}
	return iVar0;
}

int func_259(int iParam0)//Position - 0x131AF
{
	if (func_262(iParam0))
	{
		return (func_261(iParam0) + func_260(iParam0));
	}
	return 0;
}

int func_260(int iParam0)//Position - 0x131D1
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_261(int iParam0)//Position - 0x1324D
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_262(int iParam0)//Position - 0x132C1
{
	return func_261(iParam0) > 0;
}

int func_263(int iParam0, int iParam1, var uParam2)//Position - 0x132D1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_264(iParam0));
	return iVar0;
}

int func_264(int iParam0)//Position - 0x13599
{
	if (func_266(iParam0))
	{
		if (func_265(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x135BC
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_266(int iParam0)//Position - 0x13606
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_267(int iParam0)//Position - 0x13650
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

float func_268(int iParam0)//Position - 0x13732
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 138,3995f;
					
					case 1:
						return 143,5995f;
					
					case 2:
						return 72,3994f;
					
					case 3:
						return 133,7989f;
					
					case 4:
						return 242,1995f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 138,3995f;
					
					case 1:
						return 143,5995f;
					
					case 2:
						return 72,3994f;
					
					case 3:
						return 133,7989f;
					
					case 4:
						return 242,1995f;
					
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 29,2012f;
					
					case 1:
						return 293,3999f;
					
					case 2:
						return 144,6493f;
					
					case 3:
						return 305,7995f;
					
					case 4:
						return 265,1998f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 29,2012f;
					
					case 1:
						return 293,3999f;
					
					case 2:
						return 144,6493f;
					
					case 3:
						return 305,7995f;
					
					case 4:
						return 265,1998f;
					
					default:
				}
				break;
			}
	}
	return 124,5999f;
}

bool func_269()//Position - 0x138CF
{
	return func_10() == 13;
}

Vector3 func_270(int iParam0)//Position - 0x138DE
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 1158,124f, -4352,054f, 0,2f;
					
					case 1:
						return 2568,467f, -3494,837f, 0,2f;
					
					case 2:
						return -2046,004f, -4112,687f, 0,2f;
					
					case 3:
						return -2804,802f, -2614,12f, 0,2f;
					
					case 4:
						return -414,3029f, -4404,976f, 0,2f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_538.f_394[0])
				{
					case 0:
						return 1157,04f, -4351,059f, 0,2f;
					
					case 1:
						return 2567,951f, -3493,595f, 0,2f;
					
					case 2:
						return -2045,257f, -4111,685f, 0,2f;
					
					case 3:
						return -2804,355f, -2612,158f, 0,2f;
					
					case 4:
						return -412,17f, -4408,401f, 0,2f;
					
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_538.f_394[0])
				{
					case 0:
						return -3017,04f, -1744,734f, 0,2f;
					
					case 1:
						return 362,1313f, -4237,417f, 0,2f;
					
					case 2:
						return -1186,682f, -4125,632f, 0,2f;
					
					case 3:
						return 3186,52f, -3343,655f, 0,2f;
					
					case 4:
						return 2227,898f, -4272,729f, 0,2f;
					
					default:
				}
				break;
			
			case 1:
				switch (Local_538.f_394[0])
				{
					case 0:
						return -3016,528f, -1745,616f, 0,2f;
					
					case 1:
						return 362,1313f, -4237,417f, 0,2f;
					
					case 2:
						return -1187,493f, -4126,532f, 0,2f;
					
					case 3:
						return 3186,269f, -3345,155f, 0,2f;
					
					case 4:
						return 2228,611f, -4273,838f, 0,2f;
					
					default:
				}
				break;
			}
	}
	return 1678,634f, 2307,834f, 74,3844f;
}

int func_271(int iParam0)//Position - 0x13B4D
{
	switch (func_10())
	{
		case 12:
		case 13:
			if (iParam0 == 0)
			{
				return joaat("a_m_y_beach_03");
			}
			else
			{
				return joaat("a_m_y_busicas_01");
			}
			break;
		
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					if (iParam0 == 6)
					{
						return joaat("g_f_y_lost_01");
					}
					return joaat("g_m_y_lost_01");
				
				case 1:
					return joaat("g_m_y_azteca_01");
				
				case 2:
					return joaat("g_m_y_lost_01");
				
				case 3:
					return joaat("g_m_m_chigoon_02");
				
				case 4:
					return joaat("g_m_y_lost_01");
				
				default:
			}
			break;
	}
	return joaat("g_m_y_strpunk_01");
}

int func_272()//Position - 0x13BF3
{
	if (func_274() || func_273())
	{
		return 1;
	}
	return 0;
}

bool func_273()//Position - 0x13C11
{
	return func_10() == 8;
}

bool func_274()//Position - 0x13C20
{
	return func_275(func_10());
}

int func_275(int iParam0)//Position - 0x13C30
{
	if (iParam0 == 12 || iParam0 == 13)
	{
		return 1;
	}
	return 0;
}

int func_276()//Position - 0x13C50
{
	switch (func_10())
	{
		case 13:
			return 2;
		
		case 12:
			return 2;
		
		default:
	}
	return 0;
}

int func_277()//Position - 0x13C76
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var* uVar7;
	int iVar8;
	int iVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { func_17(Local_538.f_54) };
	}
	if (!func_343())
	{
		func_34(2);
		return 1;
	}
	if (!func_37(2))
	{
		if (func_343() || func_342(Var0, &Var3, &fVar6, &uVar7, 1, 1, 1))
		{
			iVar8 = 0;
			while (iVar8 < func_341())
			{
				if (func_208(func_340(iVar8)) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_39[iVar8]))
				{
					if (func_343())
					{
						Var3 = { func_339(iVar8) };
						fVar6 = func_336(iVar8);
					}
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_282(168, -1, 1, -1, -1, -1) + 1))
					{
						if (func_279(&(Local_538.f_39[iVar8]), func_340(iVar8), Var3, fVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), "MPBitset"))
								{
									iVar9 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), "MPBitset");
								}
								MISC::SET_BIT(&iVar9, 10);
								MISC::SET_BIT(&iVar9, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), "MPBitset", iVar9);
							}
							if (func_274())
							{
								VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), true);
							}
							VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), false, false);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), false, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), true);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_538.f_39[iVar8]), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), true);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), true);
							VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]), false);
							func_278(NETWORK::NET_TO_VEH(Local_538.f_39[iVar8]));
						}
					}
				}
				iVar8++;
			}
			iVar8 = 0;
			while (iVar8 < func_341())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_39[iVar8]))
				{
					func_34(2);
				}
				iVar8++;
			}
		}
	}
	return func_37(2);
}

void func_278(int iParam0)//Position - 0x13EAC
{
	if (!Global_262145.f_4711)
	{
		VEHICLE::_0x80E3357FDEF45C21(iParam0, 0);
	}
}

int func_279(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x13EC6
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_280(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_280(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x13FCF
{
	int iVar0;
	
	if (func_281(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam3;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_281(bool bParam0, struct<3> Param1, int iParam4)//Position - 0x140A4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x14142
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_335(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_332(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_327(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_314(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_304(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_303(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_301(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_300(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_294(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		case 158:
			return func_287(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		case 181:
			return func_283(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_283(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x14431
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_286(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_285(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_284(func_246(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_224(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_223(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_284(var uParam0, int iParam1, int iParam2)//Position - 0x144A7
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_285(int iParam0, int iParam1)//Position - 0x144C1
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_286(int iParam0, int iParam1)//Position - 0x144F5
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1450F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_293(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_292(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_288(func_246(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_229(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_228(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_288(int iParam0, int iParam1, int iParam2)//Position - 0x1489A
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_33())
			{
				if (func_290(iParam2, 1))
				{
					Var0 = { func_289(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

Vector3 func_289(int iParam0)//Position - 0x14932
{
	return Global_1892703[iParam0 /*599*/].f_10.f_305;
}

bool func_290(bool bParam0, bool bParam1)//Position - 0x1494A
{
	if (!bParam1)
	{
		if (func_291(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_33();
}

int func_291(bool bParam0)//Position - 0x14975
{
	if (bParam0 != func_33())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_33())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1)//Position - 0x149AA
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_293(int iParam0, int iParam1)//Position - 0x14C89
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_294(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x14CA3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_299(iParam0))
		{
			iVar0 = (iVar0 + func_298(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_297(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_296(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_295(func_246(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_234(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_233(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_295(int iParam0, int iParam1)//Position - 0x14F7E
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_296(int iParam0, int iParam1)//Position - 0x14FA8
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_297(int iParam0, int iParam1)//Position - 0x150DA
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_298(int iParam0, int iParam1)//Position - 0x150F4
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_246(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_299(int iParam0)//Position - 0x15146
{
	return 0;
}

int func_300(int iParam0)//Position - 0x1514F
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2)//Position - 0x1519B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_302(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_302(int iParam0)//Position - 0x1533C
{
	return 1;
}

int func_303(int iParam0, int iParam1)//Position - 0x15345
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_241(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_240(iParam0, func_245() + 1));
	}
	return iVar0;
}

int func_304(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1592C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_313(iParam0))
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_310(iParam0, func_246(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_33())
		{
			iVar0 = (iVar0 + func_307(iParam0, func_246(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_306(0, iParam1) != -1)
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_305(func_246(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_252(iParam0))
		{
			iVar0 = (iVar0 + func_251(iParam0));
		}
	}
	return iVar0;
}

int func_305(var uParam0, int iParam1)//Position - 0x15AA2
{
	return 2;
}

int func_306(int iParam0, int iParam1)//Position - 0x15AAB
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_307(int iParam0, int iParam1)//Position - 0x15AF3
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_308(5329, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_308(int iParam0, int iParam1, int iParam2)//Position - 0x15B53
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_309(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x15B90
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_310(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15BC4
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_313(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_312(iParam0))
	{
		iVar0 = func_312(iParam0);
	}
	else if (iVar0 < func_311(iParam0))
	{
		iVar0 = func_311(iParam0);
	}
	return iVar0;
}

int func_311(int iParam0)//Position - 0x15C60
{
	return 1;
}

int func_312(int iParam0)//Position - 0x15C69
{
	return 4;
}

int func_313(int iParam0)//Position - 0x15C72
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x15CB0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_326(iParam0))
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_319(iParam0, func_246(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_33())
		{
			iVar0 = (iVar0 + func_318(iParam0, func_246(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_317(0, iParam1) != -1)
		{
			if (iParam3 != func_33())
			{
				iVar0 = (iVar0 + func_315(func_246(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_257(iParam0))
		{
			iVar0 = (iVar0 + func_256(iParam0));
		}
	}
	return iVar0;
}

int func_315(int iParam0, int iParam1)//Position - 0x15F76
{
	switch (iParam0)
	{
		case 1:
			if (func_316(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_316(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_316(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_316(int iParam0)//Position - 0x1606E
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_317(int iParam0, int iParam1)//Position - 0x16088
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_318(int iParam0, int iParam1)//Position - 0x16428
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16521
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_325(iParam0))
	{
		iVar1 = func_324(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_323(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_322(iParam2))
		{
			iVar0 = func_322(iParam2);
		}
	}
	if (iVar0 > func_321(iParam0))
	{
		iVar0 = func_321(iParam0);
	}
	else if (iVar0 < func_320(iParam0))
	{
		iVar0 = func_320(iParam0);
	}
	return iVar0;
}

int func_320(int iParam0)//Position - 0x1669F
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_321(int iParam0)//Position - 0x166B9
{
	if (!func_325(iParam0))
	{
		if (func_326(iParam0))
		{
			if (func_316(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_322(int iParam0)//Position - 0x16713
{
	if (iParam0 == func_33() || Global_1853348[iParam0 /*834*/].f_267.f_278 == 0)
	{
		return 50;
	}
	return (50 - Global_1853348[iParam0 /*834*/].f_267.f_278.f_3);
}

int func_323(int iParam0)//Position - 0x16755
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x1676F
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_325(int iParam0)//Position - 0x16791
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x167E7
{
	if (func_325(iParam0) || func_323(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x16809
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_330(iParam0, func_245() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_329(iParam0))
		{
			iVar0 = (iVar0 + func_330(iParam0, func_245() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_328(iParam0, func_245() + 1));
	}
	if (!bParam3)
	{
		if (func_262(iParam0))
		{
			iVar0 = (iVar0 + func_261(iParam0));
		}
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1)//Position - 0x16B8C
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_329(int iParam0)//Position - 0x16BD8
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16C3A
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_331(iParam0))
	{
		if (iParam2 <= Global_262145.f_21727)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21728)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_329(iParam0))
	{
		if (iParam1 < Global_262145.f_21687)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_331(int iParam0)//Position - 0x16D17
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)//Position - 0x16D4F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_334(iParam0, func_245() + 1, iParam2));
	iVar0 = (iVar0 + func_333(iParam0));
	return iVar0;
}

int func_333(int iParam0)//Position - 0x17058
{
	if (func_266(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_334(int iParam0, var uParam1, int iParam2)//Position - 0x1706E
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_335(int iParam0)//Position - 0x17098
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

float func_336(int iParam0)//Position - 0x17171
{
	if (func_218())
	{
		switch (Local_538.f_384)
		{
			case 0:
				if (iParam0 == 0)
				{
					return 126f;
				}
				return 261,598f;
			
			case 1:
				if (iParam0 == 0)
				{
					return 73,595f;
				}
				return 210,799f;
			
			case 2:
				if (iParam0 == 0)
				{
					return 0f;
				}
				return 34,2f;
			
			case 3:
				if (iParam0 == 0)
				{
					return 133,398f;
				}
				return 341,5993f;
			
			case 4:
				if (iParam0 == 0)
				{
					return 270,399f;
				}
				return 133,6f;
			}
		
		default:
	}
	if (func_337())
	{
		return 100,5717f;
	}
	if (func_215())
	{
		switch (Local_538.f_384)
		{
			case 0:
				return 5,6f;
			
			case 1:
				return 293,3999f;
			
			case 2:
				return 144,6493f;
			
			case 3:
				return 305,7995f;
			
			case 4:
				return 265,1998f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_538.f_384)
		{
			case 0:
				return 1,2f;
			
			case 1:
				return 46,2f;
			
			case 2:
				return 273,199f;
			
			case 3:
				return 64,2f;
			
			case 4:
				return 2f;
			}
		
		default:
	}
	return 114,2482f;
}

bool func_337()//Position - 0x172D3
{
	return func_338(func_10());
}

int func_338(int iParam0)//Position - 0x172E3
{
	if ((((iParam0 == 8 || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return 1;
	}
	return 0;
}

Vector3 func_339(int iParam0)//Position - 0x17323
{
	switch (func_10())
	{
		case 12:
			switch (Local_538.f_384)
			{
				case 0:
					return -3018,016f, -1737,731f, 1,125f;
				
				case 1:
					return 369,5443f, -4234,714f, 0f;
				
				case 2:
					return -1190,621f, -4129,769f, 0f;
				
				case 3:
					return 3191,532f, -3339,914f, 0,75f;
				
				case 4:
					return 2233,975f, -4274,487f, 0f;
				
				default:
			}
			break;
		
		case 13:
			switch (Local_538.f_384)
			{
				case 0:
					return 1154,318f, -4355,971f, 0f;
				
				case 1:
					return 2564,08f, -3499,01f, -0,1876f;
				
				case 2:
					return -2051,98f, -4110,346f, 0f;
				
				case 3:
					return -2808,998f, -2617,194f, 0,9375f;
				
				case 4:
					return -407,7797f, -4408,372f, 0f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return 1704,879f, 3286,602f, 40,148f;
					}
					return 1689,943f, 3276,071f, 40,045f;
				
				case 1:
					if (iParam0 == 0)
					{
						return -25,427f, 3043,566f, 40,003f;
					}
					return -0,217f, 3046,414f, 39,661f;
				
				case 2:
					if (iParam0 == 0)
					{
						return -2095,506f, 2637,109f, 1,9348f;
					}
					return -2117,166f, 2616,247f, 0,0221f;
				
				case 3:
					if (iParam0 == 0)
					{
						return 212,767f, 2467,536f, 54,686f;
					}
					return 223,4591f, 2448,032f, 56,2378f;
				
				case 4:
					if (iParam0 == 0)
					{
						return 2121,68f, 2889,23f, 46,279f;
					}
					return 2110,948f, 2907,49f, 46,652f;
				
				default:
			}
			break;
	}
	return -1193,289f, -2245,799f, 12,9446f;
}

int func_340(int iParam0)//Position - 0x17547
{
	switch (func_10())
	{
		case 12:
		case 13:
			return joaat("marquis");
		
		case 9:
			switch (Local_538.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return joaat("gburrito");
					}
					return joaat("daemon");
				
				case 1:
					if (iParam0 == 0)
					{
						return joaat("sadler");
					}
					return joaat("phoenix");
				
				case 2:
					return joaat("gburrito");
				
				case 3:
					return joaat("bison");
				
				case 4:
					return joaat("gburrito");
				
				default:
			}
			break;
	}
	return joaat("marquis");
}

int func_341()//Position - 0x175E7
{
	switch (func_10())
	{
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 9:
			return 2;
		
		default:
	}
	return 0;
}

int func_342(struct<3> Param0, var* uParam3, float* fParam4, var* uParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x17617
{
	int iVar0;
	
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam6, uParam3, fParam4, uParam5, 1, 3f, 0f))
		{
			if (func_128(*uParam3, 10f, 1f, 1f, 5f, iParam7, bParam8, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam6++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam3 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_343()//Position - 0x17689
{
	if (func_274())
	{
		return 1;
	}
	if (func_218())
	{
		return 1;
	}
	return 0;
}

int func_344()//Position - 0x176A8
{
	bool bVar0;
	
	if (func_37(1))
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_349(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_40(bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	if (func_337())
	{
		if (func_348() == 2)
		{
			func_345();
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_53))
			{
				return 0;
			}
		}
	}
	func_34(1);
	return 1;
}

int func_345()//Position - 0x1772C
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_53))
	{
		if (func_208(joaat("buzzard")))
		{
			Var0 = { func_347() };
			fVar3 = func_346();
			if (func_279(&(Local_538.f_53), joaat("buzzard"), Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_538.f_53), true, 1);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_538.f_53), "MPBitset"))
					{
						iVar4 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_538.f_53), "MPBitset");
					}
					MISC::SET_BIT(&iVar4, 10);
					MISC::SET_BIT(&iVar4, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_538.f_53), "MPBitset", iVar4);
				}
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_538.f_53), false, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_538.f_53), true);
				VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_538.f_53), true);
				VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_538.f_53), false);
			}
		}
	}
	return 0;
}

float func_346()//Position - 0x17815
{
	switch (Local_538.f_394[0])
	{
		case 0:
			return 291,9019f;
		
		case 1:
			return 38,8973f;
		
		case 2:
			return 170,3048f;
		
		case 3:
			return 104,1791f;
		
		case 4:
			return 6,7766f;
		
		case 5:
			return 290,7564f;
		
		case 6:
			return 81,0553f;
		
		case 7:
			return 210,7148f;
		
		case 8:
			return 48,5395f;
		
		case 9:
			return 172,8551f;
		
		case 10:
			return 227,376f;
		
		case 11:
			return 109,6783f;
		
		default:
	}
	return 0f;
}

Vector3 func_347()//Position - 0x178D4
{
	switch (Local_538.f_394[0])
	{
		case 0:
			return -1249,752f, -2863,093f, 12,9449f;
		
		case 1:
			return -1365,395f, -2587,993f, 12,9449f;
		
		case 2:
			return -924,1804f, -3067,145f, 12,9444f;
		
		case 3:
			return -975,8615f, -3410,342f, 12,8401f;
		
		case 4:
			return -1819,134f, -3186,567f, 12,9444f;
		
		case 5:
			return -1902,047f, -3139,103f, 12,9444f;
		
		case 6:
			return -1163,066f, -2256,789f, 12,9446f;
		
		case 7:
			return -1694,218f, -2741,422f, 14,2526f;
		
		case 8:
			return -999,9483f, -2950,592f, 12,9545f;
		
		case 9:
			return -1115,896f, -2946,971f, 12,9451f;
		
		case 10:
			return -1299,238f, -2136,711f, 12,9248f;
		
		case 11:
			return -1266,912f, -2471,362f, 12,9452f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_348()//Position - 0x17A0D
{
	return Local_538.f_582;
}

int func_349(bool bParam0)//Position - 0x17A1B
{
	struct<31> Var0;
	struct<3> Var35;
	int iVar38;
	bool bVar39;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[bParam0]))
	{
		if (func_365(bParam0, &(Local_538.f_25), &(Local_538.f_28)))
		{
			if (func_274())
			{
				Local_538.f_10[bParam0 /*3*/] = { Local_538.f_25 };
				Local_538.f_20[bParam0] = Local_538.f_28;
				MISC::SET_BIT(&(Local_538.f_24), bParam0);
			}
			else if (!func_16(Local_538.f_10[bParam0 /*3*/], 0f, 0f, 0f, 0))
			{
				if (bParam0 == 0 || (bParam0 > 0 && BitTest(Local_538.f_24, (bParam0 - 1))))
				{
					if (!BitTest(Local_538.f_24, bParam0))
					{
						if (func_208(func_364()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0.f_30 = 1;
							Var0.f_0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_337())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var35 = { func_362(Local_538.f_25, Local_538.f_28, 20f) };
							if (func_45(Local_538.f_25, Var35, func_364(), 0, &(Local_538.f_10[bParam0 /*3*/]), &(Local_538.f_20[bParam0]), &Var0))
							{
								MISC::SET_BIT(&(Local_538.f_24), bParam0);
							}
						}
					}
				}
			}
		}
		if (func_208(func_364()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_282(168, -1, 1, -1, -1, -1)))
			{
				if (BitTest(Local_538.f_24, bParam0))
				{
					if (func_279(&(Local_538.f_35[bParam0]), func_364(), Local_538.f_10[bParam0 /*3*/], Local_538.f_20[bParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_538.f_35[bParam0]), true, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_538.f_10[bParam0 /*3*/], 20f, false, false, false, false, false, false, 0);
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
						{
							if (DECORATOR::DECOR_EXIST_ON(func_40(bParam0), "MPBitset"))
							{
								iVar38 = DECORATOR::DECOR_GET_INT(func_40(bParam0), "MPBitset");
							}
							MISC::SET_BIT(&iVar38, 10);
							MISC::SET_BIT(&iVar38, 11);
							DECORATOR::DECOR_SET_INT(func_40(bParam0), "MPBitset", iVar38);
						}
						if (!func_6())
						{
							func_359(func_40(bParam0), bParam0, -1292453789, 0, 0);
						}
						if (func_274())
						{
							VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(func_40(bParam0), true);
							VEHICLE::SET_BOAT_ANCHOR(func_40(bParam0), true);
							ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15628);
							ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15628, 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(func_40(bParam0), false);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(func_40(bParam0), false);
							VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(func_40(bParam0), true);
							if (func_358())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), func_357());
							}
							else if (func_215())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15638);
							}
							else if (func_269())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15639);
							}
						}
						else if (func_337())
						{
							if (func_364() == joaat("cuban800"))
							{
								VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 132, 64);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 111, 156);
							}
							else
							{
								VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 7, 7);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 7, 7);
							}
							ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15623);
							ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15623, 0);
							VEHICLE::SET_VEHICLE_CAN_BREAK(func_40(bParam0), false);
							bVar39 = func_356();
							Local_538.f_385 = func_355(bVar39);
							Local_538.f_386 = func_354(bVar39);
							Local_538.f_387 = func_353(bVar39);
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627));
							VEHICLE::SET_VEHICLE_BODY_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627));
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627));
							VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 17, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 1, 156);
							if (func_352())
							{
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_40(bParam0), false);
							}
						}
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(func_40(bParam0), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(func_40(bParam0), true);
						VEHICLE::_0xDBC631F109350B8C(func_40(bParam0), true);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(func_40(bParam0), false);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(func_40(bParam0), false);
						if (!func_337())
						{
							VEHICLE::SET_VEHICLE_STRONG(func_40(bParam0), true);
						}
						VEHICLE::_0xBB2333BB87DDD87F(func_40(bParam0), 0);
						if (func_350())
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(func_40(bParam0), 0,08f);
						}
						else
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(func_40(bParam0), 0,2f);
						}
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_538.f_35[bParam0]), true);
						func_278(func_40(bParam0));
						Local_538.f_25 = { 0f, 0f, 0f };
						Local_538.f_29 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_350()//Position - 0x17F0E
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_274())
	{
		if (Global_262145.f_15812)
		{
			return 0;
		}
		uVar0 = func_351();
		if (BitTest(uVar0, 0))
		{
			return 1;
		}
	}
	else if (func_337())
	{
		if (Global_262145.f_15810)
		{
			return 0;
		}
		uVar1 = func_351();
		if (BitTest(uVar1, 2))
		{
			return 1;
		}
	}
	else
	{
		if (Global_262145.f_15811)
		{
			return 0;
		}
		uVar2 = func_351();
		if (BitTest(uVar2, 4))
		{
			return 1;
		}
	}
	return 0;
}

var func_351()//Position - 0x17F88
{
	return Global_2870003[func_32()];
}

int func_352()//Position - 0x17F9A
{
	var uVar0;
	
	if (Global_262145.f_15814)
	{
		return 0;
	}
	if (!func_337() && !func_274())
	{
		uVar0 = func_351();
		if (BitTest(uVar0, 5))
		{
			return 1;
		}
	}
	return 0;
}

var func_353(bool bParam0)//Position - 0x17FD4
{
	if (bParam0)
	{
		return Global_262145.f_15643;
	}
	return Global_262145.f_15625;
}

var func_354(bool bParam0)//Position - 0x17FF2
{
	if (bParam0)
	{
		return Global_262145.f_15644;
	}
	return Global_262145.f_15626;
}

var func_355(bool bParam0)//Position - 0x18014
{
	if (bParam0)
	{
		return Global_262145.f_15642;
	}
	return Global_262145.f_15624;
}

int func_356()//Position - 0x18032
{
	var uVar0;
	
	if (Global_262145.f_15813)
	{
		return 0;
	}
	if (func_337())
	{
		uVar0 = func_351();
		if (BitTest(uVar0, 3))
		{
			return 1;
		}
	}
	return 0;
}

float func_357()//Position - 0x18061
{
	if (func_274())
	{
		return Global_262145.f_15641;
	}
	return 0f;
}

int func_358()//Position - 0x1807B
{
	var uVar0;
	
	if (Global_262145.f_15815)
	{
		return 0;
	}
	if (func_274())
	{
		uVar0 = func_351();
		if (BitTest(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_359(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x180AA
{
	int* iVar0;
	int iVar1;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		iVar0 = func_28();
		func_361(bParam1, &iVar0);
		DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", iVar0);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", iParam2);
		}
		func_360(iParam2);
		if (iParam2 == -81613951)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_360(int iParam0)//Position - 0x18120
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_463 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_463 = iParam0;
	}
}

void func_361(int iParam0, int* iParam1)//Position - 0x1814F
{
	bool bVar0;
	
	if (iParam0 >= 0 && iParam0 < 8)
	{
		bVar0 = (24 + iParam0);
		MISC::SET_BIT(iParam1, bVar0);
	}
}

Vector3 func_362(struct<3> Param0, float fParam3, float fParam4)//Position - 0x1817A
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_363(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_363(struct<3> Param0, float fParam3)//Position - 0x181C4
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

int func_364()//Position - 0x18208
{
	if (func_337())
	{
		switch (func_348())
		{
			case 0:
			case 1:
			case 7:
				return joaat("cuban800");
			
			case 2:
				return joaat("titan");
			}
		
		default:
	}
	if (func_274())
	{
		return joaat("tug");
	}
	return joaat("brickade");
}

int func_365(int iParam0, var uParam1, var uParam2)//Position - 0x1825C
{
	struct<31> Var0;
	struct<3> Var35;
	struct<3> Var38;
	float fVar41;
	bool bVar42;
	
	if (func_35())
	{
		if (iParam0 == 0 || (iParam0 > 0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[(iParam0 - 1)])))
		{
			if (!func_131(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0.f_30 = 1;
			Var0.f_0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var38 = { func_371(iParam0, Local_538.f_29) };
			fVar41 = func_370(iParam0, Local_538.f_29);
			Var35 = { func_362(Var38, fVar41, 20f) };
			if (func_45(Var38, Var35, func_364(), 0, &Var38, &fVar41, &Var0))
			{
				*uParam1 = { Var38 };
				*uParam2 = fVar41;
				Local_538.f_10[iParam0 /*3*/] = { *uParam1 };
				Local_538.f_20[iParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2667225.f_682 > 1)
				{
					if (Global_2667225.f_676 > 2)
					{
						bVar42 = true;
					}
				}
				if (!func_131(Global_2667225.f_683))
				{
					if (Global_2667225.f_676 > 2)
					{
						if (!func_16(Global_2667225.f_683, Var38, 0))
						{
							bVar42 = true;
						}
					}
				}
				if (bVar42)
				{
					Global_2667225.f_676 = 0;
					func_180();
					func_179();
					Local_538.f_29++;
					if (Local_538.f_29 > 2)
					{
						*uParam1 = { func_371(iParam0, 0) };
						*uParam2 = func_370(iParam0, 0);
						Local_538.f_10[iParam0 /*3*/] = { *uParam1 };
						Local_538.f_20[iParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_337())
	{
		*uParam1 = { func_369(iParam0) };
		*uParam2 = func_368(iParam0);
		return 1;
	}
	else
	{
		*uParam1 = { func_367() };
		*uParam2 = func_366();
		return 1;
	}
	return 0;
}

float func_366()//Position - 0x18485
{
	if (func_215())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				return 110,1267f;
			
			case 1:
				return 93,7369f;
			
			case 2:
				return 179,0316f;
			
			case 3:
				return 0,3224f;
			
			case 4:
				return 183,994f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				return 175,892f;
			
			case 1:
				return 248,6986f;
			
			case 2:
				return 133,4317f;
			
			case 3:
				return 137,4506f;
			
			case 4:
				return 167,3423f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_367()//Position - 0x18544
{
	if (func_215())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				return -808,96f, -1507,267f, 0f;
			
			case 1:
				return 87,946f, -2274,033f, 0f;
			
			case 2:
				return 421,2115f, -2759,854f, 0f;
			
			case 3:
				return 774,3229f, -2884,722f, 0f;
			
			case 4:
				return 623,0291f, -3248,27f, 0f;
			}
		
		default:
	}
	if (func_269())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				return -114,8788f, -2777,618f, 0f;
			
			case 1:
				return 880,7318f, -2652,588f, 0f;
			
			case 2:
				return -570,7896f, -2778,848f, 0f;
			
			case 3:
				return -720,5604f, -1347,188f, 0f;
			
			case 4:
				return -485,6249f, -2277,072f, 0f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_368(int iParam0)//Position - 0x18641
{
	switch (Local_538.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_538.f_394[iParam0])
			{
				case 0:
					return 103,3978f;
				
				case 1:
					return 125,9975f;
				
				case 2:
					return 91,5969f;
				
				case 3:
					return 132,3964f;
				
				case 4:
					return 191,7962f;
				
				case 5:
					return 15,1962f;
				
				case 6:
					return 290,1954f;
				
				case 7:
					return 100,995f;
				
				case 8:
					return 48,3939f;
				
				case 9:
					return 104,9941f;
				
				case 10:
					return 12,7939f;
				
				case 11:
					return 109,3935f;
				
				case 12:
					return 63,1932f;
				
				case 13:
					return 296,993f;
				
				case 14:
					return 130,9911f;
				
				case 15:
					return 306,3914f;
				
				case 16:
					return 9,3913f;
				
				case 17:
					return 307,7906f;
				
				case 18:
					return 305,589f;
				
				case 19:
					return 330,3874f;
				
				case 20:
					return 117,6098f;
				
				case 21:
					return 131,1266f;
				
				case 22:
					return 192,5231f;
				
				case 23:
					return 125,385f;
				
				case 24:
					return 195,3724f;
				
				case 25:
					return 86,6037f;
				
				case 26:
					return 317,811f;
				
				case 27:
					return 303,5216f;
				
				case 28:
					return 242,0844f;
				
				case 29:
					return 99,0054f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_538.f_394[iParam0])
			{
				case 0:
					return 329,1949f;
				
				case 1:
					return 60,5958f;
				
				case 2:
					return 107,7927f;
				
				case 3:
					return 61,1982f;
				
				case 4:
					return 330,5976f;
				
				case 5:
					return 330,5976f;
				
				case 6:
					return 109,1921f;
				
				case 7:
					return 213,3918f;
				
				case 8:
					return 114,7918f;
				
				case 9:
					return 195,191f;
				
				case 10:
					return 158,391f;
				
				case 11:
					return 87,1908f;
				
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_369(int iParam0)//Position - 0x188DD
{
	switch (Local_538.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_538.f_394[iParam0])
			{
				case 0:
					return -968,1948f, -2889,675f, 12,9599f;
				
				case 1:
					return -960,1045f, -3067,625f, 12,9444f;
				
				case 2:
					return -1067,529f, -3154,738f, 13,0472f;
				
				case 3:
					return -930,1005f, -3121,037f, 12,9444f;
				
				case 4:
					return -1086,102f, -2977,599f, 12,9449f;
				
				case 5:
					return -1708,297f, -2959,572f, 12,9448f;
				
				case 6:
					return -1227,573f, -2346,825f, 12,9451f;
				
				case 7:
					return -1101,446f, -2400,557f, 12,9451f;
				
				case 8:
					return -1025,158f, -2429,9f, 12,9445f;
				
				case 9:
					return -979,2667f, -2373,14f, 12,9445f;
				
				case 10:
					return -1070,736f, -2478,907f, 12,9446f;
				
				case 11:
					return -1297,445f, -2437,89f, 12,9451f;
				
				case 12:
					return -1291,242f, -2303,709f, 13,0883f;
				
				case 13:
					return -1097,962f, -3434,013f, 12,9451f;
				
				case 14:
					return -1114,178f, -2966,988f, 12,9448f;
				
				case 15:
					return -1730,189f, -2946f, 12,9443f;
				
				case 16:
					return -1677,477f, -3094,124f, 12,9447f;
				
				case 17:
					return -1412,524f, -3248,308f, 12,9449f;
				
				case 18:
					return -1514,502f, -3199,309f, 12,9449f;
				
				case 19:
					return -1602,308f, -3134,281f, 12,9449f;
				
				case 20:
					return -1275,201f, -2842,465f, 12,9476f;
				
				case 21:
					return -1257,471f, -2804,208f, 12,9502f;
				
				case 22:
					return -1387,523f, -2721,518f, 12,9449f;
				
				case 23:
					return -1306,913f, -2766,759f, 12,9449f;
				
				case 24:
					return -1441,124f, -2764,755f, 12,9449f;
				
				case 25:
					return -1396,843f, -2642,261f, 12,9449f;
				
				case 26:
					return -1305,934f, -3319,571f, 12,945f;
				
				case 27:
					return -1180,561f, -3380,75f, 12,945f;
				
				case 28:
					return -1749,98f, -2842,727f, 14,1329f;
				
				case 29:
					return -1503,618f, -2733,548f, 12,9449f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_538.f_394[iParam0])
			{
				case 0:
					return -1230,741f, -2878,474f, 12,9451f;
				
				case 1:
					return -1399,54f, -2559,158f, 12,9451f;
				
				case 2:
					return -939,5087f, -3095,118f, 12,9444f;
				
				case 3:
					return -1003,699f, -3407,047f, 12,8401f;
				
				case 4:
					return -1825,004f, -3158,986f, 12,9444f;
				
				case 5:
					return -1870,778f, -3132,809f, 12,9444f;
				
				case 6:
					return -1204,345f, -2252,822f, 12,9445f;
				
				case 7:
					return -1710,99f, -2776,27f, 14,1329f;
				
				case 8:
					return -1000,948f, -2915,138f, 12,9488f;
				
				case 9:
					return -1085,086f, -2930,166f, 12,9456f;
				
				case 10:
					return -1256,457f, -2150,702f, 12,9248f;
				
				case 11:
					return -1300,874f, -2478,351f, 12,9452f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_370(int iParam0, int iParam1)//Position - 0x18D1F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 208,6f;
						
						case 2:
							return 299,4024f;
						
						case 3:
							return 0,3993f;
						
						case 4:
							return 48f;
						
						case 5:
							return 0f;
						
						case 6:
							return 315,1989f;
						
						case 7:
							return 218,9982f;
						
						case 8:
							return 331,6f;
						
						case 9:
							return 86,546f;
						
						case 10:
							return 151,6492f;
						
						case 11:
							return 315,3995f;
						
						case 12:
							return 169,0126f;
						
						case 13:
							return 233,9757f;
						
						case 14:
							return 270,3038f;
						
						case 15:
							return 164,4331f;
						
						case 16:
							return 89,2575f;
						
						case 17:
							return 1,5266f;
						
						case 18:
							return 170,6689f;
						
						case 19:
							return 351,747f;
						
						case 20:
							return 285,2916f;
						
						case 21:
							return 306,6468f;
						
						case 22:
							return 269,4978f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 270,0406f;
						
						case 2:
							return 29,429f;
						
						case 3:
							return 270,2136f;
						
						case 4:
							return 312,7653f;
						
						case 5:
							return 279,422f;
						
						case 6:
							return 44,2798f;
						
						case 7:
							return 126,2662f;
						
						case 8:
							return 59,3633f;
						
						case 9:
							return 44,3454f;
						
						case 10:
							return 255,4957f;
						
						case 11:
							return 316,404f;
						
						case 12:
							return 174,7817f;
						
						case 13:
							return 54,306f;
						
						case 14:
							return 180,0455f;
						
						case 15:
							return 344,4206f;
						
						case 16:
							return 89,1443f;
						
						case 17:
							return 91,5654f;
						
						case 18:
							return 355,3597f;
						
						case 19:
							return 267,6826f;
						
						case 20:
							return 354,9587f;
						
						case 21:
							return 124,9008f;
						
						case 22:
							return 270,1882f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 241,2394f;
						
						case 2:
							return 30,5329f;
						
						case 3:
							return 268,7542f;
						
						case 4:
							return 235,685f;
						
						case 5:
							return 263,4533f;
						
						case 6:
							return 21,6045f;
						
						case 7:
							return 38,3122f;
						
						case 8:
							return 60,0909f;
						
						case 9:
							return 359,511f;
						
						case 10:
							return 14,6433f;
						
						case 11:
							return 315,3233f;
						
						case 12:
							return 172,1901f;
						
						case 13:
							return 320,4538f;
						
						case 14:
							return 179,2461f;
						
						case 15:
							return 250,3752f;
						
						case 16:
							return 0,2447f;
						
						case 17:
							return 261,7306f;
						
						case 18:
							return 52,3126f;
						
						case 19:
							return 267,7954f;
						
						case 20:
							return 89,242f;
						
						case 21:
							return 44,0817f;
						
						case 22:
							return 268,8879f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 209,6f;
						
						case 2:
							return 298,7994f;
						
						case 3:
							return 92,9994f;
						
						case 4:
							return 324,2342f;
						
						case 5:
							return 3,1991f;
						
						case 6:
							return 315,3998f;
						
						case 7:
							return 215,5996f;
						
						case 8:
							return 330f;
						
						case 9:
							return 89,5971f;
						
						case 10:
							return 169,649f;
						
						case 11:
							return 315,3995f;
						
						case 12:
							return 173,9054f;
						
						case 13:
							return 234,8527f;
						
						case 14:
							return 359,4676f;
						
						case 15:
							return 165,2123f;
						
						case 16:
							return 88,0328f;
						
						case 17:
							return 269,7469f;
						
						case 18:
							return 81,7539f;
						
						case 19:
							return 350,7536f;
						
						case 20:
							return 271,8376f;
						
						case 21:
							return 295,806f;
						
						case 22:
							return 268,5489f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 266,5706f;
						
						case 2:
							return 34,6929f;
						
						case 3:
							return 270,4595f;
						
						case 4:
							return 314,1925f;
						
						case 5:
							return 262,1631f;
						
						case 6:
							return 44,2599f;
						
						case 7:
							return 129,1114f;
						
						case 8:
							return 59,3746f;
						
						case 9:
							return 90,6921f;
						
						case 10:
							return 239,9254f;
						
						case 11:
							return 314,6845f;
						
						case 12:
							return 175,8269f;
						
						case 13:
							return 54,2188f;
						
						case 14:
							return 179,6606f;
						
						case 15:
							return 341,9566f;
						
						case 16:
							return 90,6128f;
						
						case 17:
							return 89,2581f;
						
						case 18:
							return 355,3481f;
						
						case 19:
							return 266,7427f;
						
						case 20:
							return 356,4481f;
						
						case 21:
							return 136,6899f;
						
						case 22:
							return 270,2851f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 245,33f;
						
						case 2:
							return 31,3559f;
						
						case 3:
							return 269,2654f;
						
						case 4:
							return 235,3301f;
						
						case 5:
							return 270,3575f;
						
						case 6:
							return 9,4474f;
						
						case 7:
							return 38,199f;
						
						case 8:
							return 60,6946f;
						
						case 9:
							return 359,8666f;
						
						case 10:
							return 8,8486f;
						
						case 11:
							return 322,7813f;
						
						case 12:
							return 171,8957f;
						
						case 13:
							return 313,731f;
						
						case 14:
							return 179,9229f;
						
						case 15:
							return 248,6389f;
						
						case 16:
							return 358,9486f;
						
						case 17:
							return 269,3399f;
						
						case 18:
							return 51,0447f;
						
						case 19:
							return 266,7723f;
						
						case 20:
							return 89,7738f;
						
						case 21:
							return 25,4218f;
						
						case 22:
							return 269,0639f;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 209,1995f;
						
						case 2:
							return 302,7997f;
						
						case 3:
							return 92,9994f;
						
						case 4:
							return 325,1249f;
						
						case 5:
							return 357,3996f;
						
						case 6:
							return 135,1994f;
						
						case 7:
							return 308,5542f;
						
						case 8:
							return 330f;
						
						case 9:
							return 88,5975f;
						
						case 10:
							return 200,4493f;
						
						case 11:
							return 315,3995f;
						
						case 12:
							return 83,0145f;
						
						case 13:
							return 245,6889f;
						
						case 14:
							return 359,5525f;
						
						case 15:
							return 250,3085f;
						
						case 16:
							return 180,3578f;
						
						case 17:
							return 275,278f;
						
						case 18:
							return 82,4021f;
						
						case 19:
							return 89,672f;
						
						case 20:
							return 175,7747f;
						
						case 21:
							return 298,8189f;
						
						case 22:
							return 272,5778f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 239,8358f;
						
						case 2:
							return 47,7028f;
						
						case 3:
							return 269,296f;
						
						case 4:
							return 317,4547f;
						
						case 5:
							return 261,8835f;
						
						case 6:
							return 45,2661f;
						
						case 7:
							return 131,5014f;
						
						case 8:
							return 59,3505f;
						
						case 9:
							return 43,3622f;
						
						case 10:
							return 242,5756f;
						
						case 11:
							return 314,2681f;
						
						case 12:
							return 176,731f;
						
						case 13:
							return 55,0103f;
						
						case 14:
							return 200,8372f;
						
						case 15:
							return 68,8202f;
						
						case 16:
							return 47,4361f;
						
						case 17:
							return 89,1401f;
						
						case 18:
							return 354,0209f;
						
						case 19:
							return 266,7281f;
						
						case 20:
							return 356,1704f;
						
						case 21:
							return 144,1817f;
						
						case 22:
							return 270,3809f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 259,1305f;
						
						case 2:
							return 32,29f;
						
						case 3:
							return 269,3044f;
						
						case 4:
							return 233,7558f;
						
						case 5:
							return 274,4951f;
						
						case 6:
							return 354,4731f;
						
						case 7:
							return 36,0818f;
						
						case 8:
							return 60,2114f;
						
						case 9:
							return 359,9043f;
						
						case 10:
							return 14,0337f;
						
						case 11:
							return 335,3627f;
						
						case 12:
							return 172,7723f;
						
						case 13:
							return 305,7141f;
						
						case 14:
							return 90,7033f;
						
						case 15:
							return 253,9543f;
						
						case 16:
							return 1,6254f;
						
						case 17:
							return 265,4617f;
						
						case 18:
							return 48,5508f;
						
						case 19:
							return 264,2763f;
						
						case 20:
							return 88,9135f;
						
						case 21:
							return 32,2909f;
						
						case 22:
							return 180,6358f;
						
						default:
					}
					break;
			}
			break;
	}
	return 269,4978f;
}

Vector3 func_371(int iParam0, int iParam1)//Position - 0x198DE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 75,566f, -2540,649f, 5f;
						
						case 2:
							return -1078,262f, -1239,851f, 4,1434f;
						
						case 3:
							return 883,4796f, -1017,313f, 31,3352f;
						
						case 4:
							return 257,9049f, -1957,535f, 22,0042f;
						
						case 5:
							return -439,4763f, 178,6946f, 74,2514f;
						
						case 6:
							return -1100,738f, -2038,471f, 12,2665f;
						
						case 7:
							return -1280,453f, -829,5875f, 16,0992f;
						
						case 8:
							return -869,777f, -2705,146f, 12,9452f;
						
						case 9:
							return 282,588f, -2994,094f, 4,6682f;
						
						case 10:
							return 1544,658f, -2177,76f, 76,3443f;
						
						case 11:
							return -338,8323f, -2704,073f, 5,028f;
						
						case 12:
							return 517,5385f, -645,653f, 23,7512f;
						
						case 13:
							return -551,9077f, -1766,713f, 20,7291f;
						
						case 14:
							return -299,124f, -1326,529f, 30,3017f;
						
						case 15:
							return 346,8094f, 337,0167f, 104,1991f;
						
						case 16:
							return 900,0145f, -1572,714f, 29,8542f;
						
						case 17:
							return 786,6585f, -900,3587f, 24,0527f;
						
						case 18:
							return 1049,079f, -2171,625f, 30,6872f;
						
						case 19:
							return 981,4014f, -2510,991f, 27,302f;
						
						case 20:
							return -264,0942f, 188,8373f, 84,1883f;
						
						case 21:
							return 557,2414f, -1960,689f, 23,8062f;
						
						case 22:
							return 101,8777f, -2230,142f, 5,0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 66,5896f, -2544,517f, 5f;
						
						case 2:
							return -1025,685f, -1317,374f, 4,984f;
						
						case 3:
							return 909,1116f, -1092,301f, 31,3332f;
						
						case 4:
							return 270,9639f, -1956,482f, 22,4214f;
						
						case 5:
							return -446,1908f, 223,8166f, 82,006f;
						
						case 6:
							return -1054,04f, -2049,198f, 12,216f;
						
						case 7:
							return -1311,915f, -790,1375f, 16,9507f;
						
						case 8:
							return -848,2803f, -2706,428f, 12,9445f;
						
						case 9:
							return 267,5522f, -3048,199f, 5,04f;
						
						case 10:
							return 1519,344f, -2185,571f, 76,5866f;
						
						case 11:
							return -300,4395f, -2638,489f, 5,0418f;
						
						case 12:
							return 515,6205f, -679,5475f, 24,2445f;
						
						case 13:
							return -564,9694f, -1732,855f, 21,3362f;
						
						case 14:
							return -333,6444f, -1376,203f, 30,2957f;
						
						case 15:
							return 369,0242f, 300,1814f, 102,4281f;
						
						case 16:
							return 980,7197f, -1538,239f, 29,5977f;
						
						case 17:
							return 799,59f, -918,3593f, 24,6337f;
						
						case 18:
							return 1061,246f, -2198,076f, 29,6956f;
						
						case 19:
							return 951,1177f, -2544,439f, 27,3027f;
						
						case 20:
							return -216,3499f, 203,5424f, 82,6981f;
						
						case 21:
							return 570,9869f, -1900,998f, 23,8006f;
						
						case 22:
							return 131,1389f, -2187,469f, 4,953f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 17,2971f, -2548,397f, 5,0366f;
						
						case 2:
							return -1111,007f, -1241,691f, 1,4219f;
						
						case 3:
							return 853,504f, -1092,164f, 26,9982f;
						
						case 4:
							return 253,4216f, -1991,415f, 19,226f;
						
						case 5:
							return -420,191f, 230,0672f, 82,4149f;
						
						case 6:
							return -1083,174f, -2010,841f, 12,1633f;
						
						case 7:
							return -1311,055f, -773,2202f, 18,8163f;
						
						case 8:
							return -836,7797f, -2704,234f, 12,8121f;
						
						case 9:
							return 304,8296f, -2998,689f, 4,9774f;
						
						case 10:
							return 1565,06f, -2074,245f, 76,0599f;
						
						case 11:
							return -337,0353f, -2676,035f, 5,0441f;
						
						case 12:
							return 465,3821f, -656,4695f, 26,7156f;
						
						case 13:
							return -606,8765f, -1729,371f, 22,3962f;
						
						case 14:
							return -346,9227f, -1404,342f, 29,197f;
						
						case 15:
							return 385,7742f, 253,9456f, 101,9867f;
						
						case 16:
							return 965,1168f, -1534,567f, 29,7544f;
						
						case 17:
							return 753,7557f, -956,1052f, 23,8429f;
						
						case 18:
							return 1079,304f, -2155,766f, 30,762f;
						
						case 19:
							return 973,3874f, -2493,156f, 27,302f;
						
						case 20:
							return -275,7711f, 133,0159f, 67,5569f;
						
						case 21:
							return 479,9522f, -1965,064f, 23,6035f;
						
						case 22:
							return 207,8649f, -2236,68f, 5,3571f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 80,18f, -2534,817f, 5f;
						
						case 2:
							return -1077,115f, -1242,028f, 4,2154f;
						
						case 3:
							return 917,6459f, -993,7324f, 35,4143f;
						
						case 4:
							return 256,9997f, -1973,177f, 20,8855f;
						
						case 5:
							return -404,2649f, 199,9949f, 81,7681f;
						
						case 6:
							return -1090,594f, -2049,731f, 12,271f;
						
						case 7:
							return -1271,107f, -848,6555f, 12,0146f;
						
						case 8:
							return -892,0394f, -2739,922f, 12,8285f;
						
						case 9:
							return 262,0403f, -2999,025f, 4,7474f;
						
						case 10:
							return 1548,647f, -2141,337f, 76,448f;
						
						case 11:
							return -330,3534f, -2695,275f, 5,0115f;
						
						case 12:
							return 518,8716f, -629,5131f, 23,7529f;
						
						case 13:
							return -543,8981f, -1763,519f, 20,6171f;
						
						case 14:
							return -263,9384f, -1369,898f, 30,3f;
						
						case 15:
							return 348,4588f, 354,0681f, 104,0595f;
						
						case 16:
							return 927,0326f, -1579,571f, 29,4263f;
						
						case 17:
							return 754,1151f, -872,9401f, 24,0701f;
						
						case 18:
							return 1095,888f, -2175,671f, 30,3221f;
						
						case 19:
							return 979,4924f, -2527,655f, 27,302f;
						
						case 20:
							return -248,7708f, 180,1573f, 76,8737f;
						
						case 21:
							return 536,7711f, -1974,162f, 23,8071f;
						
						case 22:
							return 115,9594f, -2230,136f, 5,0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 51,1315f, -2544,015f, 5,002f;
						
						case 2:
							return -1013,461f, -1320,874f, 4,8685f;
						
						case 3:
							return 891,0043f, -1092,538f, 29,375f;
						
						case 4:
							return 283,8082f, -1944,086f, 23,3962f;
						
						case 5:
							return -460,6299f, 227,2324f, 82,1805f;
						
						case 6:
							return -1043,421f, -2060,035f, 12,2542f;
						
						case 7:
							return -1323,81f, -799,6187f, 16,7538f;
						
						case 8:
							return -836,1172f, -2713,632f, 12,9445f;
						
						case 9:
							return 276,9312f, -3041,241f, 4,843f;
						
						case 10:
							return 1501,615f, -2179,107f, 76,9969f;
						
						case 11:
							return -312,4042f, -2651,017f, 5,0429f;
						
						case 12:
							return 514,2888f, -695,7411f, 24,1667f;
						
						case 13:
							return -576,8483f, -1724,337f, 21,7285f;
						
						case 14:
							return -339,4656f, -1376,456f, 30,3116f;
						
						case 15:
							return 364,1374f, 283,0252f, 102,3552f;
						
						case 16:
							return 992,5272f, -1533,687f, 29,745f;
						
						case 17:
							return 816,9606f, -918,3287f, 24,7227f;
						
						case 18:
							return 1059,176f, -2216,868f, 29,3004f;
						
						case 19:
							return 933,7609f, -2543,49f, 27,3027f;
						
						case 20:
							return -217,0926f, 174,9504f, 75,4322f;
						
						case 21:
							return 582,6407f, -1890,364f, 24,2265f;
						
						case 22:
							return 145,7482f, -2187,39f, 4,953f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 29,7453f, -2554,565f, 5f;
						
						case 2:
							return -1119,537f, -1227,846f, 1,4313f;
						
						case 3:
							return 836,6307f, -1092,544f, 27,0783f;
						
						case 4:
							return 265,7728f, -1999,919f, 18,8226f;
						
						case 5:
							return -393,0742f, 227,925f, 82,7333f;
						
						case 6:
							return -1088,037f, -1993,077f, 12,1576f;
						
						case 7:
							return -1325,427f, -757,1539f, 19,367f;
						
						case 8:
							return -815,2336f, -2711,911f, 12,812f;
						
						case 9:
							return 304,6926f, -3012,622f, 4,9702f;
						
						case 10:
							return 1568,957f, -2095,701f, 76,5195f;
						
						case 11:
							return -348,3641f, -2688,345f, 5,0425f;
						
						case 12:
							return 467,2889f, -640,745f, 27,4996f;
						
						case 13:
							return -617,1298f, -1740,959f, 22,6394f;
						
						case 14:
							return -352,1258f, -1404,453f, 28,9612f;
						
						case 15:
							return 368,8197f, 259,9216f, 101,9686f;
						
						case 16:
							return 975,7991f, -1520,66f, 29,9604f;
						
						case 17:
							return 751,5151f, -965,7788f, 23,8412f;
						
						case 18:
							return 1082,607f, -2150,683f, 30,5369f;
						
						case 19:
							return 956,5896f, -2492,579f, 27,302f;
						
						case 20:
							return -257,9995f, 133,273f, 68,2289f;
						
						case 21:
							return 475,7105f, -1978,248f, 23,6205f;
						
						case 22:
							return 192,1165f, -2236,279f, 4,8551f;
						
						default:
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_538.f_54)
					{
						case 1:
							return 89,799f, -2530,924f, 5f;
						
						case 2:
							return -1071,393f, -1252,443f, 4,7051f;
						
						case 3:
							return 899,5668f, -994,5377f, 33,1194f;
						
						case 4:
							return 241,0012f, -1996,41f, 18,6848f;
						
						case 5:
							return -447,0587f, 178,2333f, 74,2037f;
						
						case 6:
							return -1062,537f, -2009,48f, 12,1616f;
						
						case 7:
							return -1285,753f, -813,0154f, 16,3218f;
						
						case 8:
							return -887,17f, -2742,64f, 12,8285f;
						
						case 9:
							return 270,8913f, -2989,357f, 4,7132f;
						
						case 10:
							return 1534,311f, -2158,243f, 76,6882f;
						
						case 11:
							return -321,6567f, -2686,351f, 5,0111f;
						
						case 12:
							return 503,5738f, -624,4263f, 23,8131f;
						
						case 13:
							return -515,0387f, -1766,265f, 20,374f;
						
						case 14:
							return -263,8943f, -1385,979f, 30,3057f;
						
						case 15:
							return 339,818f, 313,7482f, 103,4573f;
						
						case 16:
							return 922,7253f, -1538,224f, 29,8691f;
						
						case 17:
							return 753,661f, -861,8409f, 24,2223f;
						
						case 18:
							return 1096,373f, -2168,761f, 30,2795f;
						
						case 19:
							return 1024,333f, -2504,33f, 27,3434f;
						
						case 20:
							return -233,9646f, 210,537f, 84,1244f;
						
						case 21:
							return 538,3644f, -1984,858f, 23,751f;
						
						case 22:
							return 131,7841f, -2230,233f, 5,0333f;
						
						default:
					}
					break;
				
				case 1:
					switch (Local_538.f_54)
					{
						case 1:
							return 35,9444f, -2539,717f, 5,0024f;
						
						case 2:
							return -1007,394f, -1317,224f, 4,9067f;
						
						case 3:
							return 876,8945f, -1092,53f, 28,2771f;
						
						case 4:
							return 295,9134f, -1932,292f, 24,3064f;
						
						case 5:
							return -455,1007f, 234,6203f, 82,0244f;
						
						case 6:
							return -1031,724f, -2072,077f, 12,5716f;
						
						case 7:
							return -1335,552f, -809,8959f, 16,4896f;
						
						case 8:
							return -821,3975f, -2722,354f, 12,9444f;
						
						case 9:
							return 283,6107f, -3053,823f, 4,9867f;
						
						case 10:
							return 1499,083f, -2185,737f, 76,7263f;
						
						case 11:
							return -324,779f, -2663,592f, 5,0445f;
						
						case 12:
							return 512,3986f, -721,838f, 23,8624f;
						
						case 13:
							return -591,0884f, -1714,103f, 22,3323f;
						
						case 14:
							return -346,9976f, -1370,863f, 30,3182f;
						
						case 15:
							return 377,8062f, 288,2171f, 102,1705f;
						
						case 16:
							return 996,5148f, -1543,246f, 29,8335f;
						
						case 17:
							return 835,5129f, -918,463f, 24,7448f;
						
						case 18:
							return 1046,311f, -2211,777f, 29,1671f;
						
						case 19:
							return 913,9238f, -2542,353f, 27,3173f;
						
						case 20:
							return -218,8107f, 151,816f, 70,3569f;
						
						case 21:
							return 593,3129f, -1876,054f, 24,006f;
						
						case 22:
							return 163,7395f, -2187,274f, 4,9529f;
						
						default:
					}
					break;
				
				case 2:
					switch (Local_538.f_54)
					{
						case 1:
							return 42,259f, -2558,294f, 5f;
						
						case 2:
							return -1128,897f, -1212,134f, 1,3396f;
						
						case 3:
							return 819,2865f, -1093,124f, 27,5717f;
						
						case 4:
							return 277,0835f, -2007,957f, 18,7094f;
						
						case 5:
							return -375,8415f, 228,6617f, 83,2295f;
						
						case 6:
							return -1087,756f, -1975,791f, 12,1524f;
						
						case 7:
							return -1341,878f, -751,0708f, 21,4101f;
						
						case 8:
							return -808,8249f, -2701,321f, 12,812f;
						
						case 9:
							return 304,6487f, -3030,21f, 4,9632f;
						
						case 10:
							return 1572,752f, -2073,607f, 75,9901f;
						
						case 11:
							return -357,2827f, -2703,429f, 5,0408f;
						
						case 12:
							return 470,1857f, -620,3571f, 27,4997f;
						
						case 13:
							return -629,9596f, -1751,494f, 22,941f;
						
						case 14:
							return -312,814f, -1415,919f, 30,0626f;
						
						case 15:
							return 352,8829f, 266,151f, 101,9626f;
						
						case 16:
							return 975,6237f, -1502,637f, 30,2482f;
						
						case 17:
							return 751,2968f, -971,9805f, 23,8482f;
						
						case 18:
							return 1083,86f, -2143,323f, 30,7745f;
						
						case 19:
							return 935,8514f, -2489,557f, 27,3192f;
						
						case 20:
							return -302,9154f, 133,8862f, 66,9406f;
						
						case 21:
							return 489,8722f, -1992,808f, 23,9485f;
						
						case 22:
							return 182,5244f, -2221,961f, 4,9515f;
						
						default:
					}
					break;
			}
			break;
	}
	return 131,7841f, -2230,233f, 5,0333f;
}

int func_372()//Position - 0x1AC4F
{
	return Local_538.f_5;
}

void func_373()//Position - 0x1AC5C
{
	if (func_247() == func_33() && func_190() == 0)
	{
		func_186(2);
	}
}

void func_374()//Position - 0x1AC80
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_185(bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (Local_538.f_595 != iVar1)
	{
		Local_538.f_595 = iVar1;
	}
}

void func_375()//Position - 0x1ACBF
{
	bool bVar0;
	
	if (func_6())
	{
		if (!func_2259(3))
		{
			if (func_5(&(Local_538.f_584)) && func_187(&(Local_538.f_584), func_379(), 0))
			{
				bVar0 = false;
				while (bVar0 < func_21())
				{
					func_359(func_40(bVar0), bVar0, -1292453789, 0, 0);
					bVar0++;
				}
				func_376();
				func_24(3);
			}
		}
	}
}

void func_376()//Position - 0x1AD29
{
	struct<14> Var0;
	
	Var0.f_2 = -97742300;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = func_247();
	func_377(Var0, func_378(1));
}

void func_377(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1AD58
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_378(int iParam0)//Position - 0x1AD85
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_2520(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_379()//Position - 0x1ADE2
{
	int iVar0;
	
	iVar0 = func_7();
	if (func_2257() == 1 && !func_2258())
	{
		iVar0 = 3;
	}
	switch (iVar0)
	{
		case 2:
			return Global_262145.f_16759;
		
		case 3:
			return Global_262145.f_16758;
		
		default:
	}
	return Global_262145.f_16760;
}

void func_380()//Position - 0x1AE34
{
	struct<3> Var0;
	
	Var0 = { func_17(Local_538.f_54) };
	if (!func_131(Var0))
	{
		func_381(&(Local_538.f_578), Var0, 1, 1103626240);
	}
}

void func_381(var uParam0, struct<3> Param1, bool bParam4, int iParam5)//Position - 0x1AE69
{
	if (*uParam0 == -1 || !MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
	{
		*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(iParam5, iParam5, iParam5), Param1 + Vector(iParam5, iParam5, iParam5), 1f, 0,25f, bParam4, true);
	}
}

void func_382()//Position - 0x1AEAD
{
	if (func_212() && func_399())
	{
		if (!func_398())
		{
			if (func_396())
			{
				func_4(&(Local_538.f_518), 0, 0);
			}
		}
		else if (func_394())
		{
			if (!func_5(&(Local_538.f_520)))
			{
				if (func_392() && func_388())
				{
					func_201(&(Local_538.f_518));
					func_4(&(Local_538.f_520), 0, 0);
					func_386();
					if (func_385())
					{
						if (!func_11() && !func_384())
						{
							Local_538.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
						}
					}
				}
			}
		}
		else if (func_383())
		{
			func_392();
			func_388();
			func_386();
			if (func_385())
			{
				if (!func_11() && !func_384())
				{
					Local_538.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
				}
			}
		}
	}
}

int func_383()//Position - 0x1AF8A
{
	if (func_12())
	{
		return 1;
	}
	return 0;
}

bool func_384()//Position - 0x1AF9E
{
	return func_10() == 5;
}

int func_385()//Position - 0x1AFAC
{
	switch (func_348())
	{
		case 1:
		case 5:
		case 6:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

void func_386()//Position - 0x1AFDA
{
	int iVar0;
	
	if (func_399())
	{
		switch (func_10())
		{
			case 12:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < func_387())
				{
					if (!func_37(8))
					{
						func_34(8);
					}
				}
				else if (func_37(8))
				{
					func_2(8);
				}
				break;
			}
	}
}

int func_387()//Position - 0x1B02F
{
	switch (Local_538.f_593)
	{
		case 1:
		case 4:
			return Global_262145.f_16781;
		
		case 2:
			return Global_262145.f_16780;
		
		case 3:
			return Global_262145.f_16779;
		
		default:
	}
	return Global_262145.f_16779;
}

int func_388()//Position - 0x1B07F
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[bVar0 /*8*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_538.f_400[bVar0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_400[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_400[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (func_203(Local_538.f_400[bVar0 /*8*/]))
				{
					if (!func_11() && !func_384())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_538.f_400[bVar0 /*8*/]), true, true);
						func_391(&(Local_538.f_400[bVar0 /*8*/]));
					}
					else
					{
						func_390(&(Local_538.f_400[bVar0 /*8*/]));
					}
					func_389(bVar0, 1);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[bVar0 /*8*/]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void func_389(bool bParam0, int iParam1)//Position - 0x1B184
{
	Local_538.f_400[bParam0 /*8*/].f_5 = iParam1;
}

void func_390(var uParam0)//Position - 0x1B19A
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_391(var uParam0)//Position - 0x1B1BE
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_392()//Position - 0x1B1F7
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_9())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar0 /*6*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_538.f_499[bVar0 /*6*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_499[bVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_499[bVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (func_203(Local_538.f_499[bVar0 /*6*/]))
				{
					if (!func_11() && !func_384())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_538.f_499[bVar0 /*6*/]), true, true);
					}
					func_390(&(Local_538.f_499[bVar0 /*6*/]));
					func_201(&(Local_538.f_571[bVar0 /*2*/]));
					func_393(bVar0, 1);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_9())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar0 /*6*/]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void func_393(bool bParam0, int iParam1)//Position - 0x1B2F9
{
	Local_538.f_499[bParam0 /*6*/].f_5 = iParam1;
}

int func_394()//Position - 0x1B30F
{
	if (func_5(&(Local_538.f_518)))
	{
		if (func_187(&(Local_538.f_518), func_395(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395()//Position - 0x1B33B
{
	if (Local_538.f_7 == 6)
	{
		return 5000;
	}
	return 10000;
}

int func_396()//Position - 0x1B355
{
	int iVar0;
	
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				if (Local_538.f_499[0 /*6*/].f_5 == 4 || func_397())
				{
					iVar0 = 1;
				}
			}
			else if ((Local_538.f_499[0 /*6*/].f_5 == 4 && Local_538.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if ((Local_538.f_499[0 /*6*/].f_5 == 4 && Local_538.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		
		case 6:
			if (Local_538.f_56 > 0)
			{
				if (func_397())
				{
					iVar0 = 1;
				}
			}
			break;
		
		case 11:
			break;
	}
	return iVar0;
}

int func_397()//Position - 0x1B429
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (Local_538.f_400[iVar0 /*8*/].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_398()//Position - 0x1B45C
{
	return func_5(&(Local_538.f_518));
}

int func_399()//Position - 0x1B46E
{
	if (((func_10() == 12 || func_10() == 5) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

void func_400()//Position - 0x1B4AA
{
	bool bVar0;
	bool bVar1;
	
	if (func_399())
	{
		bVar0 = false;
		while (bVar0 < func_9())
		{
			switch (func_8(bVar0))
			{
				case 0:
					break;
				
				case 1:
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar0 /*6*/]))
					{
						if (func_421())
						{
							if (func_5(&(Local_538.f_520)))
							{
								func_201(&(Local_538.f_520));
							}
							if (func_208(func_420()))
							{
								if (func_403(bVar0, func_420()))
								{
									func_393(bVar0, 2);
								}
							}
						}
					}
					break;
				
				case 2:
					if (func_212())
					{
						bVar1 = false;
						while (bVar1 < func_210())
						{
							if (func_193(bVar1, 0))
							{
							}
							bVar1++;
						}
					}
					if (func_401(bVar0))
					{
						func_393(bVar0, 3);
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_499[bVar0 /*6*/]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_538.f_499[bVar0 /*6*/]), false) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_538.f_499[bVar0 /*6*/]), false))
						{
							func_393(bVar0, 4);
						}
					}
					break;
				
				case 4:
					break;
				
				case 5:
					break;
			}
			bVar0++;
		}
	}
}

int func_401(bool bParam0)//Position - 0x1B5DF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar1 = 0;
				while (iVar1 < func_210())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[iVar1 /*8*/]))
					{
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_538.f_400[iVar1 /*8*/])))
						{
							if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[iVar1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					iVar1++;
				}
			}
			else if (bParam0 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/]))
				{
					if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) && !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]))
			{
				if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) && !func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
			break;
		
		case 5:
			iVar1 = 0;
			while (iVar1 < func_210())
			{
				if (bParam0 == 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/]))
					{
						if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]))
				{
					if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					if (bParam0 == 0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/]))
						{
							if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]))
					{
						if (!func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				
				case 6:
					if (bParam0 == 0)
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/]))
						{
							if ((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[4 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[5 /*8*/]))
					{
						if ((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				
				case 8:
					if (bParam0 == 0)
					{
						if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]))
						{
							if (((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[7 /*8*/]))
					{
						if (((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[6 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[7 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
			}
			break;
		
		case 11:
			if (bParam0 == 0)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[3 /*8*/]))
				{
					if (((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (bParam0 == 1)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[7 /*8*/]))
				{
					if (((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[6 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[7 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (bParam0 == 2)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[8 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[9 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[10 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[11 /*8*/]))
				{
					if (((!func_402(NETWORK::NET_TO_PED(Local_538.f_400[8 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[9 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[10 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0)) || !func_402(NETWORK::NET_TO_PED(Local_538.f_400[11 /*8*/]), NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			break;
	}
	return iVar0;
}

int func_402(int iParam0, int iParam1, bool bParam2)//Position - 0x1BFC3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_403(bool bParam0, int iParam1)//Position - 0x1C015
{
	float fVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<31> Var6;
	struct<3> Var41;
	struct<3> Var44;
	float fVar47;
	int iVar48;
	var uVar49;
	bool bVar50;
	float fVar51;
	struct<31> Var52;
	struct<3> Var87;
	
	switch (func_10())
	{
		case 12:
			if (Local_538.f_522 == -1)
			{
				if (Local_538.f_522.f_6 == -1 || Local_538.f_522.f_6 == bParam0)
				{
					Local_538.f_522.f_6 = bParam0;
					if (func_131(Local_538.f_522.f_7))
					{
						if (func_131(Local_538.f_522.f_13))
						{
							Local_538.f_522.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(func_40(0)) };
						}
						else if (func_37(8))
						{
							if (Local_118.f_361 > 5)
							{
								if (Local_118.f_363 == 1)
								{
									Local_118.f_363 = 0;
								}
							}
							func_419(func_40(0), &(Local_538.f_522.f_7), &(Local_538.f_522.f_10));
							if (func_128(Local_538.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_118.f_363, Local_118.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								Local_538.f_522.f_7.f_2 = func_418();
							}
							else
							{
								Local_538.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_118.f_361 < 5)
								{
									Local_118.f_361++;
								}
								else
								{
									Local_118.f_362++;
								}
							}
						}
						else
						{
							if (Local_118.f_361 >= 5)
							{
								if (Local_118.f_363 == 1)
								{
									Local_118.f_363 = 0;
								}
								if (Local_118.f_362 >= 5)
								{
									if (!func_37(8))
									{
										func_34(8);
										Local_538.f_522.f_7 = { 0f, 0f, 0f };
										Local_118.f_361 = 0;
										Local_118.f_362 = 0;
									}
								}
								else
								{
									func_415(func_40(0), &(Local_538.f_522.f_7), &(Local_538.f_522.f_10), 1);
								}
							}
							else
							{
								func_415(func_40(0), &(Local_538.f_522.f_7), &(Local_538.f_522.f_10), 0);
							}
							if (WATER::TEST_PROBE_AGAINST_WATER(Local_538.f_522.f_7 + Vector(2f, 0f, 0f), Local_538.f_522.f_7 - Vector(10f, 0f, 0f), &(Local_538.f_522.f_7)))
							{
								if (func_128(Local_538.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_118.f_363, Local_118.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									if (func_414(Local_538.f_522.f_7))
									{
									}
									else
									{
										Local_538.f_522.f_7 = { 0f, 0f, 0f };
										if (Local_118.f_361 < 5)
										{
											Local_118.f_361++;
										}
										else
										{
											Local_118.f_362++;
										}
									}
								}
								else
								{
									Local_538.f_522.f_7 = { 0f, 0f, 0f };
									if (Local_118.f_361 < 5)
									{
										Local_118.f_361++;
									}
									else
									{
										Local_118.f_362++;
									}
								}
							}
							else
							{
								Local_538.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_118.f_361 < 5)
								{
									Local_118.f_361++;
								}
								else
								{
									Local_118.f_362++;
								}
							}
						}
					}
					else if (func_279(&(Local_538.f_499[bParam0 /*6*/]), iParam1, Local_538.f_522.f_7, Local_538.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_413(bParam0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
						Local_538.f_522.f_6 = -1;
						Local_538.f_522.f_7 = { 0f, 0f, 0f };
						Local_538.f_522.f_10 = 0f;
						Local_538.f_522.f_12 = 0;
						Local_538.f_522.f_11 = 0;
						Local_118.f_361 = 0;
						Local_118.f_363 = 1;
						func_4(&(Local_538.f_571[bParam0 /*2*/]), 0, 0);
						if (func_37(8))
						{
							Local_538.f_544 = (Local_538.f_544 + 1f);
						}
						else
						{
							Local_538.f_544 = (Local_538.f_544 + 0,5f);
						}
						return 1;
					}
				}
			}
			break;
		
		case 5:
			if (Local_538.f_522 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[Local_538.f_591]))
				{
					if (func_19(Local_538.f_35[Local_538.f_591]))
					{
						if (Local_538.f_522.f_6 == -1 || Local_538.f_522.f_6 == bParam0)
						{
							Local_538.f_522.f_6 = bParam0;
							if (func_131(Local_538.f_522.f_7))
							{
								if (func_131(Local_538.f_522.f_13))
								{
									Local_538.f_522.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_VEH(Local_538.f_35[Local_538.f_591])) };
								}
								else
								{
									if ((Local_538.f_522.f_13.f_2 >= 0f && Local_538.f_522.f_13.f_2 < 90f) || (Local_538.f_522.f_13.f_2 >= 270f && Local_538.f_522.f_13.f_2 < 360f))
									{
										fVar0 = 220f;
									}
									else
									{
										fVar0 = 120f;
									}
									bVar1 = true;
									if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_538.f_35[Local_538.f_591]), true), Local_538.f_522.f_13, fVar0, &(Local_538.f_522.f_7)))
									{
										fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_538.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[Local_538.f_591]), false), true);
										Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[Local_538.f_591]), Local_538.f_522.f_7) };
										if (fVar2 > 290f)
										{
											bVar1 = false;
										}
										if (!func_128(Local_538.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar1 = false;
										}
										if (MISC::ABSF(Var3.f_0) > 100f)
										{
											bVar1 = false;
										}
										if (!bVar1)
										{
											Local_538.f_522.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_538.f_522.f_10 = func_412(Local_538.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_538.f_35[Local_538.f_591]), true));
										}
									}
									else
									{
										func_411(&(Local_538.f_522.f_13));
									}
								}
							}
							if (!func_131(Local_538.f_522.f_7))
							{
								if (func_279(&(Local_538.f_499[bParam0 /*6*/]), iParam1, Local_538.f_522.f_7, Local_538.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(bParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_538.f_522.f_6 = -1;
									Local_538.f_522.f_7 = { 0f, 0f, 0f };
									Local_538.f_522.f_10 = 0f;
									Local_538.f_522.f_12 = 0;
									Local_538.f_522.f_11 = 0;
									Local_538.f_544 = (Local_538.f_544 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 11:
			if (Local_538.f_522 == -1)
			{
				if (Local_538.f_522.f_6 == -1 || Local_538.f_522.f_6 == bParam0)
				{
					Local_538.f_522.f_6 = bParam0;
					if (func_131(Local_538.f_522.f_7))
					{
						if (func_131(Local_538.f_522.f_16))
						{
							Local_538.f_522.f_16 = { func_410(11, Local_538.f_551[bParam0], Local_538.f_384, 0) };
							Local_538.f_522.f_16.f_2 = (Local_538.f_522.f_16.f_2 + 50f);
						}
						if (!func_131(Local_538.f_522.f_16))
						{
							Var6.f_4 = 1125515264;
							Var6.f_5 = 1;
							Var6.f_6 = 1;
							Var6.f_8 = 1082130432;
							Var6.f_9 = 1176255488;
							Var6.f_10 = 1;
							Var6.f_13 = 1;
							Var6.f_15 = 2;
							Var6.f_22 = 2;
							Var6.f_25 = 1;
							Var6.f_26 = 1;
							Var6.f_29 = 1123024896;
							Var6.f_30 = 1;
							Var6.f_0 = 0f;
							Var6.f_1 = 1;
							Var6.f_4 = 50f;
							Var6.f_5 = 0;
							Var6.f_6 = 1;
							Var6.f_12 = 1;
							Var6.f_3 = 1;
							Var44 = { Local_538.f_522.f_16 };
							Var41 = { Local_538.f_522.f_16 };
							if (func_45(Local_538.f_522.f_16, Var41, iParam1, 0, &Var44, &(Local_538.f_522.f_10), &Var6))
							{
								Local_538.f_522.f_7 = { Var44 };
							}
						}
					}
					else if (func_279(&(Local_538.f_499[bParam0 /*6*/]), iParam1, Local_538.f_522.f_7, Local_538.f_522.f_10, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
					{
						func_413(bParam0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
						Local_538.f_522.f_6 = -1;
						Local_538.f_522.f_16 = { 0f, 0f, 0f };
						Local_538.f_522.f_7 = { 0f, 0f, 0f };
						Local_538.f_522.f_10 = 0f;
						Local_538.f_522.f_12 = 0;
						Local_538.f_522.f_11 = 0;
						Local_118.f_361 = 0;
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(NETWORK::NET_TO_VEH(Local_538.f_499[bParam0 /*6*/]), 30f);
						Local_538.f_544 = (Local_538.f_544 + 1f);
						return 1;
					}
				}
			}
			break;
		
		case 6:
			if (Local_538.f_522 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[Local_538.f_591]))
				{
					if (func_19(Local_538.f_35[Local_538.f_591]))
					{
						if (Local_538.f_522.f_6 == -1 || Local_538.f_522.f_6 == bParam0)
						{
							Local_538.f_522.f_6 = bParam0;
							if (Local_118.f_361 < 50)
							{
								if (func_131(Local_538.f_522.f_7))
								{
									iVar48 = func_409(Local_538.f_591);
									fVar47 = func_408(iVar48);
									if (func_131(Local_538.f_522.f_13))
									{
										if (iVar48 >= 0)
										{
											Local_538.f_522.f_13 = { func_407(iVar48) };
											uVar49 = func_406(iVar48);
											Local_538.f_522.f_19 = { 0f, 0f, uVar49 };
										}
									}
									if (!func_131(Local_538.f_522.f_13))
									{
										bVar50 = true;
										if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_538.f_35[Local_538.f_591]), true), Local_538.f_522.f_13, fVar47, &(Local_538.f_522.f_7)))
										{
											fVar51 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_538.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[Local_538.f_591]), false), true);
											if (fVar51 > 300f)
											{
												bVar50 = false;
											}
											if (!func_128(Local_538.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
											{
												bVar50 = false;
											}
											if (!bVar50)
											{
												Local_538.f_522.f_7 = { 0f, 0f, 0f };
												Local_538.f_522.f_13 = { 0f, 0f, 0f };
												Local_118.f_361++;
											}
											else
											{
												Local_538.f_522.f_10 = func_412(Local_538.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_538.f_35[Local_538.f_591]), true));
											}
										}
										else
										{
											Local_118.f_361++;
											func_411(&(Local_538.f_522.f_19));
											Local_538.f_522.f_13 = { func_405(Local_538.f_522.f_19) };
										}
									}
								}
							}
							else
							{
								if (func_131(Local_538.f_522.f_16))
								{
									Local_538.f_522.f_16 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[Local_538.f_591]), false) };
								}
								if (!func_131(Local_538.f_522.f_16))
								{
									Var52.f_4 = 1125515264;
									Var52.f_5 = 1;
									Var52.f_6 = 1;
									Var52.f_8 = 1082130432;
									Var52.f_9 = 1176255488;
									Var52.f_10 = 1;
									Var52.f_13 = 1;
									Var52.f_15 = 2;
									Var52.f_22 = 2;
									Var52.f_25 = 1;
									Var52.f_26 = 1;
									Var52.f_29 = 1123024896;
									Var52.f_30 = 1;
									if (func_404(Local_538.f_522.f_16, -1190,658f, -2196,359f, 12,1951f, 50f, 0))
									{
										Local_538.f_522.f_16 = { -962,3659f, -2148,924f, 7,879f };
										Var52.f_0 = 0f;
										Var52.f_1 = 0;
										Var52.f_4 = 75f;
										Var52.f_5 = 1;
										Var52.f_6 = 1;
										Var52.f_12 = 0;
										Var52.f_3 = 0;
									}
									else
									{
										Var52.f_0 = 100f;
										Var52.f_1 = 0;
										Var52.f_4 = 250f;
										Var52.f_5 = 0;
										Var52.f_6 = 1;
										Var52.f_12 = 0;
										Var52.f_3 = 0;
									}
									Var87 = { Local_538.f_522.f_16 };
									if (func_45(Local_538.f_522.f_16, Var87, iParam1, 0, &(Local_538.f_522.f_7), &(Local_538.f_522.f_10), &Var52))
									{
									}
								}
							}
							if (!func_131(Local_538.f_522.f_7))
							{
								if (func_279(&(Local_538.f_499[bParam0 /*6*/]), iParam1, Local_538.f_522.f_7, Local_538.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(bParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_538.f_522.f_6 = -1;
									Local_538.f_522.f_7 = { 0f, 0f, 0f };
									Local_538.f_522.f_13 = { 0f, 0f, 0f };
									Local_538.f_522.f_10 = 0f;
									Local_538.f_522.f_12 = 0;
									Local_538.f_522.f_11 = 0;
									Local_538.f_544 = (Local_538.f_544 + 1f);
									Local_118.f_361 = 0;
									MISC::CLEAR_BIT(&(Local_538.f_550), bParam0);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_404(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x1CCC0
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_405(struct<3> Param0)//Position - 0x1CD3B
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0)), SYSTEM::SIN(Param0.f_0);
}

float func_406(int iParam0)//Position - 0x1CD68
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = 317,5908f;
			break;
		
		case 1:
			fVar0 = 65,8782f;
			break;
		
		case 2:
			fVar0 = 79,6437f;
			break;
		
		case 3:
			fVar0 = 339,162f;
			break;
		
		case 4:
			fVar0 = 300,5366f;
			break;
		
		case 5:
			fVar0 = 26,3732f;
			break;
		
		case 6:
			fVar0 = 12,9312f;
			break;
		
		case 7:
			fVar0 = 306,5281f;
			break;
		
		case 8:
			fVar0 = 70,6314f;
			break;
		
		case 9:
			fVar0 = 199,4232f;
			break;
		
		case 10:
			fVar0 = 232,5371f;
			break;
		
		case 11:
			fVar0 = 217,9965f;
			break;
		
		case 12:
			fVar0 = 97,8555f;
			break;
		
		case 13:
			fVar0 = 254,7614f;
			break;
		
		case 14:
			fVar0 = 149,1127f;
			break;
		
		case 15:
			fVar0 = 299,9396f;
			break;
		
		case 16:
			fVar0 = 143,5423f;
			break;
		
		case 17:
			fVar0 = 153,6289f;
			break;
		
		case 18:
			fVar0 = 327,4365f;
			break;
		
		case 19:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

Vector3 func_407(int iParam0)//Position - 0x1CEB5
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = func_406(iParam0);
	Var1 = { func_405(0f, 0f, uVar0) };
	return Var1;
}

float func_408(int iParam0)//Position - 0x1CED5
{
	float fVar0;
	
	fVar0 = 225f;
	switch (iParam0)
	{
		case 16:
			fVar0 = 150f;
			break;
		
		case 19:
			fVar0 = 150f;
			break;
	}
	return fVar0;
}

bool func_409(bool bParam0)//Position - 0x1CF0D
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	bVar1 = -1;
	fVar2 = 1E+10f;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[bParam0]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[bParam0]), false) };
		bVar0 = false;
		while (bVar0 < 20)
		{
			Var7 = { func_410(func_10(), bVar0, Local_538.f_384, bParam0) };
			if (!func_131(Var7))
			{
				fVar3 = SYSTEM::VDIST2(Var4, Var7);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					bVar1 = bVar0;
				}
			}
			bVar0++;
		}
	}
	return bVar1;
}

Vector3 func_410(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1CF9D
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1299,452f, 262,6427f, 62,4118f };
							break;
						
						case 1:
							Var0 = { -695,6533f, 40,4916f, 42,2066f };
							break;
						
						case 2:
							Var0 = { -423,2495f, -333,4061f, 32,1091f };
							break;
						
						case 3:
							Var0 = { -811,9092f, -954,7036f, 14,3921f };
							break;
						
						case 4:
							Var0 = { -1398,584f, -458,2471f, 33,4826f };
							break;
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -369,0282f, -119,8091f, 37,7011f };
							break;
						
						case 1:
							Var0 = { 191,6113f, 295,0079f, 104,5737f };
							break;
						
						case 2:
							Var0 = { 46,4537f, -100,893f, 55,2574f };
							break;
						
						case 3:
							Var0 = { 274,1785f, 6,6766f, 78,2459f };
							break;
						
						case 4:
							Var0 = { -23,201f, -715,1903f, 31,3893f };
							break;
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -585,7718f, -754,8728f, 28,487f };
							break;
						
						case 1:
							Var0 = { -944,804f, -1526,43f, 4,0691f };
							break;
						
						case 2:
							Var0 = { -1192,996f, -730,683f, 19,8283f };
							break;
						
						case 3:
							Var0 = { 132,2173f, -1060,27f, 28,1924f };
							break;
						
						case 4:
							Var0 = { -832,2669f, -1267,991f, 4,0004f };
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 332,3376f, -1258,746f, 30,6282f };
							break;
						
						case 1:
							Var0 = { 1249,714f, -344,7008f, 68,0822f };
							break;
						
						case 2:
							Var0 = { 1240,689f, -1096,686f, 37,5253f };
							break;
						
						case 3:
							Var0 = { 1212,722f, -1764,765f, 39,0275f };
							break;
						
						case 4:
							Var0 = { 1108,78f, -781,7119f, 57,2627f };
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 186,5039f, -1675,689f, 28,5411f };
							break;
						
						case 1:
							Var0 = { -146,6724f, -1421,555f, 29,8175f };
							break;
						
						case 2:
							Var0 = { 444,3614f, -1754,799f, 27,8588f };
							break;
						
						case 3:
							Var0 = { -297,4062f, -2219,247f, 8,3765f };
							break;
						
						case 4:
							Var0 = { 585,7614f, -2808,511f, 5,0589f };
							break;
					}
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -449,1798f, 1587,87f, 358,0182f };
							break;
						
						case 1:
							Var0 = { -3225,118f, 1286,525f, 4,4326f };
							break;
						
						case 2:
							Var0 = { -1586,618f, 5206,799f, 3,0067f };
							break;
						
						case 3:
							Var0 = { 1310,94f, 4324,869f, 37,0952f };
							break;
						
						case 4:
							Var0 = { -2113,739f, 2836,921f, 31,8098f };
							break;
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { 3809,724f, 4462,729f, 3,2886f };
							break;
						
						case 1:
							Var0 = { 2482,591f, 1592,293f, 31,7203f };
							break;
						
						case 2:
							Var0 = { 1233,033f, 1915,367f, 76,9579f };
							break;
						
						case 3:
							Var0 = { 891,9604f, 3580,195f, 32,3722f };
							break;
						
						case 4:
							Var0 = { 3521,939f, 3726,971f, 35,4464f };
							break;
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { 2580,501f, 493,3184f, 107,4995f };
							break;
						
						case 1:
							Var0 = { 358,391f, 939,3512f, 204,4465f };
							break;
						
						case 2:
							Var0 = { 410,5613f, 2988,301f, 39,5277f };
							break;
						
						case 3:
							Var0 = { 2718,154f, 4314,578f, 45,8063f };
							break;
						
						case 4:
							Var0 = { 1681,848f, 2514,129f, 44,5649f };
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 1883,553f, -1038,177f, 77,9114f };
							break;
						
						case 1:
							Var0 = { 532,6779f, -175,9999f, 53,5182f };
							break;
						
						case 2:
							Var0 = { -1370,041f, 145,2471f, 55,1749f };
							break;
						
						case 3:
							Var0 = { -1843,174f, -1222,625f, 12,0172f };
							break;
						
						case 4:
							Var0 = { 496,9435f, -3309,341f, 5,0699f };
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 737,5259f, 1298,149f, 359,296f };
							break;
						
						case 1:
							Var0 = { 855,9249f, -2342,031f, 29,3313f };
							break;
						
						case 2:
							Var0 = { 2311,147f, -2101,435f, 4,7593f };
							break;
						
						case 3:
							Var0 = { 2332,73f, 2582,851f, 45,6677f };
							break;
						
						case 4:
							Var0 = { 2525,849f, -381,3248f, 91,9928f };
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -707,0764f, -120,0074f, 36,5922f };
							break;
						
						case 1:
							Var0 = { -1696,003f, -443,9459f, 40,2671f };
							break;
						
						case 2:
							Var0 = { -789,0488f, -402,33f, 34,9388f };
							break;
						
						case 3:
							Var0 = { -754,5149f, -1061,631f, 10,95f };
							break;
						
						case 4:
							Var0 = { -1674,866f, 404,3879f, 87,9936f };
							break;
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { 133,3449f, -372,5482f, 42,257f };
							break;
						
						case 1:
							Var0 = { 932,5692f, -4,6969f, 77,7649f };
							break;
						
						case 2:
							Var0 = { -133,423f, -26,4075f, 57,1028f };
							break;
						
						case 3:
							Var0 = { 50,0543f, -913,4272f, 28,8183f };
							break;
						
						case 4:
							Var0 = { 225,4608f, -29,0171f, 68,7371f };
							break;
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -299,8723f, -617,105f, 32,4082f };
							break;
						
						case 1:
							Var0 = { -549,9492f, -902,8572f, 22,8788f };
							break;
						
						case 2:
							Var0 = { -15,4556f, -1087,453f, 25,6721f };
							break;
						
						case 3:
							Var0 = { -1039,15f, -1592,79f, 3,8447f };
							break;
						
						case 4:
							Var0 = { -871,0274f, -224,0974f, 38,4019f };
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 318,3301f, -179,1691f, 56,6632f };
							break;
						
						case 1:
							Var0 = { 164,1423f, -1282,765f, 28,2341f };
							break;
						
						case 2:
							Var0 = { 1189,492f, -1382,987f, 34,1077f };
							break;
						
						case 3:
							Var0 = { 1002,124f, -1856,855f, 29,8898f };
							break;
						
						case 4:
							Var0 = { 1153,555f, -469,6292f, 65,5486f };
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 234,9748f, -1772,652f, 27,6514f };
							break;
						
						case 1:
							Var0 = { 429,9525f, -1519,895f, 28,3023f };
							break;
						
						case 2:
							Var0 = { 64,8993f, -1416,897f, 28,3117f };
							break;
						
						case 3:
							Var0 = { -692,3597f, -2287,157f, 11,9528f };
							break;
						
						case 4:
							Var0 = { 662,7217f, -2672,821f, 5,0812f };
							break;
					}
					break;
			}
			break;
		
		case 9:
			switch (func_348())
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1700,735f, 3275,532f, 40,1501f };
							break;
						
						case 1:
							Var0 = { -12,182f, 3040,162f, 39,806f };
							break;
						
						case 2:
							Var0 = { -2106,702f, 2623,127f, 0,1216f };
							break;
						
						case 3:
							Var0 = { 214,3879f, 2455,856f, 55,6948f };
							break;
						
						case 4:
							Var0 = { 2124,389f, 2907,424f, 46,5752f };
							break;
					}
					break;
				
				case 1:
				case 7:
					switch (bParam3)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1700,735f, 3275,532f, 40,1501f };
									break;
								
								case 1:
									Var0 = { -12,182f, 3040,162f, 39,806f };
									break;
								
								case 2:
									Var0 = { -2106,702f, 2623,127f, 0,1216f };
									break;
								
								case 3:
									Var0 = { 214,3879f, 2455,856f, 55,6948f };
									break;
								
								case 4:
									Var0 = { 2124,389f, 2907,424f, 46,5752f };
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1717,141f, 3263,154f, 40,1444f };
									break;
								
								case 1:
									Var0 = { -3,0926f, 3021,231f, 39,6635f };
									break;
								
								case 2:
									Var0 = { -2116,218f, 2673,74f, 1,8178f };
									break;
								
								case 3:
									Var0 = { 217,964f, 2436,037f, 57,85f };
									break;
								
								case 4:
									Var0 = { 2101,716f, 2916,395f, 46,8035f };
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1693,036f, 3244,896f, 39,8872f };
									break;
								
								case 1:
									Var0 = { 22,1065f, 3048,683f, 39,9493f };
									break;
								
								case 2:
									Var0 = { -2108,359f, 2643,392f, 2,1806f };
									break;
								
								case 3:
									Var0 = { 229,8819f, 2455,856f, 54,7963f };
									break;
								
								case 4:
									Var0 = { 2137,322f, 2873,328f, 45,837f };
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1693,036f, 3244,896f, 39,8872f };
							break;
						
						case 1:
							Var0 = { 22,1065f, 3048,683f, 39,9493f };
							break;
						
						case 2:
							Var0 = { -2108,359f, 2643,392f, 2,1806f };
							break;
						
						case 3:
							Var0 = { 229,8819f, 2455,856f, 54,7963f };
							break;
						
						case 4:
							Var0 = { 2137,322f, 2873,328f, 45,837f };
							break;
					}
					break;
			}
			break;
		
		case 8:
		case 7:
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -670,0045f, 849,1271f, 224,0524f };
							break;
						
						case 1:
							Var0 = { -400,403f, 876,396f, 230,2865f };
							break;
						
						case 2:
							Var0 = { -874,7065f, -25,0867f, 40,7714f };
							break;
						
						case 3:
							Var0 = { -537,2419f, 615,7321f, 136,7603f };
							break;
						
						case 4:
							Var0 = { -2174,372f, -408,0548f, 12,2911f };
							break;
						
						case 5:
							Var0 = { -1554,388f, 840,493f, 181,9932f };
							break;
						
						case 6:
							Var0 = { -1940,993f, 1787,986f, 172,0708f };
							break;
						
						case 7:
							Var0 = { -3015,475f, 91,9937f, 10,6141f };
							break;
						
						case 8:
							Var0 = { -3174,391f, 1108,541f, 19,8395f };
							break;
						
						case 9:
							Var0 = { -1731,302f, -194,1319f, 57,2888f };
							break;
						
						case 10:
							Var0 = { -2198,402f, 4260,813f, 47,0475f };
							break;
						
						case 11:
							Var0 = { -187,4784f, 1554,445f, 321,2434f };
							break;
						
						case 12:
							Var0 = { -2015,946f, 597,9245f, 116,7153f };
							break;
						
						case 13:
							Var0 = { 163,7828f, 474,4106f, 141,2679f };
							break;
						
						case 14:
							Var0 = { -1609,788f, -816,7905f, 9,0389f };
							break;
						
						case 15:
							Var0 = { -36,5543f, 3023,273f, 39,906f };
							break;
						
						case 16:
							Var0 = { -2817,479f, 2320,174f, 1,6076f };
							break;
						
						case 17:
							Var0 = { -220,7927f, 3662,056f, 63,4125f };
							break;
						
						case 18:
							Var0 = { -2512,163f, 3610,042f, 12,7256f };
							break;
						
						case 19:
							Var0 = { -1603,872f, 3092,417f, 31,5661f };
							break;
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -381,3748f, 282,9188f, 83,8448f };
							break;
						
						case 1:
							Var0 = { -106,229f, 909,09f, 235,2054f };
							break;
						
						case 2:
							Var0 = { -59,7287f, 1958,52f, 189,1861f };
							break;
						
						case 3:
							Var0 = { 1101,413f, 2122,263f, 52,4739f };
							break;
						
						case 4:
							Var0 = { 1213,987f, 2655,706f, 36,81f };
							break;
						
						case 5:
							Var0 = { -1513,631f, 1495,125f, 114,6609f };
							break;
						
						case 6:
							Var0 = { 659,1781f, 603,3151f, 128,0561f };
							break;
						
						case 7:
							Var0 = { 79,8783f, -432,2236f, 36,553f };
							break;
						
						case 8:
							Var0 = { -285,1832f, 2546,966f, 73,0644f };
							break;
						
						case 9:
							Var0 = { -1549,607f, 118,4193f, 55,6403f };
							break;
						
						case 10:
							Var0 = { -512,8932f, 1184,815f, 323,9306f };
							break;
						
						case 11:
							Var0 = { 2447,034f, 1583,661f, 31,7203f };
							break;
						
						case 12:
							Var0 = { 2695,286f, 2768,691f, 36,883f };
							break;
						
						case 13:
							Var0 = { 2100,727f, 2332,267f, 93,2854f };
							break;
						
						case 14:
							Var0 = { -877,3867f, -38,4123f, 37,7636f };
							break;
						
						case 15:
							Var0 = { 1458,147f, 1113,403f, 113,334f };
							break;
						
						case 16:
							Var0 = { -1161,019f, 933,2432f, 196,7478f };
							break;
						
						case 17:
							Var0 = { 770,8779f, -233,7807f, 65,1145f };
							break;
						
						case 18:
							Var0 = { 2178,225f, 3314,676f, 45,0137f };
							break;
						
						case 19:
							Var0 = { 705,1279f, 3121,097f, 42,8557f };
							break;
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { 56,9063f, 3715,503f, 38,7549f };
							break;
						
						case 1:
							Var0 = { 982,8329f, 3587,869f, 32,5401f };
							break;
						
						case 2:
							Var0 = { 1941,305f, 3826,197f, 30,91f };
							break;
						
						case 3:
							Var0 = { 2932,435f, 4307,926f, 49,8501f };
							break;
						
						case 4:
							Var0 = { -2093,322f, 2623,675f, 0,1029f };
							break;
						
						case 5:
							Var0 = { -1911,57f, 2047,298f, 139,7377f };
							break;
						
						case 6:
							Var0 = { 741,1844f, 2568,981f, 74,6179f };
							break;
						
						case 7:
							Var0 = { 2333,234f, 2553,385f, 45,6677f };
							break;
						
						case 8:
							Var0 = { -299,0912f, 2834,353f, 56,3827f };
							break;
						
						case 9:
							Var0 = { -2821,048f, 1423,333f, 99,8296f };
							break;
						
						case 10:
							Var0 = { 1800,979f, 4611,315f, 36,1828f };
							break;
						
						case 11:
							Var0 = { 2615,021f, 3263,901f, 54,2129f };
							break;
						
						case 12:
							Var0 = { 1735,609f, 3039,561f, 60,1301f };
							break;
						
						case 13:
							Var0 = { 1337,261f, 4372,085f, 43,3327f };
							break;
						
						case 14:
							Var0 = { 787,413f, 4199,005f, 42,0116f };
							break;
						
						case 15:
							Var0 = { 519,8339f, 3076,235f, 39,2289f };
							break;
						
						case 16:
							Var0 = { 1373,727f, 2172,662f, 96,7173f };
							break;
						
						case 17:
							Var0 = { 2484,979f, 4118,685f, 37,0647f };
							break;
						
						case 18:
							Var0 = { 2378,74f, 5052,728f, 45,4446f };
							break;
						
						case 19:
							Var0 = { -255,3838f, 2194,551f, 128,7711f };
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 1518,801f, 785,9623f, 76,4403f };
							break;
						
						case 1:
							Var0 = { 1581,077f, 2165,04f, 78,3579f };
							break;
						
						case 2:
							Var0 = { 2527,621f, 2632,557f, 36,9449f };
							break;
						
						case 3:
							Var0 = { 2709,996f, 4145,588f, 42,7586f };
							break;
						
						case 4:
							Var0 = { 1080,862f, -693,2229f, 56,9129f };
							break;
						
						case 5:
							Var0 = { 2126,975f, 4795,901f, 40,1411f };
							break;
						
						case 6:
							Var0 = { 714,4439f, 4174,895f, 39,7092f };
							break;
						
						case 7:
							Var0 = { -200,5495f, 3661,389f, 50,7431f };
							break;
						
						case 8:
							Var0 = { -589,3684f, 5303,475f, 69,2145f };
							break;
						
						case 9:
							Var0 = { -1150,776f, 4924,217f, 220,44f };
							break;
						
						case 10:
							Var0 = { 381,9156f, 3559,266f, 32,7679f };
							break;
						
						case 11:
							Var0 = { 1752,881f, 3322,908f, 40,1889f };
							break;
						
						case 12:
							Var0 = { 1422,619f, 4382,753f, 42,9035f };
							break;
						
						case 13:
							Var0 = { 1830,393f, 3834,776f, 32,322f };
							break;
						
						case 14:
							Var0 = { 1054,493f, 2669,53f, 38,5525f };
							break;
						
						case 15:
							Var0 = { 2719,419f, 3510,76f, 60,526f };
							break;
						
						case 16:
							Var0 = { -691,6814f, 5774,155f, 16,331f };
							break;
						
						case 17:
							Var0 = { 1123,888f, 3589,888f, 30,4069f };
							break;
						
						case 18:
							Var0 = { -89,1929f, 6132,037f, 29,3863f };
							break;
						
						case 19:
							Var0 = { 357,4159f, 4442,63f, 61,914f };
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { -2531,017f, 2329,048f, 32,0599f };
							break;
						
						case 1:
							Var0 = { -1114,902f, 2707,805f, 22,8413f };
							break;
						
						case 2:
							Var0 = { 182,5478f, 3056,533f, 42,0161f };
							break;
						
						case 3:
							Var0 = { 1563,959f, 3572,568f, 32,76f };
							break;
						
						case 4:
							Var0 = { 2530,204f, 4207,563f, 39,0731f };
							break;
						
						case 5:
							Var0 = { -1602,434f, 235,0285f, 58,3189f };
							break;
						
						case 6:
							Var0 = { -65,4509f, 1895,882f, 195,0575f };
							break;
						
						case 7:
							Var0 = { 667,8909f, 1279,831f, 359,296f };
							break;
						
						case 8:
							Var0 = { 2674,628f, 1453,696f, 23,5008f };
							break;
						
						case 9:
							Var0 = { 2941,702f, 2781,825f, 38,5054f };
							break;
						
						case 10:
							Var0 = { 892,1917f, 3649,88f, 31,8108f };
							break;
						
						case 11:
							Var0 = { 1336,44f, 2751,43f, 50,5583f };
							break;
						
						case 12:
							Var0 = { 2382,11f, 3051,253f, 47,1529f };
							break;
						
						case 13:
							Var0 = { 1945,158f, 4623,212f, 39,4508f };
							break;
						
						case 14:
							Var0 = { -221,1028f, 1006,303f, 231,3454f };
							break;
						
						case 15:
							Var0 = { -682,4611f, 535,6774f, 109,7483f };
							break;
						
						case 16:
							Var0 = { 1215,716f, 1871,846f, 77,9239f };
							break;
						
						case 17:
							Var0 = { 2962,188f, 3482,686f, 70,3452f };
							break;
						
						case 18:
							Var0 = { 2131,371f, 1937,693f, 92,7868f };
							break;
						
						case 19:
							Var0 = { -3196,841f, 1307,077f, 22,8526f };
							break;
					}
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					Var0 = { -3006,451f, -1739,208f, 0,375f };
					break;
				
				case 1:
					Var0 = { 362,5889f, -4226,308f, 0f };
					break;
				
				case 2:
					Var0 = { -1197,301f, -4122,952f, 0f };
					break;
				
				case 3:
					Var0 = { 3183,194f, -3334,239f, 0,7499f };
					break;
				
				case 4:
					Var0 = { 2231,863f, -4262,798f, 0f };
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					Var0 = { 1141,957f, -4341,856f, 0f };
					break;
				
				case 1:
					Var0 = { 2548,961f, -3486,992f, 0,375f };
					break;
				
				case 2:
					Var0 = { -2044,753f, -4092,995f, 0f };
					break;
				
				case 3:
					Var0 = { -2793,705f, -2629,224f, 0,75f };
					break;
				
				case 4:
					Var0 = { -401,409f, -4391,101f, 0f };
					break;
			}
			break;
		
		default:
			switch (bParam3)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1143,777f, -2223,181f, 12,1958f };
							break;
						
						case 1:
							Var0 = { -815,8469f, -771,4702f, 20,0395f };
							break;
						
						case 2:
							Var0 = { -247,3628f, -252,8104f, 35,519f };
							break;
						
						case 3:
							Var0 = { -20,1711f, -196,9198f, 51,3703f };
							break;
						
						case 4:
							Var0 = { -1206,244f, 332,5545f, 69,9894f };
							break;
						
						case 5:
							Var0 = { -737,7712f, -271,9272f, 35,9486f };
							break;
						
						case 6:
							Var0 = { -10,6554f, -1032,781f, 27,9804f };
							break;
						
						case 7:
							Var0 = { 203,926f, -1469,377f, 28,1446f };
							break;
						
						case 8:
							Var0 = { 1242,214f, -3156,207f, 4,5283f };
							break;
						
						case 9:
							Var0 = { -3157,448f, 1127,872f, 19,844f };
							break;
						
						case 10:
							Var0 = { -1805,809f, -406,731f, 43,6066f };
							break;
						
						case 11:
							Var0 = { -2091,808f, -295,2459f, 12,0469f };
							break;
						
						case 12:
							Var0 = { 1499,64f, -1888,19f, 70,8845f };
							break;
						
						case 13:
							Var0 = { 521,9511f, -2731,876f, 5,0571f };
							break;
						
						case 14:
							Var0 = { 620,4022f, 193,6013f, 97,381f };
							break;
						
						case 15:
							Var0 = { -2190,606f, -414,4555f, 12,1441f };
							break;
						
						case 16:
							Var0 = { 2528,09f, -311,8917f, 91,9929f };
							break;
						
						case 17:
							Var0 = { 1475,093f, 1140,771f, 113,3343f };
							break;
						
						case 18:
							Var0 = { -164,1015f, 976,5763f, 234,9009f };
							break;
						
						case 19:
							Var0 = { -125,636f, -2244,66f, 6,8117f };
							break;
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1133,386f, -2229,273f, 12,1957f };
							break;
						
						case 1:
							Var0 = { -834,9979f, -771,7531f, 20,0186f };
							break;
						
						case 2:
							Var0 = { -242,6335f, -240,8987f, 35,519f };
							break;
						
						case 3:
							Var0 = { 1,871f, -202,816f, 51,742f };
							break;
						
						case 4:
							Var0 = { -1208,844f, 340,3609f, 70,0006f };
							break;
						
						case 5:
							Var0 = { -727,7335f, -287,528f, 35,9482f };
							break;
						
						case 6:
							Var0 = { -28,01f, -1030,556f, 27,8435f };
							break;
						
						case 7:
							Var0 = { 190,617f, -1454,129f, 28,1416f };
							break;
						
						case 8:
							Var0 = { 1242,088f, -3148,675f, 4,5282f };
							break;
						
						case 9:
							Var0 = { -3170,323f, 1126,011f, 19,9681f };
							break;
						
						case 10:
							Var0 = { -1792,41f, -394,6852f, 44,0166f };
							break;
						
						case 11:
							Var0 = { -2104,064f, -294,0901f, 12,0469f };
							break;
						
						case 12:
							Var0 = { 1458,824f, -1937,281f, 70,3057f };
							break;
						
						case 13:
							Var0 = { 529,5776f, -2736,348f, 5,0569f };
							break;
						
						case 14:
							Var0 = { 602,5372f, 147,507f, 97,0363f };
							break;
						
						case 15:
							Var0 = { -2189,286f, -384,7161f, 12,3121f };
							break;
						
						case 16:
							Var0 = { 2490,019f, -332,8641f, 91,9927f };
							break;
						
						case 17:
							Var0 = { 1481,655f, 1140,735f, 113,3343f };
							break;
						
						case 18:
							Var0 = { -130,6895f, 1005,831f, 234,732f };
							break;
						
						case 19:
							Var0 = { -125,1937f, -2249,124f, 6,8117f };
							break;
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1190,658f, -2196,359f, 12,1951f };
							break;
						
						case 1:
							Var0 = { -810,0179f, -747,1166f, 22,3082f };
							break;
						
						case 2:
							Var0 = { -243,9944f, -218,211f, 35,519f };
							break;
						
						case 3:
							Var0 = { -47,888f, -188,9245f, 51,1469f };
							break;
						
						case 4:
							Var0 = { -1194,665f, 323,0352f, 69,7224f };
							break;
						
						case 5:
							Var0 = { -703,6254f, -299,056f, 35,6984f };
							break;
						
						case 6:
							Var0 = { -20,652f, -1017,787f, 27,9166f };
							break;
						
						case 7:
							Var0 = { 182,8745f, -1485,711f, 28,1416f };
							break;
						
						case 8:
							Var0 = { 1242,467f, -3142,34f, 4,5282f };
							break;
						
						case 9:
							Var0 = { -3183,809f, 1088,898f, 19,8407f };
							break;
						
						case 10:
							Var0 = { -1784,578f, -378,8281f, 43,9675f };
							break;
						
						case 11:
							Var0 = { -2077,491f, -336,0633f, 12,1576f };
							break;
						
						case 12:
							Var0 = { 1484,176f, -1923,298f, 70,2404f };
							break;
						
						case 13:
							Var0 = { 492,0316f, -2718,325f, 5,0576f };
							break;
						
						case 14:
							Var0 = { 611,6172f, 168,9255f, 97,2794f };
							break;
						
						case 15:
							Var0 = { -2205,85f, -370,1107f, 12,283f };
							break;
						
						case 16:
							Var0 = { 2527,898f, -307,077f, 91,9929f };
							break;
						
						case 17:
							Var0 = { 1497,473f, 1130,526f, 113,3343f };
							break;
						
						case 18:
							Var0 = { -105,4721f, 1004,142f, 234,7601f };
							break;
						
						case 19:
							Var0 = { -125,1227f, -2253,726f, 6,8117f };
							break;
					}
					break;
			}
			break;
	}
	return Var0;
}

void func_411(var uParam0)//Position - 0x1EF85
{
	Local_538.f_522.f_12++;
	if (Local_538.f_522.f_12 < 5)
	{
		switch (Local_538.f_522.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_538.f_522.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

float func_412(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x1F040
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_413(int iParam0)//Position - 0x1F05A
{
	int iVar0;
	
	iVar0 = NETWORK::NET_TO_VEH(Local_538.f_499[iParam0 /*6*/]);
	if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, false);
	}
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, true);
	VEHICLE::_0xDBC631F109350B8C(iVar0, true);
	if (func_384() || func_11())
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("huntley"))
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iVar0, 0);
		}
	}
	else if (func_12() || (func_215() && func_37(8)))
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar0);
		ENTITY::SET_ENTITY_DYNAMIC(iVar0, true);
		PHYSICS::ACTIVATE_PHYSICS(iVar0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, true);
		if (func_37(8))
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_space_rocket"), iVar0, 0);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("weapon_vehicle_rocket"), iVar0, 0);
		}
	}
}

int func_414(struct<3> Param0)//Position - 0x1F12E
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { Param0 + Vector(100f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, false, false))
	{
		if (Param0.f_2 > fVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_415(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1F167
{
	struct<3> Var0;
	
	if (bParam3)
	{
		*uParam1 = { func_416(ENTITY::GET_ENTITY_COORDS(iParam0, true), 50f, (50f * 1,5f), 10f) };
	}
	else
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, 120f, 0f) };
		*uParam1 = { func_416(Var0, 25f, 50f, 10f) };
	}
	*uParam2 = func_412(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true));
}

Vector3 func_416(struct<3> Param0, float fParam3, float fParam4, float fParam5)//Position - 0x1F1E4
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_417(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_417(struct<3> Param0, float fParam3)//Position - 0x1F22D
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

float func_418()//Position - 0x1F264
{
	if (func_12())
	{
		return 75f;
	}
	return 75f;
}

void func_419(int iParam0, var uParam1, var uParam2)//Position - 0x1F280
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar3 = func_418();
	*uParam1 = { func_416(Var0, 100f, 200f, fVar3) };
	uParam1->f_2 = fVar3;
	*uParam2 = func_412(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true));
}

int func_420()//Position - 0x1F2C9
{
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("seashark");
			}
			break;
		
		case 5:
		case 6:
			return Local_538.f_545;
			break;
		
		case 11:
			if (Local_538.f_544 <= 1f)
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("valkyrie");
			}
			break;
	}
	return 0;
}

int func_421()//Position - 0x1F33F
{
	if (func_190() != 0)
	{
		return 0;
	}
	if (((func_215() || func_384()) || func_12()) || func_11())
	{
		if (Local_538.f_544 >= IntToFloat(func_425()))
		{
			return 0;
		}
	}
	if (func_5(&(Local_538.f_520)))
	{
		if (!func_187(&(Local_538.f_520), 3000, 0))
		{
			return 0;
		}
	}
	if (func_424())
	{
		if (func_37(9))
		{
			return 1;
		}
	}
	if (func_37(18))
	{
		if (func_384())
		{
			if (func_5(&(Local_538.f_518)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (func_12())
	{
		if (Local_538.f_544 < 3f)
		{
			return 1;
		}
	}
	if (func_11())
	{
		if (func_5(&(Local_538.f_518)))
		{
			return 0;
		}
		if (Local_538.f_56 >= func_422())
		{
			if (func_385())
			{
				if (!func_2259(1))
				{
					Local_538.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
					func_24(1);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_422()//Position - 0x1F44A
{
	switch (Local_538.f_582)
	{
		case 0:
			return func_423();
			break;
		
		case 1:
			return func_423() * 2;
			break;
		
		case 2:
			return func_423();
			break;
		
		case 3:
			return func_423();
			break;
		
		case 4:
			return func_423();
			break;
		
		case 5:
			return func_423() * 2;
			break;
		
		case 6:
		case 7:
			return func_423() * 3;
			break;
	}
	return -1;
}

int func_423()//Position - 0x1F4DA
{
	switch (func_10())
	{
		case 8:
		case 11:
		case 7:
			if (Global_1946098 <= 4)
			{
				return 3;
			}
			else if (Global_1946098 <= 9)
			{
				return 6;
			}
			else
			{
				return 10;
			}
			break;
		
		case 1:
		case 2:
		case 10:
			return 5;
	}
	return 1;
}

int func_424()//Position - 0x1F53B
{
	if ((func_37(10) || func_37(11)) || func_37(12))
	{
		return 1;
	}
	return 0;
}

int func_425()//Position - 0x1F569
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar1 = 3;
	}
	if (func_215())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16778;
				break;
			
			case 2:
				iVar0 = Global_262145.f_16777;
				break;
			
			case 3:
				iVar0 = Global_262145.f_16776;
				break;
			
			default:
				iVar0 = Global_262145.f_16778;
				break;
			}
	}
	if (func_384())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16775 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16774 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16773 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	if (func_12())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16757;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16756;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16755;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			
			default:
				iVar0 = 3;
				break;
			}
	}
	if (func_11())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16772 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16771 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16770 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

void func_426()//Position - 0x1F72A
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (func_212())
	{
		bVar2 = false;
		while (bVar2 < func_210())
		{
			func_441(bVar2);
			switch (func_440(bVar2))
			{
				case 0:
					break;
				
				case 1:
					if (func_207(bVar2))
					{
						func_389(bVar2, 2);
					}
					break;
				
				case 2:
					if (func_207(bVar2))
					{
						switch (func_10())
						{
							case 13:
							case 9:
								if (!ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
								{
									if (func_37(6))
									{
										func_389(bVar2, func_438(bVar2));
									}
								}
								else
								{
									if (!func_37(6))
									{
										func_34(6);
									}
									func_389(bVar2, 18);
								}
								break;
							
							case 12:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									func_389(bVar2, func_438(bVar2));
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							
							case 5:
							case 6:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									func_389(bVar2, func_438(bVar2));
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							
							case 11:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									if (BitTest(Local_538.f_549, func_437(bVar2)))
									{
										func_389(bVar2, func_438(bVar2));
									}
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							}
					}
					break;
				
				case 6:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(bVar2);
							}
							if (BitTest(Local_538.f_548, bVar2))
							{
								func_389(bVar2, 14);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(bVar2, 12);
								}
							}
						}
					}
					break;
				
				case 9:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(bVar2);
							}
							if (func_12())
							{
								if (func_429())
								{
									func_389(bVar2, 13);
								}
							}
							if (BitTest(Local_538.f_548, bVar2))
							{
								func_389(bVar2, 14);
							}
						}
					}
					break;
				
				case 8:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if ((func_215() || func_384()) || func_12())
							{
								func_431(bVar2);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(bVar2, 13);
								}
								else if (func_428(bVar2))
								{
									if (func_427(bVar2, &uVar1, 1132068864))
									{
										Local_538.f_591 = uVar1;
										func_389(bVar2, 9);
									}
								}
							}
							if (func_11())
							{
								bVar0 = func_437(bVar2);
								if (bVar0 > -1)
								{
									if (BitTest(Local_538.f_550, bVar0))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(func_197(bVar2), false))
										{
											func_389(bVar2, 17);
										}
									}
								}
							}
						}
					}
					break;
				
				case 12:
					break;
				
				case 13:
					break;
				
				case 17:
					if (func_11())
					{
						if (func_207(bVar2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(func_197(bVar2), false))
								{
									func_389(bVar2, 8);
								}
							}
						}
					}
					break;
				
				case 14:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_372() > 1)
							{
								func_389(bVar2, 10);
							}
							func_431(bVar2);
						}
					}
					break;
				
				case 15:
					break;
				
				case 16:
					break;
				
				case 18:
					break;
				
				case 19:
					break;
			}
			bVar2++;
		}
	}
}

int func_427(bool bParam0, var uParam1, float fParam2)//Position - 0x1FAFF
{
	float fVar0;
	int iVar1;
	
	fVar0 = (fParam2 * fParam2);
	iVar1 = 0;
	while (iVar1 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[iVar1]))
		{
			if (func_19(Local_538.f_35[iVar1]))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_538.f_35[iVar1]), -1, false) != 0)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_538.f_400[bParam0 /*8*/]), false), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_538.f_35[iVar1]), true)) <= fVar0)
					{
						*uParam1 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_428(bool bParam0)//Position - 0x1FB93
{
	if (func_12())
	{
		switch (bParam0)
		{
			case 0:
			case 4:
			case 8:
				return 1;
			}
		
		default:
	}
	return 0;
}

bool func_429()//Position - 0x1FBC0
{
	return func_430() == func_422();
}

int func_430()//Position - 0x1FBD1
{
	return Local_538.f_56;
}

void func_431(bool bParam0)//Position - 0x1FBDE
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	
	fVar0 = func_436();
	fVar1 = func_435();
	iVar3 = func_434(bParam0, &bVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (!BitTest(Local_538.f_547, bParam0))
		{
			if (func_433(func_439(bParam0), iVar3, 1) > fVar0)
			{
				MISC::SET_BIT(&(Local_538.f_547), bParam0);
			}
			else if (func_433(func_439(bParam0), iVar3, 1) > fVar1)
			{
				if (!func_5(&(Local_538.f_400[bParam0 /*8*/].f_6)))
				{
					func_4(&(Local_538.f_400[bParam0 /*8*/].f_6), 0, 0);
				}
				else if (func_187(&(Local_538.f_400[bParam0 /*8*/].f_6), func_432(), 0))
				{
					MISC::SET_BIT(&(Local_538.f_547), bParam0);
				}
			}
			else if (func_5(&(Local_538.f_400[bParam0 /*8*/].f_6)))
			{
				func_201(&(Local_538.f_400[bParam0 /*8*/].f_6));
			}
		}
		if (func_384())
		{
			if (!BitTest(Local_538.f_547, bParam0))
			{
				if (!BitTest(Local_538.f_548, bParam0))
				{
					if (Local_538.f_71[bVar2] >= 0)
					{
						Var4 = { func_410(func_10(), Local_538.f_71[bVar2], Local_538.f_384, bVar2) };
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_439(bParam0), false), Var4, true);
						if (fVar7 < 100f)
						{
							MISC::SET_BIT(&(Local_538.f_548), bParam0);
						}
					}
				}
			}
		}
		else if (func_12())
		{
			if (!BitTest(Local_538.f_547, bParam0))
			{
				if (!BitTest(Local_538.f_548, bParam0))
				{
					if (func_430() == (func_422() - 1))
					{
						if (Local_538.f_71[bVar2] >= 0)
						{
							Var4 = { func_410(func_10(), Local_538.f_71[bVar2], Local_538.f_384, bVar2) };
							fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_439(bParam0), false), Var4, true);
							if (fVar8 < 100f)
							{
								MISC::SET_BIT(&(Local_538.f_548), bParam0);
							}
						}
					}
				}
			}
		}
	}
}

int func_432()//Position - 0x1FDBA
{
	if (func_12())
	{
		return 100000;
	}
	return 10000;
}

float func_433(int iParam0, int iParam1, bool bParam2)//Position - 0x1FDD3
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_434(bool bParam0, var uParam1)//Position - 0x1FE31
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 9999,99f;
	iVar3 = -1;
	if (func_385())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(iVar0)))
			{
				fVar2 = func_433(NETWORK::NET_TO_PED(Local_538.f_400[bParam0 /*8*/]), func_40(iVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_40(iVar0);
					*uParam1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar3 = func_40(0);
		*uParam1 = 0;
	}
	return iVar3;
}

float func_435()//Position - 0x1FEB0
{
	if (func_12())
	{
		return 1000f;
	}
	return 200f;
}

float func_436()//Position - 0x1FECC
{
	if (func_12())
	{
		return 2000f;
	}
	return 400f;
}

int func_437(bool bParam0)//Position - 0x1FEE8
{
	switch (func_10())
	{
		case 11:
			switch (bParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
				
				case 4:
				case 5:
				case 6:
				case 7:
					return 1;
				
				case 8:
				case 9:
				case 10:
				case 11:
					return 2;
				
				default:
			}
			break;
		
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
						case 3:
							return 1;
							break;
					}
					break;
				
				case 6:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
							return 0;
						
						case 3:
						case 4:
						case 5:
							return 1;
							break;
					}
					break;
				
				case 8:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return 0;
						
						case 4:
						case 5:
						case 6:
						case 7:
							return 1;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_438(bool bParam0)//Position - 0x2004A
{
	var uVar0;
	
	switch (func_10())
	{
		case 13:
		case 9:
		case 6:
			return 8;
		
		case 12:
			if (func_37(8))
			{
				switch (bParam0)
				{
					case 0:
						return 9;
					
					case 1:
					case 2:
					case 3:
						return 8;
					
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
					case 2:
						return 6;
					
					case 1:
					case 3:
						return 8;
					}
				
				default:
			}
			break;
		
		case 5:
			switch (bParam0)
			{
				case 0:
				case 2:
					return 6;
				
				case 1:
				case 3:
					return 8;
				
				default:
			}
			break;
		
		case 11:
			switch (bParam0)
			{
				case 0:
				case 4:
				case 8:
					if (func_427(bParam0, &uVar0, 600f))
					{
						Local_538.f_591 = uVar0;
						return 9;
					}
					else
					{
						return 8;
					}
					break;
				
				case 1:
				case 2:
				case 3:
				case 5:
				case 6:
				case 7:
				case 9:
				case 10:
				case 11:
					return 8;
			}
			break;
	}
	return 2;
}

int func_439(bool bParam0)//Position - 0x2018F
{
	if (func_207(bParam0))
	{
		return NETWORK::NET_TO_ENT(Local_538.f_400[bParam0 /*8*/]);
	}
	return 0;
}

int func_440(bool bParam0)//Position - 0x201B2
{
	return Local_538.f_400[bParam0 /*8*/].f_5;
}

void func_441(bool bParam0)//Position - 0x201C6
{
	if (!func_11())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_400[bParam0 /*8*/]))
	{
		if (func_442(Local_538.f_400[bParam0 /*8*/]))
		{
			if (!BitTest(Local_538.f_497, bParam0))
			{
				MISC::SET_BIT(&(Local_538.f_497), bParam0);
				Local_538.f_498++;
			}
		}
		else if (BitTest(Local_538.f_497, bParam0))
		{
			MISC::CLEAR_BIT(&(Local_538.f_497), bParam0);
		}
	}
	else if (BitTest(Local_538.f_497, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_538.f_497), bParam0);
	}
}

int func_442(int iParam0)//Position - 0x20258
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_443()//Position - 0x20277
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_41(bVar0))
		{
			if (!func_37(17))
			{
				if (func_274())
				{
					if (func_445(bVar0))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(func_40(bVar0)))
						{
							if (!func_5(&(Local_538.f_562[bVar0 /*2*/])))
							{
								func_4(&(Local_538.f_562[bVar0 /*2*/]), 0, 0);
							}
							else if (func_187(&(Local_538.f_562[bVar0 /*2*/]), func_444(), 0))
							{
								func_34(17);
							}
						}
						else if (func_5(&(Local_538.f_562[bVar0 /*2*/])))
						{
							func_201(&(Local_538.f_562[bVar0 /*2*/]));
						}
					}
				}
			}
		}
		bVar0++;
	}
}

int func_444()//Position - 0x20328
{
	return 120000;
}

int func_445(bool bParam0)//Position - 0x20334
{
	if (func_446(func_40(bParam0), Local_538.f_10[bParam0 /*3*/], 1) > 10f)
	{
		return 1;
	}
	if (func_433(PLAYER::PLAYER_PED_ID(), func_40(bParam0), 1) < 100f)
	{
		return 1;
	}
	switch (bParam0)
	{
		case 0:
			if (func_37(10))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_37(11))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(12))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_446(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x203C5
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_447()//Position - 0x203FF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_385())
	{
		bVar1 = false;
		while (bVar1 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(bVar1)) && !func_185(bVar1))
			{
				func_448(func_40(bVar1), bVar1, &iVar0);
				if (Local_538.f_71[bVar1] != iVar0)
				{
					Local_538.f_71[bVar1] = iVar0;
				}
				iVar0 = 0;
			}
			bVar1++;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_40(0)))
	{
		func_448(func_40(0), 0, &iVar2);
		if (Local_538.f_71[0] != iVar2)
		{
			Local_538.f_71[0] = iVar2;
		}
	}
}

void func_448(int iParam0, bool bParam1, var uParam2)//Position - 0x20498
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	int iVar7;
	
	fVar6 = 1E+07f;
	if (!func_429())
	{
		if (func_459())
		{
			iVar1 = func_458(bParam1);
			if (iVar1 < 10)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar1 /*30*/][bParam1]))
				{
					iVar7 = NETWORK::NET_TO_ENT(Local_538.f_75[iVar1 /*30*/][bParam1]);
				}
			}
		}
		else
		{
			iVar7 = iParam0;
		}
		if (func_457())
		{
			if (Local_538.f_67[bParam1] != -1)
			{
				if (iVar1 >= 4)
				{
					Local_538.f_67[bParam1] = -1;
				}
			}
		}
		bVar0 = false;
		while (bVar0 < 20)
		{
			if (BitTest(Local_538.f_61[bParam1], bVar0) && !func_456(bVar0, bParam1))
			{
				Var2 = { func_410(func_10(), bVar0, Local_538.f_384, bParam1) };
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(iParam0, false), true);
				if (fVar5 < fVar6)
				{
					fVar6 = fVar5;
					*uParam2 = bVar0;
				}
			}
			bVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && !ENTITY::IS_ENTITY_DEAD(iVar7, false))
		{
			if (func_218())
			{
				if (func_23(bParam1))
				{
					func_22(bParam1);
				}
			}
			else if (func_452(func_410(func_10(), *uParam2, Local_538.f_384, bParam1), iVar7, 1))
			{
				func_451(*uParam2, bParam1);
				if (func_459() && !func_337())
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Drop_Package", func_450(bParam1, 0), "DLC_Exec_Land_Multiple_Sounds", true, 0, false);
				}
				if (func_385())
				{
					if (func_458(bParam1) == func_449())
					{
						func_22(bParam1);
					}
				}
				else if (func_429())
				{
					func_22(bParam1);
				}
			}
		}
	}
}

int func_449()//Position - 0x20625
{
	return (func_422() / func_21());
}

Vector3 func_450(bool bParam0, bool bParam1)//Position - 0x20636
{
	struct<3> Var0;
	
	if (func_41(bParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_42(bParam0), true) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_451(bool bParam0, bool bParam1)//Position - 0x2066B
{
	int iVar0;
	
	if (func_385())
	{
		if (bParam1 == 0)
		{
			Local_538.f_57++;
		}
		else if (bParam1 == 1)
		{
			Local_538.f_58++;
		}
		else
		{
			Local_538.f_59++;
		}
	}
	Local_538.f_56++;
	if (func_337())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			MISC::CLEAR_BIT(&(Local_538.f_61[iVar0]), bParam0);
			iVar0++;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_538.f_61[bParam1]), bParam0);
	}
}

int func_452(struct<3> Param0, int iParam3, bool bParam4)//Position - 0x206F9
{
	if (ENTITY::IS_ENTITY_AT_COORD(iParam3, Param0, func_453(bParam4, 0), false, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_453(bool bParam0, bool bParam1)//Position - 0x2071D
{
	if (func_337())
	{
		if (func_218())
		{
			if (bParam1)
			{
				return (150f * 4f), (150f * 4f), (150f * 1,5f);
			}
			else
			{
				return (150f * 1,5f), (150f * 1,5f), (150f * 1,5f);
			}
		}
		else
		{
			return (150f / 2f), (150f / 2f), (150f * 1,5f);
		}
	}
	else if (func_455() || func_454())
	{
		if (bParam0)
		{
			return (20f * 1,5f), (20f * 1,5f), 3f;
		}
		else
		{
			return (20f * 1,2f), (20f * 1,2f), 3f;
		}
	}
	if (func_274())
	{
		return (3f * 3f), (3f * 3f), (3f * 1,5f);
	}
	return 3f, 3f, 3f;
}

bool func_454()//Position - 0x20804
{
	return func_10() == 2;
}

bool func_455()//Position - 0x20812
{
	return func_10() == 1;
}

int func_456(bool bParam0, int iParam1)//Position - 0x20820
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (bParam0 == Local_538.f_67[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (bParam0 == Local_538.f_67[iParam1])
	{
		return 1;
	}
	return 0;
}

bool func_457()//Position - 0x20868
{
	return func_10() == 10;
}

int func_458(bool bParam0)//Position - 0x20877
{
	if (func_385())
	{
		switch (bParam0)
		{
			case 0:
				return Local_538.f_57;
			
			case 1:
				return Local_538.f_58;
			
			case 2:
				return Local_538.f_59;
			
			default:
		}
	}
	else
	{
		return Local_538.f_56;
	}
	return 0;
}

int func_459()//Position - 0x208C3
{
	if ((func_337() || (func_455() && func_430() < (func_422() - 1))) || (func_454() && func_430() < (func_422() - 1)))
	{
		return 1;
	}
	return 0;
}

void func_460()//Position - 0x2090B
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (func_459())
	{
		if (func_470())
		{
			bVar0 = false;
			while (bVar0 < func_21())
			{
				iVar1 = (26 + bVar0);
				bVar2 = iVar1;
				if (func_37(bVar2))
				{
					if (Local_538.f_376[bVar0] < 10)
					{
						switch (Local_538.f_380[bVar0])
						{
							case 0:
								Local_538.f_380[bVar0]++;
								break;
							
							case 1:
								if (BitTest(Local_538.f_592, bVar0))
								{
									if (func_41(bVar0) && func_464(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_42(bVar0), func_469()), func_468(bVar0), bVar0))
									{
										Local_538.f_376[bVar0]++;
										func_2(bVar2);
										Local_538.f_380[bVar0] = 0;
										MISC::CLEAR_BIT(&(Local_538.f_592), bVar0);
									}
								}
								else
								{
									func_2(bVar2);
								}
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	func_461();
}

void func_461()//Position - 0x20A04
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	while (iVar7 < func_21())
	{
		iVar6 = 0;
		while (iVar6 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/][iVar7]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_75[iVar6 /*30*/][iVar7]))
			{
				if (func_203(Local_538.f_75[iVar6 /*30*/][iVar7]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_ENT(Local_538.f_75[iVar6 /*30*/][iVar7]), 0, 0f, 0f, 10f, false, false, true, false);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_538.f_75[iVar6 /*30*/][iVar7]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_75[iVar6 /*30*/][iVar7]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]))
					{
						iVar4 = NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][iVar7]);
						iVar5 = NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
						{
							if (func_203(Local_538.f_75[iVar6 /*30*/][iVar7]) && func_203(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]))
							{
								if (!BitTest(Local_538.f_75[iVar6 /*30*/].f_12[iVar7], 2) && !BitTest(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7], 2))
								{
									if (BitTest(Local_538.f_75[iVar6 /*30*/].f_12[iVar7], 1) || BitTest(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7], 1))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar5))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar5, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7]), 2);
												func_391(&(Local_538.f_75[iVar6 /*30*/].f_4[iVar7]));
												func_391(&(Local_538.f_75[iVar6 /*30*/][iVar7]));
												MISC::CLEAR_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7]), false);
												MISC::CLEAR_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7]), true);
												MISC::CLEAR_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7]), 2);
											}
										}
									}
								}
								if (!BitTest(Local_538.f_75[iVar6 /*30*/].f_12[iVar7], 1) && !BitTest(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7], 1))
								{
									if (BitTest(Local_538.f_75[iVar6 /*30*/].f_12[iVar7], 0) || BitTest(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7], 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar5))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar5, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar7]), true);
											}
										}
									}
								}
								if (!BitTest(Local_538.f_75[iVar6 /*30*/].f_12[iVar7], 0))
								{
									if (func_462(iVar6, iVar7, iVar4))
									{
										ENTITY::PLAY_ENTITY_ANIM(iVar5, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
										MISC::SET_BIT(&(Local_538.f_75[iVar6 /*30*/].f_12[iVar7]), false);
										AUDIO::PLAY_SOUND_FROM_ENTITY(Local_118.f_360, "Parachute_Land", iVar5, "DLC_Exec_Air_Drop_Sounds", false, 0);
									}
									else
									{
										PHYSICS::SET_DAMPING(iVar4, 2, 0,0245f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
						{
							if (Var0.f_2 < fVar3 && !ENTITY::IS_ENTITY_IN_WATER(iVar4))
							{
								if (func_203(Local_538.f_75[iVar6 /*30*/][iVar7]))
								{
									ENTITY::SET_ENTITY_COORDS(iVar4, Var0.f_0, Var0.f_1, fVar3, true, false, false, true);
								}
							}
						}
					}
					if (func_35())
					{
						if (!func_5(&(Local_538.f_75[iVar6 /*30*/].f_23[iVar7 /*2*/])))
						{
							func_4(&(Local_538.f_75[iVar6 /*30*/].f_23[iVar7 /*2*/]), 0, 0);
						}
						else if (func_187(&(Local_538.f_75[iVar6 /*30*/].f_23[iVar7 /*2*/]), 30000, 0))
						{
							func_390(&(Local_538.f_75[iVar6 /*30*/][iVar7]));
						}
					}
				}
			}
			iVar6++;
		}
		iVar7++;
	}
}

int func_462(int iParam0, int iParam1, int iParam2)//Position - 0x20E24
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (func_187(&(Local_538.f_75[iParam0 /*30*/].f_16[iParam1 /*2*/]), 3000, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(iParam2))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam2))
	{
		return 1;
	}
	if (func_463(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x20E7D
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_PITCH(iParam0);
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(iParam0);
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_464(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x20ED0
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = Local_538.f_376[bParam4];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/][bParam4]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			Local_538.f_75[iVar6 /*30*/][bParam4] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_incar"), Param0 + Var0, false, func_467()));
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), fParam3);
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_538.f_75[iVar6 /*30*/][bParam4], true);
			ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), true);
			OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), true);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), true);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), false);
			PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]));
			ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), 0f, 0f, -0,2f);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), true, false);
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), 1200);
			if (func_5(&(Local_538.f_75[iVar6 /*30*/].f_23[bParam4 /*2*/])))
			{
				func_201(&(Local_538.f_75[iVar6 /*30*/].f_23[bParam4 /*2*/]));
			}
		}
	}
	if (func_337())
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/][bParam4]))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), true) };
					if (func_465(&(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), func_466(), Var3 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/][bParam4]), 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), true);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), false);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]));
						ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]), 1200);
						func_201(&(Local_538.f_75[iVar6 /*30*/].f_16[bParam4 /*2*/]));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/][bParam4]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/].f_4[bParam4]))
			{
				return 1;
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_538.f_75[iVar6 /*30*/][bParam4]))
	{
		return 1;
	}
	return 0;
}

int func_465(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x211D4
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_466()//Position - 0x21279
{
	return joaat("p_cargo_chute_s");
}

int func_467()//Position - 0x21286
{
	if (func_35())
	{
		return joaat("ex_prop_adv_case_sm");
	}
	else if (func_337())
	{
		return joaat("ex_prop_adv_case_sm_flash");
	}
	return joaat("prop_drug_package");
}

float func_468(bool bParam0)//Position - 0x212B4
{
	float fVar0;
	
	if (func_41(bParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(func_42(bParam0));
	}
	return fVar0;
}

Vector3 func_469()//Position - 0x212D3
{
	if (!func_337())
	{
		return 0f, -6f, -0,32f;
	}
	if (func_348() == 2)
	{
		return 0f, 0f, -5f;
	}
	return 0f, 0f, -2f;
}

int func_470()//Position - 0x2130A
{
	STREAMING::REQUEST_MODEL(func_467());
	STREAMING::REQUEST_MODEL(func_466());
	STREAMING::REQUEST_ANIM_DICT(func_471());
	if ((STREAMING::HAS_MODEL_LOADED(func_467()) && STREAMING::HAS_MODEL_LOADED(func_466())) && STREAMING::HAS_ANIM_DICT_LOADED(func_471()))
	{
		return 1;
	}
	return 0;
}

char* func_471()//Position - 0x21354
{
	return "P_cargo_chute_S";
}

int func_472()//Position - 0x2135F
{
	func_512();
	func_511();
	if ((((func_497() && func_496()) && func_492()) && func_490()) && func_488())
	{
		func_486();
		func_485();
		if (func_477())
		{
			if (func_476())
			{
				func_475();
				if (func_385())
				{
					Local_538.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
				}
				Local_538.f_30 = PLAYER::PLAYER_ID();
				if (func_474())
				{
					Local_538.f_555 = Global_262145.f_15635;
				}
				func_473();
				return 1;
			}
		}
	}
	return 0;
}

void func_473()//Position - 0x213F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_35())
		{
			Local_538.f_10[iVar0 /*3*/] = { func_371(iVar0, 0) };
			Local_538.f_20[iVar0] = func_370(iVar0, 0);
		}
		else if (func_337())
		{
			Local_538.f_10[iVar0 /*3*/] = { func_369(iVar0) };
			Local_538.f_20[iVar0] = func_368(iVar0);
		}
		else
		{
			Local_538.f_10[iVar0 /*3*/] = { func_367() };
			Local_538.f_20[iVar0] = func_366();
		}
		if (!func_128(Local_538.f_10[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			MISC::CLEAR_AREA(Local_538.f_10[iVar0 /*3*/], 4f, true, false, false, true);
		}
		iVar0++;
	}
}

bool func_474()//Position - 0x214C3
{
	return func_10() == 3;
}

void func_475()//Position - 0x214D1
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_384())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					Local_538.f_545 = joaat("schafter2");
					Local_538.f_546 = joaat("g_m_m_armgoon_01");
					break;
				
				case 1:
					Local_538.f_545 = joaat("huntley");
					Local_538.f_546 = joaat("g_m_m_mexboss_01");
					break;
				
				case 2:
					Local_538.f_545 = joaat("kuruma");
					Local_538.f_546 = joaat("g_m_y_korean_01");
					break;
			}
		}
		else if (func_11())
		{
			Local_538.f_545 = joaat("huntley");
			Local_538.f_546 = joaat("g_m_m_mexboss_01");
		}
	}
}

int func_476()//Position - 0x21576
{
	int iVar0;
	
	if (!func_12())
	{
		return 1;
	}
	if (Local_538.f_551[0] == -1)
	{
		Local_538.f_551[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
	}
	if (Local_538.f_551[1] == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
		if (iVar0 != Local_538.f_551[0])
		{
			Local_538.f_551[1] = iVar0;
		}
	}
	if (Local_538.f_551[2] == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
		if (iVar0 != Local_538.f_551[0] && iVar0 != Local_538.f_551[1])
		{
			Local_538.f_551[2] = iVar0;
		}
	}
	if ((Local_538.f_551[0] != -1 && Local_538.f_551[1] != -1) && Local_538.f_551[2] != -1)
	{
		return 1;
	}
	return 0;
}

bool func_477()//Position - 0x21650
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (((!func_337() && !func_455()) && !func_454()) && !func_274())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = 1;
		if (func_484(iVar0))
		{
			return 0;
		}
		bVar1 = (iVar0 + Local_538.f_65);
	}
	else if ((func_273() || func_483()) && func_422() < 20)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else
	{
		bVar1 = (iVar0 + Local_538.f_65);
	}
	if (bVar1 >= 20)
	{
		bVar1 = false;
	}
	if (func_274())
	{
		bVar1 = false;
	}
	if (func_457())
	{
		if (Local_538.f_582 == 1)
		{
			if (Local_538.f_67[1] == -1)
			{
				Local_538.f_67[1] = ((func_422() / 2) - 1);
			}
			if (Local_538.f_67[0] == -1)
			{
				Local_538.f_67[0] = ((func_422() / 2) - 1);
			}
		}
		else if (Local_538.f_67[0] == -1)
		{
			Local_538.f_67[0] = (func_422() - 1);
		}
	}
	if (func_479(bVar1))
	{
		if (Local_538.f_65 < func_422())
		{
			if (!BitTest(Local_538.f_61[0], bVar1))
			{
				Local_538.f_65++;
				if (iVar2 || bVar1 < func_478())
				{
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < func_21())
					{
						MISC::SET_BIT(&(Local_538.f_61[iVar3]), bVar1);
						MISC::SET_BIT(&(Local_538.f_66), bVar1);
						iVar3++;
					}
				}
				if ((!func_455() && !func_337()) && !func_454())
				{
					return 1;
				}
			}
		}
	}
	return Local_538.f_65 == func_422();
}

int func_478()//Position - 0x217F6
{
	if ((func_273() || func_483()) || func_12())
	{
		if (Global_1946098 <= 4)
		{
			return 3;
		}
		else if (Global_1946098 <= 9)
		{
			return 6;
		}
		else
		{
			return 20;
		}
	}
	return 5;
}

int func_479(bool bParam0)//Position - 0x2183E
{
	float fVar0;
	struct<3> Var1;
	bool bVar4;
	
	if (func_480())
	{
		Var1 = { func_17(Local_538.f_54) };
		bVar4 = false;
		while (bVar4 < func_21())
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_410(func_10(), bParam0, Local_538.f_384, bVar4), Var1, true);
			if (fVar0 >= IntToFloat(Global_262145.f_16034))
			{
				return 1;
			}
			bVar4++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_480()//Position - 0x218A6
{
	if ((((func_482() || func_474()) || func_384()) || func_11()) || func_481())
	{
		return 1;
	}
	return 0;
}

bool func_481()//Position - 0x218E2
{
	return func_10() == 4;
}

bool func_482()//Position - 0x218F0
{
	return func_10() == 0;
}

bool func_483()//Position - 0x218FE
{
	return func_10() == 7;
}

int func_484(int iParam0)//Position - 0x2190C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_15764;
		
		case 1:
			return Global_262145.f_15765;
		
		case 2:
			return Global_262145.f_15766;
		
		case 3:
			return Global_262145.f_15767;
		
		case 4:
			return Global_262145.f_15768;
		
		case 5:
			return Global_262145.f_15769;
		
		case 6:
			return Global_262145.f_15770;
		
		case 7:
			return Global_262145.f_15771;
		
		case 8:
			return Global_262145.f_15772;
		
		case 9:
			return Global_262145.f_15773;
		
		case 10:
			return Global_262145.f_15774;
		
		case 11:
			return Global_262145.f_15775;
		
		case 12:
			return Global_262145.f_15776;
		
		case 13:
			return Global_262145.f_15777;
		
		case 14:
			return Global_262145.f_15778;
		
		case 15:
			return Global_262145.f_15779;
		
		case 16:
			return Global_262145.f_15780;
		
		case 17:
			return Global_262145.f_15781;
		
		case 18:
			return Global_262145.f_15782;
		
		case 19:
			return Global_262145.f_15783;
		
		default:
	}
	return 0;
}

void func_485()//Position - 0x21A5C
{
	if (func_215())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				Local_538.f_579 = { -1419,803f, -1540,264f, 2,0909f };
				break;
			
			case 1:
				Local_538.f_579 = { -141,5667f, -2711,081f, 6,0002f };
				break;
			
			case 2:
				Local_538.f_579 = { 215,8467f, -3336,942f, 5,7982f };
				break;
			
			case 3:
				Local_538.f_579 = { 1294,194f, -3217,033f, 5,9059f };
				break;
			
			case 4:
				Local_538.f_579 = { 982,3854f, -3343,457f, 6,0958f };
				break;
			}
	}
	if (func_269())
	{
		switch (Local_538.f_394[0])
		{
			case 0:
				Local_538.f_579 = { 133,834f, -3336,725f, 6,0218f };
				break;
			
			case 1:
				Local_538.f_579 = { 1293,464f, -3126,078f, 5,906f };
				break;
			
			case 2:
				Local_538.f_579 = { -761,9681f, -2840,404f, 13,9415f };
				break;
			
			case 3:
				Local_538.f_579 = { -1331,282f, -1693,366f, 2,1151f };
				break;
			
			case 4:
				Local_538.f_579 = { -587,2385f, -2362,541f, 13,8282f };
				break;
			}
	}
}

void func_486()//Position - 0x21BCE
{
	int iVar0;
	int iVar1;
	
	if (Local_538.f_388 == -1 && func_454())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
		if (func_487(iVar0, 7500, 10000))
		{
			iVar1 = 1;
		}
		else if (func_487(iVar0, 5000, 7500))
		{
			iVar1 = 2;
		}
		else if (func_487(iVar0, 2500, 5000))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 4;
		}
		Local_538.f_388 = iVar1;
	}
}

int func_487(int iParam0, int iParam1, int iParam2)//Position - 0x21C3E
{
	if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return 1;
	}
	return 0;
}

int func_488()//Position - 0x21C5D
{
	int iVar0;
	
	if (!func_37(30))
	{
		if ((func_455() || func_454()) || func_337())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_538.f_384 = iVar0;
			func_34(30);
		}
		else if (func_274())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_538.f_384 = iVar0;
			Local_538.f_394[0] = iVar0;
			func_34(30);
		}
		else
		{
			func_34(30);
			return 1;
		}
	}
	return func_37(30);
}

int func_489(int iParam0)//Position - 0x21CF8
{
	switch (func_10())
	{
		case 11:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15736;
				
				case 1:
					return Global_262145.f_15737;
				
				case 2:
					return Global_262145.f_15738;
				
				case 3:
					return Global_262145.f_15739;
				
				case 4:
					return Global_262145.f_15740;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15742;
				
				case 1:
					return Global_262145.f_15743;
				
				case 2:
					return Global_262145.f_15744;
				
				case 3:
					return Global_262145.f_15745;
				
				case 4:
					return Global_262145.f_15746;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15748;
				
				case 1:
					return Global_262145.f_15749;
				
				case 2:
					return Global_262145.f_15750;
				
				case 3:
					return Global_262145.f_15751;
				
				case 4:
					return Global_262145.f_15752;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15755;
				
				case 1:
					return Global_262145.f_15756;
				
				case 2:
					return Global_262145.f_15757;
				
				case 3:
					return Global_262145.f_15758;
				
				case 4:
					return Global_262145.f_15759;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15785;
				
				case 1:
					return Global_262145.f_15786;
				
				case 2:
					return Global_262145.f_15787;
				
				case 3:
					return Global_262145.f_15788;
				
				case 4:
					return Global_262145.f_15789;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15804;
				
				case 1:
					return Global_262145.f_15805;
				
				case 2:
					return Global_262145.f_15806;
				
				case 3:
					return Global_262145.f_15807;
				
				case 4:
					return Global_262145.f_15808;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15792;
				
				case 1:
					return Global_262145.f_15793;
				
				case 2:
					return Global_262145.f_15794;
				
				case 3:
					return Global_262145.f_15795;
				
				case 4:
					return Global_262145.f_15796;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15798;
				
				case 1:
					return Global_262145.f_15799;
				
				case 2:
					return Global_262145.f_15800;
				
				case 3:
					return Global_262145.f_15801;
				
				case 4:
					return Global_262145.f_15802;
				
				default:
			}
			break;
	}
	return 0;
}

int func_490()//Position - 0x2200A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_37(29))
	{
		iVar3 = func_491(PLAYER::PLAYER_ID());
		if (func_337())
		{
			switch (func_348())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				
				case 7:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
					break;
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		Local_538.f_394[0] = iVar0;
		Local_538.f_394[1] = iVar1;
		Local_538.f_394[2] = iVar2;
		func_34(29);
	}
	return func_37(29);
}

int func_491(bool bParam0)//Position - 0x220EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	iVar1 = 0;
	while (iVar1 < Global_262145.f_12838)
	{
		if (Global_1920255.f_11.f_132[iVar1] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_492()//Position - 0x22127
{
	var uVar0;
	var uVar1;
	
	if (Local_538.f_582 == -1)
	{
		uVar1 = func_495(func_10(), &uVar0);
		func_494(uVar1);
		func_493(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0)//Position - 0x2215D
{
	Local_538.f_583 = uParam0;
}

void func_494(var uParam0)//Position - 0x2216D
{
	Local_538.f_582 = uParam0;
}

int func_495(int iParam0, var uParam1)//Position - 0x2217D
{
	int iVar0;
	
	iVar0 = Global_1946098;
	switch (iParam0)
	{
		case 8:
		case 7:
		case 9:
		case 10:
		case 11:
			if (iVar0 >= 1 && iVar0 < Global_262145.f_15629)
			{
				*uParam1 = iVar0;
				return 0;
			}
			else if (iVar0 >= Global_262145.f_15629 && iVar0 < Global_262145.f_15630)
			{
				*uParam1 = iVar0;
				return 0;
			}
			*uParam1 = iVar0;
			if (iParam0 == 9)
			{
				return 7;
			}
			return 2;
		
		case 12:
		case 13:
			*uParam1 = iVar0;
			return 3;
		
		default:
	}
	if (iVar0 >= 1 && iVar0 < Global_262145.f_15631)
	{
		*uParam1 = iVar0;
		return 4;
	}
	else if (iVar0 >= Global_262145.f_15631 && iVar0 < Global_262145.f_15632)
	{
		*uParam1 = iVar0;
		return 5;
	}
	*uParam1 = iVar0;
	return 6;
	*uParam1 = 1;
	return -1;
}

int func_496()//Position - 0x22275
{
	if (Local_538.f_54 == -1)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183 == -1)
		{
			Local_538.f_54 = Local_118.f_102;
		}
		else
		{
			Local_538.f_54 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183;
		}
		Local_538.f_55 = func_2257();
		if (Local_538.f_55 <= 0)
		{
			Local_538.f_55 = 1;
			func_24(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_497()//Position - 0x222DE
{
	int iVar0;
	
	if (func_10() == 14)
	{
		if (func_2258())
		{
			iVar0 = func_510();
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		if ((((!func_508(iVar0) && !func_507(iVar0)) && !func_503(iVar0)) && func_502(iVar0)) && func_501(iVar0))
		{
			Local_538.f_7 = iVar0;
			func_500(iVar0);
			func_498(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_498(int iParam0)//Position - 0x2235B
{
	Global_2815059.f_5195.f_368 = func_499(iParam0);
}

int func_499(int iParam0)//Position - 0x22373
{
	if (func_36(iParam0))
	{
		return 0;
	}
	else if (func_338(iParam0))
	{
		return 1;
	}
	else if (func_275(iParam0))
	{
		return 2;
	}
	return -1;
}

void func_500(int iParam0)//Position - 0x223A9
{
	if (Global_2815059.f_5195.f_348[0] == 14)
	{
		Global_2815059.f_5195.f_348[0] = iParam0;
		return;
	}
	else
	{
		Global_2815059.f_5195.f_348[7] = Global_2815059.f_5195.f_348[6];
		Global_2815059.f_5195.f_348[6] = Global_2815059.f_5195.f_348[5];
		Global_2815059.f_5195.f_348[5] = Global_2815059.f_5195.f_348[4];
		Global_2815059.f_5195.f_348[4] = Global_2815059.f_5195.f_348[3];
		Global_2815059.f_5195.f_348[3] = Global_2815059.f_5195.f_348[2];
		Global_2815059.f_5195.f_348[2] = Global_2815059.f_5195.f_348[1];
		Global_2815059.f_5195.f_348[1] = Global_2815059.f_5195.f_348[0];
		Global_2815059.f_5195.f_348[0] = iParam0;
	}
}

bool func_501(int iParam0)//Position - 0x2249D
{
	return Global_2815059.f_5195.f_368 != func_499(iParam0);
}

int func_502(int iParam0)//Position - 0x224B6
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			return Global_1946098 >= 5;
		
		default:
	}
	return 1;
}

int func_503(int iParam0)//Position - 0x224E1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (func_291(bVar2))
			{
				if (func_506(bVar2) == 168)
				{
					iVar1 = func_504(bVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_504(bool bParam0)//Position - 0x22539
{
	if (func_505(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_505(bool bParam0, int iParam1)//Position - 0x2255C
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_506(bool bParam0)//Position - 0x22597
{
	if (func_505(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_507(int iParam0)//Position - 0x225BA
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_15761)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_262145.f_15784)
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_262145.f_15803)
			{
				return 1;
			}
			break;
		
		case 3:
			if (Global_262145.f_15790)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Global_262145.f_15809)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Global_262145.f_15760)
			{
				return 1;
			}
			break;
		
		case 6:
			if (Global_262145.f_15762)
			{
				return 1;
			}
			break;
		
		case 7:
			if (Global_262145.f_15753)
			{
				return 1;
			}
			break;
		
		case 8:
			if (Global_262145.f_15747)
			{
				return 1;
			}
			break;
		
		case 9:
			if (Global_262145.f_15741)
			{
				return 1;
			}
			break;
		
		case 10:
			if (Global_262145.f_15754)
			{
				return 1;
			}
			break;
		
		case 11:
			if (Global_262145.f_15735)
			{
				return 1;
			}
			break;
		
		case 12:
			if (Global_262145.f_15791)
			{
				return 1;
			}
			break;
		
		case 13:
			if (Global_262145.f_15797)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x2270C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_509())
	{
		if (Global_2815059.f_5195.f_348[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_509()//Position - 0x22741
{
	return Global_262145.f_16140;
}

int func_510()//Position - 0x22750
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 9;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		default:
	}
	return 0;
}

void func_511()//Position - 0x227BC
{
	if (Local_538.f_594 == -1)
	{
		Local_538.f_594 = Global_1946098;
	}
}

void func_512()//Position - 0x227D8
{
	if (Local_538.f_593 == -1)
	{
		Local_538.f_593 = Global_1946100;
	}
}

void func_513(int iParam0)//Position - 0x227F4
{
	Local_538.f_0 = iParam0;
}

int func_514()//Position - 0x22801
{
	if (Global_2815059.f_5195.f_42)
	{
		Global_2815059.f_5195.f_42 = 0;
		return 1;
	}
	return 0;
}

void func_515()//Position - 0x22824
{
	func_2208();
	func_2202();
	func_2197();
	func_2195();
	func_2194();
	func_2193();
	switch (func_372())
	{
		case 0:
			break;
		
		case 1:
			if (!func_2192(2))
			{
				func_2170(168, 1, Local_538.f_7, 0);
				func_2168();
				func_2167(1);
				if (func_337())
				{
					func_2166();
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(210,93f, -2022,58f, 17,65f, 6f, joaat("prop_fnclink_03gate1"), false))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 210,93f, -2022,58f, 17,65f, true, 1f, false);
				}
				func_2165(2);
			}
			else if (!func_2192(3))
			{
				if (func_187(&(Local_538.f_3), 10000, 0))
				{
					func_2164();
					func_2165(3);
				}
			}
			if (func_2163(PLAYER::PLAYER_ID()) && !func_2192(15))
			{
				Global_1946250.f_3364 = 1;
				func_2165(15);
			}
			else
			{
				if (Global_1946250.f_3364 == 1 || !func_2192(15))
				{
					func_2165(15);
					Global_1946250.f_3364 = 0;
				}
				if (!func_2157() && !func_2156())
				{
					if (func_190() == 0)
					{
						if (Global_2703735.f_4.f_10 || func_429())
						{
							if (!func_2192(4))
							{
								func_2068(-1, 0, 0, -1, 0, 0);
								func_2165(4);
							}
							func_1965(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
							func_1836();
							if (!Global_1946250.f_519)
							{
								func_1788(0);
								func_1747(0);
								func_1704();
							}
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
							func_1698();
							func_1695();
							func_1693();
							func_1692();
							func_1683();
							func_1675();
							func_1672();
							if (func_218())
							{
								func_1671();
							}
							else if (((((func_483() || func_273()) || func_457()) || func_12()) || func_454()) || func_455())
							{
								func_1658();
							}
							if (iLocal_522 > -1)
							{
								if (iLocal_522 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
								}
							}
						}
					}
				}
				else
				{
					func_1657(24);
					func_1650();
				}
			}
			break;
		
		case 2:
			if (func_274())
			{
				if (!func_5(&(Local_118.f_364)))
				{
					func_4(&(Local_118.f_364), 0, 0);
				}
			}
			if (func_190() != 6)
			{
				if (!BitTest(Global_1943920.f_3, 4))
				{
					MISC::SET_BIT(&(Global_1943920.f_3), 4);
				}
			}
			func_1649();
			func_1648();
			func_1646();
			func_1644();
			if (func_913())
			{
				func_893(0);
				func_890();
				func_881();
				func_1788(1);
				func_1747(1);
				func_530();
				func_525(Local_538.f_54);
				func_518();
			}
			func_516();
			break;
		
		case 3:
			break;
	}
}

void func_516()//Position - 0x22AE7
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_538.f_35[bVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_42(bVar0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(bVar0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_42(bVar0), false))
					{
						func_517(func_40(bVar0));
					}
				}
			}
		}
		bVar0++;
	}
}

void func_517(int iParam0)//Position - 0x22B47
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandOwner"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandOwner");
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandDeliveryType"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "ContrabandDeliveryType");
		}
	}
}

void func_518()//Position - 0x22B91
{
	if (!func_524(19))
	{
		if (func_523())
		{
			if (func_524(0))
			{
				if (func_190() == 6)
				{
					func_520(func_522(1));
				}
				else
				{
					func_520(func_522(0));
				}
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			}
		}
		func_519(19);
	}
}

void func_519(int iParam0)//Position - 0x22BE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_516[iVar0]), iVar1);
}

void func_520(int iParam0)//Position - 0x22C08
{
	if (!func_524(iParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(func_521(iParam0));
		func_519(iParam0);
	}
}

char* func_521(int iParam0)//Position - 0x22C2B
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIR_CLEAR_START";
		
		case 2:
			return "EXEC1_AIR_CLEAR_LAND";
		
		case 3:
			return "EXEC1_AIR_CLEAR_SHOOTOUT";
		
		case 36:
			return "EXEC1_AIR_CLEAR_LEFT_AREA";
		
		case 4:
			return "EXEC1_AIR_CLEAR_STOP";
		
		case 5:
			return "EXEC1_AIR_CLEAR_FAIL";
		
		case 6:
			return "EXEC1_SEA_ATTACK_START";
		
		case 25:
			return "EXEC1_SEA_ATTACK_FIGHT";
		
		case 7:
			return "EXEC1_SEA_ATTACK_STOP";
		
		case 8:
			return "EXEC1_SEA_ATTACK_FAIL";
		
		case 9:
			return "EXEC1_SEA_DEFEND_START";
		
		case 10:
			return "EXEC1_SEA_DEFEND_DELIVER";
		
		case 11:
			return "EXEC1_SEA_DEFEND_STOP";
		
		case 12:
			return "EXEC1_SEA_DEFEND_FAIL";
		
		case 13:
			return "EXEC1_DELIVERING_START";
		
		case 14:
			return "EXEC1_STING_WANTED_SMA";
		
		case 15:
			return "EXEC1_DELIVERING_SMA";
		
		case 16:
			return "EXEC1_MP_MUSIC_STOP";
		
		case 17:
			return "EXEC1_STING_FAIL";
		
		case 18:
			return "EXEC1_MP_MUSIC_FAIL";
		
		case 20:
			return "EXEC1_AIR_ATTACK_START";
		
		case 21:
			return "EXEC1_AIR_ATTACK_ENEMIES";
		
		case 22:
			return "EXEC1_AIR_ATTACK_DELIVERING";
		
		case 23:
			return "EXEC1_AIR_ATTACK_STOP";
		
		case 24:
			return "EXEC1_AIR_ATTACK_FAIL";
		
		case 26:
			return "EXEC1_LAND_ATTACK_START";
		
		case 27:
			return "EXEC1_LAND_ATTACK_HOSTILE";
		
		case 28:
			return "EXEC1_LAND_ATTACK_LOST";
		
		case 29:
			return "EXEC1_LAND_ATTACK_STOP";
		
		case 30:
			return "EXEC1_LAND_DEFEND_START";
		
		case 31:
			return "EXEC1_LAND_DEFEND_ENEMIES";
		
		case 32:
			return "EXEC1_LAND_DEFEND_STOP";
		
		case 33:
			return "EXEC1_AIR_FLY_LOW_START";
		
		case 34:
			return "EXEC1_AIR_FLY_LOW_WANTED";
		
		case 35:
			return "EXEC1_AIR_FLY_LOW_FLYING";
		
		default:
	}
	return "";
}

int func_522(bool bParam0)//Position - 0x22E02
{
	if (bParam0)
	{
		switch (func_10())
		{
			case 9:
				return 4;
			
			case 12:
				return 7;
			
			case 13:
				return 11;
			
			case 2:
				return 16;
			
			case 3:
				return 16;
			
			case 4:
				return 16;
			
			case 0:
				return 16;
			
			case 11:
				return 23;
			
			case 5:
				return 29;
			
			case 6:
				return 32;
			
			case 1:
				return 16;
			
			case 7:
				return 16;
			
			default:
		}
	}
	else
	{
		switch (func_10())
		{
			case 9:
				return 5;
			
			case 12:
				return 8;
			
			case 13:
				return 12;
			
			case 2:
				return 17;
			
			case 3:
				return 18;
			
			case 4:
				return 18;
			
			case 0:
				return 18;
			
			case 11:
				return 24;
			
			case 5:
				return 18;
			
			case 6:
				return 18;
			
			case 1:
				return 18;
			
			case 7:
				return 16;
			}
		
		default:
	}
	return 4;
}

int func_523()//Position - 0x22F2A
{
	if (func_10() == 8 || func_10() == 10)
	{
		return 0;
	}
	return 1;
}

bool func_524(int iParam0)//Position - 0x22F4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_516[iVar0], iVar1);
}

void func_525(int iParam0)//Position - 0x22F6E
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		if (!func_2192(7))
		{
			if (func_190() == 6)
			{
				if (func_2295())
				{
					if (func_529(iParam0))
					{
						iVar0 = func_528(iParam0);
						Global_2815059.f_5195.f_369[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
						func_526(func_527(iVar0), Global_2815059.f_5195.f_369[iVar0], -1, 1, 0);
						func_2165(7);
					}
				}
			}
		}
	}
}

void func_526(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x22FDA
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_309(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_527(int iParam0)//Position - 0x2300A
{
	switch (iParam0)
	{
		case 0:
			return 3659;
		
		case 1:
			return 3782;
		
		case 2:
			return 3783;
		
		case 3:
			return 3784;
		
		case 4:
			return 3785;
		
		default:
	}
	return 3659;
}

int func_528(int iParam0)//Position - 0x23058
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_529(int iParam0)//Position - 0x2309A
{
	int iVar0;
	
	if (func_18(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_530()//Position - 0x230DB
{
	bool bVar0;
	struct<14> Var1;
	
	if (!func_2192(1))
	{
		if (func_2520(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_190() != 0)
			{
				bVar0 = PLAYER::PLAYER_ID();
				if (func_190() == 6)
				{
					bLocal_1188 = true;
					Local_484.f_7 = func_2257();
					if (func_2295() && Global_2869997[func_32()] == 0)
					{
						func_880(42);
					}
					if (func_474())
					{
						Local_484.f_0 = Local_538.f_555;
						Local_484.f_6 = 1;
					}
				}
				Local_484.f_5 = func_2258();
				Local_484.f_9 = Local_538.f_593;
				func_637(168, bLocal_1188, &Local_484, 0);
				if (bLocal_1188)
				{
					func_635(1, bVar0);
					Var1.f_2 = -977704342;
					Var1.f_10 = bVar0;
					if (func_2295())
					{
						func_377(Var1, func_29(0, 1));
					}
				}
				else
				{
					func_634();
					func_635(1, func_33());
				}
				func_2376(bLocal_1188, 0);
				func_2165(1);
			}
		}
	}
	else
	{
		if (!func_2259(0))
		{
			if (func_2295())
			{
				if (!func_38(NETWORK::PARTICIPANT_ID(), 13))
				{
					if (bLocal_1188)
					{
						func_2218(2);
					}
					else if (func_190() == 4)
					{
						func_2218(1);
					}
					else
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (iLocal_534 == 2)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (iLocal_534 == 3)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (func_2259(2))
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
				}
			}
			else if (func_247() == func_33())
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_24(0);
				}
			}
		}
		if (Global_2703735.f_4.f_10)
		{
			if ((!func_2157() && !func_2156()) && !func_632(168))
			{
				if (!func_2192(26))
				{
					if (func_630())
					{
						switch (func_190())
						{
							case 2:
								HUD::CLEAR_HELP(true);
								break;
							
							case 3:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							
							case 1:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							
							case 4:
							case 5:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							
							case 6:
								HUD::CLEAR_HELP(true);
								func_570(1, 0);
								break;
						}
						func_2165(26);
					}
				}
			}
		}
	}
	if (func_531(&uLocal_507, 1, 0) && func_2259(0))
	{
		func_633(0);
	}
}

int func_531(var uParam0, bool bParam1, int iParam2)//Position - 0x2334A
{
	bool bVar0;
	
	func_569(29);
	if ((*uParam0 > 0 && !func_568()) && func_559(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_557())
		{
			func_556();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_187(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1943920.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), false);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_555(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_187(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_544(iParam2);
				func_555(uParam0, 2);
			}
			break;
		
		case 2:
			func_544(0);
			if (func_187(&(uParam0->f_1), 15000, 0))
			{
				if (func_532(func_533(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_555(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_187(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), true);
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
				func_555(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), true);
			MISC::CLEAR_BIT(&(Global_1943920.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_532(char* sParam0)//Position - 0x234C4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_533(int iParam0)//Position - 0x234D7
{
	if (((func_542(PLAYER::PLAYER_ID()) || func_541(PLAYER::PLAYER_ID())) || func_537()) || iParam0)
	{
		if (func_541(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_534(func_536()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_534(int iParam0)//Position - 0x23539
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_535(iParam0, 0);
	return 0;
}

int func_535(int iParam0, int iParam1)//Position - 0x23593
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_536()//Position - 0x235E8
{
	return Global_1920255;
}

bool func_537()//Position - 0x235F4
{
	return (func_540() && func_538(func_28()));
}

bool func_538(int iParam0)//Position - 0x2360D
{
	return func_539(iParam0, 1);
}

int func_539(bool bParam0, int iParam1)//Position - 0x2361C
{
	if (bParam0 != func_33())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_33())
		{
			if (Global_1892703[bParam0 /*599*/].f_10 == bParam0 && Global_1892703[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_540()//Position - 0x2366B
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148;
}

bool func_541(bool bParam0)//Position - 0x23681
{
	return func_535(func_506(bParam0), 0);
}

bool func_542(bool bParam0)//Position - 0x23694
{
	return func_543(func_506(bParam0));
}

int func_543(int iParam0)//Position - 0x236A6
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148 && func_539(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_544(int iParam0)//Position - 0x23788
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && func_2520(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT()) && !func_554(PLAYER::PLAYER_ID(), 22)) && func_559(PLAYER::PLAYER_ID()) != 0) && !func_552(func_553())) && !func_542(PLAYER::PLAYER_ID())) && !func_551(func_506(PLAYER::PLAYER_ID()))) && !func_550(func_506(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), true);
			func_549(func_533(iParam0), -1);
			func_545(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), false);
		}
	}
}

void func_545(int iParam0)//Position - 0x23866
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_546(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_568())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_546(bool bParam0)//Position - 0x2389D
{
	return func_547(PLAYER::PLAYER_ID(), bParam0);
}

int func_547(bool bParam0, bool bParam1)//Position - 0x238AF
{
	return func_548(bParam0, bParam1, 1);
}

int func_548(int iParam0, bool bParam1, int iParam2)//Position - 0x238C0
{
	int iVar0;
	
	if (iParam0 == func_33())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_539(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_33() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_549(char* sParam0, int iParam1)//Position - 0x2391C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_550(int iParam0)//Position - 0x23933
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_551(int iParam0)//Position - 0x2398F
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x239DF
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_553()//Position - 0x23A05
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_554(bool bParam0, int iParam1)//Position - 0x23EBE
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_4, iParam1);
}

void func_555(var uParam0, int iParam1)//Position - 0x23ED6
{
	*uParam0 = iParam1;
}

void func_556()//Position - 0x23EE3
{
	Global_2727091 = 1;
}

int func_557()//Position - 0x23EF0
{
	if (((((((func_506(PLAYER::PLAYER_ID()) == 170 || func_506(PLAYER::PLAYER_ID()) == 219) || func_506(PLAYER::PLAYER_ID()) == 221) || func_506(PLAYER::PLAYER_ID()) == 220) || func_506(PLAYER::PLAYER_ID()) == 216) || func_506(PLAYER::PLAYER_ID()) == 215) || func_506(PLAYER::PLAYER_ID()) == 214) || func_506(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_558(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_558(bool bParam0)//Position - 0x23F91
{
	if (bParam0 != func_33())
	{
		if (func_2520(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_141(Global_2689235[bParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_559(bool bParam0)//Position - 0x23FD7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_567(bParam0) && !func_566(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = func_565(bParam0);
	uVar3 = func_564();
	bVar4 = func_2157();
	if ((bVar1 && (func_563(bParam0) || func_562(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_561(bParam0)) && !func_560(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

bool func_560(int iParam0)//Position - 0x24094
{
	return func_554(iParam0, 19);
}

int func_561(bool bParam0)//Position - 0x240A4
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_554(bParam0, 9);
	}
	return 0;
}

int func_562(int iParam0)//Position - 0x240C2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_563(bool bParam0)//Position - 0x240E5
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

bool func_564()//Position - 0x24108
{
	return Global_1574582;
}

bool func_565(bool bParam0)//Position - 0x24114
{
	return func_554(bParam0, 20);
}

bool func_566(int iParam0)//Position - 0x24124
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
}

int func_567(bool bParam0)//Position - 0x24139
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_568()//Position - 0x2415A
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

void func_569(bool bParam0)//Position - 0x24170
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

void func_570(bool bParam0, int iParam1)//Position - 0x2418D
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (func_630() || bParam0 == 2)
	{
		if (!func_629(bParam0))
		{
			switch (bParam0)
			{
				case 0:
					sVar0 = "GB_SELL_BM_01";
					if (func_337())
					{
						if (func_385())
						{
							sVar1 = "GB_SELL_BM_06b";
						}
						else
						{
							sVar1 = "GB_SELL_BM_06";
						}
					}
					else if (func_274())
					{
						sVar1 = "GB_SELL_BM_07";
					}
					else if (func_385())
					{
						sVar1 = "GB_SELL_BM_02b";
					}
					else
					{
						sVar1 = "GB_SELL_BM_02";
					}
					iVar2 = 86;
					func_628(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_627(bParam0);
					break;
				
				case 1:
					sVar0 = "EXEC_SOLD";
					sVar1 = "GB_SELL_BM_03";
					iVar2 = 87;
					func_628(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_627(bParam0);
					break;
				
				case 2:
					sVar0 = "BIGM_CLOST";
					iVar2 = 89;
					if (func_2295())
					{
						if (func_2258())
						{
							if (iLocal_536 > 1)
							{
								sVar1 = "GB_SELL_BM_10p";
							}
							else
							{
								sVar1 = "GB_SELL_BM_10";
							}
							if (iLocal_537 > 0)
							{
								func_626("GB_SELL_TICK_1", iLocal_537, func_2257());
							}
							else
							{
								func_621("GB_SELL_TICK_3", 0);
							}
						}
						else
						{
							if (iParam1 == 4)
							{
								if (iLocal_536 > 1)
								{
									sVar1 = "GB_SELL_BM_08p";
								}
								else
								{
									sVar1 = "GB_SELL_BM_08";
								}
							}
							else if (iParam1 == 1 || iParam1 == 5)
							{
								if (iLocal_536 > 1)
								{
									sVar1 = "GB_SELL_BM_09p";
								}
								else
								{
									sVar1 = "GB_SELL_BM_09";
								}
							}
							else
							{
								sVar1 = "GB_SELL_BM_04";
							}
							if (iLocal_537 > 0)
							{
								func_626("GB_SELL_TICK_1", iLocal_537, func_2257());
							}
							else
							{
								func_621("GB_SELL_TICK_2", 0);
							}
						}
						if (iLocal_536 > -1)
						{
							func_571(iVar2, iLocal_536, sVar1, sVar0, 1, -1, -1082130432, 2, 0);
						}
					}
					else
					{
						sVar1 = "GB_SELL_BM_04";
						func_628(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					}
					func_627(bParam0);
					break;
				}
			}
	}
}

int func_571(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x24363
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_620(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_618(&(Var0.f_69), iParam8);
	}
	return func_572(&Var0);
}

int func_572(var uParam0)//Position - 0x243E4
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_586(uParam0, uParam0->f_17);
	func_583(uParam0);
	if (func_132())
	{
		func_583(uParam0);
	}
	if (func_582(uParam0->f_1))
	{
		func_575();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (func_574(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_575();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_618(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_574(uParam0->f_69, 128))
			{
				if (func_573(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					func_618(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)//Position - 0x245C9
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_574(var uParam0, int iParam1)//Position - 0x2464F
{
	return (uParam0 && iParam1) != 0;
}

void func_575()//Position - 0x2465E
{
	bool bVar0;
	
	if (Global_2703735.f_2723)
	{
		return;
	}
	if (!Global_78587)
	{
		Global_78587 = 1;
		bVar0 = true;
	}
	func_576();
	if (bVar0)
	{
		Global_78587 = 0;
	}
}

void func_576()//Position - 0x24691
{
	Global_2703735.f_2724 = 0;
	Global_2703735.f_2724.f_582 = 0;
	func_580(&(Global_2703735.f_2724.f_1));
	Global_2703735.f_2724.f_1.f_1 = 0;
	func_577(&(Global_2703735.f_2724.f_1), 1);
}

void func_577(var uParam0, int iParam1)//Position - 0x246D3
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78588)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_579(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_578(0);
}

void func_578(int iParam0)//Position - 0x24782
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_579(bool bParam0)//Position - 0x24796
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_580(var uParam0)//Position - 0x247BE
{
	func_581(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_581(var uParam0)//Position - 0x247E8
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_582(int iParam0)//Position - 0x24867
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_583(var uParam0)//Position - 0x2497F
{
	if (func_585(uParam0->f_1))
	{
		uParam0->f_72 = func_584();
	}
}

int func_584()//Position - 0x2499A
{
	return 21;
}

int func_585(int iParam0)//Position - 0x249A4
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_586(var uParam0, bool bParam1)//Position - 0x24A36
{
	if (func_585(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_33() || !func_2520(bParam1, 0, 1))
	{
		return;
	}
	if (func_573(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_587(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_587(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x24A8D
{
	int iVar0;
	int iVar1;
	
	if (func_88(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_88(PLAYER::PLAYER_ID()) || (func_617() && func_616())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_615();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_2520(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_613(iParam1, bParam0, 0);
							}
							else
							{
								return func_599(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_599(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_613(iParam1, bParam0, 0);
				}
				else
				{
					return func_588(0, -1, 0);
				}
			}
			else
			{
				return func_588(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_613(iParam1, bParam0, 0);
		}
		else
		{
			return func_599(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_599(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_588(bool bParam0, int iParam1, bool bParam2)//Position - 0x24C6A
{
	return func_589(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_589(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x24C80
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_598() || (func_597() && func_595())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_594(iParam2, iVar0);
		}
		else
		{
			return func_594(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_84(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_593(1);
				}
				else
				{
					return func_593(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_590(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_590(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_593(1);
	}
	return func_593(0);
}

int func_590(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x24D81
{
	int iVar0;
	
	iVar0 = func_592(iParam0, iParam1, iParam3);
	if (func_591(Global_4718592.f_116524, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_591(int iParam0, bool bParam1)//Position - 0x24E99
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_592(int iParam0, int iParam1, int iParam2)//Position - 0x24EEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_84(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_593(bool bParam0)//Position - 0x24F31
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_594(int iParam0, int iParam1)//Position - 0x24F48
{
	if (iParam0 == -1)
	{
		iParam0 = func_592(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_595()//Position - 0x24F96
{
	if (func_596())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_596()//Position - 0x24FB5
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_597()//Position - 0x24FCA
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_598()//Position - 0x25011
{
	if (func_596() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_599(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2502E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_605())
			{
				iVar3 = func_604(bParam0);
				if (!iVar3 == -1)
				{
					return func_602(iVar3);
				}
			}
			if ((func_601(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_84(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_593(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_600(1);
			}
			else
			{
				return func_589(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_593(1);
			}
			else
			{
				return func_589(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_604(bParam0);
	if (!iVar4 == -1)
	{
		return func_602(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_600(bool bParam0)//Position - 0x251C5
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_601(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x251DC
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_602(int iParam0)//Position - 0x25254
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_603(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_603(int iParam0)//Position - 0x25317
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_604(bool bParam0)//Position - 0x2532E
{
	if (!bParam0 == func_33())
	{
		if (func_290(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_61(bParam0)];
		}
	}
	return -1;
}

int func_605()//Position - 0x25360
{
	if ((((((func_164() || func_612()) || func_132()) || func_611()) || func_610()) || func_608()) || func_606())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_606()//Position - 0x253C8
{
	return func_607(Global_4718592.f_116524);
}

int func_607(int iParam0)//Position - 0x253DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_608()//Position - 0x2540D
{
	return func_609(Global_4718592.f_116524);
}

int func_609(int iParam0)//Position - 0x25423
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_610()//Position - 0x2545D
{
	return Global_2714762.f_24;
}

var func_611()//Position - 0x2546B
{
	return Global_2714762.f_21;
}

var func_612()//Position - 0x25479
{
	return Global_2714762.f_18;
}

int func_613(int iParam0, bool bParam1, bool bParam2)//Position - 0x25487
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_605())
	{
		iVar2 = func_604(iParam1);
		if (!iVar2 == -1)
		{
			return func_602(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_33())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_589(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_614(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_84(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_600(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_614(int iParam0)//Position - 0x25606
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_615()//Position - 0x256DB
{
	return Global_2621446.f_2;
}

var func_616()//Position - 0x256E9
{
	return BitTest(Global_2621446, 4);
}

var func_617()//Position - 0x256F7
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

void func_618(var uParam0, int iParam1)//Position - 0x25711
{
	func_619(uParam0, iParam1);
}

void func_619(var uParam0, var uParam1)//Position - 0x25721
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_620(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x25732
{
	uParam1->f_17 = func_33();
	uParam1->f_18 = func_33();
	uParam1->f_19 = func_33();
	uParam1->f_20 = func_33();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_621(char* sParam0, bool bParam1)//Position - 0x257AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_622(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_622(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x257E6
{
	int iVar0;
	
	if ((!func_625() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_30(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_623(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_623(int iParam0)//Position - 0x258EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_624(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_624(int iParam0)//Position - 0x25950
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_625()//Position - 0x25989
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_626(char* sParam0, int iParam1, int iParam2)//Position - 0x2599A
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_622(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_627(bool bParam0)//Position - 0x259D5
{
	MISC::SET_BIT(&(Local_118.f_2), bParam0);
}

int func_628(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x259E7
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_620(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_618(&(Var0.f_69), iParam7);
	}
	return func_572(&Var0);
}

bool func_629(int iParam0)//Position - 0x25A67
{
	return BitTest(Local_118.f_2, iParam0);
}

int func_630()//Position - 0x25A76
{
	if ((func_2520(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_631())
	{
		return 1;
	}
	return 0;
}

bool func_631()//Position - 0x25AA4
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_632(int iParam0)//Position - 0x25AB9
{
	if (!func_2295() && !func_290(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_561(PLAYER::PLAYER_ID()))
		{
			if (func_2157())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_633(bool bParam0)//Position - 0x25B12
{
	MISC::SET_BIT(&(Local_1135[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), iParam0);
}

void func_634()//Position - 0x25B2B
{
	if (func_5(&(Global_2789228.f_140)))
	{
		func_201(&(Global_2789228.f_140));
	}
	func_4(&(Global_2789228.f_140), 1, 0);
}

void func_635(int iParam0, bool bParam1)//Position - 0x25B56
{
	int iVar0;
	
	if (bParam1 != func_33())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1))
		{
			if (bParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_636(bParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_2520(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_636(bool bParam0, bool bParam1)//Position - 0x25BCD
{
	int iVar0;
	
	if (bParam0 != func_33() && bParam1 != func_33())
	{
		iVar0 = func_61(bParam0);
		if (iVar0 != func_33())
		{
			return iVar0 == func_61(bParam1);
		}
	}
	return 0;
}

void func_637(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x25C09
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	
	func_878(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_877(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_876(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_874(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496)
			{
				if (func_873(PLAYER::PLAYER_ID()) <= 0)
				{
					func_872();
				}
			}
			else if (func_873(PLAYER::PLAYER_ID()) > 0)
			{
				func_871();
			}
			else
			{
				func_872();
			}
		}
		else
		{
			func_870();
		}
	}
	func_857(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_854(iParam0, uParam2, &iVar0, &iVar5);
	func_833(iParam0, uParam2, &iVar0, &iVar5);
	func_830(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_823(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	bVar8 = func_28();
	if (bVar8 != func_33() && iParam0 != 148)
	{
		if (func_290(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_821(PLAYER::PLAYER_ID(), bVar8, 1))
			{
				func_812(&iVar0, 1);
			}
		}
	}
	func_807(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		func_806();
		func_761(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		func_735(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_734(iParam0, iVar0);
		if (func_733(iParam0))
		{
			if (func_732(iParam0) > -1)
			{
				func_731(func_732(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		func_730(&Global_2725869, 0, 0);
	}
	if (func_561(PLAYER::PLAYER_ID()) || func_565(PLAYER::PLAYER_ID()))
	{
		func_721(iParam0);
	}
	if ((func_543(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (func_551(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((func_720(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (func_719(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (func_718(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (func_550(iParam0))
	{
		if (func_717(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((func_714(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (func_713(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (func_712(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (func_711(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (func_710(iParam0) || func_709(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	func_638(bParam1, iParam0);
}

void func_638(bool bParam0, int iParam1)//Position - 0x260CA
{
	int iVar0;
	bool bVar1;
	
	if (bParam0)
	{
		iVar0 = -1;
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
			
			case 237:
				bVar1 = true;
				break;
		}
		if (iVar0 != -1)
		{
			if (func_708(iVar0) && !func_648(iVar0))
			{
				func_639(iVar0);
			}
		}
		if (bVar1)
		{
			if (func_708(1) && !func_648(1))
			{
				func_639(1);
			}
		}
	}
}

void func_639(int iParam0)//Position - 0x2617C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		func_643(func_644(func_645(iParam0)), 1, -1);
		func_640(12, func_642(func_645(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_640(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x261CE
{
	int iVar0;
	
	iVar0 = func_641(&Global_1656668);
	Global_1656668[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1656668[iVar0 /*106*/].f_97 = iParam5;
	Global_1656668[iVar0 /*106*/].f_104 = iParam9;
	Global_1656668[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1656668[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_641(var uParam0)//Position - 0x2626A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_642(int iParam0)//Position - 0x26299
{
	switch (iParam0)
	{
		case 1520364990:
			return "CLO_E1M_B_0_0";
			break;
		
		case 580303643:
			return "CLO_E1F_B_0_0";
			break;
		
		case -354644421:
			return "CLO_E1M_B_0_1";
			break;
		
		case 1729643469:
			return "CLO_E1F_B_0_1";
			break;
		
		case -974982704:
			return "CLO_E1M_B_1_0";
			break;
		
		case 48543421:
			return "CLO_E1F_B_1_0";
			break;
		
		case -1215015629:
			return "CLO_E1M_B_1_1";
			break;
		
		case -238218098:
			return "CLO_E1F_B_1_1";
			break;
		
		case -130244513:
			return "CLO_E1M_B_4_0";
			break;
		
		case -377978101:
			return "CLO_E1M_B_4_1";
			break;
		
		case -283591927:
			return "CLO_E1F_B_4_0";
			break;
		
		case -767655595:
			return "CLO_E1F_B_4_1";
			break;
		
		case 758732542:
			return "CLO_E1M_B_2_0";
			break;
		
		case 2020479751:
			return "CLO_E1F_B_2_0";
			break;
		
		case -735454758:
			return "CLO_E1M_O_MUM";
			break;
		
		case 1952506611:
			return "CLO_E1F_O_MUM";
			break;
		
		case -1837429117:
			return "CLO_E1M_L_0_0";
			break;
		
		case 1681548323:
			return "CLO_E1F_L_0_0";
			break;
		
		case 12806934:
			return "CLO_E1M_L_0_1";
			break;
		
		case 849379568:
			return "CLO_E1F_L_0_1";
			break;
		
		case -970841270:
			return "CLO_E1M_U_0_0";
			break;
		
		case -1440833821:
			return "CLO_E1M_U_0_0";
			break;
		
		case -1955249270:
			return "CLO_E1F_U_1_0";
			break;
		
		case -723098420:
			return "CLO_E1F_U_1_0";
			break;
		
		case 465882766:
			return "CLO_E1M_U_0_1";
			break;
		
		case -739773835:
			return "CLO_E1M_U_0_1";
			break;
		
		case -1657018601:
			return "CLO_E1F_U_1_1";
			break;
		
		case -1474491590:
			return "CLO_E1F_U_1_1";
			break;
		
		case 253027288:
			return "CLO_E1M_U_2_0";
			break;
		
		case -64946144:
			return "CLO_E1M_U_2_0";
			break;
		
		case 885438896:
			return "CLO_E1F_U_3_0";
			break;
		
		case -1608650338:
			return "CLO_E1F_U_3_0";
			break;
		
		case 1504277040:
			return "CLO_E1M_U_6_0";
			break;
		
		case 1142343046:
			return "CLO_E1F_U_8_0";
			break;
		
		case 2110919036:
			return "CLO_E1M_U_7_0";
			break;
		
		case 950515127:
			return "CLO_E1F_U_5_0";
			break;
		
		case 1531318984:
			return "CLO_E1M_PH_0_0";
			break;
		
		case -1461011165:
			return "CLO_E1M_PH_1_0";
			break;
		
		case -135772036:
			return "CLO_E1F_PH_0_0";
			break;
		
		case -1089236040:
			return "CLO_E1F_PH_1_0";
			break;
		
		case 355696682:
			return "CLO_E1M_PH_2_0";
			break;
		
		case 186553326:
			return "CLO_E1F_PH_2_0";
			break;
		
		case 826171005:
			return "CLO_E1M_PH_3_0";
			break;
		
		case -1872155720:
			return "CLO_E1M_PH_4_0";
			break;
		
		case 1656291234:
			return "CLO_E1F_PH_3_0";
			break;
		
		case -75647343:
			return "CLO_E1F_PH_4_0";
			break;
		
		case -1144766172:
			return "CLO_E1M_PH_6_0";
			break;
		
		case -1870060660:
			return "CLO_E1M_PH_7_0";
			break;
		
		case 929958499:
			return "CLO_E1F_PH_6_0";
			break;
		
		case -702925102:
			return "CLO_E1F_PH_7_0";
			break;
		
		case -700742821:
			return "CLO_E1M_PH_5_0";
			break;
		
		case -495437453:
			return "CLO_E1F_PH_5_0";
			break;
		
		case 1416462269:
			return "CLO_E1M_PH_5_1";
			break;
		
		case 876109046:
			return "CLO_E1F_PH_5_1";
			break;
		
		case 1102699094:
			return "CLO_E1M_PH_5_2";
			break;
		
		case 1050636740:
			return "CLO_E1F_PH_5_2";
			break;
		
		case 804239042:
			return "CLO_E1M_PH_5_3";
			break;
		
		case 450898502:
			return "CLO_E1F_PH_5_3";
			break;
		
		case -1955435054:
			return "CLO_E1M_PH_5_4";
			break;
		
		case -1696814531:
			return "CLO_E1F_PH_5_4";
			break;
		
		case 1421148248:
			return "CLO_E1M_PH_5_7";
			break;
		
		case -911603753:
			return "CLO_E1F_PH_5_7";
			break;
		
		case -729284612:
			return "CLO_E1M_PH_5_8";
			break;
		
		case 1890899494:
			return "CLO_E1F_PH_5_8";
			break;
		
		case 2034289007:
			return "CLO_E1M_PH_5_5";
			break;
		
		case -317534552:
			return "CLO_E1F_PH_5_5";
			break;
		
		case 1726194869:
			return "CLO_E1M_PH_5_6";
			break;
		
		case -144186542:
			return "CLO_E1F_PH_5_6";
			break;
		
		case 1301358015:
			return "CLO_E1M_E_0_0";
			break;
		
		case 1152102991:
			return "CLO_E1F_E_0_0";
			break;
		
		case 1331092996:
			return "CLO_E1M_LW_0_0";
			break;
		
		case 1068341747:
			return "CLO_E1M_RW_0_0";
			break;
		
		case 955945551:
			return "CLO_E1F_LW_0_0";
			break;
		
		case -297679123:
			return "CLO_E1F_RW_0_0";
			break;
		
		case -1558054305:
			return "CLO_E1M_D_0_0";
			break;
		
		case -1120646463:
			return "CLO_E1F_D_0_0";
			break;
	}
	switch (iParam0)
	{
		case 1724366146:
			return "CLO_SBM_B_5_0";
			break;
		
		case 1150798956:
			return "CLO_SBF_B_5_0";
			break;
		
		case 1368232654:
			return "CLO_SBM_B_5_1";
			break;
		
		case 1386965139:
			return "CLO_SBF_B_5_1";
			break;
		
		case -94018437:
			return "CLO_SBM_B_5_2";
			break;
		
		case -1709770903:
			return "CLO_SBF_B_5_2";
			break;
		
		case -450610695:
			return "CLO_SBM_B_5_3";
			break;
		
		case 1751061498:
			return "CLO_SBF_B_5_3";
			break;
		
		case 1609015485:
			return "CLO_SBM_B_6_0";
			break;
		
		case 126910647:
			return "CLO_SBF_B_6_0";
			break;
		
		case 680702484:
			return "CLO_SBM_B_6_1";
			break;
		
		case -1550141239:
			return "CLO_SBF_B_6_1";
			break;
		
		case 1146349974:
			return "CLO_SBM_B_6_2";
			break;
		
		case -1252172722:
			return "CLO_SBF_B_6_2";
			break;
		
		case -526952607:
			return "CLO_SBM_B_7_0";
			break;
		
		case -569683525:
			return "CLO_SBF_B_7_0";
			break;
		
		case 474546626:
			return "CLO_SBM_B_8_0";
			break;
		
		case -384657478:
			return "CLO_SBF_B_8_0";
			break;
		
		case 1451698965:
			return "CLO_SBM_B_9_0";
			break;
		
		case 594636211:
			return "CLO_SBF_B_9_0";
			break;
		
		case 1689143139:
			return "CLO_SBM_B_9_1";
			break;
		
		case -941181281:
			return "CLO_SBF_B_9_1";
			break;
		
		case 996832476:
			return "CLO_SBM_B_9_2";
			break;
		
		case -640886165:
			return "CLO_SBF_B_9_2";
			break;
		
		case -1493061257:
			return "CLO_SBM_B_10_0";
			break;
		
		case -79907447:
			return "CLO_SBF_B_10_0";
			break;
		
		case -2082706651:
			return "CLO_SBM_B_10_1";
			break;
		
		case 142495756:
			return "CLO_SBF_B_10_1";
			break;
		
		case 1354564847:
			return "CLO_SBM_B_10_2";
			break;
		
		case -542048670:
			return "CLO_SBF_B_10_2";
			break;
		
		case 1810774865:
			return "CLO_SBM_B_10_3";
			break;
		
		case -318531305:
			return "CLO_SBF_B_10_3";
			break;
		
		case 1981796276:
			return "CLO_SBM_B_10_4";
			break;
		
		case -1278531945:
			return "CLO_SBF_B_10_4";
			break;
		
		case 2136597032:
			return "CLO_SBM_B_10_5";
			break;
		
		case -1047477726:
			return "CLO_SBF_B_10_5";
			break;
		
		case 592718366:
			return "CLO_SBM_B_10_6";
			break;
		
		case -1739755620:
			return "CLO_SBF_B_10_6";
			break;
		
		case -219002533:
			return "CLO_SBM_B_10_7";
			break;
		
		case -1509160167:
			return "CLO_SBF_B_10_7";
			break;
		
		case 1025924546:
			return "CLO_SBM_B_10_8";
			break;
		
		case 1437198938:
			return "CLO_SBF_B_10_8";
			break;
		
		case 1182036062:
			return "CLO_SBM_B_10_9";
			break;
		
		case 1665926558:
			return "CLO_SBF_B_10_9";
			break;
		
		case 701427629:
			return "CLO_SBM_B_10_10";
			break;
		
		case 1785401618:
			return "CLO_SBF_B_10_10";
			break;
		
		case 394349330:
			return "CLO_SBM_B_10_11";
			break;
		
		case 2136914681:
			return "CLO_SBF_B_10_11";
			break;
		
		case 1643077609:
			return "CLO_SBM_B_10_12";
			break;
		
		case -988920289:
			return "CLO_SBF_B_10_12";
			break;
		
		case -1885324470:
			return "CLO_SBM_B_10_13";
			break;
		
		case -682136911:
			return "CLO_SBF_B_10_13";
			break;
		
		case 1107468304:
			return "CLO_SBM_B_10_14";
			break;
		
		case 562855706:
			return "CLO_SBF_B_10_14";
			break;
		
		case 1881865312:
			return "CLO_SBM_B_10_15";
			break;
		
		case -230809474:
			return "CLO_SBF_B_10_15";
			break;
		
		case -1768240833:
			return "CLO_SBM_B_10_16";
			break;
		
		case 1042921556:
			return "CLO_SBF_B_10_16";
			break;
		
		case -992074299:
			return "CLO_SBM_B_10_17";
			break;
		
		case 273734819:
			return "CLO_SBF_B_10_17";
			break;
		
		case 2076185482:
			return "CLO_SBM_B_10_18";
			break;
		
		case 1519874351:
			return "CLO_SBF_B_10_18";
			break;
		
		case -1458409938:
			return "CLO_SBM_B_10_19";
			break;
		
		case 725193332:
			return "CLO_SBF_B_10_19";
			break;
		
		case 2068888083:
			return "CLO_SBM_B_10_20";
			break;
		
		case 219467307:
			return "CLO_SBF_B_10_20";
			break;
		
		case 1628276109:
			return "CLO_SBM_B_10_21";
			break;
		
		case -1155028386:
			return "CLO_SBF_B_10_21";
			break;
		
		case -1880988874:
			return "CLO_SBM_B_10_22";
			break;
		
		case -224880333:
			return "CLO_SBF_B_10_22";
			break;
		
		case -2052829510:
			return "CLO_SBM_B_10_23";
			break;
		
		case 551220663:
			return "CLO_SBF_B_10_23";
			break;
		
		case -1463511814:
			return "CLO_SBM_B_10_24";
			break;
		
		case -967589706:
			return "CLO_SBF_B_10_24";
			break;
		
		case -695766913:
			return "CLO_SBM_B_10_25";
			break;
		
		case 1972510516:
			return "CLO_SBF_B_10_25";
			break;
		
		case 991438416:
			return "CLO_SBM_B_0_0";
			break;
		
		case -843223043:
			return "CLO_SBF_B_0_0";
			break;
		
		case 1548914004:
			return "CLO_SBM_B_1_0";
			break;
		
		case -123672751:
			return "CLO_SBF_B_1_0";
			break;
		
		case -1925419225:
			return "CLO_SBM_B_1_1";
			break;
		
		case -1661685694:
			return "CLO_SBF_B_1_1";
			break;
		
		case 2060307018:
			return "CLO_SBM_B_1_2";
			break;
		
		case -1353820939:
			return "CLO_SBF_B_1_2";
			break;
		
		case 1323846664:
			return "CLO_SBM_B_3_0";
			break;
		
		case -427532527:
			return "CLO_SBF_B_3_0";
			break;
		
		case -1274794483:
			return "CLO_SBM_B_4_0";
			break;
		
		case -9589384:
			return "CLO_SBF_B_4_0";
			break;
		
		case 1812702544:
			return "CLO_SBM_O_SAS";
			break;
		
		case 1981007875:
			return "CLO_SBF_O_SAS";
			break;
		
		case -671033806:
			return "CLO_SBM_L_2_0";
			break;
		
		case 1119071129:
			return "CLO_SBF_L_0_0";
			break;
		
		case -913655482:
			return "CLO_SBM_L_2_1";
			break;
		
		case 882446180:
			return "CLO_SBF_L_0_1";
			break;
		
		case 143421535:
			return "CLO_SBM_U_13_0";
			break;
		
		case -1761958295:
			return "CLO_SBF_U_15_0";
			break;
		
		case -1001558832:
			return "CLO_SBM_U_14_0";
			break;
		
		case -1576706555:
			return "CLO_SBF_U_19_0";
			break;
		
		case -911845435:
			return "CLO_SBM_U_15_0";
			break;
		
		case 314419657:
			return "CLO_SBM_U_15_0";
			break;
		
		case 1037561437:
			return "CLO_SBF_U_20_0";
			break;
		
		case 1929751173:
			return "CLO_SBM_U_15_1";
			break;
		
		case 1658833420:
			return "CLO_SBM_U_15_1";
			break;
		
		case 189073720:
			return "CLO_SBF_U_20_1";
			break;
		
		case -1404003046:
			return "CLO_SBM_U_15_2";
			break;
		
		case 2031875716:
			return "CLO_SBM_U_15_2";
			break;
		
		case -241642020:
			return "CLO_SBF_U_20_2";
			break;
		
		case -1346545254:
			return "CLO_SBM_U_17_0";
			break;
		
		case -926305599:
			return "CLO_SBF_U_8_0";
			break;
		
		case -751416224:
			return "CLO_SBM_U_7_0";
			break;
		
		case 2008532977:
			return "CLO_SBM_U_7_0";
			break;
		
		case 1892374951:
			return "CLO_SBF_U_21_0";
			break;
		
		case -458118385:
			return "CLO_SBF_U_21_0";
			break;
	}
	switch (iParam0)
	{
		case 559556286:
			return "CLO_SBM_PH_6_0";
			break;
		
		case -1685979367:
			return "CLO_SBF_PH_6_0";
			break;
		
		case 1893746121:
			return "CLO_SBM_PH_6_1";
			break;
		
		case -1984799878:
			return "CLO_SBF_PH_6_1";
			break;
		
		case -2111412139:
			return "CLO_SBM_PH_6_2";
			break;
		
		case -1348229268:
			return "CLO_SBF_PH_6_2";
			break;
		
		case 1412598894:
			return "CLO_SBM_PH_6_3";
			break;
		
		case -1646853165:
			return "CLO_SBF_PH_6_3";
			break;
		
		case -1381777825:
			return "CLO_SBM_PH_6_4";
			break;
		
		case -753308073:
			return "CLO_SBF_PH_6_4";
			break;
		
		case 2076433048:
			return "CLO_SBM_PH_6_5";
			break;
		
		case -1032598260:
			return "CLO_SBF_PH_6_5";
			break;
		
		case -2032013100:
			return "CLO_SBM_PH_6_6";
			break;
		
		case 1987720474:
			return "CLO_SBF_PH_6_6";
			break;
		
		case 1478169415:
			return "CLO_SBM_PH_6_7";
			break;
		
		case 1692373477:
			return "CLO_SBF_PH_6_7";
			break;
		
		case 859949461:
			return "CLO_SBM_PH_6_8";
			break;
		
		case -1709310879:
			return "CLO_SBF_PH_6_8";
			break;
		
		case 1085072491:
			return "CLO_SBM_PH_6_9";
			break;
		
		case -1983718485:
			return "CLO_SBF_PH_6_9";
			break;
		
		case -1615111379:
			return "CLO_SBM_PH_6_10";
			break;
		
		case 1420344251:
			return "CLO_SBF_PH_6_10";
			break;
		
		case 1313880152:
			return "CLO_SBM_PH_6_11";
			break;
		
		case 870841382:
			return "CLO_SBF_PH_6_11";
			break;
		
		case -2006766467:
			return "CLO_SBM_PH_6_12";
			break;
		
		case 512512367:
			return "CLO_SBF_PH_6_12";
			break;
		
		case 1922367713:
			return "CLO_SBM_PH_6_13";
			break;
		
		case -792119830:
			return "CLO_SBF_PH_6_13";
			break;
		
		case -235225048:
			return "CLO_SBF_PH_0_0";
			break;
		
		case 1715116009:
			return "CLO_SBM_PH_1_0";
			break;
		
		case 887067243:
			return "CLO_SBF_PH_0_0";
			break;
		
		case 1317891885:
			return "CLO_SBF_PH_1_0";
			break;
		
		case -465470364:
			return "CLO_SBM_PH_2_0";
			break;
		
		case 1043334673:
			return "CLO_SBM_PH_4_0";
			break;
		
		case 789845898:
			return "CLO_SBF_PH_2_0";
			break;
		
		case -394412060:
			return "CLO_SBF_PH_4_0";
			break;
		
		case -416906702:
			return "CLO_SBM_PH_2_1";
			break;
		
		case -1402379642:
			return "CLO_SBM_PH_4_1";
			break;
		
		case 1021489959:
			return "CLO_SBF_PH_2_1";
			break;
		
		case -741370232:
			return "CLO_SBF_PH_4_1";
			break;
		
		case 961926275:
			return "CLO_SBM_PH_3_0";
			break;
		
		case 1123357994:
			return "CLO_SBM_PH_7_0";
			break;
		
		case 1539883241:
			return "CLO_SBF_PH_3_0";
			break;
		
		case 1091005714:
			return "CLO_SBF_PH_7_0";
			break;
		
		case -888504515:
			return "CLO_SBM_PH_8_0";
			break;
		
		case -1014747586:
			return "CLO_SBF_PH_8_0";
			break;
		
		case 2146292094:
			return "CLO_SBM_E_0_0";
			break;
		
		case -396677513:
			return "CLO_SBF_E_0_0";
			break;
		
		case -1936266544:
			return "CLO_SBM_E_0_1";
			break;
		
		case 1153951575:
			return "CLO_SBF_E_0_1";
			break;
		
		case -1636528489:
			return "CLO_SBM_E_0_2";
			break;
		
		case 914934489:
			return "CLO_SBF_E_0_2";
			break;
		
		case -1358549062:
			return "CLO_SBM_E_0_3";
			break;
		
		case -41363246:
			return "CLO_SBF_E_0_3";
			break;
		
		case -1189002256:
			return "CLO_SBM_E_0_4";
			break;
		
		case 793295961:
			return "CLO_SBF_E_0_4";
			break;
		
		case -915413875:
			return "CLO_SBM_E_0_5";
			break;
		
		case 569614739:
			return "CLO_SBF_E_0_5";
			break;
		
		case -214419427:
			return "CLO_SBM_E_0_6";
			break;
		
		case 246381331:
			return "CLO_SBF_E_0_6";
			break;
		
		case -477128512:
			return "CLO_SBM_E_0_7";
			break;
		
		case -521101418:
			return "CLO_SBF_E_0_7";
			break;
		
		case -172671733:
			return "CLO_SBM_E_0_8";
			break;
		
		case -366235124:
			return "CLO_SBF_E_0_8";
			break;
		
		case 1003967:
			return "CLO_SBM_E_0_9";
			break;
		
		case 1797075941:
			return "CLO_SBF_E_0_9";
			break;
		
		case -1484108735:
			return "CLO_SBM_E_0_10";
			break;
		
		case 325782160:
			return "CLO_SBF_E_0_10";
			break;
		
		case -683332682:
			return "CLO_SBM_E_0_11";
			break;
		
		case 679163056:
			return "CLO_SBF_E_0_11";
			break;
	}
	switch (iParam0)
	{
		case -1332620073:
			return "CLO_SBM_S_1_0";
			break;
		
		case 499837685:
			return "CLO_SBF_S_1_0";
			break;
		
		case -1258274341:
			return "CLO_SBM_F_5_0";
			break;
		
		case -51159746:
			return "CLO_SBF_F_5_0";
			break;
		
		case -1555161481:
			return "CLO_SBM_F_5_1";
			break;
		
		case 110981266:
			return "CLO_SBF_F_5_1";
			break;
		
		case 287734290:
			return "CLO_SBM_F_5_2";
			break;
		
		case -2001210171:
			return "CLO_SBF_F_5_2";
			break;
		
		case -1316734493:
			return "CLO_SBM_F_5_3";
			break;
		
		case 1653647479:
			return "CLO_SBF_F_5_3";
			break;
		
		case -1019355818:
			return "CLO_SBM_F_5_4";
			break;
		
		case 909430720:
			return "CLO_SBF_F_5_4";
			break;
		
		case -975052130:
			return "CLO_SBM_F_5_5";
			break;
		
		case 1073931100:
			return "CLO_SBF_F_5_5";
			break;
		
		case 1470072347:
			return "CLO_SBM_F_5_6";
			break;
		
		case -585753204:
			return "CLO_SBF_F_5_6";
			break;
		
		case 1805430293:
			return "CLO_SBM_F_5_7";
			break;
		
		case -427282320:
			return "CLO_SBF_F_5_7";
			break;
		
		case -1908018329:
			return "CLO_SBM_F_5_8";
			break;
		
		case -1198041977:
			return "CLO_SBF_F_5_8";
			break;
		
		case 1512195414:
			return "CLO_SBM_F_6_0";
			break;
		
		case -189883950:
			return "CLO_SBF_F_6_0";
			break;
		
		case 1214292435:
			return "CLO_SBM_F_6_1";
			break;
		
		case -409075791:
			return "CLO_SBF_F_6_1";
			break;
		
		case 1187815083:
			return "CLO_SBM_F_6_2";
			break;
		
		case -785132835:
			return "CLO_SBF_F_6_2";
			break;
		
		case 891550558:
			return "CLO_SBM_F_6_3";
			break;
		
		case -984958197:
			return "CLO_SBF_F_6_3";
			break;
		
		case -1649849245:
			return "CLO_SBM_F_6_4";
			break;
		
		case -1223156058:
			return "CLO_SBF_F_6_4";
			break;
		
		case -1947555610:
			return "CLO_SBM_F_6_5";
			break;
		
		case -1596132820:
			return "CLO_SBF_F_6_5";
			break;
		
		case 2044298436:
			return "CLO_SBM_F_6_6";
			break;
		
		case -1826662735:
			return "CLO_SBF_F_6_6";
			break;
		
		case 1746395457:
			return "CLO_SBM_F_6_7";
			break;
		
		case 2085693717:
			return "CLO_SBF_F_6_7";
			break;
		
		case -398761590:
			return "CLO_SBM_F_6_8";
			break;
		
		case 1855622568:
			return "CLO_SBF_F_6_8";
			break;
		
		case -426746316:
			return "CLO_SBM_F_6_9";
			break;
		
		case 1475567706:
			return "CLO_SBF_F_6_9";
			break;
		
		case -1093070644:
			return "CLO_SBM_F_6_10";
			break;
		
		case 382065296:
			return "CLO_SBF_F_6_10";
			break;
		
		case 2060159158:
			return "CLO_SBM_F_6_11";
			break;
		
		case 1778549024:
			return "CLO_SBF_F_6_11";
			break;
		
		case -1400673243:
			return "CLO_SBM_F_6_12";
			break;
		
		case 2060001965:
			return "CLO_SBF_F_6_12";
			break;
		
		case 1464648121:
			return "CLO_SBM_F_6_13";
			break;
		
		case 1301923919:
			return "CLO_SBF_F_6_13";
			break;
		
		case -2015386914:
			return "CLO_SBM_F_6_14";
			break;
		
		case 1616080322:
			return "CLO_SBF_F_6_14";
			break;
	}
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return "CLO_FXM_U_10_2";
			break;
		
		case -1166011267:
		case -906547381:
			return "CLO_FXM_U_10_3";
			break;
		
		case -721794703:
		case 308133919:
			return "CLO_FXM_U_10_4";
			break;
		
		case 488495423:
		case 1072091359:
			return "CLO_FXM_U_10_0";
			break;
		
		case -523083487:
		case 508464559:
			return "CLO_FXM_U_10_1";
			break;
		
		case -1498989066:
		case 452715244:
			return "CLO_FXM_B_0_0";
			break;
		
		case 1281689967:
		case -112025702:
			return "CLO_FXM_B_0_1";
			break;
		
		case 841209069:
		case 128072761:
			return "CLO_FXM_B_0_2";
			break;
		
		case 1742192724:
		case -705996596:
			return "CLO_FXM_B_0_3";
			break;
		
		case -2022943269:
		case 733291825:
			return "CLO_FXM_B_1_0";
			break;
		
		case -804690608:
		case -101367374:
			return "CLO_FXM_B_1_1";
			break;
		
		case -1100955137:
		case 1328802862:
			return "CLO_FXM_B_1_2";
			break;
		
		case 2089631321:
		case 495519961:
			return "CLO_FXM_B_1_3";
			break;
		
		case 591101258:
		case -693204279:
			return "CLO_FXM_B_2_0";
			break;
		
		case -1278730655:
		case 150499164:
			return "CLO_FXM_B_2_1";
			break;
		
		case -1215879713:
		case -129905169:
			return "CLO_FXM_B_2_2";
			break;
		
		case -918271655:
		case 612902523:
			return "CLO_FXM_B_2_3";
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return "CLO_TRM_D_30_1";
			break;
		
		case 991513037:
		case -1634791241:
			return "CLO_TRM_DECL_8";
			break;
		
		case -675149090:
		case -1227437948:
			return "CLO_TRM_DECL_10";
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return "CLO_TRM_U_11_0";
			break;
		
		case -1686814509:
		case -1408179706:
			return "CLO_TRM_DECL_11";
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return "CLO_TRM_O_BS_1";
			break;
		
		case -126686984:
		case 2057911750:
			return "CLO_TRM_U_9_15";
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return "CLO_TRM_U_13_2";
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return "CLO_TRM_U_13_0";
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return "CLO_TRM_U_13_1";
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return "CLO_TRM_PH_1_0";
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return "CLO_TRM_PH_1_1";
			break;
		
		case -1174740608:
		case 1620783517:
			return "CLO_TRM_O_MS_0";
			break;
		
		case -1943796269:
		case -1699338794:
			return "CLO_TRM_O_MS_1";
			break;
		
		case -1372800957:
			return "PS_BAG_64";
			break;
		
		case -1125170035:
			return "PS_BAG_65";
			break;
		
		case 1276052663:
			return "PS_BAG_66";
			break;
		
		case 2138708412:
		case -1894139601:
			return "CLO_TRM_DECL_12";
			break;
		
		case 205793848:
		case -786254870:
			return "CLO_TRM_DECL_13";
			break;
		
		case 1325175663:
		case -773154515:
			return "CLO_TRM_DECL_14";
			break;
		
		case -368088972:
		case 1778247767:
			return "CLO_TRM_DECL_15";
			break;
		
		case -1771053026:
		case -648092145:
			return "CLO_TRM_DECL_16";
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return "CLO_TRM_O_BS_0";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return "CLO_H4M_DECL_55";
			break;
		
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return "CLO_H4M_DECL_57";
			break;
		
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return "CLO_H4M_DECL_59";
			break;
		
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return "CLO_H4M_DECL_61";
			break;
		
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return "CLO_H4M_DECL_63";
			break;
		
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return "CLO_H4M_DECL_65";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return "CLO_H4M_DECL_30";
			break;
		
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return "CLO_H4M_DECL_32";
			break;
		
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return "CLO_H4M_DECL_28";
			break;
		
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return "CLO_H4M_DECL_29";
			break;
		
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return "CLO_H4M_DECL_31";
			break;
		
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return "CLO_H4M_DECL_22";
			break;
		
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return "CLO_H4M_DECL_23";
			break;
		
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return "CLO_H4M_DECL_20";
			break;
		
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return "CLO_H4M_DECL_21";
			break;
		
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return "CLO_H4M_DECL_3";
			break;
		
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return "CLO_H4M_DECL_4";
			break;
		
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return "CLO_H4M_DECL_5";
			break;
		
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return "CLO_H4M_DECL_6";
			break;
		
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return "CLO_H4M_DECL_27";
			break;
		
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return "CLO_H4M_DECL_26";
			break;
		
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return "CLO_H4M_DECL_25";
			break;
		
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return "CLO_H4M_DECL_24";
			break;
		
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return "CLO_H4M_DECL_2";
			break;
		
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return "CLO_H4M_DECL_1";
			break;
		
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return "CLO_H4M_DECL_0";
			break;
		
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return "CLO_H4M_DECL_7";
			break;
		
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return "CLO_H4M_DECL_8";
			break;
		
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return "CLO_H4M_DECL_9";
			break;
		
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return "CLO_H4M_DECL_10";
			break;
		
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return "CLO_H4M_DECL_11";
			break;
		
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return "CLO_H4M_DECL_12";
			break;
		
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return "CLO_H4M_DECL_13";
			break;
		
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return "CLO_H4M_DECL_14";
			break;
		
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return "CLO_H4M_DECL_15";
			break;
		
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return "CLO_H4M_DECL_16";
			break;
		
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return "CLO_H4M_DECL_17";
			break;
		
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return "CLO_H4M_DECL_18";
			break;
		
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return "CLO_H4M_DECL_19";
			break;
		
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return "CLO_H4M_DECL_33";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return "CLO_H4F_U_8_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return "CLO_H4F_U_10_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return "CLO_H4F_U_5_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return "CLO_H4F_U_5_1";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return "CLO_H4F_U_7_1";
			break;
		
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return "CLO_H4M_DECL_48";
			break;
		
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return "CLO_H4M_DECL_47";
			break;
		
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return "CLO_H4M_DECL_45";
			break;
		
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return "CLO_H4M_DECL_46";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return "CLO_H4F_U_7_5";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return "CLO_H4F_U_7_4";
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return "CLO_H4F_D_0_0";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return "CLO_H4F_U_7_2";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return "CLO_H4F_U_7_3";
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return "CLO_H4F_U_4_0";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return "CLO_H4F_U_6_4";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return "CLO_H4F_U_6_3";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return "CLO_H4F_U_6_2";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return "CLO_H4F_U_6_1";
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return "CLO_H4F_U_6_0";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return "CLO_H4F_L_1_0";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return "CLO_H4F_L_1_1";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return "CLO_H4F_L_1_2";
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return "CLO_H4F_L_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return "CLO_H4F_PH_1_0";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return "CLO_H4F_PH_1_1";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return "CLO_H4F_PH_1_2";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return "CLO_H4F_PH_1_3";
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return "CLO_H4F_PH_1_4";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return "CLO_H4F_PLW_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return "CLO_H4F_PLW_0_1";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return "CLO_H4F_PLW_0_2";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return "CLO_H4F_PLW_0_3";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return "CLO_H4F_PLW_0_4";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return "CLO_H4F_PLW_0_5";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return "CLO_H4F_PLW_0_6";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return "CLO_H4F_PLW_0_7";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return "CLO_H4F_PLW_0_8";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return "CLO_H4F_PLW_0_9";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return "CLO_H4F_PLW_010";
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return "CLO_H4F_PLW_011";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return "CLO_H4F_PEY_0_0";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return "CLO_H4F_PEY_0_1";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return "CLO_H4F_PEY_0_2";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return "CLO_H4F_PEY_0_3";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return "CLO_H4F_PEY_0_4";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return "CLO_H4F_PEY_0_5";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return "CLO_H4F_PEY_0_6";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return "CLO_H4F_PEY_0_7";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return "CLO_H4F_PEY_0_8";
			break;
		
		case joaat("ch1_12_props_combo10_87_lod"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return "CLO_H4F_PEY_0_9";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return "CLO_H4F_PEY_010";
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return "CLO_H4F_PEY_011";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return "CLO_H4F_T_13_0";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return "CLO_H4F_T_13_1";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return "CLO_H4F_T_13_2";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return "CLO_H4F_T_13_3";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return "CLO_H4F_T_13_4";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return "CLO_H4F_T_13_5";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return "CLO_H4F_T_13_6";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return "CLO_H4F_T_13_7";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return "CLO_H4F_T_13_8";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return "CLO_H4F_T_13_9";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return "CLO_H4F_T_13_10";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return "CLO_H4F_T_13_11";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return "CLO_H4F_T_13_12";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return "CLO_H4F_T_13_13";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return "CLO_H4F_T_13_14";
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return "CLO_H4F_T_13_15";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return "CLO_H4M_B_4_0";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return "CLO_H4M_B_4_1";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return "CLO_H4M_B_4_2";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return "CLO_H4M_B_4_3";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return "CLO_H4M_B_4_4";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return "CLO_H4M_B_4_5";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return "CLO_H4M_B_4_6";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return "CLO_H4M_B_4_7";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return "CLO_H4M_B_4_8";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return "CLO_H4M_B_4_9";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return "CLO_H4M_B_4_10";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return "CLO_H4M_B_4_11";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return "CLO_H4M_B_4_12";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return "CLO_H4M_B_4_13";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return "CLO_H4M_B_4_14";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return "CLO_H4M_B_4_15";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return "CLO_H4M_B_4_16";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return "CLO_H4M_B_4_17";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return "CLO_H4M_B_4_18";
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return "CLO_H4M_B_4_19";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return "CLO_H4M_PEY_1_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return "CLO_H4M_PEY_1_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return "CLO_H4M_PEY_1_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return "CLO_H4M_PEY_1_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return "CLO_H4M_PEY_1_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return "CLO_H4M_PEY_1_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return "CLO_H4M_PEY_1_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return "CLO_H4M_PEY_1_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return "CLO_H4M_PEY_1_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return "CLO_H4M_PEY_1_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return "CLO_H4M_PEY_110";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return "CLO_H4M_PEY_111";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return "CLO_H4M_PEY_2_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return "CLO_H4M_PEY_2_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return "CLO_H4M_PEY_2_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return "CLO_H4M_PEY_2_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return "CLO_H4M_PEY_2_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return "CLO_H4M_PEY_2_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return "CLO_H4M_PEY_2_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return "CLO_H4M_PEY_2_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return "CLO_H4M_PEY_2_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return "CLO_H4M_PEY_2_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return "CLO_H4M_PEY_210";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return "CLO_H4M_PEY_211";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return "CLO_H4M_PEY_3_0";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return "CLO_H4M_PEY_3_1";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return "CLO_H4M_PEY_3_2";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return "CLO_H4M_PEY_3_3";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return "CLO_H4M_PEY_3_4";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return "CLO_H4M_PEY_3_5";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return "CLO_H4M_PEY_3_6";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return "CLO_H4M_PEY_3_7";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return "CLO_H4M_PEY_3_8";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return "CLO_H4M_PEY_3_9";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return "CLO_H4M_PEY_310";
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return "CLO_H4M_PEY_311";
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
			return "CLO_SUM_DECL_0";
			break;
		
		case 676807987:
			return "CLO_SUF_DECL_0";
			break;
		
		case 1888753218:
			return "CLO_SUM_DECL_1";
			break;
		
		case 272160153:
			return "CLO_SUF_DECL_1";
			break;
		
		case -552467991:
			return "CLO_SUM_DECL_2";
			break;
		
		case 1593344440:
			return "CLO_SUF_DECL_2";
			break;
		
		case -1655919948:
			return "CLO_SUM_DECL_3";
			break;
		
		case 546222390:
			return "CLO_SUF_DECL_3";
			break;
		
		case -917106601:
			return "CLO_SUM_DECL_4";
			break;
		
		case 1983375900:
			return "CLO_SUF_DECL_4";
			break;
		
		case 1595446967:
			return "CLO_SUM_DECL_5";
			break;
		
		case -620589387:
			return "CLO_SUF_DECL_5";
			break;
		
		case -530593323:
			return "CLO_SUM_DECL_6";
			break;
		
		case 383923929:
			return "CLO_SUF_DECL_6";
			break;
		
		case 561619447:
			return "CLO_SUM_DECL_7";
			break;
		
		case -1703406594:
			return "CLO_SUF_DECL_7";
			break;
		
		case -1913656173:
			return "CLO_SUM_DECL_8";
			break;
		
		case -398286533:
			return "CLO_SUF_DECL_8";
			break;
		
		case -1766901922:
			return "CLO_SUM_DECL_9";
			break;
		
		case -80478106:
			return "CLO_SUF_DECL_9";
			break;
		
		case 2091781849:
			return "CLO_SUM_DECL_10";
			break;
		
		case 1835331655:
			return "CLO_SUF_DECL_10";
			break;
		
		case 1824588341:
			return "CLO_SUM_DECL_11";
			break;
		
		case -1650596870:
			return "CLO_SUF_DECL_11";
			break;
		
		case 242597641:
			return "CLO_SUM_DECL_12";
			break;
		
		case 1231926496:
			return "CLO_SUF_DECL_12";
			break;
		
		case 566785691:
			return "CLO_SUM_DECL_13";
			break;
		
		case -1506181253:
			return "CLO_SUF_DECL_13";
			break;
		
		case -2091312957:
			return "CLO_SUM_DECL_14";
			break;
		
		case -1737145605:
			return "CLO_SUF_DECL_14";
			break;
		
		case -2079214831:
			return "CLO_SUM_DECL_15";
			break;
		
		case 1673851512:
			return "CLO_SUF_DECL_15";
			break;
		
		case 1359156274:
			return "CLO_SUM_DECL_16";
			break;
		
		case 1023339598:
			return "CLO_SUF_DECL_16";
			break;
		
		case -1302300594:
			return "CLO_SUM_DECL_17";
			break;
		
		case -163738770:
			return "CLO_SUF_DECL_17";
			break;
		
		case -1351518396:
			return "CLO_SUM_DECL_18";
			break;
		
		case 1863218823:
			return "CLO_SUF_DECL_18";
			break;
		
		case -797874817:
			return "CLO_SUM_DECL_19";
			break;
		
		case 333966447:
			return "CLO_SUF_DECL_19";
			break;
		
		case -385507297:
			return "CLO_SUM_DECL_20";
			break;
		
		case 1412626052:
			return "CLO_SUF_DECL_20";
			break;
		
		case 2011910758:
			return "CLO_SUM_DECL_21";
			break;
		
		case -39100956:
			return "CLO_SUF_DECL_21";
			break;
		
		case -1953985443:
			return "CLO_SUM_DECL_22";
			break;
		
		case 1631533003:
			return "CLO_SUF_DECL_22";
			break;
		
		case -1124222352:
			return "CLO_SUM_DECL_23";
			break;
		
		case 1493430918:
			return "CLO_SUF_DECL_23";
			break;
		
		case -1806994767:
			return "CLO_SUM_DECL_24";
			break;
		
		case -196693334:
			return "CLO_SUF_DECL_24";
			break;
		
		case -1445761968:
			return "CLO_SUM_DECL_25";
			break;
		
		case 553507495:
			return "CLO_SUF_DECL_25";
			break;
		
		case -89186417:
			return "CLO_SUM_DECL_26";
			break;
		
		case 2003474700:
			return "CLO_SUF_DECL_26";
			break;
		
		case -308083083:
			return "CLO_SUM_DECL_27";
			break;
		
		case 1121792228:
			return "CLO_SUF_DECL_27";
			break;
		
		case 667714507:
			return "CLO_SUM_DECL_28";
			break;
		
		case -1424651669:
			return "CLO_SUF_DECL_28";
			break;
		
		case -1610210252:
			return "CLO_SUM_DECL_29";
			break;
		
		case -1454164346:
			return "CLO_SUF_DECL_29";
			break;
		
		case 1868506246:
			return "CLO_SUM_B_3_4";
			break;
		
		case -307572086:
			return "CLO_SUF_B_3_4";
			break;
		
		case 1686703834:
			return "CLO_SUM_B_3_5";
			break;
		
		case -1486436861:
			return "CLO_SUF_B_3_5";
			break;
		
		case -1811091999:
			return "CLO_SUM_B_3_6";
			break;
		
		case -1705464857:
			return "CLO_SUF_B_3_6";
			break;
		
		case 414381867:
			return "CLO_SUM_B_3_7";
			break;
		
		case -469188798:
			return "CLO_SUF_B_3_7";
			break;
		
		case -1206261789:
			return "CLO_SUM_L_1_25";
			break;
		
		case 692621401:
			return "CLO_SUF_L_2_25";
			break;
		
		case 1395785293:
			return "CLO_SUM_U_0_25";
			break;
		
		case 60231546:
			return "CLO_SUF_U_0_25";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
			return "CLO_VWM_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return "CLO_VWF_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
			return "CLO_VWM_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return "CLO_VWF_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
			return "CLO_VWM_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return "CLO_VWF_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
			return "CLO_VWM_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return "CLO_VWF_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
			return "CLO_VWM_U_23_5";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return "CLO_VWF_U_21_5";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
			return "CLO_VWM_U_23_8";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return "CLO_VWF_U_21_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
			return "CLO_VWM_U_23_9";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return "CLO_VWF_U_21_9";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
			return "CLO_VWM_U_23_10";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return "CLO_VWF_U_21_10";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
			return "CLO_VWM_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return "CLO_VWF_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
			return "CLO_VWM_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return "CLO_VMF_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
			return "CLO_VWM_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return "CLO_VWF_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
			return "CLO_VWM_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return "CLO_VWF_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
			return "CLO_VWM_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return "CLO_VWF_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
			return "CLO_VWM_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return "CLO_VWF_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
			return "CLO_VWM_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return "CLO_VWF_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
			return "CLO_VWM_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return "CLO_VWF_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
			return "CLO_VWM_U_23_0";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return "CLO_VMF_U_21_0";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
			return "CLO_VWM_U_23_2";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return "CLO_VMF_U_21_2";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
			return "CLO_VWM_U_23_4";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return "CLO_VMF_U_21_4";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
			return "CLO_VWM_U_23_7";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return "CLO_VMF_U_21_7";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
			return "CLO_AWM_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_000_F"):
			return "CLO_AWF_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_001_M"):
			return "CLO_AWM_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_001_F"):
			return "CLO_AWF_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_002_M"):
			return "CLO_AWM_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_002_F"):
			return "CLO_AWF_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_003_M"):
			return "CLO_AWM_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_003_F"):
			return "CLO_AWF_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_004_M"):
			return "CLO_AWM_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_004_F"):
			return "CLO_AWF_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_005_M"):
			return "CLO_AWM_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_005_F"):
			return "CLO_AWF_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_006_M"):
			return "CLO_AWM_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_006_F"):
			return "CLO_AWF_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_007_M"):
			return "CLO_AWM_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_007_F"):
			return "CLO_AWF_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_008_M"):
			return "CLO_AWM_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_008_F"):
			return "CLO_AWF_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_009_M"):
			return "CLO_AWM_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_009_F"):
			return "CLO_AWF_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_010_M"):
			return "CLO_AWM_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_010_F"):
			return "CLO_AWF_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_011_M"):
			return "CLO_AWM_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_011_F"):
			return "CLO_AWF_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_012_M"):
			return "CLO_AWM_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_012_F"):
			return "CLO_AWF_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_013_M"):
			return "CLO_AWM_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_013_F"):
			return "CLO_AWF_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_014_M"):
			return "CLO_AWM_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_014_F"):
			return "CLO_AWF_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_015_M"):
			return "CLO_AWM_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_015_F"):
			return "CLO_AWF_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_016_M"):
			return "CLO_AWM_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_016_F"):
			return "CLO_AWF_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_017_M"):
			return "CLO_AWM_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_017_F"):
			return "CLO_AWF_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_018_M"):
			return "CLO_AWM_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_018_F"):
			return "CLO_AWF_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_019_M"):
			return "CLO_AWM_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_019_F"):
			return "CLO_AWF_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_020_M"):
			return "CLO_AWM_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_020_F"):
			return "CLO_AWF_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_021_M"):
			return "CLO_AWM_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_021_F"):
			return "CLO_AWF_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_022_M"):
			return "CLO_AWM_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_022_F"):
			return "CLO_AWF_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_023_M"):
			return "CLO_AWM_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_023_F"):
			return "CLO_AWF_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_024_M"):
			return "CLO_AWM_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_024_F"):
			return "CLO_AWF_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_025_M"):
			return "CLO_AWM_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_025_F"):
			return "CLO_AWF_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_026_M"):
			return "CLO_AWM_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_026_F"):
			return "CLO_AWF_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_027_M"):
			return "CLO_AWM_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_027_F"):
			return "CLO_AWF_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_028_M"):
			return "CLO_AWM_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_028_F"):
			return "CLO_AWF_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_029_M"):
			return "CLO_AWM_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_029_F"):
			return "CLO_AWF_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_030_M"):
			return "CLO_AWM_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_030_F"):
			return "CLO_AWF_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_031_M"):
			return "CLO_AWM_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_031_F"):
			return "CLO_AWF_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_032_M"):
			return "CLO_AWM_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_032_F"):
			return "CLO_AWF_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_033_M"):
			return "CLO_AWM_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_033_F"):
			return "CLO_AWF_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_034_M"):
			return "CLO_AWM_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_034_F"):
			return "CLO_AWF_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_035_M"):
			return "CLO_AWM_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_035_F"):
			return "CLO_AWF_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_036_M"):
			return "CLO_AWM_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_036_F"):
			return "CLO_AWF_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_037_M"):
			return "CLO_AWM_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_037_F"):
			return "CLO_AWF_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_038_M"):
			return "CLO_AWM_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_038_F"):
			return "CLO_AWF_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_039_M"):
			return "CLO_AWM_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_039_F"):
			return "CLO_AWF_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_040_M"):
			return "CLO_AWM_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_040_F"):
			return "CLO_AWF_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_041_M"):
			return "CLO_AWM_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_041_F"):
			return "CLO_AWF_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_042_M"):
			return "CLO_AWM_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_042_F"):
			return "CLO_AWF_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_043_M"):
			return "CLO_AWM_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_043_F"):
			return "CLO_AWF_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_044_M"):
			return "CLO_AWM_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_044_F"):
			return "CLO_AWF_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_045_M"):
			return "CLO_AWM_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_045_F"):
			return "CLO_AWF_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_046_M"):
			return "CLO_AWM_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_046_F"):
			return "CLO_AWF_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_047_M"):
			return "CLO_AWM_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_047_F"):
			return "CLO_AWF_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_048_M"):
			return "CLO_AWM_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_048_F"):
			return "CLO_AWF_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_049_M"):
			return "CLO_AWM_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_049_F"):
			return "CLO_AWF_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_050_M"):
			return "CLO_AWM_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_050_F"):
			return "CLO_AWF_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_051_M"):
			return "CLO_AWM_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_051_F"):
			return "CLO_AWF_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_052_M"):
			return "CLO_AWM_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_052_F"):
			return "CLO_AWF_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_053_M"):
			return "CLO_AWM_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_053_F"):
			return "CLO_AWF_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_054_M"):
			return "CLO_AWM_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_054_F"):
			return "CLO_AWF_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_055_M"):
			return "CLO_AWM_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_055_F"):
			return "CLO_AWF_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_056_M"):
			return "CLO_AWM_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_056_F"):
			return "CLO_AWF_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_057_M"):
			return "CLO_AWM_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_057_F"):
			return "CLO_AWF_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_058_M"):
			return "CLO_AWM_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_058_F"):
			return "CLO_AWF_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_059_M"):
			return "CLO_AWM_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_059_F"):
			return "CLO_AWF_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_060_M"):
			return "CLO_AWM_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_060_F"):
			return "CLO_AWF_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_061_M"):
			return "CLO_AWMDECL_61";
		
		case joaat("MP_Christmas2018_Tee_061_F"):
			return "CLO_AWF_DECL_61";
		
		case joaat("MP_Christmas2018_Tee_062_M"):
			return "CLO_AWM_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_062_F"):
			return "CLO_AWF_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_063_M"):
			return "CLO_AWM_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_063_F"):
			return "CLO_AWF_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_064_M"):
			return "CLO_AWM_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_064_F"):
			return "CLO_AWF_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_065_M"):
			return "CLO_AWM_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_065_F"):
			return "CLO_AWF_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_066_M"):
			return "CLO_AWM_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_066_F"):
			return "CLO_AWF_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_067_M"):
			return "CLO_AWM_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_067_F"):
			return "CLO_AWF_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_068_M"):
			return "CLO_AWM_DECL_68";
		
		case joaat("MP_Christmas2018_Tee_068_F"):
			return "CLO_AWF_DECL_68";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
			return "CLO_X5F_U_16_0";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return "CLO_X5M_U_16_0";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
			return "CLO_X5F_U_16_1";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return "CLO_X5M_U_16_1";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
			return "CLO_X5F_U_16_2";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return "CLO_X5M_U_16_2";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
			return "CLO_X5F_U_16_3";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return "CLO_X5M_U_16_3";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
			return "CLO_X5F_U_16_4";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return "CLO_X5M_U_16_4";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
			return "CLO_X5F_U_16_5";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return "CLO_X5M_U_16_5";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
			return "CLO_X5F_U_16_6";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return "CLO_X5M_U_16_6";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
			return "CLO_X5F_U_16_7";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return "CLO_X5M_U_16_7";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
			return "CLO_X5F_U_16_8";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return "CLO_X5M_U_16_8";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
			return "CLO_X5F_U_16_9";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return "CLO_X5M_U_16_9";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
			return "CLO_X5F_U_16_10";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return "CLO_X5M_U_16_10";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
			return "CLO_X5F_U_16_11";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return "CLO_X5M_U_16_11";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
			return "CLO_X5F_U_16_12";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return "CLO_X5M_U_16_12";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
			return "CLO_X5F_U_16_13";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return "CLO_X5M_U_16_13";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return "CLO_BHM_DECL_0";
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return "CLO_BHM_DECL_1";
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return "CLO_BHM_DECL_2";
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return "CLO_BHM_DECL_3";
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return "CLO_BHM_DECL_4";
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return "CLO_BHM_DECL_5";
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return "CLO_BHM_DECL_6";
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return "CLO_BHM_DECL_7";
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return "CLO_BHM_DECL_8";
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return "CLO_BHM_DECL_9";
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return "CLO_BHM_DECL_10";
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return "CLO_BHM_DECL_11";
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return "CLO_BHM_DECL_12";
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return "CLO_BHM_DECL_13";
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return "CLO_BHM_DECL_14";
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return "CLO_BHM_DECL_15";
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return "CLO_BHM_DECL_16";
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return "CLO_BHM_DECL_17";
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return "CLO_BHM_DECL_18";
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return "CLO_BHM_DECL_19";
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return "CLO_BHM_DECL_20";
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return "BBNCSHIRT3";
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return "BBNCSHIRT4";
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return "BBNCSHIRT5";
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return "BBNCSHIRT1";
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return "BBNCSHIRT7";
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return "BBNCSHIRT2";
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return "BBNCSHIRT6";
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return "BBNCSHIRT8";
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return "BBNCSHIRT9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return "CLO_BHF_DECL_30";
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return "CLO_BHF_DECL_31";
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return "CLO_BHF_DECL_32";
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return "CLO_BHF_DECL_33";
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return "CLO_BHF_DECL_34";
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return "CLO_BHF_DECL_35";
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return "CLO_BHF_DECL_36";
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return "CLO_BHF_DECL_37";
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return "CLO_BHF_DECL_38";
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return "CLO_BHF_DECL_39";
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return "CLO_BHF_DECL_40";
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return "CLO_BHF_DECL_41";
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return "CLO_BHF_DECL_42";
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return "CLO_BHF_DECL_43";
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return "CLO_BHF_DECL_44";
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return "CLO_BHF_DECL_45";
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return "CLO_BHF_DECL_46";
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return "CLO_BHF_DECL_47";
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return "CLO_BHF_DECL_48";
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return "CLO_BHF_DECL_49";
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return "CLO_BHF_DECL_50";
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return "CLO_BHF_DECL_51";
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return "CLO_BHF_DECL_52";
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return "CLO_BHF_DECL_53";
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return "CLO_BHF_DECL_54";
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return "CLO_BHF_DECL_55";
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return "CLO_BHF_DECL_56";
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return "CLO_BHF_DECL_57";
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return "CLO_BHF_DECL_58";
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return "CLO_BHF_DECL_59";
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return "CLO_BHF_DECL_60";
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return "CLO_BHF_DECL_61";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
			return "CLO_X17M_O_M_0";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return "CLO_X17F_O_M_0";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
			return "CLO_X17M_O_M_1";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return "CLO_X17F_O_M_1";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
			return "CLO_X17M_O_M_2";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return "CLO_X17F_O_M_2";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
			return "CLO_X17M_O_M_3";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return "CLO_X17F_O_M_3";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
			return "CLO_X17M_O_M_4";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return "CLO_X17F_O_M_4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return "CLO_LTSM_O_14";
		
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return "UNLOCK_AWD_KRAMP1";
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return "UNLOCK_AWD_KRAMP2";
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return "UNLOCK_AWD_KRAMP3";
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return "UNLOCK_AWD_KRAMP4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
			return "CLO_GRM_PH_6_0";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return "CLO_GRF_PH_6_0";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
			return "CLO_GRM_PH_6_2";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return "CLO_GRF_PH_6_2";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
			return "CLO_GRM_PH_6_4";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return "CLO_GRF_PH_6_4";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
			return "CLO_GRM_PH_6_5";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return "CLO_GRF_PH_6_5";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
			return "CLO_GRM_PH_6_6";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return "CLO_GRF_PH_6_6";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
			return "CLO_GRM_PH_6_7";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return "CLO_GRF_PH_6_7";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
			return "CLO_GRM_PH_6_8";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return "CLO_GRF_PH_6_8";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
			return "CLO_GRM_PH_6_10";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return "CLO_GRF_PH_6_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return "CLO_GRF_U_25_0";
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return "CLO_GRF_U_25_1";
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return "CLO_GRM_U_20_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return "CLO_GRF_DECL_19";
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return "CLO_GRM_DECL_20";
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return "CLO_GRM_DECL_21";
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return "CLO_GRF_DECL_22";
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return "CLO_GRM_DECL_23";
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return "CLO_GRM_DECL_25";
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return "CLO_GRM_DECL_27";
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return "CLO_GRM_DECL_29";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return "CLO_GRF_DECL_0";
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return "CLO_GRM_DECL_2";
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return "CLO_GRF_DECL_3";
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return "CLO_GRF_DECL_5";
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return "CLO_GRF_DECL_6";
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return "CLO_GRM_DECL_9";
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return "CLO_GRM_DECL_10";
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return "CLO_GRF_DECL_11";
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return "CLO_GRF_DECL_12";
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return "CLO_GRM_DECL_14";
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return "CLO_GRM_DECL_15";
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return "CLO_GRM_DECL_16";
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return "CLO_GRM_DECL_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
			return "CLO_X4M_B_7_0";
		
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return "CLO_X4F_B_7_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Award_000_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_000_F"):
			return "CLO_BIF_DECL_56";
		
		case joaat("MP_Biker_Award_001_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_001_F"):
			return "CLO_BIF_DECL_57";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return "bikshirt4";
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return "bikshirt5";
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return "bikshirt7";
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return "bikshirt6";
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return "bikshirt3";
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return "bikshirt2";
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return "bikshirt1";
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return "bikshirt0";
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return "bikshirt8";
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return "bikshirt9";
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return "bikshirt10";
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return "bikshirt11";
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return "bikshirt12";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return "bikshirt13";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return "bikshirt14";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return "bikshirt15";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return "bikshirt16";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return "bikshirt17";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return "bikshirt18";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return "bikshirt19";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return "bikshirt20";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return "bikshirt21";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
			return "CLO_STM_O_E_0";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return "CLO_STF_O_E_0";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
			return "CLO_STM_O_E_1";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return "CLO_STF_O_E_1";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
			return "CLO_STM_O_E_2";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return "CLO_STF_O_E_2";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
			return "CLO_STM_O_E_3";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return "CLO_STF_O_E_3";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
			return "CLO_STM_O_E_4";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return "CLO_STF_O_E_4";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
			return "CLO_STM_O_E_15";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return "CLO_STF_O_E_5";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
			return "CLO_STM_O_E_6";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return "CLO_STF_O_E_6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
			return "CLO_EXF_EU_15_0";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return "CLO_EXM_EU_15_0";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
			return "CLO_EXF_EU_15_1";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return "CLO_EXM_EU_15_1";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
			return "CLO_EXF_EU_15_2";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return "CLO_EXM_EU_15_2";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
			return "CLO_EXF_EU_15_3";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return "CLO_EXM_EU_15_3";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
			return "CLO_EXF_EU_15_4";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return "CLO_EXM_EU_15_4";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
			return "CLO_EXF_EU_15_5";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return "CLO_EXM_EU_15_5";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
			return "CLO_EXF_EU_15_6";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return "CLO_EXM_EU_15_6";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
			return "CLO_EXF_EU_15_7";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return "CLO_EXM_EU_15_7";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
			return "CLO_EXF_EU_15_8";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return "CLO_EXM_EU_15_8";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
			return "CLO_EXF_EU_15_9";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return "CLO_EXM_EU_15_9";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
			return "CLO_EXF_EU_1510";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return "CLO_EXM_EU_1510";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
			return "CLO_EXF_EU_1511";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return "CLO_EXM_EU_1511";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
			return "CLO_EXF_EU_1512";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return "CLO_EXM_EU_1512";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
			return "CLO_EXF_EU_1513";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return "CLO_EXM_EU_1513";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return "SMOKINGJACKUNLOCK";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return "UNLOKLOWHATS0";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return "UNLOKLOWHATS1";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return "UNLOKLOWHATS2";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return "UNLOKLOWHATS3";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return "UNLOKLOWHATS4";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return "UNLOKLOWHATS5";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return "UNLOKLOWHATS6";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return "UNLOKLOWHATS7";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return "UNLOKLOWHATS8";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return "UNLOKLOWHATS9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "UNLOCK_NAME_BHAT1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "UNLOCK_NAME_BHAT2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "UNLOCK_NAME_BHAT3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "UNLOCK_NAME_BHAT4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "UNLOCK_NAME_BHAT5";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "UNLOCK_NAME_BHAT6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return "BBSHIRTUN15";
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return "BBSHIRTUN6";
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return "BBSHIRTUN1";
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return "BBSHIRTUN2";
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return "BBSHIRTUN4";
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return "BBSHIRTUN3";
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return "BBSHIRTUN0";
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return "BBSHIRTUN10";
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return "BBSHIRTUN8";
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return "BBSHIRTUN9";
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return "BBSHIRTUN14";
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return "BBSHIRTUN12";
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return "BBSHIRTUN5";
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return "BBSHIRTUN13";
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return "BBSHIRTUN7";
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return "UNLOCK_NAME_SHIRT14";
		
		default:
	}
	switch (iParam0)
	{
		case 1743008394:
			return "CLO_X3F_U_1_0";
		
		case 1084175393:
			return "CLO_X3M_U_1_0";
		
		case -1090232119:
			return "CLO_X3F_U_1_1";
		
		case 787255484:
			return "CLO_X3M_U_1_1";
		
		case -1133356123:
			return "CLO_X3F_U_1_2";
		
		case -566366372:
			return "CLO_X3M_U_1_2";
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
			return "CLO_X2F_HT_4_0";
		
		case 2026483804:
			return "CLO_X2F_HT_5_0";
		
		case 1831101822:
			return "CLO_X2M_HT_4_0";
		
		case 1411612772:
			return "CLO_X2M_HT_5_0";
		
		case 1875861023:
			return "CLO_X2F_HT_4_3";
		
		case -1385031204:
			return "CLO_X2F_HT_5_3";
		
		case -703154335:
			return "CLO_X2M_HT_4_3";
		
		case 798340921:
			return "CLO_X2M_HT_5_3";
		
		case -1208373599:
			return "CLO_X3M_B_10_0";
		
		case 1656518170:
			return "CLO_X3F_B_10_0";
		
		case -970054678:
			return "CLO_X2M_B_1_0";
		
		case -840010097:
			return "CLO_X2F_B_1_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
			return "CLO_INDF_HT_6_0";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "CLO_INDM_HT_6_0";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
			return "CLO_INDF_HT_6_1";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "CLO_INDM_HT_6_1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
			return "CLO_INDF_HT_6_2";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "CLO_INDM_HT_6_2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
			return "CLO_INDF_HT_6_3";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "CLO_INDM_HT_6_3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
			return "CLO_INDF_HT_6_4";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "CLO_INDM_HT_6_4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
			return "CLO_INDF_HT_6_5";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "CLO_INDM_HT_6_5";
		
		default:
	}
	return "UNLOCK_AWD_SHIRT";
}

void func_643(int iParam0, bool bParam1, int iParam2)//Position - 0x2ADB4
{
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_644(int iParam0)//Position - 0x2ADD2
{
	switch (iParam0)
	{
		case 1529075272:
		case 28812113:
			return 34505;
			break;
		
		case 1769388797:
		case 183205348:
			return 34375;
			break;
	}
	switch (iParam0)
	{
		case 1520364990:
		case 580303643:
			return 34397;
			break;
		
		case -354644421:
		case 1729643469:
			return 34398;
			break;
		
		case -974982704:
		case 48543421:
			return 34395;
			break;
		
		case -1215015629:
		case -238218098:
			return 34396;
			break;
		
		case -130244513:
		case -377978101:
		case -283591927:
		case -767655595:
			return 34399;
			break;
		
		case 758732542:
		case 2020479751:
			return 34400;
			break;
	}
	switch (iParam0)
	{
		case -735454758:
		case 1952506611:
			return 34389;
			break;
		
		case -1837429117:
		case 1681548323:
			return 34410;
			break;
		
		case 12806934:
		case 849379568:
			return 34409;
			break;
		
		case -970841270:
		case -1440833821:
		case -1955249270:
		case -723098420:
			return 34404;
			break;
		
		case 465882766:
		case -739773835:
		case -1657018601:
		case -1474491590:
			return 34403;
			break;
		
		case 253027288:
		case -64946144:
		case 885438896:
		case -1608650338:
			return 34406;
			break;
		
		case 1504277040:
		case 1142343046:
			return 34408;
			break;
		
		case 2110919036:
		case 950515127:
			return 34405;
			break;
		
		case 1531318984:
		case -1461011165:
		case -135772036:
		case -1089236040:
			return 34391;
			break;
		
		case 355696682:
		case 186553326:
			return 34394;
			break;
		
		case 826171005:
		case -1872155720:
		case 1656291234:
		case -75647343:
			return 34390;
			break;
		
		case -1144766172:
		case -1870060660:
		case 929958499:
		case -702925102:
			return 34392;
			break;
		
		case -700742821:
		case -495437453:
			return 34393;
			break;
		
		case 1416462269:
		case 876109046:
			return 34730;
			break;
		
		case 1102699094:
		case 1050636740:
			return 34731;
			break;
		
		case 804239042:
		case 450898502:
			return 34732;
			break;
		
		case -1955435054:
		case -1696814531:
			return 34733;
			break;
		
		case 1421148248:
		case -911603753:
			return 34736;
			break;
		
		case -729284612:
		case 1890899494:
			return 34737;
			break;
		
		case 2034289007:
		case -317534552:
			return 34734;
			break;
		
		case 1726194869:
		case -144186542:
			return 34735;
			break;
		
		case 1301358015:
		case 1152102991:
			return 34401;
			break;
		
		case 1331092996:
		case 1068341747:
		case 955945551:
		case -297679123:
			return 34402;
			break;
		
		case -1558054305:
		case -1120646463:
			return 34407;
			break;
	}
	switch (iParam0)
	{
		case 1724366146:
		case 1150798956:
			return 34451;
			break;
		
		case 1368232654:
		case 1386965139:
			return 34452;
			break;
		
		case -94018437:
		case -1709770903:
			return 34453;
			break;
		
		case -450610695:
		case 1751061498:
			return 34454;
			break;
		
		case 1609015485:
		case 126910647:
			return 34418;
			break;
		
		case 680702484:
		case -1550141239:
			return 34419;
			break;
		
		case 1146349974:
		case -1252172722:
			return 34420;
			break;
		
		case -526952607:
		case -569683525:
			return 34372;
			break;
		
		case 474546626:
		case -384657478:
			return 34421;
			break;
		
		case 1451698965:
		case 594636211:
			return 34415;
			break;
		
		case 1689143139:
		case -941181281:
			return 34416;
			break;
		
		case 996832476:
		case -640886165:
			return 34417;
			break;
		
		case -1493061257:
		case -79907447:
			return 34425;
			break;
		
		case -2082706651:
		case 142495756:
			return 34426;
			break;
		
		case 1354564847:
		case -542048670:
			return 34427;
			break;
		
		case 1810774865:
		case -318531305:
			return 34428;
			break;
		
		case 1981796276:
		case -1278531945:
			return 34429;
			break;
		
		case 2136597032:
		case -1047477726:
			return 34430;
			break;
		
		case 592718366:
		case -1739755620:
			return 34431;
			break;
		
		case -219002533:
		case -1509160167:
			return 34432;
			break;
		
		case 1025924546:
		case 1437198938:
			return 34433;
			break;
		
		case 1182036062:
		case 1665926558:
			return 34434;
			break;
		
		case 701427629:
		case 1785401618:
			return 34435;
			break;
		
		case 394349330:
		case 2136914681:
			return 34436;
			break;
		
		case 1643077609:
		case -988920289:
			return 34437;
			break;
		
		case -1885324470:
		case -682136911:
			return 34438;
			break;
		
		case 1107468304:
		case 562855706:
			return 34439;
			break;
		
		case 1881865312:
		case -230809474:
			return 34440;
			break;
		
		case -1768240833:
		case 1042921556:
			return 34441;
			break;
		
		case -992074299:
		case 273734819:
			return 34442;
			break;
		
		case 2076185482:
		case 1519874351:
			return 34443;
			break;
		
		case -1458409938:
		case 725193332:
			return 34444;
			break;
		
		case 2068888083:
		case 219467307:
			return 34445;
			break;
		
		case 1628276109:
		case -1155028386:
			return 34446;
			break;
		
		case -1880988874:
		case -224880333:
			return 34447;
			break;
		
		case -2052829510:
		case 551220663:
			return 34448;
			break;
		
		case -1463511814:
		case -967589706:
			return 34449;
			break;
		
		case -695766913:
		case 1972510516:
			return 34450;
			break;
		
		case 991438416:
		case -843223043:
			return 34423;
			break;
		
		case 1548914004:
		case -123672751:
			return 34703;
			break;
		
		case -1925419225:
		case -1661685694:
			return 34704;
			break;
		
		case 2060307018:
		case -1353820939:
			return 34705;
			break;
		
		case 1323846664:
		case -427532527:
			return 34424;
			break;
		
		case -1274794483:
		case -9589384:
			return 34422;
			break;
	}
	switch (iParam0)
	{
		case 1812702544:
		case 1981007875:
			return 34411;
			break;
		
		case -671033806:
		case 1119071129:
			return 34506;
			break;
		
		case -913655482:
		case 882446180:
			return 34507;
			break;
		
		case 143421535:
		case -1761958295:
		case 1270947816:
			return 34380;
			break;
		
		case -1001558832:
		case -1576706555:
			return 34388;
			break;
		
		case -911845435:
		case 314419657:
		case 1037561437:
			return 34383;
			break;
		
		case 1929751173:
		case 1658833420:
		case 189073720:
			return 34381;
			break;
		
		case -1404003046:
		case 2031875716:
		case -241642020:
			return 34385;
			break;
		
		case -1346545254:
		case -926305599:
			return 34382;
			break;
		
		case -751416224:
		case 2008532977:
		case 1892374951:
		case -458118385:
			return 34384;
			break;
		
		case 559556286:
		case -1685979367:
			return 34455;
			break;
		
		case 1893746121:
		case -1984799878:
			return 34456;
			break;
		
		case -2111412139:
		case -1348229268:
			return 34457;
			break;
		
		case 1412598894:
		case -1646853165:
			return 34458;
			break;
		
		case -1381777825:
		case -753308073:
			return 34459;
			break;
		
		case 2076433048:
		case -1032598260:
			return 34460;
			break;
		
		case -2032013100:
		case 1987720474:
			return 34461;
			break;
		
		case 1478169415:
		case 1692373477:
			return 34462;
			break;
		
		case 859949461:
		case -1709310879:
			return 34463;
			break;
		
		case 1085072491:
		case -1983718485:
			return 34464;
			break;
		
		case -1615111379:
		case 1420344251:
			return 34465;
			break;
		
		case 1313880152:
		case 870841382:
			return 34466;
			break;
		
		case -2006766467:
		case 512512367:
			return 34467;
			break;
		
		case 1922367713:
		case -792119830:
			return 34468;
			break;
		
		case -235225048:
		case 1715116009:
		case 887067243:
		case 1317891885:
			return 34375;
			break;
		
		case -465470364:
		case 1043334673:
		case 789845898:
		case -394412060:
			return 34508;
			break;
		
		case -416906702:
		case -1402379642:
		case 1021489959:
		case -741370232:
			return 34509;
			break;
		
		case 961926275:
		case 1123357994:
		case 1539883241:
		case 1091005714:
			return 34510;
			break;
		
		case -888504515:
		case -1014747586:
			return 34387;
			break;
		
		case 2146292094:
		case -396677513:
			return 34469;
			break;
		
		case -1936266544:
		case 1153951575:
			return 34470;
			break;
		
		case -1636528489:
		case 914934489:
			return 34471;
			break;
		
		case -1358549062:
		case -41363246:
			return 34472;
			break;
		
		case -1189002256:
		case 793295961:
			return 34473;
			break;
		
		case -915413875:
		case 569614739:
			return 34474;
			break;
		
		case -214419427:
		case 246381331:
			return 34475;
			break;
		
		case -477128512:
		case -521101418:
			return 34476;
			break;
		
		case -172671733:
		case -366235124:
			return 34477;
			break;
		
		case 1003967:
		case 1797075941:
			return 34478;
			break;
		
		case -1484108735:
		case 325782160:
			return 34479;
			break;
		
		case -683332682:
		case 679163056:
			return 34480;
			break;
		
		case -1332620073:
		case 499837685:
			return 34386;
			break;
		
		case -1258274341:
		case -51159746:
			return 34481;
			break;
		
		case -1555161481:
		case 110981266:
			return 34482;
			break;
		
		case 287734290:
		case -2001210171:
			return 34483;
			break;
		
		case -1316734493:
		case 1653647479:
			return 34484;
			break;
		
		case -1019355818:
		case 909430720:
			return 34485;
			break;
		
		case -975052130:
		case 1073931100:
			return 34486;
			break;
		
		case 1470072347:
		case -585753204:
			return 34487;
			break;
		
		case 1805430293:
		case -427282320:
			return 34488;
			break;
		
		case -1908018329:
		case -1198041977:
			return 34489;
			break;
		
		case 1512195414:
		case -189883950:
			return 34490;
			break;
		
		case 1214292435:
		case -409075791:
			return 34491;
			break;
		
		case 1187815083:
		case -785132835:
			return 34492;
			break;
		
		case 891550558:
		case -984958197:
			return 34493;
			break;
		
		case -1649849245:
		case -1223156058:
			return 34494;
			break;
		
		case -1947555610:
		case -1596132820:
			return 34495;
			break;
		
		case 2044298436:
		case -1826662735:
			return 34496;
			break;
		
		case 1746395457:
		case 2085693717:
			return 34497;
			break;
		
		case -398761590:
		case 1855622568:
			return 34498;
			break;
		
		case -426746316:
		case 1475567706:
			return 34499;
			break;
		
		case -1093070644:
		case 382065296:
			return 34500;
			break;
		
		case 2060159158:
		case 1778549024:
			return 34501;
			break;
		
		case -1400673243:
		case 2060001965:
			return 34502;
			break;
		
		case 1464648121:
		case 1301923919:
			return 34503;
			break;
		
		case -2015386914:
		case 1616080322:
			return 34504;
			break;
	}
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return 32309;
			break;
		
		case -1166011267:
		case -906547381:
			return 32310;
			break;
		
		case -721794703:
		case 308133919:
			return 32311;
			break;
		
		case 488495423:
		case 1072091359:
			return 32307;
			break;
		
		case -523083487:
		case 508464559:
			return 32308;
			break;
		
		case -1498989066:
		case 452715244:
			return 32295;
			break;
		
		case 1281689967:
		case -112025702:
			return 32296;
			break;
		
		case 841209069:
		case 128072761:
			return 32297;
			break;
		
		case 1742192724:
		case -705996596:
			return 32298;
			break;
		
		case -2022943269:
		case 733291825:
			return 32299;
			break;
		
		case -804690608:
		case -101367374:
			return 32300;
			break;
		
		case -1100955137:
		case 1328802862:
			return 32301;
			break;
		
		case 2089631321:
		case 495519961:
			return 32302;
			break;
		
		case 591101258:
		case -693204279:
			return 32303;
			break;
		
		case -1278730655:
		case 150499164:
			return 32304;
			break;
		
		case -1215879713:
		case -129905169:
			return 32305;
			break;
		
		case -918271655:
		case 612902523:
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 32273;
			break;
		
		case 991513037:
		case -1634791241:
			return 31768;
			break;
		
		case -675149090:
		case -1227437948:
			return 31769;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 31784;
			break;
		
		case -1686814509:
		case -1408179706:
			return 31770;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 31777;
			break;
		
		case -126686984:
		case 2057911750:
			return 31788;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 31787;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 31786;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 31785;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 31766;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 31767;
			break;
		
		case -1174740608:
		case 1620783517:
			return 31789;
			break;
		
		case -1943796269:
		case -1699338794:
			return 31790;
			break;
		
		case -1372800957:
			return 31791;
			break;
		
		case -1125170035:
			return 31792;
			break;
		
		case 1276052663:
			return 31793;
			break;
		
		case 2138708412:
		case -1894139601:
			return 31771;
			break;
		
		case 205793848:
		case -786254870:
			return 31772;
			break;
		
		case 1325175663:
		case -773154515:
			return 31773;
			break;
		
		case -368088972:
		case 1778247767:
			return 31774;
			break;
		
		case -1771053026:
		case -648092145:
			return 31775;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		
		case joaat("ch1_12_props_combo10_87_lod"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
		case 676807987:
			return 30260;
			break;
		
		case 1888753218:
		case 272160153:
			return 30261;
			break;
		
		case -552467991:
		case 1593344440:
			return 30262;
			break;
		
		case -1655919948:
		case 546222390:
			return 30263;
			break;
		
		case -917106601:
		case 1983375900:
			return 30264;
			break;
		
		case 1595446967:
		case -620589387:
			return 30265;
			break;
		
		case -530593323:
		case 383923929:
			return 30266;
			break;
		
		case 561619447:
		case -1703406594:
			return 30267;
			break;
		
		case -1913656173:
		case -398286533:
			return 30268;
			break;
		
		case -1766901922:
		case -80478106:
			return 30269;
			break;
		
		case 2091781849:
		case 1835331655:
			return 30270;
			break;
		
		case 1824588341:
		case -1650596870:
			return 30271;
			break;
		
		case 242597641:
		case 1231926496:
			return 30272;
			break;
		
		case 566785691:
		case -1506181253:
			return 30273;
			break;
		
		case -2091312957:
		case -1737145605:
			return 30274;
			break;
		
		case -2079214831:
		case 1673851512:
			return 30275;
			break;
		
		case 1359156274:
		case 1023339598:
			return 30276;
			break;
		
		case 1904247246:
		case -163738770:
			return 30277;
			break;
		
		case -1351518396:
		case 1863218823:
			return 30278;
			break;
		
		case -797874817:
		case 333966447:
			return 30279;
			break;
		
		case -385507297:
		case 1412626052:
			return 30280;
			break;
		
		case 2011910758:
		case -39100956:
			return 30281;
			break;
		
		case -1953985443:
		case 1631533003:
			return 30282;
			break;
		
		case -1124222352:
		case 1493430918:
			return 30283;
			break;
		
		case -1806994767:
		case -196693334:
			return 30284;
			break;
		
		case -1445761968:
		case 553507495:
			return 30285;
			break;
		
		case -89186417:
		case 2003474700:
			return 30286;
			break;
		
		case -308083083:
		case 1121792228:
			return 30287;
			break;
		
		case 667714507:
		case -1424651669:
			return 30288;
			break;
		
		case -1610210252:
		case -1454164346:
			return 30289;
			break;
		
		case 1868506246:
		case -307572086:
			return 30290;
			break;
		
		case 1686703834:
		case -1486436861:
			return 30291;
			break;
		
		case -1811091999:
		case -1705464857:
			return 30292;
			break;
		
		case 414381867:
		case -469188798:
			return 30293;
			break;
		
		case -1206261789:
		case 692621401:
			return 30294;
			break;
		
		case 1395785293:
		case 60231546:
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		
		default:
	}
	switch (iParam0)
	{
		case -1641688020:
			return 25002;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		
		case 1743008394:
		case 1084175393:
			return 110;
		
		case -1090232119:
		case 787255484:
			return 111;
		
		case -1133356123:
		case -566366372:
			return 112;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
			return 4333;
		
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 4334;
		
		case -1208373599:
		case 1656518170:
			return 4335;
		
		case -970054678:
		case -840010097:
			return 3750;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		
		default:
	}
	return -1;
}

int func_645(var uParam0)//Position - 0x2EBB8
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_646())
		{
			return Global_262145.f_31783[iVar0];
		}
		else
		{
			return Global_262145.f_31771[iVar0];
		}
	}
	return -1;
}

bool func_646()//Position - 0x2EBFC
{
	return func_647(PLAYER::PLAYER_ID());
}

int func_647(bool bParam0)//Position - 0x2EC0C
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x2EC2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = func_645(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (func_646())
	{
		iVar3 = func_707(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = func_703(joaat("mp_f_freemode_01"), iVar0, func_707(iVar0), 4);
		}
		iVar2 = func_702(iVar0, 4);
		if ((func_701(func_644(iVar0), -1) || (iVar2 != -1 && func_695(iVar2, -1))) || (iVar1 != -99 && func_649(joaat("mp_f_freemode_01"), func_707(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = func_707(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = func_703(joaat("mp_m_freemode_01"), iVar0, func_707(iVar0), 3);
		}
		iVar2 = func_702(iVar0, 3);
		if ((func_701(func_644(iVar0), -1) || (iVar2 != -1 && func_695(iVar2, -1))) || (iVar1 != -99 && func_649(joaat("mp_m_freemode_01"), func_707(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

var func_649(int iParam0, int iParam1, int iParam2)//Position - 0x2ED42
{
	Global_78130[1 /*14*/] = { func_650(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

struct<14> func_650(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2ED6A
{
	func_694();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_678(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_651(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_651(int iParam0, int iParam1, int iParam2)//Position - 0x2EDAB
{
	switch (iParam0)
	{
		case 2:
			func_677(iParam1, iParam2);
			break;
		
		case 11:
			func_676(iParam1, iParam2);
			break;
		
		case 8:
			func_675(iParam1, iParam2);
			break;
		
		case 9:
			func_674(iParam1, iParam2);
			break;
		
		case 3:
			func_673(iParam1, iParam2);
			break;
		
		case 4:
			func_672(iParam1, iParam2);
			break;
		
		case 6:
			func_671(iParam1, iParam2);
			break;
		
		case 1:
			func_670(iParam1, iParam2);
			break;
		
		case 7:
			func_669(iParam1, iParam2);
			break;
		
		case 10:
			func_668(iParam1, iParam2);
			break;
		
		case 14:
			func_667(iParam1, iParam2);
			break;
		
		case 12:
			func_666(iParam1, iParam2);
			break;
		
		case 5:
			func_665(iParam1, iParam2);
			break;
		
		case 0:
			func_662(iParam1, iParam2);
			break;
		
		case 13:
			func_652(iParam1);
			break;
	}
}

void func_652(int iParam0)//Position - 0x2EEB7
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_653(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2F072
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_661(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), true);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_660(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_658(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_658(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_658(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_658(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_658(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_658(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), true);
			MISC::CLEAR_BIT(&(uParam0->f_6), false);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_657(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
		}
		if (func_657(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_657(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_660(14))
			{
				return;
			}
			iVar0 = func_308(func_656(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), true);
			}
			iVar0 = func_308(func_655(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_654(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_308(iVar1, Global_78127, 0);
				if (!BitTest(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), true);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_654(int iParam0, int iParam1, var uParam2)//Position - 0x2F417
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_655(int iParam0, int iParam1)//Position - 0x2F81C
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_656(int iParam0, int iParam1)//Position - 0x2FC17
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_657(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x30012
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return 0;
}

int func_658(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x30EB5
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_659(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_308(iVar2, iVar0, 0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

bool func_659(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x30EF4
{
	int iVar0;
	
	*uParam2 = 13122;
	if ((bParam4 && Global_4538418) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4538418)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10303;
					break;
				
				case 232:
					*uParam2 = 10304;
					break;
				
				case 233:
					*uParam2 = 10305;
					break;
				
				case 234:
					*uParam2 = 10306;
					break;
				
				case 235:
					*uParam2 = 10307;
					break;
				
				case 236:
					*uParam2 = 10308;
					break;
				
				case 237:
					*uParam2 = 10309;
					break;
				
				case 238:
					*uParam2 = 10310;
					break;
				
				case 239:
					*uParam2 = 10311;
					break;
				
				case 240:
					*uParam2 = 10312;
					break;
				
				case 241:
					*uParam2 = 10313;
					break;
				
				case 242:
					*uParam2 = 10314;
					break;
				
				case 243:
					*uParam2 = 10315;
					break;
				
				case 244:
					*uParam2 = 10316;
					break;
				
				case 245:
					*uParam2 = 10317;
					break;
				
				case 246:
					*uParam2 = 10318;
					break;
				
				case 247:
					*uParam2 = 10319;
					break;
				
				case 248:
					*uParam2 = 10320;
					break;
				
				case 249:
					*uParam2 = 10321;
					break;
				
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				
				case 252:
					*uParam2 = 10420;
					break;
				
				case 253:
					*uParam2 = 10421;
					break;
				
				case 254:
					*uParam2 = 10422;
					break;
				
				case 255:
					*uParam2 = 10423;
					break;
				
				case 256:
					*uParam2 = 10424;
					break;
				
				case 257:
					*uParam2 = 10425;
					break;
				
				case 258:
					*uParam2 = 10426;
					break;
				
				case 259:
					*uParam2 = 10427;
					break;
				
				case 260:
					*uParam2 = 10428;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10323;
					break;
				
				case 232:
					*uParam2 = 10324;
					break;
				
				case 233:
					*uParam2 = 10325;
					break;
				
				case 234:
					*uParam2 = 10326;
					break;
				
				case 235:
					*uParam2 = 10327;
					break;
				
				case 236:
					*uParam2 = 10328;
					break;
				
				case 237:
					*uParam2 = 10329;
					break;
				
				case 238:
					*uParam2 = 10330;
					break;
				
				case 239:
					*uParam2 = 10331;
					break;
				
				case 240:
					*uParam2 = 10332;
					break;
				
				case 241:
					*uParam2 = 10333;
					break;
				
				case 242:
					*uParam2 = 10334;
					break;
				
				case 243:
					*uParam2 = 10335;
					break;
				
				case 244:
					*uParam2 = 10336;
					break;
				
				case 245:
					*uParam2 = 10337;
					break;
				
				case 246:
					*uParam2 = 10338;
					break;
				
				case 247:
					*uParam2 = 10339;
					break;
				
				case 248:
					*uParam2 = 10340;
					break;
				
				case 249:
					*uParam2 = 10341;
					break;
				
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				
				case 252:
					*uParam2 = 10430;
					break;
				
				case 253:
					*uParam2 = 10431;
					break;
				
				case 254:
					*uParam2 = 10432;
					break;
				
				case 255:
					*uParam2 = 10433;
					break;
				
				case 256:
					*uParam2 = 10434;
					break;
				
				case 257:
					*uParam2 = 10435;
					break;
				
				case 258:
					*uParam2 = 10436;
					break;
				
				case 259:
					*uParam2 = 10437;
					break;
				
				case 260:
					*uParam2 = 9473;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 13122;
}

bool func_660(int iParam0)//Position - 0x33445
{
	return Global_43052 == iParam0;
}

int func_661(int iParam0)//Position - 0x33453
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_662(int iParam0, int iParam1)//Position - 0x33527
{
	int iVar0;
	
	iVar0 = 0;
	Global_78130[0 /*14*/].f_5 = 4;
	func_663(iVar0, iParam0, 0, iParam1);
}

void func_663(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33547
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_78130[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar18 > iVar17)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_653(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_653(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar38 > iVar37)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2883588 = Var19.f_1;
				Global_2883589 = Var19.f_0;
				func_653(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var39);
		if (iParam3 != -1 && Global_78300)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
			Global_2883588 = Var39.f_1;
			Global_2883589 = Var39.f_0;
			func_653(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_664(iParam0));
			if (iVar57 > iVar56)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
				Global_2883588 = Var39.f_1;
				Global_2883589 = Var39.f_0;
				func_653(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

int func_664(int iParam0)//Position - 0x337CE
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_665(int iParam0, int iParam1)//Position - 0x3387E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_666(int iParam0, int iParam1)//Position - 0x33981
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_667(int iParam0, int iParam1)//Position - 0x33C60
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2053[iVar12]) * Global_295754.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2174[iVar13]) * Global_295754.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2199[iVar14]) * Global_295754.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2328[iVar15]) * Global_295754.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 327, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_26));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_56));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_28));
			}
		}
	}
	else
	{
		func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_668(int iParam0, int iParam1)//Position - 0x36A35
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_669(int iParam0, int iParam1)//Position - 0x36B3A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 55, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_670(int iParam0, int iParam1)//Position - 0x37316
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 26, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2026[iVar11]) * Global_295754.f_29));
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_671(int iParam0, int iParam1)//Position - 0x375FB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1769[iVar11]) * Global_295754.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_25));
		}
	}
	else
	{
		func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_672(int iParam0, int iParam1)//Position - 0x38C23
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1255[iVar11]) * Global_295754.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_23));
		}
	}
	else
	{
		func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_673(int iParam0, int iParam1)//Position - 0x3A282
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_674(int iParam0, int iParam1)//Position - 0x3A3DD
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_675(int iParam0, int iParam1)//Position - 0x3A65D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 136, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_695(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_695(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_24));
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_676(int iParam0, int iParam1)//Position - 0x3B9FF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_695(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]) * Global_295754.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988) * Global_295754.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_695(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]) * Global_295754.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar11]) * Global_295754.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_663(iVar10, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
		}
	}
	else
	{
		func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_677(int iParam0, int iParam1)//Position - 0x3D165
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_663(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_678(int iParam0, int iParam1, int iParam2)//Position - 0x3E036
{
	switch (iParam0)
	{
		case 2:
			func_693(iParam1, iParam2);
			break;
		
		case 11:
			func_692(iParam1, iParam2);
			break;
		
		case 8:
			func_691(iParam1, iParam2);
			break;
		
		case 9:
			func_690(iParam1, iParam2);
			break;
		
		case 3:
			func_689(iParam1, iParam2);
			break;
		
		case 4:
			func_688(iParam1, iParam2);
			break;
		
		case 6:
			func_687(iParam1, iParam2);
			break;
		
		case 1:
			func_686(iParam1, iParam2);
			break;
		
		case 7:
			func_685(iParam1, iParam2);
			break;
		
		case 10:
			func_684(iParam1, iParam2);
			break;
		
		case 14:
			func_683(iParam1, iParam2);
			break;
		
		case 12:
			func_682(iParam1, iParam2);
			break;
		
		case 5:
			func_681(iParam1, iParam2);
			break;
		
		case 0:
			func_680(iParam1, iParam2);
			break;
		
		case 13:
			func_679(iParam1);
			break;
	}
}

void func_679(int iParam0)//Position - 0x3E142
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_680(int iParam0, int iParam1)//Position - 0x3E30C
{
	int iVar0;
	
	iVar0 = 0;
	Global_78130[0 /*14*/].f_5 = 3;
	func_663(iVar0, iParam0, 0, iParam1);
}

void func_681(int iParam0, int iParam1)//Position - 0x3E32C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_663(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_682(int iParam0, int iParam1)//Position - 0x3E42F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_663(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_653(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_683(int iParam0, int iParam1)//Position - 0x3E6E0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;

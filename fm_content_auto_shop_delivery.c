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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	float fLocal_120 = 0f;
	int iLocal_121[5] = { 0, 0, 0, 0, 0 };
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 8;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 8;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	float fLocal_192 = 0f;
	float fLocal_193 = 0f;
	float fLocal_194 = 0f;
	float fLocal_195 = 0f;
	var uLocal_196 = 0;
	int iLocal_197[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	struct<144> Local_209 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 2 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = -1;
	var uLocal_358 = -1;
	var uLocal_359 = 1;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = -1;
	var uLocal_366 = -1;
	var uLocal_367 = 1;
	var uLocal_368 = 0;
	struct<527> Local_369 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	struct<20> Local_898 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_918[5];
	struct<21> Local_1019[7];
	struct<24> Local_1167 = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_1191 = 0;
	var uLocal_1192 = 5;
	var uLocal_1193 = -1;
	var uLocal_1194 = 3;
	var uLocal_1195 = -1;
	var uLocal_1196 = 0;
	var uLocal_1197 = -1;
	var uLocal_1198 = 0;
	var uLocal_1199 = -1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = -1;
	var uLocal_1207 = 3;
	var uLocal_1208 = -1;
	var uLocal_1209 = 0;
	var uLocal_1210 = -1;
	var uLocal_1211 = 0;
	var uLocal_1212 = -1;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = -1;
	var uLocal_1220 = 3;
	var uLocal_1221 = -1;
	var uLocal_1222 = 0;
	var uLocal_1223 = -1;
	var uLocal_1224 = 0;
	var uLocal_1225 = -1;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = -1;
	var uLocal_1233 = 3;
	var uLocal_1234 = -1;
	var uLocal_1235 = 0;
	var uLocal_1236 = -1;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = -1;
	var uLocal_1246 = 3;
	var uLocal_1247 = -1;
	var uLocal_1248 = 0;
	var uLocal_1249 = -1;
	var uLocal_1250 = 0;
	var uLocal_1251 = -1;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 1;
	var uLocal_1259 = 0;
	var uLocal_1260 = -1;
	struct<7> Local_1261 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276[1] = { 0 };
	struct<2> Local_1278[1];
	struct<2> Local_1281 = { 0, 0 } ;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	struct<6> Local_1285 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1291 = 0;
	int iLocal_1292 = 0;
	struct<8> Local_1293 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_1301 = 0;
	struct<2> Local_1302 = { -1, -1 } ;
	struct<12> Local_1304 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	var uLocal_1316 = 1;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320[1] = { -1 };
	struct<4> Local_1322[1];
	struct<8> Local_1327 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_1335 = 0;
	int iLocal_1336 = 0;
	bool bLocal_1337 = 0;
	bool bLocal_1338 = 0;
	bool bLocal_1339 = 0;
	bool bLocal_1340 = 0;
	bool bLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	struct<3> Local_1346 = { 0, 0, 0 } ;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	bool bLocal_1351 = 0;
	bool bLocal_1352 = 0;
	struct<2> Local_1353 = { -1, -1 } ;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	var uLocal_1357 = 3;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	int iLocal_1361 = 0;
	int iLocal_1362 = 0;
	var uLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	int iLocal_1368[2] = { 0, 0 };
	int iLocal_1371 = 0;
	float fLocal_1372 = 0f;
	float fLocal_1373 = 0f;
	float fLocal_1374 = 0f;
	float fLocal_1375 = 0f;
	int iLocal_1376 = 0;
	int iLocal_1377[1] = { 0 };
	var uLocal_1379[1] = { 0 };
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	int iLocal_1387 = 0;
	struct<16> Local_1388 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<156> Local_1404 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, -1, -1, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_1560 = 1;
	var uLocal_1561 = 0;
	var uLocal_1562 = -1;
	var uLocal_1563 = -1;
	var uLocal_1564 = -1;
	var uLocal_1565 = 0;
	struct<35> Local_1566[8];
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	int iLocal_1849 = 0;
	int iLocal_1850 = 0;
	int iLocal_1851 = 0;
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
	iLocal_112 = -1;
	fLocal_120 = 0f;
	fLocal_127 = 0f;
	fLocal_128 = 0f;
	fLocal_129 = 0f;
	fLocal_192 = 0,62f;
	fLocal_193 = 0,51f;
	fLocal_194 = 0,55f;
	fLocal_195 = 25f;
	iLocal_1361 = -1;
	iLocal_1362 = -1;
	iLocal_1365 = -1;
	fLocal_1372 = 99999f;
	fLocal_1373 = 99999f;
	fLocal_1374 = 99999f;
	fLocal_1375 = 999999f;
	iLocal_1851 = -1;
	StringCopy(&Local_1388, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_1388 = { Local_1388 };
	Local_898 = { Local_898 };
	func_3191(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_1337)
		{
			if (!func_3139(ScriptParam_0))
			{
				func_3064(0, 1);
				func_2964();
			}
		}
		else
		{
			func_2964();
		}
	}
	else
	{
		func_3064(0, 1);
		func_2964();
	}
	func_2963(&(Local_1404.f_129));
	func_2859();
	while (true)
	{
		func_2858();
		if (func_2853())
		{
			func_3064(0, 1);
			func_2964();
		}
		if (func_2847())
		{
			func_3064(0, 1);
			func_2964();
		}
		if (Local_369.f_102.f_4 != 0)
		{
			Call_Loc(Local_369.f_102.f_4);
			if (StackVal)
			{
				func_3064(0, 1);
				func_2964();
			}
		}
		func_3191(1);
		switch (func_2846())
		{
			case 0:
				switch (func_2845())
				{
					case 1:
						if (func_2582())
						{
							func_2581(1);
						}
						break;
					
					case 2:
					case 3:
						func_2581(3);
						break;
				}
				break;
			
			case 1:
				func_2537();
				func_1799();
				func_1798();
				if (func_2845() != 1)
				{
					func_1792();
					if (Local_369.f_102.f_5 != 0)
					{
						Call_Loc(Local_369.f_102.f_5);
					}
					func_2581(func_2845());
				}
				break;
			
			case 2:
				func_2537();
				func_1069();
				func_693();
				if (func_2845() > 2)
				{
					func_3064(func_692(11), 0);
					func_2581(3);
				}
				break;
			
			case 3:
				func_2964();
				break;
		}
		if (bLocal_1339)
		{
			switch (func_2845())
			{
				case 0:
					if (func_490())
					{
						func_489(1);
					}
					break;
				
				case 1:
					if (func_488() == 0)
					{
						func_6();
					}
					else
					{
						func_489(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_489(3);
					}
					break;
				
				case 3:
					func_2964();
					break;
				}
		}
		func_1();
	}
}

void func_1()//Position - 0x2BF
{
	Local_1167.f_22++;
	if (Local_1167.f_22 >= Local_209.f_38)
	{
		Local_1167.f_22 = 0;
	}
}

int func_2()//Position - 0x2E5
{
	if (Local_369.f_3.f_2 != 0)
	{
		Call_Loc(Local_369.f_3.f_2);
	}
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)//Position - 0x31A
{
	return func_4(&(Local_1404.f_88), iParam0);
}

var func_4(var uParam0, var uParam1)//Position - 0x32D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

bool func_5()//Position - 0x350
{
	return func_3(21);
}

void func_6()//Position - 0x35E
{
	func_487();
	if (Local_369.f_3 != 0)
	{
		Call_Loc(Local_369.f_3);
	}
	func_436();
	func_426();
	func_143();
	func_124();
	func_31();
	func_24();
	func_23();
	func_20();
	func_12();
	func_7();
}

void func_7()//Position - 0x3A1
{
	if (!func_11())
	{
		return;
	}
	if (!func_9(func_10(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_10()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)//Position - 0x3D6
{
	if (!bLocal_1339)
	{
		return;
	}
	Local_1404.f_82 = iParam0;
}

int func_9(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3EF
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_10()//Position - 0x44F
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

int func_11()//Position - 0x466
{
	return 1;
}

void func_12()//Position - 0x46F
{
	if (func_19() == -1)
	{
		return;
	}
	if (Local_369.f_82 == 0)
	{
		return;
	}
	Call_Loc(Local_369.f_82);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_369.f_82.f_1 != 0)
	{
		Call_Loc(Local_369.f_82.f_1);
		if (StackVal)
		{
			func_18(&(Local_1404.f_106), 0, 0);
			func_16(5);
		}
	}
	if (!func_15(&(Local_1404.f_106)))
	{
		func_14(&(Local_1404.f_106), 0, 0);
	}
	else if (func_15(&(Local_1404.f_106)))
	{
		if (func_13(&(Local_1404.f_106), func_19(), 0))
		{
			if (Local_369.f_82.f_3 != 0)
			{
				Call_Loc(Local_369.f_82.f_3);
			}
			func_8(1);
		}
	}
}

int func_13(var uParam0, int iParam1, bool bParam2)//Position - 0x51D
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
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

void func_14(var uParam0, bool bParam1, bool bParam2)//Position - 0x57B
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

bool func_15(var uParam0)//Position - 0x5C0
{
	return uParam0->f_1;
}

void func_16(int iParam0)//Position - 0x5CC
{
	if (func_17(&(Local_1404.f_88), iParam0))
	{
	}
}

int func_17(var uParam0, var uParam1)//Position - 0x5E2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0x61A
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

int func_19()//Position - 0x657
{
	if (Local_209.f_102 != -1)
	{
		return Local_209.f_102 * 60 * 1000;
	}
	return Local_209.f_102;
}

void func_20()//Position - 0x677
{
	int iVar0;
	
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_918[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_1355 && iVar0 < Local_918[func_22() /*20*/].f_19) && Local_918[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_918[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_918[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_918[func_22() /*20*/].f_18);
				Local_1404.f_86 = func_22();
				func_21(Local_918[func_22() /*20*/].f_1[iVar0 /*3*/]);
				MISC::SET_BIT(&(Local_1404.f_87), func_22());
				Call_Loc(Local_918[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)//Position - 0x747
{
	if (!bLocal_1339)
	{
		return;
	}
	Local_1404.f_85 = iParam0;
}

int func_22()//Position - 0x760
{
	return Local_1404.f_85;
}

void func_23()//Position - 0x76D
{
}

void func_24()//Position - 0x775
{
	if (!func_30())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_25(&(Local_1404.f_63), &(Local_1404.f_63.f_3)))
		{
			func_16(2);
		}
	}
}

int func_25(var uParam0, int* iParam1)//Position - 0x7A9
{
	int iVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_29(iVar3))
		{
			iVar0[iVar2] = iVar3;
			iVar2++;
		}
		iVar3++;
	}
	if (iVar2 < func_28())
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < func_28())
	{
		if (func_27())
		{
			if (iVar3 > 0)
			{
				(*uParam0)[iVar3] = (*uParam0)[(iVar3 - 1)];
			}
			else
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
				(*uParam0)[iVar3] = iVar0[iVar4];
				if (iVar0[iVar4] < 32)
				{
					MISC::SET_BIT(iParam1, iVar0[iVar4]);
				}
				if (iVar3 < (func_28() - 1))
				{
					func_26(&(iVar0[iVar4]), &(iVar0[(iVar2 - 1)]));
					iVar2 = (iVar2 - 1);
				}
			}
			iVar3++;
			return 1;
		}

void func_26(var uParam0, var uParam1)//Position - 0x86F
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_27()//Position - 0x887
{
	return 0;
}

int func_28()//Position - 0x890
{
	return Local_209.f_19;
}

int func_29(int iParam0)//Position - 0x89C
{
	return 0;
}

int func_30()//Position - 0x8A5
{
	return 0;
}

void func_31()//Position - 0x8AE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < Local_209.f_38)
	{
		func_122(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_369.f_156.f_182 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_369.f_156.f_182);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_121(iVar5, 6);
				}
				else if (bVar3)
				{
					func_121(iVar5, 6);
				}
				else if (func_120(iVar5, iVar0))
				{
					func_121(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_119(iVar5))
				{
					func_121(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_117(iVar5))
					{
						func_116(iVar5);
						func_121(iVar5, 2);
					}
				}
				else if (func_115(iVar5))
				{
					func_114(&(Local_1404.f_22[iVar5 /*24*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_111(iVar5))
					{
						if (func_65(iVar5))
						{
							func_121(iVar5, 3);
							if (func_64(iVar5, 8))
							{
								func_63(iVar5, 31);
							}
							func_62(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_59(iVar5, iVar0))
					{
						func_121(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_40(iVar5);
						func_35(iVar5, iVar0, 1);
						if (func_34(iVar5))
						{
							func_121(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_63(iVar5, 8);
				if (bVar2)
				{
					if (func_59(iVar5, iVar0))
					{
						break;
					}
					if (func_34(iVar5))
					{
						func_121(iVar5, 4);
					}
				}
				if (func_33(iVar5))
				{
					if (func_115(iVar5))
					{
						func_114(&(Local_1404.f_22[iVar5 /*24*/]));
					}
					func_121(iVar5, 1);
				}
				if (func_488() == 0)
				{
					if (func_32(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			
			case 4:
				if (!func_32(iVar5, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_63(iVar5, 26);
					func_121(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_1167.f_22;
	func_122(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_35(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0xB0C
{
	return func_4(&(Local_209.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_33(int iParam0)//Position - 0xB24
{
	if (func_488() != 0)
	{
		return 0;
	}
	if (func_32(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_169);
		return StackVal;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0xB51
{
	if (Local_369.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_168);
		return StackVal;
	}
	return 0;
}

void func_35(int iParam0, int iParam1, int iParam2)//Position - 0xB72
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_39(iParam0);
	if (func_38(iParam0) == -1)
	{
		func_37(iParam0, 0);
		if (Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (func_36(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_11);
	}
	while ((func_38(iParam0) < Local_1167.f_23[iVar0 /*67*/] && iVar1 < Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_12) && Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_9);
			}
			func_37(iParam0, Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_1167.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

int func_36(int iParam0)//Position - 0xD1F
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

void func_37(int iParam0, int iParam1)//Position - 0xD3F
{
	if (!bLocal_1339)
	{
		return;
	}
	Local_1404.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_38(int iParam0)//Position - 0xD5E
{
	return Local_1404.f_22[iParam0 /*24*/].f_2;
}

int func_39(int iParam0)//Position - 0xD71
{
	if (Local_369.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_1);
		return StackVal;
	}
	return 0;
}

void func_40(int iParam0)//Position - 0xD92
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Local_209.f_38.f_1[iParam0 /*21*/].f_14;
	if (func_58(bVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Local_1167[iParam0 /*19*/].f_16)
	{
		if (Local_1167[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1167[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				if (!BitTest(Local_1404.f_62, bVar0))
				{
					func_41(iParam0);
				}
				MISC::SET_BIT(&(Local_1404.f_62), bVar0);
				if (Local_369.f_156.f_174 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(bVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_369.f_156.f_174);
				}
			}
		}
		iVar1++;
	}
}

void func_41(int iParam0)//Position - 0xE28
{
	if (func_57(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_22[iParam0 /*24*/]))
	{
		if (func_56(NETWORK::NET_TO_PED(Local_1404.f_22[iParam0 /*24*/])))
		{
			func_42(func_54(), 1, 0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0xE6A
{
	if (func_52(1))
	{
		func_44(Local_1353.f_0, func_45(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_44(Local_1353.f_0, func_43(bLocal_1341), iParam0, iParam1, iParam2);
	}
}

int func_43(bool bParam0)//Position - 0xEA3
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_44(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEBB
{
	struct<7> Var0;
	
	Var0.f_0 = -1946222827;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iParam1);
	}
}

int func_45(bool bParam0)//Position - 0xF07
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_52(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_9(bVar3, 0, 0))
			{
				if (func_50())
				{
					if (func_48(bVar3, PLAYER::PLAYER_ID(), bParam0))
					{
						MISC::SET_BIT(&uVar0, bVar3);
					}
				}
				else
				{
					bVar2 = func_47();
					if (bVar2 != func_46())
					{
						if (func_48(bVar3, bVar2, bParam0))
						{
							MISC::SET_BIT(&uVar0, bVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_46()//Position - 0xF87
{
	return -1;
}

bool func_47()//Position - 0xF90
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_48(bool bParam0, bool bParam1, bool bParam2)//Position - 0xFA5
{
	if (bParam1 != func_46())
	{
		if (!bParam2)
		{
			if (func_49(bParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[bParam0 /*599*/].f_10 != func_46())
		{
			return bParam1 == Global_1892703[bParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0xFEF
{
	if (iParam1 != func_46())
	{
		if (iParam0 != func_46())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_46())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_50()//Position - 0x1034
{
	return func_51(PLAYER::PLAYER_ID());
}

int func_51(bool bParam0)//Position - 0x1044
{
	if (bParam0 != func_46())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_46())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

bool func_52(bool bParam0)//Position - 0x1079
{
	return func_53(PLAYER::PLAYER_ID(), bParam0);
}

bool func_53(bool bParam0, bool bParam1)//Position - 0x108B
{
	if (!bParam1)
	{
		if (func_51(bParam0))
		{
			return 0;
		}
	}
	return Global_1892703[bParam0 /*599*/].f_10 != func_46();
}

int func_54()//Position - 0x10B6
{
	int iVar0;
	
	iVar0 = func_55();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_55()//Position - 0x10CF
{
	Call_Loc(Local_369.f_64);
	return StackVal;
}

int func_56(int iParam0)//Position - 0x10DD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

bool func_57(int iParam0)//Position - 0x111C
{
	return func_4(&(Local_209.f_16), iParam0);
}

bool func_58(var uParam0)//Position - 0x112E
{
	return BitTest(Local_1404.f_62, uParam0);
}

int func_59(int iParam0, int iParam1)//Position - 0x113E
{
	Stack.Push(Local_369.f_156.f_192 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_369.f_156.f_192);
	if (StackVal && StackVal)
	{
		if (Local_369.f_156.f_191 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_369.f_156.f_191);
		}
		if (func_61(iParam0))
		{
			func_60(&(Local_1404.f_22[iParam0 /*24*/]));
		}
		else
		{
			func_114(&(Local_1404.f_22[iParam0 /*24*/]));
		}
		return 1;
	}
	return 0;
}

void func_60(int iParam0)//Position - 0x11A3
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_61(int iParam0)//Position - 0x11DC
{
	if (func_32(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_369.f_156.f_195 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_195);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x1213
{
}

void func_63(int iParam0, int iParam1)//Position - 0x121B
{
	if (func_17(&(Local_1404.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_64(int iParam0, int iParam1)//Position - 0x1237
{
	return func_4(&(Local_1404.f_22[iParam0 /*24*/].f_3), iParam1);
}

int func_65(int iParam0)//Position - 0x1250
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	func_110(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_176);
	iVar0 = StackVal;
	if (func_109(iVar0))
	{
		iVar1 = Local_209.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_108(Local_1404.f_47[iVar1 /*8*/]))
			{
				if (func_107(&(Local_1404.f_22[iParam0 /*24*/]), Local_1404.f_47[iVar1 /*8*/], 26, iVar0, Local_209.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_85(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_84();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_369.f_156.f_177);
			Var2 = { StackVal, StackVal, StackVal };
			Stack.Push(iParam0);
			Call_Loc(Local_369.f_156.f_178);
			fVar5 = StackVal;
			if (!func_83(Var2))
			{
				if (!func_82(iParam0) || func_67(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_66(&(Local_1404.f_22[iParam0 /*24*/]), 26, iVar0, Var2, fVar5, 1, 1, 1))
					{
						func_85(iParam0);
						func_84();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
				else
				{
					func_84();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_66(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x137A
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

int func_67(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x13D9
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
		if (func_76(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_68(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_68(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x14EB
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_9(bVar1, 1, 1))
		{
			if (!func_70(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_69(bVar1) || !bParam10) && !Global_2689235[bVar1 /*453*/].f_267)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(bVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(bVar1), Param0, true) <= (fVar2 + fParam3))
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

int func_69(bool bParam0)//Position - 0x16A3
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_70(bool bParam0, int iParam1)//Position - 0x16CE
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)//Position - 0x1719
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
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

int func_72()//Position - 0x175A
{
	return Global_1574918;
}

Vector3 func_73(bool bParam0)//Position - 0x1766
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_75() && Global_1853348[iVar0 /*834*/].f_804) && !func_83(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_74(bParam0);
}

Vector3 func_74(bool bParam0)//Position - 0x17B9
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

bool func_75()//Position - 0x17CC
{
	return Global_2714762.f_19;
}

int func_76(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)//Position - 0x17DA
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_9(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_69(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_77(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_74(bVar1), Param0, true) < fParam3)
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

int func_77(bool bParam0)//Position - 0x18DE
{
	if (func_81(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { func_80(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_78(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1)//Position - 0x1925
{
	int iVar0;
	
	iVar0 = func_79(bParam0);
	if (!iVar0 == func_46())
	{
		if (iVar0 == func_79(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(bool bParam0)//Position - 0x1950
{
	if (bParam0 != func_46())
	{
		return Global_1892703[bParam0 /*599*/].f_10;
	}
	return func_46();
}

struct<13> func_80(bool bParam0)//Position - 0x1973
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_81(bool bParam0, int iParam1)//Position - 0x198A
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_80(bParam0) };
		Global_2787518 = { func_80(iParam1) };
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

int func_82(int iParam0)//Position - 0x19F7
{
	if ((func_32(iParam0, 10) && func_64(iParam0, 8)) && !func_32(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

int func_83(struct<3> Param0)//Position - 0x1A2A
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_84()//Position - 0x1A54
{
	if (Local_1404.f_99 != -1)
	{
		Local_1404.f_112 = { 0f, 0f, 0f };
		Local_1404.f_121 = 0f;
		iLocal_1364 = 0;
		Local_1404.f_84 = -1;
		Local_1404.f_99 = -1;
	}
}

void func_85(int iParam0)//Position - 0x1A85
{
	int iVar0;
	bool bVar1;
	
	iVar0 = NETWORK::NET_TO_PED(Local_1404.f_22[iParam0 /*24*/]);
	bVar1 = func_64(iParam0, 19);
	func_103(iParam0, iVar0);
	if (bVar1)
	{
		func_102(iParam0, iVar0);
	}
	else
	{
		func_92(iParam0, iVar0);
	}
	if (func_91(iParam0, iVar0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
		PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
	}
	if (Local_369.f_156.f_180 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_369.f_156.f_180);
	}
	if (func_32(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		func_86(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1B40
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_209.f_38.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var3 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var3, 25, true, joaat("weapon_heavysniper"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var0, 25, true, joaat("weapon_assaultshotgun"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			func_89(Var6, &Var9, &Var12, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var9, Var12, 300, true, joaat("weapon_heavysniper"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_87(iParam0, -1, 0);
		}
	}
}

void func_87(int iParam0, int iParam1, bool bParam2)//Position - 0x1C3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_88(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_88(iVar0, iParam0);
	}
}

void func_88(int iParam0, int iParam1)//Position - 0x1C81
{
	switch (iParam0)
	{
		case 0:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,806f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0,379f, 0,324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0,379f, 0,534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0,628f, 0,277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0,609f, 0,344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,719f, 0,802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,775f, 0,68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,775f, 0,561f, "ShotgunLargeMonolithic");
			break;
		
		case 11:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,49f, 0,5f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,48f, 0,55f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,5f, 0,56f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,789f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,724f, 0,799f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,737f, 0,723f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,753f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,76f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,736f, 0,802f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,715f, 0,806f, 0f, 0,019f, 0, 140f, "BulletSmall");
			break;
		
		case 12:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,401f, 0,1f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,514f, 0,13f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,62f, 0,13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
		
		case 13:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 2, 0,41f, 0,229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 4, 0,21f, 0,305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,495f, 0,124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,667f, 0,571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,343f, 0,79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			break;
	}
}

void func_89(struct<3> Param0, var uParam3, var uParam4, bool bParam5)//Position - 0x1FF9
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0,1f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	fVar2 = 0,5f;
	fVar3 = 0,1f;
	fVar4 = 0,4f;
	if (bParam5)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_90())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_90())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_90())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 1:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 2:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 3:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 4:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 5:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

int func_90()//Position - 0x21E4
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, int iParam1)//Position - 0x2202
{
	if (func_32(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)//Position - 0x221A
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (func_32(iParam0, 6))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, false);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_209.f_38.f_1[iParam0 /*21*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_101());
	PED::SET_PED_ACCURACY(iParam1, func_100(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_99());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_98());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_98(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (func_97(iParam0))
	{
		AUDIO::_0xAB6781A5F3101470(iParam1, 1);
	}
	func_93(iParam0, iParam1);
}

void func_93(int iParam0, int iParam1)//Position - 0x22DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	if (func_64(iParam0, 19))
	{
		return;
	}
	if (Local_209.f_38.f_1[iParam0 /*21*/].f_20 >= 0,75f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_209.f_38.f_1[iParam0 /*21*/].f_20, false, false);
		return;
	}
	else if (Local_209.f_38.f_1[iParam0 /*21*/].f_20 < 0,75f && Local_209.f_38.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_209.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_209.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_95(iVar2, 4))
			{
				Var3 = { func_94(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

struct<9> func_94(int iParam0)//Position - 0x23B5
{
	struct<9> Var0;
	
	Var0 = 1;
	if (Local_369.f_453.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_453.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_209.f_120.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_209.f_120.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_209.f_120.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_209.f_120.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_95(int iParam0, int iParam1)//Position - 0x2430
{
	struct<9> Var0;
	
	Var0 = { func_96(iParam0) };
	return func_4(&Var0, iParam1);
}

struct<9> func_96(int iParam0)//Position - 0x244B
{
	return Local_209.f_120.f_1[iParam0 /*9*/];
}

int func_97(int iParam0)//Position - 0x2460
{
	if (func_57(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_98()//Position - 0x247B
{
	switch (Local_1404.f_83)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		case 4:
			return 300;
		
		default:
	}
	return 200;
}

int func_99()//Position - 0x24B2
{
	switch (Local_1404.f_83)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		case 4:
			return 100;
		
		default:
	}
	return 60;
}

int func_100(int iParam0)//Position - 0x24E7
{
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_179);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_179);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_1404.f_83)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		case 4:
			return 40;
		
		default:
	}
	return 10;
}

int func_101()//Position - 0x2549
{
	switch (Local_1404.f_83)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 2;
		
		default:
	}
	return 1;
}

void func_102(int iParam0, int iParam1)//Position - 0x257A
{
	PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_DRIVER_ABILITY(iParam1, 1f);
	PED::SET_PED_ACCURACY(iParam1, func_100(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_99());
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_98());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_98(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_101());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}

void func_103(int iParam0, int iParam1)//Position - 0x2605
{
	int iVar0;
	int iVar1;
	
	if (func_106(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1404.f_22[iParam0 /*24*/]), true);
	}
	if (!func_56(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (Local_209.f_38.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
	{
		switch (PED::GET_PED_DRAWABLE_VARIATION(iParam1, 0))
		{
			case 0:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_black_pvg"));
				break;
			
			case 1:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_white_pvg"));
				break;
			
			case 2:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_latino_pvg"));
				break;
			}
	}
	if (Local_209.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_63(iParam0, 2);
		PHYSICS::ACTIVATE_PHYSICS(iParam1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam1, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	}
	if (func_32(iParam0, 11))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_179);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_105(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_SEEING_RANGE(iParam1, Local_209.f_38.f_1[iParam0 /*21*/].f_17);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_209.f_38.f_1[iParam0 /*21*/].f_18);
	PED::SET_PED_HEARING_RANGE(iParam1, Local_209.f_38.f_1[iParam0 /*21*/].f_19);
	PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
	iVar1 = func_104(iParam0);
	if (iVar1 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

var func_104(int iParam0)//Position - 0x2778
{
	return Local_209.f_38.f_23[Local_209.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_105(int iParam0)//Position - 0x2794
{
	if (Local_369.f_156.f_193 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_193);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_2);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_2);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_64(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x27F0
{
	if (func_57(22))
	{
		return 1;
	}
	return 0;
}

int func_107(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2806
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

int func_108(int iParam0)//Position - 0x288E
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_109(int iParam0)//Position - 0x28B0
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_110(int iParam0, var uParam1)//Position - 0x28CE
{
	if (Local_1404.f_99 == -1)
	{
		Local_1404.f_84 = iParam0;
		Local_1404.f_99 = uParam1;
	}
}

int func_111(int iParam0)//Position - 0x28ED
{
	if (!func_113(0, iParam0))
	{
		return 0;
	}
	if (Local_209.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_112(Local_209.f_38.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1341))
	{
		return 0;
	}
	Stack.Push(Local_369.f_156.f_194 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_156.f_194);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)//Position - 0x295B
{
	return Local_1404.f_47[iParam0 /*8*/].f_1;
}

int func_113(int iParam0, int iParam1)//Position - 0x296E
{
	if (Local_1404.f_84 == -1)
	{
		return 1;
	}
	if (Local_1404.f_84 == iParam0)
	{
		if (Local_1404.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x299C
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_115(int iParam0)//Position - 0x29C0
{
	return 1;
}

void func_116(int iParam0)//Position - 0x29C9
{
	func_37(iParam0, 0);
	if (Local_369.f_156.f_169.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_169.f_3);
	}
}

int func_117(int iParam0)//Position - 0x29F1
{
	int iVar0;
	
	if (Local_369.f_156.f_169.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_169.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_1404.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_118(&(Local_1404.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

void func_118(var uParam0)//Position - 0x2A47
{
	uParam0->f_1 = 0;
}

int func_119(int iParam0)//Position - 0x2A54
{
	if (Local_369.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_156.f_175);
		return StackVal;
	}
	return 1;
}

int func_120(int iParam0, int iParam1)//Position - 0x2A75
{
	return 0;
}

void func_121(int iParam0, int iParam1)//Position - 0x2A7E
{
	if (!bLocal_1339)
	{
		return;
	}
	Local_1404.f_22[iParam0 /*24*/].f_1 = iParam1;
}

void func_122(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x2A9D
{
	*iParam4 = func_123(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_1404.f_22[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

int func_123(int iParam0)//Position - 0x2ADE
{
	return Local_1404.f_22[iParam0 /*24*/].f_1;
}

void func_124()//Position - 0x2AF1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_209.f_85)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_56[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_1404.f_56[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_369.f_407.f_36 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_369.f_407.f_36);
			}
		}
		if (func_142(iVar4) > 1 && func_142(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_141(iVar4, 3);
				}
				else if (func_140(iVar4))
				{
					func_141(iVar4, 3);
				}
			}
			else
			{
				func_141(iVar4, 3);
			}
		}
		func_136(iVar4, iVar0);
		switch (func_142(iVar4))
		{
			case 0:
				if (func_135(iVar4))
				{
					func_141(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_134(iVar4)) && func_125(iVar4))
				{
					func_141(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_125(int iParam0)//Position - 0x2C08
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_56[iParam0 /*5*/]))
	{
		Var1 = { func_133(iParam0) };
		Var4 = { func_132(iParam0) };
		if (func_83(Var1))
		{
			return 0;
		}
		iVar7 = Local_209.f_85.f_1[iParam0 /*12*/].f_3;
		if (!func_109(iVar7))
		{
			return 0;
		}
		if (func_130(&(Local_1404.f_56[iParam0 /*5*/]), iVar7, Var1, 1, 1, 1, func_131(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_1404.f_56[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Var4, 2, true);
			func_126(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_56[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)//Position - 0x2CC2
{
	var uVar0;
	var uVar16;
	
	NETWORK::_NETWORK_SET_OBJECT_INTEREST_RANGE(NETWORK::NET_TO_OBJ(Local_1404.f_56[iParam0 /*5*/]), 4,203895E-43f);
	ENTITY::SET_ENTITY_PROOFS(iParam1, func_131(iParam0, 17), func_131(iParam0, 18), func_131(iParam0, 19), func_131(iParam0, 20), func_131(iParam0, 21), false, false, false);
	func_128(iParam0, 0);
	if (func_131(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!func_131(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_1404.f_56[iParam0 /*5*/]));
	}
	if (func_131(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1404.f_56[iParam0 /*5*/], true, true);
		NETWORK::_0x76B3F29D3F967692(Local_1404.f_56[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_131(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (func_131(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (func_131(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (func_131(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (func_131(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (func_131(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1404.f_56[iParam0 /*5*/]), 1200);
	}
	if (func_131(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_131(iParam0, 9))
	{
		ENTITY::_0x352E2B5CF420BF3B(NETWORK::NET_TO_OBJ(Local_1404.f_56[iParam0 /*5*/]), 1);
	}
	if (func_131(iParam0, 34))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_133(iParam0), false, false, true);
	}
	else if (func_131(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, func_133(iParam0), true, false, false, true);
	}
	if (func_131(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, func_132(iParam0), 2, true);
	}
	if (func_131(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (func_131(iParam0, 11))
	{
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
	if (func_127(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, true);
	}
	if (func_131(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (func_131(iParam0, 14))
	{
		Stack.Push(Local_369.f_407.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar16);
		Call_Loc(Local_369.f_407.f_24);
		if (StackVal && StackVal)
		{
			AUDIO::_LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar16);
		}
	}
	if (Local_369.f_407.f_33 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_369.f_407.f_33);
	}
}

int func_127(int iParam0)//Position - 0x2F32
{
	if (func_131(iParam0, 12))
	{
		return 1;
	}
	if (func_57(22))
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1)//Position - 0x2F57
{
	if (func_129(&(Local_1404.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_129(var uParam0, var uParam1)//Position - 0x2F73
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::CLEAR_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_130(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x2FAA
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

bool func_131(int iParam0, int iParam1)//Position - 0x304F
{
	return func_4(&(Local_209.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_132(int iParam0)//Position - 0x3067
{
	struct<3> Var0;
	
	if (Local_369.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_83(Var0))
	{
		Var0 = { Local_209.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_133(int iParam0)//Position - 0x30AB
{
	struct<3> Var0;
	
	if (Local_369.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_83(Var0))
	{
		Var0 = { Local_209.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_134(int iParam0)//Position - 0x30EF
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1341))
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)//Position - 0x3106
{
	if (Local_369.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_407.f_23);
		return StackVal;
	}
	return 1;
}

void func_136(int iParam0, int iParam1)//Position - 0x3129
{
	if (Local_209.f_85.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_142(iParam0) > 1 && func_142(iParam0) < 3)
	{
		if (func_138(iParam0, iParam1))
		{
			func_137(iParam0, 8);
		}
		else
		{
			func_128(iParam0, 8);
		}
	}
}

void func_137(int iParam0, int iParam1)//Position - 0x317A
{
	if (func_17(&(Local_1404.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_138(int iParam0, int iParam1)//Position - 0x3196
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	return func_139(iParam0, 8);
}

bool func_139(int iParam0, int iParam1)//Position - 0x31AF
{
	return func_4(&(Local_1404.f_56[iParam0 /*5*/].f_2), iParam1);
}

int func_140(int iParam0)//Position - 0x31C8
{
	if (Local_369.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_407.f_27);
		return StackVal;
	}
	return 0;
}

void func_141(int iParam0, int iParam1)//Position - 0x31EB
{
	Local_1404.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_142(int iParam0)//Position - 0x3200
{
	return Local_1404.f_56[iParam0 /*5*/].f_1;
}

void func_143()//Position - 0x3213
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_209.f_67)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1404.f_47[iVar0 /*8*/]);
			bVar4 = func_424(Local_1404.f_47[iVar0 /*8*/]);
			bVar6 = func_422(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_419(iVar0, 2);
			}
		}
		if (func_112(iVar0) > 2)
		{
			if (func_112(iVar0) != 5 && func_112(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_418(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_418(iVar0, 5);
				}
				else if (func_417(iVar0, iVar2))
				{
					func_418(iVar0, 5);
				}
			}
		}
		if (Local_369.f_352.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_369.f_352.f_46);
		}
		func_413(iVar0, iVar2);
		switch (func_112(iVar0))
		{
			case 0:
				if (func_412(iVar0))
				{
					func_418(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_411(iVar0))
					{
						func_418(iVar0, 2);
					}
				}
				else
				{
					func_114(&(Local_1404.f_47[iVar0 /*8*/]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_410(iVar0))
					{
						if (func_152(iVar0))
						{
							func_418(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					if (func_151(iVar0, iVar2))
					{
						func_418(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_150(iVar0, iVar2);
						}
						break;
					
					case 5:
						if (func_149(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_151(iVar0, iVar2))
							{
							}
							else
							{
								if (func_149(iVar0, 23))
								{
									if (bVar5)
									{
										func_114(&(Local_1404.f_47[iVar0 /*8*/]));
									}
								}
								if (func_148(iVar0))
								{
									func_114(&(Local_1404.f_47[iVar0 /*8*/]));
									func_418(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar5 && func_146(iVar0, iVar2))
								{
									func_114(&(Local_1404.f_47[iVar0 /*8*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar6)
						{
							func_145(iVar0, 13);
						}
						else
						{
							func_144(iVar0, 13);
						}
					}
					iVar0++;
				}

void func_144(int iParam0, int iParam1)//Position - 0x3462
{
	if (func_129(&(Local_1404.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x347E
{
	if (func_17(&(Local_1404.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x349A
{
	if (func_149(iParam0, 23) || func_147(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_369.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_369.f_352.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_147(int iParam0, int iParam1)//Position - 0x34E3
{
	return func_4(&(Local_1404.f_47[iParam0 /*8*/].f_2), iParam1);
}

int func_148(int iParam0)//Position - 0x34FC
{
	if (func_488() != 0)
	{
		return 0;
	}
	if (func_149(iParam0, 13))
	{
		if (Local_369.f_352.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_369.f_352.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_149(int iParam0, int iParam1)//Position - 0x353A
{
	return func_4(&(Local_209.f_67.f_1[iParam0 /*15*/]), iParam1);
}

void func_150(int iParam0, int iParam1)//Position - 0x3552
{
	struct<3> Var0;
	float fVar3;
	
	if (iParam0 != Local_209.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar3 = 500f;
	if (func_83(Local_1404.f_118))
	{
		Local_1404.f_118 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_1404.f_118) > (550f * 550f))
	{
		if (Local_1404.f_103 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_1404.f_103, false);
		}
		Local_1404.f_118 = { Var0 };
		Local_1404.f_103 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_1404.f_118, fVar3, 1f, 0,02f, false, true);
	}
}

int func_151(int iParam0, int iParam1)//Position - 0x35F0
{
	Stack.Push(Local_369.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_369.f_352.f_52);
	if (StackVal && StackVal)
	{
		func_114(&(Local_1404.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x3629
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_110(1, iParam0);
	iVar0 = Local_209.f_67.f_1[iParam0 /*15*/].f_3;
	if (!func_109(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_83(Local_1404.f_112))
	{
		if (func_147(iParam0, 15))
		{
		}
		else
		{
			if (func_149(iParam0, 35) && !func_147(iParam0, 24))
			{
				if (!func_67(Local_209.f_67.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					func_145(iParam0, 24);
				}
			}
			if (func_149(iParam0, 17) || func_147(iParam0, 24))
			{
				if (!func_284(iParam0, &(Local_1404.f_112), &(Local_1404.f_121)))
				{
					bVar1 = false;
				}
			}
			else if (func_149(iParam0, 25))
			{
				Stack.Push(iParam0);
				Stack.Push(&(Local_1404.f_112));
				Stack.Push(&(Local_1404.f_121));
				Call_Loc(Local_369.f_352.f_37);
				if (!StackVal)
				{
					bVar1 = false;
				}
			}
			else if (func_149(iParam0, 18))
			{
				if (!func_280(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (func_149(iParam0, 19))
			{
				if (!func_274(iParam0))
				{
					bVar1 = false;
				}
			}
			else
			{
				Local_1404.f_112 = { Local_209.f_67.f_1[iParam0 /*15*/].f_4 };
				Local_1404.f_121 = Local_209.f_67.f_1[iParam0 /*15*/].f_7;
			}
		}
	}
	if (bVar1)
	{
		if (!func_149(iParam0, 30))
		{
			func_251(Local_1404.f_112, 30f, 0);
			MISC::CLEAR_AREA(Local_1404.f_112, 30f, false, false, false, true);
		}
		if (func_248(&(Local_1404.f_47[iParam0 /*8*/]), iVar0, Local_1404.f_112, Local_1404.f_121, 1, 1, 1, 0, 1, 1, 0, 0, Local_1404.f_112.f_2 <= -100f, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1404.f_47[iParam0 /*8*/]);
			func_153(iParam0, iVar2);
			func_84();
			return 1;
		}
	}
	else
	{
		func_84();
	}
	return 0;
}

void func_153(int iParam0, int iParam1)//Position - 0x380F
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!func_171(iParam0, iParam1))
	{
		func_170(iParam0, iParam1);
	}
	if (func_169(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_149(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_149(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_149(iParam0, 6));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_149(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::_0x2310A8F9421EBF43(iParam1);
	}
	if (func_149(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (func_149(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_1404.f_112, false, false, true);
	}
	if (func_149(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::_0x1B212B26DD3C04DF(iParam1, false);
	}
	if (func_149(iParam0, 28))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1404.f_47[iParam0 /*8*/], true, true);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_147(iParam0, 14))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
		VEHICLE::_0xBB2333BB87DDD87F(iParam1, 0);
		if (func_168(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, func_167(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		func_165(iParam1, iVar0);
		func_164(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam1, func_149(iParam0, 7), false);
		func_163(iParam0, iParam1);
		iVar1 = func_162(iParam0);
		if (iVar1 != -1 && func_161(iVar1) != -1)
		{
			func_160(NETWORK::NET_TO_ENT(Local_1404.f_47[iParam0 /*8*/]), Local_1404.f_155.f_1[func_161(iVar1) /*5*/].f_1);
		}
	}
	if (func_149(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_149(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (func_149(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (func_159(iParam1))
	{
		if (func_149(iParam0, 34))
		{
			VEHICLE::_SET_DEPLOY_HELI_STUB_WINGS(iParam1, true, true);
		}
		else
		{
			VEHICLE::_SET_DEPLOY_HELI_STUB_WINGS(iParam1, false, true);
		}
	}
	if (func_147(iParam0, 15))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			if (func_149(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1))
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
		{
			VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
		}
	}
	if (func_147(iParam0, 15) || func_149(iParam0, 19))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
			PHYSICS::ACTIVATE_PHYSICS(iParam1);
			ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
		}
	}
	VEHICLE::_0xDBC631F109350B8C(iParam1, true);
	VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, true);
	if (!func_158())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_209.f_67.f_1[iParam0 /*15*/].f_3))
	{
		func_156(iParam0, iParam1);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(iParam1, true);
	func_154(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1404.f_47[iParam0 /*8*/], true);
	if (Local_369.f_352.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_369.f_352.f_43);
	}
}

void func_154(int iParam0)//Position - 0x3B45
{
	int iVar0;
	
	func_155(iParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		MISC::SET_BIT(&iVar0, 10);
		MISC::SET_BIT(&iVar0, 11);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_155(int iParam0)//Position - 0x3B91
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x3BBC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (VEHICLE::_GET_IS_DOOR_VALID(iParam1, iVar0))
		{
			iVar1 = func_157(iParam0, iVar0);
			if (iVar1 != -1)
			{
				switch (iVar1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 0f);
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, true, true, true);
						break;
					
					case 1:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 1f);
						break;
					
					case 2:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 1, 0,3f);
						break;
					
					case 3:
						VEHICLE::SET_VEHICLE_DOOR_BROKEN(iParam1, iVar0, true);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_157(int iParam0, int iParam1)//Position - 0x3C68
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 4;
			break;
		
		case 2:
			iVar0 = 8;
			break;
		
		case 3:
			iVar0 = 12;
			break;
		
		case 4:
			iVar0 = 16;
			break;
		
		case 5:
			iVar0 = 20;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (BitTest(Local_209.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_158()//Position - 0x3CF0
{
	return 0;
}

int func_159(int iParam0)//Position - 0x3CF9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("annihilator2"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1)//Position - 0x3D37
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_161(int iParam0)//Position - 0x3D56
{
	return Local_1404.f_2.f_13[iParam0];
}

int func_162(int iParam0)//Position - 0x3D69
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Local_1404.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_163(int iParam0, int iParam1)//Position - 0x3D9C
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", true);
	}
}

void func_164(int iParam0, bool bParam1)//Position - 0x3DBA
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_165(int iParam0, int iParam1)//Position - 0x3E08
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			VEHICLE::_SET_VEHICLE_RECEIVES_RAMP_DAMAGE(iParam0, false);
			break;
	}
	func_166(iParam0);
}

void func_166(int iParam0)//Position - 0x3E33
{
	if (!Global_262145.f_4711)
	{
		VEHICLE::_0x80E3357FDEF45C21(iParam0, 0);
	}
}

float func_167(int iParam0, int iParam1)//Position - 0x3E4D
{
	if (Local_369.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0,2f;
}

bool func_168(int iParam0, int iParam1)//Position - 0x3E85
{
	return func_167(iParam0, iParam1) != 1f;
}

int func_169(int iParam0)//Position - 0x3E97
{
	if (func_57(22))
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)//Position - 0x3EAD
{
	if (Local_209.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_209.f_67.f_1[iParam0 /*15*/].f_8, Local_209.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_209.f_67.f_1[iParam0 /*15*/].f_8, Local_209.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

int func_171(var uParam0, int iParam1)//Position - 0x3F01
{
	struct<101> Var0;
	
	if (Local_369.f_352.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_369.f_352.f_44);
		if (StackVal)
		{
			func_172(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_172(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3F6C
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != func_46())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_226(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, true);
				}
			}
			if (func_225(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, false, true);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::_SET_VEHICLE_HORN_VARIATION(iParam0, uParam1->f_79);
			}
			if (func_224(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::_SET_VEHICLE_INTERIOR_COLOR(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, uParam1->f_99);
			}
			if (func_223(iParam0))
			{
				func_217(iParam0, func_220(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::_SET_VEHICLE_ROOF_LIVERY(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_188(iParam0, &(uParam1->f_81));
			}
			if ((!func_179(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_176(iParam0);
			}
			if (func_175(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_174(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, (Global_262145.f_21791 + 0,05f));
						}
						else
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, Global_262145.f_21791);
						}
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
						break;
					
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, 1f);
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_173(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x4446
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_174(int iParam0)//Position - 0x4456
{
	return func_225(iParam0);
}

int func_175(int iParam0)//Position - 0x4464
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_176(int iParam0)//Position - 0x4565
{
	struct<3> Var0;
	
	if (Global_262145.f_20201)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.f_0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_177(Var0);
			}
		}
	}
}

void func_177(struct<3> Param0)//Position - 0x45F0
{
	struct<3> Var0;
	
	Var0.f_0 = -1553386096;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Param0.f_0;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, func_178(1, 1));
}

int func_178(int iParam0, bool bParam1)//Position - 0x462F
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_70(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_179(int iParam0)//Position - 0x4694
{
	int iVar0;
	
	if (func_187())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_186(iVar0) == iParam0)
			{
				if (func_180(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_180(int iParam0)//Position - 0x46CF
{
	return func_181(iParam0, 6, 1);
}

int func_181(int iParam0, int iParam1, bool bParam2)//Position - 0x46DF
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_185() == 0)
		{
			return BitTest(func_182(func_184(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_182(int iParam0, int iParam1, int iParam2)//Position - 0x4740
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_183(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x477D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
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

int func_184(int iParam0)//Position - 0x47B1
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

int func_185()//Position - 0x4B2C
{
	return Global_31959;
}

int func_186(int iParam0)//Position - 0x4B37
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_187()//Position - 0x4E46
{
	return Global_100493.f_376 > 0;
}

int func_188(int iParam0, var* uParam1)//Position - 0x4E57
{
	int iVar0;
	bool bVar1;
	
	if (!func_198(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_196(iParam0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_191(&iParam0, bVar1))
			{
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
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_189(iParam0))
	{
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x4ED4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577911));
			iVar3 = 20000;
			if (Global_1836584)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_190(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_190(int iParam0)//Position - 0x4F61
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_191(int iParam0, bool bParam1)//Position - 0x4FBD
{
	func_195();
	if (Global_1574632.f_18 != 0 || VEHICLE::_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1946141.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*iParam0);
		if (Global_1946141.f_11 < 0f)
		{
			Global_1946141.f_11 = 0f;
		}
	}
	func_193(*iParam0, &Global_1946141, &(Global_1946141.f_1), &(Global_1946141.f_4), &(Global_1946141.f_7), &(Global_1946141.f_10));
	Global_1946141.f_1.f_2 = (Global_1946141.f_1.f_2 - Global_1946141.f_11);
	if (Global_1946141.f_4.f_2 < 0f)
	{
		Global_1946141.f_12 = 1;
	}
	Global_1946141.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1946141.f_13 = 255;
	}
	if (Global_1946141.f_12)
	{
		if (func_192(iParam0, bParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1946141.f_14 = { Global_1946141.f_1 };
		Global_1946141.f_14 = (Global_1946141.f_14 * -1f);
		Global_1946141.f_17 = { Global_1946141.f_4 };
		Global_1946141.f_17 = (Global_1946141.f_17 * -1f);
		Global_1946141.f_20 = { Global_1946141.f_7 };
		Global_1946141.f_20.f_1 = (Global_1946141.f_20.f_1 * -1f);
		Global_1946141.f_20.f_2 = (Global_1946141.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1946141.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1946141.f_23 = 3;
		}
		Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1946141.f_24 = 3;
		}
		if (((Global_1946141.f_23 == 0 && func_192(iParam0, bParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13)) || Global_1946141.f_23 != 0) && ((Global_1946141.f_24 == 0 && func_192(iParam0, bParam1, Global_1946141, Global_1946141.f_14, Global_1946141.f_17, Global_1946141.f_20, Global_1946141.f_10, 1, Global_1946141.f_13)) || Global_1946141.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_192(var uParam0, bool bParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, int iParam13, int iParam14)//Position - 0x5268
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(bParam1), iParam2, Param3, Param6, Param9, fParam12, iParam13, iParam14);
}

int func_193(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x5291
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_194(Global_1946167, 0f, 0f, 0f, 0) && !func_194(Global_1946170, 0f, 0f, 0f, 0)) && !func_194(Global_1946173, 0f, 0f, 0f, 0)) && !Global_1946176 == 0f)
	{
		*uParam2 = { Global_1946167 };
		*uParam3 = { Global_1946170 };
		*uParam4 = { Global_1946173 };
		*uParam5 = Global_1946176;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1,18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1,24f, 0,3f, -0,07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1,5f, 0,833f, 0,391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1,125f, 2,691f, 0,318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1,5f, 1,853f, 0,779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0,195f, 0,105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1,73f, 0,159f, 0,61f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0,188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1,213f, 1,546f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0,036f, 0,096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0,249f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1,73f, 3,397f, 0,724f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0,167f, 0,159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1,5f, 1,066f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0,111f, 0,123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0,091f, 0,207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0,105f, 0,262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0,415f, 0,394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0,171f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0,163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0,687f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1,045f, 0,15f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0,12f, 0,334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0,372f, 0,439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0,27f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0,195f, -0,063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0,213f, 0,213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0,576f, -0,123f };
			*uParam3 = { 0,997f, -0,105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0,207f, 0,042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0,012f, 0,147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0,216f, 0,216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0,24f, 0,255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0,357f, 0,256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0,426f, 0,339f };
			*uParam3 = { 1f, 0,06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0,108f, 0,234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0,273f, -0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0,35f, 0,456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1,9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0,104f, 0,339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0,104f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0,0965f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2,019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1,5f, 0,42f, -0,2f };
			*uParam3 = { 1f, -0,0997f, 0,0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1,202f, 0,034f, 0,6635f };
			*uParam3 = { 1f, -0,002f, 0f };
			*uParam4 = { 0f, -0,7398f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1,5f, 0,379f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1,76f, 0,105f, 0,009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1,252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2,135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2,352f, 0,3f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0,252f, 0,203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1,654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1,08f, 0,28f, -0,093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1,64f, 0,7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0,021f, 0,273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0,156f, 0,099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1,5f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0,275f, 0,215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1,454f, 0,485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0,109f, 0,129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0,194f, 0,342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0,111f, 0,168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0,497f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0,205f, 0,074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0,408f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0,249f, 0,164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0,253f, 0,142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("cypher"):
			*uParam2 = { -1f, 0,223f, 0,185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0,189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0,42f, 0,309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0,337f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0,14f, -0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0,153f, -0,006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0,151f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0,533f, 0,197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0,076f, 0,122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0,461f, 0,264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0,279f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0,251f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1,194f, 0,182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1,194f, 0,409f, 0,199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0,05f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0,249f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1,2f, 0,474f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1,037f, 0,438f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0,306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0,292f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0,387f, 0,209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 15214558:
			*uParam2 = { -1f, 0,15f, 0,2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -754687673:
			*uParam2 = { -1f, 0,1f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 40817712:
			*uParam2 = { -1f, 0,2f, 0,138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -64075878:
			*uParam2 = { -1f, 0,1f, 0,26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -294678663:
			*uParam2 = { -1f, 0f, 0,28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -1855505138:
			*uParam2 = { 0f, 1,317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case -893984159:
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case 274946574:
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case -165394758:
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -1758379524:
			*uParam2 = { -1f, -0,07f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -994371320:
			*uParam2 = { -1f, 0,07f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case -768236378:
			*uParam2 = { -1f, 0,5f, 0,48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1706945532:
			*uParam2 = { -1f, 0,5f, 0,182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case -1356880839:
			*uParam2 = { -1f, 0,147f, 0,239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 775514032:
			*uParam2 = { -1f, -0,4f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -505223465:
			*uParam2 = { 0f, 1,462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
	}
	return 1;
}

bool func_194(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xA587
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_195()//Position - 0xA5CE
{
	Global_1946141 = 0;
	Global_1946141.f_1 = { 0f, 0f, 0f };
	Global_1946141.f_4 = { 0f, 0f, 0f };
	Global_1946141.f_7 = { 0f, 0f, 0f };
	Global_1946141.f_10 = 0f;
	Global_1946141.f_11 = 0f;
	Global_1946141.f_12 = 0;
	Global_1946141.f_13 = 0;
	Global_1946141.f_14 = { 0f, 0f, 0f };
	Global_1946141.f_17 = { 0f, 0f, 0f };
	Global_1946141.f_20 = { 0f, 0f, 0f };
	Global_1946141.f_23 = 0;
	Global_1946141.f_24 = 0;
}

int func_196(int iParam0)//Position - 0xA647
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_197(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xA67F
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_198(int iParam0, var* uParam1)//Position - 0xA6C7
{
	bool bVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		bVar0 = func_46();
	}
	bVar1 = false;
	if (bVar0 == PLAYER::PLAYER_ID())
	{
		if (func_209(15, 0))
		{
			bVar1 = true;
		}
		else if (func_205(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0 == func_46()) || !func_9(bVar0, 0, 0)) || !bVar1) || func_199(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_199(int iParam0)//Position - 0xA7AE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_201(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_200(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1946166)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case -10917683:
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case -768236378:
			return 1;
			break;
		
		case joaat("club"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0xAA98
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_201(bool bParam0)//Position - 0xAAC4
{
	if (func_204(bParam0) == 233)
	{
		return func_202(bParam0);
	}
	return -1;
}

int func_202(bool bParam0)//Position - 0xAAE1
{
	if (func_203(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_203(bool bParam0, int iParam1)//Position - 0xAB04
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_204(bool bParam0)//Position - 0xAB3F
{
	if (func_203(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

bool func_205(bool bParam0)//Position - 0xAB62
{
	return func_206(PLAYER::PLAYER_ID(), bParam0);
}

int func_206(bool bParam0, bool bParam1)//Position - 0xAB74
{
	return func_207(bParam0, bParam1, 1);
}

int func_207(int iParam0, bool bParam1, int iParam2)//Position - 0xAB85
{
	int iVar0;
	
	if (iParam0 == func_46())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_208(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_46() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_208(bool bParam0, int iParam1)//Position - 0xABE1
{
	if (bParam0 != func_46())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != func_46())
		{
			if (Global_1892703[bParam0 /*599*/].f_10 == bParam0 && Global_1892703[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0, bool bParam1)//Position - 0xAC30
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_214(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_211(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_210(iVar1));
}

int func_210(int iParam0)//Position - 0xAC8E
{
	return (iParam0 % 32);
}

int func_211(int iParam0)//Position - 0xAC9B
{
	int iVar0;
	
	iVar0 = func_182(func_212(iParam0), -1, 0);
	return iVar0;
}

int func_212(var uParam0)//Position - 0xACB3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_213(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_213(int iParam0)//Position - 0xACE0
{
	return (iParam0 / 32);
}

int func_214(bool bParam0)//Position - 0xACED
{
	if (bParam0 != func_46())
	{
		if (func_215(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xAD22
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xAD69
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

void func_217(int iParam0, int iParam1)//Position - 0xB1F0
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_219(iParam1);
	func_218(iVar1, &iVar0);
	VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, iVar0);
}

bool func_218(int iParam0, var uParam1)//Position - 0xB211
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_219(int iParam0)//Position - 0xB4D3
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0xB571
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_221()) && Global_1576214)
	{
		if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
		{
			return 13;
		}
	}
	return 0;
}

int func_221()//Position - 0xB753
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_222() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_222()//Position - 0xB79B
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_223(int iParam0)//Position - 0xB7B0
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_224(int iParam0, var uParam1)//Position - 0xB7D1
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0,2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0,6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_225(int iParam0)//Position - 0xBAD2
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case 40817712:
		case -505223465:
			return 1;
			break;
	}
	return 0;
}

void func_226(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xBB19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_246(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_245(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_245(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_245(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_245(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_245(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_245(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_245(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_245(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_245(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_245(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_245(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_245(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_245(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_245(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_245(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_243(uParam1->f_5) || func_243(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_242(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_241())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_240(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_239(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_239(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_232(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_245(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((func_227() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_227()//Position - 0xC1C1
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_231(7))
	{
		if (func_229(Global_2703735.f_4.f_16) || func_228(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_228(int iParam0)//Position - 0xC250
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0xC274
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_230(iParam0, 9);
	}
	return 0;
}

bool func_230(int iParam0, int iParam1)//Position - 0xC292
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_231(int iParam0)//Position - 0xC2AA
{
	return func_4(&(Global_2703735.f_169), iParam0);
}

int func_232(int iParam0, var uParam1, var uParam2)//Position - 0xC2BE
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_237(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_236(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_235(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_235(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_234(iParam0);
	if (func_233(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_233(int iParam0)//Position - 0xC498
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_234(var uParam0)//Position - 0xC572
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_235(int iParam0, int iParam1)//Position - 0xC5C9
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)//Position - 0xC6AE
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_237(var uParam0, int iParam1, int iParam2)//Position - 0xCA8D
{
	if (!func_238() && unk_0x00834EAC4A96E010(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_238()//Position - 0xCAB1
{
	return 0;
}

void func_239(int iParam0, int iParam1)//Position - 0xCABA
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

int func_240(int iParam0)//Position - 0xCB32
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_241()//Position - 0xCB52
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_242(int iParam0)//Position - 0xCB63
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_243(int iParam0)//Position - 0xCBA8
{
	if (!func_238() && func_244(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0xCBC8
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_245(int iParam0)//Position - 0xCC1B
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_246(int iParam0)//Position - 0xCCCB
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_247(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_200(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(bool bParam0, int iParam1)//Position - 0xCD52
{
	int iVar0;
	
	if (func_9(bParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_248(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xCD9F
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
			func_249(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_249(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xCEA8
{
	int iVar0;
	
	if (func_250(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_250(bool bParam0, struct<3> Param1, int iParam4)//Position - 0xCF7B
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

void func_251(struct<3> Param0, float fParam3, bool bParam4)//Position - 0xD019
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_270(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77137.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_252(iVar0);
			}
		}
		iVar0++;
	}
}

void func_252(int iParam0)//Position - 0xD069
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_270(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_269(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_256(0, Global_77137.f_555[0 /*21*/].f_12) || !func_256(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_255(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_253(iParam0, 0);
		}
	}
}

void func_253(int iParam0, bool bParam1)//Position - 0xD1D8
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_269(iParam0, 0))
		{
			func_254(iParam0, 1, 0);
			func_254(iParam0, 2, 0);
			func_254(iParam0, 3, 0);
			func_254(iParam0, 4, 0);
			func_254(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_254(iParam0, 0, 0);
	}
}

void func_254(int iParam0, bool bParam1, bool bParam2)//Position - 0xD235
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

void func_255(var uParam0, var uParam1)//Position - 0xD270
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_256(int iParam0, int iParam1)//Position - 0xD33C
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_268(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_257(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_257(int iParam0, bool bParam1)//Position - 0xD3AE
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_267())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_266() && !func_265()) && !func_264()) && !func_263()) && !func_267())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_262() || MISC::IS_PC_VERSION()) || func_261())
		{
		}
		else if (!func_264())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_260(iParam0))
		{
			return 0;
		}
	}
	if (!func_258(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_258(int iParam0)//Position - 0xD52E
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_259())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_259()//Position - 0xD5F9
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_260(int iParam0)//Position - 0xD610
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_261()//Position - 0x108E2
{
	return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}

bool func_262()//Position - 0x108F8
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

int func_263()//Position - 0x1090E
{
	return 0;
}

int func_264()//Position - 0x10917
{
	return 1;
}

int func_265()//Position - 0x10920
{
	return 1;
}

int func_266()//Position - 0x10929
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_267()//Position - 0x10942
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, false);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(var uParam0)//Position - 0x109FA
{
	return *uParam0;
}

int func_269(int iParam0, int iParam1)//Position - 0x10A05
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_270(var uParam0, int iParam1)//Position - 0x10A25
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_271(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_271(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_271(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_271(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_271(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_271(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_271(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_271(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_271(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_267())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_267())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_194(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_194(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_194(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_271(int iParam0, int iParam1)//Position - 0x12114
{
	struct<82> Var0;
	
	if (func_273(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_272(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_272(int iParam0, var uParam1, int iParam2)//Position - 0x12156
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_273(int iParam0)//Position - 0x123B2
{
	return iParam0 < 3;
}

int func_274(int iParam0)//Position - 0x123BE
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_277(iParam0, &Var4, &Var1, &uVar0))
	{
		if (func_276(iParam0, Var4, Var1, uVar0))
		{
			Local_1404.f_112 = { Var4 };
			Local_1404.f_121 = func_275(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

float func_275(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x12409
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_276(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x12423
{
	float fVar0;
	
	if (!func_67(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, true, false))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Param1.f_0, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_277(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12492
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_147(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_209.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	*uParam1 = { func_279(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_1364) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_1364) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_278());
	iLocal_1364++;
	if (iLocal_1364 >= 12)
	{
		iLocal_1364 = 0;
	}
	return 1;
}

float func_278()//Position - 0x1251B
{
	return 60f;
}

Vector3 func_279(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)//Position - 0x12528
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

int func_280(int iParam0)//Position - 0x12575
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (func_282(iParam0, &Var1, &Var4, &fVar10, &uVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var4, Var1, fVar10, &Var7))
		{
			if (func_281(iParam0, Var7, Var4, uVar0))
			{
				Local_1404.f_112 = { Var7 };
				Local_1404.f_121 = func_275(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

int func_281(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x125D8
{
	if (Local_369.f_352.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_369.f_352.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_67(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1263B
{
	if (func_147(iParam0, 15))
	{
	}
	else if (Local_369.f_352.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_209.f_67.f_1[iParam0 /*15*/].f_4 };
		*uParam2 = { Local_209.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	if (iLocal_1364 > 0)
	{
		func_283(uParam1);
	}
	if (!func_147(iParam0, 15) && Local_369.f_352.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_41);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 120f;
	}
	else
	{
		*uParam3 = 60f;
	}
	return 1;
}

void func_283(var uParam0)//Position - 0x12726
{
	if (iLocal_1364 < 5)
	{
		switch (iLocal_1364)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_1364 = 0;
	}
	iLocal_1364++;
}

bool func_284(int iParam0, var uParam1, var uParam2)//Position - 0x127CB
{
	struct<35> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_352.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_285(Local_209.f_67.f_1[iParam0 /*15*/].f_4, Local_209.f_67.f_1[iParam0 /*15*/].f_4, Local_209.f_67.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_285(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)//Position - 0x12816
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
	if (!func_407())
	{
		return 0;
	}
	if (func_406() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			func_405();
			func_404();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < func_403(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > func_403(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_397(Param0))
		{
			if (func_396(&Param0, 1))
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
		func_395();
		func_405();
		if (!uParam10->f_27 || (((((((func_394(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			func_375(Param0, iParam6);
		}
		if (func_361(Param0))
		{
			func_375(Param0, iParam6);
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
				if (((uParam10->f_3 && func_67(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_359(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam9;
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
					func_305(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				func_303(Global_2667225.f_683, Global_2667225.f_686, iParam6, &(Global_2667225.f_673));
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
							if (func_302(Global_2667225.f_683, Global_2667225.f_686, iParam6, 1, 1036831949))
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
						func_300(Global_2667225.f_683, 0);
						func_299(-1);
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
				func_299(-1);
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
								if (func_298(Global_2667225.f_683, Global_2667225.f_686, iParam6, PLAYER::PLAYER_ID(), 0) || func_287(Global_2667225.f_683, Global_2667225.f_686, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_300(Global_2667225.f_683, 0);
									func_299(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_300(Global_2667225.f_683, 0);
								func_299(-1);
							}
						}
					}
					else
					{
						func_299(-1);
					}
				}
				else
				{
					func_299(1);
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
			func_305(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var66);
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
		*uParam9 = Global_2667225.f_686;
		func_286(1);
		return 1;
	}
	return 0;
}

void func_286(bool bParam0)//Position - 0x130F4
{
	Global_2667225.f_676 = 0;
	func_395();
	func_405();
	if (bParam0)
	{
		func_404();
	}
}

int func_287(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x13115
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
			if (func_9(bVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_69(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_77(bVar1))
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
										if (func_297(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_288(func_74(bVar1), Param0, fParam3, iParam4, fVar2))
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

int func_288(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)//Position - 0x13288
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_296(iParam7, 1008981770))
	{
		func_289(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_289(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0x132DB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_295(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_290(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_290(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x133A7
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_293(iParam0);
		if (iVar0 != 0)
		{
			func_291(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_291(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x134A6
{
	int iVar0;
	
	func_292(iParam0, &Global_1577992);
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

void func_292(int iParam0, var uParam1)//Position - 0x136B2
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

int func_293(int iParam0)//Position - 0x13733
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_294(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_294(int iParam0)//Position - 0x13762
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_295(var uParam0, struct<3> Param1)//Position - 0x13774
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

float func_296(int iParam0, float fParam1)//Position - 0x1384B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_290(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0,5f) * (Var6.f_0 * 0,5f)) + ((Var6.f_1 * 0,5f) * (Var6.f_1 * 0,5f))) + ((Var6.f_2 * 0,5f) * (Var6.f_2 * 0,5f)))) + fParam1);
	return fVar9;
}

int func_297(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)//Position - 0x138CB
{
	if (func_288(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_289(Param0, fParam3, iParam4, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	func_289(Param5, fParam8, iParam9, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (MISC::_0xA0AD167E4B39D9A2(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_298(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x13969
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam5 == iVar0 || iParam6 == 1)
		{
			bVar1 = iVar0;
			if (func_9(bVar1, 0, 1) && func_9(bParam5, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (func_288(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_288(func_74(bVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_288(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_9(bVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
				{
					if (func_288(func_74(bVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_299(int iParam0)//Position - 0x13A78
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

void func_300(struct<3> Param0, int iParam3)//Position - 0x13AE3
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_301(Param0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam3 /*3*/] };
		Global_2667225.f_2737[iParam3 /*3*/] = { Param0 };
		func_300(Var0, iParam3 + 1);
	}
}

int func_301(struct<3> Param0, float fParam3)//Position - 0x13B4C
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

int func_302(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)//Position - 0x13B87
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
		func_405();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2667225.f_687[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_289(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
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

void func_303(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0x13C58
{
	struct<8> Var0;
	
	*uParam5 = func_304(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 495813132;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_178(1, 1));
}

int func_304(var uParam0, var uParam1, var uParam2)//Position - 0x13CA8
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

void func_305(var uParam0, var uParam1, var uParam2)//Position - 0x13CF7
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_354(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_306(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_306(var uParam0, var uParam1, var uParam2)//Position - 0x13D66
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
		if (func_350(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_345(uParam0, 1))
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
	if (func_293(uParam2->f_34) != 0)
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
					if (!func_338(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_335(Var1))
									{
										Var1 = { func_330(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_329(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_325(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_345(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_324(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_350(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_323(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_67(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_67(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_287(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_315(Var1, uParam2->f_54, &fVar25);
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
																													func_314(Var1, fVar4, iVar16);
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
																									if (func_325(Var1, uParam2))
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
							func_312(0, uParam2);
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
						func_311(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_350(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_345(&Var31, bVar35))
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
				func_307(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_307(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x14795
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
			if (!func_308(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

int func_308(struct<3> Param0, float fParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x14819
{
	if (func_310(Param0, fParam3, bParam4, iParam5, 0) || func_309(Param0, bParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_309(struct<3> Param0, bool bParam3, int iParam4)//Position - 0x1484A
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
					if (func_288(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_9(bVar2, 0, 1) && func_9(bParam3, 0, 1))
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

int func_310(struct<3> Param0, float fParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1490C
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
				if (func_9(bVar1, 0, 1) && func_9(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_9(bVar1, 0, 1) && func_9(bParam4, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_74(bVar1), Param0) < 1f)
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
				else if (func_9(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_74(bVar1), Param0) < 1f)
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

void func_311(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x14A29
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
				*uParam5 = { func_330(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_335(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_312(int iParam0, var uParam1)//Position - 0x14AC6
{
	if (!func_325(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		func_313(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_312(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_312(iParam0 + 1, uParam1);
	}
}

void func_313(int iParam0)//Position - 0x14B21
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

void func_314(struct<3> Param0, float fParam3, int iParam4)//Position - 0x14B6C
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
			func_314(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_315(struct<3> Param0, float fParam3, float fParam4)//Position - 0x14BD9
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
		if (func_316(bVar5))
		{
			Var1 = { func_74(bVar5) };
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

int func_316(bool bParam0)//Position - 0x14C41
{
	if (func_9(bParam0, 0, 1))
	{
		if (!func_321(bParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_318(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_317(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
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
					if (!func_318(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_77(bParam0))
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

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0x14CEE
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

int func_318(bool bParam0, bool bParam1, bool bParam2)//Position - 0x14E99
{
	if (bParam1)
	{
		if (func_319(bParam0))
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

bool func_319(int iParam0)//Position - 0x14ECB
{
	return func_320(iParam0);
}

var func_320(int iParam0)//Position - 0x14ED9
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_321(bool bParam0)//Position - 0x14EF0
{
	if (func_70(bParam0, 0))
	{
		return 1;
	}
	if (func_322())
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

bool func_322()//Position - 0x14F2F
{
	return BitTest(Global_2621446, 3);
}

int func_323(struct<3> Param0, float fParam3, int iParam4)//Position - 0x14F3D
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
		if (func_297(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
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
		if (func_297(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x15049
{
	if (func_298(Param0, fParam3, iParam4, bParam5, iParam6) || func_359(Param0, fParam3, iParam4, bParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_325(struct<3> Param0, var uParam3)//Position - 0x1507F
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_328(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_326(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_326(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0x15110
{
	func_327(&Param3, &Param6);
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

void func_327(var uParam0, var uParam1)//Position - 0x151BB
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

bool func_328(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0x1521D
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

int func_329(struct<3> Param0, float fParam3)//Position - 0x152D0
{
	int iVar0;
	
	if (func_318(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_288(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam3))
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
					if (func_288(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0,5f))
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
					if (func_288(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0,5f))
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
					if (func_288(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_233[iVar0]), 0,5f))
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
					if (func_288(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_119[iVar0]), 0,5f))
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

Vector3 func_330(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)//Position - 0x15564
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
			if (!func_333(Param0, *fParam3, Param6))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_332(Param0))
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
					fVar14 = func_331(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_331(iParam11, 1,5f);
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
		if (!func_333(Param0, *fParam3, Param6))
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
					fVar14 = func_331(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_331(iParam11, 1,5f);
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

float func_331(int iParam0, float fParam1)//Position - 0x159B3
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_290(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_332(struct<3> Param0)//Position - 0x159EA
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

int func_333(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0x15A22
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_295(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_334(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_334(struct<3> Param0, struct<3> Param3)//Position - 0x15A5E
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_335(struct<3> Param0)//Position - 0x15A7F
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_337(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (func_336(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (func_336(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_336(struct<3> Param0, var uParam3)//Position - 0x15AFA
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_337(struct<2> Param0, var uParam2)//Position - 0x15B1A
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

int func_338(var uParam0, bool bParam1)//Position - 0x15BB5
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_344(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0,01f, 360f);
			func_343(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar4);
			if (func_339(Var1, &uVar0) || func_344(Var1))
			{
				Var1 = { *uParam0 };
				func_343(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_339(struct<3> Param0, var uParam3)//Position - 0x15C4D
{
	int iVar0;
	int iVar1;
	
	if (func_342())
	{
		return 0;
	}
	iVar1 = func_341();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_340(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_340(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x15CB1
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_328(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2667225.f_2735) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_326(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_341()//Position - 0x15E12
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

bool func_342()//Position - 0x15E45
{
	return Global_1946250.f_519;
}

void func_343(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0x15E54
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
			func_295(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_295(&Var0, 0f, 0f, fParam7);
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

int func_344(struct<3> Param0)//Position - 0x15EFC
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

bool func_345(var uParam0, bool bParam1)//Position - 0x15F35
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (func_328(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_326(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
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
				*uParam0 = { func_346(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_346(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x16027
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_343(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_349(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_347(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_328(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_326(Var1, Param3, Param6, 0, 0))
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

void func_347(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0x1612A
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
	Var6 = { func_348(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_334(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_334(Var6, Var3) >= 0f)
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
		Var6 = { func_348(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0,5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_348(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_334(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_334(Var6, Var29) >= 0f)
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

Vector3 func_348(struct<3> Param0, struct<3> Param3)//Position - 0x163F9
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_349(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x16432
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

int func_350(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0x16531
{
	int iVar0;
	bool bVar1;
	
	if (func_397(Param0))
	{
		if (func_353(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_351(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_301(*uParam3, 1056964608))
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
				func_343(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_351(var uParam0, bool bParam1, bool bParam2)//Position - 0x165ED
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_339(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_352(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_339(Var2, &uVar1) || func_344(Var2))
			{
				Var2 = { *uParam0 };
				func_352(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_352(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x16671
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_346(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_346(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_346(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_343(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_349(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_347(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_353(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1677B
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
				if (func_340(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_352(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_353(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_352(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_354(var uParam0, var uParam1, var uParam2)//Position - 0x16856
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
			if (func_350(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_345(uParam0, 1))
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
			func_357(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_356();
		}
		else
		{
			func_355();
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
							if ((uParam2->f_12 && !func_324(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_350(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_323(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_67(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_67(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_287(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_315(Var3, uParam2->f_54, &fVar14);
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
																		func_314(Var3, fVar6, iVar7);
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
					func_312(0, uParam2);
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

void func_355()//Position - 0x16EF5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_356()//Position - 0x16F22
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

void func_357(struct<3> Param0)//Position - 0x16FB3
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = func_358(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_358(struct<3> Param0, float fParam3, float fParam4)//Position - 0x16FEE
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

int func_359(struct<3> Param0, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x17050
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
				if (func_360(Param0, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_297(Param0, fParam3, iParam4, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_9(bVar2, 0, 1) && func_9(bParam5, 0, 1))
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

int func_360(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)//Position - 0x1712A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_296(iParam3, 1008981770);
	fVar1 = func_296(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_361(struct<3> Param0)//Position - 0x1716A
{
	var uVar0;
	
	if (Global_2815059.f_924 && func_362(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_362(struct<3> Param0, int iParam3)//Position - 0x17190
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_374(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_363(iVar1))
			{
				if (func_374(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
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

int func_363(int iParam0)//Position - 0x171F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_373(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_46())
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
	if (func_372(PLAYER::PLAYER_ID(), 0) || (func_369(PLAYER::PLAYER_ID()) && func_216(func_368(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_367(PLAYER::PLAYER_ID()) || (func_369(PLAYER::PLAYER_ID()) && func_216(func_368(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_366(PLAYER::PLAYER_ID()) || (func_369(PLAYER::PLAYER_ID()) && func_216(func_368(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_365(PLAYER::PLAYER_ID()) || (func_369(PLAYER::PLAYER_ID()) && func_216(func_368(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_364(PLAYER::PLAYER_ID()) || (func_369(PLAYER::PLAYER_ID()) && func_216(func_368(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_364(bool bParam0)//Position - 0x1735C
{
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_365(bool bParam0)//Position - 0x173A2
{
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_366(bool bParam0)//Position - 0x173E9
{
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_46())
			{
				return func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_367(bool bParam0)//Position - 0x17448
{
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_46())
			{
				return func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_368(bool bParam0)//Position - 0x174A8
{
	if (bParam0 != func_46() && func_9(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_369(bool bParam0)//Position - 0x174D9
{
	if (bParam0 != func_46() && func_9(bParam0, 1, 1))
	{
		if (func_371(bParam0) && !func_370(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)//Position - 0x17512
{
	if (iParam0 != func_46() && func_9(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_371(bool bParam0)//Position - 0x17543
{
	if (bParam0 != func_46() && func_9(bParam0, 1, 1))
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_372(bool bParam0, bool bParam1)//Position - 0x17574
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
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_9 != func_46())
			{
				return func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)//Position - 0x17602
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

int func_374(struct<3> Param0, int iParam3)//Position - 0x17653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_340(Param0, &(Global_2672169[iVar0 /*17*/]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_375(struct<3> Param0, int iParam3)//Position - 0x176A7
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2667225.f_45.f_319)
	{
		return;
	}
	if (!func_393())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_392(Param0);
		if (iVar1 > -1)
		{
			func_404();
			switch (iVar1)
			{
				case 0:
					func_391(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_391(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_391(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_391(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_391(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_391(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_391(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_391(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_391(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_391(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_391(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_391(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_391(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_391(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_391(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_391(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_391(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_391(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_391(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_391(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_391(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_391(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_391(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_391(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_391(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_391(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_391(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_391(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_391(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_391(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_391(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_391(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_391(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_391(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_391(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_391(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_391(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_391(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_391(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_391(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_391(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_391(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_391(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_391(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_391(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_391(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_391(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_391(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_391(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_391(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_391(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_391(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_391(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_389(78);
					break;
				
				case 11:
					func_389(79);
					break;
				
				case 12:
					func_389(82);
					break;
				
				case 13:
					func_389(81);
					break;
				
				case 14:
					func_389(73);
					break;
				
				case 15:
					func_391(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_391(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_391(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_391(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_389(75);
					break;
				
				case 17:
					func_389(76);
					break;
				
				case 18:
					func_389(77);
					break;
				
				case 19:
					func_391(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_391(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_391(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_391(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_389(80);
					break;
				
				case 21:
				case 25:
					func_389(87);
					break;
				
				case 22:
				case 26:
					func_389(88);
					break;
				
				case 23:
				case 27:
					func_389(89);
					break;
				
				case 24:
				case 28:
					func_389(90);
					break;
				
				case 29:
				case 30:
					if (func_388(iParam3))
					{
						func_389(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32);
					}
					break;
				
				case 31:
					func_391(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_391(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_391(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_391(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_391(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_391(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_391(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_391(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_391(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_391(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_391(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_391(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_391(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_391(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_391(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_391(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_391(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_391(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_391(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_391(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_391(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_391(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_391(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_391(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_391(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_391(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_391(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_391(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_391(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_391(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_391(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_391(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_391(-194,254f, -2018,756f, 26,62f, 75f);
					func_391(-186,956f, -2031,369f, 26,62f, 338f);
					func_391(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_391(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_391(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_391(-233,372f, -2089,601f, 26,62f, 304f);
					func_391(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_391(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_391(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_391(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_391(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_391(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_391(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_391(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_391(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_391(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_391(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_391(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_391(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_391(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_391(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_391(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_385(Param0, &iVar2, &iVar6) || (func_362(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_404();
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
				if (!iVar6[iVar0] && func_384(iVar2[iVar0], -1))
				{
					if (func_388(iParam3))
					{
						func_389(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_383(PLAYER::PLAYER_PED_ID()) || func_382(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_381(iParam3))
						{
							func_380(iVar2[iVar0]);
						}
						else if (func_379(iParam3))
						{
							func_378(iVar2[iVar0]);
							func_380(iVar2[iVar0]);
						}
						else
						{
							func_378(iVar2[iVar0]);
							func_380(iVar2[iVar0]);
						}
					}
					else
					{
						func_376(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_389(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_376(int iParam0, int iParam1)//Position - 0x184A0
{
	switch (iParam0)
	{
		case 23:
			func_391(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_391(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_391(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_391(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_391(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_391(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_391(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_391(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_391(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_391(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_391(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_391(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_391(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_391(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_391(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_391(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_391(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_391(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_391(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_391(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_391(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_391(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_391(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_391(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_391(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_391(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_391(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_391(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_391(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_391(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_391(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_391(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_391(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_391(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_391(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_391(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_391(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_391(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_391(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_391(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_391(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_391(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_391(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_391(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_391(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_391(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_391(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_391(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_391(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_391(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_391(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_391(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_391(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_391(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_391(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_391(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_391(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_391(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_391(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_391(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_391(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_391(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_391(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_391(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_391(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_391(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_391(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_391(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_391(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_391(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_391(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_391(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_391(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_391(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_391(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_391(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_391(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_391(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_391(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_391(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_391(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_391(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_391(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_391(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_391(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_391(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_391(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_391(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_391(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_391(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_391(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_391(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_391(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_391(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_391(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_391(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_391(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_391(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_391(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_391(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_391(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_391(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_391(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_391(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_391(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_391(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_391(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_391(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_391(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_391(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_391(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_391(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_391(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_391(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_391(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_391(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_391(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_391(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_391(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_391(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_391(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_391(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_391(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_391(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_391(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_391(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_391(142,7427f, -2536,147f, 5f, 205,0002f);
			func_391(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_391(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_391(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_391(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_391(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_391(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_391(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_391(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_391(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_391(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_391(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_391(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_391(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_391(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_391(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_391(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_391(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_391(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_391(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_391(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_391(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_391(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_391(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_391(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_391(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_391(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_391(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_391(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_391(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_391(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_391(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_391(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_391(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_391(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_391(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_391(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_391(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_391(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_391(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_391(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_391(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_391(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_391(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_391(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_391(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_391(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_391(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_391(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_391(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_391(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_391(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_391(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_391(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_391(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_391(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_391(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_391(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_391(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_391(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_391(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_391(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_391(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_391(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_391(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_391(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_391(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_391(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_391(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_391(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_391(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_391(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_391(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_391(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_391(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_391(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_391(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_391(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_391(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_391(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_391(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_391(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_391(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_391(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_391(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_391(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_391(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_391(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_391(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_391(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_391(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_391(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_391(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_391(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_391(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_391(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_391(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_391(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_391(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_391(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_391(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_391(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_391(-1823,414f, 3092,762f, 31,843f, 330f);
			func_391(-1819,045f, 3100,435f, 31,845f, 330f);
			func_391(-1833,313f, 3075,722f, 31,838f, 330f);
			func_391(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_391(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_391(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_391(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_391(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_391(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_391(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_391(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_391(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_391(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_391(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_391(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_391(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_391(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_391(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_391(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_391(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_391(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_391(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_391(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_391(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_391(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_391(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_391(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_391(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_391(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_391(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_391(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_391(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_391(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_391(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_391(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_391(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_391(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_391(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_391(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_391(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_391(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_391(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_391(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_391(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_391(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_391(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_391(1231,279f, 2910,881f, 43,3085f, 12f);
				func_391(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_391(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_391(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_391(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_391(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_391(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_391(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_391(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_391(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_391(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_391(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_391(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_391(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_391(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_391(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_391(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_391(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_391(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_391(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_391(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_391(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_391(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_391(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_391(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_391(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_391(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_391(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_391(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_391(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_391(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_391(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_391(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_391(3,855f, 2672,388f, 78,437f, 319,2f);
				func_391(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_391(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_391(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_391(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_391(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_391(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_391(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_391(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_391(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_391(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_391(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_391(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_391(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_391(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_391(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_391(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_391(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_391(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_391(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_391(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_391(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_391(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_391(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_391(102,851f, 2688,009f, 51,732f, 224f);
				func_391(109,815f, 2681,012f, 51,112f, 224f);
				func_391(116,355f, 2674,26f, 50,529f, 224f);
				func_391(125,138f, 2665,98f, 49,8f, 224f);
				func_391(132,228f, 2659,865f, 49,26f, 228,4f);
				func_391(139,354f, 2653,536f, 48,737f, 228,4f);
				func_391(88,512f, 2702,995f, 53,042f, 224,199f);
				func_391(81,565f, 2710,357f, 53,67f, 224,199f);
				func_391(75,156f, 2716,981f, 54,223f, 224,199f);
				func_391(68,442f, 2723,806f, 54,775f, 226,199f);
				func_391(61,449f, 2730,606f, 55,308f, 226,199f);
				func_391(53,702f, 2738,167f, 55,855f, 226,199f);
				func_391(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_391(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_391(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_391(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_391(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_391(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_391(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_391(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_391(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_391(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_391(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_391(2714,633f, 3918,283f, 42,938f, 16f);
				func_391(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_391(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_391(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_391(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_391(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_391(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_391(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_391(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_391(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_391(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_391(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_391(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_391(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_391(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_391(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_391(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_391(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_391(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_391(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_391(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_391(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_391(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_391(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_391(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_391(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_391(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_391(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_391(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_391(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_391(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_391(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_391(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_391(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_391(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_391(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_391(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_391(3374,923f, 5520,177f, 20,3207f, 86f);
				func_391(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_391(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_391(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_391(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_391(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_391(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_391(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_391(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_391(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_391(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_391(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_391(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_391(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_391(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_391(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_391(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_391(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_391(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_391(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_391(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_391(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_391(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_391(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_391(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_391(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_391(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(43,848f, 6845,657f, 13,379f, 247,2f);
				func_391(50,379f, 6861,146f, 15,105f, 247,2f);
				func_391(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_391(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_391(55,806f, 6875,081f, 14,824f, 247,2f);
				func_391(11,616f, 6877,079f, 11,466f, 247,2f);
				func_391(18,954f, 6891,633f, 11,37f, 247,2f);
				func_391(26,68f, 6907,587f, 11,869f, 247,2f);
				func_391(7,479f, 6907,895f, 12,024f, 247,2f);
				func_391(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_391(35,591f, 6836,608f, 13,288f, 274,4f);
				func_391(36,028f, 6830,135f, 13,801f, 270,8f);
				func_391(35,114f, 6823,884f, 14,527f, 260,8f);
				func_391(48,779f, 6838,693f, 14,337f, 273,6f);
				func_391(56,738f, 6821,8f, 15,244f, 244,8f);
				func_391(48,377f, 6825,895f, 14,656f, 249,8f);
				func_391(49,11f, 6831,439f, 13,991f, 274,8f);
				func_391(53,544f, 6818,275f, 16,342f, 243f);
				func_391(46,162f, 6821,945f, 15,483f, 249,8f);
				func_391(60,129f, 6836,8f, 15,605f, 269,6f);
				func_391(40,88f, 6802,952f, 20,113f, 242,6f);
				func_391(48,203f, 6799,134f, 20,897f, 244,4f);
				func_391(70,449f, 6809,271f, 16,846f, 243f);
				func_391(61,436f, 6814,266f, 16,71f, 244,2f);
				func_391(56,142f, 6793,458f, 19,806f, 242,6f);
				func_391(65,759f, 6791,12f, 18,433f, 276,4f);
				func_391(77,305f, 6805,391f, 18,558f, 245,6f);
				func_391(85,893f, 6800,243f, 18,535f, 249,8f);
				func_391(56,85f, 6780,582f, 18,822f, 297,999f);
				func_391(65,636f, 6784,669f, 18,789f, 293,799f);
				func_391(74,121f, 6788,498f, 18,739f, 293,799f);
				func_391(97,779f, 6796,32f, 19,02f, 276,799f);
				func_391(106,76f, 6796,983f, 18,914f, 272,599f);
				func_391(112,387f, 6802,858f, 18,994f, 210,599f);
				func_391(117,58f, 6802,644f, 18,663f, 209,399f);
				func_391(122,481f, 6802,693f, 18,468f, 209,399f);
				func_391(127,182f, 6802,686f, 18,218f, 209,399f);
				func_391(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_391(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_391(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_391(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_391(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_391(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_391(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_391(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_391(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_391(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_391(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_391(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_391(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_391(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_391(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_391(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_391(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_391(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_391(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_391(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_391(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_391(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_391(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_391(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_391(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_391(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_391(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_391(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_391(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_391(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_391(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_391(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_391(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_391(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_391(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_391(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_391(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_391(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_391(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_391(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_391(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_391(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_391(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_391(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_391(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_391(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_391(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_391(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_391(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_391(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_391(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_391(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_391(30,027f, 3292,351f, 38,604f, 140,199f);
				func_391(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_391(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_391(23,897f, 3283,152f, 39,381f, 145,399f);
				func_391(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_391(18,723f, 3274,025f, 40,054f, 155,799f);
				func_391(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_391(36,958f, 3298,847f, 38,001f, 127,799f);
				func_391(54,165f, 3311,582f, 36,517f, 303,799f);
				func_391(61,607f, 3317,105f, 35,916f, 306,999f);
				func_391(68,994f, 3323,129f, 35,364f, 308,199f);
				func_391(76,266f, 3329,467f, 34,805f, 311,399f);
				func_391(82,757f, 3335,915f, 34,344f, 316,598f);
				func_391(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_391(14,664f, 3263,688f, 40,931f, 160,398f);
				func_391(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_391(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_391(89,575f, 3343,311f, 33,932f, 318,398f);
				func_391(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_391(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_391(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_391(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_391(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_391(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_391(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_391(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_391(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_391(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_391(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_391(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_391(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_391(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_391(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_391(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_391(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_391(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_391(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_391(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_391(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_391(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_391(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_391(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_391(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_391(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_391(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_391(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_391(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_391(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_391(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_391(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_391(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_391(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_391(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_391(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_391(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_391(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_391(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_391(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_391(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_391(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_391(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_391(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_391(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_391(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_391(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_391(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_391(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_391(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_391(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_391(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_391(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_391(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_391(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_391(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_391(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_391(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_391(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_391(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_391(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_391(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_391(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_391(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_391(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_391(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_391(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_391(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_391(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_391(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_391(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_391(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_391(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_391(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_391(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_391(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_391(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_391(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_391(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_391(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_377(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_377(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_377(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_377(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_377(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_377(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_377(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_377(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_377(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_377(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_377(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_377(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_377(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_377(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_377(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_377(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_377(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_377(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_377(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_377(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_377(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_377(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_377(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_377(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_377(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_377(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_377(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_377(struct<3> Param0, float fParam3, int iParam4, bool bParam5)//Position - 0x1C37A
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_290(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_391(Var10, fParam3);
	}
	else
	{
		func_391(Param0, fParam3);
	}
}

void func_378(int iParam0)//Position - 0x1C3F4
{
	switch (iParam0)
	{
		case 83:
			func_391(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_391(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_391(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_391(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_391(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_391(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_391(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_391(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_391(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_391(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_391(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_391(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_391(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_391(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_391(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_391(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_391(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_391(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_391(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_391(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_391(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_391(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_391(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_391(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_391(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_391(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_391(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_391(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_391(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_391(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_391(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_391(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_391(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_391(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_391(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_391(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_391(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_391(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_391(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_391(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_391(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_391(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_391(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_391(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_391(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_391(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_391(-1356,991f, -3242,228f, 12,945f, 330f);
			func_391(-1369,313f, -3234,758f, 12,945f, 330f);
			func_391(-1381,751f, -3227,408f, 12,945f, 330f);
			func_391(-1394,302f, -3220,021f, 12,945f, 330f);
			func_391(-1354,339f, -3223,129f, 12,945f, 330f);
			func_391(-1366,302f, -3215,809f, 12,945f, 330f);
			func_391(-1378,492f, -3208,645f, 12,945f, 330f);
			func_391(-1350,322f, -3203,405f, 12,945f, 330f);
			func_391(-1362,684f, -3196,451f, 12,945f, 330f);
			func_391(-1347,089f, -3182,69f, 12,945f, 330f);
			func_391(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_391(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_391(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_391(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_391(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_391(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_391(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_391(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_391(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_391(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_391(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_391(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_391(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_391(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_391(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_391(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_391(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_391(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_391(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_391(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_391(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_391(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_391(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_391(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_391(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_391(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_391(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_391(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_391(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_391(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_391(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_391(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_391(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_391(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_391(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_391(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_391(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_391(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_391(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_391(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_391(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_391(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_391(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_391(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_391(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_391(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_391(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_391(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_391(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_391(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_391(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_391(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_391(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_391(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_391(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_391(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_391(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_391(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_391(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_391(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_391(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_391(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_391(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_391(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_391(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_391(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_391(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_391(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_391(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_391(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_391(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_391(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_391(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_391(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_391(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_391(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_391(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_391(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_391(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_391(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_391(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_391(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_391(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_391(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_391(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_391(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_391(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_391(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_391(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_391(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_391(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_391(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_391(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_391(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_391(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_391(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_391(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_391(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_391(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_391(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_391(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_391(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_391(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_391(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_391(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_391(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_391(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_391(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_391(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_391(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_391(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_391(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_391(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_391(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_391(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_391(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_391(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_391(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_391(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_391(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_391(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_391(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_391(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_391(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_391(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_391(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_391(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_391(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_391(-2484,323f, 3249,294f, 31,828f, 151f);
			func_391(-2495,313f, 3255,746f, 31,828f, 151f);
			func_391(-2472,644f, 3242,684f, 31,828f, 151f);
			func_391(-2506,313f, 3262,27f, 31,823f, 151f);
			func_391(-2461,494f, 3235,93f, 31,828f, 151f);
			func_391(-2505,602f, 3238,049f, 31,828f, 151f);
			func_391(-2481,937f, 3224,8f, 31,828f, 151f);
			func_391(-2516,813f, 3244,266f, 31,823f, 151f);
			func_391(-2470,03f, 3217,899f, 31,828f, 151f);
			func_391(-2493,933f, 3231,308f, 31,828f, 151f);
			func_391(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_391(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_391(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_391(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_391(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_391(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_391(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_391(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_391(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_391(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_391(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_391(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_391(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_391(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_391(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_391(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_391(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_391(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_391(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_391(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_391(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_391(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_391(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_391(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_391(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_391(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_391(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_391(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_391(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_391(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_391(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_391(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_391(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_391(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_391(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_391(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_379(int iParam0)//Position - 0x1D9C3
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

void func_380(int iParam0)//Position - 0x1DA6D
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_391(-947,712f, -3367,704f, 12,944f, 60f);
			func_391(-904,692f, -3293,072f, 12,944f, 60f);
			func_391(-863,71f, -3221,978f, 12,944f, 60f);
			func_391(-966,418f, -3162,773f, 12,944f, 60f);
			func_391(-1007,435f, -3233,93f, 12,944f, 60f);
			func_391(-1050,455f, -3308,559f, 12,944f, 60f);
			func_391(-1145,673f, -3253,456f, 12,944f, 60f);
			func_391(-1098,386f, -3181,428f, 12,944f, 60f);
			func_391(-1060,474f, -3108,903f, 12,944f, 60f);
			func_391(-1155,391f, -3053,632f, 12,944f, 60f);
			func_391(-1196,114f, -3125,146f, 12,948f, 60f);
			func_391(-1235,552f, -3201,86f, 12,944f, 60f);
			func_391(-1344,446f, -3139,177f, 12,944f, 60f);
			func_391(-1301,308f, -3064,341f, 12,944f, 60f);
			func_391(-1260,135f, -2992,912f, 12,944f, 60f);
			func_391(-1364,244f, -2932,9f, 12,98f, 60f);
			func_391(-1405,284f, -3004,108f, 12,96f, 60f);
			func_391(-1448,29f, -3078,72f, 12,95f, 60f);
			func_391(-1535,732f, -3028,318f, 12,945f, 60f);
			func_391(-1492,639f, -2953,558f, 12,945f, 60f);
			func_391(-1451,506f, -2882,2f, 12,944f, 60f);
			func_391(-1553,927f, -2823,12f, 13,002f, 60f);
			func_391(-1595,097f, -2894,571f, 12,944f, 60f);
			func_391(-1637,836f, -2968,714f, 12,945f, 60f);
			func_391(-1740,971f, -2911,484f, 12,944f, 330f);
			func_391(-1696,293f, -2833,978f, 12,944f, 330f);
			func_391(-1651,502f, -2756,273f, 12,945f, 330f);
			func_391(-1588,258f, -2647,575f, 12,944f, 330f);
			func_391(-1536,862f, -2681,378f, 12,945f, 330f);
			func_391(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_391(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_391(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_391(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_391(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_391(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_391(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_391(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_391(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_391(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_391(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_391(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_391(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_391(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_391(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_391(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_391(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_391(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_391(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_391(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_391(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_391(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_391(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_391(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_391(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_391(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_391(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_391(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_391(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_391(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_391(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_381(int iParam0)//Position - 0x1E043
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

int func_382(int iParam0)//Position - 0x1E0E1
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

int func_383(int iParam0)//Position - 0x1E11F
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

int func_384(int iParam0, int iParam1)//Position - 0x1E15D
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

int func_385(struct<2> Param0, var uParam2, var uParam3, var uParam4)//Position - 0x1E23A
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
			if (func_363(iVar0))
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
			if (func_386(iVar0))
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

int func_386(int iParam0)//Position - 0x1E3A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_387(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_46())
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

int func_387(int iParam0)//Position - 0x1E414
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

int func_388(int iParam0)//Position - 0x1E49B
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_389(int iParam0)//Position - 0x1E4C9
{
	switch (iParam0)
	{
		case 78:
			func_391(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_391(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_391(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_391(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_391(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_391(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_391(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_391(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_391(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_391(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_391(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_391(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_391(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_391(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_391(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_391(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_391(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_391(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_391(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_391(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_391(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_391(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_391(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_391(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_391(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_391(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_391(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_391(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_391(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_391(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_391(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_391(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_391(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_391(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_391(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_391(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_390())
			{
				func_391(-1608,297f, -556,875f, 33,406f, 310f);
				func_391(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_391(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_391(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_391(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_391(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_391(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_391(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_391(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_391(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_391(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_391(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_390())
			{
				func_391(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_391(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_391(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_391(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_391(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_391(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_391(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_391(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_391(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_391(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_391(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_391(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_390())
			{
				func_391(-102,737f, -597,379f, 35,053f, 160,999f);
				func_391(-97,793f, -589,568f, 35,082f, 134,799f);
				func_391(-110,357f, -619,402f, 35,055f, 160,599f);
				func_391(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_391(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_391(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_391(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_391(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_391(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_391(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_391(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_391(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_390())
			{
				func_391(-59,349f, -779,238f, 43,134f, 228,398f);
				func_391(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_391(-65,212f, -772,66f, 43,151f, 219,398f);
				func_391(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_391(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_391(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_391(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_391(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_391(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_391(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_391(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_391(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_391(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_391(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_391(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_391(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_391(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_391(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_391(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_391(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_391(-1464,5f, -927,9f, 9f, 296,7991f);
			func_391(-1466f, -926,1f, 9f, 296,7991f);
			func_391(-1467,9f, -924,7f, 9f, 296,7991f);
			func_391(-1469,7f, -923,7f, 9f, 296,7991f);
			func_391(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_391(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_391(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_391(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_391(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_391(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_391(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_391(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_391(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_391(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_391(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_391(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_391(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_391(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_391(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_391(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_391(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_391(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_391(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_391(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_391(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_391(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_391(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_391(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_391(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_391(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_391(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_391(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_391(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_391(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_391(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_391(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_391(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_391(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_391(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_391(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_391(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_391(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_391(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_391(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_391(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_391(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_391(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_391(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_391(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_391(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_391(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_391(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_391(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_391(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_391(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_391(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_391(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_391(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_391(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_391(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_391(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_391(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_391(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_391(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_391(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_391(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_391(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_391(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_391(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_391(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_391(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_391(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_391(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_391(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_391(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_391(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_391(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_391(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_391(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_391(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_391(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_391(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_391(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_391(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_391(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_391(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_391(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_391(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_390()//Position - 0x1F6C4
{
	return Global_2714762.f_17;
}

void func_391(struct<3> Param0, float fParam3)//Position - 0x1F6D2
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

int func_392(struct<3> Param0)//Position - 0x1F737
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
		if (func_336(Param0, &(Global_2674547[iVar0 /*7*/])))
		{
			Global_2667225.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667225.f_2907 = -1;
	return -1;
}

int func_393()//Position - 0x1F7D9
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2715699.f_6415)
	{
		return 0;
	}
	return 0;
}

int func_394(struct<2> Param0, var uParam2, bool bParam3, float fParam4)//Position - 0x1F801
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
			if (func_363(iVar0))
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

void func_395()//Position - 0x1F883
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667225.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_396(var uParam0, bool bParam1)//Position - 0x1F8AE
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
		if (func_336(Var1, &(Global_2674503[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_347(&Var1, Global_2674503[iVar0 /*7*/], Global_2674503[iVar0 /*7*/].f_3, Global_2674503[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_397(struct<3> Param0)//Position - 0x1F94B
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_401(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_400(Param0, 1008981770))
			{
				if (!func_353(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_353(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_399(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_398(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_353(&Var1, 0, 0, 0, 1))
					{
						if (!func_353(&Param0, 0, 0, 0, 1))
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

Vector3 func_398(var uParam0)//Position - 0x1FA0B
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

int func_399(struct<3> Param0, float fParam3)//Position - 0x1FA54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_340(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_400(struct<3> Param0, float fParam3)//Position - 0x1FA9C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_340(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_401(bool bParam0, bool bParam1)//Position - 0x1FAE3
{
	if (func_185() != 0)
	{
		return func_402(bParam0) != 0;
	}
	return func_318(bParam0, bParam1, 0);
}

int func_402(int iParam0)//Position - 0x1FB0A
{
	if (func_9(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_403(bool bParam0)//Position - 0x1FB2C
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

void func_404()//Position - 0x1FB4F
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

void func_405()//Position - 0x1FB83
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

int func_406()//Position - 0x1FC2F
{
	if (!Global_2667225.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < func_403(0))
	{
		return 1;
	}
	return 0;
}

int func_407()//Position - 0x1FC63
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
	if (!func_409(PLAYER::PLAYER_ID()) && !func_408(0))
	{
		return 0;
	}
	return 1;
}

bool func_408(bool bParam0)//Position - 0x1FCBA
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_409(bool bParam0)//Position - 0x1FCCB
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

int func_410(int iParam0)//Position - 0x1FCED
{
	if (!func_113(1, iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1341))
	{
		return 0;
	}
	Stack.Push(Local_369.f_352.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_352.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_411(int iParam0)//Position - 0x1FD35
{
	int iVar0;
	
	if (Local_369.f_352.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_1404.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_118(&(Local_1404.f_47[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_412(int iParam0)//Position - 0x1FD89
{
	if (Local_369.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_352.f_23);
		return StackVal;
	}
	return 1;
}

void func_413(int iParam0, int iParam1)//Position - 0x1FDAC
{
	if (Local_209.f_67.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (func_112(iParam0) > 2 && func_112(iParam0) < 5)
	{
		if (func_414(iParam0, iParam1))
		{
			func_145(iParam0, 2);
		}
		else
		{
			func_144(iParam0, 2);
		}
	}
}

bool func_414(int iParam0, int iParam1)//Position - 0x1FDFB
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = func_416(iParam1);
		if (iVar0 != func_46() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
			return func_415(iVar1, 2);
		}
	}
	return func_147(iParam0, 2);
}

bool func_415(int iParam0, int iParam1)//Position - 0x1FE42
{
	return func_4(&(Local_1566[iParam0 /*35*/].f_1), iParam1);
}

bool func_416(int iParam0)//Position - 0x1FE59
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (bVar1 != func_46() && func_9(bVar1, 0, 1))
			{
				return bVar1;
			}
		}
	}
	return func_46();
}

int func_417(int iParam0, int iParam1)//Position - 0x1FEB5
{
	return 0;
}

void func_418(int iParam0, int iParam1)//Position - 0x1FEBE
{
	Local_1404.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_419(int iParam0, int iParam1)//Position - 0x1FED3
{
	int iVar0;
	
	if (iParam1 != func_421())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_209.f_19)
	{
		if (iParam0 == func_420(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_420(int iParam0)//Position - 0x1FF0E
{
	return Local_1404.f_2.f_9[iParam0];
}

int func_421()//Position - 0x1FF21
{
	return Local_209.f_19.f_5[0 /*13*/].f_11;
}

int func_422(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x1FF34
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_423(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && bVar3 != func_46()) && func_9(bVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_423(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x20019
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_424(int iParam0)//Position - 0x200B4
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_425(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_425(int iParam0)//Position - 0x200D4
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

void func_426()//Position - 0x2010D
{
	func_427();
}

void func_427()//Position - 0x20119
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_435() > 0 && Local_1304.f_0 > 0)
		{
			if (func_692(53))
			{
				Var0 = { func_434(func_10()) };
				if (func_428(func_10(), Local_1404.f_129, &Var0))
				{
					func_16(8);
				}
			}
		}
	}
}

int func_428(bool bParam0, struct<3> Param1, var uParam4)//Position - 0x2016E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_433(Param1))
	{
		return 0;
	}
	if (bParam0 == func_46())
	{
		return 0;
	}
	if (*uParam4 > 18)
	{
		return 0;
	}
	iVar0 = func_432(bParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam4)
		{
			if ((*uParam4)[iVar1] != 0)
			{
				iVar2 = func_431(iVar0, (*uParam4)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_430(Param1, Global_2681762.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!func_15(&(Global_1952191.f_5477)) || func_13(&(Global_1952191.f_5477), 10000, 0))
						{
							func_18(&(Global_1952191.f_5477), 0, 0);
							func_429(bParam0, Param1, uParam4);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_429(bool bParam0, struct<3> Param1, var uParam4)//Position - 0x20249
{
	struct<26> Var0;
	int iVar26;
	int iVar27;
	
	if (!func_433(Param1))
	{
		return;
	}
	if (*uParam4 > 18)
	{
		return;
	}
	if (*uParam4 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0.f_0 = -1247260598;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam4;
	iVar26 = 0;
	while (iVar26 < *uParam4)
	{
		Var0.f_6[iVar26] = (*uParam4)[iVar26];
		iVar26++;
	}
	iVar27 = func_178(1, 1);
	if (!iVar27 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 26, iVar27);
	}
}

int func_430(struct<3> Param0, struct<3> Param3)//Position - 0x202FB
{
	if (!func_433(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param3.f_0 && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0, int iParam1)//Position - 0x2032E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2681762.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_432(bool bParam0)//Position - 0x20367
{
	int iVar0;
	
	if (func_9(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_433(struct<3> Param0)//Position - 0x203A5
{
	if (Param0.f_0 == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_434(bool bParam0)//Position - 0x203C7
{
	struct<20> Var0;
	int iVar20;
	int iVar21;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_51(bParam0))
	{
		return Var0;
	}
	if (func_9(bParam0, 0, 1))
	{
		iVar20 = 0;
		while (iVar20 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar20 /*75*/] == bParam0)
			{
				iVar21 = 0;
				while (iVar21 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar20 /*75*/].f_1[iVar21] != 0 && !func_433(Global_2681762.f_199.f_962[iVar20 /*75*/].f_20[iVar21 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar20 /*75*/].f_1[iVar21];
						Var0.f_19++;
					}
					iVar21++;
				}
			}
			else
			{
				iVar20++;
			}
		}
	}
	return Var0;
}

int func_435()//Position - 0x20495
{
	int iVar0;
	
	iVar0 = (iVar0 + func_28());
	return iVar0;
}

void func_436()//Position - 0x204A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		func_448(iVar0);
		func_443(iVar0);
		iVar0++;
	}
	func_437();
}

void func_437()//Position - 0x204D5
{
	if (Local_209.f_19 <= 0)
	{
		return;
	}
	if (!func_442())
	{
		return;
	}
	Stack.Push(Local_369.f_114.f_36 != 0);
	Call_Loc(Local_369.f_114.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_441())
	{
		if (func_440())
		{
			func_8(5);
		}
	}
	else if (func_438())
	{
		func_8(5);
	}
}

int func_438()//Position - 0x20531
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_439(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_439(int iParam0, int iParam1)//Position - 0x2055D
{
	return func_4(&(Local_1404.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_440()//Position - 0x20576
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_439(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_441()//Position - 0x205A3
{
	return func_57(0);
}

int func_442()//Position - 0x205B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_439(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_443(int iParam0)//Position - 0x205DD
{
	if (func_439(iParam0, 29) && func_446(iParam0))
	{
		if (func_445(iParam0))
		{
			func_444(iParam0, 29);
		}
	}
}

void func_444(int iParam0, int iParam1)//Position - 0x2060C
{
	if (func_129(&(Local_1404.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_445(int iParam0)//Position - 0x20628
{
	int iVar0;
	
	if (func_446(iParam0))
	{
		iVar0 = func_420(iParam0);
		return (Local_1404.f_47[iVar0 /*8*/].f_1 == 5 || func_439(iParam0, 0));
	}
	return 1;
}

bool func_446(int iParam0)//Position - 0x2065F
{
	return (func_447(iParam0) && func_421() == 2);
}

bool func_447(int iParam0)//Position - 0x20678
{
	return Local_1404.f_2.f_9[iParam0] != -1;
}

void func_448(int iParam0)//Position - 0x2068D
{
	if (Local_209.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_23);
		if (StackVal)
		{
			if (!func_439(iParam0, 6))
			{
				if (func_109(Local_209.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (NETWORK::_CAN_REGISTER_MISSION_PICKUPS(1))
					{
						if (func_450(iParam0))
						{
							func_449(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_449(int iParam0, int iParam1)//Position - 0x206EB
{
	if (func_17(&(Local_1404.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_450(int iParam0)//Position - 0x20707
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1404.f_2[iParam0]))
	{
		Var0 = { func_484(iParam0) };
		fVar3 = Local_209.f_19.f_5[iParam0 /*13*/].f_6;
		Var4 = { Local_209.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_83(Var0))
		{
			return 0;
		}
		Local_1404.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_483(iParam0), Var0, !func_482(iParam0, 0), Local_209.f_19.f_5[iParam0 /*13*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), fVar3);
		if (!func_83(Var4))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), Var4, 2, true);
		}
		func_476(iParam0, Var0);
		if (Local_369.f_114.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_369.f_114.f_30);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1404.f_2[iParam0]))
	{
		if (func_451(&(Local_1404.f_2.f_13[iParam0]), 0, iParam0, func_475(iParam0), func_474(), func_473(iParam0), func_472(iParam0)))
		{
			func_160(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), Local_1404.f_155.f_1[func_161(iParam0) /*5*/].f_1);
			Local_1404.f_2.f_11[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
	}
	return 0;
}

int func_451(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)//Position - 0x2084E
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_471();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_1404.f_155 != iParam4)
	{
		Local_1404.f_155 = iParam4;
	}
	if (Local_1404.f_155.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_1404.f_155.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_1404.f_155.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (func_452(&(Local_1404.f_155.f_1[*uParam0 /*5*/]), bParam3, *uParam0, Local_1404.f_155, &(Local_1404.f_129), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_452(var uParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x208DD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar7;
	
	if (bParam1 == func_46())
	{
		return 0;
	}
	if (!func_433(*uParam4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			*uParam4 = { func_470() };
		}
		else
		{
			return 0;
		}
	}
	if (!func_430(*uParam4, Global_1952191.f_5479))
	{
		if ((MISC::GET_FRAME_COUNT() - Global_1952191.f_5479.f_4) <= 90 || (func_15(&(Global_1952191.f_5302)) && !func_13(&(Global_1952191.f_5302), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_468();
			func_467(*uParam4);
		}
	}
	if (BitTest(Global_1952191.f_5479.f_3, 31))
	{
		iVar1 = (Global_1952191.f_5479.f_4 - 1);
		if (MISC::GET_FRAME_COUNT() == iVar1)
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1952191.f_5479.f_3), 31);
		}
	}
	if (Global_1952191.f_5479.f_4 == 0)
	{
		Global_1952191.f_5479.f_4 = MISC::GET_FRAME_COUNT();
		bVar0 = false;
		while (bVar0 < 20)
		{
			Global_1952191.f_5484[bVar0] = -1;
			iVar2 = func_465(PLAYER::PLAYER_ID(), bVar0);
			if (func_464(iVar2))
			{
				MISC::SET_BIT(&(Global_1952191.f_5479.f_3), bVar0);
			}
			bVar0++;
		}
	}
	uVar3 = func_463(bParam1, bParam2);
	*uParam0 = bParam1;
	uParam0->f_1 = uVar3;
	if (func_462(*uParam0))
	{
		Var4 = { func_460(*uParam0) };
		if ((Global_1952191.f_5479.f_4 == MISC::GET_FRAME_COUNT() || func_459(*uParam0) != iParam3) || !func_430(*uParam4, Var4))
		{
			if (Global_1952191.f_5479.f_4 != MISC::GET_FRAME_COUNT())
			{
				Global_1952191.f_5479.f_4 = MISC::GET_FRAME_COUNT();
				if (Global_1952191.f_5484[bVar0] == uParam0->f_1)
				{
					Global_1952191.f_5484[bVar0] = -1;
				}
			}
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), bParam2);
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), 31);
			uParam0->f_1 = -1;
			Global_1952191.f_5479.f_4++;
			return 0;
		}
		else
		{
			func_454(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1952191.f_5484[bParam2] == -1)
	{
		Global_1952191.f_5484[bParam2] = uVar3;
	}
	if (!func_15(&(Global_1952191.f_5302)) || func_13(&(Global_1952191.f_5302), 1500, 0))
	{
		bVar7 = true;
		func_18(&(Global_1952191.f_5302), 0, 0);
	}
	if (!bVar7)
	{
		if (MISC::GET_FRAME_COUNT() == Global_1952191.f_5304)
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		func_453(*uParam0, iParam3, uParam5, *uParam4, uParam6);
		Global_1952191.f_5304 = MISC::GET_FRAME_COUNT();
	}
	return 0;
}

void func_453(struct<2> Param0, int iParam2, var uParam3, struct<3> Param4, var uParam7)//Position - 0x20B82
{
	struct<10> Var0;
	int iVar10;
	
	if (!func_433(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0.f_0 = -441166609;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam2;
	Var0.f_9 = uParam3;
	Var0.f_5 = uParam7;
	Var0.f_6 = { Param4 };
	iVar10 = func_178(1, 1);
	if (!iVar10 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 10, iVar10);
	}
}

void func_454(struct<2> Param0, char* sParam2)//Position - 0x20C0F
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	
	bVar0 = false;
	if (bVar0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = func_458(Param0);
		bVar2 = func_462(Param0);
		uVar3 = func_459(Param0);
		iVar4 = func_457(Param0);
		uVar5 = func_455(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

int func_455(struct<2> Param0)//Position - 0x20C99
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_456(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681762.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_456(struct<2> Param0, struct<2> Param2)//Position - 0x20CF8
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_457(struct<2> Param0)//Position - 0x20D2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_456(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681762.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_458(struct<2> Param0)//Position - 0x20D88
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_46());
}

int func_459(struct<2> Param0)//Position - 0x20DA2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_456(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681762.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_460(struct<2> Param0)//Position - 0x20E01
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_461(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2681762.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_461(struct<2> Param0)//Position - 0x20E51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_456(Param0, Global_2681762.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_462(struct<2> Param0)//Position - 0x20E8D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_456(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_463(bool bParam0, int iParam1)//Position - 0x20EDF
{
	bool bVar0;
	
	if (Global_1952191.f_5484[iParam1] != -1)
	{
		return Global_1952191.f_5484[iParam1];
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (!BitTest(Global_1952191.f_5479.f_3, bVar0))
		{
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), bVar0);
			return func_465(bParam0, bVar0);
		}
		bVar0++;
	}
	return -1;
}

int func_464(int iParam0)//Position - 0x20F42
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_465(bool bParam0, bool bParam1)//Position - 0x20F8F
{
	int iVar0;
	
	iVar0 = func_466(bParam0);
	return (iVar0 + bParam1);
}

int func_466(bool bParam0)//Position - 0x20FA4
{
	return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
}

void func_467(struct<3> Param0)//Position - 0x20FB6
{
	Global_1952191.f_5479 = { Param0 };
}

void func_468()//Position - 0x20FCB
{
	Global_1952191.f_5479.f_3 = 0;
	Global_1952191.f_5479.f_4 = 0;
	Global_1952191.f_5479 = { func_469() };
}

Vector3 func_469()//Position - 0x20FF4
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_470()//Position - 0x21015
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	return Var0;
}

int func_471()//Position - 0x2104C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_458(Local_1404.f_155.f_1[iVar1 /*5*/]))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_472(int iParam0)//Position - 0x21087
{
	return 0;
}

int func_473(int iParam0)//Position - 0x21090
{
	return 1;
}

int func_474()//Position - 0x21099
{
	return 23;
}

bool func_475(int iParam0)//Position - 0x210A3
{
	return func_10();
}

void func_476(int iParam0, struct<3> Param1)//Position - 0x210AF
{
	if (func_447(iParam0))
	{
		func_449(iParam0, 29);
		if (iParam0 != func_481(func_420(iParam0)))
		{
			func_449(iParam0, 40);
		}
	}
	else if (!func_482(iParam0, 7))
	{
		func_449(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1404.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), true, 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), true);
	OBJECT::_0x641F272B52E2F0F8(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), 1);
	OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
	if (func_480())
	{
		OBJECT::_0x4C134B4DF76025D0(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
	}
	if (func_479(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
	}
	else
	{
		func_449(iParam0, 28);
	}
	if (!func_482(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]));
	}
	if (func_482(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (func_482(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
	}
	if (func_482(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), true);
	}
	if ((func_482(iParam0, 6) || func_482(iParam0, 7)) || func_447(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), false, false);
	}
	if (Local_209.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_449(iParam0, 23);
	}
	if (func_478(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), true);
	}
	if (func_482(iParam0, 9) || Local_369.f_114.f_38 != 0)
	{
		func_477(iParam0, 1, 0);
	}
}

void func_477(int iParam0, bool bParam1, bool bParam2)//Position - 0x212F2
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), bParam1, bParam2);
}

int func_478(int iParam0)//Position - 0x2130F
{
	if (func_482(iParam0, 8))
	{
		return 1;
	}
	if (func_57(22))
	{
		return 1;
	}
	return 0;
}

bool func_479(int iParam0)//Position - 0x21334
{
	if (func_439(iParam0, 29))
	{
		return 0;
	}
	return !func_482(iParam0, 5);
}

int func_480()//Position - 0x21353
{
	return 0;
}

int func_481(int iParam0)//Position - 0x2135C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_19)
	{
		if (Local_1404.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_482(int iParam0, int iParam1)//Position - 0x2138F
{
	return func_4(&(Local_209.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_483(int iParam0)//Position - 0x213A7
{
	if (Local_369.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_28);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_484(int iParam0)//Position - 0x213CC
{
	if (func_486(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_446(iParam0))
	{
		return Local_209.f_67.f_1[func_420(iParam0) /*15*/].f_4 + func_485(iParam0, Local_209.f_67.f_1[func_420(iParam0) /*15*/].f_3);
	}
	return Local_209.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_485(int iParam0, int iParam1)//Position - 0x21430
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0,1f;
				
				case 1:
					return -1f, -2f, -0,1f;
				
				case 2:
					return 1f, -2f, -0,1f;
				
				case 3:
					return -1f, -2f, -0,1f;
				
				default:
			}
			break;
		
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0,5f, 0f, -0,1f;
				
				case 1:
					return -0,5f, 0f, -0,1f;
				
				case 2:
					return 0,5f, 0f, -0,1f;
				
				case 3:
					return -0,5f, 0f, -0,1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0,1f;
		
		case 1:
			return -1f, 0f, -0,1f;
		
		case 2:
			return 1f, 0f, -0,1f;
		
		case 3:
			return -1f, 0f, -0,1f;
		
		default:
	}
	return 0f, -1f, -0,1f;
}

bool func_486(var uParam0)//Position - 0x2155F
{
	struct<3> Var0;
	
	if (Local_369.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_369.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_83(Var0);
}

void func_487()//Position - 0x2158D
{
}

int func_488()//Position - 0x21595
{
	return Local_1404.f_82;
}

void func_489(int iParam0)//Position - 0x215A2
{
	Local_1404.f_81 = iParam0;
}

int func_490()//Position - 0x215B1
{
	int iVar0;
	
	if (!func_686(func_690(), func_688()))
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	func_504();
	func_501();
	Local_1404.f_93 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_500(), -1, 0);
	func_499();
	func_496();
	func_495();
	func_493();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1404.f_63[iVar0] = -1;
		iVar0++;
	}
	Local_1404.f_97 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	STATS::_0x6DEE77AFF8C21BD1(&(Local_1404.f_90), &(Local_1404.f_91));
	Global_1892703[iLocal_1342 /*599*/].f_526 = Local_1404.f_90;
	Global_1892703[iLocal_1342 /*599*/].f_527 = Local_1404.f_91;
	func_492();
	if (!func_491())
	{
		return 0;
	}
	Call_Loc(Local_369.f_1);
	return StackVal;
}

int func_491()//Position - 0x21674
{
	return 1;
}

void func_492()//Position - 0x2167D
{
	if (Local_1404.f_98 == -1)
	{
		Local_1404.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_493()//Position - 0x21697
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_38)
	{
		Local_1404.f_22[iVar0 /*24*/].f_15 = func_494(iVar0);
		iVar0++;
	}
}

int func_494(int iParam0)//Position - 0x216C5
{
	if (Local_209.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_209.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_209.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_209.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_495()//Position - 0x2171B
{
	Local_1404.f_83 = 2;
}

void func_496()//Position - 0x21729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_19)
	{
		Local_1404.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	func_497();
}

void func_497()//Position - 0x21756
{
	int iVar0;
	
	if (func_498())
	{
		if (func_25(&(Local_1404.f_2.f_9), &(Local_1404.f_63.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_19)
		{
			Local_1404.f_2.f_9[iVar0] = Local_209.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_498()//Position - 0x217AE
{
	return 0;
}

void func_499()//Position - 0x217B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_19)
	{
		iVar3 = Local_209.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_209.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_145(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_209.f_38)
	{
		iVar2 = Local_209.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_147(iVar2, 15))
		{
			func_63(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_209.f_131)
		{
			if (Local_209.f_131.f_1[iVar5 /*10*/] == iVar1)
			{
				func_63(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
}

char* func_500()//Position - 0x21883
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_501()//Position - 0x218A5
{
	Local_1404.f_92 = func_502() + 1;
	Global_1892703[bLocal_1341 /*599*/].f_10.f_391 = Local_1404.f_92;
}

int func_502()//Position - 0x218CC
{
	if (func_47() == func_46())
	{
		return 0;
	}
	return func_503(func_47());
}

int func_503(bool bParam0)//Position - 0x218EB
{
	if (func_79(bParam0) == func_46())
	{
		return 0;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_19;
}

void func_504()//Position - 0x21911
{
}

int func_505()//Position - 0x21919
{
	func_685();
	func_516();
	if (!func_507())
	{
		return 0;
	}
	func_506();
	Stack.Push(Local_369.f_0 != 0);
	Call_Loc(Local_369.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_506()//Position - 0x21950
{
}

int func_507()//Position - 0x21958
{
	if (func_692(12))
	{
		return 1;
	}
	if (!func_515())
	{
		return 0;
	}
	func_511();
	func_510();
	func_509();
	if (Local_369.f_13 != 0)
	{
		Call_Loc(Local_369.f_13);
	}
	func_508(12);
	return 1;
}

void func_508(int iParam0)//Position - 0x2199B
{
	if (func_17(&uLocal_1357, iParam0))
	{
	}
}

void func_509()//Position - 0x219AF
{
}

void func_510()//Position - 0x219B7
{
	int iVar0;
	int iVar1;
	
	if (Local_209.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_19)
		{
			if (-1 != Local_209.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_209.f_131 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_131)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_209.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_38)
		{
			if (-1 != Local_209.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_209.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (Local_209.f_38.f_23[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	if (Local_209.f_111 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_111)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_83(Local_209.f_143[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_209.f_85 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_85)
		{
			iVar0++;
		}
	}
	if (Local_209.f_120 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_120)
		{
			iVar0++;
		}
	}
	if (Local_209.f_67 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_209.f_67)
		{
			iVar0++;
		}
	}
}

void func_511()//Position - 0x21B28
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	func_514(Local_209.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_514(Local_209.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_514(func_513(), 1, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	func_514(Local_209.f_131, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_514(Local_209.f_111, 1, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
	func_514(Local_209.f_85, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_514(func_512(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	func_514(Local_209.f_120, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_514(Local_209.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_512()//Position - 0x21BD1
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_83(Local_209.f_143[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_513()//Position - 0x21C05
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_38)
	{
		if (Local_209.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_209.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_514(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x21C45
{
	if (iParam0 <= iParam1)
	{
	}
}

int func_515()//Position - 0x21C57
{
	return 1;
}

void func_516()//Position - 0x21C60
{
	if (func_692(21))
	{
		return;
	}
	func_517();
	func_508(21);
}

void func_517()//Position - 0x21C7E
{
	Local_369.f_13 = 184602/*func_668*/;
	Local_369.f_2 = 184593/*func_667*/;
	Local_369.f_465.f_4 = 184313/*func_664*/;
	Local_369.f_10 = 143280/*func_580*/;
	Local_369.f_11.f_1 = 140750/*func_554*/;
	Local_369.f_11 = 140626/*func_551*/;
	Local_369.f_515.f_3 = 140111/*func_547*/;
	Local_369.f_515 = 140102/*func_546*/;
	Local_369.f_515.f_1 = 140063/*func_545*/;
	Local_369.f_515.f_4 = 139996/*func_543*/;
	Local_369.f_515.f_2 = 139986/*func_542*/;
	Local_369.f_352.f_45 = 139543/*func_535*/;
	Local_369.f_352.f_36 = 139534/*func_534*/;
	Local_369.f_352.f_43 = 139508/*func_533*/;
	Local_369.f_352.f_44 = 139325/*func_530*/;
	Local_369.f_456 = 139290/*func_529*/;
	Local_369.f_456.f_1 = 139252/*func_528*/;
	Local_369.f_47.f_2.f_1 = 139212/*func_527*/;
	Local_369.f_47.f_2.f_2 = 139172/*func_526*/;
	Local_369.f_114.f_31 = 138961/*func_522*/;
	Local_369.f_114.f_13 = 138949/*func_521*/;
	Local_369.f_102.f_6 = 138817/*func_520*/;
	Local_369.f_54.f_6 = 138734/*func_519*/;
	Local_369.f_54.f_7 = 138642/*func_518*/;
}

int func_518(bool bParam0)//Position - 0x21D92
{
	if (bParam0)
	{
		if (func_53(bLocal_1341, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_1343, NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(func_47()), NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]), false))
				{
					return 500;
				}
			}
		}
		else
		{
			return 500;
		}
	}
	return 0;
}

int func_519(bool bParam0)//Position - 0x21DEE
{
	if (bParam0)
	{
		if (func_53(bLocal_1341, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_1343, NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(func_47()), NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]), false))
				{
					return 5000;
				}
			}
		}
	}
	return 0;
}

int func_520()//Position - 0x21E41
{
	if (!func_692(11))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_47[0 /*8*/]))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_1404.f_47[0 /*8*/])))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1404.f_47[0 /*8*/]))
		{
			if (func_13(&uLocal_1847, 2000, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_1343, NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]), false))
				{
					func_60(&(Local_1404.f_47[0 /*8*/]));
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_521(var uParam0)//Position - 0x21EC5
{
	return "TR_BLIP_CVEH";
}

void func_522(var uParam0, bool bParam1)//Position - 0x21ED1
{
	if (bParam1)
	{
		func_523(0);
	}
}

void func_523(int iParam0)//Position - 0x21EE3
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_0 = iParam0;
	func_524(5, &Var0);
}

void func_524(int iParam0, var uParam1)//Position - 0x21F03
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_0 = 1275205244;
	Var0.f_1 = bLocal_1341;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *uParam1 };
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, func_525(1));
}

var func_525(int iParam0)//Position - 0x21F47
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
			if (func_9(bVar2, 0, 0))
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

char* func_526(var uParam0)//Position - 0x21FA4
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TR_TIC_CUSDELR";
			}
		
		default:
	}
	return "";
}

char* func_527(var uParam0)//Position - 0x21FCC
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TR_TIC_CUSDELL";
			}
		
		default:
	}
	return "";
}

int func_528(int iParam0)//Position - 0x21FF4
{
	switch (iParam0)
	{
		case 0:
			if (func_692(69))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_529(int iParam0)//Position - 0x2201A
{
	switch (iParam0)
	{
		case 0:
			return "TR_HT_ASDEL";
			break;
	}
	return "";
}

int func_530(int iParam0, var uParam1)//Position - 0x2203D
{
	if (iParam0 == 0)
	{
		*uParam1 = { func_531(func_532()) };
		return 1;
	}
	return 0;
}

struct<103> func_531(int iParam0)//Position - 0x2205D
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return Var0;
	}
	Var0 = { Global_2789412[iParam0 /*106*/] };
	return Var0;
}

int func_532()//Position - 0x220CA
{
	if (PLAYER::PLAYER_ID() == func_46())
	{
		return -1;
	}
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_4;
}

void func_533(int iParam0, int iParam1)//Position - 0x220F4
{
	if (iParam0 == 0)
	{
		VEHICLE::_SET_VEHICLE_UNK_DAMAGE_MULTIPLIER(iParam1, 0,2f);
	}
}

float func_534(var uParam0)//Position - 0x2210E
{
	return 1f;
}

void func_535(int iParam0, int iParam1, var uParam2, bool bParam3, var uParam4)//Position - 0x22117
{
	if (func_488() != 0)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING() && iParam0 == 0)
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_1404.f_47[0 /*8*/]), true, true);
		}
	}
	if (func_488() == 0)
	{
		if ((iParam0 == 0 && uParam2) && (func_47() == bLocal_1341 || !func_53(bLocal_1341, 0)))
		{
			if (!iLocal_1849)
			{
				if (!bParam3 && !func_541(0))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_1343, iParam1, 20000, -1, 2f, 16, 0);
					iLocal_1849 = 1;
					func_540(0);
				}
			}
			else if (!iLocal_1850)
			{
				if (!func_539() && !func_342())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (func_538(&uLocal_1847, 2000, 0))
						{
							func_536(800);
							iLocal_1850 = 1;
						}
					}
				}
			}
		}
	}
}

int func_536(int iParam0)//Position - 0x221EE
{
	func_537(40);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_537(int iParam0)//Position - 0x2221A
{
	if (func_129(&uLocal_1357, iParam0))
	{
	}
}

int func_538(var uParam0, int iParam1, bool bParam2)//Position - 0x2222E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_118(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_118(uParam0);
		return 1;
	}
	return 0;
}

bool func_539()//Position - 0x22298
{
	return Global_1946250.f_504 != -1;
}

void func_540(int iParam0)//Position - 0x222A9
{
	if (func_17(&(Local_1404.f_122), iParam0))
	{
	}
}

bool func_541(int iParam0)//Position - 0x222BF
{
	return func_4(&(Local_1404.f_122), iParam0);
}

int func_542()//Position - 0x222D2
{
	return 62;
}

int func_543()//Position - 0x222DC
{
	int iVar0;
	
	if (func_544() >= 1)
	{
		iVar0 += 400;
	}
	if (func_544() >= 2)
	{
		iVar0 += 320;
	}
	if (func_544() >= 3)
	{
		iVar0 += 240;
	}
	return iVar0;
}

int func_544()//Position - 0x22312
{
	return Local_1404.f_154;
}

int func_545()//Position - 0x2231F
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_47[0 /*8*/]))
	{
		return NETWORK::NET_TO_VEH(Local_1404.f_47[0 /*8*/]);
	}
	return -1;
}

int func_546()//Position - 0x22346
{
	return 1;
}

int func_547()//Position - 0x2234F
{
	return func_548(func_550());
}

int func_548(int iParam0)//Position - 0x2235F
{
	switch (func_549(iParam0))
	{
		case 1:
			return Global_262145.f_31124;
		
		case 2:
			return Global_262145.f_31125;
		
		case 3:
			return Global_262145.f_31126;
		
		default:
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x223A3
{
	switch (iParam0)
	{
		case joaat("weevil"):
			return 1;
		
		case joaat("brioso2"):
			return 1;
		
		case joaat("rhapsody"):
			return 1;
		
		case joaat("club"):
			return 1;
		
		case joaat("issi3"):
			return 1;
		
		case joaat("nebula"):
			return 1;
		
		case joaat("dynasty"):
			return 1;
		
		case joaat("fagaloa"):
			return 1;
		
		case joaat("futo"):
			return 1;
		
		case joaat("asbo"):
			return 1;
		
		case joaat("sentinel"):
			return 2;
		
		case joaat("dominator3"):
			return 2;
		
		case joaat("vamos"):
			return 2;
		
		case joaat("hermes"):
			return 2;
		
		case joaat("coquette3"):
			return 2;
		
		case joaat("riata"):
			return 2;
		
		case joaat("everon"):
			return 2;
		
		case joaat("glendale2"):
			return 2;
		
		case joaat("schafter3"):
			return 2;
		
		case joaat("warrener"):
			return 2;
		
		case joaat("primo2"):
			return 2;
		
		case joaat("seminole2"):
			return 2;
		
		case joaat("rebla"):
			return 2;
		
		case joaat("swinger"):
			return 2;
		
		case joaat("flashgt"):
			return 2;
		
		case joaat("raiden"):
			return 2;
		
		case joaat("surano"):
			return 2;
		
		case joaat("penumbra2"):
			return 2;
		
		case joaat("vstr"):
			return 2;
		
		case joaat("jugular"):
			return 2;
		
		case joaat("toros"):
			return 3;
		
		case joaat("entity2"):
			return 3;
		
		case joaat("tempesta"):
			return 3;
		
		case joaat("thrax"):
			return 3;
		
		case joaat("sc1"):
			return 3;
		
		case joaat("gp1"):
			return 3;
		
		case joaat("cheetah2"):
			return 3;
		
		case joaat("neo"):
			return 3;
		
		case joaat("comet2"):
			return 3;
		
		case joaat("paragon"):
			return 3;
		
		default:
	}
	return 0;
}

int func_550()//Position - 0x22543
{
	return Local_1404.f_124.f_2;
}

void func_551()//Position - 0x22552
{
	func_553(0, 22);
	func_552(0, 1);
	func_553(1, 24);
	func_552(1, 2);
	func_553(2, 48);
}

void func_552(int iParam0, int iParam1)//Position - 0x2257B
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_918[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_918[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_918[iParam0 /*20*/].f_19++;
}

void func_553(int iParam0, int iParam1)//Position - 0x225B5
{
	Local_918[iParam0 /*20*/] = iParam1;
	iLocal_1355++;
}

void func_554()//Position - 0x225CE
{
	func_556(0, 1, 2, 3, 4, 143257/*func_579*/, 143235/*func_578*/, 141389/*func_564*/, 141381/*func_563*/, 1);
	func_555(4, 48, 141381/*func_563*/);
}

void func_555(int iParam0, int iParam1, int iParam2)//Position - 0x225FB
{
	Local_1019[iParam0 /*21*/] = iParam1;
	Local_1019[iParam0 /*21*/].f_20 = iParam2;
	iLocal_1356++;
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2261F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_555(iVar0, 22, iParam5);
	func_558(iVar0, iParam4, 141212/*func_559*/);
	func_557(iVar0, iVar1);
	func_557(iVar0, iVar4);
	func_557(iVar0, iVar5);
	func_557(iVar0, iVar2);
	func_555(iVar1, 24, iParam6);
	func_558(iVar1, iParam4, 141212/*func_559*/);
	func_557(iVar1, iVar4);
	func_557(iVar1, iVar5);
	func_557(iVar1, iVar2);
	func_555(iVar2, 25, iParam7);
	func_558(iVar2, iParam4, 141212/*func_559*/);
	func_557(iVar2, iVar1);
	func_557(iVar2, iVar4);
	func_557(iVar2, iVar5);
	func_555(iVar3, 23, iParam8);
	func_558(iVar3, iParam4, 141212/*func_559*/);
	func_557(iVar3, iVar1);
	func_557(iVar3, iVar4);
	func_557(iVar3, iVar5);
	func_557(iVar3, iVar2);
}

void func_557(int iParam0, int iParam1)//Position - 0x22717
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1019[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_1019[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1019[iParam0 /*21*/].f_19++;
}

void func_558(int iParam0, var uParam1, int iParam2)//Position - 0x22751
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1019[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_1019[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1019[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1019[iParam0 /*21*/].f_19++;
}

int func_559()//Position - 0x2279C
{
	if (func_560(0))
	{
		return 1;
	}
	return 0;
}

int func_560(bool bParam0)//Position - 0x227B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_561(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_561(int iParam0, bool bParam1)//Position - 0x227DF
{
	if (func_439(iParam0, 4) || func_439(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_562(iParam0, iLocal_1345, 6) || func_562(iParam0, iLocal_1345, 9))
		{
			return 1;
		}
	}
	return 0;
}

bool func_562(int iParam0, int iParam1, int iParam2)//Position - 0x2282A
{
	return func_4(&(Local_1566[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_563()//Position - 0x22845
{
}

void func_564()//Position - 0x2284D
{
	func_565("TCD_OT_HDELI", func_577(), 1, 0);
}

void func_565(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x22863
{
	if (func_566(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574757 = 19;
		Global_1574757.f_56 = iParam2;
	}
}

int func_566(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x22888
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_576(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	func_570();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = uParam3;
	Global_1574757.f_56 = uParam3;
	func_569();
	func_568(bParam2);
	func_567();
	return 1;
}

void func_567()//Position - 0x22932
{
	MISC::SET_BIT(&(Global_1574757.f_59), true);
}

void func_568(bool bParam0)//Position - 0x22945
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}

void func_569()//Position - 0x2296B
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_570()//Position - 0x22990
{
	func_572();
	func_571(0);
}

void func_571(bool bParam0)//Position - 0x229A1
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_572()//Position - 0x22A37
{
	if (!func_575())
	{
	}
	if (func_574())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_573();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_573()//Position - 0x22A60
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

int func_574()//Position - 0x22CD2
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_575()//Position - 0x22CE8
{
	if (!func_574())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_573();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_576(char* sParam0, char* sParam1)//Position - 0x22D0E
{
	if (!func_574())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

char* func_577()//Position - 0x22D66
{
	switch (func_550())
	{
		case joaat("weevil"):
			return "WEEVIL_TCD";
		
		case joaat("brioso2"):
			return "BRIOSO2_TCD";
		
		case joaat("rhapsody"):
			return "RHAPSODY_TCD";
		
		case joaat("club"):
			return "CLUB_TCD";
		
		case joaat("issi3"):
			return "ISSI3_TCD";
		
		case joaat("nebula"):
			return "NEBULA_TCD";
		
		case joaat("dynasty"):
			return "DYNASTY_TCD";
		
		case joaat("fagaloa"):
			return "FAGALOA_TCD";
		
		case joaat("futo"):
			return "FUTO_TCD";
		
		case joaat("asbo"):
			return "ASBO_TCD";
		
		case joaat("sentinel"):
			return "SENTINEL3_TCD";
		
		case joaat("dominator3"):
			return "DOMINATOR3_TCD";
		
		case joaat("vamos"):
			return "VAMOS_TCD";
		
		case joaat("hermes"):
			return "HERMES_TCD";
		
		case joaat("coquette3"):
			return "COQUETTE3_TCD";
		
		case joaat("riata"):
			return "RIATA_TCD";
		
		case joaat("everon"):
			return "EVERON_TCD";
		
		case joaat("glendale2"):
			return "GLENDALE2_TCD";
		
		case joaat("schafter3"):
			return "SCHAFTER3_TCD";
		
		case joaat("warrener"):
			return "WARRENER_TCD";
		
		case joaat("primo2"):
			return "PRIMO2_TCD";
		
		case joaat("seminole2"):
			return "SEMINOLE2_TCD";
		
		case joaat("rebla"):
			return "REBLA_TCD";
		
		case joaat("swinger"):
			return "SWINGER_TCD";
		
		case joaat("flashgt"):
			return "FLASHGT_TCD";
		
		case joaat("raiden"):
			return "RAIDEN_TCD";
		
		case joaat("surano"):
			return "SURANO_CON_TCD";
		
		case joaat("penumbra2"):
			return "PENUMBRA2_TCD";
		
		case joaat("vstr"):
			return "VSTR_TCD";
		
		case joaat("jugular"):
			return "jugular_TCD";
		
		case joaat("toros"):
			return "TOROS_TCD";
		
		case joaat("entity2"):
			return "ENTITY2_TCD";
		
		case joaat("tempesta"):
			return "TEMPESTA_TCD";
		
		case joaat("thrax"):
			return "THRAX_TCD";
		
		case joaat("sc1"):
			return "SC1_TCD";
		
		case joaat("gp1"):
			return "GP1_TCD";
		
		case joaat("cheetah2"):
			return "CHEETAH2_TCD";
		
		case joaat("neo"):
			return "NEO_TCD";
		
		case joaat("comet2"):
			return "COMET2_TCD";
		
		case joaat("paragon"):
			return "PARAGON_TCD";
		
		default:
	}
	return "";
}

void func_578()//Position - 0x22F83
{
	func_565("TCD_OT_DELI", func_577(), 1, 0);
}

void func_579()//Position - 0x22F99
{
	func_565("TCD_OT_ENTER", func_577(), 9, 0);
}

void func_580()//Position - 0x22FB0
{
	func_661();
	if (func_692(11))
	{
		if (!func_53(bLocal_1341, 0))
		{
			func_655();
			func_653();
			func_581(34, -1, -1, -1, 1065353216);
		}
	}
	Global_1973252.f_68 = 0;
}

void func_581(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x22FEE
{
	int iVar0;
	
	if (!func_652(iParam0))
	{
		return;
	}
	iVar0 = func_651(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_650(32249, -1))
			{
				func_649(32249, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 1:
			if (!func_650(32250, -1))
			{
				func_649(32250, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 2:
			if (!func_650(32251, -1))
			{
				func_649(32251, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 3:
			if (!func_650(32252, -1))
			{
				func_649(32252, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 4:
			if (!func_650(32253, -1))
			{
				func_649(32253, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 5:
			if (!func_650(32254, -1))
			{
				func_649(32254, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 6:
			if (!func_650(32255, -1))
			{
				func_649(32255, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 7:
			if (!func_650(32256, -1))
			{
				func_649(32256, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 8:
			if (!func_650(32257, -1))
			{
				func_649(32257, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 9:
			if (!func_650(32258, -1))
			{
				func_649(32258, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 10:
			if (func_650(32249, -1))
			{
				if (!func_650(32259, -1))
				{
					func_649(32259, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 11:
			if (func_650(32250, -1))
			{
				if (!func_650(32260, -1))
				{
					func_649(32260, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 12:
			if (func_650(32251, -1))
			{
				if (!func_650(32261, -1))
				{
					func_649(32261, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 13:
			if (func_650(32252, -1))
			{
				if (!func_650(32262, -1))
				{
					func_649(32262, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 14:
			if (func_650(32253, -1))
			{
				if (!func_650(32263, -1))
				{
					func_649(32263, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 15:
			if (!func_650(32264, -1))
			{
				func_649(32264, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 16:
			if (func_650(32254, -1))
			{
				if (!func_650(32265, -1))
				{
					func_649(32265, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 17:
			if (func_650(32255, -1))
			{
				if (!func_650(32266, -1))
				{
					func_649(32266, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 18:
			if (func_650(32256, -1))
			{
				if (!func_650(32267, -1))
				{
					func_649(32267, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_582(iVar0, iParam0, iParam3, fParam4);
			break;
		
		case 24:
		case 25:
		case 26:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_582(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x23479
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == func_46()) || Global_262145.f_31078) || func_648() >= func_646()) || !func_645(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = func_648();
	iVar1 = func_642(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = func_646();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = func_642(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	func_641(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	func_633(iParam0, iVar5, bVar4, iParam1, uParam2);
	func_632(107, iVar5, -1);
	if (bVar4)
	{
		func_583(iVar1, iVar5);
	}
}

void func_583(int iParam0, int iParam1)//Position - 0x23570
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		func_631(&iVar1, &iVar2, iVar0);
		if (func_627(iVar1))
		{
			func_626(iVar1);
			func_607(iVar1, 1);
			func_606(iVar1);
		}
		if (func_627(iVar2))
		{
			func_626(iVar2);
			func_607(iVar2, 1);
			func_606(iVar2);
		}
		func_593(iVar0);
		func_588("CCR_INC_TCK", iVar0, 1);
		iVar0++;
	}
	func_584();
}

void func_584()//Position - 0x235E6
{
	int iVar0;
	
	iVar0 = func_587(30513, -1);
	if (!Global_1966155 && iVar0 < 3)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_371(PLAYER::PLAYER_ID()))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_9), true);
			func_586(30513, iVar0 + 1, -1);
			Global_1966155 = 1;
			func_585("CCR_INC_HT", -1);
		}
		else if (!BitTest(Global_1946250.f_9, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_9), true);
		}
	}
}

void func_585(char* sParam0, int iParam1)//Position - 0x2365E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_586(int iParam0, int iParam1, int iParam2)//Position - 0x23675
{
	if (iParam2 == -1)
	{
		iParam2 = func_72();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_587(int iParam0, int iParam1)//Position - 0x2369D
{
	if (iParam1 == -1)
	{
		iParam1 = func_72();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_588(char* sParam0, int iParam1, bool bParam2)//Position - 0x236B9
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_589(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_589(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_589(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2370C
{
	int iVar0;
	
	if ((!func_592() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_70(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_590(iParam2);
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

int func_590(int iParam0)//Position - 0x23814
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_591(iVar0);
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

void func_591(int iParam0)//Position - 0x23876
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_592()//Position - 0x238AF
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_593(int iParam0)//Position - 0x238C0
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_605(iParam0);
	if (iVar0 != -1)
	{
		if (func_259())
		{
			func_594(1669058563, iVar0, &uVar1, 0, 0, 0);
		}
		else
		{
			MONEY::_NETWORK_EARN_FROM_CARCLUB_MEMBERSHIP(iVar0);
		}
	}
}

void func_594(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x238F6
{
	int iVar0;
	
	if (!func_259())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_595(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_595(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_595(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_595(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_595(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2430E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_602(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_601(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_596(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_596(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x244BB
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_597(iParam0);
	}
}

void func_597(int iParam0)//Position - 0x244F3
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_600(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_598(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_598(var uParam0)//Position - 0x24547
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_599(&(uParam0->f_14));
	func_599(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_599(var uParam0)//Position - 0x24657
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_600(int iParam0)//Position - 0x2469F
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_601(int iParam0, int iParam1)//Position - 0x246CA
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_602(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x246DE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_259())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_603(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_603(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x2481B
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_43(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_604();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_604()//Position - 0x248AD
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_605(int iParam0)//Position - 0x248BD
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == Global_262145.f_31615)
	{
		iVar0 = Global_262145.f_31610;
	}
	else if (iParam0 >= Global_262145.f_31613 + 1 && iParam0 <= Global_262145.f_31614)
	{
		iVar0 = Global_262145.f_31609;
	}
	else if (iParam0 >= Global_262145.f_31612 + 1 && iParam0 <= Global_262145.f_31613)
	{
		iVar0 = Global_262145.f_31608;
	}
	else if (iParam0 >= Global_262145.f_31611 + 1 && iParam0 <= Global_262145.f_31612)
	{
		iVar0 = Global_262145.f_31607;
	}
	else if (iParam0 >= 2 && iParam0 <= Global_262145.f_31611)
	{
		iVar0 = Global_262145.f_31606;
	}
	return iVar0;
}

void func_606(int iParam0)//Position - 0x2497F
{
	switch (iParam0)
	{
		case 12:
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), true);
			break;
		
		case 18:
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), 2);
			break;
		
		case 30:
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), 3);
			break;
		
		case 36:
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), 4);
			break;
	}
}

void func_607(int iParam0, bool bParam1)//Position - 0x24A0A
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_625(iParam0);
	if (!func_624(iVar0))
	{
		return;
	}
	bVar1 = !func_622();
	sVar2 = "";
	switch (iVar0)
	{
		case 7:
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			bVar3 = 14;
			if (iVar4 == 1)
			{
				bVar3 = 15;
			}
			func_619(bVar3);
			if (bParam1)
			{
				sVar2 = func_616(iParam0, bVar1, iVar4, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
				{
					func_615("CCR_UNL_VD", sVar2, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			iVar5 = 0;
			if (func_608(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = func_616(iParam0, bVar1, -1, iVar5);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						func_615("CCR_UNL_TP", sVar2, 0, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			if (iParam0 == 12)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 16);
				func_585("CCR_INC_FA", -1);
			}
			break;
		
		case 2:
			if (iParam0 == 6)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 15);
				MISC::SET_BIT(&(Global_1946250.f_9), 18);
			}
			break;
		
		case 4:
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 17);
				MISC::SET_BIT(&(Global_1946250.f_9), 19);
			}
			break;
	}
}

int func_608(int iParam0)//Position - 0x24B3D
{
	int iVar0;
	int iVar1;
	var uVar2[17];
	bool bVar20;
	int iVar21;
	int iVar22[17];
	int iVar40;
	int iVar41;
	
	bVar20 = true;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = func_614(iVar0);
		uVar2[iVar0] = func_612(iVar1);
		if (!uVar2[iVar0])
		{
			bVar20 = false;
		}
		iVar0++;
	}
	if (bVar20)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = func_614(iVar0);
		if (!func_611(iVar1))
		{
			if (!func_610())
			{
				iVar40 = 0;
			}
			else
			{
				iVar40 = 1;
			}
		}
		else
		{
			iVar40 = 1;
		}
		if (!uVar2[iVar0] && iVar40)
		{
			iVar22[iVar0] = iVar21;
			iVar21++;
		}
		else
		{
			iVar22[iVar0] = -1;
		}
		iVar0++;
	}
	iVar41 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar21);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (iVar22[iVar0] > -1 && iVar22[iVar0] == iVar41)
		{
			iVar1 = func_614(iVar0);
			func_609(iVar1);
			if (func_260(iVar1))
			{
				*iParam0 = iVar1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_609(int iParam0)//Position - 0x24C4C
{
	switch (iParam0)
	{
		case joaat("zr350"):
			func_649(31810, 1, -1);
			break;
		
		case joaat("comet6"):
			func_649(31811, 1, -1);
			break;
		
		case joaat("jester4"):
			func_649(31812, 1, -1);
			break;
		
		case joaat("vectre"):
			func_649(31813, 1, -1);
			break;
		
		case joaat("cypher"):
			func_649(31814, 1, -1);
			break;
		
		case joaat("growler"):
			func_649(31815, 1, -1);
			break;
		
		case joaat("calico"):
			func_649(31816, 1, -1);
			break;
		
		case joaat("remus"):
			func_649(31817, 1, -1);
			break;
		
		case joaat("dominator7"):
			func_649(31818, 1, -1);
			break;
		
		case joaat("futo2"):
			func_649(31819, 1, -1);
			break;
		
		case joaat("rt3000"):
			func_649(31820, 1, -1);
			break;
		
		case joaat("warrener2"):
			func_649(31821, 1, -1);
			break;
		
		case joaat("sultan3"):
			func_649(31822, 1, -1);
			break;
		
		case joaat("dominator8"):
			func_649(31823, 1, -1);
			break;
		
		case joaat("previon"):
			func_649(31824, 1, -1);
			break;
		
		case -64075878:
			func_649(34373, 1, -1);
			break;
		
		case -294678663:
			func_649(34374, 1, -1);
			break;
		
		default:
			break;
	}
}

int func_610()//Position - 0x24D92
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 17)
	{
		iVar0 = func_614(iVar2);
		if (func_611(iVar0))
		{
			bVar1 = func_612(iVar0);
			if (!bVar1)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_611(int iParam0)//Position - 0x24DD1
{
	switch (iParam0)
	{
		case joaat("euros"):
		case joaat("tailgater2"):
		case joaat("rt3000"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("calico"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("futo2"):
		case joaat("dominator8"):
			return 1;
			break;
	}
	return 0;
}

int func_612(int iParam0)//Position - 0x24E24
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_645(PLAYER::PLAYER_ID());
		
		case joaat("tailgater2"):
			return func_613(PLAYER::PLAYER_ID());
		
		case joaat("zr350"):
			return func_650(31810, -1);
		
		case joaat("comet6"):
			return func_650(31811, -1);
		
		case joaat("jester4"):
			return func_650(31812, -1);
		
		case joaat("vectre"):
			return func_650(31813, -1);
		
		case joaat("cypher"):
			return func_650(31814, -1);
		
		case joaat("growler"):
			return func_650(31815, -1);
		
		case joaat("calico"):
			return func_650(31816, -1);
		
		case joaat("remus"):
			return func_650(31817, -1);
		
		case joaat("dominator7"):
			return func_650(31818, -1);
		
		case joaat("futo2"):
			return func_650(31819, -1);
		
		case joaat("rt3000"):
			return func_650(31820, -1);
		
		case joaat("warrener2"):
			return func_650(31821, -1);
		
		case joaat("sultan3"):
			return func_650(31822, -1);
		
		case joaat("dominator8"):
			return func_650(31823, -1);
		
		case joaat("previon"):
			return func_650(31824, -1);
		
		case -64075878:
			return func_650(34373, -1);
		
		case -294678663:
			return func_650(34374, -1);
		
		default:
	}
	return 0;
}

int func_613(bool bParam0)//Position - 0x24F85
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_182(9618, -1, 0), 0);
	}
	if (bParam0 != -1)
	{
		return BitTest(Global_1977138[bParam0 /*57*/].f_1, 0);
	}
	return 0;
}

int func_614(int iParam0)//Position - 0x24FBA
{
	switch (iParam0)
	{
		case 0:
			return joaat("sultan3");
		
		case 1:
			return joaat("rt3000");
		
		case 2:
			return joaat("vectre");
		
		case 3:
			return joaat("zr350");
		
		case 4:
			return joaat("warrener2");
		
		case 5:
			return joaat("calico");
		
		case 6:
			return joaat("remus");
		
		case 7:
			return joaat("cypher");
		
		case 8:
			return joaat("dominator7");
		
		case 9:
			return joaat("jester4");
		
		case 10:
			return joaat("futo2");
		
		case 11:
			return joaat("dominator8");
		
		case 12:
			return joaat("previon");
		
		case 13:
			return joaat("growler");
		
		case 14:
			return joaat("comet6");
		
		case 15:
			return -294678663;
		
		case 16:
			return -64075878;
		
		default:
	}
	return 0;
}

int func_615(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x250B8
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2787505 = { func_80(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2787435.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar1, false, Global_2787435, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1576215, Global_1576216, Global_1576217);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_589(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_616(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x251AC
{
	switch (iParam0)
	{
		case 1:
			return func_618(iParam3);
		
		case 2:
			return func_617(bParam1, "CLO_TRM_PH_1_9", "CLO_TRF_PH_1_9");
		
		case 3:
			return func_617(bParam1, "CLO_TRM_F_1_12", "CLO_TRF_F_1_12");
		
		case 4:
			return func_617(bParam1, "CLO_TRM_U_11_6", "CLO_TRF_U_11_6");
		
		case 5:
			return func_618(iParam3);
		
		case 6:
			return "CCR_UNL_PS";
		
		case 7:
			return func_617(bParam1, "CLO_TRM_U_7_3", "CLO_TRF_U_7_3");
		
		case 8:
			return "SMOD5_WHL_21";
		
		case 9:
			return func_617(bParam1, "CLO_TRM_U_16_8", "CLO_TRF_U_15_8");
		
		case 10:
			return func_617(bParam1, "CLO_TRM_U_15_20", "CLO_TRF_U_14_20");
		
		case 11:
			return func_618(iParam3);
		
		case 12:
			return "CCR_UNL_QF";
		
		case 13:
			return func_617(bParam1, "CLO_TRM_U_8_3", "CLO_TRF_U_8_3");
		
		case 14:
			return "EUROS_LIV11";
		
		case 15:
			return func_617(bParam1, "CLO_TRM_D_16_0", "CLO_TRF_D_16_0");
		
		case 16:
			return func_617(bParam1, "CLO_TRM_U_9_10", "CLO_TRF_U_9_10");
		
		case 17:
			return func_618(iParam3);
		
		case 18:
			return "CCR_UNL_DV";
		
		case 19:
			return func_617(bParam1, "CLO_TRM_U_17_11", "CLO_TRF_U_16_11");
		
		case 20:
			return "FUTO2_LIV11";
		
		case 21:
			return func_617(bParam1, "CLO_TRM_PH_1_10", "CLO_TRF_PH_1_10");
		
		case 22:
			return func_617(bParam1, "CLO_TRM_F_1_4", "CLO_TRF_F_1_4");
		
		case 23:
			return func_618(iParam3);
		
		case 24:
			return "CCR_UNL_PT";
		
		case 25:
			return func_617(bParam1, "CLO_TRM_U_11_16", "CLO_TRF_U_11_16");
		
		case 26:
			return "SMOD5_WHL_22";
		
		case 27:
			return func_617(bParam1, "CLO_TRM_U_7_2", "CLO_TRF_U_7_2");
		
		case 28:
			return func_617(bParam1, "CLO_TRM_U_16_9", "CLO_TRF_U_15_9");
		
		case 29:
			return func_618(iParam3);
		
		case 30:
			return "CCR_UNL_ST";
		
		case 31:
			return func_617(bParam1, "CLO_TRM_U_15_19", "CLO_TRF_U_14_19");
		
		case 32:
			return "RT3000_LIV11";
		
		case 33:
			return func_617(bParam1, "CLO_TRM_U_8_2", "CLO_TRF_U_8_2");
		
		case 34:
			return func_617(bParam1, "CLO_TRM_D_11_0", "CLO_TRF_D_11_0");
		
		case 35:
			return func_618(iParam3);
		
		case 36:
			return "CCR_UNL_WM";
		
		case 37:
			return func_617(bParam1, "CLO_TRM_U_9_12", "CLO_TRF_U_9_12");
		
		case 38:
			return "JEST4_LIVERY11";
		
		case 39:
			return func_617(bParam1, "CLO_TRM_O_R3", "CLO_TRF_O_R3");
		
		case 40:
			return func_617(bParam1, "CLO_TRM_U_17_8", "CLO_TRF_U_16_8");
		
		case 41:
			return func_618(iParam3);
		
		case 42:
			return func_617(bParam1, "CLO_TRM_PH_1_12", "CLO_TRF_PH_1_12");
		
		case 43:
			return "SMOD5_WHL_23";
		
		case 44:
			return func_617(bParam1, "CLO_TRM_F_1_3", "CLO_TRF_F_1_3");
		
		case 45:
			return func_617(bParam1, "CLO_TRM_U_11_5", "CLO_TRF_U_11_5");
		
		case 46:
			return func_618(iParam3);
		
		case 47:
			return func_617(bParam1, "CLO_TRM_U_7_15", "CLO_TRF_U_7_15");
		
		case 48:
			return "ZR350_LIV11";
		
		case 49:
			return func_617(bParam1, "CLO_TRM_U_16_1", "CLO_TRF_U_15_1");
		
		case 50:
			return func_617(bParam1, "CLO_TRM_U_15_0", "CLO_TRF_U_14_0");
		
		case 51:
			return func_618(iParam3);
		
		case 52:
			return func_617(bParam1, "CLO_TRM_U_8_15", "CLO_TRF_U_8_15");
		
		case 53:
			return "WARR2_LIV11";
		
		case 54:
			return func_617(bParam1, "CLO_TRM_D_13_0", "CLO_TRF_D_13_0");
		
		case 55:
			return func_617(bParam1, "CLO_TRM_U_9_7", "CLO_TRF_U_9_7");
		
		case 56:
			return func_618(iParam3);
		
		case 57:
			return func_617(bParam1, "CLO_TRM_O_R2", "CLO_TRF_O_R2");
		
		case 58:
			return func_617(bParam1, "CLO_TRM_U_17_5", "CLO_TRF_U_16_5");
		
		case 59:
			return "SMOD5_WHL_24";
		
		case 60:
			return func_617(bParam1, "CLO_TRM_PH_1_7", "CLO_TRF_PH_1_7");
		
		case 61:
			return func_617(bParam1, "CLO_TRM_F_1_18", "CLO_TRF_F_1_18");
		
		case 62:
			return func_618(iParam3);
		
		case 63:
			return func_617(bParam1, "CLO_TRM_O_R4", "CLO_TRF_O_R4");
		
		case 64:
			return func_617(bParam1, "CLO_TRM_U_11_15", "CLO_TRF_U_11_15");
		
		case 65:
			return "CALICO_LIVERY11";
		
		case 66:
			return func_617(bParam1, "CLO_TRM_U_7_14", "CLO_TRF_U_7_14");
		
		case 67:
			return func_617(bParam1, "CLO_TRM_U_16_3", "CLO_TRF_U_15_3");
		
		case 68:
			return func_618(iParam3);
		
		case 69:
			return func_617(bParam1, "CLO_TRM_O_R5", "CLO_TRF_O_R5");
		
		case 70:
			return func_617(bParam1, "CLO_TRM_U_15_3", "CLO_TRF_U_14_3");
		
		case 71:
			return "REMUS_LIV11";
		
		case 72:
			return func_617(bParam1, "CLO_TRM_U_8_14", "CLO_TRF_U_8_14");
		
		case 73:
			return func_617(bParam1, "CLO_TRM_D_12_0", "CLO_TRF_D_12_0");
		
		case 74:
			return func_618(iParam3);
		
		case 75:
			return func_617(bParam1, "CLO_TRM_O_R1", "CLO_TRF_O_R1");
		
		case 76:
			return func_617(bParam1, "CLO_TRM_U_9_6", "CLO_TRF_U_9_6");
		
		case 77:
			return "SMOD5_WHL_25";
		
		case 78:
			return func_617(bParam1, "CLO_TRM_U_17_9", "CLO_TRF_U_16_9");
		
		case joaat("mpsv_lp0_31"):
			return func_617(bParam1, "CLO_TRM_PH_1_13", "CLO_TRF_PH_1_13");
		
		case 80:
			return func_618(iParam3);
		
		case 81:
			return func_617(bParam1, "CLO_TRM_O_R6", "CLO_TRF_O_R6");
		
		case 82:
			return func_617(bParam1, "CLO_TRM_F_1_19", "CLO_TRF_F_1_19");
		
		case 83:
			return "DOM8_LIV11";
		
		case 84:
			return func_617(bParam1, "CLO_TRM_U_11_19", "CLO_TRF_U_11_19");
		
		case 85:
			return func_617(bParam1, "CLO_TRM_U_7_8", "CLO_TRF_U_7_8");
		
		case 86:
			return func_618(iParam3);
		
		case 87:
			return func_617(bParam1, "CLO_TRM_O_R7", "CLO_TRF_O_R7");
		
		case 88:
			return func_617(bParam1, "CLO_TRM_U_16_0", "CLO_TRF_U_15_0");
		
		case 89:
			return "TGAIT2_LIV11";
		
		case 90:
			return func_617(bParam1, "CLO_TRM_U_15_4", "CLO_TRF_U_14_4");
		
		case 91:
			return func_617(bParam1, "CLO_TRM_U_8_8", "CLO_TRF_U_8_8");
		
		case 92:
			return func_618(iParam3);
		
		case 93:
			return "SMOD5_WHL_26";
		
		case 94:
			return func_617(bParam1, "CLO_TRM_D_10_0", "CLO_TRF_D_10_0");
		
		case 95:
			return "EUROS_LIV12";
		
		case 96:
			return func_617(bParam1, "CLO_TRM_U_9_3", "CLO_TRF_U_9_3");
		
		case 97:
			return func_617(bParam1, "CLO_TRM_U_17_2", "CLO_TRF_U_16_2");
		
		case 98:
			return func_618(iParam3);
		
		case 99:
			return "SMOD5_WHL_27";
		
		case 100:
			return func_617(bParam1, "CLO_TRM_PH_1_3", "CLO_TRF_PH_1_3");
		
		case 101:
			return "FUTO2_LIV12";
		
		case 102:
			return func_617(bParam1, "CLO_TRM_F_1_15", "CLO_TRF_F_1_15");
		
		case 103:
			return func_617(bParam1, "CLO_TRM_U_11_9", "CLO_TRF_U_11_9");
		
		case 104:
			return "SMOD5_WHL_28";
		
		case 105:
			return func_617(bParam1, "CLO_TRM_U_7_9", "CLO_TRF_U_7_9");
		
		case 106:
			return "RT3000_LIV12";
		
		case 107:
			return func_617(bParam1, "CLO_TRM_U_16_2", "CLO_TRF_U_15_2");
		
		case 108:
			return func_617(bParam1, "CLO_TRM_U_15_2", "CLO_TRF_U_14_2");
		
		case 109:
			return "SMOD5_WHL_29";
		
		case 110:
			return func_617(bParam1, "CLO_TRM_U_8_9", "CLO_TRF_U_8_9");
		
		case 111:
			return "JEST4_LIVERY12";
		
		case 112:
			return func_617(bParam1, "CLO_TRM_D_15_0", "CLO_TRF_D_15_0");
		
		case 113:
			return func_617(bParam1, "CLO_TRM_U_9_13", "CLO_TRF_U_9_13");
		
		case 114:
			return "SMOD5_WHL_30";
		
		default:
	}
	switch (iParam0)
	{
		case 115:
			return func_617(bParam1, "CLO_TRM_U_17_1", "CLO_TRF_U_16_1");
		
		case 116:
			return "ZR350_LIV12";
		
		case 117:
			return func_617(bParam1, "CLO_TRM_PH_1_4", "CLO_TRF_PH_1_4");
		
		case 118:
			return func_617(bParam1, "CLO_TRM_F_1_23", "CLO_TRF_F_1_23");
		
		case 119:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 120:
			return func_617(bParam1, "CLO_TRM_U_11_20", "CLO_TRF_U_11_20");
		
		case 121:
			return "WARR2_LIV12";
		
		case 122:
			return func_617(bParam1, "CLO_TRM_U_7_13", "CLO_TRF_U_7_13");
		
		case 123:
			return "CALICO_LIVERY12";
		
		case 124:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 125:
			return func_617(bParam1, "CLO_TRM_U_16_5", "CLO_TRF_U_15_5");
		
		case 126:
			return "REMUS_LIV12";
		
		case 127:
			return func_617(bParam1, "CLO_TRM_U_15_5", "CLO_TRF_U_14_5");
		
		case 128:
			return "DOM8_LIV12";
		
		case 129:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 130:
			return func_617(bParam1, "CLO_TRM_U_8_13", "CLO_TRF_U_8_13");
		
		case 131:
			return "TGAIT2_LIV12";
		
		case 132:
			return func_617(bParam1, "CLO_TRM_D_14_0", "CLO_TRF_D_14_0");
		
		case 133:
			return "EUROS_LIV13";
		
		case 134:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 135:
			return func_617(bParam1, "CLO_TRM_U_9_8", "CLO_TRF_U_9_8");
		
		case 136:
			return "FUTO2_LIV13";
		
		case 137:
			return func_617(bParam1, "CLO_TRM_U_17_4", "CLO_TRF_U_16_4");
		
		case 138:
			return "RT3000_LIV13";
		
		case 139:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 140:
			return func_617(bParam1, "CLO_TRM_PH_1_5", "CLO_TRF_PH_1_5");
		
		case 141:
			return "JEST4_LIVERY13";
		
		case 142:
			return func_617(bParam1, "CLO_TRM_F_1_20", "CLO_TRF_F_1_20");
		
		case 143:
			return "ZR350_LIV13";
		
		case 144:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 145:
			return func_617(bParam1, "CLO_TRM_U_11_10", "CLO_TRF_U_11_10");
		
		case 146:
			return "WARR2_LIV13";
		
		case 147:
			return func_617(bParam1, "CLO_TRM_U_7_12", "CLO_TRF_U_7_12");
		
		case 148:
			return "CALICO_LIVERY13";
		
		case 149:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 150:
			return func_617(bParam1, "CLO_TRM_U_16_4", "CLO_TRF_U_15_4");
		
		case 151:
			return "REMUS_LIV13";
		
		case 152:
			return func_617(bParam1, "CLO_TRM_U_15_8", "CLO_TRF_U_14_8");
		
		case 153:
			return "DOM8_LIV13";
		
		case 154:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 155:
			return func_617(bParam1, "CLO_TRM_U_8_12", "CLO_TRF_U_8_12");
		
		case 156:
			return "TGAIT2_LIV13";
		
		case 157:
			return func_617(bParam1, "CLO_TRM_D_9_0", "CLO_TRF_D_9_0");
		
		case 158:
			return "EUROS_LIV14";
		
		case 159:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 160:
			return func_617(bParam1, "CLO_TRM_U_9_9", "CLO_TRF_U_9_9");
		
		case 161:
			return "FUTO2_LIV14";
		
		case 162:
			return func_617(bParam1, "CLO_TRM_U_17_6", "CLO_TRF_U_16_6");
		
		case 163:
			return "RT3000_LIV14";
		
		case 164:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 165:
			return func_617(bParam1, "CLO_TRM_PH_1_6", "CLO_TRF_PH_1_6");
		
		case 166:
			return "JEST4_LIVERY14";
		
		case 167:
			return func_617(bParam1, "CLO_TRM_F_1_13", "CLO_TRF_F_1_13");
		
		case 168:
			return "ZR350_LIV14";
		
		case 169:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 170:
			return func_617(bParam1, "CLO_TRM_U_11_14", "CLO_TRF_U_11_14");
		
		case 171:
			return "WARR2_LIV14";
		
		case 172:
			return func_617(bParam1, "CLO_TRM_U_7_4", "CLO_TRF_U_7_4");
		
		case 173:
			return "CALICO_LIVERY14";
		
		case 174:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 175:
			return func_617(bParam1, "CLO_TRM_U_16_6", "CLO_TRF_U_15_6");
		
		case 176:
			return "REMUS_LIV14";
		
		case 177:
			return func_617(bParam1, "CLO_TRM_U_15_7", "CLO_TRF_U_14_7");
		
		case 178:
			return "DOM8_LIV14";
		
		case 179:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 180:
			return func_617(bParam1, "CLO_TRM_U_8_4", "CLO_TRF_U_8_4");
		
		case 181:
			return "TGAIT2_LIV14";
		
		case 182:
			return func_617(bParam1, "CLO_TRM_U_9_5", "CLO_TRF_U_9_5");
		
		case 183:
			return "EUROS_LIV15";
		
		case 184:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 185:
			return func_617(bParam1, "CLO_TRM_U_17_3", "CLO_TRF_U_16_3");
		
		case 186:
			return "FUTO2_LIV15";
		
		case 187:
			return func_617(bParam1, "CLO_TRM_PH_1_8", "CLO_TRF_PH_1_8");
		
		case 188:
			return "RT3000_LIV15";
		
		case 189:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 190:
			return func_617(bParam1, "CLO_TRM_F_1_14", "CLO_TRF_F_1_14");
		
		case 191:
			return "JEST4_LIVERY15";
		
		case 192:
			return func_617(bParam1, "CLO_TRM_U_11_17", "CLO_TRF_U_11_17");
		
		case 193:
			return "ZR350_LIV15";
		
		case 194:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 195:
			return func_617(bParam1, "CLO_TRM_U_7_5", "CLO_TRF_U_7_5");
		
		case 196:
			return "WARR2_LIV15";
		
		case 197:
			return func_617(bParam1, "CLO_TRM_U_15_15", "CLO_TRF_U_14_15");
		
		case 198:
			return "CALICO_LIVERY15";
		
		case 199:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 200:
			return func_617(bParam1, "CLO_TRM_U_8_5", "CLO_TRF_U_8_5");
		
		case 201:
			return "REMUS_LIV15";
		
		case 202:
			return func_617(bParam1, "CLO_TRM_U_9_4", "CLO_TRF_U_9_4");
		
		case 203:
			return "DOM8_LIV15";
		
		case 204:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 205:
			return func_617(bParam1, "CLO_TRM_U_17_10", "CLO_TRF_U_16_10");
		
		case 206:
			return "TGAIT2_LIV15";
		
		case 207:
			return func_617(bParam1, "CLO_TRM_PH_1_11", "CLO_TRF_PH_1_11");
		
		case 208:
			return func_617(bParam1, "CLO_TRM_F_1_8", "CLO_TRF_F_1_8");
		
		case 209:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 210:
			return func_617(bParam1, "CLO_TRM_U_11_13", "CLO_TRF_U_11_13");
		
		case 211:
			return func_617(bParam1, "CLO_TRM_U_7_10", "CLO_TRF_U_7_10");
		
		case 212:
			return func_617(bParam1, "CLO_TRM_U_15_9", "CLO_TRF_U_14_9");
		
		case 213:
			return func_617(bParam1, "CLO_TRM_U_8_10", "CLO_TRF_U_8_10");
		
		case 214:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		default:
	}
	switch (iParam0)
	{
		case 215:
			return func_617(bParam1, "CLO_TRM_U_9_1", "CLO_TRF_U_9_1");
		
		case 216:
			return func_617(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 217:
			return func_617(bParam1, "CLO_TRM_F_1_1", "CLO_TRF_F_1_1");
		
		case 218:
			return func_617(bParam1, "CLO_TRM_U_11_18", "CLO_TRF_U_11_18");
		
		case 219:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 220:
			return func_617(bParam1, "CLO_TRM_U_7_11", "CLO_TRF_U_7_11");
		
		case 221:
			return func_617(bParam1, "CLO_TRM_U_15_12", "CLO_TRF_U_14_12");
		
		case 222:
			return func_617(bParam1, "CLO_TRM_U_8_11", "CLO_TRF_U_8_11");
		
		case 223:
			return func_617(bParam1, "CLO_TRM_U_9_0", "CLO_TRF_U_9_0");
		
		case 224:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 225:
			return func_617(bParam1, "CLO_TRM_F_1_0", "CLO_TRF_F_1_0");
		
		case 226:
			return func_617(bParam1, "CLO_TRM_U_11_1", "CLO_TRF_U_11_1");
		
		case 227:
			return func_617(bParam1, "CLO_TRM_U_7_1", "CLO_TRF_U_7_1");
		
		case 228:
			return func_617(bParam1, "CLO_TRM_U_15_10", "CLO_TRF_U_14_10");
		
		case 229:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 230:
			return func_617(bParam1, "CLO_TRM_U_8_1", "CLO_TRF_U_8_1");
		
		case 231:
			return func_617(bParam1, "CLO_TRM_U_9_11", "CLO_TRF_U_9_11");
		
		case 232:
			return func_617(bParam1, "CLO_TRM_F_1_2", "CLO_TRF_F_1_2");
		
		case 233:
			return func_617(bParam1, "CLO_TRM_U_11_7", "CLO_TRF_U_11_7");
		
		case 234:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 235:
			return func_617(bParam1, "CLO_TRM_U_7_0", "CLO_TRF_U_7_0");
		
		case 236:
			return func_617(bParam1, "CLO_TRM_U_15_6", "CLO_TRF_U_14_6");
		
		case 237:
			return func_617(bParam1, "CLO_TRM_U_8_0", "CLO_TRF_U_8_0");
		
		case 238:
			return func_617(bParam1, "CLO_TRM_U_9_14", "CLO_TRF_U_9_14");
		
		case 239:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 240:
			return func_617(bParam1, "CLO_TRM_F_1_5", "CLO_TRF_F_1_5");
		
		case 241:
			return func_617(bParam1, "CLO_TRM_U_11_2", "CLO_TRF_U_11_2");
		
		case 242:
			return func_617(bParam1, "CLO_TRM_U_7_6", "CLO_TRF_U_7_6");
		
		case 243:
			return func_617(bParam1, "CLO_TRM_U_15_13", "CLO_TRF_U_14_13");
		
		case 244:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 245:
			return func_617(bParam1, "CLO_TRM_U_8_6", "CLO_TRF_U_8_6");
		
		case 246:
			return func_617(bParam1, "CLO_TRM_F_1_22", "CLO_TRF_F_1_22");
		
		case 247:
			return func_617(bParam1, "CLO_TRM_U_11_8", "CLO_TRF_U_11_8");
		
		case 248:
			return func_617(bParam1, "CLO_TRM_U_15_16", "CLO_TRF_U_14_16");
		
		case 249:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 250:
			return func_617(bParam1, "CLO_TRM_F_1_21", "CLO_TRF_F_1_21");
		
		case 251:
			return func_617(bParam1, "CLO_TRM_U_11_3", "CLO_TRF_U_11_3");
		
		case 252:
			return func_617(bParam1, "CLO_TRM_U_15_17", "CLO_TRF_U_14_17");
		
		case 253:
			return func_617(bParam1, "CLO_TRM_F_1_7", "CLO_TRF_F_1_7");
		
		case 254:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 255:
			return func_617(bParam1, "CLO_TRM_U_11_11", "CLO_TRF_U_11_11");
		
		case 256:
			return func_617(bParam1, "CLO_TRM_U_15_18", "CLO_TRF_U_14_18");
		
		case 257:
			return func_617(bParam1, "CLO_TRM_F_1_6", "CLO_TRF_F_1_6");
		
		case 258:
			return func_617(bParam1, "CLO_TRM_U_11_4", "CLO_TRF_U_11_4");
		
		case 259:
			return func_617(bParam1, "CLO_TRM_U_15_14", "CLO_TRF_U_14_14");
		
		case 260:
			return func_617(bParam1, "CLO_TRM_F_1_11", "CLO_TRF_F_1_11");
		
		case 261:
			return func_617(bParam1, "CLO_TRM_U_15_11", "CLO_TRF_U_14_11");
		
		case 262:
			return func_617(bParam1, "CLO_TRM_F_1_17", "CLO_TRF_F_1_17");
		
		case 263:
			return func_617(bParam1, "CLO_TRM_F_1_16", "CLO_TRF_F_1_16");
		
		case 264:
			return func_617(bParam1, "CLO_TRM_F_1_10", "CLO_TRF_F_1_10");
		
		case 265:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 266:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 267:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 268:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 269:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 270:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 271:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 272:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 273:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 274:
			return func_617(bParam1, "CLO_TRM_F_1_9", "CLO_TRF_F_1_9");
		
		default:
	}
	switch (iParam0)
	{
		case 275:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 276:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 277:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 278:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 279:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 280:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 281:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 282:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 283:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 284:
			return func_617(bParam1, "CLO_TRM_PH_1_2", "CLO_TRF_PH_1_2");
		
		case 285:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 286:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 287:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 288:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 289:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 290:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 291:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 292:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 293:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 294:
			return func_617(bParam1, "CLO_TRM_U_15_1", "CLO_TRF_U_14_1");
		
		case 295:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 296:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 297:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 298:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 299:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 300:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 301:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 302:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 303:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 304:
			return func_617(bParam1, "CLO_TRM_U_7_7", "CLO_TRF_U_7_7");
		
		case 305:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 306:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 307:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 308:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 309:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 310:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 311:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 312:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 313:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 314:
			return func_617(bParam1, "CLO_TRM_U_9_2", "CLO_TRF_U_9_2");
		
		default:
	}
	switch (iParam0)
	{
		case 315:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 316:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 317:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 318:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 319:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 320:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 321:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 322:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 323:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 324:
			return func_617(bParam1, "CLO_TRM_U_11_12", "CLO_TRF_U_11_12");
		
		case 325:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 326:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 327:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 328:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 329:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 330:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 331:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 332:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 333:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 334:
			return func_617(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 335:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 336:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 337:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 338:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 339:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 340:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 341:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 342:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 343:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 344:
			return func_617(bParam1, "CLO_TRM_U_8_7", "CLO_TRF_U_8_7");
		
		case 345:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 346:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 347:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 348:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 349:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 350:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 351:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 352:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 353:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 354:
			return func_617(bParam1, "CLO_TRM_U_16_7", "CLO_TRF_U_15_7");
		
		case 355:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 356:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 357:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 358:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 359:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 360:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 361:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 362:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 363:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 364:
			return func_617(bParam1, "CLO_TRM_D_8_0", "CLO_TRF_D_8_0");
		
		case 365:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 366:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 367:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 368:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 369:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 370:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 371:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 372:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 373:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 374:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 375:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 376:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 377:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 378:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 379:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 380:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 381:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 382:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 383:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 384:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 385:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 386:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 387:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 388:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 389:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 390:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 391:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 392:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 393:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 394:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 395:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 396:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 397:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 398:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 399:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 400:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 401:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 402:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 403:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 404:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 405:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 406:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 407:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 408:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 409:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 410:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 411:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 412:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 413:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 414:
			return func_617(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 415:
			return func_617(bParam1, "CLO_TRM_O_R8", "CLO_TRF_O_R8");
		
		default:
	}
	return "";
}

char* func_617(bool bParam0, char* sParam1, char* sParam2)//Position - 0x27550
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_618(int iParam0)//Position - 0x27567
{
	switch (iParam0)
	{
		case joaat("sultan3"):
			return "SULTAN3";
		
		case joaat("rt3000"):
			return "RT3000";
		
		case joaat("vectre"):
			return "VECTRE";
		
		case joaat("zr350"):
			return "ZR350";
		
		case joaat("warrener2"):
			return "WARRENER2";
		
		case joaat("calico"):
			return "CALICO";
		
		case joaat("remus"):
			return "REMUS";
		
		case joaat("cypher"):
			return "CYPHER";
		
		case joaat("dominator7"):
			return "DOMINATOR7";
		
		case joaat("jester4"):
			return "JESTER4";
		
		case joaat("futo2"):
			return "FUTO2";
		
		case joaat("dominator8"):
			return "DOMINATOR8";
		
		case joaat("previon"):
			return "PREVION";
		
		case joaat("growler"):
			return "GROWLER";
		
		case joaat("comet6"):
			return "COMET6";
		
		case joaat("euros"):
			return "EUROS";
		
		case -64075878:
			return "KANJOSJ";
		
		case -294678663:
			return "POSTLUDE";
		
		default:
	}
	return "";
}

void func_619(bool bParam0)//Position - 0x27664
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (bParam0 == 8)
	{
		func_649(129, 1, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_649(135, 1, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_649(136, 1, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_649(137, 1, -1);
		return;
	}
	if (bParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8272, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8273, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8274, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8275, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8276, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		iVar5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_641(8277, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (!BitTest(Global_113386.f_20564.f_471, bParam0) || !BitTest(Global_2359296[func_621() /*5567*/].f_681.f_10, bParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::SET_BIT(&(Global_2359296[func_621() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_620(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, true, 0, "", 0);
	}
}

char* func_620(bool bParam0)//Position - 0x27823
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_621()//Position - 0x27926
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_622()//Position - 0x27933
{
	return func_623(PLAYER::PLAYER_ID());
}

int func_623(bool bParam0)//Position - 0x27943
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_624(int iParam0)//Position - 0x27962
{
	return (iParam0 > -1 && iParam0 < 8);
}

int func_625(int iParam0)//Position - 0x27978
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 2;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 6;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 3;
		
		case 19:
			return 0;
		
		case 20:
			return 6;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 1;
		
		case 24:
			return 4;
		
		case 25:
			return 0;
		
		case 26:
			return 5;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 1;
		
		case 30:
			return 3;
		
		case 31:
			return 0;
		
		case 32:
			return 6;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 1;
		
		case 36:
			return 3;
		
		case 37:
			return 0;
		
		case 38:
			return 6;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 1;
		
		case 42:
			return 0;
		
		case 43:
			return 5;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 1;
		
		case 47:
			return 0;
		
		case 48:
			return 6;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		case 51:
			return 1;
		
		case 52:
			return 0;
		
		case 53:
			return 6;
		
		case 54:
			return 0;
		
		case 55:
			return 0;
		
		case 56:
			return 1;
		
		case 57:
			return 0;
		
		case 58:
			return 0;
		
		case 59:
			return 5;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 1;
		
		case 63:
			return 0;
		
		case 64:
			return 0;
		
		case 65:
			return 6;
		
		case 66:
			return 0;
		
		case 67:
			return 0;
		
		case 68:
			return 1;
		
		case 69:
			return 0;
		
		case 70:
			return 0;
		
		case 71:
			return 6;
		
		case 72:
			return 0;
		
		case 73:
			return 0;
		
		case 74:
			return 1;
		
		case 75:
			return 0;
		
		case 76:
			return 0;
		
		case 77:
			return 5;
		
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 0;
		
		case 80:
			return 1;
		
		case 81:
			return 0;
		
		case 82:
			return 0;
		
		case 83:
			return 6;
		
		case 84:
			return 0;
		
		case 85:
			return 0;
		
		case 86:
			return 1;
		
		case 87:
			return 0;
		
		case 88:
			return 0;
		
		case 89:
			return 6;
		
		case 90:
			return 0;
		
		case 91:
			return 0;
		
		case 92:
			return 1;
		
		case 93:
			return 5;
		
		case 94:
			return 0;
		
		case 95:
			return 6;
		
		case 96:
			return 0;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 5;
		
		case 100:
			return 0;
		
		case 101:
			return 6;
		
		case 102:
			return 0;
		
		case 103:
			return 0;
		
		case 104:
			return 5;
		
		case 105:
			return 0;
		
		case 106:
			return 6;
		
		case 107:
			return 0;
		
		case 108:
			return 0;
		
		case 109:
			return 5;
		
		case 110:
			return 0;
		
		case 111:
			return 6;
		
		case 112:
			return 0;
		
		case 113:
			return 0;
		
		case 114:
			return 5;
		
		default:
	}
	switch (iParam0)
	{
		case 115:
			return 0;
		
		case 116:
			return 6;
		
		case 117:
			return 0;
		
		case 118:
			return 0;
		
		case 119:
			return 7;
		
		case 120:
			return 0;
		
		case 121:
			return 6;
		
		case 122:
			return 0;
		
		case 123:
			return 6;
		
		case 124:
			return 7;
		
		case 125:
			return 0;
		
		case 126:
			return 6;
		
		case 127:
			return 0;
		
		case 128:
			return 6;
		
		case 129:
			return 7;
		
		case 130:
			return 0;
		
		case 131:
			return 6;
		
		case 132:
			return 0;
		
		case 133:
			return 6;
		
		case 134:
			return 7;
		
		case 135:
			return 0;
		
		case 136:
			return 6;
		
		case 137:
			return 0;
		
		case 138:
			return 6;
		
		case 139:
			return 7;
		
		case 140:
			return 0;
		
		case 141:
			return 6;
		
		case 142:
			return 0;
		
		case 143:
			return 6;
		
		case 144:
			return 7;
		
		case 145:
			return 0;
		
		case 146:
			return 6;
		
		case 147:
			return 0;
		
		case 148:
			return 6;
		
		case 149:
			return 7;
		
		case 150:
			return 0;
		
		case 151:
			return 6;
		
		case 152:
			return 0;
		
		case 153:
			return 6;
		
		case 154:
			return 7;
		
		case 155:
			return 0;
		
		case 156:
			return 6;
		
		case 157:
			return 0;
		
		case 158:
			return 6;
		
		case 159:
			return 7;
		
		case 160:
			return 0;
		
		case 161:
			return 6;
		
		case 162:
			return 0;
		
		case 163:
			return 6;
		
		case 164:
			return 7;
		
		case 165:
			return 0;
		
		case 166:
			return 6;
		
		case 167:
			return 0;
		
		case 168:
			return 6;
		
		case 169:
			return 7;
		
		case 170:
			return 0;
		
		case 171:
			return 6;
		
		case 172:
			return 0;
		
		case 173:
			return 6;
		
		case 174:
			return 7;
		
		case 175:
			return 0;
		
		case 176:
			return 6;
		
		case 177:
			return 0;
		
		case 178:
			return 6;
		
		case 179:
			return 7;
		
		case 180:
			return 0;
		
		case 181:
			return 6;
		
		case 182:
			return 0;
		
		case 183:
			return 6;
		
		case 184:
			return 7;
		
		case 185:
			return 0;
		
		case 186:
			return 6;
		
		case 187:
			return 0;
		
		case 188:
			return 6;
		
		case 189:
			return 7;
		
		case 190:
			return 0;
		
		case 191:
			return 6;
		
		case 192:
			return 0;
		
		case 193:
			return 6;
		
		case 194:
			return 7;
		
		case 195:
			return 0;
		
		case 196:
			return 6;
		
		case 197:
			return 0;
		
		case 198:
			return 6;
		
		case 199:
			return 7;
		
		case 200:
			return 0;
		
		case 201:
			return 6;
		
		case 202:
			return 0;
		
		case 203:
			return 6;
		
		case 204:
			return 7;
		
		case 205:
			return 0;
		
		case 206:
			return 6;
		
		case 207:
			return 0;
		
		case 208:
			return 0;
		
		case 209:
			return 7;
		
		case 210:
			return 0;
		
		case 211:
			return 0;
		
		case 212:
			return 0;
		
		case 213:
			return 0;
		
		case 214:
			return 7;
		
		default:
	}
	switch (iParam0)
	{
		case 215:
			return 0;
		
		case 216:
			return 0;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 7;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 222:
			return 0;
		
		case 223:
			return 0;
		
		case 224:
			return 7;
		
		case 225:
			return 0;
		
		case 226:
			return 0;
		
		case 227:
			return 0;
		
		case 228:
			return 0;
		
		case 229:
			return 7;
		
		case 230:
			return 0;
		
		case 231:
			return 0;
		
		case 232:
			return 0;
		
		case 233:
			return 0;
		
		case 234:
			return 7;
		
		case 235:
			return 0;
		
		case 236:
			return 0;
		
		case 237:
			return 0;
		
		case 238:
			return 0;
		
		case 239:
			return 7;
		
		case 240:
			return 0;
		
		case 241:
			return 0;
		
		case 242:
			return 0;
		
		case 243:
			return 0;
		
		case 244:
			return 7;
		
		case 245:
			return 0;
		
		case 246:
			return 0;
		
		case 247:
			return 0;
		
		case 248:
			return 0;
		
		case 249:
			return 7;
		
		case 250:
			return 0;
		
		case 251:
			return 0;
		
		case 252:
			return 0;
		
		case 253:
			return 0;
		
		case 254:
			return 7;
		
		case 255:
			return 0;
		
		case 256:
			return 0;
		
		case 257:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 0;
		
		case 260:
			return 0;
		
		case 261:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 265:
			return 7;
		
		case 266:
			return 7;
		
		case 267:
			return 7;
		
		case 268:
			return 7;
		
		case 269:
			return 7;
		
		case 270:
			return 7;
		
		case 271:
			return 7;
		
		case 272:
			return 7;
		
		case 273:
			return 7;
		
		case 274:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 275:
			return 7;
		
		case 276:
			return 7;
		
		case 277:
			return 7;
		
		case 278:
			return 7;
		
		case 279:
			return 7;
		
		case 280:
			return 7;
		
		case 281:
			return 7;
		
		case 282:
			return 7;
		
		case 283:
			return 7;
		
		case 284:
			return 0;
		
		case 285:
			return 7;
		
		case 286:
			return 7;
		
		case 287:
			return 7;
		
		case 288:
			return 7;
		
		case 289:
			return 7;
		
		case 290:
			return 7;
		
		case 291:
			return 7;
		
		case 292:
			return 7;
		
		case 293:
			return 7;
		
		case 294:
			return 0;
		
		case 295:
			return 7;
		
		case 296:
			return 7;
		
		case 297:
			return 7;
		
		case 298:
			return 7;
		
		case 299:
			return 7;
		
		case 300:
			return 7;
		
		case 301:
			return 7;
		
		case 302:
			return 7;
		
		case 303:
			return 7;
		
		case 304:
			return 0;
		
		case 305:
			return 7;
		
		case 306:
			return 7;
		
		case 307:
			return 7;
		
		case 308:
			return 7;
		
		case 309:
			return 7;
		
		case 310:
			return 7;
		
		case 311:
			return 7;
		
		case 312:
			return 7;
		
		case 313:
			return 7;
		
		case 314:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 315:
			return 7;
		
		case 316:
			return 7;
		
		case 317:
			return 7;
		
		case 318:
			return 7;
		
		case 319:
			return 7;
		
		case 320:
			return 7;
		
		case 321:
			return 7;
		
		case 322:
			return 7;
		
		case 323:
			return 7;
		
		case 324:
			return 0;
		
		case 325:
			return 7;
		
		case 326:
			return 7;
		
		case 327:
			return 7;
		
		case 328:
			return 7;
		
		case 329:
			return 7;
		
		case 330:
			return 7;
		
		case 331:
			return 7;
		
		case 332:
			return 7;
		
		case 333:
			return 7;
		
		case 334:
			return 0;
		
		case 335:
			return 7;
		
		case 336:
			return 7;
		
		case 337:
			return 7;
		
		case 338:
			return 7;
		
		case 339:
			return 7;
		
		case 340:
			return 7;
		
		case 341:
			return 7;
		
		case 342:
			return 7;
		
		case 343:
			return 7;
		
		case 344:
			return 0;
		
		case 345:
			return 7;
		
		case 346:
			return 7;
		
		case 347:
			return 7;
		
		case 348:
			return 7;
		
		case 349:
			return 7;
		
		case 350:
			return 7;
		
		case 351:
			return 7;
		
		case 352:
			return 7;
		
		case 353:
			return 7;
		
		case 354:
			return 0;
		
		case 355:
			return 7;
		
		case 356:
			return 7;
		
		case 357:
			return 7;
		
		case 358:
			return 7;
		
		case 359:
			return 7;
		
		case 360:
			return 7;
		
		case 361:
			return 7;
		
		case 362:
			return 7;
		
		case 363:
			return 7;
		
		case 364:
			return 0;
		
		case 365:
			return 7;
		
		case 366:
			return 7;
		
		case 367:
			return 7;
		
		case 368:
			return 7;
		
		case 369:
			return 7;
		
		case 370:
			return 7;
		
		case 371:
			return 7;
		
		case 372:
			return 7;
		
		case 373:
			return 7;
		
		case 374:
			return 7;
		
		case 375:
			return 7;
		
		case 376:
			return 7;
		
		case 377:
			return 7;
		
		case 378:
			return 7;
		
		case 379:
			return 7;
		
		case 380:
			return 7;
		
		case 381:
			return 7;
		
		case 382:
			return 7;
		
		case 383:
			return 7;
		
		case 384:
			return 7;
		
		case 385:
			return 7;
		
		case 386:
			return 7;
		
		case 387:
			return 7;
		
		case 388:
			return 7;
		
		case 389:
			return 7;
		
		case 390:
			return 7;
		
		case 391:
			return 7;
		
		case 392:
			return 7;
		
		case 393:
			return 7;
		
		case 394:
			return 7;
		
		case 395:
			return 7;
		
		case 396:
			return 7;
		
		case 397:
			return 7;
		
		case 398:
			return 7;
		
		case 399:
			return 7;
		
		case 400:
			return 7;
		
		case 401:
			return 7;
		
		case 402:
			return 7;
		
		case 403:
			return 7;
		
		case 404:
			return 7;
		
		case 405:
			return 7;
		
		case 406:
			return 7;
		
		case 407:
			return 7;
		
		case 408:
			return 7;
		
		case 409:
			return 7;
		
		case 410:
			return 7;
		
		case 411:
			return 7;
		
		case 412:
			return 7;
		
		case 413:
			return 7;
		
		case 414:
			return 7;
		
		case 415:
			return 0;
		
		default:
	}
	return -1;
}

void func_626(int iParam0)//Position - 0x28BE0
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	char* sVar3;
	
	iVar0 = func_625(iParam0);
	if (!func_624(iVar0))
	{
		return;
	}
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "CCR_UNL_CLTH";
			break;
		
		case 1:
			sVar1 = "";
			break;
		
		case 2:
			sVar1 = "CCR_UNL_RC";
			break;
		
		case 3:
			sVar1 = "CCR_UNL_FA";
			break;
		
		case 4:
			sVar1 = "CCR_UNL_FT";
			break;
		
		case 5:
			sVar1 = "CCR_UNL_WS";
			break;
		
		case 6:
			sVar1 = "CCR_UNL_LIV";
			break;
		
		case 7:
			sVar1 = "";
			break;
	}
	bVar2 = !func_622();
	sVar3 = func_616(iParam0, bVar2, -1, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_615(sVar1, sVar3, 0, 0, 0);
	}
}

int func_627(int iParam0)//Position - 0x28CB7
{
	int iVar0;
	
	if (!func_630(iParam0))
	{
		return 0;
	}
	if (func_629(iParam0))
	{
		return 0;
	}
	iVar0 = func_628(iParam0);
	if (iVar0 == 513)
	{
		return 0;
	}
	func_649(iVar0, 1, -1);
	return 1;
}

int func_628(int iParam0)//Position - 0x28CF7
{
	switch (iParam0)
	{
		case 1:
			return 31825;
		
		case 2:
			return 31826;
		
		case 3:
			return 31827;
		
		case 4:
			return 31828;
		
		case 5:
			return 31829;
		
		case 6:
			return 31829;
		
		case 7:
			return 31830;
		
		case 8:
			return 31831;
		
		case 9:
			return 31832;
		
		case 10:
			return 31833;
		
		case 11:
			return 31834;
		
		case 12:
			return 31834;
		
		case 13:
			return 31835;
		
		case 14:
			return 31836;
		
		case 15:
			return 31837;
		
		case 16:
			return 31838;
		
		case 17:
			return 31839;
		
		case 18:
			return 31839;
		
		case 19:
			return 31840;
		
		case 20:
			return 31841;
		
		case 21:
			return 31842;
		
		case 22:
			return 31843;
		
		case 23:
			return 31844;
		
		case 24:
			return 31844;
		
		case 25:
			return 31845;
		
		case 26:
			return 31846;
		
		case 27:
			return 31847;
		
		case 28:
			return 31848;
		
		case 29:
			return 31849;
		
		case 30:
			return 31849;
		
		case 31:
			return 31850;
		
		case 32:
			return 31851;
		
		case 33:
			return 31852;
		
		case 34:
			return 31853;
		
		case 35:
			return 31854;
		
		case 36:
			return 31854;
		
		case 37:
			return 31855;
		
		case 38:
			return 31856;
		
		case 39:
			return 31857;
		
		case 40:
			return 31858;
		
		case 41:
			return 31859;
		
		case 42:
			return 31860;
		
		case 43:
			return 31861;
		
		case 44:
			return 31862;
		
		case 45:
			return 31863;
		
		case 46:
			return 31864;
		
		case 47:
			return 31865;
		
		case 48:
			return 31866;
		
		case 49:
			return 31867;
		
		case 50:
			return 31868;
		
		case 51:
			return 31869;
		
		case 52:
			return 31870;
		
		case 53:
			return 31871;
		
		case 54:
			return 31872;
		
		case 55:
			return 31873;
		
		case 56:
			return 31874;
		
		case 57:
			return 31874;
		
		case 58:
			return 31875;
		
		case 59:
			return 31876;
		
		case 60:
			return 31877;
		
		case 61:
			return 31878;
		
		case 62:
			return 31879;
		
		case 63:
			return 31879;
		
		case 64:
			return 31880;
		
		case 65:
			return 31881;
		
		case 66:
			return 31882;
		
		case 67:
			return 31883;
		
		case 68:
			return 31884;
		
		case 69:
			return 31884;
		
		case 70:
			return 31885;
		
		case 71:
			return 31886;
		
		case 72:
			return 31887;
		
		case 73:
			return 31888;
		
		case 74:
			return 31889;
		
		case 75:
			return 31889;
		
		case 76:
			return 31890;
		
		case 77:
			return 31891;
		
		case 78:
			return 31892;
		
		case joaat("mpsv_lp0_31"):
			return 31893;
		
		case 80:
			return 31894;
		
		case 81:
			return 31894;
		
		case 82:
			return 31895;
		
		case 83:
			return 31896;
		
		case 84:
			return 31897;
		
		case 85:
			return 31898;
		
		case 86:
			return 31899;
		
		case 87:
			return 31899;
		
		case 88:
			return 31900;
		
		case 89:
			return 31901;
		
		case 90:
			return 31902;
		
		case 91:
			return 31903;
		
		case 92:
			return 31904;
		
		case 93:
			return 31904;
		
		case 94:
			return 31905;
		
		case 95:
			return 31906;
		
		case 96:
			return 31907;
		
		case 97:
			return 31908;
		
		case 98:
			return 31909;
		
		case 99:
			return 31909;
		
		case 100:
			return 31910;
		
		case 101:
			return 31911;
		
		case 102:
			return 31912;
		
		case 103:
			return 31913;
		
		case 104:
			return 31914;
		
		case 105:
			return 31915;
		
		case 106:
			return 31916;
		
		case 107:
			return 31917;
		
		case 108:
			return 31918;
		
		case 109:
			return 31919;
		
		case 110:
			return 31920;
		
		case 111:
			return 31921;
		
		case 112:
			return 31922;
		
		case 113:
			return 31923;
		
		case 114:
			return 31924;
		
		default:
	}
	switch (iParam0)
	{
		case 115:
			return 31925;
		
		case 116:
			return 31926;
		
		case 117:
			return 31927;
		
		case 118:
			return 31928;
		
		case 119:
			return 31929;
		
		case 120:
			return 31930;
		
		case 121:
			return 31931;
		
		case 122:
			return 31932;
		
		case 123:
			return 31933;
		
		case 124:
			return 31934;
		
		case 125:
			return 31935;
		
		case 126:
			return 31936;
		
		case 127:
			return 31937;
		
		case 128:
			return 31938;
		
		case 129:
			return 31939;
		
		case 130:
			return 31940;
		
		case 131:
			return 31941;
		
		case 132:
			return 31942;
		
		case 133:
			return 31943;
		
		case 134:
			return 31944;
		
		case 135:
			return 31945;
		
		case 136:
			return 31946;
		
		case 137:
			return 31947;
		
		case 138:
			return 31948;
		
		case 139:
			return 31949;
		
		case 140:
			return 31950;
		
		case 141:
			return 31951;
		
		case 142:
			return 31952;
		
		case 143:
			return 31953;
		
		case 144:
			return 31954;
		
		case 145:
			return 31955;
		
		case 146:
			return 31956;
		
		case 147:
			return 31957;
		
		case 148:
			return 31958;
		
		case 149:
			return 31959;
		
		case 150:
			return 31960;
		
		case 151:
			return 31961;
		
		case 152:
			return 31962;
		
		case 153:
			return 31963;
		
		case 154:
			return 31964;
		
		case 155:
			return 31965;
		
		case 156:
			return 31966;
		
		case 157:
			return 31967;
		
		case 158:
			return 31968;
		
		case 159:
			return 31969;
		
		case 160:
			return 31970;
		
		case 161:
			return 31971;
		
		case 162:
			return 31972;
		
		case 163:
			return 31973;
		
		case 164:
			return 31974;
		
		case 165:
			return 31975;
		
		case 166:
			return 31976;
		
		case 167:
			return 31977;
		
		case 168:
			return 31978;
		
		case 169:
			return 31979;
		
		case 170:
			return 31980;
		
		case 171:
			return 31981;
		
		case 172:
			return 31982;
		
		case 173:
			return 31983;
		
		case 174:
			return 31984;
		
		case 175:
			return 31985;
		
		case 176:
			return 31986;
		
		case 177:
			return 31987;
		
		case 178:
			return 31988;
		
		case 179:
			return 31989;
		
		case 180:
			return 31990;
		
		case 181:
			return 31991;
		
		case 182:
			return 31992;
		
		case 183:
			return 31993;
		
		case 184:
			return 31994;
		
		case 185:
			return 31995;
		
		case 186:
			return 31996;
		
		case 187:
			return 31997;
		
		case 188:
			return 31998;
		
		case 189:
			return 31999;
		
		case 190:
			return 32000;
		
		case 191:
			return 32001;
		
		case 192:
			return 32002;
		
		case 193:
			return 32003;
		
		case 194:
			return 32004;
		
		case 195:
			return 32005;
		
		case 196:
			return 32006;
		
		case 197:
			return 32007;
		
		case 198:
			return 32008;
		
		case 199:
			return 32009;
		
		case 200:
			return 32010;
		
		case 201:
			return 32011;
		
		case 202:
			return 32012;
		
		case 203:
			return 32013;
		
		case 204:
			return 32014;
		
		case 205:
			return 32015;
		
		case 206:
			return 32016;
		
		case 207:
			return 32017;
		
		case 208:
			return 32018;
		
		case 209:
			return 32019;
		
		case 210:
			return 32020;
		
		case 211:
			return 32021;
		
		case 212:
			return 32022;
		
		case 213:
			return 32023;
		
		case 214:
			return 32024;
		
		default:
	}
	switch (iParam0)
	{
		case 215:
			return 32025;
		
		case 216:
			return 32026;
		
		case 217:
			return 32027;
		
		case 218:
			return 32028;
		
		case 219:
			return 32029;
		
		case 220:
			return 32030;
		
		case 221:
			return 32031;
		
		case 222:
			return 32032;
		
		case 223:
			return 32033;
		
		case 224:
			return 32034;
		
		case 225:
			return 32035;
		
		case 226:
			return 32036;
		
		case 227:
			return 32037;
		
		case 228:
			return 32038;
		
		case 229:
			return 32039;
		
		case 230:
			return 32040;
		
		case 231:
			return 32041;
		
		case 232:
			return 32042;
		
		case 233:
			return 32043;
		
		case 234:
			return 32044;
		
		case 235:
			return 32045;
		
		case 236:
			return 32046;
		
		case 237:
			return 32047;
		
		case 238:
			return 32048;
		
		case 239:
			return 32049;
		
		case 240:
			return 32050;
		
		case 241:
			return 32051;
		
		case 242:
			return 32052;
		
		case 243:
			return 32053;
		
		case 244:
			return 32054;
		
		case 245:
			return 32055;
		
		case 246:
			return 32056;
		
		case 247:
			return 32057;
		
		case 248:
			return 32058;
		
		case 249:
			return 32059;
		
		case 250:
			return 32060;
		
		case 251:
			return 32061;
		
		case 252:
			return 32062;
		
		case 253:
			return 32063;
		
		case 254:
			return 32064;
		
		case 255:
			return 32065;
		
		case 256:
			return 32066;
		
		case 257:
			return 32067;
		
		case 258:
			return 32068;
		
		case 259:
			return 32069;
		
		case 260:
			return 32070;
		
		case 261:
			return 32071;
		
		case 262:
			return 32072;
		
		case 263:
			return 32073;
		
		case 264:
			return 32074;
		
		case 265:
			return 32075;
		
		case 266:
			return 32076;
		
		case 267:
			return 32077;
		
		case 268:
			return 32078;
		
		case 269:
			return 32079;
		
		case 270:
			return 32080;
		
		case 271:
			return 32081;
		
		case 272:
			return 32082;
		
		case 273:
			return 32083;
		
		case 274:
			return 32084;
		
		default:
	}
	switch (iParam0)
	{
		case 275:
			return 32085;
		
		case 276:
			return 32086;
		
		case 277:
			return 32087;
		
		case 278:
			return 32088;
		
		case 279:
			return 32089;
		
		case 280:
			return 32090;
		
		case 281:
			return 32091;
		
		case 282:
			return 32092;
		
		case 283:
			return 32093;
		
		case 284:
			return 32094;
		
		case 285:
			return 32095;
		
		case 286:
			return 32096;
		
		case 287:
			return 32097;
		
		case 288:
			return 32098;
		
		case 289:
			return 32099;
		
		case 290:
			return 32100;
		
		case 291:
			return 32101;
		
		case 292:
			return 32102;
		
		case 293:
			return 32103;
		
		case 294:
			return 32104;
		
		case 295:
			return 32105;
		
		case 296:
			return 32106;
		
		case 297:
			return 32107;
		
		case 298:
			return 32108;
		
		case 299:
			return 32109;
		
		case 300:
			return 32110;
		
		case 301:
			return 32111;
		
		case 302:
			return 32112;
		
		case 303:
			return 32113;
		
		case 304:
			return 32114;
		
		case 305:
			return 32115;
		
		case 306:
			return 32116;
		
		case 307:
			return 32117;
		
		case 308:
			return 32118;
		
		case 309:
			return 32119;
		
		case 310:
			return 32120;
		
		case 311:
			return 32121;
		
		case 312:
			return 32122;
		
		case 313:
			return 32123;
		
		case 314:
			return 32124;
		
		default:
	}
	switch (iParam0)
	{
		case 315:
			return 32125;
		
		case 316:
			return 32126;
		
		case 317:
			return 32127;
		
		case 318:
			return 32128;
		
		case 319:
			return 32129;
		
		case 320:
			return 32130;
		
		case 321:
			return 32131;
		
		case 322:
			return 32132;
		
		case 323:
			return 32133;
		
		case 324:
			return 32134;
		
		case 325:
			return 32135;
		
		case 326:
			return 32136;
		
		case 327:
			return 32137;
		
		case 328:
			return 32138;
		
		case 329:
			return 32139;
		
		case 330:
			return 32140;
		
		case 331:
			return 32141;
		
		case 332:
			return 32142;
		
		case 333:
			return 32143;
		
		case 334:
			return 32144;
		
		case 335:
			return 32145;
		
		case 336:
			return 32146;
		
		case 337:
			return 32147;
		
		case 338:
			return 32148;
		
		case 339:
			return 32149;
		
		case 340:
			return 32150;
		
		case 341:
			return 32151;
		
		case 342:
			return 32152;
		
		case 343:
			return 32153;
		
		case 344:
			return 32154;
		
		case 345:
			return 32155;
		
		case 346:
			return 32156;
		
		case 347:
			return 32157;
		
		case 348:
			return 32158;
		
		case 349:
			return 32159;
		
		case 350:
			return 32160;
		
		case 351:
			return 32161;
		
		case 352:
			return 32162;
		
		case 353:
			return 32163;
		
		case 354:
			return 32164;
		
		case 355:
			return 32165;
		
		case 356:
			return 32166;
		
		case 357:
			return 32167;
		
		case 358:
			return 32168;
		
		case 359:
			return 32169;
		
		case 360:
			return 32170;
		
		case 361:
			return 32171;
		
		case 362:
			return 32172;
		
		case 363:
			return 32173;
		
		case 364:
			return 32174;
		
		case 365:
			return 32175;
		
		case 366:
			return 32176;
		
		case 367:
			return 32177;
		
		case 368:
			return 32178;
		
		case 369:
			return 32179;
		
		case 370:
			return 32180;
		
		case 371:
			return 32181;
		
		case 372:
			return 32182;
		
		case 373:
			return 32183;
		
		case 374:
			return 32184;
		
		case 375:
			return 32185;
		
		case 376:
			return 32186;
		
		case 377:
			return 32187;
		
		case 378:
			return 32188;
		
		case 379:
			return 32189;
		
		case 380:
			return 32190;
		
		case 381:
			return 32191;
		
		case 382:
			return 32192;
		
		case 383:
			return 32193;
		
		case 384:
			return 32194;
		
		case 385:
			return 32195;
		
		case 386:
			return 32196;
		
		case 387:
			return 32197;
		
		case 388:
			return 32198;
		
		case 389:
			return 32199;
		
		case 390:
			return 32200;
		
		case 391:
			return 32201;
		
		case 392:
			return 32202;
		
		case 393:
			return 32203;
		
		case 394:
			return 32204;
		
		case 395:
			return 32205;
		
		case 396:
			return 32206;
		
		case 397:
			return 32207;
		
		case 398:
			return 32208;
		
		case 399:
			return 32209;
		
		case 400:
			return 32210;
		
		case 401:
			return 32211;
		
		case 402:
			return 32212;
		
		case 403:
			return 32213;
		
		case 404:
			return 32214;
		
		case 405:
			return 32215;
		
		case 406:
			return 32216;
		
		case 407:
			return 32217;
		
		case 408:
			return 32218;
		
		case 409:
			return 32219;
		
		case 410:
			return 32220;
		
		case 411:
			return 32221;
		
		case 412:
			return 32222;
		
		case 413:
			return 32223;
		
		case 414:
			return 32224;
		
		case 415:
			return 32224;
		
		default:
	}
	return 513;
}

int func_629(int iParam0)//Position - 0x2A099
{
	switch (iParam0)
	{
		case 12:
			return Global_262145.f_31644;
		
		case 18:
			return Global_262145.f_31645;
		
		case 30:
			return Global_262145.f_31646;
		
		case 36:
			return Global_262145.f_31647;
		
		default:
	}
	return 0;
}

bool func_630(int iParam0)//Position - 0x2A0E9
{
	return (iParam0 > 0 && iParam0 < 416);
}

void func_631(var uParam0, var uParam1, int iParam2)//Position - 0x2A100
{
	*uParam0 = 0;
	*uParam1 = 0;
	switch (iParam2)
	{
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			*uParam1 = 6;
			break;
		
		case 6:
			*uParam0 = 7;
			break;
		
		case 7:
			*uParam0 = 8;
			break;
		
		case 8:
			*uParam0 = 9;
			break;
		
		case 9:
			*uParam0 = 10;
			break;
		
		case 10:
			*uParam0 = 11;
			*uParam1 = 12;
			break;
		
		case 11:
			*uParam0 = 13;
			break;
		
		case 12:
			*uParam0 = 14;
			break;
		
		case 13:
			*uParam0 = 15;
			break;
		
		case 14:
			*uParam0 = 16;
			break;
		
		case 15:
			*uParam0 = 17;
			*uParam1 = 18;
			break;
		
		case 16:
			*uParam0 = 19;
			break;
		
		case 17:
			*uParam0 = 20;
			break;
		
		case 18:
			*uParam0 = 21;
			break;
		
		case 19:
			*uParam0 = 22;
			break;
		
		case 20:
			*uParam0 = 23;
			*uParam1 = 24;
			break;
		
		case 21:
			*uParam0 = 25;
			break;
		
		case 22:
			*uParam0 = 26;
			break;
		
		case 23:
			*uParam0 = 27;
			break;
		
		case 24:
			*uParam0 = 28;
			break;
		
		case 25:
			*uParam0 = 29;
			*uParam1 = 30;
			break;
		
		case 26:
			*uParam0 = 31;
			break;
		
		case 27:
			*uParam0 = 32;
			break;
		
		case 28:
			*uParam0 = 33;
			break;
		
		case 29:
			*uParam0 = 34;
			break;
		
		case 30:
			*uParam0 = 35;
			*uParam1 = 36;
			break;
		
		case 31:
			*uParam0 = 37;
			break;
		
		case 32:
			*uParam0 = 38;
			break;
		
		case 33:
			*uParam0 = 39;
			break;
		
		case 34:
			*uParam0 = 40;
			break;
		
		case 35:
			*uParam0 = 41;
			break;
		
		case 36:
			*uParam0 = 42;
			break;
		
		case 37:
			*uParam0 = 43;
			break;
		
		case 38:
			*uParam0 = 44;
			break;
		
		case 39:
			*uParam0 = 45;
			break;
		
		case 40:
			*uParam0 = 46;
			break;
		
		case 41:
			*uParam0 = 47;
			break;
		
		case 42:
			*uParam0 = 48;
			break;
		
		case 43:
			*uParam0 = 49;
			break;
		
		case 44:
			*uParam0 = 50;
			break;
		
		case 45:
			*uParam0 = 51;
			break;
		
		case 46:
			*uParam0 = 52;
			break;
		
		case 47:
			*uParam0 = 53;
			break;
		
		case 48:
			*uParam0 = 54;
			break;
		
		case 49:
			*uParam0 = 55;
			break;
		
		case 50:
			*uParam0 = 56;
			*uParam1 = 57;
			break;
		
		case 51:
			*uParam0 = 58;
			break;
		
		case 52:
			*uParam0 = 59;
			break;
		
		case 53:
			*uParam0 = 60;
			break;
		
		case 54:
			*uParam0 = 61;
			break;
		
		case 55:
			*uParam0 = 62;
			*uParam1 = 63;
			break;
		
		case 56:
			*uParam0 = 64;
			break;
		
		case 57:
			*uParam0 = 65;
			break;
		
		case 58:
			*uParam0 = 66;
			break;
		
		case 59:
			*uParam0 = 67;
			break;
		
		case 60:
			*uParam0 = 68;
			*uParam1 = 69;
			break;
		
		case 61:
			*uParam0 = 70;
			break;
		
		case 62:
			*uParam0 = 71;
			break;
		
		case 63:
			*uParam0 = 72;
			break;
		
		case 64:
			*uParam0 = 73;
			break;
		
		case 65:
			*uParam0 = 74;
			*uParam1 = 75;
			break;
		
		case 66:
			*uParam0 = 76;
			break;
		
		case 67:
			*uParam0 = 77;
			break;
		
		case 68:
			*uParam0 = 78;
			break;
		
		case 69:
			*uParam0 = 79;
			break;
		
		case 70:
			*uParam0 = 80;
			*uParam1 = 81;
			break;
		
		case 71:
			*uParam0 = 82;
			break;
		
		case 72:
			*uParam0 = 83;
			break;
		
		case 73:
			*uParam0 = 84;
			break;
		
		case 74:
			*uParam0 = 85;
			break;
		
		case 75:
			*uParam0 = 86;
			*uParam1 = 87;
			break;
		
		case 76:
			*uParam0 = 88;
			break;
		
		case 77:
			*uParam0 = 89;
			break;
		
		case 78:
			*uParam0 = 90;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam0 = 91;
			break;
		
		case 80:
			*uParam0 = 93;
			*uParam1 = 92;
			break;
		
		case 81:
			*uParam0 = 94;
			break;
		
		case 82:
			*uParam0 = 95;
			break;
		
		case 83:
			*uParam0 = 96;
			break;
		
		case 84:
			*uParam0 = 97;
			break;
		
		case 85:
			*uParam0 = 99;
			*uParam1 = 98;
			break;
		
		case 86:
			*uParam0 = 100;
			break;
		
		case 87:
			*uParam0 = 101;
			break;
		
		case 88:
			*uParam0 = 102;
			break;
		
		case 89:
			*uParam0 = 103;
			break;
		
		case 90:
			*uParam0 = 104;
			break;
		
		case 91:
			*uParam0 = 105;
			break;
		
		case 92:
			*uParam0 = 106;
			break;
		
		case 93:
			*uParam0 = 107;
			break;
		
		case 94:
			*uParam0 = 108;
			break;
		
		case 95:
			*uParam0 = 109;
			break;
		
		case 96:
			*uParam0 = 110;
			break;
		
		case 97:
			*uParam0 = 111;
			break;
		
		case 98:
			*uParam0 = 112;
			break;
		
		case 99:
			*uParam0 = 113;
			break;
		
		case 100:
			*uParam0 = 114;
			break;
	}
	switch (iParam2)
	{
		case 101:
			*uParam0 = 115;
			break;
		
		case 102:
			*uParam0 = 116;
			break;
		
		case 103:
			*uParam0 = 117;
			break;
		
		case 104:
			*uParam0 = 118;
			break;
		
		case 105:
			*uParam0 = 119;
			break;
		
		case 106:
			*uParam0 = 120;
			break;
		
		case 107:
			*uParam0 = 121;
			break;
		
		case 108:
			*uParam0 = 122;
			break;
		
		case 109:
			*uParam0 = 123;
			break;
		
		case 110:
			*uParam0 = 124;
			break;
		
		case 111:
			*uParam0 = 125;
			break;
		
		case 112:
			*uParam0 = 126;
			break;
		
		case 113:
			*uParam0 = 127;
			break;
		
		case 114:
			*uParam0 = 128;
			break;
		
		case 115:
			*uParam0 = 129;
			break;
		
		case 116:
			*uParam0 = 130;
			break;
		
		case 117:
			*uParam0 = 131;
			break;
		
		case 118:
			*uParam0 = 132;
			break;
		
		case 119:
			*uParam0 = 133;
			break;
		
		case 120:
			*uParam0 = 134;
			break;
		
		case 121:
			*uParam0 = 135;
			break;
		
		case 122:
			*uParam0 = 136;
			break;
		
		case 123:
			*uParam0 = 137;
			break;
		
		case 124:
			*uParam0 = 138;
			break;
		
		case 125:
			*uParam0 = 139;
			break;
		
		case 126:
			*uParam0 = 140;
			break;
		
		case 127:
			*uParam0 = 141;
			break;
		
		case 128:
			*uParam0 = 142;
			break;
		
		case 129:
			*uParam0 = 143;
			break;
		
		case 130:
			*uParam0 = 144;
			break;
		
		case 131:
			*uParam0 = 145;
			break;
		
		case 132:
			*uParam0 = 146;
			break;
		
		case 133:
			*uParam0 = 147;
			break;
		
		case 134:
			*uParam0 = 148;
			break;
		
		case 135:
			*uParam0 = 149;
			break;
		
		case 136:
			*uParam0 = 150;
			break;
		
		case 137:
			*uParam0 = 151;
			break;
		
		case 138:
			*uParam0 = 152;
			break;
		
		case 139:
			*uParam0 = 153;
			break;
		
		case 140:
			*uParam0 = 154;
			break;
		
		case 141:
			*uParam0 = 155;
			break;
		
		case 142:
			*uParam0 = 156;
			break;
		
		case 143:
			*uParam0 = 157;
			break;
		
		case 144:
			*uParam0 = 158;
			break;
		
		case 145:
			*uParam0 = 159;
			break;
		
		case 146:
			*uParam0 = 160;
			break;
		
		case 147:
			*uParam0 = 161;
			break;
		
		case 148:
			*uParam0 = 162;
			break;
		
		case 149:
			*uParam0 = 163;
			break;
		
		case 150:
			*uParam0 = 164;
			break;
		
		case 151:
			*uParam0 = 165;
			break;
		
		case 152:
			*uParam0 = 166;
			break;
		
		case 153:
			*uParam0 = 167;
			break;
		
		case 154:
			*uParam0 = 168;
			break;
		
		case 155:
			*uParam0 = 169;
			break;
		
		case 156:
			*uParam0 = 170;
			break;
		
		case 157:
			*uParam0 = 171;
			break;
		
		case 158:
			*uParam0 = 172;
			break;
		
		case 159:
			*uParam0 = 173;
			break;
		
		case 160:
			*uParam0 = 174;
			break;
		
		case 161:
			*uParam0 = 175;
			break;
		
		case 162:
			*uParam0 = 176;
			break;
		
		case 163:
			*uParam0 = 177;
			break;
		
		case 164:
			*uParam0 = 178;
			break;
		
		case 165:
			*uParam0 = 179;
			break;
		
		case 166:
			*uParam0 = 180;
			break;
		
		case 167:
			*uParam0 = 181;
			break;
		
		case 168:
			*uParam0 = 182;
			break;
		
		case 169:
			*uParam0 = 183;
			break;
		
		case 170:
			*uParam0 = 184;
			break;
		
		case 171:
			*uParam0 = 185;
			break;
		
		case 172:
			*uParam0 = 186;
			break;
		
		case 173:
			*uParam0 = 187;
			break;
		
		case 174:
			*uParam0 = 188;
			break;
		
		case 175:
			*uParam0 = 189;
			break;
		
		case 176:
			*uParam0 = 190;
			break;
		
		case 177:
			*uParam0 = 191;
			break;
		
		case 178:
			*uParam0 = 192;
			break;
		
		case 179:
			*uParam0 = 193;
			break;
		
		case 180:
			*uParam0 = 194;
			break;
		
		case 181:
			*uParam0 = 195;
			break;
		
		case 182:
			*uParam0 = 196;
			break;
		
		case 183:
			*uParam0 = 197;
			break;
		
		case 184:
			*uParam0 = 198;
			break;
		
		case 185:
			*uParam0 = 199;
			break;
		
		case 186:
			*uParam0 = 200;
			break;
		
		case 187:
			*uParam0 = 201;
			break;
		
		case 188:
			*uParam0 = 202;
			break;
		
		case 189:
			*uParam0 = 203;
			break;
		
		case 190:
			*uParam0 = 204;
			break;
		
		case 191:
			*uParam0 = 205;
			break;
		
		case 192:
			*uParam0 = 206;
			break;
		
		case 193:
			*uParam0 = 207;
			break;
		
		case 194:
			*uParam0 = 208;
			break;
		
		case 195:
			*uParam0 = 209;
			break;
		
		case 196:
			*uParam0 = 210;
			break;
		
		case 197:
			*uParam0 = 211;
			break;
		
		case 198:
			*uParam0 = 212;
			break;
		
		case 199:
			*uParam0 = 213;
			break;
		
		case 200:
			*uParam0 = 214;
			break;
	}
	switch (iParam2)
	{
		case 201:
			*uParam0 = 215;
			break;
		
		case 202:
			*uParam0 = 216;
			break;
		
		case 203:
			*uParam0 = 217;
			break;
		
		case 204:
			*uParam0 = 218;
			break;
		
		case 205:
			*uParam0 = 219;
			break;
		
		case 206:
			*uParam0 = 220;
			break;
		
		case 207:
			*uParam0 = 221;
			break;
		
		case 208:
			*uParam0 = 222;
			break;
		
		case 209:
			*uParam0 = 223;
			break;
		
		case 210:
			*uParam0 = 224;
			break;
		
		case 211:
			*uParam0 = 225;
			break;
		
		case 212:
			*uParam0 = 226;
			break;
		
		case 213:
			*uParam0 = 227;
			break;
		
		case 214:
			*uParam0 = 228;
			break;
		
		case 215:
			*uParam0 = 229;
			break;
		
		case 216:
			*uParam0 = 230;
			break;
		
		case 217:
			*uParam0 = 231;
			break;
		
		case 218:
			*uParam0 = 232;
			break;
		
		case 219:
			*uParam0 = 233;
			break;
		
		case 220:
			*uParam0 = 234;
			break;
		
		case 221:
			*uParam0 = 235;
			break;
		
		case 222:
			*uParam0 = 236;
			break;
		
		case 223:
			*uParam0 = 237;
			break;
		
		case 224:
			*uParam0 = 238;
			break;
		
		case 225:
			*uParam0 = 239;
			break;
		
		case 226:
			*uParam0 = 240;
			break;
		
		case 227:
			*uParam0 = 241;
			break;
		
		case 228:
			*uParam0 = 242;
			break;
		
		case 229:
			*uParam0 = 243;
			break;
		
		case 230:
			*uParam0 = 244;
			break;
		
		case 231:
			*uParam0 = 245;
			break;
		
		case 232:
			*uParam0 = 246;
			break;
		
		case 233:
			*uParam0 = 247;
			break;
		
		case 234:
			*uParam0 = 248;
			break;
		
		case 235:
			*uParam0 = 249;
			break;
		
		case 236:
			*uParam0 = 250;
			break;
		
		case 237:
			*uParam0 = 251;
			break;
		
		case 238:
			*uParam0 = 252;
			break;
		
		case 239:
			*uParam0 = 253;
			break;
		
		case 240:
			*uParam0 = 254;
			break;
		
		case 241:
			*uParam0 = 255;
			break;
		
		case 242:
			*uParam0 = 256;
			break;
		
		case 243:
			*uParam0 = 257;
			break;
		
		case 244:
			*uParam0 = 258;
			break;
		
		case 245:
			*uParam0 = 259;
			break;
		
		case 246:
			*uParam0 = 260;
			break;
		
		case 247:
			*uParam0 = 261;
			break;
		
		case 248:
			*uParam0 = 262;
			break;
		
		case 249:
			*uParam0 = 263;
			break;
		
		case 250:
			*uParam0 = 264;
			break;
		
		case 255:
			*uParam0 = 265;
			break;
		
		case 260:
			*uParam0 = 266;
			break;
		
		case 265:
			*uParam0 = 267;
			break;
		
		case 270:
			*uParam0 = 268;
			break;
		
		case 275:
			*uParam0 = 269;
			break;
		
		case 280:
			*uParam0 = 270;
			break;
		
		case 285:
			*uParam0 = 271;
			break;
		
		case 290:
			*uParam0 = 272;
			break;
		
		case 295:
			*uParam0 = 273;
			break;
		
		case 300:
			*uParam0 = 274;
			break;
	}
	switch (iParam2)
	{
		case 305:
			*uParam0 = 275;
			break;
		
		case 310:
			*uParam0 = 276;
			break;
		
		case 315:
			*uParam0 = 277;
			break;
		
		case 320:
			*uParam0 = 278;
			break;
		
		case 325:
			*uParam0 = 279;
			break;
		
		case 330:
			*uParam0 = 280;
			break;
		
		case 335:
			*uParam0 = 281;
			break;
		
		case 340:
			*uParam0 = 282;
			break;
		
		case 345:
			*uParam0 = 283;
			break;
		
		case 350:
			*uParam0 = 284;
			break;
		
		case 355:
			*uParam0 = 285;
			break;
		
		case 360:
			*uParam0 = 286;
			break;
		
		case 365:
			*uParam0 = 287;
			break;
		
		case 370:
			*uParam0 = 288;
			break;
		
		case 375:
			*uParam0 = 289;
			break;
		
		case 380:
			*uParam0 = 290;
			break;
		
		case 385:
			*uParam0 = 291;
			break;
		
		case 390:
			*uParam0 = 292;
			break;
		
		case 395:
			*uParam0 = 293;
			break;
		
		case 400:
			*uParam0 = 294;
			break;
		
		case 405:
			*uParam0 = 295;
			break;
		
		case 410:
			*uParam0 = 296;
			break;
		
		case 415:
			*uParam0 = 297;
			break;
		
		case 420:
			*uParam0 = 298;
			break;
		
		case 425:
			*uParam0 = 299;
			break;
		
		case 430:
			*uParam0 = 300;
			break;
		
		case 435:
			*uParam0 = 301;
			break;
		
		case 440:
			*uParam0 = 302;
			break;
		
		case 445:
			*uParam0 = 303;
			break;
		
		case 450:
			*uParam0 = 304;
			break;
		
		case 455:
			*uParam0 = 305;
			break;
		
		case 460:
			*uParam0 = 306;
			break;
		
		case 465:
			*uParam0 = 307;
			break;
		
		case 470:
			*uParam0 = 308;
			break;
		
		case 475:
			*uParam0 = 309;
			break;
		
		case 480:
			*uParam0 = 310;
			break;
		
		case 485:
			*uParam0 = 311;
			break;
		
		case 490:
			*uParam0 = 312;
			break;
		
		case 495:
			*uParam0 = 313;
			break;
		
		case 500:
			*uParam0 = 314;
			break;
	}
	switch (iParam2)
	{
		case 505:
			*uParam0 = 315;
			break;
		
		case 510:
			*uParam0 = 316;
			break;
		
		case 515:
			*uParam0 = 317;
			break;
		
		case 520:
			*uParam0 = 318;
			break;
		
		case 525:
			*uParam0 = 319;
			break;
		
		case 530:
			*uParam0 = 320;
			break;
		
		case 535:
			*uParam0 = 321;
			break;
		
		case 540:
			*uParam0 = 322;
			break;
		
		case 545:
			*uParam0 = 323;
			break;
		
		case 550:
			*uParam0 = 324;
			break;
		
		case 555:
			*uParam0 = 325;
			break;
		
		case 560:
			*uParam0 = 326;
			break;
		
		case 565:
			*uParam0 = 327;
			break;
		
		case 570:
			*uParam0 = 328;
			break;
		
		case 575:
			*uParam0 = 329;
			break;
		
		case 580:
			*uParam0 = 330;
			break;
		
		case 585:
			*uParam0 = 331;
			break;
		
		case 590:
			*uParam0 = 332;
			break;
		
		case 595:
			*uParam0 = 333;
			break;
		
		case 600:
			*uParam0 = 334;
			break;
		
		case 605:
			*uParam0 = 335;
			break;
		
		case 610:
			*uParam0 = 336;
			break;
		
		case 615:
			*uParam0 = 337;
			break;
		
		case 620:
			*uParam0 = 338;
			break;
		
		case 625:
			*uParam0 = 339;
			break;
		
		case 630:
			*uParam0 = 340;
			break;
		
		case 635:
			*uParam0 = 341;
			break;
		
		case 640:
			*uParam0 = 342;
			break;
		
		case 645:
			*uParam0 = 343;
			break;
		
		case 650:
			*uParam0 = 344;
			break;
		
		case 655:
			*uParam0 = 345;
			break;
		
		case 660:
			*uParam0 = 346;
			break;
		
		case 665:
			*uParam0 = 347;
			break;
		
		case 670:
			*uParam0 = 348;
			break;
		
		case 675:
			*uParam0 = 349;
			break;
		
		case 680:
			*uParam0 = 350;
			break;
		
		case 685:
			*uParam0 = 351;
			break;
		
		case 690:
			*uParam0 = 352;
			break;
		
		case 695:
			*uParam0 = 353;
			break;
		
		case 700:
			*uParam0 = 354;
			break;
		
		case 705:
			*uParam0 = 355;
			break;
		
		case 710:
			*uParam0 = 356;
			break;
		
		case 715:
			*uParam0 = 357;
			break;
		
		case 720:
			*uParam0 = 358;
			break;
		
		case 725:
			*uParam0 = 359;
			break;
		
		case 730:
			*uParam0 = 360;
			break;
		
		case 735:
			*uParam0 = 361;
			break;
		
		case 740:
			*uParam0 = 362;
			break;
		
		case 745:
			*uParam0 = 363;
			break;
		
		case 750:
			*uParam0 = 364;
			break;
		
		case 755:
			*uParam0 = 365;
			break;
		
		case 760:
			*uParam0 = 366;
			break;
		
		case 765:
			*uParam0 = 367;
			break;
		
		case 770:
			*uParam0 = 368;
			break;
		
		case 775:
			*uParam0 = 369;
			break;
		
		case 780:
			*uParam0 = 370;
			break;
		
		case 785:
			*uParam0 = 371;
			break;
		
		case 790:
			*uParam0 = 372;
			break;
		
		case 795:
			*uParam0 = 373;
			break;
		
		case 800:
			*uParam0 = 374;
			break;
		
		case 805:
			*uParam0 = 375;
			break;
		
		case 810:
			*uParam0 = 376;
			break;
		
		case 815:
			*uParam0 = 377;
			break;
		
		case 820:
			*uParam0 = 378;
			break;
		
		case 825:
			*uParam0 = 379;
			break;
		
		case 830:
			*uParam0 = 380;
			break;
		
		case 835:
			*uParam0 = 381;
			break;
		
		case 840:
			*uParam0 = 382;
			break;
		
		case 845:
			*uParam0 = 383;
			break;
		
		case 850:
			*uParam0 = 384;
			break;
		
		case 855:
			*uParam0 = 385;
			break;
		
		case 860:
			*uParam0 = 386;
			break;
		
		case 865:
			*uParam0 = 387;
			break;
		
		case 870:
			*uParam0 = 388;
			break;
		
		case 875:
			*uParam0 = 389;
			break;
		
		case 880:
			*uParam0 = 390;
			break;
		
		case 885:
			*uParam0 = 391;
			break;
		
		case 890:
			*uParam0 = 392;
			break;
		
		case 895:
			*uParam0 = 393;
			break;
		
		case 900:
			*uParam0 = 394;
			break;
		
		case 905:
			*uParam0 = 395;
			break;
		
		case 910:
			*uParam0 = 396;
			break;
		
		case 915:
			*uParam0 = 397;
			break;
		
		case 920:
			*uParam0 = 398;
			break;
		
		case 925:
			*uParam0 = 399;
			break;
		
		case 930:
			*uParam0 = 400;
			break;
		
		case 935:
			*uParam0 = 401;
			break;
		
		case 940:
			*uParam0 = 402;
			break;
		
		case 945:
			*uParam0 = 403;
			break;
		
		case 950:
			*uParam0 = 404;
			break;
		
		case 955:
			*uParam0 = 405;
			break;
		
		case 960:
			*uParam0 = 406;
			break;
		
		case 965:
			*uParam0 = 407;
			break;
		
		case 970:
			*uParam0 = 408;
			break;
		
		case 975:
			*uParam0 = 409;
			break;
		
		case 980:
			*uParam0 = 410;
			break;
		
		case 985:
			*uParam0 = 411;
			break;
		
		case 990:
			*uParam0 = 412;
			break;
		
		case 995:
			*uParam0 = 413;
			break;
		
		case 1000:
			*uParam0 = 414;
			*uParam1 = 415;
			break;
	}
}

void func_632(int iParam0, int iParam1, int iParam2)//Position - 0x2B7F7
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_183(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x2B81B
{
	struct<9> Var0;
	
	Var0.f_0 = func_640(func_47());
	Var0.f_1 = func_639(func_47());
	Var0.f_2 = func_635(iParam3);
	Var0.f_3 = func_634(iParam3);
	Var0.f_4 = iParam0;
	Var0.f_5 = uParam4;
	Var0.f_7 = iParam1;
	Var0.f_8 = iParam2;
	switch (iParam3)
	{
		case 24:
			Var0.f_6 = 7;
			break;
		
		case 25:
			Var0.f_6 = 14;
			break;
		
		case 26:
			Var0.f_6 = 30;
			break;
		
		default:
			Var0.f_6 = -1;
			break;
	}
	STATS::_PLAYSTATS_CARCLUB_POINTS(&Var0);
}

int func_634(int iParam0)//Position - 0x2B8A6
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1266014249;
			break;
		
		case 1:
			iVar0 = 2091706301;
			break;
		
		case 2:
			iVar0 = -2039125155;
			break;
		
		case 3:
			iVar0 = 1291931399;
			break;
		
		case 4:
			iVar0 = 133342785;
			break;
		
		case 5:
			iVar0 = 2095721718;
			break;
		
		case 6:
			iVar0 = 754095229;
			break;
		
		case 7:
			iVar0 = -1833207774;
			break;
		
		case 8:
			iVar0 = -1266395441;
			break;
		
		case 9:
			iVar0 = 822911410;
			break;
		
		case 10:
			iVar0 = 1933323559;
			break;
		
		case 11:
			iVar0 = -1572440453;
			break;
		
		case 12:
			iVar0 = 144494192;
			break;
		
		case 13:
			iVar0 = 285462835;
			break;
		
		case 14:
			iVar0 = 1575988716;
			break;
		
		case 15:
			iVar0 = 1333235958;
			break;
		
		case 16:
			iVar0 = -2007722693;
			break;
		
		case 17:
			iVar0 = -657463068;
			break;
		
		case 18:
			iVar0 = -2033414814;
			break;
		
		case 19:
			iVar0 = 663759342;
			break;
		
		case 20:
			iVar0 = 452601691;
			break;
		
		case 21:
			iVar0 = -1908829608;
			break;
		
		case 22:
			iVar0 = -663198868;
			break;
		
		case 23:
			iVar0 = 846436668;
			break;
		
		case 24:
			iVar0 = -1348286410;
			break;
		
		case 25:
			iVar0 = 865206748;
			break;
		
		case 26:
			iVar0 = 353183058;
			break;
		
		case 27:
			iVar0 = 2126913071;
			break;
		
		case 28:
			iVar0 = -1887187680;
			break;
		
		case 29:
			iVar0 = -1625256047;
			break;
		
		case 30:
			iVar0 = 2016614022;
			break;
		
		case 31:
			iVar0 = 304806486;
			break;
		
		case 32:
			iVar0 = -1728187464;
			break;
		
		case 33:
			iVar0 = -767003637;
			break;
		
		case 34:
			iVar0 = -1220031650;
			break;
		
		case 35:
			iVar0 = 1335582571;
			break;
	}
	return iVar0;
}

int func_635(int iParam0)//Position - 0x2BAFA
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			iVar0 = func_636();
			break;
	}
	return iVar0;
}

int func_636()//Position - 0x2BB7D
{
	if (func_638() == -1 || func_637() == -1)
	{
		return -1;
	}
	return (func_638() + func_637());
}

int func_637()//Position - 0x2BBA7
{
	if (Global_1943929.f_3 != 0)
	{
		return Global_1943929.f_3;
	}
	return -1;
}

int func_638()//Position - 0x2BBC3
{
	if (Global_1943929.f_2 != 0)
	{
		return Global_1943929.f_2;
	}
	return -1;
}

int func_639(bool bParam0)//Position - 0x2BBDF
{
	if (bParam0 == func_46())
	{
		return -1;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_8[1];
}

int func_640(bool bParam0)//Position - 0x2BC04
{
	if (bParam0 == func_46())
	{
		return -1;
	}
	return Global_1892703[bParam0 /*599*/].f_10.f_8[0];
}

void func_641(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2BC29
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_183(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_642(int iParam0)//Position - 0x2BC59
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_644(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam0) - SYSTEM::TO_FLOAT(iVar0));
		iVar2 = SYSTEM::FLOOR((fVar1 / SYSTEM::TO_FLOAT(Global_262145.f_31077)));
		return (199 + iVar2);
	}
	fVar3 = (SYSTEM::TO_FLOAT(Global_262145.f_31076) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return SYSTEM::FLOOR(func_643(-fVar5, -fVar6, fVar7, 1));
}

float func_643(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x2BCFF
{
	if (bParam3)
	{
		return ((-fParam1 - SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_644(int iParam0)//Position - 0x2BD43
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (SYSTEM::TO_FLOAT(Global_262145.f_31076) / 2f);
	return SYSTEM::ROUND((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

int func_645(bool bParam0)//Position - 0x2BD84
{
	if (bParam0 != func_46())
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return func_182(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_646()//Position - 0x2BDC8
{
	return (func_647(1001) - 1);
}

int func_647(int iParam0)//Position - 0x2BDD9
{
	if (iParam0 <= 1)
	{
		return 0;
	}
	else if (iParam0 >= 200)
	{
		return (((iParam0 - 199) * Global_262145.f_31077) + func_644(199));
	}
	return func_644(iParam0);
}

int func_648()//Position - 0x2BE12
{
	return func_182(9834, -1, 0);
}

void func_649(int iParam0, bool bParam1, int iParam2)//Position - 0x2BE23
{
	if (iParam2 == -1)
	{
		iParam2 = func_72();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

bool func_650(int iParam0, int iParam1)//Position - 0x2BE41
{
	if (iParam1 == -1)
	{
		iParam1 = func_72();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_651(int iParam0, int iParam1, int iParam2)//Position - 0x2BE5D
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31517) * Global_262145.f_31616));
			break;
		
		case 1:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31528) * Global_262145.f_31617));
			break;
		
		case 2:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31530) * Global_262145.f_31618));
			break;
		
		case 3:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31549) * Global_262145.f_31619));
			break;
		
		case 4:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31551) * Global_262145.f_31620));
			break;
		
		case 5:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31547) * Global_262145.f_31621));
			break;
		
		case 6:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31532) * Global_262145.f_31622));
			break;
		
		case 7:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31543) * Global_262145.f_31623));
			break;
		
		case 8:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31556) * Global_262145.f_31624));
			break;
		
		case 9:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31555) * Global_262145.f_31625));
			break;
		
		case 10:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31518) * Global_262145.f_31626));
			break;
		
		case 11:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31529) * Global_262145.f_31627));
			break;
		
		case 12:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31531) * Global_262145.f_31628));
			break;
		
		case 13:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31550) * Global_262145.f_31629));
			break;
		
		case 14:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31553) * Global_262145.f_31630));
			break;
		
		case 15:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31552) * Global_262145.f_31631));
			break;
		
		case 16:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31548) * Global_262145.f_31632));
			break;
		
		case 17:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31533) * Global_262145.f_31633));
			break;
		
		case 18:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31544) * Global_262145.f_31634));
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31519) * Global_262145.f_31635));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31523) * Global_262145.f_31635));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31526) * Global_262145.f_31635));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31520) * Global_262145.f_31635));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31524) * Global_262145.f_31635));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31527) * Global_262145.f_31635));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31521) * Global_262145.f_31635));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31525) * Global_262145.f_31635));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31522) * Global_262145.f_31635));
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31562) * Global_262145.f_31636));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31570) * Global_262145.f_31636));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31574) * Global_262145.f_31636));
					}
					break;
				
				case 2:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31563) * Global_262145.f_31636));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31571) * Global_262145.f_31636));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31575) * Global_262145.f_31636));
					}
					break;
				
				case 3:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31564) * Global_262145.f_31636));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31572) * Global_262145.f_31636));
					}
					break;
				
				case 4:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31565) * Global_262145.f_31636));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31573) * Global_262145.f_31636));
					}
					break;
				
				case 5:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31566) * Global_262145.f_31636));
					}
					break;
				
				case 6:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31567) * Global_262145.f_31636));
					}
					break;
				
				case 7:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31568) * Global_262145.f_31636));
					}
					break;
				
				case 8:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31569) * Global_262145.f_31636));
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31576) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31592) * Global_262145.f_31637));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31600) * Global_262145.f_31637));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31604) * Global_262145.f_31637));
					}
					break;
				
				case 2:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31577) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31593) * Global_262145.f_31637));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31601) * Global_262145.f_31637));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31605) * Global_262145.f_31637));
					}
					break;
				
				case 3:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31578) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31594) * Global_262145.f_31637));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31602) * Global_262145.f_31637));
					}
					break;
				
				case 4:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31579) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31595) * Global_262145.f_31637));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31603) * Global_262145.f_31637));
					}
					break;
				
				case 5:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31580) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31596) * Global_262145.f_31637));
					}
					break;
				
				case 6:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31581) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31597) * Global_262145.f_31637));
					}
					break;
				
				case 7:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31582) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31598) * Global_262145.f_31637));
					}
					break;
				
				case 8:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31583) * Global_262145.f_31637));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31599) * Global_262145.f_31637));
					}
					break;
				
				case 9:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31584) * Global_262145.f_31637));
					}
					break;
				
				case 10:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31585) * Global_262145.f_31637));
					}
					break;
				
				case 11:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31586) * Global_262145.f_31637));
					}
					break;
				
				case 12:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31587) * Global_262145.f_31637));
					}
					break;
				
				case 13:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31588) * Global_262145.f_31637));
					}
					break;
				
				case 14:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31589) * Global_262145.f_31637));
					}
					break;
				
				case 15:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31590) * Global_262145.f_31637));
					}
					break;
				
				case 16:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31591) * Global_262145.f_31637));
					}
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31534) * Global_262145.f_31638));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31538) * Global_262145.f_31638));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31541) * Global_262145.f_31638));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31535) * Global_262145.f_31638));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31539) * Global_262145.f_31638));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31542) * Global_262145.f_31638));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31536) * Global_262145.f_31638));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31540) * Global_262145.f_31638));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31537) * Global_262145.f_31638));
					}
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 1:
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31545) * Global_262145.f_31639));
					break;
				
				case 2:
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31546) * Global_262145.f_31639));
					break;
			}
			break;
		
		case 24:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31558) * Global_262145.f_31640));
			break;
		
		case 25:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31559) * Global_262145.f_31640));
			break;
		
		case 26:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31560) * Global_262145.f_31640));
			break;
		
		case 27:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31557) * Global_262145.f_31641));
			break;
		
		case 28:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31554) * Global_262145.f_31642));
			break;
		
		case 29:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31652) * Global_262145.f_31654));
			break;
		
		case 30:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31653) * Global_262145.f_31655));
			break;
		
		case 31:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31561) * Global_262145.f_31643));
			break;
		
		case 32:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31665) * Global_262145.f_31669));
			break;
		
		case 33:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31666) * Global_262145.f_31670));
			break;
		
		case 34:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31667) * Global_262145.f_31671));
			break;
		
		case 35:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31668) * Global_262145.f_31672));
			break;
	}
	return iVar0;
}

bool func_652(int iParam0)//Position - 0x2CCEB
{
	return (iParam0 > -1 && iParam0 < 36);
}

void func_653()//Position - 0x2CD01
{
	int iVar0;
	
	iVar0 = func_654(112, -1);
	iVar0++;
	func_632(112, iVar0, -1);
}

int func_654(int iParam0, int iParam1)//Position - 0x2CD21
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_183(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_655()//Position - 0x2CD4D
{
	MISC::SET_BIT(&(Global_1976948.f_14), 20);
	if (iLocal_1851 == 0)
	{
		if (Local_1404.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 0;
		}
		else if (Local_1404.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 1;
		}
		else
		{
			Global_1976948.f_18 = 2;
		}
	}
	else if (iLocal_1851 > 0 && func_656())
	{
		if (Local_1404.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 3;
		}
		else if (Local_1404.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 4;
		}
		else
		{
			Global_1976948.f_18 = 5;
		}
	}
	else if (iLocal_1851 > 0 && !func_656())
	{
		if (Local_1404.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 6;
		}
		else if (Local_1404.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 7;
		}
		else
		{
			Global_1976948.f_18 = 8;
		}
	}
	if (Global_1976948.f_18 != -1)
	{
		Global_1976948.f_17 = 1;
	}
}

int func_656()//Position - 0x2CE36
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = func_547();
	iVar1 = (iVar0 - func_657());
	fVar2 = ((IntToFloat(iVar1) * 100f) / IntToFloat(iVar0));
	if (fVar2 > 80f && fVar2 <= 100f)
	{
		return 1;
	}
	return 0;
}

int func_657()//Position - 0x2CE7C
{
	int iVar0;
	
	iVar0 = (func_660() - func_658(1));
	if (iVar0 > func_660())
	{
		return func_660();
	}
	return iVar0;
}

int func_658(bool bParam0)//Position - 0x2CEA2
{
	if (bParam0)
	{
		return (iLocal_1336 - func_659());
	}
	return iLocal_1336;
}

int func_659()//Position - 0x2CEBD
{
	if (Local_369.f_515.f_4 != 0)
	{
		Call_Loc(Local_369.f_515.f_4);
		return StackVal;
	}
	return 0;
}

int func_660()//Position - 0x2CEDE
{
	if (Local_369.f_515.f_3 != 0)
	{
		Call_Loc(Local_369.f_515.f_3);
		return StackVal;
	}
	return 0;
}

void func_661()//Position - 0x2CEFF
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !func_53(bLocal_1341, 0))
	{
		Local_1404.f_124.f_4 = func_663(func_550());
	}
	Global_1973252.f_1 = func_662();
	Global_1973252 = func_662();
	Global_1973252.f_2 = 3;
	Global_1973252.f_7[0] = func_547();
	Global_1973252.f_7[1] = Local_1404.f_124.f_4;
	Global_1973252.f_11 = -func_657();
	Global_1973252.f_21[0 /*11*/].f_9 = Local_1404.f_124.f_3;
	Global_1973252.f_5 = func_550();
}

int func_662()//Position - 0x2CF88
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_209.f_19)
	{
		if (!func_439(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_663(int iParam0)//Position - 0x2CFB5
{
	switch (func_549(iParam0))
	{
		case 1:
			return Global_262145.f_31117;
		
		case 2:
			return Global_262145.f_31118;
		
		case 3:
			return Global_262145.f_31119;
		
		default:
	}
	return 0;
}

int func_664(int iParam0)//Position - 0x2CFF9
{
	if (iParam0 == 0)
	{
		switch (func_666())
		{
			case 0:
				switch (func_665())
				{
					case 0:
						return 773;
					
					case 1:
						return 774;
					
					case 2:
						return 775;
					
					case 3:
						return 776;
					
					case 4:
						return 777;
					
					case 5:
						return 778;
					
					case 6:
						return 779;
					
					case 7:
						return 780;
					
					default:
				}
				break;
			
			case 1:
				switch (func_665())
				{
					case 8:
						return 781;
					
					case 9:
						return 782;
					
					case 10:
						return 783;
					
					case 11:
						return 784;
					
					case 12:
						return 785;
					
					case 13:
						return 786;
					
					case 14:
						return 787;
					
					case 15:
						return 788;
					
					default:
				}
				break;
			}
	}
	return 0;
}

int func_665()//Position - 0x2D0F5
{
	return Local_1404.f_124.f_1;
}

int func_666()//Position - 0x2D104
{
	return Local_1404.f_124;
}

int func_667()//Position - 0x2D111
{
	return 1;
}

void func_668()//Position - 0x2D11A
{
	int iVar0;
	struct<3> Var1;
	
	Local_209.f_19 = 1;
	Local_209.f_19.f_5[0 /*13*/].f_10 = 0;
	Local_209.f_19.f_5[0 /*13*/].f_2 = joaat("prop_drug_package");
	iVar0 = 0;
	while (true)
	{
		if (func_53(bLocal_1341, 0))
		{
			func_681(func_682(func_47()), iVar0, &(Local_209.f_19.f_5[0 /*13*/].f_3), &(Local_209.f_19.f_5[0 /*13*/].f_6));
		}
		else
		{
			func_681(func_682(bLocal_1341), iVar0, &(Local_209.f_19.f_5[0 /*13*/].f_3), &(Local_209.f_19.f_5[0 /*13*/].f_6));
		}
		if (!func_67(Local_209.f_19.f_5[0 /*13*/].f_3, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			if (iVar0 < 3)
			{
				iVar0++;
			}
		else
		{
			}
			else
			{
				Jump @213; //curOff = 207
			}
			Local_209.f_67 = 1;
			Local_209.f_67.f_1[0 /*15*/].f_4 = { Local_209.f_19.f_5[0 /*13*/].f_3 };
			Local_209.f_67.f_1[0 /*15*/].f_7 = Local_209.f_19.f_5[0 /*13*/].f_6;
			Local_209.f_67.f_1[0 /*15*/].f_3 = func_550();
			Var1 = { func_670(func_664(0)) };
			Local_209.f_111.f_1[0 /*7*/] = 1;
			Local_209.f_111.f_1[0 /*7*/].f_1 = { func_669(Var1, 55f, 0) };
			Local_209.f_111.f_1[0 /*7*/].f_4 = { func_669(Var1, 55f, 1) };
			Local_209.f_111 = 1;
			Local_209.f_102 = 30;
			Local_209.f_102.f_1 = 2;
		}

Vector3 func_669(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x2D298
{
	if (bParam4)
	{
		return Param0 + Vector(fParam3, fParam3, fParam3);
	}
	return Param0 - Vector(fParam3, fParam3, fParam3);
}

Vector3 func_670(int iParam0)//Position - 0x2D2BE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 747:
			return 2332,839f, 2582,595f, 45,6677f;
		
		case 748:
			return -436,1613f, 6028,733f, 30,3405f;
		
		case 749:
			return -1068,84f, -851,9506f, 3,8671f;
		
		case 750:
			return 1865,898f, 3699,468f, 32,5628f;
		
		case 751:
			return 446,1463f, -1019,909f, 27,5497f;
		
		case 752:
			return -104,1688f, 2796,184f, 52,3266f;
		
		case 753:
			return 934,3446f, -1803,678f, 29,7528f;
		
		case 754:
			return -138,0878f, -1396,641f, 28,8028f;
		
		case 882:
			return -1081,882f, -501,9055f, 35,6193f;
		
		case 756:
			return 934f, -2,6f, 78f;
		
		case 755:
			return -1079,98f, -2867,023f, 12,9505f;
		
		case 758:
			return -154,8892f, -2663,216f, 5,0002f;
		
		case 759:
			return -1615,657f, 5271,33f, -0,4f;
		
		case 760:
			return 1738,386f, 3280,542f, 40,1063f;
		
		case 761:
			return -1148,742f, -3403,921f, 12,945f;
		
		case 762:
			return -1394,095f, -3263,974f, 12,9448f;
		
		case 763:
			return 1376,011f, -4400,693f, 150,6801f;
		
		case 764:
			return -1294,799f, -3539,78f, 0,1343f;
		
		case 757:
			return func_677(0f, 30,6f, -1f);
		
		case 796:
			return 360,084f, -74,7928f, 66,1459f;
		
		case 798:
			return -1031,865f, -410,4693f, 32,2732f;
		
		case 800:
			return -616,354f, -738,2424f, 26,8466f;
		
		case 802:
			return -987,0505f, -765,7468f, 14,7657f;
		
		case 803:
			return 214,4743f, -1,2945f, 73,3064f;
		
		case 804:
			return -1421,36f, -240,4189f, 45,3791f;
		
		case 765:
			return 762,16f, -677,76f, 27,7908f;
		
		case 766:
			return -147,3731f, -1343,693f, 28,8769f;
		
		case 767:
			return -169,0834f, -34,9386f, 51,4423f;
		
		case 768:
			return 235,1787f, -1874,712f, 25,4822f;
		
		case 769:
			return 492,1651f, -894,889f, 24,742f;
		
		case 770:
			return 1170,16f, -2973,49f, 4,902108f;
		
		case 771:
			return 1445,205f, 2327,525f, 72,8152f;
		
		case 772:
			return 1411,023f, 2582,441f, 36,0159f;
		
		case 792:
			return -153,3114f, -2658,146f, 5,001f;
		
		case 793:
			return 194,9886f, 2742,808f, 42,4263f;
		
		case 794:
			return 407,2454f, -983,9472f, 28,2663f;
		
		case 773:
			return -538,8397f, 486,7372f, 102,0298f;
		
		case 774:
			return -994,163f, 789,741f, 171,291f;
		
		case 775:
			return -1948,359f, 201,3107f, 85,0223f;
		
		case 776:
			return 51,8459f, 562,2281f, 179,3021f;
		
		case 777:
			return -3081,445f, 222,5399f, 13,0176f;
		
		case 778:
			return -815,6112f, -1329,625f, 4,0004f;
		
		case 779:
			return -1853,117f, -361,2698f, 48,2661f;
		
		case 780:
			return -3234,458f, 948,7831f, 12,2371f;
		
		case 781:
			return 1716,731f, 4668,851f, 42,1248f;
		
		case 782:
			return -1107,208f, -1049,329f, 1,1504f;
		
		case 783:
			return -1162,099f, -1466,775f, 3,3097f;
		
		case 784:
			return -1808,288f, -631,7379f, 10,0042f;
		
		case 785:
			return 875,6288f, -507,5239f, 56,4763f;
		
		case 786:
			return -1562,304f, -288,0245f, 47,2757f;
		
		case 787:
			return -1018,469f, -2731,378f, 12,6965f;
		
		case 788:
			return -588,9297f, 191,3239f, 70,2865f;
		
		case 789:
			return -176,8f, -608,2f, 31,4f;
		
		case 790:
			return 140,1f, -726f, 32,1f;
		
		case 791:
			return 42,9f, -884,1f, 29,3f;
		
		case 805:
			return 822,5f, -2143,1f, 28,8f;
		
		case 806:
			return -326,2301f, 6093,24f, 30,4581f;
		
		case 807:
			return 1689,736f, 3748,139f, 33,2314f;
		
		case 808:
			return -1105,935f, 2689,951f, 17,8098f;
		
		case 809:
			return -3156,758f, 1084,938f, 19,7042f;
		
		case 810:
			return 2562,93f, 312,499f, 107,4611f;
		
		case 811:
			return 237,9824f, -43,4654f, 68,7109f;
		
		case 812:
			return -1320,494f, -385,9128f, 35,5295f;
		
		case 813:
			return -7,9901f, -1111,536f, 27,5939f;
		
		case 814:
			return 842,1475f, -1012,798f, 26,7662f;
		
		case 815:
			return 299,5675f, -1443,328f, 28,7944f;
		
		case 816:
			return -656,6413f, 309,4868f, 81,926f;
		
		case 817:
			return -454,0086f, -339,7624f, 33,3635f;
		
		case 818:
			return 294,837f, -583,2901f, 42,1691f;
		
		case 819:
			return 1842,217f, 3667,678f, 32,6799f;
		
		case 820:
			return 1176,821f, -1522,911f, 33,6925f;
		
		case 821:
			return -1528,031f, 857,8983f, 180,6069f;
		
		case 822:
			return -1943,879f, 461,6002f, 101,0877f;
		
		case 823:
			return -3021,345f, 738,7341f, 26,2614f;
		
		case 824:
			return 917,0387f, -625,9073f, 57,054f;
		
		case 825:
			return -167,7749f, 972,1962f, 235,5897f;
		
		case 826:
			return -1568,654f, 32,2191f, 58,0992f;
		
		case 879:
			return 1210,5f, 1858,5f, 78,9f;
		
		case 880:
			return -1809,688f, -344,16f, 42,601f;
		
		case 881:
			return 81,2f, 81,9f, 78,6f;
		
		case 827:
			return 298,3121f, -1976,099f, 21,344f;
		
		case 828:
			return 477,766f, -1777,811f, 27,657f;
		
		case 829:
			return -55,397f, -1785,644f, 26,845f;
		
		case 830:
			return 95,686f, -279,773f, 46,295f;
		
		case 831:
			return 318,463f, -199,7699f, 53,0863f;
		
		case 832:
			return -4,663f, 3,022f, 70,11f;
		
		case 833:
			return -965,078f, -1091,969f, 1,15f;
		
		case 834:
			return -1137,003f, -1166,125f, 1,695f;
		
		case 835:
			return -1654,677f, -378,921f, 44,34f;
		
		case 836:
			return -1272,126f, 453,702f, 94,087f;
		
		case 837:
			return 1373,319f, -1522,446f, 56,0794f;
		
		case 838:
			return 1241,974f, -578,409f, 68,433f;
		
		case 839:
			return 465,17f, 2597,816f, 42,273f;
		
		case 840:
			return 1387,851f, 3667,965f, 32,935f;
		
		case 841:
			return 1850,214f, 3915,422f, 31,976f;
		
		case 842:
			return 1684,693f, 4681,491f, 42,0554f;
		
		case 843:
			return -353,508f, 6334,116f, 28,834f;
		
		case 844:
			return 41,624f, 6604,955f, 31,4f;
		
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
			iVar0 = func_676(iParam0);
			return func_673(func_675(iVar0));
			break;
		
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
			return func_671(func_672(iParam0));
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_671(int iParam0)//Position - 0x2DCF0
{
	switch (iParam0)
	{
		case 91:
			return 249,3483f, -1805,22f, 26,1131f;
			break;
		
		case 92:
			return -1462,159f, -923,3718f, 9,0446f;
			break;
		
		case 93:
			return 32,102f, -1025,448f, 28,4631f;
			break;
		
		case 94:
			return 38,5539f, 2784,115f, 56,8781f;
			break;
		
		case 95:
			return -360,8651f, 6073,394f, 30,4974f;
			break;
		
		case 96:
			return 1731,091f, 3720,573f, 33,0542f;
			break;
		
		case 97:
			return 942,3256f, -1452,339f, 30,1209f;
			break;
		
		case 98:
			return 189,2704f, 300,9276f, 104,4934f;
			break;
		
		case 99:
			return -25,0047f, -200,5497f, 51,3551f;
			break;
		
		case 100:
			return 2485,17f, 4080,784f, 36,9306f;
			break;
		
		case 101:
			return -31,0946f, 6413,322f, 30,4904f;
			break;
		
		case 102:
			return -1134,507f, -1576,34f, 3,4102f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_672(int iParam0)//Position - 0x2DE46
{
	switch (iParam0)
	{
		case 867:
			return 91;
		
		case 868:
			return 92;
		
		case 869:
			return 93;
		
		case 870:
			return 94;
		
		case 871:
			return 95;
		
		case 872:
			return 96;
		
		case 873:
			return 97;
		
		case 874:
			return 98;
		
		case 875:
			return 99;
		
		case 876:
			return 100;
		
		case 877:
			return 101;
		
		case 878:
			return 102;
		
		default:
	}
	return -1;
}

Vector3 func_673(int iParam0)//Position - 0x2DEDA
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_674(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 58,3f, -2560,8f, 5,0046f };
			break;
		
		case 2:
			Var0 = { -1082,958f, -1254,855f, 4,4214f };
			break;
		
		case 3:
			Var0 = { 900,0288f, -1029,762f, 33,9714f };
			break;
		
		case 4:
			Var0 = { 247,7398f, -1950,657f, 22,0817f };
			break;
		
		case 5:
			Var0 = { -404,5349f, 189,8157f, 80,518f };
			break;
		
		case 6:
			Var0 = { -1048,123f, -2017,136f, 12,1616f };
			break;
		
		case 7:
			Var0 = { -1267,888f, -818,313f, 16,0992f };
			break;
		
		case 8:
			Var0 = { -879,1935f, -2731,856f, 12,8285f };
			break;
		
		case 9:
			Var0 = { 274,4458f, -3004f, 4,6994f };
			break;
		
		case 10:
			Var0 = { 1566,514f, -2137,776f, 76,6229f };
			break;
		
		case 11:
			Var0 = { -314,3864f, -2721,792f, 5,0003f };
			break;
		
		case 12:
			Var0 = { 497,1263f, -635,2617f, 23,8849f };
			break;
		
		case 13:
			Var0 = { -546,1532f, -1775,258f, 20,6843f };
			break;
		
		case 14:
			Var0 = { -307,6485f, -1364,914f, 30,2957f };
			break;
		
		case 15:
			Var0 = { 366,4851f, 333,3937f, 102,4653f };
			break;
		
		case 16:
			Var0 = { 921,407f, -1556,423f, 29,7756f };
			break;
		
		case 17:
			Var0 = { 746,1452f, -882,8884f, 24,0639f };
			break;
		
		case 18:
			Var0 = { 1042,462f, -2177,798f, 30,4457f };
			break;
		
		case 19:
			Var0 = { 1013,842f, -2514,939f, 27,3049f };
			break;
		
		case 20:
			Var0 = { -272,0028f, 193,3204f, 84,5697f };
			break;
		
		case 21:
			Var0 = { 549,6728f, -1929,794f, 23,8145f };
			break;
		
		case 22:
			Var0 = { 126,5327f, -2200,172f, 5,0333f };
			break;
	}
	return Var0;
}

int func_674(int iParam0)//Position - 0x2E16D
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_675(int iParam0)//Position - 0x2E18C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

int func_676(int iParam0)//Position - 0x2E2C9
{
	switch (iParam0)
	{
		case 882:
			return 145;
			break;
		
		case 757:
			return 147;
			break;
		
		case 756:
			return 146;
			break;
		
		case 765:
			return 149;
			break;
		
		case 766:
			return 150;
			break;
		
		case 767:
			return 151;
			break;
		
		case 768:
			return 152;
			break;
		
		case 769:
			return 153;
			break;
		
		case 795:
			return 155;
			break;
		
		case 797:
			return 156;
			break;
		
		case 799:
			return 157;
			break;
		
		case 801:
			return 158;
			break;
		
		case 796:
			return 155;
			break;
		
		case 798:
			return 156;
			break;
		
		case 800:
			return 157;
			break;
		
		case 802:
			return 158;
			break;
		
		case 845:
			return 0;
			break;
		
		case 846:
			return 1;
			break;
		
		case 847:
			return 2;
			break;
		
		case 848:
			return 3;
			break;
		
		case 849:
			return 4;
			break;
		
		case 850:
			return 5;
			break;
		
		case 851:
			return 6;
			break;
		
		case 852:
			return 7;
			break;
		
		case 853:
			return 8;
			break;
		
		case 854:
			return 9;
			break;
		
		case 855:
			return 10;
			break;
		
		case 856:
			return 11;
			break;
		
		case 857:
			return 12;
			break;
		
		case 858:
			return 13;
			break;
		
		case 859:
			return 14;
			break;
		
		case 860:
			return 15;
			break;
		
		case 861:
			return 16;
			break;
		
		case 862:
			return 17;
			break;
		
		case 863:
			return 18;
			break;
		
		case 864:
			return 19;
			break;
		
		case 865:
			return 20;
			break;
		
		case 866:
			return 21;
			break;
	}
	return -1;
}

Vector3 func_677(struct<3> Param0)//Position - 0x2E4E5
{
	int iVar0;
	int iVar1;
	
	if (func_52(0))
	{
		iVar0 = func_680(func_47());
		if (func_679(iVar0))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Param0);
		}
		else
		{
			return func_678(757, func_47(), 0);
		}
	}
	else
	{
		iVar1 = func_680(PLAYER::PLAYER_ID());
		if (func_679(iVar1))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_678(int iParam0, bool bParam1, bool bParam2)//Position - 0x2E54D
{
	int iVar0;
	int iVar1;
	
	if (bParam1 == func_46())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1952191.f_5505[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1892703[bParam1 /*599*/].f_556.f_16[iVar1 /*6*/];
	}
	return Global_1892703[bParam1 /*599*/].f_556.f_16[iVar1 /*6*/].f_3;
}

int func_679(int iParam0)//Position - 0x2E5CE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_680(bool bParam0)//Position - 0x2E5EF
{
	if (bParam0 != func_46())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1963860[bParam0]))
		{
			return Global_1963860[bParam0];
		}
	}
	return -1;
}

int func_681(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2E61B
{
	switch (iParam0)
	{
		case 149:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 766,5528f, -677,0346f, 27,7239f };
					*uParam3 = 180,0686f;
					break;
				
				case 1:
					*uParam2 = { 766,511f, -683,7249f, 27,6963f };
					*uParam3 = 179,7884f;
					break;
				
				case 2:
					*uParam2 = { 766,5951f, -690,1119f, 27,695f };
					*uParam3 = 179,4445f;
					break;
				
				case 3:
					*uParam2 = { 766,4852f, -695,7795f, 27,6356f };
					*uParam3 = 180,3876f;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -145,7606f, -1346,822f, 28,7008f };
					*uParam3 = 179,2141f;
					break;
				
				case 1:
					*uParam2 = { -142,264f, -1346,831f, 28,7035f };
					*uParam3 = 182,7879f;
					break;
				
				case 2:
					*uParam2 = { -139,0863f, -1346,934f, 28,6597f };
					*uParam3 = 181,6855f;
					break;
				
				case 3:
					*uParam2 = { -151,0585f, -1354,412f, 28,7813f };
					*uParam3 = 270,0883f;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 151:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -163,4841f, -30,7421f, 51,7085f };
					*uParam3 = 158,9757f;
					break;
				
				case 1:
					*uParam2 = { -160,7258f, -31,2863f, 51,8935f };
					*uParam3 = 160,4497f;
					break;
				
				case 2:
					*uParam2 = { -166,1153f, -29,8404f, 51,5246f };
					*uParam3 = 159,2512f;
					break;
				
				case 3:
					*uParam2 = { -168,5638f, -28,4791f, 51,3472f };
					*uParam3 = 158,5516f;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 152:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 238,091f, -1878,523f, 25,2772f };
					*uParam3 = 318,5577f;
					break;
				
				case 1:
					*uParam2 = { 242,4768f, -1873,467f, 25,5075f };
					*uParam3 = 319,0237f;
					break;
				
				case 2:
					*uParam2 = { 246,0482f, -1869,292f, 25,6252f };
					*uParam3 = 319,0708f;
					break;
				
				case 3:
					*uParam2 = { 233,3068f, -1884,145f, 24,9013f };
					*uParam3 = 319,4133f;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 153:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 496,2674f, -895,2114f, 24,5897f };
					*uParam3 = 359,5538f;
					break;
				
				case 1:
					*uParam2 = { 496,239f, -900,9498f, 24,7157f };
					*uParam3 = 359,6566f;
					break;
				
				case 2:
					*uParam2 = { 496,1095f, -907,8199f, 24,8771f };
					*uParam3 = 358,9418f;
					break;
				
				case 3:
					*uParam2 = { 496,2871f, -913,8695f, 25,0668f };
					*uParam3 = 359,6065f;
					break;
				
				default:
					return 0;
					break;
			}
			break;
	}
	return 1;
}

int func_682(bool bParam0)//Position - 0x2E96E
{
	int iVar0;
	
	if (bParam0 != func_46())
	{
		iVar0 = func_684(bParam0);
		if (iVar0 != 0)
		{
			return func_683(iVar0);
		}
	}
	return -1;
}

int func_683(int iParam0)//Position - 0x2E997
{
	switch (iParam0)
	{
		case 1:
			return 149;
		
		case 2:
			return 150;
		
		case 3:
			return 151;
		
		case 4:
			return 152;
		
		case 5:
			return 153;
		
		default:
	}
	return -1;
}

int func_684(bool bParam0)//Position - 0x2E9DE
{
	if (bParam0 != func_46())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_465;
	}
	return 0;
}

void func_685()//Position - 0x2EA02
{
}

int func_686(var uParam0, var uParam1)//Position - 0x2EA0A
{
	Local_1404.f_124 = uParam0;
	Local_1404.f_124.f_1 = uParam1;
	Local_1404.f_124.f_2 = func_687(func_532());
	return 1;
}

int func_687(int iParam0)//Position - 0x2EA32
{
	int iVar0;
	
	if (iParam0 < 0 || iParam0 >= 2)
	{
		iVar0 = 0;
		return iVar0;
	}
	iVar0 = Global_2789412[iParam0 /*106*/].f_66;
	return iVar0;
}

int func_688()//Position - 0x2EA61
{
	return func_689();
}

int func_689()//Position - 0x2EA6D
{
	return Global_2815059.f_5195.f_345;
}

int func_690()//Position - 0x2EA7F
{
	return func_691();
}

int func_691()//Position - 0x2EA8B
{
	return Global_2815059.f_5195.f_344;
}

bool func_692(int iParam0)//Position - 0x2EA9D
{
	return func_4(&uLocal_1357, iParam0);
}

void func_693()//Position - 0x2EAAE
{
	if (Local_369.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_369.f_3.f_2.f_1);
	}
	if (Local_369.f_102.f_6 != 0)
	{
		Call_Loc(Local_369.f_102.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (func_1068())
	{
		return;
	}
	if (!func_1067())
	{
		return;
	}
	if (func_692(46))
	{
		return;
	}
	if (!func_1798())
	{
		return;
	}
	func_873();
	func_869();
	func_733();
	func_697();
	func_694();
}

void func_694()//Position - 0x2EB26
{
	if (!func_692(30))
	{
		if (Local_369.f_91 != 0)
		{
			Call_Loc(Local_369.f_91);
			func_695(StackVal);
		}
		func_508(30);
	}
}

void func_695(int iParam0)//Position - 0x2EB51
{
	if (iParam0 == -1 || iParam0 == 68)
	{
		return;
	}
	func_696(iParam0);
}

void func_696(int iParam0)//Position - 0x2EB74
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_35[iVar0]), bVar1);
}

void func_697()//Position - 0x2EB9D
{
	int iVar0;
	
	if (func_415(iLocal_1345, 0))
	{
		return;
	}
	if (func_488() != 0)
	{
		if (iLocal_112 == -1 && func_692(11))
		{
			if (func_532() != -1)
			{
				Local_1404.f_124.f_3 = func_732(func_532());
			}
			iLocal_1851 = func_657();
			iLocal_112 = (((func_547() + func_663(func_550())) - func_657()) + Local_1404.f_124.f_3);
			if (iLocal_112 < 0)
			{
				iLocal_112 = 0;
			}
		}
		if (iLocal_112 == -1)
		{
			iLocal_112 = 0;
		}
		func_699(iLocal_112, 3, &(Global_1973252.f_68), func_692(11), -1);
		if (Global_1973252.f_68 == 2 || Global_1973252.f_68 == 3)
		{
			func_698(0);
		}
		iVar0 = func_532();
		if (iVar0 < 0 || iVar0 >= 2)
		{
			func_698(0);
		}
	}
}

void func_698(int iParam0)//Position - 0x2EC67
{
	if (func_17(&(Local_1566[iLocal_1344 /*35*/].f_1), iParam0))
	{
	}
}

void func_699(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x2EC82
{
	int iVar0;
	
	iVar0 = func_532();
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (iVar0 < 0 || iVar0 >= 2)
	{
		return;
	}
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	if (!func_259())
	{
		if (iParam0 > 0)
		{
			MONEY::_NETWORK_EARN_FROM_AUTOSHOP_BUSINESS(iParam0, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_687(iVar0))));
		}
		if (bParam3)
		{
			func_723(iVar0);
		}
		func_719(iVar0);
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			STATS::_0x5688585E6D563CD8(10);
		}
		func_716(1490700264, 10, 0);
		*uParam2 = 2;
	}
	else if (iParam0 <= 0 || func_700(iVar0, iParam0, iParam1, uParam2))
	{
		if (*uParam2 == 2 || iParam0 <= 0)
		{
			if (bParam3)
			{
				func_723(iVar0);
			}
			func_719(iVar0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::_0x5688585E6D563CD8(10);
			}
			func_716(1490700264, 10, 0);
			*uParam2 = 2;
		}
		else if (*uParam2 == 3)
		{
			*uParam2 = 3;
		}
	}
}

bool func_700(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2ED7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (*uParam3 != 0 && *uParam3 != 1)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			iVar5 = func_182(func_715(iParam0), -1, 0);
			iVar0 = func_714(iVar5);
			if (iVar0 == 0)
			{
				iVar6 = func_182(func_713(iParam0), -1, 0);
				switch (iVar6)
				{
					case 1:
						iVar0 = joaat("weevil");
						break;
					
					case 2:
						iVar0 = joaat("sentinel");
						break;
					
					case 3:
						iVar0 = joaat("toros");
						break;
					}
			}
			iVar1 = func_712(iParam0);
			iVar2 = func_711(func_549(iVar0), iParam0);
			iVar3 = func_710(iParam0);
			switch (iParam2)
			{
				case 0:
					iVar4 = -1003644442;
					break;
				
				case 1:
					iVar4 = 402112378;
					break;
				
				case 2:
					iVar4 = 1283718111;
					break;
				
				case 3:
					iVar4 = -1336320044;
					break;
			}
			if (iParam2 == 0 || func_707(78225582, -1799524201, iVar2, -788753717, 1, 0, 1, 4, iVar1, 3))
			{
				if (func_707(78225582, 69656641, iVar3, -788753717, iVar5, 0, 1, 4, 0, 3))
				{
					if (func_707(78225582, -739932302, iVar4, -788753717, 1, iParam1, 0, 4, iVar3, 3))
					{
						*uParam3 = 1;
					}
					else
					{
						*uParam3 = 3;
					}
				}
				else
				{
					*uParam3 = 3;
				}
			}
			else
			{
				*uParam3 = 3;
			}
			if (*uParam3 == 1 && func_705())
			{
			}
			else
			{
				*uParam3 = 3;
				func_597(func_704());
			}
			break;
		
		case 1:
			if (func_703(func_704()))
			{
				if (func_702(func_704()) == 2)
				{
					if (iParam1 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_701(func_704()));
						MONEY::_NETWORK_EARN_FROM_AUTOSHOP_BUSINESS(iParam1, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_687(iParam0))));
					}
					*uParam3 = 2;
					func_597(func_704());
				}
				else
				{
					*uParam3 = 3;
					func_597(func_704());
				}
			}
			break;
	}
	return *uParam3 != 1;
}

int func_701(int iParam0)//Position - 0x2EF7B
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_702(int iParam0)//Position - 0x2EFA2
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_703(int iParam0)//Position - 0x2EFCB
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_704()//Position - 0x2EFF6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_701(iVar0) != 2147483647)
		{
			if (func_600(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_705()//Position - 0x2F031
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_704();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_706(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_701(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_603(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

int func_706(int iParam0, int iParam1, int iParam2)//Position - 0x2F191
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_707(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2F779
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_704();
	if (iVar1 == -1)
	{
		if (!func_709(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_708(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_708(int iParam0)//Position - 0x2F89B
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_709(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2F92A
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_602(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_710(int iParam0)//Position - 0x2FA27
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_1_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_711(int iParam0, int iParam1)//Position - 0x2FA6B
{
	char cVar0[64];
	
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(&cVar0, "TS_VEH_0_t0_v0_SELL", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "TS_VEH_1_t0_v0_SELL", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "TS_VEH_2_t0_v0_SELL", 64);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(&cVar0, "TS_VEH_0_t0_v1_SELL", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "TS_VEH_1_t0_v1_SELL", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "TS_VEH_2_t0_v1_SELL", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_712(int iParam0)//Position - 0x2FB13
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSION_TUNER_CLIENT_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSION_TUNER_CLIENT_1_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_713(int iParam0)//Position - 0x2FB57
{
	switch (iParam0)
	{
		case 0:
			return 9859;
		
		case 1:
			return 9860;
		
		default:
	}
	return 13122;
}

int func_714(int iParam0)//Position - 0x2FB81
{
	switch (iParam0)
	{
		case 1:
			return joaat("weevil");
		
		case 2:
			return joaat("brioso2");
		
		case 3:
			return joaat("rhapsody");
		
		case 4:
			return joaat("club");
		
		case 5:
			return joaat("issi3");
		
		case 6:
			return joaat("nebula");
		
		case 7:
			return joaat("dynasty");
		
		case 8:
			return joaat("fagaloa");
		
		case 9:
			return joaat("futo");
		
		case 10:
			return joaat("asbo");
		
		case 11:
			return joaat("sentinel");
		
		case 12:
			return joaat("dominator3");
		
		case 13:
			return joaat("vamos");
		
		case 14:
			return joaat("hermes");
		
		case 15:
			return joaat("coquette3");
		
		case 16:
			return joaat("riata");
		
		case 17:
			return joaat("everon");
		
		case 18:
			return joaat("glendale2");
		
		case 19:
			return joaat("schafter3");
		
		case 20:
			return joaat("warrener");
		
		case 21:
			return joaat("primo2");
		
		case 22:
			return joaat("seminole2");
		
		case 23:
			return joaat("rebla");
		
		case 24:
			return joaat("swinger");
		
		case 25:
			return joaat("flashgt");
		
		case 26:
			return joaat("raiden");
		
		case 27:
			return joaat("surano");
		
		case 28:
			return joaat("penumbra2");
		
		case 29:
			return joaat("vstr");
		
		case 30:
			return joaat("jugular");
		
		case 31:
			return joaat("toros");
		
		case 32:
			return joaat("entity2");
		
		case 33:
			return joaat("tempesta");
		
		case 34:
			return joaat("thrax");
		
		case 35:
			return joaat("sc1");
		
		case 36:
			return joaat("gp1");
		
		case 37:
			return joaat("cheetah2");
		
		case 38:
			return joaat("neo");
		
		case 39:
			return joaat("comet2");
		
		case 40:
			return joaat("paragon");
		
		default:
	}
	return 0;
}

int func_715(int iParam0)//Position - 0x2FDC0
{
	switch (iParam0)
	{
		case 0:
			return 9861;
		
		case 1:
			return 9862;
		
		default:
	}
	return 13122;
}

void func_716(int iParam0, int iParam1, int iParam2)//Position - 0x2FDEA
{
	int iVar0;
	
	if (func_718(iParam1, iParam2))
	{
		iVar0 = func_717();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_717()//Position - 0x2FE17
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_718(int iParam0, var uParam1)//Position - 0x2FE4C
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_719(int iParam0)//Position - 0x2FED2
{
	func_722(0, iParam0);
	func_721(-1);
	func_720(0);
}

void func_720(bool bParam0)//Position - 0x2FEEB
{
	if (!bParam0)
	{
		if (BitTest(Global_103317, 1))
		{
			MISC::CLEAR_BIT(&Global_103317, true);
		}
	}
	else if (!BitTest(Global_103317, 1))
	{
		MISC::SET_BIT(&Global_103317, true);
	}
}

void func_721(int iParam0)//Position - 0x2FF21
{
	if (PLAYER::PLAYER_ID() == func_46())
	{
		return;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_4 != iParam0)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_4 = iParam0;
	}
}

void func_722(int iParam0, int iParam1)//Position - 0x2FF64
{
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	if (Global_2789409[iParam1] != iParam0)
	{
		Global_2789409[iParam1] = iParam0;
	}
}

void func_723(int iParam0)//Position - 0x2FF97
{
	func_641(func_713(iParam0), 0, -1, 1, 0);
	func_641(func_715(iParam0), 0, -1, 1, 0);
	func_727(iParam0);
	func_726(iParam0);
	func_724(iParam0, &(Global_2789412[iParam0 /*106*/]));
}

int func_724(int iParam0, var uParam1)//Position - 0x2FFD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_72();
	if (iParam0 == 0)
	{
		iVar2 = 31565;
	}
	else
	{
		iVar2 = 31620;
	}
	func_586(iVar2, uParam1->f_103, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31566;
	}
	else
	{
		iVar2 = 31621;
	}
	func_586(iVar2, uParam1->f_104, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31567;
	}
	else
	{
		iVar2 = 31622;
	}
	func_586(iVar2, *uParam1, iVar0);
	iVar1 = 0;
	while (iVar1 < 49)
	{
		if (iParam0 == 0)
		{
			iVar2 = (31568 + iVar1);
		}
		else
		{
			iVar2 = (31623 + iVar1);
		}
		func_586(iVar2, uParam1->f_9[iVar1], iVar0);
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (iParam0 == 0)
		{
			iVar2 = (31593 + iVar1);
		}
		else
		{
			iVar2 = (31648 + iVar1);
		}
		func_586(iVar2, uParam1->f_59[iVar1], iVar0);
		iVar1++;
	}
	if (iParam0 == 0)
	{
		iVar2 = 31595;
	}
	else
	{
		iVar2 = 31650;
	}
	func_586(iVar2, uParam1->f_62, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31596;
	}
	else
	{
		iVar2 = 31651;
	}
	func_586(iVar2, uParam1->f_63, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31597;
	}
	else
	{
		iVar2 = 31652;
	}
	func_586(iVar2, uParam1->f_64, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31598;
	}
	else
	{
		iVar2 = 31653;
	}
	func_586(iVar2, uParam1->f_65, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31599;
	}
	else
	{
		iVar2 = 31654;
	}
	func_586(iVar2, uParam1->f_67, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31600;
	}
	else
	{
		iVar2 = 31655;
	}
	func_586(iVar2, uParam1->f_68, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31601;
	}
	else
	{
		iVar2 = 31656;
	}
	func_586(iVar2, uParam1->f_69, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31602;
	}
	else
	{
		iVar2 = 31657;
	}
	func_586(iVar2, uParam1->f_71, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31603;
	}
	else
	{
		iVar2 = 31658;
	}
	func_586(iVar2, uParam1->f_72, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31604;
	}
	else
	{
		iVar2 = 31659;
	}
	func_586(iVar2, uParam1->f_73, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31605;
	}
	else
	{
		iVar2 = 31660;
	}
	func_586(iVar2, uParam1->f_5, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31606;
	}
	else
	{
		iVar2 = 31661;
	}
	func_586(iVar2, uParam1->f_6, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31607;
	}
	else
	{
		iVar2 = 31662;
	}
	func_586(iVar2, uParam1->f_7, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31608;
	}
	else
	{
		iVar2 = 31663;
	}
	func_586(iVar2, uParam1->f_8, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31609;
	}
	else
	{
		iVar2 = 31664;
	}
	func_586(iVar2, uParam1->f_74, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31610;
	}
	else
	{
		iVar2 = 31665;
	}
	func_586(iVar2, uParam1->f_75, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31611;
	}
	else
	{
		iVar2 = 31666;
	}
	func_586(iVar2, uParam1->f_76, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31615;
	}
	else
	{
		iVar2 = 31670;
	}
	func_586(iVar2, uParam1->f_97, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31615;
	}
	else
	{
		iVar2 = 31670;
	}
	func_586(iVar2, uParam1->f_99, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31618;
	}
	else
	{
		iVar2 = 31673;
	}
	func_586(iVar2, uParam1->f_98, iVar0);
	if (iParam0 == 0)
	{
		iVar2 = 31617;
	}
	else
	{
		iVar2 = 31672;
	}
	func_586(iVar2, uParam1->f_102, iVar0);
	if (iParam0 == 0)
	{
		func_641(9849, uParam1->f_105, iVar0, 1, 0);
	}
	else
	{
		func_641(9853, uParam1->f_105, iVar0, 1, 0);
	}
	if (iParam0 == 0)
	{
		func_641(9850, uParam1->f_66, iVar0, 1, 0);
	}
	else
	{
		func_641(9854, uParam1->f_66, iVar0, 1, 0);
	}
	if (iParam0 == 0)
	{
		func_641(9851, uParam1->f_77, iVar0, 1, 0);
	}
	else
	{
		func_641(9855, uParam1->f_77, iVar0, 1, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
	{
		if (iParam0 == 0)
		{
			func_725(9852, &(uParam1->f_1), iVar0);
		}
		else
		{
			func_725(9856, &(uParam1->f_1), iVar0);
		}
	}
	return 1;
}

void func_725(int iParam0, char* sParam1, int iParam2)//Position - 0x303EA
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_183(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

void func_726(int iParam0)//Position - 0x30413
{
	struct<106> Var0;
	
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2789412[iParam0 /*106*/] = { Var0 };
}

void func_727(int iParam0)//Position - 0x30478
{
	int iVar0;
	
	func_586(func_731(iParam0), 0, -1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_730(iParam0, iVar0) != 0)
		{
			func_586(func_730(iParam0, iVar0), 0, -1);
		}
		if (func_729(iParam0, iVar0) != 0)
		{
			func_586(func_729(iParam0, iVar0), 0, -1);
		}
		iVar0++;
	}
	func_586(func_728(iParam0), -1, -1);
}

int func_728(int iParam0)//Position - 0x304E1
{
	switch (iParam0)
	{
		case 0:
			return 31702;
			break;
		
		case 1:
			return 31704;
			break;
	}
	return 0;
}

int func_729(int iParam0, int iParam1)//Position - 0x3050F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 31682;
				
				case 1:
					return 31683;
				
				case 2:
					return 31684;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 31695;
				
				case 1:
					return 31696;
				
				case 2:
					return 31697;
				
				default:
			}
			break;
	}
	return 0;
}

int func_730(int iParam0, int iParam1)//Position - 0x30587
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 31676;
				
				case 1:
					return 31677;
				
				case 2:
					return 31678;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 31689;
				
				case 1:
					return 31690;
				
				case 2:
					return 31691;
				
				default:
			}
			break;
	}
	return 0;
}

int func_731(int iParam0)//Position - 0x305FF
{
	switch (iParam0)
	{
		case 0:
			return 31675;
			break;
		
		case 1:
			return 31688;
			break;
	}
	return 0;
}

int func_732(int iParam0)//Position - 0x3062D
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return 0;
	}
	return Global_2789409[iParam0];
}

void func_733()//Position - 0x30652
{
	if (!func_692(8))
	{
		if (func_867())
		{
			if (func_793(0, 1, 1) && func_788())
			{
				func_734();
				func_508(8);
			}
		}
		else
		{
			func_508(8);
		}
	}
}

void func_734()//Position - 0x30691
{
	if (!func_692(11))
	{
		func_735(89, func_787(), func_786(), func_785(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
}

int func_735(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x306C1
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
	func_784(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_782(&(Var0.f_69), iParam10);
	}
	return func_736(&Var0);
}

int func_736(var uParam0)//Position - 0x30752
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_750(uParam0, uParam0->f_17);
	func_747(uParam0);
	if (func_75())
	{
		func_747(uParam0);
	}
	if (func_746(uParam0->f_1))
	{
		func_739();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (func_738(uParam0->f_69, 8192))
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
				func_739();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_782(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_738(uParam0->f_69, 128))
			{
				if (func_737(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					func_782(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_737(int iParam0)//Position - 0x30937
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

bool func_738(var uParam0, int iParam1)//Position - 0x309BD
{
	return (uParam0 && iParam1) != 0;
}

void func_739()//Position - 0x309CC
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
	func_740();
	if (bVar0)
	{
		Global_78587 = 0;
	}
}

void func_740()//Position - 0x309FF
{
	Global_2703735.f_2724 = 0;
	Global_2703735.f_2724.f_582 = 0;
	func_744(&(Global_2703735.f_2724.f_1));
	Global_2703735.f_2724.f_1.f_1 = 0;
	func_741(&(Global_2703735.f_2724.f_1), 1);
}

void func_741(var uParam0, int iParam1)//Position - 0x30A41
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_743(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_742(0);
}

void func_742(int iParam0)//Position - 0x30AF0
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

int func_743(bool bParam0)//Position - 0x30B04
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_744(var uParam0)//Position - 0x30B2C
{
	func_745(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_745(var uParam0)//Position - 0x30B56
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

int func_746(int iParam0)//Position - 0x30BD5
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_747(var uParam0)//Position - 0x30CED
{
	if (func_749(uParam0->f_1))
	{
		uParam0->f_72 = func_748();
	}
}

int func_748()//Position - 0x30D08
{
	return 21;
}

int func_749(int iParam0)//Position - 0x30D12
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

void func_750(var uParam0, bool bParam1)//Position - 0x30DA4
{
	if (func_749(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_46() || !func_9(bParam1, 0, 1))
	{
		return;
	}
	if (func_737(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_751(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_751(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x30DFB
{
	int iVar0;
	int iVar1;
	
	if (func_321(bParam0) && !bParam4)
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
	if (((func_321(PLAYER::PLAYER_ID()) || (func_781() && func_780())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_779();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_777(iParam1, bParam0, 0);
							}
							else
							{
								return func_763(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_763(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_777(iParam1, bParam0, 0);
				}
				else
				{
					return func_752(0, -1, 0);
				}
			}
			else
			{
				return func_752(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_777(iParam1, bParam0, 0);
		}
		else
		{
			return func_763(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_763(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_752(bool bParam0, int iParam1, bool bParam2)//Position - 0x30FD8
{
	return func_753(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_753(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x30FEE
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_762() || (func_761() && func_759())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_758(iParam2, iVar0);
		}
		else
		{
			return func_758(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_317(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_757(1);
				}
				else
				{
					return func_757(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_754(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_754(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_757(1);
	}
	return func_757(0);
}

int func_754(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x310EF
{
	int iVar0;
	
	iVar0 = func_756(iParam0, iParam1, iParam3);
	if (func_755(Global_4718592.f_116524, 1))
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

int func_755(int iParam0, bool bParam1)//Position - 0x31207
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

int func_756(int iParam0, int iParam1, int iParam2)//Position - 0x31258
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
			if (!func_317(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_757(bool bParam0)//Position - 0x3129F
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_758(int iParam0, int iParam1)//Position - 0x312B6
{
	if (iParam0 == -1)
	{
		iParam0 = func_756(iParam1, iParam0, 4);
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

int func_759()//Position - 0x31304
{
	if (func_760())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_760()//Position - 0x31323
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_761()//Position - 0x31338
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_762()//Position - 0x3137F
{
	if (func_760() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_763(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3139C
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
			if (func_769())
			{
				iVar3 = func_768(bParam0);
				if (!iVar3 == -1)
				{
					return func_766(iVar3);
				}
			}
			if ((func_765(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_317(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_757(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_764(1);
			}
			else
			{
				return func_753(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_757(1);
			}
			else
			{
				return func_753(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_768(bParam0);
	if (!iVar4 == -1)
	{
		return func_766(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_764(bool bParam0)//Position - 0x31533
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_765(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3154A
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

int func_766(int iParam0)//Position - 0x315C2
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_767(iParam0);
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

var func_767(int iParam0)//Position - 0x31685
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_768(bool bParam0)//Position - 0x3169C
{
	if (!bParam0 == func_46())
	{
		if (func_53(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_79(bParam0)];
		}
	}
	return -1;
}

int func_769()//Position - 0x316CE
{
	if ((((((func_390() || func_776()) || func_75()) || func_775()) || func_774()) || func_772()) || func_770())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_770()//Position - 0x31736
{
	return func_771(Global_4718592.f_116524);
}

int func_771(int iParam0)//Position - 0x3174C
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

int func_772()//Position - 0x3177B
{
	return func_773(Global_4718592.f_116524);
}

int func_773(int iParam0)//Position - 0x31791
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

var func_774()//Position - 0x317CB
{
	return Global_2714762.f_24;
}

var func_775()//Position - 0x317D9
{
	return Global_2714762.f_21;
}

var func_776()//Position - 0x317E7
{
	return Global_2714762.f_18;
}

int func_777(int iParam0, bool bParam1, bool bParam2)//Position - 0x317F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_769())
	{
		iVar2 = func_768(iParam1);
		if (!iVar2 == -1)
		{
			return func_766(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_46())
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
			iVar0 = func_753(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_778(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_317(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_764(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_778(int iParam0)//Position - 0x31974
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

var func_779()//Position - 0x31A49
{
	return Global_2621446.f_2;
}

var func_780()//Position - 0x31A57
{
	return BitTest(Global_2621446, 4);
}

var func_781()//Position - 0x31A65
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

void func_782(var uParam0, int iParam1)//Position - 0x31A7F
{
	func_783(uParam0, iParam1);
}

void func_783(var uParam0, var uParam1)//Position - 0x31A8F
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_784(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x31AA0
{
	uParam1->f_17 = func_46();
	uParam1->f_18 = func_46();
	uParam1->f_19 = func_46();
	uParam1->f_20 = func_46();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

char* func_785()//Position - 0x31B20
{
	return "TCD_BM_TITLE";
}

char* func_786()//Position - 0x31B2C
{
	return "TCD_BM_FAIL";
}

char* func_787()//Position - 0x31B38
{
	return func_577();
}

bool func_788()//Position - 0x31B44
{
	return (func_790() || func_789());
}

int func_789()//Position - 0x31B5A
{
	return 0;
}

bool func_790()//Position - 0x31B63
{
	return (func_415(iLocal_1345, 3) || func_791(bLocal_1341));
}

bool func_791(bool bParam0)//Position - 0x31B80
{
	return func_792(bParam0);
}

bool func_792(bool bParam0)//Position - 0x31B8E
{
	return func_230(bParam0, 20);
}

bool func_793(int iParam0, int iParam1, int iParam2)//Position - 0x31B9E
{
	return ((!func_859() && !func_858()) && func_794((iParam0 && func_857()), 1, func_856(), 0));
}

int func_794(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x31BCF
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (func_855(iVar0, 14))
	{
		return 0;
	}
	if (func_854(iVar0, 21))
	{
		return 0;
	}
	if (func_854(iVar0, 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_853(iVar0))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_852(iVar0))
	{
		return 0;
	}
	if (func_851())
	{
		return 0;
	}
	if (func_850())
	{
		return 0;
	}
	if (func_849())
	{
		return 0;
	}
	if (func_848())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_319(iVar0))
	{
		return 0;
	}
	if (!func_846())
	{
		return 0;
	}
	if (func_854(iVar0, 0) || func_854(iVar0, 3))
	{
		return 0;
	}
	if ((func_854(iVar0, 12) || func_854(iVar0, 14)) || func_854(iVar0, 13))
	{
		return 0;
	}
	if (func_843(iVar0, 0, -1))
	{
		if (!func_806())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_187())
		{
			return 0;
		}
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (func_805(iVar0))
	{
		return 0;
	}
	if (func_804())
	{
		return 0;
	}
	if (func_803(iVar0))
	{
		return 0;
	}
	if ((func_371(iVar0) && func_368(iVar0) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_802())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iVar0 /*834*/].f_267.f_30, 4))
	{
		if (!func_801())
		{
			return 0;
		}
	}
	if (func_800(iVar0))
	{
		return 0;
	}
	if (func_799(iVar0))
	{
		return 0;
	}
	if (!func_792(iVar0))
	{
		if (func_228(iVar0))
		{
			return 0;
		}
	}
	if (func_797())
	{
		return 0;
	}
	if (func_796(iVar0) && !func_795(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_795(int iParam0)//Position - 0x31DD5
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x31E1C
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

bool func_797()//Position - 0x31E41
{
	return func_798() == 1;
}

int func_798()//Position - 0x31E4F
{
	return Global_1973186;
}

int func_799(bool bParam0)//Position - 0x31E5B
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_800(int iParam0)//Position - 0x31EC7
{
	if (Global_2689235[iParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[iParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

int func_801()//Position - 0x31EFB
{
	int iVar0;
	
	iVar0 = func_204(PLAYER::PLAYER_ID());
	if (func_384(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

bool func_802()//Position - 0x31F28
{
	return Global_1946250.f_4590 != -1;
}

int func_803(int iParam0)//Position - 0x31F39
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_804()//Position - 0x31F72
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_805(bool bParam0)//Position - 0x31F8A
{
	if (!func_9(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_806()//Position - 0x31FB2
{
	int iVar0;
	
	iVar0 = func_204(PLAYER::PLAYER_ID());
	if (func_834(PLAYER::PLAYER_ID()))
	{
		if (((((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188) || iVar0 == 294) || iVar0 == 295)
		{
			return 1;
		}
	}
	if (func_833(PLAYER::PLAYER_ID()))
	{
		if ((func_832(iVar0) || func_831(iVar0)) || iVar0 == 293)
		{
			return 1;
		}
	}
	if (func_830(PLAYER::PLAYER_ID()))
	{
		if (func_831(iVar0))
		{
			return 1;
		}
	}
	if (func_829(PLAYER::PLAYER_ID()))
	{
		if (func_828(iVar0))
		{
			return 1;
		}
	}
	if (func_827(PLAYER::PLAYER_ID()))
	{
		if (func_826(iVar0))
		{
			return 1;
		}
	}
	if (func_825(PLAYER::PLAYER_ID()))
	{
		if (func_824(iVar0))
		{
			return 1;
		}
	}
	if (func_823(PLAYER::PLAYER_ID()))
	{
		if (func_822(iVar0))
		{
			return 1;
		}
	}
	if (func_372(PLAYER::PLAYER_ID(), 0))
	{
		if (func_821(iVar0))
		{
			if (func_819(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_818(PLAYER::PLAYER_ID()))
	{
		if (func_817(iVar0))
		{
			return 1;
		}
		if (func_816(iVar0))
		{
			return 1;
		}
		if (func_815())
		{
			return 1;
		}
	}
	if (func_814(PLAYER::PLAYER_ID()))
	{
		if (func_813())
		{
			return 1;
		}
	}
	if (func_812(PLAYER::PLAYER_ID()))
	{
		if (func_816(iVar0))
		{
			return 1;
		}
	}
	if (func_215(PLAYER::PLAYER_ID()))
	{
		if (func_811(iVar0))
		{
			return 1;
		}
	}
	if (func_795(PLAYER::PLAYER_ID()))
	{
		if (func_810(iVar0))
		{
			return 1;
		}
	}
	if (func_809(PLAYER::PLAYER_ID()))
	{
		if (func_808(iVar0) || func_807(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x32193
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_808(int iParam0)//Position - 0x321AD
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_809(int iParam0)//Position - 0x321C7
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_810(int iParam0)//Position - 0x3220E
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_811(int iParam0)//Position - 0x32228
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_812(int iParam0)//Position - 0x32242
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_46())
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_813()//Position - 0x322A2
{
	return Global_2815059.f_6758;
}

int func_814(int iParam0)//Position - 0x322B1
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_815()//Position - 0x322F8
{
	return Global_2815059.f_6757;
}

int func_816(int iParam0)//Position - 0x32307
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x32321
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_818(int iParam0)//Position - 0x3233B
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_819(int iParam0)//Position - 0x32382
{
	if (func_820(iParam0) != func_46())
	{
		return func_820(iParam0) == func_79(iParam0);
	}
	return 0;
}

int func_820(int iParam0)//Position - 0x323A8
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_821(int iParam0)//Position - 0x323BD
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_822(int iParam0)//Position - 0x323F5
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_823(int iParam0)//Position - 0x32421
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_824(int iParam0)//Position - 0x32468
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_825(int iParam0)//Position - 0x32482
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_826(int iParam0)//Position - 0x324C9
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_827(int iParam0)//Position - 0x324E9
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_828(int iParam0)//Position - 0x3252F
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_829(int iParam0)//Position - 0x32555
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_830(int iParam0)//Position - 0x3259B
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_831(int iParam0)//Position - 0x325E1
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_832(int iParam0)//Position - 0x32607
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_833(int iParam0)//Position - 0x3265D
{
	if (func_384(Global_1853348[iParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

int func_834(int iParam0)//Position - 0x32680
{
	if (((func_842(Global_1853348[iParam0 /*834*/].f_267.f_32) || func_841(iParam0)) || func_840(iParam0)) || func_835(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_835(int iParam0)//Position - 0x326C6
{
	if (func_836(Global_1853348[iParam0 /*834*/].f_267.f_32, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_836(int iParam0, bool bParam1, bool bParam2)//Position - 0x326EA
{
	if (bParam2)
	{
		return func_837(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_837(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_837(int iParam0, bool bParam1)//Position - 0x327C5
{
	if (Global_1853184 != func_46())
	{
		if (!func_839(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || func_838(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_838(int iParam0)//Position - 0x3282B
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

int func_839(int iParam0)//Position - 0x3284E
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

int func_840(int iParam0)//Position - 0x32877
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_841(int iParam0)//Position - 0x328BD
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_842(int iParam0)//Position - 0x32903
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_843(bool bParam0, bool bParam1, int iParam2)//Position - 0x32932
{
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || func_216(Global_2689235[bParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_844(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_844(int iParam0)//Position - 0x329B9
{
	int iVar0;
	
	if (iParam0 == func_46())
	{
		return iParam0;
	}
	if (func_845(iParam0) != -1)
	{
		iVar0 = func_216(func_845(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_53(iParam0, 0))
			{
				return func_79(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_46();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return func_46();
}

int func_845(int iParam0)//Position - 0x32A3D
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_846()//Position - 0x32AAC
{
	if (func_847() == 0)
	{
		return 1;
	}
	return 0;
}

int func_847()//Position - 0x32AC1
{
	return Global_1574632.f_18;
}

bool func_848()//Position - 0x32ACF
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

bool func_849()//Position - 0x32AE6
{
	return Global_1575058;
}

bool func_850()//Position - 0x32AF2
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5;
}

bool func_851()//Position - 0x32B07
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_852(bool bParam0)//Position - 0x32B20
{
	if (func_318(bParam0, 1, 0))
	{
		if (Global_1853348[bParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_853(bool bParam0)//Position - 0x32B45
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 22);
}

bool func_854(int iParam0, int iParam1)//Position - 0x32B5B
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

bool func_855(int iParam0, int iParam1)//Position - 0x32B71
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

bool func_856()//Position - 0x32B89
{
	if (Local_369.f_47.f_5 != 0)
	{
		Call_Loc(Local_369.f_47.f_5);
		return StackVal;
	}
	if (func_815())
	{
		return 0;
	}
	return !func_692(3);
}

bool func_857()//Position - 0x32BB8
{
	return !func_1068();
}

int func_858()//Position - 0x32BC5
{
	return 0;
}

int func_859()//Position - 0x32BCE
{
	if ((func_230(PLAYER::PLAYER_ID(), 21) || func_230(PLAYER::PLAYER_ID(), 22)) || func_865())
	{
		return 1;
	}
	if (func_861())
	{
		func_860(22);
		return 1;
	}
	return 0;
}

void func_860(bool bParam0)//Position - 0x32C13
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_861()//Position - 0x32C30
{
	if (func_203(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_864() && !func_863()) || func_854(PLAYER::PLAYER_ID(), 21)) || func_854(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_862(27);
		}
	}
	return 0;
}

void func_862(bool bParam0)//Position - 0x32C83
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

bool func_863()//Position - 0x32CA0
{
	return Global_1574582.f_1;
}

bool func_864()//Position - 0x32CAE
{
	return Global_1574582;
}

bool func_865()//Position - 0x32CBA
{
	return func_866(424, -1);
}

int func_866(int iParam0, int iParam1)//Position - 0x32CCA
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_183(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_867()//Position - 0x32CF6
{
	if (func_488() == 2 && func_868(Local_1353.f_0) != 3)
	{
		return 0;
	}
	if (func_692(11))
	{
		if (func_57(24) || func_57(23))
		{
			return 0;
		}
	}
	return 1;
}

int func_868(int iParam0)//Position - 0x32D3C
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
			return 0;
		
		case 276:
		case 267:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_869()//Position - 0x32F7E
{
	int iVar0;
	
	if (func_415(iLocal_1345, 25))
	{
		return;
	}
	if (func_871())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_435())
	{
		if (Local_1404.f_155.f_1[iVar0 /*5*/].f_1 != -1)
		{
			func_870(Local_1404.f_155.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_698(25);
}

void func_870(struct<2> Param0)//Position - 0x32FDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1952191.f_5322[iVar0 /*2*/].f_1 == -1)
		{
			Global_1952191.f_5322[iVar0 /*2*/] = { Param0 };
			MISC::SET_BIT(&Global_1952191, true);
			return;
		}
		iVar0++;
	}
	if (!BitTest(Global_1952191, 1))
	{
		MISC::SET_BIT(&Global_1952191, true);
	}
}

bool func_871()//Position - 0x33038
{
	return func_872(PLAYER::PLAYER_ID());
}

int func_872(int iParam0)//Position - 0x33048
{
	if (iParam0 != func_46())
	{
		if (func_458(Global_1892703[iParam0 /*599*/].f_556.f_12) || BitTest(Global_1892703[iParam0 /*599*/].f_556, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_873()//Position - 0x33089
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_209.f_19)
	{
		func_1066(iVar4);
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_1404.f_2[iVar4]);
			bVar1 = ENTITY::IS_ENTITY_DEAD(iVar3, false);
			if (Local_369.f_114.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_369.f_114.f_34);
			}
			if (!bVar1)
			{
				func_1061(iVar4, iVar3);
				func_1060(iVar4, iVar3);
				func_1041(iVar4, iVar3, &bVar2, &iVar5);
				func_1036(iVar4, iVar3);
				func_1023(iVar4, iVar3, bVar2);
				func_1018(iVar4, iVar3);
			}
			func_1016(iVar4);
			func_1003(iVar4, Local_1304.f_11);
			func_932(iVar4);
		}
		else
		{
			Local_1261[iVar4 /*7*/].f_1 = 99999f;
			Local_1261[iVar4 /*7*/].f_2 = 99999f;
			Local_1261[iVar4 /*7*/].f_3 = 99999f;
		}
		func_923(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		func_920(1);
	}
	else
	{
		func_915(0, 0);
		func_920(0);
	}
	func_905();
	func_875();
	iLocal_1376++;
	if (iLocal_1376 >= func_28())
	{
		iLocal_1376 = 0;
		func_874();
	}
}

void func_874()//Position - 0x331B6
{
	if (func_13(&(Local_1261.f_12), 5000, 0) && Local_1261.f_14)
	{
		func_118(&(Local_1261.f_12));
		Local_1261.f_14 = 0;
	}
}

void func_875()//Position - 0x331E7
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_2[iLocal_1376]))
	{
		iVar4 = NETWORK::NET_TO_ENT(Local_1404.f_2[iLocal_1376]);
		bVar3 = ENTITY::IS_ENTITY_DEAD(iVar4, false);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false) };
		if (!bVar3)
		{
			func_896(iLocal_1376, Var0);
			if (func_13(&(Local_1261.f_12), 5000, 0))
			{
				if (iLocal_1376 == 0)
				{
					Local_1261.f_14 = 1;
				}
				func_876(iLocal_1376, iVar4, Var0);
			}
		}
	}
}

void func_876(int iParam0, int iParam1, struct<3> Param2)//Position - 0x3325F
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = func_894(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_883(iVar0, 0) };
	iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, func_879(iVar0));
	iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!func_878(Local_1404.f_2[iParam0]))
		{
			return;
		}
		if (func_877(iVar0, &Var1, &fVar6))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, true, false, false, true);
			if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
			{
				OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			}
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar6);
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
		}
	}
}

bool func_877(int iParam0, var uParam1, var uParam2)//Position - 0x3331A
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_194(*uParam1, 0f, 0f, 0f, 0);
}

int func_878(int iParam0)//Position - 0x33A99
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_108(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_879(int iParam0)//Position - 0x33ACE
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_880(Global_102568);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
	}
	return "";
}

char* func_880(int iParam0)//Position - 0x33E95
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_881() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_881()//Position - 0x33FE6
{
	return func_882(PLAYER::PLAYER_ID());
}

int func_882(bool bParam0)//Position - 0x33FF6
{
	return MISC::GET_BITS_IN_RANGE(Global_2689235[bParam0 /*453*/].f_318.f_3, 28, 31);
}

Vector3 func_883(int iParam0, bool bParam1)//Position - 0x34016
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_893(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_46())
			{
				if (func_892(Global_1853185))
				{
					return func_885(2, 2);
				}
				else if (func_884(Global_1853185))
				{
					return func_885(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6)
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_884(int iParam0)//Position - 0x3473B
{
	if (iParam0 != func_46())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_885(int iParam0, int iParam1)//Position - 0x34793
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_46())
	{
		if (iParam1 == 3)
		{
			if (func_886(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_886(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_886(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_886(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x3483D
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_891(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_891(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_889(iParam0) };
	}
	else
	{
		Var12 = { func_888(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_887(Var18, -Var0.f_3.f_2) };
	Var18 = { func_887(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_887(struct<3> Param0, float fParam3)//Position - 0x348D2
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

struct<6> func_888(int iParam0)//Position - 0x34916
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_889(int iParam0)//Position - 0x34A9A
{
	return func_890(iParam0);
}

struct<6> func_890(int iParam0)//Position - 0x34AA8
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_891(int iParam0, var uParam1)//Position - 0x3556F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_892(int iParam0)//Position - 0x355F1
{
	if (iParam0 != func_46())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_893(int iParam0)//Position - 0x35649
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_881() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_894(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x358A5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam3 == 6 || iParam3 == func_186(iVar0))
		{
			if (!bParam5 || func_895(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_883(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_895(int iParam0)//Position - 0x35947
{
	return func_181(iParam0, 0, 0);
}

void func_896(int iParam0, struct<3> Param1)//Position - 0x35957
{
	Local_1261[iParam0 /*7*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_1346, func_904(iParam0));
	Local_1261[iParam0 /*7*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_897(), func_904(iParam0));
	Local_1261[iParam0 /*7*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_209.f_19.f_5[iParam0 /*13*/].f_3, func_904(iParam0));
}

Vector3 func_897()//Position - 0x359BB
{
	if (Local_369.f_465.f_4.f_2 != 0)
	{
		Call_Loc(Local_369.f_465.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_898(func_903());
}

Vector3 func_898(int iParam0)//Position - 0x359E7
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_1338 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_1343, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_1350))
		{
			Var0 = { func_901(iParam0) };
			if (!func_83(Var0))
			{
				return Var0;
			}
		}
		Var3 = { func_900(iParam0) };
		if (!func_83(Var3))
		{
			return Var3;
		}
	}
	return func_899(iParam0);
}

Vector3 func_899(int iParam0)//Position - 0x35A4C
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_900(int iParam0)//Position - 0x35A6C
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

Vector3 func_901(int iParam0)//Position - 0x35A8E
{
	switch (iParam0)
	{
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 801:
		case 802:
			return func_902(func_676(iParam0));
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_902(int iParam0)//Position - 0x35ADD
{
	switch (iParam0)
	{
		case 155:
			return 394,2626f, -64,7225f, 123,3813f;
		
		case 156:
			return -1007,682f, -415,8003f, 79,1788f;
		
		case 157:
			return -597,309f, -717,4868f, 130,0455f;
		
		case 158:
			return -1012,96f, -757,0606f, 80,7534f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_903()//Position - 0x35B4F
{
	if (Local_369.f_465.f_4.f_1 != 0)
	{
		Call_Loc(Local_369.f_465.f_4.f_1);
		return StackVal;
	}
	if (iLocal_1344 != -1)
	{
		return Local_1304.f_1[Local_1566[iLocal_1344 /*35*/].f_14 /*4*/];
	}
	return 0;
}

int func_904(int iParam0)//Position - 0x35B8F
{
	if (Local_369.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_29);
	}
	return 1;
}

void func_905()//Position - 0x35BAE
{
	if (func_913(bLocal_1341, 1) && func_912())
	{
		if (func_908())
		{
			if (!func_692(35))
			{
				func_585(func_907(), -1);
				func_508(35);
			}
		}
	}
	else if (func_692(35))
	{
		if (func_906(func_907()))
		{
			HUD::CLEAR_HELP(true);
		}
		func_537(35);
	}
}

bool func_906(char* sParam0)//Position - 0x35C0C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_907()//Position - 0x35C1F
{
	return "BHH_HELD";
}

int func_908()//Position - 0x35C2B
{
	if (((((((((!func_911() && !func_910()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_1338) && !func_909()) && func_692(9)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

bool func_909()//Position - 0x35C99
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

bool func_910()//Position - 0x35CAF
{
	return Global_75485;
}

bool func_911()//Position - 0x35CBB
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_912()//Position - 0x35CD0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_2[iVar0]))
		{
			if (iLocal_1377[iVar0] != iLocal_1345)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_1404.f_2[iVar0])))
				{
					if (Local_1261[iVar0 /*7*/].f_1 < 2f)
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

int func_913(bool bParam0, bool bParam1)//Position - 0x35D32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_914(bParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_914(int iParam0, int iParam1, bool bParam2)//Position - 0x35D61
{
	if (Local_1261[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_439(iParam1, 4) || func_562(iParam1, iLocal_1345, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_915(bool bParam0, int iParam1)//Position - 0x35D9F
{
	if (!func_158())
	{
		return;
	}
	if (bParam0)
	{
		if (func_439(iParam1, 32))
		{
			func_917(1);
		}
		func_916(Local_209.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		func_917(0);
		func_916(0);
	}
}

void func_916(int iParam0)//Position - 0x35DE4
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 = iParam0;
	}
}

void func_917(bool bParam0)//Position - 0x35E11
{
	if (bParam0)
	{
		func_919(14);
	}
	else
	{
		func_918(14);
	}
}

void func_918(bool bParam0)//Position - 0x35E2D
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), bParam0);
}

void func_919(bool bParam0)//Position - 0x35E4A
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), bParam0);
}

void func_920(bool bParam0)//Position - 0x35E67
{
	if (bParam0)
	{
		func_922(8);
		func_921(1);
	}
	else
	{
		func_922(-1);
		func_921(0);
	}
}

void func_921(bool bParam0)//Position - 0x35E8C
{
	if (bParam0)
	{
		func_919(13);
	}
	else
	{
		func_918(13);
	}
}

void func_922(int iParam0)//Position - 0x35EA8
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1911933[iVar0 /*260*/].f_259 != iParam0)
	{
		Global_1911933[iVar0 /*260*/].f_259 = iParam0;
	}
}

void func_923(int iParam0, bool bParam1)//Position - 0x35ED5
{
	if (!func_931(iParam0))
	{
		return;
	}
	if (bParam1 && func_878(Local_1404.f_2[iParam0]))
	{
		func_60(&(Local_1404.f_2[iParam0]));
	}
	func_925(iParam0);
	func_924(iParam0);
}

void func_924(int iParam0)//Position - 0x35F1B
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_2.f_15[iParam0]) && func_878(Local_1404.f_2.f_15[iParam0]))
	{
		func_60(&(Local_1404.f_2.f_15[iParam0]));
		func_114(&(Local_1404.f_2.f_15[iParam0]));
	}
}

int func_925(int iParam0)//Position - 0x35F67
{
	int iVar0;
	
	if (!func_439(iParam0, 4) || !func_930(iParam0))
	{
		return 1;
	}
	if (!func_927(iParam0))
	{
		return 0;
	}
	iVar0 = func_926(iParam0);
	if (!func_57(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_926(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
	}
	if (func_57(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			func_60(&iVar0);
		}
	}
	else if (func_57(12))
	{
		func_114(&iVar0);
	}
	else if (!func_57(32))
	{
		func_60(&iVar0);
	}
	return 0;
}

int func_926(int iParam0)//Position - 0x36037
{
	var uVar0;
	int iVar1;
	
	if (!func_447(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_420(iParam0);
	switch (func_421())
	{
		case 2:
			return Local_1404.f_47[iVar1 /*8*/];
		
		case 1:
			return Local_1404.f_22[iVar1 /*24*/];
		
		default:
	}
	return uVar0;
}

int func_927(int iParam0)//Position - 0x36085
{
	if (!func_57(12))
	{
		switch (func_421())
		{
			case 2:
				if (func_928(func_929(iParam0), 0, 1))
				{
					return 0;
				}
				break;
		}
		if (!func_878(func_926(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_928(int iParam0, bool bParam1, bool bParam2)//Position - 0x360CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_78(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_78(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_929(int iParam0)//Position - 0x36189
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_926(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

int func_930(int iParam0)//Position - 0x361AD
{
	if (!func_447(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_926(iParam0)))
	{
		return 0;
	}
	if ((func_439(iParam0, 35) || func_439(iParam0, 36)) || func_439(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_926(iParam0)), false))
	{
		return 0;
	}
	return 1;
}

int func_931(int iParam0)//Position - 0x36217
{
	if ((((func_439(iParam0, 19) || (func_439(iParam0, 3) && func_13(&(Local_1404.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_439(iParam0, 4)) || func_439(iParam0, 25)) || func_439(iParam0, 33))
	{
		return (func_439(iParam0, 4) || func_439(iParam0, 3));
	}
	return 0;
}

void func_932(int iParam0)//Position - 0x36290
{
	if (func_998(iParam0))
	{
		func_934(iParam0);
	}
	else
	{
		func_933(iParam0);
	}
}

void func_933(int iParam0)//Position - 0x362B0
{
	if (HUD::DOES_BLIP_EXIST(Local_1261[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_1261[iParam0 /*7*/]));
	}
}

void func_934(int iParam0)//Position - 0x362D1
{
	if (!HUD::DOES_BLIP_EXIST(Local_1261[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_2[iParam0]))
		{
			Local_1261[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]));
			if (func_995(func_996(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_1261[iParam0 /*7*/], func_996(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_1261[iParam0 /*7*/], func_993(iParam0));
			HUD::SET_BLIP_COLOUR(Local_1261[iParam0 /*7*/], func_988(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1261[iParam0 /*7*/], func_986(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_1261[iParam0 /*7*/], 12);
			if (func_985(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_1261[iParam0 /*7*/], true);
			}
			if (!func_562(iParam0, iLocal_1345, 46))
			{
				func_984(&(Local_1261[iParam0 /*7*/]), 1);
				func_983(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_1261[iParam0 /*7*/], func_988(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_1261[iParam0 /*7*/]) != func_996(iParam0) && func_995(func_996(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_1261[iParam0 /*7*/], func_996(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1261[iParam0 /*7*/], func_986(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_1261[iParam0 /*7*/]) != func_988(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_1261[iParam0 /*7*/], func_988(iParam0, 0));
		}
		if (func_482(iParam0, 17))
		{
			func_936(Local_1261[iParam0 /*7*/], 100, 5000f, 1137180672);
		}
		if (func_420(iParam0) > -1 && func_421() == 2)
		{
			if (func_935(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_47[func_420(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1404.f_47[func_420(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_1261[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_1404.f_47[func_420(iParam0) /*8*/]))));
				}
			}
		}
	}
}

int func_935(int iParam0)//Position - 0x364BE
{
	if (Local_369.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_18);
		return StackVal;
	}
	return 0;
}

void func_936(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x364DF
{
	HUD::SET_BLIP_ALPHA(iParam0, func_937(iParam0, iParam1, fParam2, fParam3));
}

int func_937(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x364F9
{
	float fVar0;
	
	if (!func_982(Global_2703735) && !func_762())
	{
		fVar0 = func_939(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_938();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_938()//Position - 0x36547
{
	if (func_401(Global_2703735, 1))
	{
		return 50;
	}
	return 0;
}

float func_939(int iParam0, float fParam1, float fParam2)//Position - 0x36561
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2703735;
	Var2 = { func_981(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581351 || func_977())
	{
		if (func_976(iVar0))
		{
			Var5 = { func_942(iVar0) };
		}
		else if (func_941(iVar0))
		{
			Var5 = { func_940(iVar0) };
		}
	}
	else
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_940(bool bParam0)//Position - 0x36611
{
	int iVar0;
	
	if (func_941(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_941(bool bParam0)//Position - 0x36645
{
	int iVar0;
	
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056,204f, 2954,807f, -70,69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_942(bool bParam0)//Position - 0x366A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (bParam0 == func_46())
	{
	}
	if (func_366(bParam0))
	{
		iVar0 = func_975(bParam0);
		if (iVar0 != func_46())
		{
			if (!func_974(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[func_975(bParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = func_971(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_364(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (func_829(bParam0) && !func_970(bParam0))
	{
		iVar2 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar2 != func_46())
		{
			iVar3 = func_971(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (func_825(bParam0) && !func_969(bParam0))
	{
		if (func_976(bParam0) && func_968())
		{
			return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar4 != func_46())
		{
			if (func_967(iVar4))
			{
				iVar5 = func_964(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_367(bParam0))
	{
		iVar6 = func_963(bParam0);
		if (iVar6 != func_46())
		{
			if (!func_962(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[func_963(bParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = func_964(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_365(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (func_823(bParam0) && !func_961(bParam0))
	{
		iVar8 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar8 != func_46())
		{
			if (func_960(iVar8))
			{
				iVar9 = func_957(iVar8);
				if (iVar9 != -1)
				{
					return func_956(iVar9);
				}
			}
		}
	}
	else if (func_955(bParam0) && !func_954(bParam0))
	{
		iVar10 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar10 != func_46())
		{
			if (func_953(iVar10))
			{
				iVar11 = func_950(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_372(bParam0, 0))
	{
		iVar12 = func_949(bParam0);
		if (iVar12 != func_46())
		{
			if (!func_948(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[func_949(bParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = func_950(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_947(bParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	else if (func_946(bParam0))
	{
		iVar14 = func_844(bParam0);
		if (iVar14 != func_46())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_823(bParam0))
	{
		return func_956(Global_2689235[bParam0 /*453*/].f_318.f_6);
	}
	if (func_943(bParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
}

int func_943(int iParam0)//Position - 0x36B0B
{
	if (((func_818(iParam0) || func_814(iParam0)) || func_945(iParam0)) || func_944(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_944(int iParam0)//Position - 0x36B45
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_945(int iParam0)//Position - 0x36B8C
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_946(int iParam0)//Position - 0x36BD3
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
		else if (((Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_1575058) && iParam0 == PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0))
		{
			return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
		}
	}
	return 0;
}

int func_947(int iParam0)//Position - 0x36C6A
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_948(int iParam0)//Position - 0x36CB1
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_949(int iParam0)//Position - 0x36CD6
{
	if (iParam0 == func_46())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_950(int iParam0)//Position - 0x36CFA
{
	int iVar0;
	
	if (iParam0 != func_46())
	{
		iVar0 = func_952(iParam0);
		if (iVar0 != 0)
		{
			return func_951(iVar0);
		}
	}
	return -1;
}

int func_951(int iParam0)//Position - 0x36D23
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_952(int iParam0)//Position - 0x36DA1
{
	if (iParam0 != func_46())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_295;
	}
	return 0;
}

int func_953(int iParam0)//Position - 0x36DC5
{
	if (iParam0 != func_46())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_295 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_954(int iParam0)//Position - 0x36DEE
{
	if (iParam0 != func_46())
	{
		if (func_955(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_955(int iParam0)//Position - 0x36E23
{
	if (iParam0 != func_46())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_216(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_956(int iParam0)//Position - 0x36E6A
{
	switch (iParam0)
	{
		case 102:
			return 750,5f, -1322,3f, 26,2802f;
		
		case 103:
			return 331,9f, -974,9f, 30f;
		
		case 104:
			return -146f, -1270f, 28,3088f;
		
		case 105:
			return -17,7f, 225,7f, 106,7566f;
		
		case 106:
			return 894,4f, -2106,4f, 29,4768f;
		
		case 107:
			return -668f, -2431,5f, 12,9444f;
		
		case 108:
			return 213,4f, -3166,6f, 4,7903f;
		
		case 109:
			return 366,6f, 237,6f, 104,9f;
		
		case 110:
			return -1275,3f, -666,8f, 25,6332f;
		
		case 111:
			return -1188,8f, -1156,9f, 4,6582f;
		
		default:
	}
	return Global_1946250.f_533[iParam0 /*3*/];
}

int func_957(int iParam0)//Position - 0x36F76
{
	int iVar0;
	
	if (iParam0 != func_46())
	{
		iVar0 = func_959(iParam0);
		if (iVar0 != 0)
		{
			return func_958(iVar0);
		}
	}
	return -1;
}

int func_958(int iParam0)//Position - 0x36F9F
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_959(bool bParam0)//Position - 0x3701D
{
	if (bParam0 != func_46())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_336;
	}
	return 0;
}

int func_960(int iParam0)//Position - 0x37041
{
	if (iParam0 != func_46())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_961(int iParam0)//Position - 0x37067
{
	if (iParam0 != func_46())
	{
		if (func_823(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_962(int iParam0)//Position - 0x3709C
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

int func_963(int iParam0)//Position - 0x370C1
{
	if (iParam0 == func_46())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_964(int iParam0)//Position - 0x370E5
{
	int iVar0;
	
	if (iParam0 == func_46())
	{
		return -1;
	}
	iVar0 = func_966(iParam0);
	if (!iVar0 == 0)
	{
		return func_965(iVar0);
	}
	return -1;
}

int func_965(int iParam0)//Position - 0x37114
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_966(int iParam0)//Position - 0x371A2
{
	if (iParam0 == func_46())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_285;
}

int func_967(int iParam0)//Position - 0x371C6
{
	if (iParam0 != func_46())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285 != 0;
	}
	return 0;
}

int func_968()//Position - 0x371EC
{
	if (BitTest(Global_1946250.f_2, 13) || Global_1946250.f_3281)
	{
		return 1;
	}
	return 0;
}

int func_969(int iParam0)//Position - 0x37212
{
	if (iParam0 == func_46())
	{
		return 0;
	}
	if (func_825(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_970(int iParam0)//Position - 0x3724B
{
	if (iParam0 == func_46())
	{
		return 0;
	}
	if (func_829(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0)//Position - 0x37284
{
	int iVar0;
	
	if (iParam0 == func_46())
	{
		return -1;
	}
	iVar0 = func_973(iParam0);
	if (!iVar0 == 0)
	{
		return func_972(iVar0);
	}
	return -1;
}

int func_972(int iParam0)//Position - 0x372B3
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_973(bool bParam0)//Position - 0x37475
{
	if (bParam0 == func_46())
	{
		return 0;
	}
	return Global_1853348[bParam0 /*834*/].f_267.f_191[5 /*13*/];
}

int func_974(int iParam0)//Position - 0x3749B
{
	if (iParam0 != func_46())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

int func_975(int iParam0)//Position - 0x374BE
{
	if (iParam0 == func_46())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_976(bool bParam0)//Position - 0x374E2
{
	if (bParam0 != func_46())
	{
		if (func_9(bParam0, 1, 1))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && bParam0 == PLAYER::PLAYER_ID()) && func_9(bParam0, 1, 0))
		{
			return Global_2689235[bParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_977()//Position - 0x37548
{
	if ((func_980() || func_979()) || func_978(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_978(bool bParam0)//Position - 0x37574
{
	if (bParam0 == func_46())
	{
		return 0;
	}
	return BitTest(Global_1888862[bParam0 /*120*/].f_29, 20);
}

var func_979()//Position - 0x37596
{
	return BitTest(Global_1958691, 1);
}

var func_980()//Position - 0x375A4
{
	return BitTest(Global_1958711, 5);
}

Vector3 func_981(int iParam0)//Position - 0x375B2
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

int func_982(bool bParam0)//Position - 0x375FB
{
	if ((BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 9) && !(BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 6) && BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 7))) || ((BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 6) && !BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 7)) && !BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_983(int iParam0, int iParam1)//Position - 0x37684
{
	if (func_17(&(Local_1566[iLocal_1344 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_984(var uParam0, bool bParam1)//Position - 0x376A3
{
	HUD::SET_BLIP_FLASHES(*uParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

bool func_985(int iParam0)//Position - 0x376CF
{
	if (Local_369.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_14);
		return StackVal;
	}
	return Local_209.f_19.f_1.f_3;
}

var func_986(int iParam0)//Position - 0x376F7
{
	if (Local_369.f_114.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_13);
		return StackVal;
	}
	return func_987();
}

char* func_987()//Position - 0x3771B
{
	return "FMC_BLIP_ME";
}

int func_988(int iParam0, bool bParam1)//Position - 0x37727
{
	if (Local_369.f_114.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_5);
		return func_992(StackVal);
	}
	if (!bParam1)
	{
		if (func_562(iParam0, iLocal_1345, 12))
		{
			return 1;
		}
	}
	else if (func_990() == 23 && func_562(iParam0, iLocal_1345, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_1261[iParam0 /*7*/].f_4 != func_46())
	{
		return func_992(func_989(Local_1261[iParam0 /*7*/].f_4));
	}
	if (func_446(iParam0))
	{
		if (!func_57(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_989(int iParam0)//Position - 0x377C9
{
	int iVar0;
	
	iVar0 = func_768(iParam0);
	if (iVar0 != -1)
	{
		return func_766(iVar0);
	}
	return 1;
}

int func_990()//Position - 0x377E9
{
	if (func_991() != -1)
	{
		return Local_1019[func_991() /*21*/];
	}
	return -1;
}

int func_991()//Position - 0x37806
{
	return Local_1566[iLocal_1344 /*35*/];
}

int func_992(int iParam0)//Position - 0x37816
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_993(int iParam0)//Position - 0x37A7E
{
	if (Local_369.f_114.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_6);
		return StackVal;
	}
	return func_994();
}

var func_994()//Position - 0x37AA2
{
	return Local_209.f_19.f_1.f_2;
}

int func_995(int iParam0)//Position - 0x37AB2
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_996(int iParam0)//Position - 0x37AD2
{
	if (Local_369.f_114.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_4);
		return StackVal;
	}
	if (Local_209.f_19.f_1 != -1)
	{
		return Local_209.f_19.f_1;
	}
	return func_997();
}

int func_997()//Position - 0x37B09
{
	return 523;
}

int func_998(int iParam0)//Position - 0x37B14
{
	if (!bLocal_1352)
	{
		return 0;
	}
	if (func_561(iParam0, 1))
	{
		return 0;
	}
	if (Local_1261[iParam0 /*7*/].f_4 != func_46() && func_421() != 1)
	{
		return 0;
	}
	if (func_482(iParam0, 10) && !func_439(iParam0, 7))
	{
		return 0;
	}
	if (func_562(iParam0, iLocal_1345, 14))
	{
		return 0;
	}
	if ((func_482(iParam0, 16) && func_439(iParam0, 23)) && !func_415(iLocal_1345, 2))
	{
		return 0;
	}
	if (func_439(iParam0, 23) && func_982(bLocal_1341))
	{
		return 0;
	}
	if (func_439(iParam0, 29) && func_439(iParam0, 40))
	{
		return 0;
	}
	if (func_999())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_114);
	return StackVal;
}

int func_999()//Position - 0x37BF7
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1341) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_1341) < 1)
	{
		return 0;
	}
	if (func_1002())
	{
		return 1;
	}
	if (func_1001())
	{
		if (func_1000(bLocal_1341, 0, 1, 0) || func_913(bLocal_1341, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1000(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37C4F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if ((((iParam1 || !func_439(iVar0, 4)) && (iParam2 || !func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 1))) && (iParam3 || !func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 12))) && func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1001()//Position - 0x37CCE
{
	if (Local_369.f_64.f_11 != 0)
	{
		Call_Loc(Local_369.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_1002()//Position - 0x37CED
{
	if (Local_369.f_64.f_10 != 0)
	{
		Call_Loc(Local_369.f_64.f_10);
		return StackVal;
	}
	return 0;
}

void func_1003(int iParam0, int iParam1)//Position - 0x37D0C
{
	if (Local_1261[iParam0 /*7*/].f_4 == bLocal_1341)
	{
		if (iParam1 != 5)
		{
			if (!func_1014(func_161(iParam0)))
			{
				func_1012(func_161(iParam0));
				if (Local_369.f_114.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_369.f_114.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952191.f_5314 && !func_1011(bLocal_1341)) && !func_871())
		{
			if (func_1014(func_161(iParam0)))
			{
				func_1004(func_161(iParam0));
			}
		}
	}
}

void func_1004(int iParam0)//Position - 0x37D98
{
	if (!func_1008(iParam0))
	{
		return;
	}
	func_1005(Local_1404.f_155.f_1[iParam0 /*5*/]);
}

void func_1005(struct<2> Param0)//Position - 0x37DBE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_458(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) && func_456(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1007(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), false);
		func_1006();
	}
}

void func_1006()//Position - 0x37E55
{
	Global_1952191.f_5470.f_3 = 0;
	Global_1952191.f_5470 = -1;
	Global_1952191.f_5470.f_2 = -1000;
}

int func_1007(bool bParam0)//Position - 0x37E7B
{
	int iVar0;
	int iVar1;
	
	if (bParam0 != func_46())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_458(Global_1892703[bParam0 /*599*/].f_556.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_1008(int iParam0)//Position - 0x37EC1
{
	if ((iParam0 == -1 || func_1010(iParam0) == -1) || func_1009(iParam0) == -1)
	{
		return 0;
	}
	return func_458(Local_1404.f_155.f_1[iParam0 /*5*/]);
}

int func_1009(int iParam0)//Position - 0x37F01
{
	return Local_1404.f_155.f_1[iParam0 /*5*/].f_3;
}

int func_1010(int iParam0)//Position - 0x37F16
{
	return Local_1404.f_155.f_1[iParam0 /*5*/].f_2;
}

int func_1011(bool bParam0)//Position - 0x37F2B
{
	int iVar0;
	
	if (bParam0 != func_46() && (func_9(bParam0, 1, 1) || Global_2667225.f_2680))
	{
		iVar0 = BitTest(Global_2689235[bParam0 /*453*/].f_318, 1);
		return iVar0;
	}
	return 0;
}

void func_1012(int iParam0)//Position - 0x37F6D
{
	if (!func_1008(iParam0))
	{
		return;
	}
	func_1013(Local_1404.f_155.f_1[iParam0 /*5*/]);
}

void func_1013(struct<2> Param0)//Position - 0x37F93
{
	int iVar0;
	
	if (!func_458(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_458(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), false);
	func_454(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1014(int iParam0)//Position - 0x38017
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	return func_1015(Local_1404.f_155.f_1[iParam0 /*5*/]);
}

int func_1015(struct<2> Param0)//Position - 0x3803E
{
	int iVar0;
	
	if (!func_458(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_458(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) && func_456(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1016(int iParam0)//Position - 0x380AD
{
	if (iLocal_1377[iParam0] != func_1017())
	{
		if (uLocal_1379[iParam0] != iLocal_1377[iParam0])
		{
			uLocal_1379[iParam0] = iLocal_1377[iParam0];
		}
	}
}

int func_1017()//Position - 0x380E2
{
	return -1;
}

void func_1018(int iParam0, int iParam1)//Position - 0x380EB
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_482(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_1261[iParam0 /*7*/].f_1 < func_1022(iParam0))
	{
		bVar0 = true;
		if (func_1021(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1343, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_1020(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_1346.f_2)) > func_1020(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_369.f_114.f_35 != 0)
		{
			if (!func_562(iParam0, iLocal_1345, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_369.f_114.f_35);
			}
		}
		func_983(iParam0, 35);
		func_983(iParam0, 0);
	}
	else
	{
		func_1019(iParam0, 0);
	}
}

void func_1019(int iParam0, int iParam1)//Position - 0x381AC
{
	if (func_129(&(Local_1566[iLocal_1344 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_1020(int iParam0)//Position - 0x381CB
{
	if (Local_369.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_1021(int iParam0)//Position - 0x381EC
{
	if (Local_369.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_1022(int iParam0)//Position - 0x3820D
{
	if (Local_369.f_114.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_24);
		return StackVal;
	}
	if (func_446(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_1023(int iParam0, int iParam1, bool bParam2)//Position - 0x38243
{
	if (!func_158())
	{
		return;
	}
	if (!func_439(iParam0, 32) && !func_562(iParam0, iLocal_1345, 24))
	{
		if (func_1032(iParam0))
		{
			if (func_878(Local_1404.f_2[iParam0]))
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1404.f_2[iParam0], true);
				OBJECT::_0xAA059C615DE9DD03(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true);
				func_1030(Local_1353.f_0, 0, 0);
				func_983(iParam0, 24);
			}
		}
	}
	else
	{
		func_1024(iParam1, &(Local_1261[iParam0 /*7*/].f_5), func_1029(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_915(bParam2, iParam0);
	}
}

void func_1024(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x382EB
{
	if (PLAYER::PLAYER_ID() == func_10())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !bParam2) && !func_1028())
		{
			if (func_13(uParam1, 1000, 0))
			{
				func_1027(ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam3);
				func_118(uParam1);
			}
		}
		else
		{
			func_1025(iParam3);
		}
	}
}

void func_1025(int iParam0)//Position - 0x38342
{
	if (!func_194(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam0 /*3*/], func_1026(), 0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam0 /*3*/] = { func_1026() };
	}
	if (!func_194(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam0 /*3*/], func_1026(), 0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam0 /*3*/] = { func_1026() };
	}
}

Vector3 func_1026()//Position - 0x383C0
{
	struct<3> Var0;
	
	return Var0;
}

void func_1027(struct<3> Param0, int iParam3)//Position - 0x383CC
{
	if (!func_194(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam3 /*3*/], 0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam3 /*3*/] = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam3 /*3*/] };
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam3 /*3*/] = { Param0 };
	}
}

int func_1028()//Position - 0x38439
{
	int iVar0;
	
	if (BitTest(Global_2815059.f_4630, 2))
	{
		if (func_53(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = func_79(PLAYER::PLAYER_ID());
			if (iVar0 != func_46())
			{
				if (Global_2689235[iVar0 /*453*/].f_208)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1029(int iParam0)//Position - 0x3847F
{
	if ((func_439(iParam0, 3) || func_439(iParam0, 4)) || Local_1261[iParam0 /*7*/].f_4 != func_46())
	{
		return 1;
	}
	return 0;
}

void func_1030(int iParam0, bool bParam1, bool bParam2)//Position - 0x384B7
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_2 = 107890679;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = func_47();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		iVar14 = func_43(PLAYER::PLAYER_ID());
	}
	else if (bParam2)
	{
		iVar14 = func_45(1);
	}
	else
	{
		iVar14 = func_178(1, 1);
	}
	func_1031(Var0, iVar14);
}

void func_1031(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x38512
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_1032(int iParam0)//Position - 0x3853F
{
	if (!func_1035(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_369.f_114.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (func_13(&(Local_1404.f_2.f_18), func_1033(), 0))
	{
		return 1;
	}
	return 0;
}

int func_1033()//Position - 0x3857F
{
	if (Local_369.f_114.f_39.f_1 != 0)
	{
		Call_Loc(Local_369.f_114.f_39.f_1);
		return StackVal;
	}
	return func_1034();
}

int func_1034()//Position - 0x385A5
{
	return 20000;
}

bool func_1035(int iParam0)//Position - 0x385B0
{
	return func_439(iParam0, 1);
}

void func_1036(int iParam0, int iParam1)//Position - 0x385BF
{
	if (func_439(iParam0, 29) || !func_1040(iParam0))
	{
		return;
	}
	func_1037(iParam1, iParam0);
}

void func_1037(int iParam0, int iParam1)//Position - 0x385EA
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = func_1039(iParam1);
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0,5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		func_1038(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

void func_1038(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, float fParam8, float fParam9)//Position - 0x38638
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar15))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar15, false))
			{
				iVar16 = PED::GET_VEHICLE_PED_IS_IN(iVar15, false);
				if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar16)))
				{
					iParam0 = iVar16;
				}
			}
		}
	}
	fVar12 = 0,5f;
	iVar14 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Var9 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar13 = ENTITY::GET_ENTITY_HEADING(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar14, &Var0, &Var3);
	fVar17 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar18 = (Var3.f_2 - fVar17);
	if (fVar12 <= (fVar18 + 0,1f))
	{
		fVar12 = ((fVar18 + fParam4) - 0,1f);
	}
	switch (iVar14)
	{
		case joaat("seven70"):
		case joaat("raptor"):
		case joaat("issi3"):
		case joaat("comet3"):
		case joaat("specter2"):
		case joaat("hermes"):
		case joaat("dominator3"):
		case joaat("jugular"):
		case joaat("remus"):
		case joaat("tailgater2"):
		case joaat("mesa3"):
			fVar12 = (fVar12 + 0,25f);
			break;
		
		case joaat("insurgent2"):
			fVar12 = (fVar12 + 0,75f);
			break;
	}
	fVar12 = (fVar12 + fParam5);
	fVar19 = 0f;
	if (bParam6)
	{
		Var6 = { Var9 - Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar12), 0f, 0f) };
		fVar19 = 180f;
	}
	else
	{
		Var6 = { Var9 + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar12), 0f, 0f) };
	}
	if (iVar14 == joaat("imp_prop_impexp_boxpile_02"))
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var9, fVar13, -1,45f, 0,5f, 0f) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar12), 0f, 0f) };
	}
	else if (iVar14 == joaat("tr_prop_tr_break_dev_01a"))
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var9, fVar13, 0f, -0,3f, (Var3.f_2 + 0,17f)) };
	}
	if (fParam9 != 0f)
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var9, fVar13, 0f, fParam9, Var3.f_2) };
	}
	GRAPHICS::DRAW_MARKER(2, Var6, 0f, 0f, 0f, 180f, fVar19, fParam8, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, bParam7, 2, false, 0, 0, false);
}

float func_1039(var uParam0)//Position - 0x38837
{
	if (Local_369.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_369.f_114.f_20);
		return StackVal;
	}
	return 0,3f;
}

int func_1040(int iParam0)//Position - 0x3885C
{
	return 0;
}

void func_1041(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x38865
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_482(iParam0, 9) || Local_369.f_114.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_369.f_114.f_38);
		if (StackVal)
		{
			if (!func_439(iParam0, 31))
			{
				if (func_878(Local_1404.f_2[iParam0]))
				{
					func_477(iParam0, 0, 0);
					func_983(iParam0, 22);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
		if (iVar0 != -1)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 == bLocal_1341)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1404.f_2[iParam0]))
						{
							OBJECT::_HIDE_PICKUP(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1404.f_2[iParam0]), false);
							func_983(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								func_983(iParam0, 18);
							}
							*uParam2 = 1;
							func_1049();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_983(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_1292))
						{
							func_983(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								func_983(iParam0, 18);
							}
							*uParam2 = 1;
							func_1049();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_1349)
					{
						func_983(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !func_1048())
				{
					iVar4 = func_420(iParam0);
					if (!func_1047(Local_209.f_67.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!func_1047(iLocal_1350))
						{
							func_983(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1343, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_1343, false) == iVar3)
								{
									if (func_1046(iLocal_1343, 0) == -1)
									{
										func_983(iParam0, 1);
										if (!func_439(iParam0, 1))
										{
											func_983(iParam0, 18);
											func_1049();
										}
										*uParam2 = 1;
										func_1049();
										*iParam3 = iParam0;
									}
									func_983(iParam0, 14);
								}
								else
								{
									func_1045(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_488() == 0)
				{
					func_1042(iParam0);
				}
			}
		}
	}
}

void func_1042(int iParam0)//Position - 0x38AD0
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (func_878(Local_1404.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true, false);
		func_1044(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]));
		func_983(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), true) };
		Var3 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1,2f, 1,5f) };
		if (Var3.f_0 == Var0.f_0 && Var3.f_1 == Var0.f_1)
		{
			iVar6 = func_420(iParam0);
			if (iVar6 != -1)
			{
				iVar7 = Local_1404.f_47[iVar6 /*8*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar7))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar7), false) };
				}
			}
		}
		fVar8 = func_1043(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0])));
		Var3.f_2 = (Var3.f_2 + (fVar8 * 0,5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1404.f_2[iParam0]), Var3, true, false, false, true);
	}
}

float func_1043(int iParam0)//Position - 0x38BEE
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_290(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_1044(int iParam0)//Position - 0x38C1C
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iParam0, true);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	OBJECT::_0x4C134B4DF76025D0(iParam0, true);
}

void func_1045(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x38C38
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1349) && func_1046(iLocal_1343, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_1349)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_1349))
		{
			func_983(iParam1, 1);
			if (!func_439(iParam1, 1))
			{
				func_983(iParam1, 18);
			}
			*uParam2 = 1;
			func_1049();
			*uParam3 = iParam1;
		}
	}
}

int func_1046(int iParam0, bool bParam1)//Position - 0x38CB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_1047(int iParam0)//Position - 0x38D36
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_1048()//Position - 0x38D8C
{
	return 0;
}

void func_1049()//Position - 0x38D95
{
	if (!bLocal_1351)
	{
		return;
	}
	if (!func_791(bLocal_1341))
	{
		func_1050(0);
	}
}

void func_1050(int iParam0)//Position - 0x38DB7
{
	if (!func_792(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_1055(PLAYER::PLAYER_ID()) != 0)
		{
			func_860(20);
			func_1052(func_1053());
			if (func_1051(PLAYER::PLAYER_ID()))
			{
				if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
				}
			}
		}
	}
}

int func_1051(bool bParam0)//Position - 0x38E23
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

void func_1052(int iParam0)//Position - 0x38E44
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_621() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_1053()//Position - 0x38EA7
{
	int iVar0;
	
	iVar0 = func_204(PLAYER::PLAYER_ID());
	if (func_868(iVar0) == 0 || func_868(iVar0) == 3)
	{
		return -1;
	}
	if (func_1054(iVar0))
	{
		return 65;
	}
	if (func_832(iVar0))
	{
		return 66;
	}
	if (func_821(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_1054(int iParam0)//Position - 0x38F02
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_1055(bool bParam0)//Position - 0x38F2E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_1051(bParam0) && !func_1059(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = func_792(bParam0);
	uVar3 = func_864();
	bVar4 = func_859();
	if ((bVar1 && (func_1058(bParam0) || func_1057(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_229(bParam0)) && !func_1056(bParam0)))
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

bool func_1056(int iParam0)//Position - 0x38FE9
{
	return func_230(iParam0, 19);
}

int func_1057(int iParam0)//Position - 0x38FF9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_1058(int iParam0)//Position - 0x3901C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

bool func_1059(int iParam0)//Position - 0x3903F
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
}

void func_1060(int iParam0, int iParam1)//Position - 0x39054
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((!func_482(iParam0, 7) || func_439(iParam0, 39)) || func_562(iParam0, iLocal_1345, 32))
	{
		return;
	}
	iVar0 = func_46();
	if (Local_369.f_114.f_37 != 0)
	{
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			Stack.Push(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_369.f_114.f_37);
			if (StackVal && StackVal)
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (func_9(iVar0, 1, 1))
	{
		if (iVar0 == bLocal_1341 && func_108(Local_1404.f_2[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1))
			{
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_1343);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			func_983(iParam0, 32);
		}
	}
	else if (func_878(Local_1404.f_2[iParam0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
		func_983(iParam0, 32);
	}
}

void func_1061(int iParam0, int iParam1)//Position - 0x3914C
{
	int iVar0;
	int iVar1;
	
	if ((!func_447(iParam0) || func_439(iParam0, 39)) || func_562(iParam0, iLocal_1345, 36))
	{
		return;
	}
	iVar0 = func_1065(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (func_878(Local_1404.f_2[iParam0]) && func_108(iVar0))
			{
				if (func_1063(iParam1, iVar1, func_1064(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
				{
					func_1062(iVar1);
					func_983(iParam0, 36);
				}
			}
		}
	}
}

void func_1062(int iParam0)//Position - 0x391ED
{
	int iVar0;
	
	switch (func_421())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::_SET_DISABLE_SUPERDUMMY_MODE(iVar0, true);
			break;
	}
}

int func_1063(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, bool bParam8, bool bParam9)//Position - 0x39216
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (func_421())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param5, bParam8, false, bParam9, false, 2, true, 0);
				break;
			
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1064(int iParam0, int iParam1)//Position - 0x3927F
{
	switch (func_421())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("insurgent3"):
				case joaat("limo2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0,1f;
						
						case 1:
							return -1f, -2f, -0,1f;
						
						case 2:
							return 1f, -2f, -0,1f;
						
						case 3:
							return -1f, -2f, -0,1f;
						
						default:
					}
					break;
				
				case joaat("issi3"):
				case joaat("panto"):
				case joaat("raptor"):
					switch (iParam0)
					{
						case 0:
							return 0,5f, 0f, -0,1f;
						
						case 1:
							return -0,5f, 0f, -0,1f;
						
						case 2:
							return 0,5f, 0f, -0,1f;
						
						case 3:
							return -0,5f, 0f, -0,1f;
						
						default:
					}
					break;
				
				case joaat("faggio"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 0f, -0,65f, 0,5f;
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0,1f;
				
				case 1:
					return -1f, 0f, -0,1f;
				
				case 2:
					return 1f, 0f, -0,1f;
				
				case 3:
					return -1f, 0f, -0,1f;
				
				default:
			}
			return 0f, -1f, -0,1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_1065(int iParam0)//Position - 0x393EC
{
	var uVar0;
	
	switch (func_421())
	{
		case 2:
			return Local_1404.f_47[func_420(iParam0) /*8*/];
		
		case 1:
			return Local_1404.f_22[func_420(iParam0) /*24*/];
		
		default:
	}
	return uVar0;
}

void func_1066(int iParam0)//Position - 0x3942B
{
	func_1019(iParam0, 1);
	func_1019(iParam0, 21);
	func_1019(iParam0, 14);
}

int func_1067()//Position - 0x3944A
{
	return 1;
}

bool func_1068()//Position - 0x39453
{
	return Local_1327.f_0 != -1;
}

void func_1069()//Position - 0x39460
{
	func_1742();
	func_1072();
	func_1070();
}

void func_1070()//Position - 0x39474
{
	int iVar0;
	
	if (!func_415(iLocal_1345, 29))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_209.f_67)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1404.f_47[iVar0 /*8*/]))
		{
			func_1071(iVar0, NETWORK::NET_TO_VEH(Local_1404.f_47[iVar0 /*8*/]), func_419(iVar0, 2));
		}
		iVar0++;
	}
}

void func_1071(int iParam0, int iParam1, int iParam2)//Position - 0x394CB
{
	bool bVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (func_147(iParam0, 14))
		{
			if (iParam2 != -1 && !func_439(iParam2, 4))
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
			if (func_878(Local_1404.f_47[iParam0 /*8*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (func_149(iParam0, 20))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (func_149(iParam0, 21))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_209.f_67.f_1[iParam0 /*15*/].f_3))
					{
						NETWORK::_NETWORK_EXPLODE_HELI(iParam1, true, false, 0);
					}
					else
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iParam1, true, false, -1);
					}
				}
			}
		}
	}
}

void func_1072()//Position - 0x3956B
{
	if (!func_692(46))
	{
		return;
	}
	if (!func_1741())
	{
		func_537(46);
		return;
	}
	if (!func_692(26))
	{
		if (func_1740(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_369.f_15.f_26);
			func_1732(StackVal, StackVal, 0);
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
	else
	{
		Call_Loc(Local_369.f_15.f_26.f_1);
		Stack.Push(0);
		Call_Loc(Local_369.f_15.f_26.f_2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_369.f_15.f_26.f_3);
		Call_Loc(Local_369.f_15.f_26.f_4);
		Stack.Push(3000);
		Stack.Push(1);
		Stack.Push(1);
		Call_Loc(Local_369.f_15.f_26.f_5);
		if (func_1073(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 1, 0))
		{
			func_536(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_369.f_15.f_26);
			func_1732(StackVal, StackVal, 0);
			func_537(46);
		}
	}
}

int func_1073(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x39627
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1731();
	if (func_1730(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && func_9(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (func_1729() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < func_403(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!func_1728())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_1503(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, uParam5, iParam6, uParam8, uParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						func_1498(&iVar2);
					}
					else
					{
						iVar2 = func_1497();
						func_1496(&iVar2);
					}
					if (func_1728())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									func_1494();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_1476(iVar2);
							func_1475(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					func_1475(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1472())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1329(Global_2667225.f_706, Global_2667225.f_706.f_1, func_1468(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (func_1328(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_1128(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				func_1122(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || func_425(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_1114(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						func_1110();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				func_1110();
			}
			else if (func_1104(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || func_1103())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				func_1110();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0,1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1,5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + func_1043(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + func_1043(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_1095(iParam9, 0, 0);
				}
			}
			func_1093(func_74(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				func_1494();
			}
			if (!(func_1328(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_1092(0, 0);
			}
			func_1091(0, 0);
			if (bParam10)
			{
				func_1090();
			}
			func_1089();
			func_1075();
			if (bParam13)
			{
				func_405();
			}
			func_1074();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_1496(&(Global_2667225.f_45.f_173));
		func_1074();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_1074()//Position - 0x39F45
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

void func_1075()//Position - 0x39F83
{
	int iVar0;
	
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_20 = -1;
	Global_2667225.f_2875 = -1f;
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_1077(iVar0);
		iVar0++;
	}
	if (func_1076(PLAYER::PLAYER_ID(), 0))
	{
		Global_2824571.f_89 = 1;
		Global_2824571.f_90 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_1076(bool bParam0, bool bParam1)//Position - 0x39FDA
{
	if (func_9(bParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2689235[bParam0 /*453*/].f_269.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2689235[bParam0 /*453*/].f_269.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_1077(int iParam0)//Position - 0x3A027
{
	bool bVar0;
	float fVar1;
	int iVar2;
	
	bVar0 = PLAYER::PLAYER_ID();
	if (Global_2689235[bVar0 /*453*/].f_269.f_14 != -1)
	{
		if (func_1088(Global_2689235[bVar0 /*453*/].f_269.f_14))
		{
			if (!func_1084(PLAYER::PLAYER_ID(), Global_2689235[bVar0 /*453*/].f_269.f_14, 0, 0))
			{
				Global_2689235[bVar0 /*453*/].f_269.f_14 = -1;
			}
		}
		else
		{
			Global_2689235[bVar0 /*453*/].f_269.f_14 = -1;
		}
	}
	if (Global_2689235[bVar0 /*453*/].f_269.f_16 != -1)
	{
		if (func_1088(Global_2689235[bVar0 /*453*/].f_269.f_16))
		{
			if (!func_1084(PLAYER::PLAYER_ID(), Global_2689235[bVar0 /*453*/].f_269.f_16, 0, 1))
			{
				Global_2689235[bVar0 /*453*/].f_269.f_16 = -1;
			}
		}
		else
		{
			Global_2689235[bVar0 /*453*/].f_269.f_16 = -1;
		}
	}
	if (Global_2689235[bVar0 /*453*/].f_269.f_15 != -1)
	{
		if (!func_1084(PLAYER::PLAYER_ID(), Global_2689235[bVar0 /*453*/].f_269.f_15, 0, 0))
		{
			Global_2689235[bVar0 /*453*/].f_269.f_15 = -1;
		}
	}
	if (func_1088(iParam0))
	{
		if (func_1084(PLAYER::PLAYER_ID(), iParam0, 0, 0))
		{
			if (!Global_2689235[bVar0 /*453*/].f_269.f_14 == iParam0)
			{
				Global_2689235[bVar0 /*453*/].f_269.f_14 = iParam0;
			}
		}
		if (func_1084(PLAYER::PLAYER_ID(), iParam0, 0, 1))
		{
			if (!Global_2689235[bVar0 /*453*/].f_269.f_16 == iParam0)
			{
				Global_2689235[bVar0 /*453*/].f_269.f_16 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (func_1079(PLAYER::PLAYER_ID(), iParam0, 1120403456))
		{
			MISC::SET_BIT(&(Global_2689235[bVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2689235[bVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(func_1078(iParam0), func_74(PLAYER::PLAYER_ID()));
		if (iParam0 == Global_2689235[bVar0 /*453*/].f_269.f_20)
		{
			Global_2667225.f_2875 = fVar1;
		}
		else if (fVar1 < Global_2667225.f_2875 || Global_2667225.f_2875 <= 0f)
		{
			Global_2667225.f_2875 = fVar1;
			Global_2689235[bVar0 /*453*/].f_269.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2689235[bVar0 /*453*/].f_269.f_20)
	{
		Global_2689235[bVar0 /*453*/].f_269.f_20 = -1;
		Global_2667225.f_2875 = -1f;
	}
	if (func_1084(PLAYER::PLAYER_ID(), iParam0, 0, 0))
	{
		if (!Global_2689235[bVar0 /*453*/].f_269.f_15 == iParam0)
		{
			Global_2689235[bVar0 /*453*/].f_269.f_15 = iParam0;
		}
	}
}

Vector3 func_1078(int iParam0)//Position - 0x3A2D5
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

int func_1079(bool bParam0, int iParam1, float fParam2)//Position - 0x3A2E9
{
	if (func_1083())
	{
		return 1;
	}
	if (func_1082(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1081()))
		{
			if (func_1080(ENTITY::GET_ENTITY_COORDS(func_1081(), true), iParam1, fParam2) && Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 == 8)
			{
				return 1;
			}
		}
		return func_1080(func_74(bParam0), iParam1, fParam2);
	}
	return 0;
}

int func_1080(struct<3> Param0, int iParam3, float fParam4)//Position - 0x3A34F
{
	if (func_1082(iParam3))
	{
		if (SYSTEM::VDIST2(Param0, func_1078(iParam3)) < (fParam4 * fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1081()//Position - 0x3A37C
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

int func_1082(int iParam0)//Position - 0x3A396
{
	if (iParam0 > -1 && iParam0 < 42)
	{
		return 1;
	}
	return 0;
}

int func_1083()//Position - 0x3A3B4
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_408(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_1084(bool bParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3A3EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1082(iParam1))
	{
		if (!bParam3)
		{
			return func_1085(func_74(bParam0), iParam1, fParam2);
		}
		else if (func_1085(func_74(bParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_1085(func_74(bParam0), iParam1, 15f))
		{
			if (func_9(bParam0, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
						{
							if (DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht"))
							{
								iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1085(struct<3> Param0, int iParam3, float fParam4)//Position - 0x3A4B8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (func_1082(iParam3))
	{
		func_1086(iParam3, &Var0, &Var3, &fVar6, fParam4);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true);
	}
	return 0;
}

void func_1086(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0x3A4EF
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	Var0 = { func_1078(iParam0) };
	fVar3 = func_1087(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_295(&Var4, 0f, 0f, fVar3);
	Var4 = { Var4 / FtoV(SYSTEM::VMAG(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0,5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0,5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0,5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0,5f * (34f + fParam4)));
	*uParam3 = (16,17f + fParam4);
}

var func_1087(int iParam0)//Position - 0x3A59F
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

int func_1088(int iParam0)//Position - 0x3A5B1
{
	if (func_1082(iParam0))
	{
		return Global_2824571.f_2[iParam0];
	}
	return 0;
}

void func_1089()//Position - 0x3A5D0
{
	Global_1888188 = -1;
	Global_1888194 = 0;
	Global_1888189 = -1;
}

void func_1090()//Position - 0x3A5E7
{
	Global_2667225.f_5 = 1;
}

void func_1091(float fParam0, int iParam1)//Position - 0x3A5F6
{
	struct<3> Var0;
	
	if (!func_849() || iParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				Var0 = { func_74(PLAYER::PLAYER_ID()) };
				if (Var0.f_2 > -80f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
				}
			}
		}
	}
}

void func_1092(int iParam0, bool bParam1)//Position - 0x3A65C
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0,3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			fVar4 = (Var0.f_2 - (fVar3 + 1f));
			if ((MISC::ABSF(fVar4) > 0f && MISC::ABSF(fVar4) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar3, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_1092(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_1093(struct<3> Param0, bool bParam3, int iParam4)//Position - 0x3A741
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar7;
	var uVar10;
	int iVar11;
	
	bVar2 = true;
	if (Global_2787931 && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
	{
		bVar2 = false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		fVar1 = func_1094(ENTITY::GET_ENTITY_MODEL(iVar0));
		fVar1 = (fVar1 * 0,5f);
		fVar1 = (fVar1 + 6f);
		if (bVar2)
		{
			MISC::CLEAR_AREA(Param0, fVar1, true, false, false, bParam3);
		}
		MISC::CLEAR_AREA_OF_VEHICLES(Param0, fVar1, true, false, true, true, bParam3, false, iParam4);
		FIRE::STOP_FIRE_IN_RANGE(Param0, 6f);
	}
	else
	{
		iVar11 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Param0.f_0, Param0.f_1, (Param0.f_2 - 2f), Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
		SHAPETEST::GET_SHAPE_TEST_RESULT(iVar11, &iVar3, &uVar4, &uVar7, &uVar10);
		MISC::CLEAR_AREA(Param0, 0,7f, true, false, false, bParam3);
		if (!iVar3 == 0)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Param0, 6f, true, false, true, true, bParam3, false, 0);
			if (bVar2)
			{
				if (bParam3)
				{
					MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 17);
				}
				else
				{
					MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 16);
				}
			}
		}
		FIRE::STOP_FIRE_IN_RANGE(Param0, 2,5f);
	}
}

float func_1094(int iParam0)//Position - 0x3A859
{
	struct<2> Var0;
	struct<2> Var3;
	
	func_290(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_1 - Var3.f_1));
}

void func_1095(int iParam0, int iParam1, bool bParam2)//Position - 0x3A887
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_1102())
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_1100(iVar1, &iVar0))
		{
			func_1096(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
}

void func_1096(int iParam0, int iParam1, int iParam2)//Position - 0x3A8DD
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		if (Global_1836578 && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, 1, 1, func_1099());
			return;
		}
		else if (func_1098())
		{
			func_1097(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam2, 1, func_1099());
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
			{
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam2);
			}
		}
		else
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam1, 1, func_1099());
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
			{
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam1);
			}
		}
	}
}

int func_1097(int iParam0, int iParam1)//Position - 0x3A983
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(bVar1, true);
			if (iParam1 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
			{
				NETWORK::_SET_RELATIONSHIP_TO_PLAYER(bVar1, true);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, true);
		return 1;
	}
	else
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	return 0;
}

bool func_1098()//Position - 0x3A9FF
{
	return Global_1836596;
}

int func_1099()//Position - 0x3AA0B
{
	if (func_185() != 0)
	{
		return 0;
	}
	if (!func_409(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_1100(int iParam0, int iParam1)//Position - 0x3AA43
{
	if (func_1101(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1101(int iParam0, var uParam1)//Position - 0x3AA5B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1102()//Position - 0x3AABA
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1103()//Position - 0x3AB00
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	
	Var3 = { func_74(PLAYER::PLAYER_ID()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_9(bVar1, 1, 1))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(bVar1)))
			{
				if (!bVar1 == PLAYER::PLAYER_ID())
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
					{
						fVar2 = SYSTEM::VMAG(func_74(bVar1) - Var3);
						if (fVar2 < 0,2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1104(struct<3> Param0)//Position - 0x3AB7C
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	
	iVar0 = VEHICLE::_GET_ALL_VEHICLES(&Global_1578027);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar7, false))
		{
			iVar8 = ENTITY::GET_ENTITY_MODEL(iVar7);
			Var9 = { ENTITY::GET_ENTITY_COORDS(iVar7, true) };
			fVar12 = ENTITY::GET_ENTITY_HEADING(iVar7);
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1578027[iVar6]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1578027[iVar6], false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1578027[iVar6], false))
			{
			}
			else if (func_1109(Global_1578027[iVar6]))
			{
			}
			else if (!func_1105(Global_1578027[iVar6]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Global_1578027[iVar6], false) };
				fVar4 = ENTITY::GET_ENTITY_HEADING(Global_1578027[iVar6]);
				iVar5 = ENTITY::GET_ENTITY_MODEL(Global_1578027[iVar6]);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_297(Var1, fVar4, iVar5, Var9, fVar12, iVar8, 0))
					{
						return 1;
					}
				}
				else if (func_288(Param0, Var1, fVar4, iVar5, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar6++;
	}
	return 0;
}

int func_1105(int iParam0)//Position - 0x3ACB7
{
	int iVar0;
	bool bVar1;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (func_9(bVar1, 0, 0))
				{
					if (func_1106(bVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1106(bool bParam0)//Position - 0x3AD18
{
	if (func_1108())
	{
		if (func_1107(NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0), &(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_352.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1107(int iParam0, var uParam1)//Position - 0x3AD49
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1108()//Position - 0x3AD75
{
	if (Global_2667225.f_2879 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1109(int iParam0)//Position - 0x3AD8D
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1110()//Position - 0x3ADD1
{
	if (!Global_2667225.f_712)
	{
		Global_2667225.f_712 = 1;
	}
	func_1475(0);
	if (Global_2667225.f_2673)
	{
		func_1111();
		Global_2667225.f_2673 = 0;
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
}

void func_1111()//Position - 0x3AE16
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	var uVar61;
	var uVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	struct<3> Var74;
	float fVar77;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((!Global_2667225.f_45.f_52 && !Global_2667225.f_45.f_53) && !Global_2667225.f_2674)
		{
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var1, &Var4, 1, 3f, 0f))
			{
				Var4.f_2 = (Var4.f_2 + 1f);
				bVar7 = true;
				if (!SYSTEM::VDIST(Var1, Var4) < 50f || Global_2667225.f_45.f_52)
				{
					bVar7 = false;
				}
			}
		}
		else if (Global_2667225.f_2674)
		{
			Global_2667225.f_2674 = 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar8 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		}
		fVar9 = 3f;
		Var10 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
		Var10 = { Var10 / FtoV(SYSTEM::VMAG(Var10)) };
		Var10 = { Var10 * Vector(fVar9, fVar9, fVar9) };
		Var13 = { Var10 };
		func_295(&Var13, 0f, 0f, -45f);
		Var16 = { Var10 };
		func_295(&Var16, 0f, 0f, -90f);
		Var19 = { Var10 };
		func_295(&Var19, 0f, 0f, 45f);
		Var22 = { Var10 };
		func_295(&Var22, 0f, 0f, 90f);
		if (bVar7)
		{
			Var25 = { Var4 - Var1 };
			Var28 = { func_348(Var25, 0f, 0f, 1f) };
			Var28 = { Var28 / FtoV(SYSTEM::VMAG(Var28)) };
			Var28 = { Var28 * Vector(0,2f, 0,2f, 0,2f) };
		}
		Var31 = { Var1 + Var10 };
		Var34 = { Var1 + Var13 };
		Var37 = { Var1 + Var16 };
		Var40 = { Var1 + Var19 };
		Var43 = { Var1 + Var22 };
		iVar46 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var31, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar47 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var34, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar48 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var37, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar49 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var40, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar50 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var43, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		if (bVar7)
		{
			iVar51 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var4, 0,2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		}
		iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar46, &iVar52, &uVar58, &uVar61, &uVar64);
		iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar47, &iVar53, &uVar58, &uVar61, &uVar64);
		iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar48, &iVar54, &uVar58, &uVar61, &uVar64);
		iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar49, &iVar55, &uVar58, &uVar61, &uVar64);
		iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar50, &iVar56, &uVar58, &uVar61, &uVar64);
		if (bVar7)
		{
			iVar65 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar51, &iVar57, &uVar58, &uVar61, &uVar64);
		}
		if (iVar65 == 0)
		{
		}
		iVar66 = (iVar66 + iVar52);
		iVar67 = (iVar67 + iVar53);
		iVar68 = (iVar68 + iVar54);
		iVar69 = (iVar69 + iVar55);
		iVar70 = (iVar70 + iVar56);
		if (bVar7)
		{
			iVar71 = (iVar71 + iVar57);
		}
		iVar72 = 99;
		iVar73 = -1;
		if (iVar66 < iVar72)
		{
			iVar72 = iVar66;
			iVar73 = 0;
		}
		if (iVar67 < iVar72)
		{
			iVar72 = iVar67;
			iVar73 = 1;
		}
		if (iVar69 < iVar72)
		{
			iVar72 = iVar69;
			iVar73 = 2;
		}
		if (iVar68 < iVar72)
		{
			iVar72 = iVar68;
			iVar73 = 3;
		}
		if (iVar70 < iVar72)
		{
			iVar72 = iVar70;
			iVar73 = 4;
		}
		if (bVar7)
		{
			if (iVar71 < iVar72)
			{
				iVar72 = iVar71;
				iVar73 = 5;
			}
		}
		if (bVar7 && iVar71 == 0)
		{
			fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D(Var25.f_0, Var25.f_1);
			func_1113(fVar8);
			return;
		}
		else if (iVar66 == 0)
		{
			return;
		}
		else if (Global_2667225.f_45.f_52)
		{
			Var74 = { Global_2667225.f_45.f_49 - Var1 };
			fVar77 = func_334(Var74, Var37);
			if (fVar77 <= 0f)
			{
				if (iVar67 == 0)
				{
					fVar8 = (fVar8 + -45f);
					func_1113(fVar8);
					return;
				}
				else if (iVar68 == 0)
				{
					fVar8 = (fVar8 + -90f);
					func_1113(fVar8);
					return;
				}
				else if (iVar69 == 0)
				{
					fVar8 = (fVar8 + 45f);
					func_1113(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 = (fVar8 + 90f);
					func_1113(fVar8);
					return;
				}
				else
				{
					func_1112(iVar73, fVar8, Var25);
				}
			}
			else if (iVar69 == 0)
			{
				fVar8 = (fVar8 + 45f);
				func_1113(fVar8);
				return;
			}
			else if (iVar70 == 0)
			{
				fVar8 = (fVar8 + 90f);
				func_1113(fVar8);
				return;
			}
			else if (iVar67 == 0)
			{
				fVar8 = (fVar8 + -45f);
				func_1113(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 = (fVar8 + -90f);
				func_1113(fVar8);
				return;
			}
			else
			{
				func_1112(iVar73, fVar8, Var25);
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (iVar68 == 0)
				{
					fVar8 = (fVar8 + -90f);
					func_1113(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 = (fVar8 + 90f);
					func_1113(fVar8);
					return;
				}
				else
				{
					func_1112(iVar73, fVar8, Var25);
				}
			}
			else if (iVar70 == 0)
			{
				fVar8 = (fVar8 + 90f);
				func_1113(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 = (fVar8 + -90f);
				func_1113(fVar8);
				return;
			}
			else
			{
				func_1112(iVar73, fVar8, Var25);
			}
		}
	}
}

void func_1112(int iParam0, float fParam1, struct<2> Param2, var uParam4)//Position - 0x3B37A
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_1113(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_1113(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_1113(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_1113(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Param2.f_0, Param2.f_1);
			func_1113(fParam1);
			return;
			break;
	}
}

void func_1113(float fParam0)//Position - 0x3B423
{
	if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
	}
	func_1091(0f, 1);
}

int func_1114(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)//Position - 0x3B447
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_1119(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2703735.f_910)
		{
			func_1119(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_408(0))
	{
		if (func_1730(PLAYER::PLAYER_ID(), 1, 0) && !(func_1118() || func_1117()))
		{
			if (((bParam9 && func_9(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
			{
			}
			else if (func_1729() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703735.f_910 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0,2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0,2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1,2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2703735.f_910 = 0;
				Global_2703735.f_911 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703735.f_912 || !Param0.f_1 == Global_2703735.f_912.f_1) || !Param0.f_2 == Global_2703735.f_912.f_2) || !fParam3 == Global_2703735.f_915)
	{
		if (Global_2703735.f_910 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703735.f_916) < func_403(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2703735.f_911 = 1;
		}
		else
		{
			Global_2703735.f_911 = 0;
		}
		Global_2703735.f_912 = { Param0 };
		Global_2703735.f_915 = fParam3;
		Global_2703735.f_910 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703735.f_910 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_100493.f_1393[44], 16))
			{
				func_1116(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2667225.f_502)))
			{
				Global_2667225.f_502 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2703735.f_917 = 0;
				}
			}
		}
		if (Global_2703735.f_917 > -1)
		{
			Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_910 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_1119(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_910 = 1;
		}
	}
	if (Global_2703735.f_910)
	{
		Global_23011.f_6 = 1;
		Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
		if (Global_2703735.f_917 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_1115(&(Global_2703735.f_917), Param0, fParam3, iVar0))
			{
				func_1119(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2703735.f_912) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_1119(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2703735.f_918 = 1;
						return 0;
					}
				}
				func_1119(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_1115(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x3B95B
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_919) && !ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_919))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2703735.f_919, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2703735.f_919, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1116(int iParam0)//Position - 0x3B9FE
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

bool func_1117()//Position - 0x3BA53
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

bool func_1118()//Position - 0x3BA7C
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

void func_1119(bool bParam0, bool bParam1)//Position - 0x3BA98
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_1121();
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14) && !func_1083())
	{
		func_1120();
	}
}

void func_1120()//Position - 0x3BB08
{
	Global_2824571.f_92 = 1;
}

void func_1121()//Position - 0x3BB17
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_1122(struct<3> Param0)//Position - 0x3BB64
{
	Global_2667225.f_45.f_302 = 1;
	Global_2667225.f_45.f_299 = { Param0 };
	Global_2667225.f_45.f_318 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
	func_1123(1);
}

void func_1123(bool bParam0)//Position - 0x3BB9E
{
	float fVar0;
	
	if (Global_1836584 || Global_2667225.f_45.f_303)
	{
		if (Global_2667225.f_45.f_302)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (Global_1836588)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_2667225.f_45.f_299) < fVar0 || func_1127(PLAYER::PLAYER_ID())) || func_1730(PLAYER::PLAYER_ID(), 0, 0)))
				{
					if ((func_1126() || func_1125()) || func_1124())
					{
						if (PAD::IS_CONTROL_PRESSED(0, 351))
						{
							Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							func_1095(1000, 0, 1);
						}
						else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2667225.f_45.f_318, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 2000)
						{
							func_1095(2500, 0, bParam0);
							Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						}
					}
					else
					{
						Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_1095(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2667225.f_45.f_299 = { 0f, 0f, 0f };
					Global_2667225.f_45.f_302 = 0;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_174))
		{
			func_1496(&(Global_2667225.f_45.f_174));
		}
	}
}

int func_1124()//Position - 0x3BD07
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1125()//Position - 0x3BD42
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1126()//Position - 0x3BD7D
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1127(bool bParam0)//Position - 0x3BDB8
{
	if (Global_2689235[bParam0 /*453*/].f_215 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1128(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3BDD4
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1327(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var4) < 5f || !iParam2 == -1)
		{
			Var4.f_2 = (Var4.f_2 + -4f);
			Var4.f_0 = (Var4.f_0 + -4f);
			Var4.f_1 = (Var4.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var4, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (func_1324(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_1129(0);
			}
		}
	}
}

void func_1129(bool bParam0)//Position - 0x3BEDE
{
	struct<14> Var0;
	int iVar14;
	
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !func_1323(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar14 = func_182(589, -1, 0);
				}
			}
			else
			{
				iVar14 = Global_2667225.f_2699;
			}
			Var0 = { func_1280(func_1322(), 14, iVar14, -1) };
			func_1279(PLAYER::PLAYER_PED_ID(), 14, iVar14);
			func_1130(PLAYER::PLAYER_PED_ID(), 14, iVar14, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1130(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_1130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3BFB5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar31;
	var uVar41;
	int iVar58;
	var uVar59;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	float fVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	var uVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
		if (!func_1278(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_1273(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { func_1269(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { func_1280(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_1268(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_1273(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { func_1280(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_78190 };
							}
							else
							{
								uVar31 = { func_1265(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { func_1280(iVar5, 14, uVar31[iVar1], -1) };
								func_1264(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1273(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_1268(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1130(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1273(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_1280(iVar5, iVar0, func_1260(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar41 = { func_1269(iVar5, 0) };
					func_1130(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar58 = func_1259();
			if (iVar58 != -1)
			{
				func_1257(iVar58, 0, iParam10);
			}
			func_1253(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar59 = { func_1265(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_1280(iVar5, 14, uVar59[iVar1], -1) };
			func_1264(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1273(iVar5, 14, uVar59[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1251(iParam0, iVar5, 14, uVar59[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_1264(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_1273(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (unk_0x7796B21B76221BC5(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1130(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1245(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar69 = func_1268(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar69) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar69) != Global_78130[1 /*14*/].f_4)
		{
			iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar71 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 307252627, 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -2095729091, 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, 307252627, 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar72 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar73 = func_1243(iParam0, 11);
				iVar74 = func_1243(iParam0, 8);
				iVar75 = func_1243(iParam0, 4);
				if (unk_0x7796B21B76221BC5(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar72 = func_1242(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar72 = func_1242(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = func_1243(iParam0, 8);
					}
				}
				iVar76 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("GLOVES"), 0))
				{
					iVar77 = func_1241(iVar5, iVar74, iVar73, iVar75);
					if (iVar77 == -99)
					{
						iVar77 = func_1251(iParam0, iVar5, 11, iVar73, 3, 0);
					}
					switch (iVar76)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar77 = 11;
							iVar72 = func_1242(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("DRESS"), 0))
							{
								iVar77 = -99;
							}
							break;
					}
					if (iVar77 != -99)
					{
						iVar78 = 0;
						while (iVar78 < 18)
						{
							if (func_1240(iVar5, iVar77, iVar78) == iVar76)
							{
								iVar10 = iVar78;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar78++;
						}
					}
				}
				iVar72 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar73 = func_1243(iParam0, 11);
					if (iVar73 >= 256)
					{
						iVar72 = func_1242(iVar5, iVar73, 11, 4);
					}
					if (iVar73 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("VEST_SHIRT"), 0))
					{
						iVar79 = func_1238(iVar5, iVar73, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar79 != -99)
						{
							func_1130(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1237(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar73 >= 237)
						{
							iVar72 = func_1242(iVar5, iVar73, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar73 >= 256)
						{
							iVar72 = func_1242(iVar5, iVar73, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_1237(iVar5, iVar73, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar73 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar73 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar80 = func_1236(iParam0, iParam2);
							iVar81 = func_1238(iVar5, iVar73, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar81 != -99)
							{
								func_1130(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar80 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1130(iParam0, 8, iVar80, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar82 = func_1234(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar82, -1) };
									iVar81 = func_1238(iVar5, iVar82, iParam2, Global_78130[1 /*14*/].f_4);
									iVar83 = func_1242(iVar5, iParam2, 11, 3);
									if ((iVar81 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("OPEN_SHORT"), 0))
									{
										iVar81 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar81 = 120;
									}
									else
									{
										iVar81 = 48;
									}
								}
								func_1130(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar73, -1) };
						iVar84 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iParam2, -1) };
						iVar85 = Global_78130[1 /*14*/].f_3;
						if (iVar84 != iVar85)
						{
							iVar87 = func_1236(iParam0, iParam2);
							Global_78130[1 /*14*/] = { func_1280(iVar5, 8, iVar74, -1) };
							iVar86 = Global_78130[1 /*14*/].f_4;
							iVar88 = func_1233(iVar5, iVar74, iVar86);
							if (iVar87 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar89 = iVar87;
							}
							else if (iVar88 == -99)
							{
								iVar89 = iVar74;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar90 = func_1242(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1232(iVar90) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, joaat("BIKER_VEST"), 0))
									{
										iVar88 = func_1234(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar88, -1) };
										iVar89 = func_1238(iVar5, iVar88, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar74 == 32 || iVar74 == 33) || iVar74 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar88 = func_1234(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar88, -1) };
										iVar89 = func_1238(iVar5, iVar88, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar91 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar91 = func_1242(iVar5, iVar74, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar91 = func_1242(iVar5, iVar74, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar91, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar88 = func_1234(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar88, -1) };
									iVar89 = func_1238(iVar5, iVar88, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar89 = func_1238(iVar5, iVar88, iParam2, iVar86);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1231(iVar5, func_1243(iParam0, 4), iVar88))
										{
											iVar89 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1231(iVar5, func_1243(iParam0, 4), iVar88))
										{
											iVar89 = 48;
										}
									}
								}
							}
							if (iVar89 != -99)
							{
								func_1130(iParam0, 8, iVar89, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar88 = func_1234(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar88, -1) };
								iVar89 = func_1238(iVar5, iVar88, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar89 == -99)
								{
									iVar89 = 240;
								}
								func_1130(iParam0, 8, iVar89, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1130(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1228(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1253(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, func_1260(iParam0, 8, -1), iParam2, func_1260(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_182(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_182(2160, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar92 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar92 = func_1226(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar92 = func_1224(iParam2);
					}
					if (iVar92 != -99 && iParam2 != iVar92)
					{
						iParam2 = iVar92;
					}
				}
				func_1184(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("GLOVES"), 0))
			{
				iVar94 = func_1243(iParam0, 11);
				iVar95 = func_1243(iParam0, 4);
				iVar96 = func_1241(iVar5, iParam2, iVar94, iVar95);
				if (iVar96 == -99)
				{
					iVar96 = func_1251(iParam0, iVar5, 11, iVar94, 3, 0);
				}
				switch (iVar93)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar96 = 11;
						iVar97 = func_1242(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar97, joaat("DRESS"), 0))
						{
							iVar96 = -99;
						}
						break;
				}
				if (iVar96 != -99)
				{
					iVar98 = 0;
					while (iVar98 < 18)
					{
						if (func_1240(iVar5, iVar96, iVar98) == iVar93)
						{
							iVar10 = iVar98;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar98++;
					}
				}
			}
			func_1253(iParam0, iParam1, iParam2, iParam6, 0);
			iVar99 = func_1243(iParam0, 11);
			if (func_1237(iVar5, iVar99, -1))
			{
				iVar100 = func_1233(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_1228(iVar5, iVar100);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, iParam2, func_1243(iParam0, 11), func_1243(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar101 = func_1243(iParam0, 7);
				if (!func_1181(iVar5, iVar101, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar102 = func_182(2100, iParam10, 0);
				iVar103 = func_182(2101, iParam10, 0);
				iVar104 = func_182(2102, iParam10, 0);
				fVar105 = func_1180(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar102, iVar103, iVar104, 0f, fVar105, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar102, iVar103, iVar104, 0f, fVar105, 0f, false);
				}
				iVar106 = 0;
				while (iVar106 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar106, 0f);
					iVar106++;
				}
			}
			else
			{
				func_1166(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar107 = func_1243(iParam0, 11);
			iVar108 = func_1243(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iVar107, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1231(iVar5, iParam2, func_1233(iVar5, iVar108, 0)))
					{
						func_1130(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1242(iVar5, iVar107, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1231(iVar5, iParam2, func_1233(iVar5, iVar108, 0)))
					{
						func_1130(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, func_1243(iParam0, 8), func_1243(iParam0, 11), iParam2);
			}
			iVar109 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar109, joaat("GLOVES"), 0))
			{
				iVar110 = func_1241(iVar5, iVar108, iVar107, iParam2);
				if (iVar110 == -99)
				{
					iVar110 = func_1251(iParam0, iVar5, 11, iVar107, 3, 0);
				}
				switch (iVar109)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar110 = 11;
						iVar111 = func_1242(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar111, joaat("DRESS"), 0))
						{
							iVar110 = -99;
						}
						break;
				}
				if (iVar110 != -99)
				{
					iVar112 = 0;
					while (iVar112 < 18)
					{
						if (func_1240(iVar5, iVar110, iVar112) == iVar109)
						{
							iVar10 = iVar112;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar112++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_1268(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_1268(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_1241(iVar5, iVar3, func_1243(iParam0, 11), func_1243(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1165(iParam0))
				{
					iVar113 = func_1163(iParam0, iVar5, iParam1, iParam2);
					if (iVar113 > 0)
					{
						iVar113 = (iVar113 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_1157(iParam0, 9, iVar113))
						{
							func_1130(iParam0, 9, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (unk_0x7796B21B76221BC5(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar114 = func_182(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_1151(iParam0, iVar114), func_1150(iParam0, iVar114), func_1149(iParam0, iVar114));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_1151(PLAYER::PLAYER_PED_ID(), iVar114), func_1150(PLAYER::PLAYER_PED_ID(), iVar114), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_1149(PLAYER::PLAYER_PED_ID(), iVar114));
					func_1147(PLAYER::PLAYER_ID(), iVar114);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar115 = func_1260(iParam0, 4, -1);
					iVar116 = iParam2;
				}
				else
				{
					iVar115 = iParam2;
					iVar116 = func_1260(iParam0, 11, -1);
				}
				if (func_1146(iVar5, 11, iVar116, -1))
				{
					if (!func_1145(iVar5, 4, iVar115, -1))
					{
						if (func_1144(iVar5, 4, iVar115, &uVar117))
						{
							func_1130(iParam0, 4, uVar117, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1145(iVar5, 4, iVar115, -1))
				{
					if (func_1143(iVar5, 4, iVar115, &uVar117))
					{
						func_1130(iParam0, 4, uVar117, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar118 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar119 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar120 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar118, iVar119);
				iVar121 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar122 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar123 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar121, iVar122);
				iVar124 = func_1243(iParam0, 4);
				iVar125 = func_1243(iParam0, 6);
				if (func_1142(iVar5, iVar120))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar120, joaat("ALT_FEET"), 0) != func_1141(iVar5, iVar124, iVar120))
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar120);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_VARIANT_COMPONENT(iVar120, iVar127, &iVar128, &uVar129, &iVar130);
							if (iVar130 == 6)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar125 = func_1137(iVar5, iVar128, 6, 3);
										iVar120 = iVar128;
										func_1130(iParam0, 6, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar125 = func_1137(iVar5, iVar128, 6, 4);
										iVar120 = iVar128;
										func_1130(iParam0, 6, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar123, joaat("ALT_LEGS"), 0) != func_1136(iVar5, iVar125, iVar123))
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar123);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_VARIANT_COMPONENT(iVar123, iVar127, &iVar128, &uVar129, &iVar130);
							if (iVar130 == 4)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar124 = func_1137(iVar5, iVar128, 4, 3);
										iVar123 = iVar128;
										func_1130(iParam0, 4, iVar124, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar124 = func_1137(iVar5, iVar128, 4, 4);
										iVar123 = iVar128;
										func_1130(iParam0, 4, iVar124, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
				if (func_1142(iVar5, iVar123))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar123, joaat("ALT_LEGS"), 0) != func_1136(iVar5, iVar125, iVar123))
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar123);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_VARIANT_COMPONENT(iVar123, iVar127, &iVar128, &uVar129, &iVar130);
							if (iVar130 == 4)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar124 = func_1137(iVar5, iVar128, 4, 3);
										iVar123 = iVar128;
										func_1130(iParam0, 4, iVar124, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar124 = func_1137(iVar5, iVar128, 4, 4);
										iVar123 = iVar128;
										func_1130(iParam0, 4, iVar124, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar120, joaat("ALT_FEET"), 0) != func_1141(iVar5, iVar124, iVar120))
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar120);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_VARIANT_COMPONENT(iVar120, iVar127, &iVar128, &uVar129, &iVar130);
							if (iVar130 == 6)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar125 = func_1137(iVar5, iVar128, 6, 3);
										iVar120 = iVar128;
										func_1130(iParam0, 6, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar125 = func_1137(iVar5, iVar128, 6, 4);
										iVar120 = iVar128;
										func_1130(iParam0, 6, iVar125, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_1245(iParam0);
				iVar131 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar132 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar133 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar131, iVar132);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar133, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1131(iParam0, &uVar4))
		{
			func_1130(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1130(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1130(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1130(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar134 = func_1240(iVar5, func_1260(iParam0, 3, -1), iVar10);
		if (iVar134 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_1137(iVar5, iVar134, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar9 = func_1137(iVar5, iVar134, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_1130(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1131(int iParam0, var uParam1)//Position - 0x3DE61
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1260(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (func_182(754, Global_78127, 0) != -99 && func_1133())
	{
		if (func_1132() == 4)
		{
			return 1;
		}
		if (func_182(754, Global_78127, 0) == 0 && func_182(755, Global_78127, 0) == 0)
		{
			if (func_866(161, Global_78127))
			{
				if (func_182(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_182(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_182(754, Global_78127, 0);
		iVar1 = func_182(755, Global_78127, 0);
		if (!func_1157(iParam0, iVar1, iVar0))
		{
			if (func_866(161, Global_78127))
			{
				*uParam1 = func_182(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = func_182(753, Global_78127, 0);
			}
			func_641(754, -99, Global_78127, 1, 0);
			func_641(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1132()//Position - 0x3DF75
{
	return Global_1574990;
}

int func_1133()//Position - 0x3DF81
{
	if (func_1135() && func_1134(0))
	{
		return 1;
	}
	return 0;
}

var func_1134(int iParam0)//Position - 0x3DF9F
{
	return Global_1574538[iParam0];
}

var func_1135()//Position - 0x3DFAF
{
	return func_1134(func_72() + 1);
}

int func_1136(int iParam0, int iParam1, int iParam2)//Position - 0x3DFC1
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1242(iParam0, iParam1, 6, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1242(iParam0, iParam1, 6, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_1137(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3E23E
{
	struct<2> Var0;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == 12)
	{
		iVar16 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar15 = 0;
		while (iVar15 < iVar16)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_1140(iParam0) + iVar15);
			}
			iVar15++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar17 = FILES::_0x6CEBE002E58DEE97(iParam1);
		if (iVar17 != -1)
		{
			return (func_1139(iParam0) + iVar17);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_1268(iParam2));
		iVar18 = FILES::_0x96E2929292A4DB77(iParam1);
		if (iVar18 != -1)
		{
			return (func_1138(iParam0, func_1268(iParam2)) + iVar18);
		}
	}
	return -99;
}

int func_1138(int iParam0, int iParam1)//Position - 0x3E2F9
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_1139(int iParam0)//Position - 0x3E6A0
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_1140(int iParam0)//Position - 0x3E701
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_1141(int iParam0, int iParam1, int iParam2)//Position - 0x3E760
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1242(iParam0, iParam1, 4, 3);
				iVar1 = func_1232(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SKINNY"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1854729816, 0))
				{
					iVar2 = 0;
				}
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1242(iParam0, iParam1, 4, 4);
				iVar1 = func_1232(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("DUNGAREES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_1142(int iParam0, int iParam1)//Position - 0x3ED47
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1143(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3EDB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1242(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1137(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1144(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3EE5C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_1242(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1137(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1145(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3EF04
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1242(iParam0, iParam2, 4, 4);
						}
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1146(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3EF5A
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_1242(iParam0, iParam2, 11, 4);
						}
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1147(int iParam0, int iParam1)//Position - 0x3EFAD
{
	int iVar0;
	
	iVar0 = func_1148(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_1148(int iParam0)//Position - 0x3EFD8
{
	if (iParam0 > 66)
	{
		return -1607992101;
	}
	else if (iParam0 > 63)
	{
		return 1762874299;
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_1149(int iParam0, int iParam1)//Position - 0x3F05F
{
	return 0;
}

int func_1150(int iParam0, int iParam1)//Position - 0x3F068
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_1151(int iParam0, int iParam1)//Position - 0x3F40B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_78291 || iParam1 != Global_78292) || iVar4 != Global_78293) || iVar5 != Global_78294) || iVar6 != Global_78295) || iVar0 != Global_78296) || iVar1 != Global_78297) || iVar2 != Global_78298)
	{
		Global_78291 = bVar3;
		Global_78292 = iParam1;
		Global_78293 = iVar4;
		Global_78294 = iVar5;
		Global_78295 = iVar6;
		Global_78296 = iVar0;
		Global_78297 = iVar1;
		Global_78298 = iVar2;
		Global_78299 = func_1152(iParam0, iParam1);
	}
	return Global_78299;
}

int func_1152(int iParam0, int iParam1)//Position - 0x3F51B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_1156(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		return func_1156(iParam0, iParam1, 9);
	}
	if (func_1155(iParam0))
	{
		if (bVar1)
		{
			return func_1156(iParam0, iParam1, 7);
		}
		else
		{
			return func_1156(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0))
		{
			return func_1156(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0))
		{
			return func_1156(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0))
		{
			return func_1156(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0))
		{
			return func_1156(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0))
		{
			return func_1156(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0))
		{
			return func_1156(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0))
		{
			return func_1156(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0))
		{
			return func_1156(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0))
		{
			return func_1156(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0))
		{
			return func_1156(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0))
		{
			return func_1156(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0))
		{
			return func_1156(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1156(iParam0, iParam1, 5);
			}
			else
			{
				return func_1156(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_1156(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_1154(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_1156(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_1156(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_1232(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_1156(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_1232(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_1153(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_1156(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1156(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1156(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1156(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1156(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1156(iParam0, iParam1, 9);
					}
					else
					{
						return func_1156(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1156(iParam0, iParam1, 9);
					}
					else
					{
						return func_1156(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1156(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_1232(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 8);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_1156(iParam0, iParam1, 10);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 6);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 9);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 0);
			}
			else
			{
				return func_1156(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_1156(iParam0, iParam1, 10);
				}
				else
				{
					return func_1156(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 3);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 1);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 9);
			}
			else
			{
				return func_1156(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 10);
			}
			else
			{
				return func_1156(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_1156(iParam0, iParam1, 7);
			}
			else
			{
				return func_1156(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1156(iParam0, iParam1, 2);
			}
			else
			{
				return func_1156(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
		{
			return func_1156(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_1232(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 2);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 2);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 2);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 2);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 5);
				}
				else
				{
					return func_1156(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 3);
				}
				else
				{
					return func_1156(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 5);
				}
				else
				{
					return func_1156(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_1156(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 6);
				}
				else
				{
					return func_1156(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 7);
				}
				else
				{
					return func_1156(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_1156(iParam0, iParam1, 1);
				}
				else
				{
					return func_1156(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_1156(iParam0, iParam1, 0);
	return 0;
}

int func_1153(int iParam0, int iParam1)//Position - 0x41CBE
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_1154(int iParam0, int iParam1)//Position - 0x41E5E
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_1155(int iParam0)//Position - 0x41FA2
{
	if (unk_0x7796B21B76221BC5(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_1156(int iParam0, int iParam1, int iParam2)//Position - 0x41FBE
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

int func_1157(int iParam0, int iParam1, int iParam2)//Position - 0x4267F
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	var uVar68;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { func_1280(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_1269(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_1157(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_1265(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_1157(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_1280(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1157(iParam0, 14, iVar6))
										{
											if (!func_1158(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_1243(iParam0, iVar4);
						Global_78130[2 /*14*/] = { func_1280(iVar0, iVar4, iVar1, -1) };
						if (!func_1158(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_182(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_1265(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_1157(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar50 = FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				FILES::_GET_VARIANT_PROP(Global_2883588, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var51);
					FILES::GET_SHOP_PED_PROP(iVar47, &Var51);
					if (Var51.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var51.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_1268(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_1268(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (func_1146(iVar0, 11, func_1243(iParam0, 11), -1))
				{
					if (func_1144(iVar0, 4, iParam2, &uVar68))
					{
						return func_1157(iParam0, 4, uVar68);
					}
				}
				else if (func_1143(iVar0, 4, iParam2, &uVar68))
				{
					return func_1157(iParam0, 4, uVar68);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_1158(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x42AD9
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_1265(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_1162(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_1161(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_1160(iParam0, iParam2, iParam3, -1))
		{
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				{
					return 0;
	}
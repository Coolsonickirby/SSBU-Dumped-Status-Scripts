
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b4150(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack1304 [16];
  L2CValue aLStack1288 [16];
  L2CValue aLStack1272 [16];
  L2CValue aLStack1256 [16];
  L2CValue aLStack1240 [16];
  L2CValue aLStack1224 [16];
  L2CValue aLStack1208 [16];
  L2CValue aLStack1192 [16];
  L2CValue aLStack1176 [16];
  L2CValue aLStack1160 [16];
  L2CValue aLStack1144 [16];
  L2CValue aLStack1128 [16];
  L2CValue aLStack1112 [16];
  L2CValue aLStack1096 [16];
  L2CValue aLStack1080 [16];
  L2CValue aLStack1064 [16];
  L2CValue aLStack1048 [16];
  L2CValue aLStack1032 [16];
  L2CValue aLStack1016 [16];
  L2CValue aLStack1000 [16];
  L2CValue aLStack984 [16];
  L2CValue aLStack968 [16];
  L2CValue aLStack952 [16];
  L2CValue aLStack936 [16];
  L2CValue aLStack920 [16];
  L2CValue aLStack904 [16];
  L2CValue aLStack888 [16];
  L2CValue aLStack872 [16];
  L2CValue aLStack856 [16];
  L2CValue aLStack840 [16];
  L2CValue aLStack824 [16];
  L2CValue aLStack808 [16];
  L2CValue aLStack792 [16];
  L2CValue aLStack776 [16];
  L2CValue aLStack760 [16];
  L2CValue aLStack744 [16];
  L2CValue aLStack728 [16];
  L2CValue aLStack712 [16];
  L2CValue aLStack696 [16];
  L2CValue aLStack680 [16];
  L2CValue aLStack664 [16];
  L2CValue aLStack648 [16];
  L2CValue aLStack632 [16];
  L2CValue aLStack616 [16];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::operator!(param_9);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack168,param_10);
    lib::L2CValue::L2CValue(aLStack184,true);
    FUN_71000b5630(aLStack152,param_2,aLStack168,aLStack184);
    lib::L2CValue::operator!(aLStack152);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack168);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(param_1,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
      return;
    }
  }
  lib::L2CValue::operator!(param_8);
  lib::L2CValue::L2CValue(aLStack136,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack216,0xea74d9ce5);
  uVar4 = lib::L2CValue::as_integer(aLStack136);
  uVar5 = lib::L2CValue::as_integer(aLStack216);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack200,iVar2);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lib::L2CValue::L2CValue(aLStack248,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack264,0x13fe6fc17a);
  uVar4 = lib::L2CValue::as_integer(aLStack248);
  uVar5 = lib::L2CValue::as_integer(aLStack264);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack136,fVar9);
  fVar9 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack280,fVar9);
  lib::L2CValue::operator*(aLStack136,aLStack280);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_7);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack1160,param_3);
    lib::L2CValue::L2CValue(aLStack1176,aLStack200);
    lib::L2CValue::operator*(aLStack232,param_6);
    lib::L2CValue::L2CValue(aLStack1208,param_6);
    lib::L2CValue::L2CValue(aLStack1224,param_4);
    lib::L2CValue::L2CValue(aLStack1240,param_5);
    lib::L2CValue::L2CValue(aLStack1256,true);
    lib::L2CValue::L2CValue(aLStack1272,aLStack152);
    lib::L2CValue::L2CValue(aLStack1288,0);
    FUN_71000b5c10(aLStack136,param_2,aLStack1160,aLStack1176,aLStack1192,aLStack1208,aLStack1224,
                   aLStack1240,aLStack1256,aLStack1272,aLStack1288);
    lib::L2CValue::operator=(aLStack216,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack1288);
    lib::L2CValue::~L2CValue(aLStack1272);
    lib::L2CValue::~L2CValue(aLStack1256);
    lib::L2CValue::~L2CValue(aLStack1240);
    lib::L2CValue::~L2CValue(aLStack1224);
    lib::L2CValue::~L2CValue(aLStack1208);
    lib::L2CValue::~L2CValue(aLStack1192);
    lib::L2CValue::~L2CValue(aLStack1176);
    pLVar6 = aLStack1160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack136,1);
    uVar4 = lib::L2CValue::operator==(aLStack200,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack136,2);
      uVar4 = lib::L2CValue::operator==(aLStack200,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack728,param_3);
        lib::L2CValue::L2CValue(aLStack744,1);
        lib::L2CValue::operator-(param_6);
        lib::L2CValue::operator*(aLStack232,aLStack136);
        lib::L2CValue::operator-(param_6);
        lib::L2CValue::L2CValue(aLStack792,param_4);
        lib::L2CValue::L2CValue(aLStack808,param_5);
        lib::L2CValue::L2CValue(aLStack824,false);
        lib::L2CValue::L2CValue(aLStack840,aLStack152);
        lib::L2CValue::L2CValue(aLStack856,0);
        FUN_71000b5c10(aLStack248,param_2,aLStack728,aLStack744,aLStack760,aLStack776,aLStack792,
                       aLStack808,aLStack824,aLStack840,aLStack856);
        lib::L2CValue::~L2CValue(aLStack856);
        lib::L2CValue::~L2CValue(aLStack840);
        lib::L2CValue::~L2CValue(aLStack824);
        lib::L2CValue::~L2CValue(aLStack808);
        lib::L2CValue::~L2CValue(aLStack792);
        lib::L2CValue::~L2CValue(aLStack776);
        lib::L2CValue::~L2CValue(aLStack760);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack744);
        lib::L2CValue::~L2CValue(aLStack728);
        lib::L2CValue::L2CValue(aLStack872,param_3);
        lib::L2CValue::L2CValue(aLStack888,1);
        lib::L2CValue::L2CValue(aLStack904,0.0);
        lib::L2CValue::L2CValue(aLStack920,param_6);
        lib::L2CValue::L2CValue(aLStack936,param_4);
        lib::L2CValue::L2CValue(aLStack952,param_5);
        lib::L2CValue::L2CValue(aLStack968,true);
        lib::L2CValue::L2CValue(aLStack984,aLStack152);
        lib::L2CValue::L2CValue(aLStack1000,0);
        FUN_71000b5c10(aLStack264,param_2,aLStack872,aLStack888,aLStack904,aLStack920,aLStack936,
                       aLStack952,aLStack968,aLStack984,aLStack1000);
        lib::L2CValue::~L2CValue(aLStack1000);
        lib::L2CValue::~L2CValue(aLStack984);
        lib::L2CValue::~L2CValue(aLStack968);
        lib::L2CValue::~L2CValue(aLStack952);
        lib::L2CValue::~L2CValue(aLStack936);
        lib::L2CValue::~L2CValue(aLStack920);
        lib::L2CValue::~L2CValue(aLStack904);
        lib::L2CValue::~L2CValue(aLStack888);
        lib::L2CValue::~L2CValue(aLStack872);
        lib::L2CValue::L2CValue(aLStack1016,param_3);
        lib::L2CValue::L2CValue(aLStack136,2);
        lib::L2CValue::operator-(aLStack200,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::operator*(aLStack232,param_6);
        lib::L2CValue::L2CValue(aLStack1064,param_6);
        lib::L2CValue::L2CValue(aLStack1080,param_4);
        lib::L2CValue::L2CValue(aLStack1096,param_5);
        lib::L2CValue::L2CValue(aLStack1112,true);
        lib::L2CValue::L2CValue(aLStack1128,aLStack152);
        lib::L2CValue::L2CValue(aLStack1144,1);
        FUN_71000b5c10(aLStack280,param_2,aLStack1016,aLStack1032,aLStack1048,aLStack1064,
                       aLStack1080,aLStack1096,aLStack1112,aLStack1128,aLStack1144);
        lib::L2CValue::operator=(aLStack216,aLStack280);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack1144);
        lib::L2CValue::~L2CValue(aLStack1128);
        lib::L2CValue::~L2CValue(aLStack1112);
        lib::L2CValue::~L2CValue(aLStack1096);
        lib::L2CValue::~L2CValue(aLStack1080);
        lib::L2CValue::~L2CValue(aLStack1064);
        lib::L2CValue::~L2CValue(aLStack1048);
        lib::L2CValue::~L2CValue(aLStack1032);
        lib::L2CValue::~L2CValue(aLStack1016);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0x7b23db7b8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x7b23db7b8);
        lib::L2CValue::operator+(pLVar6,pLVar7);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x7b23db7b8);
        lib::L2CValue::operator+(aLStack280,pLVar6);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0x7b23db7b8);
        lib::L2CValue::operator=(pLVar6,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack264);
        pLVar6 = aLStack248;
      }
      else {
        lib::L2CValue::L2CValue(aLStack440,param_3);
        lib::L2CValue::L2CValue(aLStack456,1);
        lib::L2CValue::operator-(param_6);
        lib::L2CValue::operator*(aLStack232,aLStack248);
        lib::L2CValue::operator-(param_6);
        lib::L2CValue::L2CValue(aLStack504,param_4);
        lib::L2CValue::L2CValue(aLStack520,param_5);
        lib::L2CValue::L2CValue(aLStack536,false);
        lib::L2CValue::L2CValue(aLStack552,aLStack152);
        lib::L2CValue::L2CValue(aLStack568,0);
        FUN_71000b5c10(aLStack136,param_2,aLStack440,aLStack456,aLStack472,aLStack488,aLStack504,
                       aLStack520,aLStack536,aLStack552,aLStack568);
        lib::L2CValue::~L2CValue(aLStack568);
        lib::L2CValue::~L2CValue(aLStack552);
        lib::L2CValue::~L2CValue(aLStack536);
        lib::L2CValue::~L2CValue(aLStack520);
        lib::L2CValue::~L2CValue(aLStack504);
        lib::L2CValue::~L2CValue(aLStack488);
        lib::L2CValue::~L2CValue(aLStack472);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue(aLStack456);
        lib::L2CValue::~L2CValue(aLStack440);
        lib::L2CValue::L2CValue(aLStack584,param_3);
        lib::L2CValue::L2CValue(aLStack600,1);
        lib::L2CValue::L2CValue(aLStack616,0.0);
        lib::L2CValue::L2CValue(aLStack632,param_6);
        lib::L2CValue::L2CValue(aLStack648,param_4);
        lib::L2CValue::L2CValue(aLStack664,param_5);
        lib::L2CValue::L2CValue(aLStack680,true);
        lib::L2CValue::L2CValue(aLStack696,aLStack152);
        lib::L2CValue::L2CValue(aLStack712,1);
        FUN_71000b5c10(aLStack248,param_2,aLStack584,aLStack600,aLStack616,aLStack632,aLStack648,
                       aLStack664,aLStack680,aLStack696,aLStack712);
        lib::L2CValue::operator=(aLStack216,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue(aLStack712);
        lib::L2CValue::~L2CValue(aLStack696);
        lib::L2CValue::~L2CValue(aLStack680);
        lib::L2CValue::~L2CValue(aLStack664);
        lib::L2CValue::~L2CValue(aLStack648);
        lib::L2CValue::~L2CValue(aLStack632);
        lib::L2CValue::~L2CValue(aLStack616);
        lib::L2CValue::~L2CValue(aLStack600);
        lib::L2CValue::~L2CValue(aLStack584);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0x7b23db7b8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x7b23db7b8);
        lib::L2CValue::operator+(pLVar6,pLVar7);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0x7b23db7b8);
        lib::L2CValue::operator=(pLVar6,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        pLVar6 = aLStack136;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack296,param_3);
      lib::L2CValue::L2CValue(aLStack312,1);
      lib::L2CValue::L2CValue(aLStack328,0.0);
      lib::L2CValue::L2CValue(aLStack344,param_6);
      lib::L2CValue::L2CValue(aLStack360,param_4);
      lib::L2CValue::L2CValue(aLStack376,param_5);
      lib::L2CValue::L2CValue(aLStack392,true);
      lib::L2CValue::L2CValue(aLStack408,aLStack152);
      lib::L2CValue::L2CValue(aLStack424,1);
      FUN_71000b5c10(aLStack136,param_2,aLStack296,aLStack312,aLStack328,aLStack344,aLStack360,
                     aLStack376,aLStack392,aLStack408,aLStack424);
      lib::L2CValue::operator=(aLStack216,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack424);
      lib::L2CValue::~L2CValue(aLStack408);
      lib::L2CValue::~L2CValue(aLStack392);
      lib::L2CValue::~L2CValue(aLStack376);
      lib::L2CValue::~L2CValue(aLStack360);
      lib::L2CValue::~L2CValue(aLStack344);
      lib::L2CValue::~L2CValue(aLStack328);
      lib::L2CValue::~L2CValue(aLStack312);
      pLVar6 = aLStack296;
    }
  }
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0x7b23db7b8);
  lib::L2CValue::L2CValue(aLStack136,0);
  uVar4 = lib::L2CValue::operator<(aLStack136,pLVar6);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack280,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack280);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack264,iVar2);
    lib::L2CValue::L2CValue(aLStack136,0);
    uVar4 = lib::L2CValue::operator<(aLStack136,aLStack264);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack264);
    lib::L2CValue::~L2CValue(aLStack280);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack136,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
      lib::L2CValue::operator=(aLStack248,aLStack136);
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
      lib::L2CValue::operator=(aLStack248,aLStack136);
    }
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::operator!(param_9);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack1304,param_10);
      FUN_71000b5a70(param_2,aLStack1304);
      lib::L2CValue::~L2CValue(aLStack1304);
    }
    lib::L2CValue::L2CValue
              (aLStack136,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_ARTICLE_GENERATION);
    iVar2 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack136,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack264,0x2a1c9f0763);
    iVar2 = lib::L2CValue::as_integer(aLStack136);
    HVar8 = lib::L2CValue::as_hash(aLStack264);
    app::lua_bind::LinkModule__send_event_parents_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,HVar8);
    lib::L2CValue::~L2CValue(aLStack264);
    lib::L2CValue::~L2CValue(aLStack136);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0xad4d40fc9);
  lib::L2CValue::L2CValue(aLStack136,0.0);
  lib::L2CValue::operator+(pLVar6,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue
            (aLStack136,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
  fVar9 = (float)lib::L2CValue::as_number(aLStack264);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar9,iVar2);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack264);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack216,0xaa3d33f5f);
  lib::L2CValue::L2CValue(aLStack136,0.0);
  lib::L2CValue::operator+(pLVar6,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue
            (aLStack136,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_Y);
  fVar9 = (float)lib::L2CValue::as_number(aLStack264);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar9,iVar2);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue
            (aLStack264,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  iVar3 = lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue
            (aLStack136,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_ARTICLE_WITH_TORCH);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(param_1,aLStack248);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}


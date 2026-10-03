
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e970(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_TOONLINK);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_YOUNGLINK);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710000ea54;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_HOOKSHOT);
    lib::L2CValue::operator=(aLStack112,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TOONLINK_GENERATE_ARTICLE_HOOKSHOT);
    lib::L2CValue::operator=(aLStack112,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710000ea54:
  lib::L2CValue::L2CValue(aLStack96,0xa02480224);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TOONLINK_HOOKSHOT_STATUS_KIND_PULL);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__change_status_impl(param_2->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack128,0x1287c399ec);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_2->moduleAccessor,iVar2,HVar6,-1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,FUN_710000ec80);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}


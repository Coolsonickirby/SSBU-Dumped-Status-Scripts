
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038ed0(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::MotionModule__remove_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,false);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack128,0x6218568e4);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,true);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,false);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  fVar6 = (float)lib::L2CValue::as_number(aLStack144);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  bVar2 = lib::L2CValue::as_bool(aLStack192);
  fVar8 = (float)lib::L2CValue::as_number(aLStack208);
  bVar3 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,HVar5,fVar6,fVar7,
             (bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar8,(bool)(bVar3 & 1),true,false);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::MotionModule__set_rate_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,fVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}


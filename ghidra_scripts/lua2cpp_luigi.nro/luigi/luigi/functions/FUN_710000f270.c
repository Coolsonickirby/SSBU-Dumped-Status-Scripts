
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f270(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_SPECIAL_S_CHARGE_WORK_FLOAT_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0xca3dc30e5);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUIGI_STATUS_SPECIAL_S_CHARGE_FLAG_FLASHING);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__req_common_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,0.0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_SPECIAL_S_CHARGE_FLAG_FLASHING);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x10c2ff9b0d);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUIGI_STATUS_SPECIAL_S_CHARGE_WORK_FLOAT_CHARGE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__add_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026840(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xe694f9d4f);
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,true);
  HVar5 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::EffectModule__kill_kind_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(bool)(bVar1 & 1),
             (bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_DIRECTION_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLAG_DIRECTION_EFFECT_LAST_VISIBLE);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100037b60(long param_1)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE_VANISH);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue
            (aLStack48,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_NEXT_DAMAGE_VANISH_END);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_VANISH_CANCEL);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_INT_FOLLOW_MOTION);
  lVar2 = lib::L2CValue::as_integer(aLStack48);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}


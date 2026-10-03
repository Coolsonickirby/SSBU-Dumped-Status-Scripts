
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100189720(void *param_1)

{
  GroundCorrectKind GVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_SITUATION_KIND_GROUND);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  GVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}


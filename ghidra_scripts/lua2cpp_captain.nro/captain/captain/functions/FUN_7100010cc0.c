
void FUN_7100010cc0(void *param_1)

{
  GroundCorrectKind GVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  GVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}


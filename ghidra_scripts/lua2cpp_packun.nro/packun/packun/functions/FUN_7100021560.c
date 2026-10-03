
void FUN_7100021560(long param_1)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::GroundModule__set_offset_x_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::GroundModule__set_offset_y_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}


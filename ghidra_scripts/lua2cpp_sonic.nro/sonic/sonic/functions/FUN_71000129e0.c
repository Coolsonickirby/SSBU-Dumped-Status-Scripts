
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000129e0(long param_1)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::ModelModule__set_depth_offset_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack64,0);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::LinkModule__set_node_depth_offset_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}


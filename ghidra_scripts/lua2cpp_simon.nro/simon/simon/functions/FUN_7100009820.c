
void FUN_7100009820(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack48,true);
    lib::L2CValue::operator=(param_1,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}


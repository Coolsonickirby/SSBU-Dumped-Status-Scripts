
void FUN_710002d3b0(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  uVar3 = 0;
  do {
    lib::L2CValue::L2CValue(aLStack64,uVar3);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::PhysicsModule__set_2nd_disable_collision_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1c);
  return;
}


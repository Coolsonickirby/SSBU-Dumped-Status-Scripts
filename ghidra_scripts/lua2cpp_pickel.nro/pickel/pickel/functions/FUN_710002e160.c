
void FUN_710002e160(L2CValue *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar3 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x1dfe662709);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(param_1,fVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x1916063633);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(param_1,fVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}


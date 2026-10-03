
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026980(L2CValue *param_1,long param_2)

{
  ulong uVar1;
  L2CValue *this;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100006390(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack80,0x1e25068543);
      uVar1 = lib::L2CValue::as_integer(aLStack64);
      uVar2 = lib::L2CValue::as_integer(aLStack80);
      fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(param_1,fVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack80,0x21a28ba08a);
      uVar1 = lib::L2CValue::as_integer(aLStack64);
      uVar2 = lib::L2CValue::as_integer(aLStack80);
      fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(param_1,fVar3);
    }
  }
  else if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack80,0x171353c7d4);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(param_1,fVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack80,0x1a83998635);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(param_1,fVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}


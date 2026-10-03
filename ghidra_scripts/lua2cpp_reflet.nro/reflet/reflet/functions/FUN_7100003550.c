
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003550(L2CFighterReflet *this,L2CValue *return_value)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  L2CValue *in_x1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,in_x1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ROULETTE_STEP_START);
  uVar1 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x4cbe5a331);
    lib::L2CValue::L2CValue(aLStack80,0x9660d4bc7);
    lVar2 = lib::L2CValue::as_integer(aLStack64);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar2,lVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x59ae5c70f);
    lib::L2CValue::L2CValue(aLStack80,0xa6ff84161);
    lVar2 = lib::L2CValue::as_integer(aLStack64);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar2,lVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialHi3_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_HI4);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::EffectModule__kill_all_impl
              (this->moduleAccessor,uVar3,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


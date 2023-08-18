
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialHi2_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_HI3);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_HI4);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_EFFECT_SUB_ATTRIBUTE_SYNC_STOP);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      bVar2 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::EffectModule__kill_all_impl
                (this->moduleAccessor,uVar3,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


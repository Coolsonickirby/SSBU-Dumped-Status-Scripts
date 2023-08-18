
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialNLoop_end(L2CFighterRoy *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_LOOP);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_TURN);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xe6b6dace4);
      HVar3 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::ControlModule__stop_rumble_kind_impl(this->moduleAccessor,HVar3,0x50000000);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPalutena::status::Final_end(L2CFighterPalutena *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PALUTENA_STATUS_KIND_FINAL_WAIT);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1391c29f15);
    HVar2 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar2,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

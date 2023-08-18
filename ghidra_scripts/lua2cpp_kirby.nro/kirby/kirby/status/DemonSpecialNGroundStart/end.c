
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DemonSpecialNGroundStart_end(L2CFighterKirby *this,L2CValue *return_value)

{
  VisibilityMode VVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DEMON_SPECIAL_N_GROUND_SHOOT);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_VISIBILITY_MODE_GUARANTEE);
    VVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::VisibilityModule__set_visibility_mode_impl(this->moduleAccessor,VVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


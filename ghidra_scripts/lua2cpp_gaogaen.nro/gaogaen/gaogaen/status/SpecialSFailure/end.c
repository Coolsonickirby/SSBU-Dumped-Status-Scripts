
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSFailure_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000206c0(aLStack80,this);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DOWN_SPOT);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


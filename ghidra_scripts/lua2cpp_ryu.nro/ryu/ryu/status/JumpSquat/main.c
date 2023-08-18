
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::JumpSquat_main(L2CFighterRyu *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_status_JumpSquat_check_stick_lr_update(this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_DASH_BACK);
    uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,1);
      uVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,uVar1);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DASH);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,aLStack80);
  lua2cpp::L2CFighterCommon::status_JumpSquat_common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,JumpSquat_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


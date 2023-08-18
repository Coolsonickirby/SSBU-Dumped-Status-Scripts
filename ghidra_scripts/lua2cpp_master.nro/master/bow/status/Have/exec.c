
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterBow::status::Have_exec(L2CWeaponMasterBow *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0xf3a6aace3);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    fVar4 = (float)app::lua_bind::LinkModule__get_parent_motion_rate_impl
                             (this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_LINK_NO_CONSTRAINT);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::LinkModule__get_parent_motion_whole_rate_impl
                             (this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    fVar4 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


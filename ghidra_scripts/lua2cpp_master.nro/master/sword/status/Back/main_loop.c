
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterSword::status::Back_main_loop(L2CWeaponMasterSword *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_710003d62c;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::LinkModule__get_parent_situation_kind_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar4);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x12eeb17698);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xeace38357);
      HVar4 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
      goto LAB_710003d614;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xeace38357);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0x12eeb17698);
      HVar4 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
LAB_710003d614:
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710003d62c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


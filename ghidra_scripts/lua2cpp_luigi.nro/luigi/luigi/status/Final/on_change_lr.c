
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::Final_on_change_lr(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,HVar4);
  lib::L2CValue::L2CValue(aLStack64,0xb9e61061f);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xd1cc74bdd);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xf9b673ae9);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x11714e7467);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) goto LAB_71000045dc;
        lib::L2CValue::L2CValue(aLStack64,0xf9b673ae9);
        HVar4 = lib::L2CValue::as_hash(aLStack64);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x11714e7467);
        HVar4 = lib::L2CValue::as_hash(aLStack64);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,false);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::MotionModule__set_flip_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),true,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xb9e61061f);
      HVar4 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xd1cc74bdd);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::MotionModule__set_flip_impl(this->moduleAccessor,(bool)(bVar1 & 1),true,false);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_71000045dc:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_LINK_NO_OBAKYUMU);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_LINK_NO_OBAKYUMU);
    lib::L2CValue::L2CValue(aLStack96,0x203dd64e2e);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


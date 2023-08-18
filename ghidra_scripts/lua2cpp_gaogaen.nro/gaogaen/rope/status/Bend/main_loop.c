
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGaogaenRope::status::Bend_main_loop(L2CWeaponGaogaenRope *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xa031ce500);
  lib::L2CValue::L2CValue(aLStack80,0x9b0e876e4);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,fVar7);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_GAOGAEN_ROPE_LINK_NO_ATTACH);
    lib::L2CValue::L2CValue(aLStack80,0x226f4131dd);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAOGAEN_ROPE_LINK_NO_ATTACH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_GAOGAEN_ROPE_LINK_NO_ATTACH);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAOGAEN_ROPE_INSTANCE_WORK_ID_INT_GAOGAEN_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack96,0x25c84e475a);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_GAOGAEN_ROPE_INSTANCE_WORK_ID_INT_REBOUND_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar7);
    uVar4 = lib::L2CValue::operator_(aLStack64,aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar7,true);
    }
    lib::L2CValue::L2CValue(aLStack64,&DAT_7100028360);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


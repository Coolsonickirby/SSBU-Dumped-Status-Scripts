
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLink::status::ShieldGuard_main(L2CFighterLink *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar3 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_KIND_SHIELD_GUARD);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,HVar5);
      lib::L2CValue::L2CValue(aLStack80,0xaa60712ea);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_710000a1a8;
      goto LAB_710000a0d0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710000a0d0:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_SHIELD_GUARD_WORK_FLAG_SQUAT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    this_00 = aLStack80;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710000a1a8:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_SHIELD_GUARD_WORK_FLAG_SQUAT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xc95458ab6);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIELD_INSTANCE_WORK_ID_FLAG_WAIT_SHIELD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,ShieldGuard_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


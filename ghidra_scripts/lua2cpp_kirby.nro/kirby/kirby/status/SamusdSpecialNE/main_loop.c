
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SamusdSpecialNE_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100210a80;
    }
    iVar3 = 1;
    goto LAB_7100210ce4;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100210a80:
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xb0b65a417);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
      goto LAB_7100210c40;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xffcf7a120);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
LAB_7100210c40:
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,&DAT_7100210db0);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    return;
  }
  iVar3 = 0;
LAB_7100210ce4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


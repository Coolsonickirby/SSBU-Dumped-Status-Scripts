
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKamui::status::SpecialS_main(L2CFighterKamui *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_ATTACK);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack208,0xe01b71074);
  lib::L2CValue::L2CValue(aLStack224,0xe01b71074);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_S_JUMP);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_AIR_S_JUMP);
  lib::L2CValue::L2CValue(aLStack272,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack288,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  if ((uVar4 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100007eb0;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100007eb0;
    }
    lib::L2CValue::L2CValue(aLStack96,false);
  }
  else {
LAB_7100007eb0:
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      GVar3 = lib::L2CValue::as_integer(aLStack288);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      iVar2 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::operator_(aLStack112,aLStack224);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      GVar3 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      iVar2 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::operator_(aLStack112,aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar6,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,true);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


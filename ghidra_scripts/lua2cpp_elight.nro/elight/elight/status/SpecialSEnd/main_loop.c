
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialSEnd_main_loop(L2CFighterElight *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100012710:
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) != 0) goto LAB_710001295c;
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,fVar8);
          lib::L2CValue::L2CValue(aLStack144,0xdb8bd3614);
          HVar7 = lib::L2CValue::as_hash(aLStack144);
          fVar8 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                                   (this->moduleAccessor,HVar7,true);
          lib::L2CValue::L2CValue(aLStack112,fVar8);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_7100012ab8;
          }
          lib::L2CValue::L2CValue(aLStack80,0x13d177a8a1);
          HVar7 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::SoundModule__play_landing_se_impl(this->moduleAccessor,HVar7);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0xdb8bd3614);
      lib::L2CValue::L2CValue(aLStack112,0x1158d0953d);
      lib::L2CValue::L2CValue(aLStack144,true);
      lib::L2CValue::L2CValue(aLStack176,aLStack80);
      lib::L2CValue::L2CValue(aLStack192,aLStack112);
      lib::L2CValue::L2CValue(aLStack208,aLStack144);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack240,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
LAB_7100012ab8:
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710001295c;
      goto LAB_7100012710;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar2 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710001295c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


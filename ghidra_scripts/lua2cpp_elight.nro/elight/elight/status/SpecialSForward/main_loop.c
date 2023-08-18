
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialSForward_main_loop(L2CFighterElight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack304 [16];
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100012d38:
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) goto LAB_7100012de4;
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x17fe555419);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,iVar5);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,false);
      this_00 = &this->globalTable;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      uVar6 = lib::L2CValue::operator__(aLStack128,pLVar8);
      if ((uVar6 & 1) == 0) goto LAB_71000130a8;
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator_(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0x17143caac9);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_CHECK_CLIFF);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_NEAR_CLIFF);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar6 = lib::L2CValue::operator__(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar8 = aLStack208;
        }
        else {
          fVar10 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack256,fVar10);
          lib::L2CValue::operator_(aLStack176,aLStack256);
          fVar10 = (float)lib::L2CValue::as_number(aLStack240);
          bVar3 = app::lua_bind::GroundModule__is_ottotto_impl(this->moduleAccessor,fVar10);
          lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack208);
          if ((uVar6 & 1) == 0) goto LAB_71000130a0;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_NEAR_CLIFF);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          pLVar8 = aLStack112;
        }
        lib::L2CValue::_L2CValue(pLVar8);
      }
LAB_71000130a0:
      lib::L2CValue::_L2CValue(aLStack176);
LAB_71000130a8:
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_TILT);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,false);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack208,0xd36e38937);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
        uVar6 = lib::L2CValue::operator__(aLStack112,pLVar8);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_TILT);
          iVar5 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0x976c3b29b);
        lib::L2CValue::L2CValue(aLStack208,0xd2b3a620b);
        HVar9 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack224,HVar9);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack240,fVar10);
        fVar10 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack256,fVar10);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,true);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = lib::L2CValue::operator__(aLStack224,aLStack192), (uVar6 & 1) != 0)) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = lib::L2CValue::operator__(aLStack224,aLStack208), (uVar6 & 1) == 0)) {
            HVar9 = lib::L2CValue::as_hash(aLStack208);
            fVar10 = (float)lib::L2CValue::as_number(aLStack240);
            fVar11 = (float)lib::L2CValue::as_number(aLStack256);
            fVar12 = (float)lib::L2CValue::as_number(aLStack272);
            bVar3 = lib::L2CValue::as_bool(aLStack288);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar9,fVar10,fVar11,fVar12,(bool)(bVar3 & 1),false);
          }
        }
        else {
          HVar9 = lib::L2CValue::as_hash(aLStack192);
          fVar10 = (float)lib::L2CValue::as_number(aLStack240);
          fVar11 = (float)lib::L2CValue::as_number(aLStack256);
          fVar12 = (float)lib::L2CValue::as_number(aLStack272);
          bVar3 = lib::L2CValue::as_bool(aLStack288);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar9,fVar10,fVar11,fVar12,(bool)(bVar3 & 1),false);
        }
        lib::L2CValue::L2CValue(aLStack304,aLStack144);
        lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      return;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ELIGHT_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack128,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70))
    ;
    lib::L2CValue::_L2CValue(aLStack128);
    lVar2 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) goto LAB_7100012de4;
      goto LAB_7100012d38;
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lVar2 = -0x70;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100012de4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


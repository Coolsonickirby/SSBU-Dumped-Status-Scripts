
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialHiEnd_main_loop(L2CFighterSheik *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100007d94:
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(this_00,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::operator_(aLStack112);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xed8a31e01);
          fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack112,fVar7);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xed8a31e01);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_TRANSITION_TERM_ID_0);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_TRANSITION_TERM_ID_1);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,&DAT_71000088a0);
        lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::operator_(aLStack112);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
          fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack112,fVar7);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_TRANSITION_TERM_ID_0);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_TRANSITION_TERM_ID_1);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,&DAT_71000084d0);
        lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100007d94;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}


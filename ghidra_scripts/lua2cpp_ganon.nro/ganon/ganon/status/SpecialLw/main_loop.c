
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialLw_main_loop(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100013960:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar3 = 1;
    goto LAB_7100013f38;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_START_SITUATION);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = aLStack112;
      goto LAB_7100013eb4;
    }
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::L2CValue(aLStack80,2.0);
    uVar7 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_KICK_END_SITUATION_AG);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_7100013960;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_FLOAT_GANON_KICK_START_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar7 = lib::L2CValue::operator__(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,(int)GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_KICK_WALL_CHECK)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) goto LAB_7100013d0c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_KIND_SPECIAL_LW_WALL_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_7100013960;
      }
LAB_7100013cfc:
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_LEFT._4_4_);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_7100013cfc;
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_KICK_WALL_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_KIND_SPECIAL_LW_WALL_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_7100013960;
      }
    }
LAB_7100013d0c:
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::_L2CValue(aLStack96);
          goto LAB_7100013d54;
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100013f30;
        goto LAB_7100013d54;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100013d54:
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        FUN_7100010bc0(this);
        goto LAB_7100013f30;
      }
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
      GVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
    }
    pLVar8 = aLStack96;
LAB_7100013eb4:
    lib::L2CValue::_L2CValue(pLVar8);
  }
LAB_7100013f30:
  iVar3 = 0;
LAB_7100013f38:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialLw_main_loop(L2CFighterCaptain *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KICK_START_SITUATION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100012510;
      lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100012510;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
LAB_7100012828:
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KICK_WALL_CHECK);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_LW_WALL_END);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            goto LAB_7100012500;
          }
        }
LAB_7100012838:
        this_00 = &this->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
LAB_71000128ac:
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) goto LAB_7100012510;
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) goto LAB_7100012510;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) goto LAB_71000128ac;
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          FUN_7100010cc0(this);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          FUN_7100011140(this);
        }
        goto LAB_7100012510;
      }
      lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_7100012828;
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KICK_WALL_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100012838;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_LW_WALL_END);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
LAB_7100012500:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100012510:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


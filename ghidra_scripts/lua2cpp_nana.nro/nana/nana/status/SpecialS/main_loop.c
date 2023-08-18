
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialS_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this_00;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001eaec:
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar4 & 1U) == 0) {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        cVar1 = (char)&stack0xfffffffffffffff0;
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_FALL_SPECIAL);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar4 & 1U) == 0) goto LAB_710001ec78;
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lVar2 = -0x30;
        goto LAB_710001ec54;
      }
LAB_710001ec78:
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,false);
        FUN_710001de50(aLStack80,this,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_SUB_FIGHTER);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
LAB_710001ee3c:
          lib::L2CValue::_L2CValue(aLStack128);
          this_00 = aLStack144;
LAB_710001ee48:
          lib::L2CValue::_L2CValue(this_00);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_POPO_LINK_NO_PARTNER);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          bVar3 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack64,true);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack176);
            goto LAB_710001ee3c;
          }
          lib::L2CValue::L2CValue(aLStack64,true);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,0x2a6fca0d7f);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack128);
            this_00 = aLStack64;
            goto LAB_710001ee48;
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_POPO_STATUS_SPECIAL_S_WORK_INT_AIR_HOP_BUTTON_TRIGGER_COUNTER);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar5);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar6 = lib::L2CValue::operator_(aLStack64,aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_POPO_STATUS_SPECIAL_S_WORK_INT_AIR_HOP_BUTTON_TRIGGER_COUNTER)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_POPO_STATUS_SPECIAL_S_WORK_INT_AIR_HOP_BUTTON_TRIGGER_COUNTER
                  );
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar5);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_POPO_STATUS_SPECIAL_S_FLAG_AIR_HOP_BUTTON_TRIGGER);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
      iVar5 = 0;
      goto LAB_710001ec60;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x40;
LAB_710001ec54:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710001eaec;
    }
  }
  iVar5 = 1;
LAB_710001ec60:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}


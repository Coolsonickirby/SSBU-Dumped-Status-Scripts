
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialHi12_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_TENCHI_KICK_SHIFT_RESERVE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar4 = aLStack96;
LAB_710003ce1c:
          lib::L2CValue::_L2CValue(pLVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
LAB_710003cdf4:
            lib::L2CValue::L2CValue
                      (aLStack64,
                       _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_TENCHI_KICK_IS_2_SHIFT_INPUT);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            pLVar4 = aLStack64;
            goto LAB_710003ce1c;
          }
          lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) goto LAB_710003cdf4;
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_TENCHI_KICK_SHIFT)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_TENCHI_KICK_IS_2_SHIFT_INPUT)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              goto LAB_710003cf0c;
            }
            lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar1 & 1U) == 0) goto LAB_710003cf58;
          }
          else {
LAB_710003cf0c:
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_HI1_3);
          lib::L2CValue::L2CValue(aLStack80,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
        }
LAB_710003cf58:
        iVar3 = 0;
        goto LAB_710003ccac;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_710003ccac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


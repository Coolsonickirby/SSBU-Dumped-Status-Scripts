
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStep2s_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710002ee48;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      goto LAB_710002eea4;
    }
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002ee48:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_710002ee9c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710002ef48;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2S);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710002eeac;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_710002f514;
          lib::L2CValue::L2CValue(aLStack80,1);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::operator_(aLStack96,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0x115d6fd7da);
          lib::L2CValue::L2CValue(aLStack144,0x129d89d5a2);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack144,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,true);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack112);
              pLVar5 = aLStack144;
LAB_710002f630:
              lib::L2CValue::_L2CValue(pLVar5);
            }
            else {
              lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_RAGE_SYSTEM)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack176);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack80,true);
              uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack144);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
                lib::L2CValue::L2CValue(aLStack112,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
                lib::L2CValue::_L2CValue(aLStack112);
                pLVar5 = aLStack80;
                goto LAB_710002f630;
              }
            }
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_710002f5e0;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          goto LAB_710002f50c;
        }
        lib::L2CValue::L2CValue(aLStack80,-1);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        goto LAB_710002f504;
      }
    }
    else {
LAB_710002ef48:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,-1);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_710002f504:
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_710002f514;
          lib::L2CValue::L2CValue(aLStack80,1);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::operator_(aLStack96,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0x115d6fd7da);
          lib::L2CValue::L2CValue(aLStack144,0xad4dfce77);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack144,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
              lib::L2CValue::L2CValue(aLStack112,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_2_TO_2L);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
              lib::L2CValue::L2CValue(aLStack112,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
            }
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002f5e0:
            lib::L2CValue::_L2CValue(aLStack96);
            return;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_HOLD_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        }
LAB_710002f50c:
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
LAB_710002f514:
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710002ee9c:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002eea4:
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710002eeac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


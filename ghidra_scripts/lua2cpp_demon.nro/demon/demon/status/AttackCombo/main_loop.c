
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackCombo_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
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
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
LAB_71000317dc:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_71000317dc;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_7100031910;
  }
  else {
LAB_7100031910:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_COMBO);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,4);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,6);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_71000319c0;
      lib::L2CValue::L2CValue(aLStack80,7);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_71000319c0;
    }
    else {
LAB_71000319c0:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI_COMMAND);
        lib::L2CValue::operator_(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623STRICT);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_323CATCH);
            lib::L2CValue::operator_(pLVar5,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar2 & 1U) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623A);
              lib::L2CValue::operator_(pLVar5,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar2 & 1U) == 0) {
                pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6N6AB);
                lib::L2CValue::operator_(pLVar5,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((bVar2 & 1U) == 0) {
                  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_NONE);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_1);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_CATCH_COMMAND);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2S);
        }
        lib::L2CValue::operator_(aLStack128,aLStack160);
        pLVar5 = aLStack160;
LAB_7100031dd4:
        lib::L2CValue::_L2CValue(pLVar5);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623ALONG);
        lib::L2CValue::operator_(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
            lib::L2CValue::operator_(aLStack128,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
            lib::L2CValue::operator_(aLStack128,aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623BLONG);
        lib::L2CValue::operator_(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
            lib::L2CValue::operator_(aLStack128,aLStack80);
            pLVar5 = aLStack80;
            goto LAB_7100031dd4;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
LAB_7100031f24:
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar5 = aLStack160;
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          goto LAB_7100031f24;
        }
        bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator__(aLStack208,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) == 0) goto LAB_7100031f34;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        pLVar5 = aLStack80;
      }
      lib::L2CValue::_L2CValue(pLVar5);
    }
LAB_7100031f34:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_CHANGE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_CHANGE_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_7100031280(this,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160,0x2b94de0d96);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_16);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_7100032254;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100032254;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_71000321d4;
    lib::L2CValue::L2CValue(aLStack80,aLStack128);
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
LAB_71000321d4:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100032254:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


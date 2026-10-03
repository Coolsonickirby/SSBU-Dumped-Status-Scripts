
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022720(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = &param_2->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
LAB_7100022bc4:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
        lib::L2CValue::operator&(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_AIR);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
          goto LAB_7100022e50;
        }
      }
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
      lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                (param_2,(L2CValue)0x70);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar1 & 1U) != 0) goto LAB_7100022e60;
    }
    bVar1 = false;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
    lib::L2CValue::operator&(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
      lib::L2CValue::operator&(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator&(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          lua2cpp::L2CFighterCommon::sub_check_command_guard(param_2);
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                      (param_2,(L2CValue)0x80);
            lib::L2CValue::L2CValue(aLStack80,true);
            uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((uVar6 & 1) == 0) goto LAB_7100022bc4;
            goto LAB_7100022e60;
          }
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      }
    }
LAB_7100022e50:
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
LAB_7100022e60:
    bVar1 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}


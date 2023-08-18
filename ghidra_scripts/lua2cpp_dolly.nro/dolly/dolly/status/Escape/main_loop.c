
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::Escape_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710002278c;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_ESCAPE_WORK_INT_ESCAPE_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ESCAPE_ATTACK_MODE_ENABLE);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_CATCH);
      lib::L2CValue::operator_(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        FUN_7100005bc0(aLStack96,this);
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar1 = lib::L2CValue::operator__(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xa0);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1) != 0) goto LAB_710002278c;
    }
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
LAB_71000223c4:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    goto LAB_710002278c;
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      goto LAB_71000223c4;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_STATUS_ESCAPE_WORK_FLAG_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
      lib::L2CValue::L2CValue
                (aLStack80,
                 _FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_R_COMMAND |
                 _FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL_COMMAND |
                 _FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_COMMAND |
                 _FIGHTER_PAD_CMD_CAT4_FLAG_SUPER_SPECIAL2_R_COMMAND);
      lib::L2CValue::operator_(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        uVar4 = app::lua_bind::FighterControlModuleImpl__special_command_236236_step_impl
                          (this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack144,uVar4 & 0xff);
        lib::L2CValue::L2CValue(aLStack80,6);
        uVar5 = lib::L2CValue::operator_(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          uVar4 = app::lua_bind::FighterControlModuleImpl__special_command_214214_step_impl
                            (this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack160,uVar4 & 0xff);
          lib::L2CValue::L2CValue(aLStack80,6);
          uVar5 = lib::L2CValue::operator_(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            uVar4 = app::lua_bind::FighterControlModuleImpl__special_command_21416_step_impl
                              (this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack176,uVar4 & 0xff);
            lib::L2CValue::L2CValue(aLStack80,5);
            uVar5 = lib::L2CValue::operator_(aLStack176,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) != 0) {
              uVar4 = app::lua_bind::FighterControlModuleImpl__special_command_23634_step_impl
                                (this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack192,uVar4 & 0xff);
              lib::L2CValue::L2CValue(aLStack80,5);
              uVar5 = lib::L2CValue::operator_(aLStack192,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_ESCAPE_ATTACK);
                iVar3 = lib::L2CValue::as_integer(aLStack80);
                app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI3);
                lib::L2CValue::L2CValue(aLStack112,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
                goto LAB_71000223c4;
              }
              goto LAB_7100022784;
            }
            lib::L2CValue::_L2CValue(aLStack176);
          }
          lib::L2CValue::_L2CValue(aLStack160);
        }
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
LAB_7100022784:
  lua2cpp::L2CFighterCommon::sub_escape_check_rumble(this);
LAB_710002278c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


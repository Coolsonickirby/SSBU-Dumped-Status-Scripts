
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpinJump_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
LAB_71000160f4:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar3);
        goto LAB_71000160f4;
      }
    }
    lua2cpp::L2CFighterCommon::status_Jump_Main(this);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_SONIC_STATUS_SPIN_JUMP_WORK_ID_FLAG_ENABLE_JUMP_AERIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          uVar4 = lib::L2CValue::operator_(aLStack112,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
            lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack112,0xcce8375ba);
            uVar4 = lib::L2CValue::as_integer(aLStack96);
            uVar6 = lib::L2CValue::as_integer(aLStack112);
            fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack80,fVar7);
            uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
LAB_7100016408:
              lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_JUMP);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                                (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) == 0) goto LAB_710001637c;
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack96,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            }
            else {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
              lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack160,0xc14e04625);
              uVar4 = lib::L2CValue::as_integer(aLStack144);
              uVar6 = lib::L2CValue::as_integer(aLStack160);
              iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack128,iVar3);
              uVar4 = lib::L2CValue::operator_(pLVar5,aLStack128);
              if ((uVar4 & 1) == 0) {
                bVar2 = 0;
              }
              else {
                bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                                  (this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
                lib::L2CValue::_L2CValue(aLStack176);
              }
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar2 & 1) == 0) goto LAB_7100016408;
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack96,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            }
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            goto LAB_710001648c;
          }
        }
      }
LAB_710001637c:
      iVar3 = 0;
      goto LAB_7100016494;
    }
  }
LAB_710001648c:
  iVar3 = 1;
LAB_7100016494:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::SuperLiftTurn_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100026354:
    this_00 = &this->globalTable;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
LAB_710002650c:
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
          goto LAB_710002650c;
        }
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TURN_FLAG_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ITEM_THROW_HEAVY);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_71000263bc;
        }
      }
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
LAB_7100026620:
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TURN_FLAG_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          goto LAB_7100026620;
        }
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_JUMP_SQUAT_B);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_71000263bc;
        }
      }
      fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0xcce8375ba);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xc14e04625);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        uVar5 = lib::L2CValue::operator_(pLVar4,aLStack160);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_TURN_FLAG_TURN);
          iVar3 = lib::L2CValue::as_integer(aLStack224);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
          if ((bVar2 & 1U) == 0) {
            uVar5 = 0;
          }
          else {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
            uVar5 = uVar5 & 0xffffffff;
            lib::L2CValue::_L2CValue(aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack96,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            goto LAB_71000263bc;
          }
        }
      }
      iVar3 = 0;
      goto LAB_7100026868;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100026354;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_WAIT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
LAB_71000263bc:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = 1;
LAB_7100026868:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


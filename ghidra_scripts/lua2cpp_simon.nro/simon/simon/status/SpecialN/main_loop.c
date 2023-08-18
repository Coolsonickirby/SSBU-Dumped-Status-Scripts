
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSimon::status::SpecialN_main_loop(L2CFighterSimon *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  long lVar6;
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
  L2CValue aLStack64 [16];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001c4fc:
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar3 & 1U) != 0) {
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
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
        lVar6 = -0x30;
        goto LAB_710001c760;
      }
    }
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar6);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SIMON_STATUS_SPECIAL_N_INT_MOTION_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack144,lVar6);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    lib::L2CValue::L2CValue(aLStack208,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    lib::L2CValue::L2CValue(aLStack224,GROUND_CORRECT_KIND_AIR);
    FUN_71000171d0(aLStack64,this,aLStack80,aLStack96,aLStack144,aLStack176,aLStack192,aLStack208,
                   aLStack224);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar4 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x60));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar6 = -0x40;
LAB_710001c760:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_710001c4fc;
    }
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}


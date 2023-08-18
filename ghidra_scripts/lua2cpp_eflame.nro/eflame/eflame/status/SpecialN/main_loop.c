
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::SpecialN_main_loop(L2CFighterEflame *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *this_00;
  float fVar8;
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
  
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::L2CValue(aLStack144,aLStack80);
    lib::L2CValue::L2CValue(aLStack160,aLStack96);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack208,true);
    lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack224,false);
      FUN_71000142b0(this,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_STATUS_KIND_SPECIAL_N_ATTACK);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,1);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar6 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLOAT_ATTACK_MUL);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar5);
      lib::L2CValue::_L2CValue(aLStack144);
      this_00 = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_STATUS_KIND_SPECIAL_N_HOLD);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      this_00 = aLStack80;
    }
    lib::L2CValue::_L2CValue(this_00);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lVar2 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  return;
}


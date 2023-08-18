
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::SpecialHi_main_loop(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CAgent *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_STATUS_WORK_ID_FLAG_SPECIAL_HI_PRECEDE_INPUT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_COMMAND_ATTACK_AIR_KIND_N);
      this_00 = &this->globalTable;
      pLVar8 = (L2CValue *)0x1a;
      pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CAgent::math_abs(pLVar5,pLVar8);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0x149771081d);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
LAB_71000196ec:
        bVar1 = app::lua_bind::ControlModule__is_stick_side_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar6 = lib::L2CValue::operator__(aLStack80,pLVar8);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_HI);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,fVar9);
          lib::L2CValue::operator_(pLVar8,aLStack128);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_B);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_F);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      else {
        pLVar8 = (L2CValue *)0x1b;
        pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
        lib::L2CAgent::math_abs(pLVar5,pLVar8);
        lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack208,0x14e076388b);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar9);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_71000196ec;
      }
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_PIKMIN_STATUS_WORK_ID_INT_SPECIAL_HI_PRECEDE_INPUT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      iVar3 = 0;
      goto LAB_7100019938;
    }
    FUN_7100018de0(aLStack80,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_WAIT);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  iVar3 = 1;
LAB_7100019938:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


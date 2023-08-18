
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialHi_main_loop(L2CFighterGamewatch *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
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
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_HI_FLAG_LANDING_ENABLE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack128,0xd07d69a9b);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar6 = lib::L2CValue::as_integer(aLStack128);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar7);
          lib::L2CValue::L2CValue(aLStack64,0.0);
          uVar5 = lib::L2CValue::operator_(aLStack64,aLStack96);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING);
            lib::L2CValue::operator_(aLStack80,aLStack64);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
            lib::L2CValue::operator_(aLStack80,aLStack64);
          }
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,aLStack80);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          lib::L2CValue::_L2CValue(aLStack80);
          return;
        }
      }
      iVar3 = 0;
      goto LAB_710002cd8c;
    }
    iVar3 = app::lua_bind::ControlModule__get_attack_air_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_HI_WORK_INT_ATTACK_AIR_KIND)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_710002cd8c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


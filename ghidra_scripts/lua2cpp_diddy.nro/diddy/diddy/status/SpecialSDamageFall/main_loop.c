
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialSDamageFall_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CAgent *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_710002479c;
  }
  lua2cpp::L2CFighterCommon::check_damage_fall_transition(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_DAMAGE_FALL_WORK_INT_NO_TRANSITION_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_DOWN);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
LAB_71000245a4:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_KNOCKOUT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        pLVar5 = (L2CValue *)0x1a;
        this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
        lib::L2CAgent::math_abs(this_00,pLVar5);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_DAMAGE_FALL_TO_FALL);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_STATUS_DAMAGE_FALL_WORK_INT_NO_TRANSITION_FRAME);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            lib::L2CValue::L2CValue(aLStack80,0);
            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_HAMMER);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
              lib::L2CValue::operator_(aLStack96);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
                lib::L2CValue::L2CValue(aLStack96,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
                goto LAB_7100024590;
              }
            }
          }
        }
      }
      lua2cpp::L2CFighterCommon::sub_damage_fall_uniq_process_main(this);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_71000245a4;
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DOWN);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100024590:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  iVar3 = 0;
LAB_710002479c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


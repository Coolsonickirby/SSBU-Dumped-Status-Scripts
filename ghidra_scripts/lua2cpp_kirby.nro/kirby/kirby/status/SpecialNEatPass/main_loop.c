
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNEatPass_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100231b74:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
      uVar5 = uVar5 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack64,10.0);
      uVar5 = lib::L2CValue::operator__(aLStack64,pLVar4);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      FUN_7100230210(this);
      iVar3 = 0;
      goto LAB_7100231ce4;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100231b74;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_LANDING);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  iVar3 = 1;
LAB_7100231ce4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialHi_main_loop(L2CFighterSheik *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  int iVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          FUN_710000cff0(this);
        }
      }
      iVar5 = 0;
      goto LAB_710000d604;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_HI_MOVE);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar5 = 1;
LAB_710000d604:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}


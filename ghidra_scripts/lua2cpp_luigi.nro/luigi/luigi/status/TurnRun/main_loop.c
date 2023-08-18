
void __thiscall
L2CFighterLuigi::status::TurnRun_main_loop(L2CFighterLuigi *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *this_00;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_TurnRun_Main(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
    lib::L2CValue::operator_(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      iVar2 = 0;
      goto LAB_71000121cc;
    }
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar2 = 1;
LAB_71000121cc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}


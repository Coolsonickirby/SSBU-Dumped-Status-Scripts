
void __thiscall
L2CFighterKirby::status::SnakeSpecialNHoldLanding_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  
  FUN_7100173760(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_ItemShootLanding_Common_Main(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_execFixPos_Common(this);
      iVar2 = 0;
      goto LAB_7100173730;
    }
  }
  iVar2 = 1;
LAB_7100173730:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}


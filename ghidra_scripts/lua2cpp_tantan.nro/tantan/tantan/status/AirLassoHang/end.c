
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AirLassoHang_end(L2CFighterTantan *this,L2CValue *return_value)

{
  int iVar1;
  HitStatus HVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar3,iVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_end_AirLassoHang(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


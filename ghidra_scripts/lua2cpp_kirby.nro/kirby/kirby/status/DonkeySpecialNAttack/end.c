
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DonkeySpecialNAttack_end(L2CFighterKirby *this,L2CValue *return_value)

{
  FighterFacial FVar1;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar2;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_FACIAL_SPECIAL);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  FVar1 = lib::L2CValue::as_integer(aLStack48);
  app::FighterUtil::cancel_face_motion_by_priority(pBVar2,FVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

